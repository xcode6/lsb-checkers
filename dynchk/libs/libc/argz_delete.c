// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <argz.h>
#undef argz_delete
static void(*funcptr) (char * * , size_t * , char * ) = 0;

extern int __lsb_check_params;
void argz_delete (char * * arg0 , size_t * arg1 , char * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for argz_delete()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "argz_delete", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "argz_delete", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "argz_delete", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "argz_delete", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "argz_delete", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "argz_delete", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "argz_delete", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load argz_delete. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "argz_delete() - validating");
		validate_RWaddress( arg0, "argz_delete - arg0 (argz)");
		validate_NULL_TYPETYPE(  arg0, "argz_delete - arg0 (argz)");
		validate_RWaddress( arg1, "argz_delete - arg1 (argz_len)");
		validate_NULL_TYPETYPE(  arg1, "argz_delete - arg1 (argz_len)");
		validate_RWaddress( arg2, "argz_delete - arg2 (entry)");
		validate_NULL_TYPETYPE(  arg2, "argz_delete - arg2 (entry)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

