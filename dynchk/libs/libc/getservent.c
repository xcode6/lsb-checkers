// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <netdb.h>
#undef getservent
static struct servent *(*funcptr) () = 0;

extern int __lsb_check_params;
struct servent * getservent ()
{
	int reset_flag = __lsb_check_params;
	struct servent * ret_value  ;
	__lsb_output(4, "Invoking wrapper for getservent()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "getservent", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getservent", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getservent", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "getservent", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getservent", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "getservent", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getservent", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load getservent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getservent() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

