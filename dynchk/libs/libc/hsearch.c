// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <search.h>
#undef hsearch
static ENTRY *(*funcptr) (ENTRY , ACTION ) = 0;

ENTRY * hsearch (ENTRY arg0 , ACTION arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "hsearch");
	validate_NULL_TYPETYPE(  arg0, "hsearch");
	validate_NULL_TYPETYPE(  arg1, "hsearch");
	return funcptr(arg0, arg1);
}

ENTRY * __lsb_hsearch (ENTRY arg0 , ACTION arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "hsearch");
	return funcptr(arg0, arg1);
}

