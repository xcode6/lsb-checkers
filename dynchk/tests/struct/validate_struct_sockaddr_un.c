// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/un.h>

void validate_struct_sockaddr_un(struct sockaddr_un * input)
{
	validate_NULL_TYPETYPE(input->sun_family);
	validate_NULL_TYPETYPE(input->sun_path);
}

