// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <zlib.h>
#undef deflateParams
static int(*funcptr) (z_streamp , int , int ) = 0;

extern int __lsb_check_params;
int deflateParams (z_streamp arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for deflateParams()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflateParams");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load deflateParams. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "deflateParams() - validating");
		validate_NULL_TYPETYPE(  arg0, "deflateParams - arg0 (strm)");
		validate_NULL_TYPETYPE(  arg1, "deflateParams - arg1 (level)");
		validate_NULL_TYPETYPE(  arg2, "deflateParams - arg2 (strategy)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

