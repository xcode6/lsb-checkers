// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/ppd.h>
#undef ppdEmitFd
static int(*funcptr) (ppd_file_t * , int , ppd_section_t ) = 0;

extern int __lsb_check_params;
int ppdEmitFd (ppd_file_t * arg0 , int arg1 , ppd_section_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for ppdEmitFd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ppdEmitFd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ppdEmitFd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ppdEmitFd() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ppdEmitFd - arg0 (ppd)");
		}
		validate_NULL_TYPETYPE(  arg0, "ppdEmitFd - arg0 (ppd)");
		validate_NULL_TYPETYPE(  arg1, "ppdEmitFd - arg1 (fd)");
		validate_NULL_TYPETYPE(  arg2, "ppdEmitFd - arg2 (section)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

