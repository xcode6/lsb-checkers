// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/rpc_msg.h>

void validate_struct_call_body(struct call_body * input)
{
	validate_NULL_TYPETYPE(input->cb_rpcvers);
	validate_NULL_TYPETYPE(input->cb_prog);
	validate_NULL_TYPETYPE(input->cb_vers);
	validate_NULL_TYPETYPE(input->cb_proc);
	validate_struct_opaque_auth( &(input->cb_cred) );
	validate_struct_opaque_auth( &(input->cb_verf) );
}

