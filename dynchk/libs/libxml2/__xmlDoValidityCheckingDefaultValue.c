// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/globals.h>
#undef __xmlDoValidityCheckingDefaultValue
static int *(*funcptr) () = 0;

extern int __lsb_check_params;
int * __xmlDoValidityCheckingDefaultValue ()
{
	int reset_flag = __lsb_check_params;
	int * ret_value  ;
	__lsb_output(4, "Invoking wrapper for __xmlDoValidityCheckingDefaultValue()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__xmlDoValidityCheckingDefaultValue");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load __xmlDoValidityCheckingDefaultValue. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__xmlDoValidityCheckingDefaultValue() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}
