// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/rpc_msg.h>

void validate_struct_reply_body(struct reply_body * input)
{
	validate_NULL_TYPETYPE(input->enum reply_stat);
	validate_struct_accepted_reply(input->ru.struct accepted_reply);
	validate_struct_rejected_reply(input->ru.struct rejected_reply);
}

