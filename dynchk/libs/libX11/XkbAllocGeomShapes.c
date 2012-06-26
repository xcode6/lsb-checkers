// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/extensions/XKBstr.h>
#include <X11/extensions/XKBgeom.h>
#undef XkbAllocGeomShapes
static int(*funcptr) (XkbGeometryPtr , int ) = 0;

extern int __lsb_check_params;
int XkbAllocGeomShapes (XkbGeometryPtr arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XkbAllocGeomShapes()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocGeomShapes");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbAllocGeomShapes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbAllocGeomShapes() - validating");
		validate_NULL_TYPETYPE(  arg0, "XkbAllocGeomShapes - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbAllocGeomShapes - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

