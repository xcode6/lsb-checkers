// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef chgat
static int(*funcptr) (int , attr_t , short , const void * ) = 0;

int chgat (int arg0 , attr_t arg1 , short arg2 , const void * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "chgat");
	validate_NULL_TYPETYPE(arg0, "chgat");
	validate_NULL_TYPETYPE(arg1, "chgat");
	validate_NULL_TYPETYPE(arg2, "chgat");
	validate_NULL_TYPETYPE(arg3, "chgat");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_chgat (int arg0 , attr_t arg1 , short arg2 , const void * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "chgat");
	return funcptr(arg0, arg1, arg2, arg3);
}

