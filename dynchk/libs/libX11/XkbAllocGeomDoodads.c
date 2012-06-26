// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/extensions/XKBstr.h>
#include <X11/extensions/XKBgeom.h>
#undef XkbAllocGeomDoodads
static int(*funcptr) (XkbGeometryPtr , int ) = 0;

extern int __lsb_check_params;
int XkbAllocGeomDoodads (XkbGeometryPtr arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XkbAllocGeomDoodads()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocGeomDoodads");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbAllocGeomDoodads. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbAllocGeomDoodads() - validating");
		validate_NULL_TYPETYPE(  arg0, "XkbAllocGeomDoodads - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbAllocGeomDoodads - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

