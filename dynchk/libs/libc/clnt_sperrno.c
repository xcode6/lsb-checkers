// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <rpc/clnt.h>
#undef clnt_sperrno
static char *(*funcptr) (enum clnt_stat ) = 0;

extern int __lsb_check_params;
char * clnt_sperrno (enum clnt_stat arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "clnt_sperrno", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "clnt_sperrno()");
		validate_NULL_TYPETYPE(  arg0, "clnt_sperrno - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

