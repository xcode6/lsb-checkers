// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef crc32
static uLong(*funcptr) (uLong , const Bytef * , uInt ) = 0;

extern int __lsb_check_params;
uLong crc32 (uLong arg0 , const Bytef * arg1 , uInt arg2 )
{
	int reset_flag = __lsb_check_params;
	uLong ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "crc32");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "crc32 - arg0");
	validate_Rdaddress( arg1, "crc32 - arg1");
		validate_NULL_TYPETYPE(  arg1, "crc32 - arg1");
		validate_NULL_TYPETYPE(  arg2, "crc32 - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

