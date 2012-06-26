// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <dirent.h>
#undef scandir64
static int(*funcptr) (const char * , struct dirent64 * * * , int(* )(const struct dirent64 *), int(* )(const struct dirent64 * *, const struct dirent64 * *)) = 0;

extern int __lsb_check_params;
int scandir64 (const char * arg0 , struct dirent64 * * * arg1 , int(* arg2 )(const struct dirent64 *), int(* arg3 )(const struct dirent64 * *, const struct dirent64 * *))
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for scandir64()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "scandir64", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "scandir64", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "scandir64", "GLIBC_2.2");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "scandir64", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "scandir64", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "scandir64", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "scandir64", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load scandir64. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "scandir64() - validating");
		validate_Rdaddress( arg0, "scandir64 - arg0 (__dir)");
		validate_NULL_TYPETYPE(  arg0, "scandir64 - arg0 (__dir)");
		validate_RWaddress( arg1, "scandir64 - arg1 (__namelist)");
		validate_NULL_TYPETYPE(  arg1, "scandir64 - arg1 (__namelist)");
		validate_Rdaddress( arg2, "scandir64 - arg2 (__selector)");
		validate_NULL_TYPETYPE(  arg2, "scandir64 - arg2 (__selector)");
		validate_Rdaddress( arg3, "scandir64 - arg3 (__cmp)");
		validate_NULL_TYPETYPE(  arg3, "scandir64 - arg3 (__cmp)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

