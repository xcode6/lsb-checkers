// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/resource.h>

int validate_struct_rusage(struct rusage  * input, char *name)
{
int failure = 0;
	if(validate_struct_timeval( &(input-> ru_utime),name ))
		failure = 1;
	if(validate_struct_timeval( &(input-> ru_stime),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_maxrss,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_ixrss,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_idrss,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_isrss,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_minflt,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_majflt,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_nswap,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_inblock,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_oublock,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_msgsnd,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_msgrcv,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_nsignals,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_nvcsw,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ru_nivcsw,name ));
		failure = 1;
return failure;
}

