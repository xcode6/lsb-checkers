// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <freetype/ftxf86.h>
#undef FT_Get_X11_Font_Format
static const char *(*funcptr) (FT_Face ) = 0;

extern int __lsb_check_params;
const char * FT_Get_X11_Font_Format (FT_Face arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Get_X11_Font_Format()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Get_X11_Font_Format");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Get_X11_Font_Format. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Get_X11_Font_Format() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Get_X11_Font_Format - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

