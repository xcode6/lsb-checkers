// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <ftw.h>
#undef nftw
static int(*funcptr) (const char * , __nftw_func_t , int , int ) = 0;

extern int __lsb_check_params;
int nftw (const char * arg0 , __nftw_func_t arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "nftw", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "nftw()");
		validate_Rdaddress( arg0, "nftw - arg0");
		validate_NULL_TYPETYPE(  arg0, "nftw - arg0");
		validate_NULL_TYPETYPE(  arg1, "nftw - arg1");
		validate_NULL_TYPETYPE(  arg2, "nftw - arg2");
		validate_NULL_TYPETYPE(  arg3, "nftw - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

