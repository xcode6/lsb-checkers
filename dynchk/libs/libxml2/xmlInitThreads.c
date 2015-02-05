// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/threads.h>
#undef xmlInitThreads
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void xmlInitThreads ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlInitThreads()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlInitThreads", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlInitThreads. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlInitThreads() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}
