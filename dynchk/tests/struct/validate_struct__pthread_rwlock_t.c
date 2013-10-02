// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <pthread.h>

int validate_struct__pthread_rwlock_t(struct _pthread_rwlock_t  * input, char *name)
{
int failure = 0;
	if(validate_struct__pthread_fastlock( &(input-> __rw_lock),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __rw_readers,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __rw_writer,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __rw_read_waiting,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __rw_write_waiting,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __rw_kind,name ));
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __rw_pshared,name ));
		failure = 1;
return failure;
}
