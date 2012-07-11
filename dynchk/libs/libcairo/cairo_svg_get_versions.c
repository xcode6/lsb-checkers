// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo-svg.h>
#undef cairo_svg_get_versions
static void(*funcptr) (const cairo_svg_version_t * * , int * ) = 0;

extern int __lsb_check_params;
void cairo_svg_get_versions (const cairo_svg_version_t * * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_svg_get_versions()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_svg_get_versions");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_svg_get_versions. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_svg_get_versions() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_svg_get_versions - arg0 (versions)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_svg_get_versions - arg0 (versions)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_svg_get_versions - arg1 (num_versions)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_svg_get_versions - arg1 (num_versions)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
