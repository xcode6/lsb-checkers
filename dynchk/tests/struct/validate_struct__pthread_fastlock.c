// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <pthread.h>

void validate_struct__pthread_fastlock(struct _pthread_fastlock * input)
{
	validate_NULL_TYPETYPE(input->long);
	validate_NULL_TYPETYPE(input->int);
}

