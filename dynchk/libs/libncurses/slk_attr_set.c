// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef slk_attr_set
static int(*funcptr) (const attr_t , short , void * ) = 0;

extern int __lsb_check_params;
int slk_attr_set (const attr_t arg0 , short arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for slk_attr_set()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_attr_set");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load slk_attr_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "slk_attr_set() - validating");
		validate_NULL_TYPETYPE(  arg0, "slk_attr_set - arg0");
		validate_NULL_TYPETYPE(  arg1, "slk_attr_set - arg1");
		validate_RWaddress( arg2, "slk_attr_set - arg2");
		validate_NULL_TYPETYPE(  arg2, "slk_attr_set - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

