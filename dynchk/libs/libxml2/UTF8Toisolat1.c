// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/encoding.h>
#undef UTF8Toisolat1
static int(*funcptr) (unsigned char * , int * , const unsigned char * , int * ) = 0;

extern int __lsb_check_params;
int UTF8Toisolat1 (unsigned char * arg0 , int * arg1 , const unsigned char * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for UTF8Toisolat1()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "UTF8Toisolat1", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load UTF8Toisolat1. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "UTF8Toisolat1() - validating");
		validate_RWaddress( arg0, "UTF8Toisolat1 - arg0 (out)");
		validate_NULL_TYPETYPE(  arg0, "UTF8Toisolat1 - arg0 (out)");
		validate_RWaddress( arg1, "UTF8Toisolat1 - arg1 (outlen)");
		validate_NULL_TYPETYPE(  arg1, "UTF8Toisolat1 - arg1 (outlen)");
		validate_Rdaddress( arg2, "UTF8Toisolat1 - arg2 (in)");
		validate_NULL_TYPETYPE(  arg2, "UTF8Toisolat1 - arg2 (in)");
		validate_RWaddress( arg3, "UTF8Toisolat1 - arg3 (inlen)");
		validate_NULL_TYPETYPE(  arg3, "UTF8Toisolat1 - arg3 (inlen)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

