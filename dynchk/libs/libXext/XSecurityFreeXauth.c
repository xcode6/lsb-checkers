// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xauth.h>
#include <X11/extensions/security.h>
#undef XSecurityFreeXauth
static void(*funcptr) (Xauth * ) = 0;

extern int __lsb_check_params;
void XSecurityFreeXauth (Xauth * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XSecurityFreeXauth");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSecurityFreeXauth()");
		validate_RWaddress( arg0, "XSecurityFreeXauth - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSecurityFreeXauth - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

