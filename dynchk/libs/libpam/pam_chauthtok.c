// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <security/pam_appl.h>
#undef pam_chauthtok
static int(*funcptr) (pam_handle_t * , int ) = 0;

extern int __lsb_check_params;
int pam_chauthtok (pam_handle_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_chauthtok");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "pam_chauthtok - arg0");
		validate_NULL_TYPETYPE(  arg0, "pam_chauthtok - arg0");
		validate_NULL_TYPETYPE(  arg1, "pam_chauthtok - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

