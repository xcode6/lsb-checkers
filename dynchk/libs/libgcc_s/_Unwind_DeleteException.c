// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
static void(*funcptr)(struct _Unwind_Exception *) = 0;

void _Unwind_DeleteException(struct _Unwind_Exception * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_DeleteException");
	validate_NULL_TYPETYPE(arg0, "_Unwind_DeleteException");
	funcptr(arg0);
}

void __lsb__Unwind_DeleteException(struct _Unwind_Exception * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_DeleteException");
	funcptr(arg0);
}

