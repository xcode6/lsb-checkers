// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
#undef XrmParseCommand
static void(*funcptr) (XrmDatabase * , XrmOptionDescList , int , const char * , int * , char * * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XrmParseCommand (XrmDatabase * arg0 , XrmOptionDescList arg1 , int arg2 , const char * arg3 , int * arg4 , char * * arg5 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmParseCommand");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XrmParseCommand()");
	validate_Rdaddress( arg0, "XrmParseCommand - arg0");
		validate_NULL_TYPETYPE(  arg0, "XrmParseCommand - arg0");
		validate_NULL_TYPETYPE(  arg1, "XrmParseCommand - arg1");
		validate_NULL_TYPETYPE(  arg2, "XrmParseCommand - arg2");
	validate_Rdaddress( arg3, "XrmParseCommand - arg3");
		validate_NULL_TYPETYPE(  arg3, "XrmParseCommand - arg3");
	validate_Rdaddress( arg4, "XrmParseCommand - arg4");
		validate_NULL_TYPETYPE(  arg4, "XrmParseCommand - arg4");
	validate_Rdaddress( arg5, "XrmParseCommand - arg5");
	validate_Rdaddress(* arg5, "XrmParseCommand - arg5");
		validate_NULL_TYPETYPE(  arg5, "XrmParseCommand - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

