// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <wctype.h>
#undef wctrans
static wctrans_t(*funcptr) (const char * ) = 0;

wctrans_t wctrans (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wctrans");
	validate_NULL_TYPETYPE(arg0, "wctrans");
	return funcptr(arg0);
}

wctrans_t lsb_wctrans (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wctrans");
	return funcptr(arg0);
}

