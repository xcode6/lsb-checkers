// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <mqueue.h>
#include <signal.h>
#undef mq_notify
static int(*funcptr) (mqd_t , const struct sigevent * ) = 0;

extern int __lsb_check_params;
int mq_notify (mqd_t arg0 , const struct sigevent * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mq_notify()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "mq_notify", "GLIBC_2.3.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mq_notify. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mq_notify() - validating");
		validate_NULL_TYPETYPE(  arg0, "mq_notify - arg0 (__mqdes)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "mq_notify - arg1 (__notification)");
		}
		validate_NULL_TYPETYPE(  arg1, "mq_notify - arg1 (__notification)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
