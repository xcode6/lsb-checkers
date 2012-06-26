// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <wchar.h>
#undef __wcstoul_internal
static unsigned long int(*funcptr) (const wchar_t * , wchar_t * * , int , int ) = 0;

extern int __lsb_check_params;
unsigned long int __wcstoul_internal (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	unsigned long int ret_value  ;
	__lsb_output(4, "Invoking wrapper for __wcstoul_internal()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "__wcstoul_internal", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "__wcstoul_internal", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "__wcstoul_internal", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "__wcstoul_internal", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "__wcstoul_internal", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "__wcstoul_internal", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "__wcstoul_internal", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load __wcstoul_internal. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__wcstoul_internal() - validating");
		validate_Rdaddress( arg0, "__wcstoul_internal - arg0");
		validate_NULL_TYPETYPE(  arg0, "__wcstoul_internal - arg0");
		validate_RWaddress( arg1, "__wcstoul_internal - arg1");
		validate_NULL_TYPETYPE(  arg1, "__wcstoul_internal - arg1");
		validate_NULL_TYPETYPE(  arg2, "__wcstoul_internal - arg2");
		validate_NULL_TYPETYPE(  arg3, "__wcstoul_internal - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

