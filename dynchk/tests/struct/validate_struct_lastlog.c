// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <utmp.h>

#if defined __i386__
int validate_struct_lastlog(struct lastlog  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ll_time,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_host,name ))
		failure = 1;
return failure;
}

#endif /* defined __i386__ */
#if defined __ia64__
int validate_struct_lastlog(struct lastlog  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ll_time,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_host,name ))
		failure = 1;
return failure;
}

#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
int validate_struct_lastlog(struct lastlog  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ll_time,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_host,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
int validate_struct_lastlog(struct lastlog  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ll_time,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_host,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
int validate_struct_lastlog(struct lastlog  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ll_time,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_host,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
int validate_struct_lastlog(struct lastlog  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ll_time,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_host,name ))
		failure = 1;
return failure;
}

#endif /* defined __x86_64__ */
#if defined __s390x__
int validate_struct_lastlog(struct lastlog  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ll_time,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ll_host,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390x__ */