// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stddef.h>
#include <string.h>
#undef strxfrm
static size_t(*funcptr) (char * , const char * , size_t ) = 0;

extern int __lsb_check_params;
size_t strxfrm (char * arg0 , const char * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "strxfrm", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strxfrm()");
		validate_RWaddress( arg0, "strxfrm - arg0");
		validate_NULL_TYPETYPE(  arg0, "strxfrm - arg0");
		validate_Rdaddress( arg1, "strxfrm - arg1");
		validate_NULL_TYPETYPE(  arg1, "strxfrm - arg1");
		validate_NULL_TYPETYPE(  arg2, "strxfrm - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

