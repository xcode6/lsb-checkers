// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, KeySym *, unsigned int, char *, int, int *) = 0;

 XkbTranslateKeySym(Display * arg0, KeySym * arg1, unsigned int arg2, char * arg3, int arg4, int * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbTranslateKeySym");
	validate_NULL_TYPETYPE(arg0, "XkbTranslateKeySym");
	validate_NULL_TYPETYPE(arg1, "XkbTranslateKeySym");
	validate_NULL_TYPETYPE(arg2, "XkbTranslateKeySym");
	validate_NULL_TYPETYPE(arg3, "XkbTranslateKeySym");
	validate_NULL_TYPETYPE(arg4, "XkbTranslateKeySym");
	validate_NULL_TYPETYPE(arg5, "XkbTranslateKeySym");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

 __lsb_XkbTranslateKeySym(Display * arg0, KeySym * arg1, unsigned int arg2, char * arg3, int arg4, int * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbTranslateKeySym");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

