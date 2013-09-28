// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <ncursesw/term.h>

int validate_struct_termtype(struct termtype  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> term_names,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> str_table,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> Booleans,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> Numbers,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> Strings,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ext_str_table,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ext_Names,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> num_Booleans,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> num_Numbers,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> num_Strings,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ext_Booleans,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ext_Numbers,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ext_Strings,name ))
		failure = 1;
return failure;
}
