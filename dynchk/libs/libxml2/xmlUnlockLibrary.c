// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/threads.h>
#undef xmlUnlockLibrary
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void xmlUnlockLibrary ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlUnlockLibrary()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlUnlockLibrary", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlUnlockLibrary. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlUnlockLibrary() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

