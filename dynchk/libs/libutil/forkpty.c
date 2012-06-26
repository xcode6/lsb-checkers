// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <termios.h>
#include <sys/ioctl.h>
#include <pty.h>
#undef forkpty
static int(*funcptr) (int * , char * , const struct termios * , const struct winsize * ) = 0;

extern int __lsb_check_params;
int forkpty (int * arg0 , char * arg1 , const struct termios * arg2 , const struct winsize * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for forkpty()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "forkpty", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "forkpty", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "forkpty", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "forkpty", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "forkpty", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "forkpty", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "forkpty", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load forkpty. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "forkpty() - validating");
		validate_RWaddress( arg0, "forkpty - arg0 (__amaster)");
		validate_NULL_TYPETYPE(  arg0, "forkpty - arg0 (__amaster)");
		validate_RWaddress( arg1, "forkpty - arg1 (__name)");
		validate_NULL_TYPETYPE(  arg1, "forkpty - arg1 (__name)");
		validate_Rdaddress( arg2, "forkpty - arg2 (__termp)");
		validate_NULL_TYPETYPE(  arg2, "forkpty - arg2 (__termp)");
		validate_Rdaddress( arg3, "forkpty - arg3 (__winp)");
		validate_NULL_TYPETYPE(  arg3, "forkpty - arg3 (__winp)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

