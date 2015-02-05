// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/time.h>
#include <sys/stat.h>
#undef futimens
static int(*funcptr) (int , const struct timespec [2]) = 0;

extern int __lsb_check_params;
int futimens (int arg0 , const struct timespec arg1 [2])
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for futimens()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "futimens", "GLIBC_2.6");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load futimens. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "futimens() - validating");
		validate_NULL_TYPETYPE(  arg0, "futimens - arg0 (fd)");
		validate_NULL_TYPETYPE(  arg1, "futimens - arg1 (times)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
