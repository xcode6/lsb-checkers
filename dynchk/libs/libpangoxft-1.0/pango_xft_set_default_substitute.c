// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <pango-1.0/pango/pangoxft.h>
#include <glib-2.0/glib.h>
#undef pango_xft_set_default_substitute
static void(*funcptr) (Display * , int , PangoXftSubstituteFunc , gpointer , GDestroyNotify ) = 0;

extern int __lsb_check_params;
void pango_xft_set_default_substitute (Display * arg0 , int arg1 , PangoXftSubstituteFunc arg2 , gpointer arg3 , GDestroyNotify arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_xft_set_default_substitute()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_xft_set_default_substitute");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_xft_set_default_substitute. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_xft_set_default_substitute() - validating");
		validate_RWaddress( arg0, "pango_xft_set_default_substitute - arg0 (display)");
		validate_NULL_TYPETYPE(  arg0, "pango_xft_set_default_substitute - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "pango_xft_set_default_substitute - arg1 (screen)");
		validate_NULL_TYPETYPE(  arg2, "pango_xft_set_default_substitute - arg2 (func)");
		validate_NULL_TYPETYPE(  arg3, "pango_xft_set_default_substitute - arg3 (data)");
		validate_NULL_TYPETYPE(  arg4, "pango_xft_set_default_substitute - arg4 (notify)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}
