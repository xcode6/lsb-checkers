// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <security/pam_appl.h>

int validate_struct_pam_conv(struct pam_conv  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> conv,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> appdata_ptr,name ))
		failure = 1;
return failure;
}
