// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <signal.h>

#if defined __i386__
int validate_struct_sigaction(struct sigaction  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_handler,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_sigaction,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> sa_mask,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_flags,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_restorer,name ))
		failure = 1;
return failure;
}

#endif /* defined __i386__ */
#if defined __ia64__
int validate_struct_sigaction(struct sigaction  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_handler,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_sigaction,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> sa_mask,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_flags,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_restorer,name ))
		failure = 1;
return failure;
}

#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
int validate_struct_sigaction(struct sigaction  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_handler,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_sigaction,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> sa_mask,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_flags,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_restorer,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
int validate_struct_sigaction(struct sigaction  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_handler,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_sigaction,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> sa_mask,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_flags,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_restorer,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
int validate_struct_sigaction(struct sigaction  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_handler,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_sigaction,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> sa_mask,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_flags,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_restorer,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
int validate_struct_sigaction(struct sigaction  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_handler,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_sigaction,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> sa_mask,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_flags,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_restorer,name ))
		failure = 1;
return failure;
}

#endif /* defined __x86_64__ */
#if defined __s390x__
int validate_struct_sigaction(struct sigaction  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_handler,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->__sigaction_handler. _sa_sigaction,name ))
		failure = 1;
return failure;
	if(validate_NULL_TYPETYPE(input-> sa_mask,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_flags,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sa_restorer,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390x__ */