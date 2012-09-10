// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <zlib.h>
#undef gzopen
static gzFile(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
gzFile gzopen (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	gzFile ret_value  ;
	__lsb_output(4, "Invoking wrapper for gzopen()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzopen");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gzopen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gzopen() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gzopen - arg0 (path)");
		}
		validate_NULL_TYPETYPE(  arg0, "gzopen - arg0 (path)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gzopen - arg1 (mode)");
		}
		validate_NULL_TYPETYPE(  arg1, "gzopen - arg1 (mode)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

