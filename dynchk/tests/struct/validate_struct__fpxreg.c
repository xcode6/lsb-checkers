// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <signal.h>

#if defined(__i386__)
int validate_struct__fpxreg(struct _fpxreg  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> significand,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> exponent,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> padding,name ));
		failure = 1;
return failure;
}

#endif /*defined(__i386__)*/
#if defined(__x86_64__)
int validate_struct__fpxreg(struct _fpxreg  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> significand,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> exponent,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> padding,name ));
		failure = 1;
return failure;
}

#endif /*defined(__x86_64__)*/
