// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <stddef.h>
#include <sys/sendfile.h>
#undef sendfile64
static ssize_t(*funcptr) (int , int , off64_t * , size_t ) = 0;

extern int __lsb_check_params;
ssize_t sendfile64 (int arg0 , int arg1 , off64_t * arg2 , size_t arg3 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for sendfile64()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "sendfile64", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load sendfile64. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sendfile64() - validating");
		validate_NULL_TYPETYPE(  arg0, "sendfile64 - arg0 (__out_fd)");
		validate_NULL_TYPETYPE(  arg1, "sendfile64 - arg1 (__in_fd)");
		if( arg2 ) {
		validate_RWaddress( arg2, "sendfile64 - arg2 (__offset)");
		}
		validate_NULL_TYPETYPE(  arg2, "sendfile64 - arg2 (__offset)");
		validate_NULL_TYPETYPE(  arg3, "sendfile64 - arg3 (__count)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
