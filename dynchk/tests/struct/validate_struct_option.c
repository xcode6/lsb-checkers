// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <getopt.h>

int validate_struct_option(struct option  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> has_arg,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> flag,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> val,name ))
		failure = 1;
return failure;
}
