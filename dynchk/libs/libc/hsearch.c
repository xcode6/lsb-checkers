// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <search.h>
#undef hsearch
static ENTRY *(*funcptr) (ENTRY , ACTION ) = 0;

extern int __lsb_check_params;
ENTRY * hsearch (ENTRY arg0 , ACTION arg1 )
{
	int reset_flag = __lsb_check_params;
	ENTRY * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "hsearch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "hsearch()");
		validate_NULL_TYPETYPE(  arg0, "hsearch - arg0");
		validate_NULL_TYPETYPE(  arg1, "hsearch - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

