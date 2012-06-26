// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef slk_label
static char *(*funcptr) (int ) = 0;

extern int __lsb_check_params;
char * slk_label (int arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for slk_label()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_label");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load slk_label. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "slk_label() - validating");
		validate_NULL_TYPETYPE(  arg0, "slk_label - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

