// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stdio.h>
#include <stddef.h>
#undef setbuffer
static void(*funcptr) (FILE * , char * , size_t ) = 0;

extern int __lsb_check_params;
void setbuffer (FILE * arg0 , char * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "setbuffer", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "setbuffer()");
		validate_RWaddress( arg0, "setbuffer - arg0");
		validate_NULL_TYPETYPE(  arg0, "setbuffer - arg0");
		validate_RWaddress( arg1, "setbuffer - arg1");
		validate_NULL_TYPETYPE(  arg1, "setbuffer - arg1");
		validate_NULL_TYPETYPE(  arg2, "setbuffer - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

