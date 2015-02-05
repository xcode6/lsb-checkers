// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_matrix_init
static void(*funcptr) (cairo_matrix_t * , double , double , double , double , double , double ) = 0;

extern int __lsb_check_params;
void cairo_matrix_init (cairo_matrix_t * arg0 , double arg1 , double arg2 , double arg3 , double arg4 , double arg5 , double arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_matrix_init()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_matrix_init");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_matrix_init. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_matrix_init() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_matrix_init - arg0 (matrix)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_matrix_init - arg0 (matrix)");
		validate_NULL_TYPETYPE(  arg1, "cairo_matrix_init - arg1 (xx)");
		validate_NULL_TYPETYPE(  arg2, "cairo_matrix_init - arg2 (yx)");
		validate_NULL_TYPETYPE(  arg3, "cairo_matrix_init - arg3 (xy)");
		validate_NULL_TYPETYPE(  arg4, "cairo_matrix_init - arg4 (yy)");
		validate_NULL_TYPETYPE(  arg5, "cairo_matrix_init - arg5 (x0)");
		validate_NULL_TYPETYPE(  arg6, "cairo_matrix_init - arg6 (y0)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}
