// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef wattr_get
static int(*funcptr) (WINDOW * , attr_t * , short * , void * ) = 0;

int wattr_get (WINDOW * arg0 , attr_t * arg1 , short * arg2 , void * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wattr_get");
	validate_Rdaddress( arg0, "wattr_get");
	validate_NULL_TYPETYPE(  arg0, "wattr_get");
	validate_Rdaddress( arg1, "wattr_get");
	validate_NULL_TYPETYPE(  arg1, "wattr_get");
	validate_Rdaddress( arg2, "wattr_get");
	validate_NULL_TYPETYPE(  arg2, "wattr_get");
	validate_Rdaddress( arg3, "wattr_get");
	validate_NULL_TYPETYPE(  arg3, "wattr_get");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_wattr_get (WINDOW * arg0 , attr_t * arg1 , short * arg2 , void * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wattr_get");
	return funcptr(arg0, arg1, arg2, arg3);
}

