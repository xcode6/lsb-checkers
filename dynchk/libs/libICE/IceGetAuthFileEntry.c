// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/ICE/ICEutil.h>
#undef IceGetAuthFileEntry
static IceAuthFileEntry *(*funcptr) (char * , char * , char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
IceAuthFileEntry * IceGetAuthFileEntry (char * arg0 , char * arg1 , char * arg2 )
{
	int reset_flag = __lsb_check_params;
	IceAuthFileEntry * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceGetAuthFileEntry");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "IceGetAuthFileEntry()");
	validate_RWaddress( arg0, "IceGetAuthFileEntry - arg0");
		validate_NULL_TYPETYPE(  arg0, "IceGetAuthFileEntry - arg0");
	validate_RWaddress( arg1, "IceGetAuthFileEntry - arg1");
		validate_NULL_TYPETYPE(  arg1, "IceGetAuthFileEntry - arg1");
	validate_RWaddress( arg2, "IceGetAuthFileEntry - arg2");
		validate_NULL_TYPETYPE(  arg2, "IceGetAuthFileEntry - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

