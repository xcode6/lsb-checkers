// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_attr_type_get_name
static const char *(*funcptr) (PangoAttrType ) = 0;

extern int __lsb_check_params;
const char * pango_attr_type_get_name (PangoAttrType arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_attr_type_get_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_attr_type_get_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_attr_type_get_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_attr_type_get_name() - validating");
		validate_NULL_TYPETYPE(  arg0, "pango_attr_type_get_name - arg0 (type)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
