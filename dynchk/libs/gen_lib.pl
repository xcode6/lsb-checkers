#!/usr/bin/perl -w

use strict;
use DBI;
use Getopt::Std;
use IO::Handle;

### Get environment variables

use Env qw(LSBUSER LSBDBPASSWD LSBDB LSBDBHOST);

my($DBName) = $LSBDB;
my($DBUser) = $LSBUSER;
my($DBPass) = $LSBDBPASSWD;
my($DBHost) = $LSBDBHOST;

##############################
# Option handlers
##############################

my (%options);
my($interface_WHERE_add); my($interface_FROM_add);

getopts('d:u:p:o:hl:o:', \%options);

if (exists($options{'h'}))
{
	print STDERR <<"EOM"
$0: generate interface wrapper functions for the dynchk library.
Usage $0 [-d db_name] [-u username] [-p password] [-o hostname] [-h]
 [-l lib1,lib2,lib3,...] [-g libgroup1,libgroup2,libgroup3,...]
    -h           Display this help message
    -d db_name   Database name
    -u username  Name of user for db access
    -p password  Password for db access
    -o hostname  Hostname for DB
    -l l1,l2,... Comma-delimited list of libraries
    -g g1,g2,... Comma-delimited list of libgroups
         
    If -l or -g are specified, every interface wrapper in
	the listed libraries or libgroups will be generated.  
	Without either, all interface wrappers will be generated.

    Examples:
    $0 -g "System Calls","X Windows System Interface"
    $0 -l libc,libX11
    $0 -l libm -g Curses,"String Functions"
EOM
    ;
	exit(1);
}

$DBUser = $options{'u'} if exists($options{'u'});
$DBPass = $options{'p'} if exists($options{'p'});
$DBHost = $options{'o'} if exists($options{'o'});
$DBName = $options{'d'} if exists($options{'d'});

### Parse Lib and LibGroup options - turn comma-list into query conditions.
if (exists($options{'l'}) && exists($options{'g'}))
{
	$interface_FROM_add = ", LGInt, LibGroup\n";
	$interface_WHERE_add = "\nAND LGIint = Iid\nAND LGIlibg = LGid\n";
	$interface_WHERE_add .= 'AND (Lname = "'
		. join( '" OR Lname = "', split(/,/, $options{'l'}) ) . '"'
		. ' OR LGname = "' . join( '" OR LGname = "', split(/,/, $options{'g'}) ) . '")' . "\n";
}
elsif (exists($options{'l'}))
{
	$interface_FROM_add = "\n";
	$interface_WHERE_add = "\n" . 'AND (Lname = "'
		. join( '" OR Lname = "', split(/,/, $options{'l'}) ) . "\")\n ";

}
elsif(exists($options{'g'}))
{
	$interface_FROM_add = ", LGInt, LibGroup\n";
	$interface_WHERE_add = "\nAND LGIint = Iid\nAND LGIlibg = LGid\n";
	$interface_WHERE_add .= 'AND ( LGname = "'
		. join( '" OR LGname = "', split(/,/, $options{'g'}) ) . '")' . "\n";
}
else
{
	$interface_FROM_add = "\n";
	$interface_WHERE_add = "\n";
}



##############################
# Database Queries
##############################

#   Connect to database
my $dbh = DBI->connect('DBI:mysql:database='.$LSBDB.';host='.$LSBDBHOST, $LSBUSER, $LSBDBPASSWD)
	or die "Couldn't connect to database: " . DBI->errstr;

my $interface_q = $dbh->prepare(
'SELECT Iid, Iname, Lname
FROM Interface, Header, Library' . $interface_FROM_add .
'WHERE Itype = "Function"
   AND Istatus = "Included"
   AND Iheader = Hid
   AND Hlib = Lid
   AND Iarch <= 2 ' . $interface_WHERE_add .
"GROUP BY Iid" ## This removes duplicate entries.
) or die "Couldn't prepare interface query: " . DBI ->errstr;

my $has_ellipsis_q = $dbh->prepare(
'SELECT Tname
FROM Parameter, Type
WHERE Pint = ?
  AND Ptype = Tid
ORDER BY Ppos'
) or die "Couldn't prepare has_ellipsis query: " . DBI->errstr;

my $get_param_typetype_q1 = $dbh->prepare(
'SELECT Pttid, Ttype, Tname
FROM Parameter, Type
WHERE Ppos = ?
  AND Pint = ?
  AND Ptype = Tid'
) or die "Couldn't prepare write_param_typetype query 1: " . DBI->errstr;

my $get_param_typetype_q2 = $dbh->prepare(
'SELECT TTname
FROM TypeType
WHERE TTid = ?'
) or die "Couldn't prepare write_param_typetype query 2: " . DBI->errstr;
 
my $get_param_type_q = $dbh->prepare(
'SELECT Tname, Ttype, Pconst
FROM Parameter, Type
WHERE Ppos = ?
  AND Pint = ?
  AND Ptype = Tid'
) or die "Couldn't prepare write_param_type query: " . DBI->errstr;
	
my $write_int_wrapper_q = $dbh->prepare(
'SELECT Ppos, Pint
FROM Parameter
WHERE Pint = ?
ORDER BY Ppos'
) or die "Couldn't prepare write_int_wrapper query: " . DBI->errstr;

my $write_int_header_q = $dbh->prepare(
'SELECT Hname
FROM  Parameter, Type, HeaderGroup, Header
WHERE Pint = ?
  AND Ptype = Tid
  AND Theadergroup = HGid
  AND HGheader = Hid
ORDER BY Ppos'
) or die "Couldn't prepare write_int_header query: " . DBI->errstr;

my $write_int_declaration_q1 = $dbh->prepare(
'SELECT Tname
FROM Interface, Type
WHERE Iid = ?
  AND Ireturn = Tid'
) or die "Couldn't prepare write_int_declaration query 1: " . DBI->errstr;

my $write_int_declaration_q2 = $dbh->prepare(
'SELECT Ppos, Pint
FROM Parameter
WHERE Pint = ?
ORDER BY Ppos'
) or die "Couldn't prepare write_int_declaration query 2: " . DBI->errstr;

##############################
# Subroutines 
##############################

sub debug # (@everyone)
{
	foreach my $out (@_)
	{
		print $out;
	}
}

# Return true if the first argument is duplicated in the rest of the argument.
sub contains # ($first_arg, $other_args ... )
{
	my $count = -1;
	foreach my $element (@_)
	{
		$count += 1 if($element eq $_[0]);
	}
	return ($count > 0);
}

# true if 'interface' has a parameter with ellipses
sub has_ellipsis # ($func_id)               
{
	my($func_id) = @_;
	$has_ellipsis_q->execute($func_id);
	while ( my($type) = $has_ellipsis_q->fetchrow_array() )
	{
		return 1 if($type) eq "...";
	}
	return 0;
}

# returns typetype string that matches the right validate_* function.
sub get_param_typetype # ($param_pos, $param_int)
{
	my($param_pos, $param_int) = @_;
	$get_param_typetype_q1->execute($param_pos, $param_int)
		or die "Couldn't execute get_param_typetype query 1: ".DBI->errstr;
	my($typetypeid, $typeform, $type) = $get_param_typetype_q1->fetchrow_array()
		or (return "UNSET_TYPETYPE");
	if($typetypeid != 0)
	{
		$get_param_typetype_q2->execute($typetypeid);
		my($typetype) = $get_param_typetype_q2->fetchrow_array();
		return $typetype;
	}
   
	return "struct_".$type if($typeform eq "Struct");
	return "union_".$type if($typeform eq "Union");
	# Should I handle ($typeform eq "Pointer") ?
	return "NULL_TYPETYPE";
}

# returns valid type-string of a parameter
sub get_param_type # ($param_pos, $param_int)
{
	my($param_pos, $param_int) = @_;
	$get_param_type_q->execute($param_pos, $param_int);
	my($type, $typeform, $is_const) = $get_param_type_q->fetchrow_array();
	my($return_string) = "";
	$return_string .= "const " if ($is_const eq 'Y');
	$return_string .= $type;
}

# write code block for interface wrapper to 'fh'
# if 'is_lsb', write code block for lsb_* interface wrapper to 'fh'
sub write_int_wrapper # ($fh, $func_id, $func_name, $is_lsb)
{
	my($fh, $func_id, $func_name, $is_lsb) = @_;
	my $i = 0; my $j = 0;

	print $fh "{\n\tif(!funcptr)\n";
	print $fh "\t\tfuncptr = dlsym(RTLD_NEXT, \"" . $func_name . "\");\n";
	
	unless($is_lsb)
	{
		$write_int_wrapper_q->execute($func_id)
			or die "Couldn't execute write_int_wrapper query: " . DBI->errstr;
		while( my($param_pos, $param_int) = $write_int_wrapper_q->fetchrow_array() )
		{
			print $fh "\tvalidate_";
			print $fh get_param_typetype($param_pos, $param_int);
			print $fh "(arg" . $i . ", \"" . $func_name . "\");\n";
			$i++;
		}
	}
	print $fh "\treturn funcptr(";
	while($j < $i)
	{
		print $fh ", " unless ($j == 0);
		print $fh "arg".$j;
		$j++;
	}
	print $fh ");\n}\n\n";
}

# write generation comments and needed headers for 'interface' to 'fh'
sub write_int_header # ($fh, $func_id)     
{
	my($fh, $func_id)=@_;
	print $fh "// Generated by gen_lib.pl\n\n";
	print $fh "#include \"type_tests.h\"\n";
	print $fh "#include <dlfcn.h>\n";
	$write_int_header_q->execute($func_id)
		or die "Couldn't execute write_int_header query: " . DBI->errstr;
	while(my($header) = $write_int_header_q->fetchrow_array() )
	{
		print $fh "#include <" . $header . ">\n";
	}
}

# write function declaration for 'interface' to 'fh'
# if 'is_lsb', write the lsb_* wrapper's declaration
sub write_int_declaration # ($fh, $func_id, $func_name, $is_lsb)
{
	my($fh, $func_id, $func_name, $is_lsb) = @_;
	$write_int_declaration_q1->execute($func_id)
		or die "Couldn't execute write_int_declaration query 1: " . DBI->errstr;
	my($type) = $write_int_declaration_q1->fetchrow_array();
	print $fh $type . " ";
	print $fh "lsb_" if($is_lsb);
	print $fh $func_name . "(";
	my $i = 0;
	$write_int_declaration_q2->execute($func_id)
		or die "Couldn't execute write_int_declaration query 2: " . DBI->errstr;
	while( my($param_pos, $param_int) = $write_int_declaration_q2->fetchrow_array() )
	{
		print $fh ", " unless ($i == 0);
		print $fh get_param_type($param_pos, $param_int) . " arg" . $i;
		$i ++;
	}
	print $fh ")\n";
}

# add 'interface' to the gen.mk file in the correct library's directory
my(@libs_seen);
sub add_to_gen_mk # ($func_name, $lib_name)
{
	my($func_name, $func_lib) = @_;
	my($gen_fh);
	if(!contains($func_lib, @libs_seen))
	{
		$libs_seen[@libs_seen] = $func_lib;
		$gen_fh = IO::Handle->new();
		open($gen_fh, "> " . $func_lib . "/gen.mk" );
		print $gen_fh "GEN_FUNCS = \\\n";
		print $gen_fh $func_name . ".o ";
		close $gen_fh;
	}
	else
	{
		open($gen_fh, ">> " . $func_lib . "/gen.mk");
		print $gen_fh "\\\n".$func_name.".o ";
		close $gen_fh;
	}
}

##############################
# Main section
##############################

# Open utility output files

my $ell_file = IO::Handle->new();
open($ell_file, ">ellipsis_funcs")
	or die "Can't open the output file ellipsis_funcs: $!";
my $lsb_h_file = IO::Handle->new();
open($lsb_h_file, ">all_lsb_funcs.h")
	or die "Can't open the output file all_lsb_funcs.h: $!";
my $interface_file = IO::Handle->new();

# Write .c files for interface wrappers
my $progress = 1;
$interface_q->execute or die "Couldn't execute interface query: " . DBI->errstr;

$| = 1;

FUNC: while(my ($func_id, $func_name, $func_lib) = $interface_q->fetchrow_array())
{
	# Skip interface if it has an ellipsis type - it must be hand-coded.
	if(has_ellipsis($func_id))
	{
		print $ell_file $func_name . "\n";
		next FUNC;
	}
	# Add interface to correct gen.mk file
	add_to_gen_mk($func_name, $func_lib);

	# Add interface to the lsb_* function header
	write_int_declaration($lsb_h_file, $func_id, $func_name, 1);

	# Create interface's .c file
	open($interface_file, ">" . $func_lib . "/" . $func_name . '.c')
		or die "Can't open output: $!";

	# Write interface's .c file
	write_int_header($interface_file, $func_id);
	write_int_declaration($interface_file, $func_id, $func_name, 0);
	write_int_wrapper($interface_file, $func_id, $func_name, 0);
	write_int_declaration($interface_file, $func_id, $func_name, 1);
	write_int_wrapper($interface_file, $func_id, $func_name, 1);
	
	close($interface_file);

	$progress ++;
	print "." if ($progress % 100 == 0);
}
	
close($ell_file);
close($lsb_h_file);
print "Done generating libraries!\a\n";
