// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_renderer_get_matrix
static const PangoMatrix *(*funcptr) (PangoRenderer * ) = 0;

extern int __lsb_check_params;
const PangoMatrix * pango_renderer_get_matrix (PangoRenderer * arg0 )
{
	int reset_flag = __lsb_check_params;
	const PangoMatrix * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_renderer_get_matrix()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_renderer_get_matrix");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_renderer_get_matrix. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_renderer_get_matrix() - validating");
		validate_RWaddress( arg0, "pango_renderer_get_matrix - arg0 (renderer)");
		validate_NULL_TYPETYPE(  arg0, "pango_renderer_get_matrix - arg0 (renderer)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

