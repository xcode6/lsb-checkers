// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <utime.h>

void validate_struct_utimbuf(struct utimbuf * input)
{
	validate_NULL_TYPETYPE(input->actime);
	validate_NULL_TYPETYPE(input->modtime);
}

