// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <zlib.h>
#undef gzputc
static int(*funcptr) (gzFile , int ) = 0;

extern int __lsb_check_params;
int gzputc (gzFile arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzputc");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "gzputc()");
		validate_NULL_TYPETYPE(  arg0, "gzputc - arg0");
		validate_NULL_TYPETYPE(  arg1, "gzputc - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

