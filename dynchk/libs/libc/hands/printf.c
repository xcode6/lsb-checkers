// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#undef printf

static int (*funcptr)(const char *, ...) = 0;

extern int __lsb_check_params;
int printf(const char *format, ...)
{	
	int reset_flag = __lsb_check_params;
	int ret_value  ;

	va_list args;
	va_start(args, format);

	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "vprintf", "GLIBC_2.2.5");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "printf()");
		validate_RWaddress(format, "printf");
	}
	__lsb_check_params = reset_flag;
	ret_value = funcptr(format, args);
	return ret_value;
}