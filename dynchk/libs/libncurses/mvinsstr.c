// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef mvinsstr
static int(*funcptr) (int , int , const char * ) = 0;

extern int __lsb_check_params;
int mvinsstr (int arg0 , int arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvinsstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinsstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvinsstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvinsstr() - validating");
		validate_NULL_TYPETYPE(  arg0, "mvinsstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvinsstr - arg1");
		validate_Rdaddress( arg2, "mvinsstr - arg2");
		validate_NULL_TYPETYPE(  arg2, "mvinsstr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

