// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <iconv.h>
#undef iconv_open
static iconv_t(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
iconv_t iconv_open (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	iconv_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iconv_open");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "iconv_open - arg0");
		validate_NULL_TYPETYPE(  arg0, "iconv_open - arg0");
	validate_Rdaddress( arg1, "iconv_open - arg1");
		validate_NULL_TYPETYPE(  arg1, "iconv_open - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

