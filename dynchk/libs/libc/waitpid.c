// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <sys/wait.h>
#undef waitpid
static pid_t(*funcptr) (pid_t , int * , int ) = 0;

extern int __lsb_check_params;
pid_t waitpid (pid_t arg0 , int * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	pid_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for waitpid()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "waitpid", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "waitpid", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "waitpid", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "waitpid", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "waitpid", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "waitpid", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "waitpid", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load waitpid. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "waitpid() - validating");
		validate_NULL_TYPETYPE(  arg0, "waitpid - arg0 (__pid)");
		validate_RWaddress( arg1, "waitpid - arg1 (__stat_loc)");
		validate_NULL_TYPETYPE(  arg1, "waitpid - arg1 (__stat_loc)");
		validate_NULL_TYPETYPE(  arg2, "waitpid - arg2 (__options)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

