#!/usr/bin/perl -w
#
# Author: Matt Elder
# Generate validate_struct_*.c files.
#
# Current problems:
#   can't handle subdirectories in type names
#   the generated code may permit endless recursion
#   no handling for unset TypeTypes (TTid = 0)

use strict;
use DBI;
use Getopt::Std;

use Env qw(LSBUSER LSBDBPASSWD LSBDB LSBDBHOST);

### Get command-line options
my(%options);

my($DBName) = $LSBDB;
my($DBUser) = $LSBUSER;
my($DBPass) = $LSBDBPASSWD;
my($DBHost) = $LSBDBHOST;
getopts('d:u:p:o:h', \%options);

### Handle simple options
if (exists($options{'h'}))
{
  print STDERR <<"EOM"
$0: generate struct validation functions for the dynchk library from the 
LSB standard database.
Usage $0 [-d db_name] [-u username] [-p password] [-o hostname] [-h]
    -h           Display this help
    -d db_name   Database name
    -u username  Name of user for db access
    -p password  Password for db access
    -o hostname  Hostname for databaseb
         
EOM
    ;
  exit(1);
}
$DBUser = $options{'u'} if exists($options{'u'});
$DBPass = $options{'p'} if exists($options{'p'});
$DBHost = $options{'o'} if exists($options{'o'});
$DBName = $options{'d'} if exists($options{'d'});

### Setup queries to the LSB Database.

my $dbh = DBI->connect('DBI:mysql:database='.$LSBDB.';host='.$LSBDBHOST,
					   $LSBUSER, $LSBDBPASSWD)
	or die "Couldn't connect to database: " . DBI->errstr;

my $struct_q = $dbh->prepare(
'SELECT Tname, Tid, Hname
FROM Type, HeaderGroup, Header
WHERE Ttype = "Struct"
  AND Theadergroup = HGid
  AND HGheader = Hid
GROUP BY Tid'
							 )	
	or die "Couldn't prepare struct query: " . DBI->errstr;

my $member_q = $dbh->prepare(
'SELECT TMname, TTname, Tname, Ttype
FROM TypeType, TypeMember, Type
WHERE TMmemberof = ?
  AND TMtypetype = TTid
  AND TMtypeid = Tid
GROUP BY TMid
ORDER BY TMposition'
							 )   
	or die "Couldn't prepare member query: " . DBI->errstr;

$struct_q->execute or die "Couldn't execute struct query: " . DBI->errstr;

STRUCT: while(my ($struct_name, $struct_id, $struct_header) = $struct_q->fetchrow_array())
{
	# This needs to be fixed at some point:
	# some structure types are apprently in subdirectories...
	next STRUCT if($struct_name =~ /\//); 
		
	$member_q->execute($struct_id)
		or die "Couldn't execute member query: " . DBI->errstr;
	open(OUTFILE, '>validate_struct_' . $struct_name . '.c')
		or die $struct_name."Can't open output: $!";

	print OUTFILE "// Code generated by generate_library.pl \n";
	print OUTFILE "#include <".$struct_header.">\n\n";
	print OUTFILE "validate_struct_".$struct_name."(*".$struct_name." input)\n";
	print OUTFILE "{\n";
	#loop through the members of the current structure; validate each member.
	
	while(my ($member_name, $member_typetype, $member_type, $member_typeform)
		  = $member_q->fetchrow_array())
	{
		if($member_typetype != 0)
		{
			print OUTFILE "validate_".$member_typetype.'(input->'.
			$member_name.');'."\n";
		}
		elsif($member_typeform eq "Struct")
		{
			print OUTFILE "validate_struct_".$member_type."(input->".
			$member_name.");\n";
		}
		elsif($member_typeform eq "Union")
		{
			print OUTFILE "validate_union_".$member_type."(input->".
			$member_name.");\n";
		}
	}
	print OUTFILE "}\n";
	close OUTFILE;
}
