// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/ppd.h>
#undef ppdIsMarked
static int(*funcptr) (ppd_file_t * , const char * , const char * ) = 0;

extern int __lsb_check_params;
int ppdIsMarked (ppd_file_t * arg0 , const char * arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for ppdIsMarked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ppdIsMarked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ppdIsMarked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ppdIsMarked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ppdIsMarked - arg0 (ppd)");
		}
		validate_NULL_TYPETYPE(  arg0, "ppdIsMarked - arg0 (ppd)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "ppdIsMarked - arg1 (keyword)");
		}
		validate_NULL_TYPETYPE(  arg1, "ppdIsMarked - arg1 (keyword)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "ppdIsMarked - arg2 (option)");
		}
		validate_NULL_TYPETYPE(  arg2, "ppdIsMarked - arg2 (option)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

