// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/stat.h>
#undef fchmod
static int(*funcptr) (int , mode_t ) = 0;

int fchmod (int arg0 , mode_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fchmod");
	validate_NULL_TYPETYPE(arg0, "fchmod");
	validate_NULL_TYPETYPE(arg1, "fchmod");
	return funcptr(arg0, arg1);
}

int lsb_fchmod (int arg0 , mode_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fchmod");
	return funcptr(arg0, arg1);
}

