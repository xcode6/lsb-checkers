// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XLocaleOfOM
static char *(*funcptr) (XOM ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * XLocaleOfOM (XOM arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XLocaleOfOM");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XLocaleOfOM()");
		validate_NULL_TYPETYPE(  arg0, "XLocaleOfOM - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

