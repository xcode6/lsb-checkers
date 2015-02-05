// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <stddef.h>
#include <sys/sendfile.h>
#undef sendfile
static ssize_t(*funcptr) (int , int , off_t * , size_t ) = 0;

extern int __lsb_check_params;
ssize_t sendfile (int arg0 , int arg1 , off_t * arg2 , size_t arg3 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for sendfile()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "sendfile", "GLIBC_2.1");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sendfile", "GLIBC_2.1");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sendfile", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "sendfile", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sendfile", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "sendfile", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sendfile", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load sendfile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sendfile() - validating");
		validate_NULL_TYPETYPE(  arg0, "sendfile - arg0 (__out_fd)");
		validate_NULL_TYPETYPE(  arg1, "sendfile - arg1 (__in_fd)");
		validate_RWaddress( arg2, "sendfile - arg2 (__offset)");
		validate_NULL_TYPETYPE(  arg2, "sendfile - arg2 (__offset)");
		validate_NULL_TYPETYPE(  arg3, "sendfile - arg3 (__count)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
