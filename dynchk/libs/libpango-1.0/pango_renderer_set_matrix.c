// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_renderer_set_matrix
static void(*funcptr) (PangoRenderer * , const PangoMatrix * ) = 0;

extern int __lsb_check_params;
void pango_renderer_set_matrix (PangoRenderer * arg0 , const PangoMatrix * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_renderer_set_matrix()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_renderer_set_matrix");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_renderer_set_matrix. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_renderer_set_matrix() - validating");
		validate_RWaddress( arg0, "pango_renderer_set_matrix - arg0 (renderer)");
		validate_NULL_TYPETYPE(  arg0, "pango_renderer_set_matrix - arg0 (renderer)");
		validate_Rdaddress( arg1, "pango_renderer_set_matrix - arg1 (matrix)");
		validate_NULL_TYPETYPE(  arg1, "pango_renderer_set_matrix - arg1 (matrix)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

