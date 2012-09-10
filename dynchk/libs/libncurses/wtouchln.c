// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef wtouchln
static int(*funcptr) (WINDOW * , int , int , int ) = 0;

extern int __lsb_check_params;
int wtouchln (WINDOW * arg0 , int arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for wtouchln()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wtouchln");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wtouchln. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wtouchln() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "wtouchln - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "wtouchln - arg0");
		validate_NULL_TYPETYPE(  arg1, "wtouchln - arg1");
		validate_NULL_TYPETYPE(  arg2, "wtouchln - arg2");
		validate_NULL_TYPETYPE(  arg3, "wtouchln - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

