// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, char *, int, int *) = 0;

char * * XListFonts(Display * arg0, char * arg1, int arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XListFonts");
	validate_NULL_TYPETYPE(arg0, "XListFonts");
	validate_NULL_TYPETYPE(arg1, "XListFonts");
	validate_NULL_TYPETYPE(arg2, "XListFonts");
	validate_NULL_TYPETYPE(arg3, "XListFonts");
	return funcptr(arg0, arg1, arg2, arg3);
}

char * * __lsb_XListFonts(Display * arg0, char * arg1, int arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XListFonts");
	return funcptr(arg0, arg1, arg2, arg3);
}

