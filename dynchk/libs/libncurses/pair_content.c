// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef pair_content
static int(*funcptr) (short , short * , short * ) = 0;

int pair_content (short arg0 , short * arg1 , short * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pair_content");
	validate_NULL_TYPETYPE(  arg0, "pair_content");
	validate_Rdaddress( arg1, "pair_content");
	validate_NULL_TYPETYPE(  arg1, "pair_content");
	validate_Rdaddress( arg2, "pair_content");
	validate_NULL_TYPETYPE(  arg2, "pair_content");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_pair_content (short arg0 , short * arg1 , short * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pair_content");
	return funcptr(arg0, arg1, arg2);
}

