// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/xdr.h>

void validate_struct_XDR(struct XDR * input)
{
	validate_NULL_TYPETYPE(input->x_op);
	validate_struct_xdr_ops(input->x_ops);
	validate_NULL_TYPETYPE(input->x_public);
	validate_NULL_TYPETYPE(input->x_private);
	validate_NULL_TYPETYPE(input->x_base);
	validate_NULL_TYPETYPE(input->x_handy);
}

