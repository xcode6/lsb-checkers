// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <libintl.h>
#undef dcngettext
static char *(*funcptr) (const char * , const char * , const char * , unsigned long , int ) = 0;

extern int __lsb_check_params;
char * dcngettext (const char * arg0 , const char * arg1 , const char * arg2 , unsigned long arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dcngettext");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "dcngettext()");
		validate_Rdaddress( arg0, "dcngettext - arg0");
		validate_NULL_TYPETYPE(  arg0, "dcngettext - arg0");
		validate_Rdaddress( arg1, "dcngettext - arg1");
		validate_NULL_TYPETYPE(  arg1, "dcngettext - arg1");
		validate_Rdaddress( arg2, "dcngettext - arg2");
		validate_NULL_TYPETYPE(  arg2, "dcngettext - arg2");
		validate_NULL_TYPETYPE(  arg3, "dcngettext - arg3");
		validate_NULL_TYPETYPE(  arg4, "dcngettext - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

