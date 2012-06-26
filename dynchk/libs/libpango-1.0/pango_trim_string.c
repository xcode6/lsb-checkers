// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango-utils.h>
#undef pango_trim_string
static char *(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
char * pango_trim_string (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_trim_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_trim_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_trim_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_trim_string() - validating");
		validate_Rdaddress( arg0, "pango_trim_string - arg0 (str)");
		validate_NULL_TYPETYPE(  arg0, "pango_trim_string - arg0 (str)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

