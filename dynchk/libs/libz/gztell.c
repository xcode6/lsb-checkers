// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <zlib.h>
#undef gztell
static z_off_t(*funcptr) (gzFile ) = 0;

extern int __lsb_check_params;
z_off_t gztell (gzFile arg0 )
{
	int reset_flag = __lsb_check_params;
	z_off_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gztell");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gztell()");
		validate_NULL_TYPETYPE(  arg0, "gztell - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

