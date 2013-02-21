// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <getopt.h>
#undef getopt_long_only
static int(*funcptr) (int , char *const  [], const char * , const struct option * , int * ) = 0;

extern int __lsb_check_params;
int getopt_long_only (int arg0 , char *const  arg1 [], const char * arg2 , const struct option * arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for getopt_long_only()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "getopt_long_only", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "getopt_long_only", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getopt_long_only", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getopt_long_only", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getopt_long_only", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "getopt_long_only", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getopt_long_only", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load getopt_long_only. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getopt_long_only() - validating");
		validate_NULL_TYPETYPE(  arg0, "getopt_long_only - arg0 (___argc)");
		validate_NULL_TYPETYPE(  arg1, "getopt_long_only - arg1 (___argv)");
		validate_Rdaddress( arg2, "getopt_long_only - arg2 (__shortopts)");
		validate_NULL_TYPETYPE(  arg2, "getopt_long_only - arg2 (__shortopts)");
		validate_Rdaddress( arg3, "getopt_long_only - arg3 (__longopts)");
		validate_NULL_TYPETYPE(  arg3, "getopt_long_only - arg3 (__longopts)");
		validate_RWaddress( arg4, "getopt_long_only - arg4 (__longind)");
		validate_NULL_TYPETYPE(  arg4, "getopt_long_only - arg4 (__longind)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

