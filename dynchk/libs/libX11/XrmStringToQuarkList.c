// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
#undef XrmStringToQuarkList
static void(*funcptr) (const char * , XrmQuarkList ) = 0;

extern int __lsb_check_params;
void XrmStringToQuarkList (const char * arg0 , XrmQuarkList arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XrmStringToQuarkList ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XrmStringToQuarkList()");
		validate_Rdaddress( arg0, "XrmStringToQuarkList - arg0");
		validate_NULL_TYPETYPE(  arg0, "XrmStringToQuarkList - arg0");
		validate_NULL_TYPETYPE(  arg1, "XrmStringToQuarkList - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

