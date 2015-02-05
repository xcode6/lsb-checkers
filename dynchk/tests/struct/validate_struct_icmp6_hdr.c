// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/icmp6.h>

int validate_struct_icmp6_hdr(struct icmp6_hdr  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> icmp6_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> icmp6_code,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> icmp6_cksum,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->icmp6_dataun. icmp6_un_data32,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->icmp6_dataun. icmp6_un_data16,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->icmp6_dataun. icmp6_un_data8,name ))
		failure = 1;
return failure;
return failure;
}
