// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <net/if.h>

void validate_struct_ifaddr(struct ifaddr * input)
{
	validate_struct_sockaddr( &(input->ifa_addr) );
	validate_struct_sockaddr( &(input->ifa_ifu.ifu_broadaddr) );
	validate_struct_sockaddr( &(input->ifa_ifu.ifu_dstaddr) );
	validate_NULL_TYPETYPE(input->ifa_ifp);
	validate_NULL_TYPETYPE(input->ifa_next);
}

