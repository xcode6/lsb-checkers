// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <signal.h>
#undef sigprocmask
static int(*funcptr) (int , const sigset_t * , sigset_t * ) = 0;

extern int __lsb_check_params;
int sigprocmask (int arg0 , const sigset_t * arg1 , sigset_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for sigprocmask()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "sigprocmask", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "sigprocmask", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sigprocmask", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sigprocmask", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sigprocmask", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "sigprocmask", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sigprocmask", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load sigprocmask. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sigprocmask() - validating");
		validate_NULL_TYPETYPE(  arg0, "sigprocmask - arg0 (__how)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "sigprocmask - arg1 (__set)");
		}
		validate_NULL_TYPETYPE(  arg1, "sigprocmask - arg1 (__set)");
		if( arg2 ) {
		validate_RWaddress( arg2, "sigprocmask - arg2 (__oset)");
		}
		validate_NULL_TYPETYPE(  arg2, "sigprocmask - arg2 (__oset)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

