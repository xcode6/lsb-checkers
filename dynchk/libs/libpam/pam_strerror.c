// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <security/pam_appl.h>
#undef pam_strerror
static const char *(*funcptr) (pam_handle_t * , int ) = 0;

extern int __lsb_check_params;
const char * pam_strerror (pam_handle_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pam_strerror()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "pam_strerror", "LIBPAM_1.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pam_strerror. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pam_strerror() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pam_strerror - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "pam_strerror - arg0");
		validate_NULL_TYPETYPE(  arg1, "pam_strerror - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

