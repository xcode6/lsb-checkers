// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <security/pam_appl.h>
#undef pam_open_session
static int(*funcptr) (pam_handle_t * , int ) = 0;

extern int __lsb_check_params;
int pam_open_session (pam_handle_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_open_session");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "pam_open_session()");
		validate_RWaddress( arg0, "pam_open_session - arg0");
		validate_NULL_TYPETYPE(  arg0, "pam_open_session - arg0");
		validate_NULL_TYPETYPE(  arg1, "pam_open_session - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

