// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <sys/resource.h>
#include <sys/wait.h>
#undef wait4
static pid_t(*funcptr) (pid_t , int * , int , struct rusage * ) = 0;

extern int __lsb_check_params;
pid_t wait4 (pid_t arg0 , int * arg1 , int arg2 , struct rusage * arg3 )
{
	int reset_flag = __lsb_check_params;
	pid_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for wait4()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "wait4", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "wait4", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "wait4", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "wait4", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "wait4", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "wait4", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "wait4", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wait4. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wait4() - validating");
		validate_processid(  arg0, "wait4 - arg0 (__pid)");
		validate_RWaddress( arg1, "wait4 - arg1 (__stat_loc)");
		validate_NULL_TYPETYPE(  arg1, "wait4 - arg1 (__stat_loc)");
		validate_NULL_TYPETYPE(  arg2, "wait4 - arg2 (__options)");
		validate_RWaddress( arg3, "wait4 - arg3 (__usage)");
		validate_NULL_TYPETYPE(  arg3, "wait4 - arg3 (__usage)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

