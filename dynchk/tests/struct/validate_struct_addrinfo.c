// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netdb.h>

int validate_struct_addrinfo(struct addrinfo  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ai_flags,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ai_family,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ai_socktype,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ai_protocol,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ai_addrlen,name ));
		failure = 1;
	if(validate_struct_sockaddr(input-> ai_addr,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ai_canonname,name ));
		failure = 1;
	if(validate_struct_addrinfo(input-> ai_next,name ));
		failure = 1;
return failure;
}

