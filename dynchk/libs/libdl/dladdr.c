// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#undef dladdr
static int(*funcptr) (const void * , Dl_info * ) = 0;

extern int __lsb_check_params;
int dladdr (const void * arg0 , Dl_info * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for dladdr()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "dladdr", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "dladdr", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "dladdr", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "dladdr", "GLIBC_2.0");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "dladdr", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "dladdr", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "dladdr", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load dladdr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "dladdr() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "dladdr - arg0 (__address)");
		}
		validate_NULL_TYPETYPE(  arg0, "dladdr - arg0 (__address)");
		if( arg1 ) {
		validate_RWaddress( arg1, "dladdr - arg1 (__info)");
		}
		validate_NULL_TYPETYPE(  arg1, "dladdr - arg1 (__info)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

