// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <zlib.h>
#undef deflateEnd
static int(*funcptr) (z_streamp ) = 0;

extern int __lsb_check_params;
int deflateEnd (z_streamp arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for deflateEnd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflateEnd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load deflateEnd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "deflateEnd() - validating");
		validate_NULL_TYPETYPE(  arg0, "deflateEnd - arg0 (strm)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

