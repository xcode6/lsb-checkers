// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/auth.h>

void validate_struct_auth_ops(struct auth_ops  * input, char *name)
{
	validate_NULL_TYPETYPE(input->ah_nextverf,name );
	validate_NULL_TYPETYPE(input->ah_marshal,name );
	validate_NULL_TYPETYPE(input->ah_validate,name );
	validate_NULL_TYPETYPE(input->ah_refresh,name );
	validate_NULL_TYPETYPE(input->ah_destroy,name );
}

