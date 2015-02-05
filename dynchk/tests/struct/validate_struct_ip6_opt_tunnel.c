// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/ip6.h>

int validate_struct_ip6_opt_tunnel(struct ip6_opt_tunnel  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ip6ot_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ip6ot_len,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ip6ot_encap_limit,name ))
		failure = 1;
return failure;
}
