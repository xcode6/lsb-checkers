// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <GL/glx.h>
#undef glXUseXFont
static void(*funcptr) (Font , int , int , int ) = 0;

extern int __lsb_check_params;
void glXUseXFont (Font arg0 , int arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glXUseXFont ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glXUseXFont()");
		validate_NULL_TYPETYPE(  arg0, "glXUseXFont - arg0");
		validate_NULL_TYPETYPE(  arg1, "glXUseXFont - arg1");
		validate_NULL_TYPETYPE(  arg2, "glXUseXFont - arg2");
		validate_NULL_TYPETYPE(  arg3, "glXUseXFont - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

