// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <unistd.h>
#undef symlink
static int(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
int symlink (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "symlink", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "symlink()");
		validate_Rdaddress( arg0, "symlink - arg0");
		validate_NULL_TYPETYPE(  arg0, "symlink - arg0");
		validate_Rdaddress( arg1, "symlink - arg1");
		validate_NULL_TYPETYPE(  arg1, "symlink - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

