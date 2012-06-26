// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#undef pango_layout_set_auto_dir
static void(*funcptr) (PangoLayout * , gboolean ) = 0;

extern int __lsb_check_params;
void pango_layout_set_auto_dir (PangoLayout * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_layout_set_auto_dir()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_set_auto_dir");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_set_auto_dir. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_set_auto_dir() - validating");
		validate_RWaddress( arg0, "pango_layout_set_auto_dir - arg0 (layout)");
		validate_NULL_TYPETYPE(  arg0, "pango_layout_set_auto_dir - arg0 (layout)");
		validate_NULL_TYPETYPE(  arg1, "pango_layout_set_auto_dir - arg1 (auto_dir)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

