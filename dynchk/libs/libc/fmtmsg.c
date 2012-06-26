// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fmtmsg.h>
#undef fmtmsg
static int(*funcptr) (long int , const char * , int , const char * , const char * , const char * ) = 0;

extern int __lsb_check_params;
int fmtmsg (long int arg0 , const char * arg1 , int arg2 , const char * arg3 , const char * arg4 , const char * arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for fmtmsg()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "fmtmsg", "GLIBC_2.1");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "fmtmsg", "GLIBC_2.1");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "fmtmsg", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "fmtmsg", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "fmtmsg", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "fmtmsg", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "fmtmsg", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load fmtmsg. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fmtmsg() - validating");
		validate_NULL_TYPETYPE(  arg0, "fmtmsg - arg0 (__classification)");
		validate_Rdaddress( arg1, "fmtmsg - arg1 (__label)");
		validate_NULL_TYPETYPE(  arg1, "fmtmsg - arg1 (__label)");
		validate_NULL_TYPETYPE(  arg2, "fmtmsg - arg2 (__severity)");
		validate_Rdaddress( arg3, "fmtmsg - arg3 (__text)");
		validate_NULL_TYPETYPE(  arg3, "fmtmsg - arg3 (__text)");
		validate_Rdaddress( arg4, "fmtmsg - arg4 (__action)");
		validate_NULL_TYPETYPE(  arg4, "fmtmsg - arg4 (__action)");
		validate_Rdaddress( arg5, "fmtmsg - arg5 (__tag)");
		validate_NULL_TYPETYPE(  arg5, "fmtmsg - arg5 (__tag)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

