// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/extensions/XKBgeom.h>
#undef XkbFreeGeomKeys
static void(*funcptr) (XkbRowPtr , int , int , int ) = 0;

extern int __lsb_check_params;
void XkbFreeGeomKeys (XkbRowPtr arg0 , int arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XkbFreeGeomKeys ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XkbFreeGeomKeys()");
		validate_NULL_TYPETYPE(  arg0, "XkbFreeGeomKeys - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbFreeGeomKeys - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbFreeGeomKeys - arg2");
		validate_NULL_TYPETYPE(  arg3, "XkbFreeGeomKeys - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

