// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char *, unsigned int *, unsigned int *, unsigned char * *, int *, int *) = 0;

int XReadBitmapFileData(char * arg0, unsigned int * arg1, unsigned int * arg2, unsigned char * * arg3, int * arg4, int * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XReadBitmapFileData");
	validate_NULL_TYPETYPE(arg0, "XReadBitmapFileData");
	validate_NULL_TYPETYPE(arg1, "XReadBitmapFileData");
	validate_NULL_TYPETYPE(arg2, "XReadBitmapFileData");
	validate_NULL_TYPETYPE(arg3, "XReadBitmapFileData");
	validate_NULL_TYPETYPE(arg4, "XReadBitmapFileData");
	validate_NULL_TYPETYPE(arg5, "XReadBitmapFileData");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

int __lsb_XReadBitmapFileData(char * arg0, unsigned int * arg1, unsigned int * arg2, unsigned char * * arg3, int * arg4, int * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XReadBitmapFileData");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

