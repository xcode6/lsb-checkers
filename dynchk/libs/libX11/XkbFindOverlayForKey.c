// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/extensions/XKBstr.h>
#include <X11/extensions/XKBgeom.h>
#undef XkbFindOverlayForKey
static char *(*funcptr) (XkbGeometryPtr , XkbSectionPtr , char * ) = 0;

extern int __lsb_check_params;
char * XkbFindOverlayForKey (XkbGeometryPtr arg0 , XkbSectionPtr arg1 , char * arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XkbFindOverlayForKey()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFindOverlayForKey");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbFindOverlayForKey. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbFindOverlayForKey() - validating");
		validate_NULL_TYPETYPE(  arg0, "XkbFindOverlayForKey - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbFindOverlayForKey - arg1");
		validate_RWaddress( arg2, "XkbFindOverlayForKey - arg2");
		validate_NULL_TYPETYPE(  arg2, "XkbFindOverlayForKey - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

