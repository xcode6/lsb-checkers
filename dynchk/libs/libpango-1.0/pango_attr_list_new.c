// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_attr_list_new
static PangoAttrList *(*funcptr) () = 0;

extern int __lsb_check_params;
PangoAttrList * pango_attr_list_new ()
{
	int reset_flag = __lsb_check_params;
	PangoAttrList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_attr_list_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_attr_list_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_attr_list_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_attr_list_new() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

