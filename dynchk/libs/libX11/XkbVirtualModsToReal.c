// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/extensions/XKBstr.h>
#include <X11/XKBlib.h>
#undef XkbVirtualModsToReal
static int(*funcptr) (XkbDescPtr , unsigned int , unsigned int * ) = 0;

extern int __lsb_check_params;
int XkbVirtualModsToReal (XkbDescPtr arg0 , unsigned int arg1 , unsigned int * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XkbVirtualModsToReal()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbVirtualModsToReal");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbVirtualModsToReal. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbVirtualModsToReal() - validating");
		validate_NULL_TYPETYPE(  arg0, "XkbVirtualModsToReal - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbVirtualModsToReal - arg1");
		validate_RWaddress( arg2, "XkbVirtualModsToReal - arg2");
		validate_NULL_TYPETYPE(  arg2, "XkbVirtualModsToReal - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

