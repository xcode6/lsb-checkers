// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdlib.h>
#undef __strtol_internal
static long int(*funcptr) (const char * , char * * , int , int ) = 0;

extern int __lsb_check_params;
long int __strtol_internal (const char * arg0 , char * * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	long int ret_value  ;
	__lsb_output(4, "Invoking wrapper for __strtol_internal()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "__strtol_internal", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "__strtol_internal", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "__strtol_internal", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "__strtol_internal", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "__strtol_internal", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "__strtol_internal", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "__strtol_internal", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load __strtol_internal. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__strtol_internal() - validating");
		validate_Rdaddress( arg0, "__strtol_internal - arg0");
		validate_NULL_TYPETYPE(  arg0, "__strtol_internal - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "__strtol_internal - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "__strtol_internal - arg1");
		validate_NULL_TYPETYPE(  arg2, "__strtol_internal - arg2");
		validate_NULL_TYPETYPE(  arg3, "__strtol_internal - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

