// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <net/if.h>
#undef if_nameindex
static struct if_nameindex *(*funcptr) () = 0;

extern int __lsb_check_params;
struct if_nameindex * if_nameindex ()
{
	int reset_flag = __lsb_check_params;
	struct if_nameindex * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "if_nameindex");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "if_nameindex()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

