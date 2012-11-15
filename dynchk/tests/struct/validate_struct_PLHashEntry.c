// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <nspr4/plhash.h>

int validate_struct_PLHashEntry(struct PLHashEntry  * input, char *name)
{
int failure = 0;
	if(validate_struct_PLHashEntry(input-> next,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> keyHash,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> key,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> value,name ))
		failure = 1;
return failure;
}
