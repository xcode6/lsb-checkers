// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <time.h>
#undef ctime_r
static char *(*funcptr) (const time_t * , char * ) = 0;

char * ctime_r (const time_t * arg0 , char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctime_r");
	validate_Rdaddress( arg0, "ctime_r");
	validate_NULL_TYPETYPE(  arg0, "ctime_r");
	validate_Rdaddress( arg1, "ctime_r");
	validate_RWaddress(  arg1, "ctime_r");
	return funcptr(arg0, arg1);
}

char * __lsb_ctime_r (const time_t * arg0 , char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctime_r");
	return funcptr(arg0, arg1);
}

