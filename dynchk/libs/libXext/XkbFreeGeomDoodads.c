// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/extensions/XKBgeom.h>
#undef XkbFreeGeomDoodads
static void(*funcptr) (XkbDoodadPtr , int , int ) = 0;

extern int __lsb_check_params;
void XkbFreeGeomDoodads (XkbDoodadPtr arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XkbFreeGeomDoodads ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XkbFreeGeomDoodads()");
		validate_NULL_TYPETYPE(  arg0, "XkbFreeGeomDoodads - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbFreeGeomDoodads - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbFreeGeomDoodads - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
