// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <security/pam_appl.h>
#undef pam_strerror
static const char *(*funcptr) (pam_handle_t * , int ) = 0;

extern int __lsb_check_params;
const char * pam_strerror (pam_handle_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_strerror");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pam_strerror()");
		validate_RWaddress( arg0, "pam_strerror - arg0");
		validate_NULL_TYPETYPE(  arg0, "pam_strerror - arg0");
		validate_NULL_TYPETYPE(  arg1, "pam_strerror - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

