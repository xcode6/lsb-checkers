// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/rpc_msg.h>

void validate_struct_reply_body(struct reply_body * input)
{
	validate_NULL_TYPETYPE(input->rp_stat);
	validate_struct_accepted_reply( &(input->ru.RP_ar) );
	validate_struct_rejected_reply( &(input->ru.RP_dr) );
}

