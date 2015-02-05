// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/ppd.h>
#undef ppdPageWidth
static float(*funcptr) (ppd_file_t * , const char * ) = 0;

extern int __lsb_check_params;
float ppdPageWidth (ppd_file_t * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	__lsb_output(4, "Invoking wrapper for ppdPageWidth()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ppdPageWidth");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ppdPageWidth. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ppdPageWidth() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ppdPageWidth - arg0 (ppd)");
		}
		validate_NULL_TYPETYPE(  arg0, "ppdPageWidth - arg0 (ppd)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "ppdPageWidth - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "ppdPageWidth - arg1 (name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
