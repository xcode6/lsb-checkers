// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <netdb.h>
#undef freeaddrinfo
static void(*funcptr) (struct addrinfo * ) = 0;

extern int __lsb_check_params;
void freeaddrinfo (struct addrinfo * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "freeaddrinfo");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "freeaddrinfo()");
		validate_RWaddress( arg0, "freeaddrinfo - arg0");
		validate_NULL_TYPETYPE(  arg0, "freeaddrinfo - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

