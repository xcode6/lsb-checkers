// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/socket.h>

void validate_struct_linger(struct linger * input)
{
	validate_NULL_TYPETYPE(input->l_onoff);
	validate_NULL_TYPETYPE(input->l_linger);
}

