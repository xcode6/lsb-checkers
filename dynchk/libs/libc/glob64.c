// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <glob.h>
#undef glob64
static int(*funcptr) (const char * , int , int(* )(const char *, int), glob64_t * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int glob64 (const char * arg0 , int arg1 , int(* arg2 )(const char *, int), glob64_t * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glob64");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glob64()");
	validate_Rdaddress( arg0, "glob64 - arg0");
		validate_NULL_TYPETYPE(  arg0, "glob64 - arg0");
		validate_NULL_TYPETYPE(  arg1, "glob64 - arg1");
validate_Rdaddress( arg2, "glob64 - arg2");
		validate_NULL_TYPETYPE(  arg2, "glob64 - arg2");
	validate_RWaddress( arg3, "glob64 - arg3");
		validate_NULL_TYPETYPE(  arg3, "glob64 - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

