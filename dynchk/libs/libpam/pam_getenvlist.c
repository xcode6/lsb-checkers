// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <security/pam_appl.h>
#undef pam_getenvlist
static char * *(*funcptr) (pam_handle_t * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * * pam_getenvlist (pam_handle_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_getenvlist");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "pam_getenvlist()");
	validate_RWaddress( arg0, "pam_getenvlist - arg0");
		validate_NULL_TYPETYPE(  arg0, "pam_getenvlist - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

