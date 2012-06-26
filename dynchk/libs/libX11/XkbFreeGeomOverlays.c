// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/extensions/XKBgeom.h>
#undef XkbFreeGeomOverlays
static void(*funcptr) (XkbSectionPtr , int , int , int ) = 0;

extern int __lsb_check_params;
void XkbFreeGeomOverlays (XkbSectionPtr arg0 , int arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XkbFreeGeomOverlays()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFreeGeomOverlays");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbFreeGeomOverlays. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbFreeGeomOverlays() - validating");
		validate_NULL_TYPETYPE(  arg0, "XkbFreeGeomOverlays - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbFreeGeomOverlays - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbFreeGeomOverlays - arg2");
		validate_NULL_TYPETYPE(  arg3, "XkbFreeGeomOverlays - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

