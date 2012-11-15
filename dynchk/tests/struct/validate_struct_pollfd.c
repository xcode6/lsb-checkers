// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/poll.h>

int validate_struct_pollfd(struct pollfd  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> fd,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> events,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> revents,name ))
		failure = 1;
return failure;
}
