// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/un.h>

void validate_struct_sockaddr_un(struct sockaddr_un * input)
{
	validate_NULL_TYPETYPE(input->sa_family_t);
	validate_NULL_TYPETYPE(input->char);
}

