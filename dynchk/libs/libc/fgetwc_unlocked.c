// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdio.h>
#include <wchar.h>
#undef fgetwc_unlocked
static wint_t(*funcptr) (FILE * ) = 0;

extern int __lsb_check_params;
wint_t fgetwc_unlocked (FILE * arg0 )
{
	int reset_flag = __lsb_check_params;
	wint_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fgetwc_unlocked");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "fgetwc_unlocked()");
		validate_RWaddress( arg0, "fgetwc_unlocked - arg0");
		validate_NULL_TYPETYPE(  arg0, "fgetwc_unlocked - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

