// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netdb.h>

void validate_struct_servent(struct servent * input)
{
	validate_NULL_TYPETYPE(input->char *);
	validate_NULL_TYPETYPE(input->char * *);
	validate_NULL_TYPETYPE(input->int);
	validate_NULL_TYPETYPE(input->char *);
}

