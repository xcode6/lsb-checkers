// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <zlib.h>
#undef gzdopen
static gzFile(*funcptr) (int , const char * ) = 0;

extern int __lsb_check_params;
gzFile gzdopen (int arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	gzFile ret_value  ;
	__lsb_output(4, "Invoking wrapper for gzdopen()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzdopen");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gzdopen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gzdopen() - validating");
		validate_NULL_TYPETYPE(  arg0, "gzdopen - arg0 (fd)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gzdopen - arg1 (mode)");
		}
		validate_NULL_TYPETYPE(  arg1, "gzdopen - arg1 (mode)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

