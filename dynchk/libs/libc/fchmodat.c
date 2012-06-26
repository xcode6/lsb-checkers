// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <sys/stat.h>
#undef fchmodat
static int(*funcptr) (int , const char * , mode_t , int ) = 0;

extern int __lsb_check_params;
int fchmodat (int arg0 , const char * arg1 , mode_t arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for fchmodat()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "fchmodat", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load fchmodat. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fchmodat() - validating");
		validate_NULL_TYPETYPE(  arg0, "fchmodat - arg0 (__fd)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "fchmodat - arg1 (__file)");
		}
		validate_NULL_TYPETYPE(  arg1, "fchmodat - arg1 (__file)");
		validate_NULL_TYPETYPE(  arg2, "fchmodat - arg2 (mode)");
		validate_NULL_TYPETYPE(  arg3, "fchmodat - arg3 (__flag)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

