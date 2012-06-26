// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <mqueue.h>
#undef mq_unlink
static int(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
int mq_unlink (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mq_unlink()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "mq_unlink", "GLIBC_2.3.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mq_unlink. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mq_unlink() - validating");
		validate_Rdaddress( arg0, "mq_unlink - arg0 (__name)");
		validate_NULL_TYPETYPE(  arg0, "mq_unlink - arg0 (__name)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

