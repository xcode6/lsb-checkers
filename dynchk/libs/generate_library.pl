#!/usr/bin/perl

use DBI;
use strict;

# Return true if the first argument is duplicated in the rest of the argument.
sub contains
{
	my $count = -1;
	foreach my $element (@_)
	{
		$count += 1 if($element eq $_[0]);
	}
	return ($count > 0);
}


my $dbh = DBI->connect('DBI:mysql:lsb', 'happymutant', '3eyessmile')
	or die "Couldn't connect to database: " . DBI->errstr;
my $interface_q = $dbh->prepare(
'SELECT Iname, Tname, Iid, Lname
FROM Interface, Type, Header, Library
WHERE   
Itype = "Function"
AND Istatus = "Included"       
AND Tid = Ireturn
AND Iheader = Hid
AND Hlib = Lid
AND Iarch <= 2'
)
	or die "Couldn't prepare interface query: " . DBI->errstr;

my $parameter_q = $dbh->prepare(
'SELECT Tname, Pttid
FROM Parameter, Type
WHERE
   Pint = ?
   AND Ptype = Tid
ORDER BY Ppos'
) or die "Couldn't prepare parameter query: " . DBI->errstr;

my $typetype_q = $dbh->prepare(
'SELECT TTname
FROM TypeType
WHERE TTid = ?') or die "Couldn't prepare typetype query: " . DBI->errstr;

my $header_q = $dbh->prepare(
'SELECT Hname
FROM Header, HeaderGroup, Type
WHERE
       Tname = ?
   AND Theadergroup = HGid
   AND HGheader = Hid') or die "Couldn't prepare header query: " . DBI->errstr;

$interface_q->execute or die "Couldn't execute interface query: " . DBI->errstr;

my @arg_typetype;
my @arg_type;

open(ELLFILE, ">ellipsis_funcs")
	or die "Can't open the output file ellipsis_funcs: $!";
open(NOTTFILE, ">no_typetype_funcs")
	or die "Can't open the output file no_typetype_funcs: $!";
open(ZEROPARAMFILE, ">no_param_funcs")
	or die "Can't open the output file no_param_funcs: $!";	

FUNC: while(my ($func_name, $func_return, $func_id, $func_lib) = $interface_q->fetchrow_array())
{
	# Get the paramter types and typetypes.
	$parameter_q->execute($func_id) or die "Couldn't execute parameter query: " . DBI->errstr;
	my $param_num = 0;
	my $i = 0;
	my $has_typetype = 0;
	my $has_parameter = 0;
	my @header_set;
	my $h_next = 0;
	#get information about parameters
	while( my($type, $typetypeid) = $parameter_q->fetchrow_array())
	{
		#if this function has an ellipsis, don't generate the code for it.  (do it by hand)
		if($type eq "...")
		{
			print ELLFILE $func_name . "\n";
			next FUNC;
		}
		$has_typetype = 1 if($typetypeid);
		$has_parameter = 1;
		$arg_type[$param_num] = $type;

		#get the typetype name
		
		if($typetypeid)
		{
			$typetype_q->execute($typetypeid)
				or die "Couldn't execute typetype query: " . DBI->errstr;
			my ($typetype) = $typetype_q->fetchrow_array();
			$arg_typetype[$param_num] = $typetype;
		}
		else
		{
			$arg_typetype[$param_num] = "NULL_TYPETYPE";
		}

		$header_q->execute($type)
			or die "Couldn't execute header query: " . DBI->errstr;
		
		while( my($header) = $header_q->fetchrow_array() )
		{
			unless(contains($header, @header_set))
			{
				$header_set[$h_next] = $header;
				$h_next += 1;
			}
		}
		$param_num++;
	}
	
	# if the database has null typetypes for all parameters of this function
	# (or if this function has no parameters), then we're not going to create a wrapper for it.

	unless($has_parameter)
	{
		print ZEROPARAMFILE $func_name . "\n";
		next FUNC;
	}
	unless($has_typetype)
	{
		print NOTTFILE $func_name . "\n";
		next FUNC;
	}
	
	# Create .c file for interface $func_name.
	# You want to read this along with an output file or the code template.

	open(OUTFILE, ">" . $func_lib . "/" . $func_name . '.c')
		or die "Can't open output: $!";

	my ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst) =
		 localtime(time);

	print OUTFILE "// Code generated by generate_library.pl. \n";
	print OUTFILE '#include "type_tests.h"' . "\n";
	print OUTFILE "#include <dlfcn.h>\n";

	# Include any headers that include definitions of parameter data types 
	foreach my $header_val(@header_set)
	{
		print OUTFILE "#include <" . $header_val . ">\n";
	}

	# Declare funcptr, a pointer to the function that this file wraps.
	print OUTFILE 'static '. $func_return . '(*funcptr)(';
	for ($i=0; $i < $param_num; $i++)
	{
		print OUTFILE ', ' if($i > 0);
		print OUTFILE $arg_type[$i];
	}
	print OUTFILE ") = 0;\n\n";

	# Wrapper function header
	print OUTFILE $func_return . " " . $func_name . "(";
 	for ($i=0; $i < $param_num; $i++)
 	{
 		print OUTFILE ', ' if($i > 0);
 		print OUTFILE $arg_type[$i].' a'.$i;
	}
	
	# funcptr initializer
	print OUTFILE ")\n{\n\tif(!funcptr)\n\t\tfuncptr = ";
	print OUTFILE 'dlsym(RTLD_NEXT, "' . $func_name . '");' . "\n";
	
	# Call validation functions
	for ($i=0; $i < $param_num; $i++)
	{
		print OUTFILE "\n\tvalidate_" . $arg_typetype[$i] . "(a" . $i . ', "' . $func_name . '");'
			unless($arg_typetype[$i] eq "NULL_TYPETYPE");
	}

	# Call the wrapped function; return its value.
	print OUTFILE "\n\treturn funcptr(";
	for ($i=0; $i < $param_num; $i++)
	{
		print OUTFILE ", " if ($i > 0);
		print OUTFILE "a" . $i;
	}
	print OUTFILE ");\n}\n\n";

	# lsb_#func_name - just calls the wrapped function; often needed by the validation functions.
	print OUTFILE $func_return . " lsb_" . $func_name . "(";
 	for ($i=0; $i < $param_num; $i++)
 	{
 		print OUTFILE ', ' if($i > 0);
 		print OUTFILE $arg_type[$i].' a'.$i;
	}
	# funcptr initializer
	print OUTFILE ")\n{\n\tif(!funcptr)\n\t\tfuncptr = ";
	print OUTFILE 'dlsym(RTLD_NEXT, "' . $func_name . '");' . "\n";
	
	# Call the wrapped function; return its value.
	print OUTFILE "\n\treturn funcptr(";
	for ($i=0; $i < $param_num; $i++)
	{
		print OUTFILE ", " if ($i > 0);
		print OUTFILE "a" . $i;
	}
	print OUTFILE ");\n}\n";
	close OUTFILE;
}

$interface_q->finish;
$parameter_q->finish;
$typetype_q->finish;

close ELLFILE;
close NOTTFILE;
$dbh->disconnect;

