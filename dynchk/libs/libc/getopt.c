// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unistd.h>
#undef getopt
static int(*funcptr) (int , char *const  [], const char * ) = 0;

extern int __lsb_check_params;
int getopt (int arg0 , char *const  arg1 [], const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "getopt", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getopt()");
		validate_NULL_TYPETYPE(  arg0, "getopt - arg0");
		validate_NULL_TYPETYPE(  arg1, "getopt - arg1");
		validate_Rdaddress( arg2, "getopt - arg2");
		validate_NULL_TYPETYPE(  arg2, "getopt - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

