// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <sys/types.h>
#include <grp.h>
#undef getgrgid
static struct group *(*funcptr) (gid_t ) = 0;

extern int __lsb_check_params;
struct group * getgrgid (gid_t arg0 )
{
	int reset_flag = __lsb_check_params;
	struct group * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "getgrgid", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getgrgid()");
		validate_NULL_TYPETYPE(  arg0, "getgrgid - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

