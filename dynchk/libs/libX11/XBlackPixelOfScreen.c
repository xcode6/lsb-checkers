// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Screen *) = 0;

unsigned long XBlackPixelOfScreen(Screen * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XBlackPixelOfScreen");
	validate_NULL_TYPETYPE(arg0, "XBlackPixelOfScreen");
	return funcptr(arg0);
}

unsigned long __lsb_XBlackPixelOfScreen(Screen * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XBlackPixelOfScreen");
	return funcptr(arg0);
}

