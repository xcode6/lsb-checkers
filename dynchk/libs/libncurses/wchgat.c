// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef wchgat
static int(*funcptr) (WINDOW * , int , attr_t , short , const void * ) = 0;

extern int __lsb_check_params;
int wchgat (WINDOW * arg0 , int arg1 , attr_t arg2 , short arg3 , const void * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wchgat");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "wchgat()");
		validate_RWaddress( arg0, "wchgat - arg0");
		validate_NULL_TYPETYPE(  arg0, "wchgat - arg0");
		validate_NULL_TYPETYPE(  arg1, "wchgat - arg1");
		validate_NULL_TYPETYPE(  arg2, "wchgat - arg2");
		validate_NULL_TYPETYPE(  arg3, "wchgat - arg3");
		validate_Rdaddress( arg4, "wchgat - arg4");
		validate_NULL_TYPETYPE(  arg4, "wchgat - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

