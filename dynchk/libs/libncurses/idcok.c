// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef idcok
static void(*funcptr) (WINDOW * , bool ) = 0;

void idcok (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "idcok");
	validate_Rdaddress( arg0, "idcok");
	validate_NULL_TYPETYPE(  arg0, "idcok");
	validate_NULL_TYPETYPE(  arg1, "idcok");
	funcptr(arg0, arg1);
}

void __lsb_idcok (WINDOW * arg0 , bool arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "idcok");
	funcptr(arg0, arg1);
}

