// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <signal.h>

int validate_struct_sigstack(struct sigstack  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ss_sp,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ss_onstack,name ));
		failure = 1;
return failure;
}
