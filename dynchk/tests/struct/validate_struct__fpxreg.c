// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <signal.h>

void validate_struct__fpxreg(struct _fpxreg  * input, char *name)
{
	validate_NULL_TYPETYPE(input->significand,name );
	validate_NULL_TYPETYPE(input->exponent,name );
	validate_NULL_TYPETYPE(input->padding,name );
}

