// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <nl_types.h>
#undef catgets
static char *(*funcptr) (nl_catd , int , int , const char * ) = 0;

extern int __lsb_check_params;
char * catgets (nl_catd arg0 , int arg1 , int arg2 , const char * arg3 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "catgets", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "catgets()");
		validate_NULL_TYPETYPE(  arg0, "catgets - arg0");
		validate_NULL_TYPETYPE(  arg1, "catgets - arg1");
		validate_NULL_TYPETYPE(  arg2, "catgets - arg2");
		validate_Rdaddress( arg3, "catgets - arg3");
		validate_NULL_TYPETYPE(  arg3, "catgets - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

