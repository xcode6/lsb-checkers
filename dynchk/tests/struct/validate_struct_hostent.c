// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netdb.h>

int validate_struct_hostent(struct hostent  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> h_name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> h_aliases,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> h_addrtype,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> h_length,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> h_addr_list,name ))
		failure = 1;
return failure;
}
