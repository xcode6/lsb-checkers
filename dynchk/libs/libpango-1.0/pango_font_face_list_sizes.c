// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_font_face_list_sizes
static void(*funcptr) (PangoFontFace * , int * * , int * ) = 0;

extern int __lsb_check_params;
void pango_font_face_list_sizes (PangoFontFace * arg0 , int * * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_font_face_list_sizes()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_font_face_list_sizes");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_font_face_list_sizes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_font_face_list_sizes() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_font_face_list_sizes - arg0 (face)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_font_face_list_sizes - arg0 (face)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_font_face_list_sizes - arg1 (sizes)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_font_face_list_sizes - arg1 (sizes)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_font_face_list_sizes - arg2 (n_sizes)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_font_face_list_sizes - arg2 (n_sizes)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

