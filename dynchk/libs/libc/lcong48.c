// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdlib.h>
#undef lcong48
static void(*funcptr) (unsigned short []) = 0;

extern int __lsb_check_params;
void lcong48 (unsigned short arg0 [7])
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for lcong48()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "lcong48", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "lcong48", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "lcong48", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "lcong48", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "lcong48", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "lcong48", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "lcong48", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load lcong48. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "lcong48() - validating");
		validate_NULL_TYPETYPE(  arg0, "lcong48 - arg0 (__param)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

