// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/icmp6.h>

int validate_struct_nd_router_solicit(struct nd_router_solicit  * input, char *name)
{
int failure = 0;
	if(validate_struct_icmp6_hdr( &(input-> nd_rs_hdr),name ))
		failure = 1;
return failure;
}
