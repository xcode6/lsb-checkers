// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpointer.h>
#include <libxml2/libxml/xpath.h>
#undef xmlXPtrLocationSetAdd
static void(*funcptr) (xmlLocationSetPtr , xmlXPathObjectPtr ) = 0;

extern int __lsb_check_params;
void xmlXPtrLocationSetAdd (xmlLocationSetPtr arg0 , xmlXPathObjectPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlXPtrLocationSetAdd()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPtrLocationSetAdd", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPtrLocationSetAdd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPtrLocationSetAdd() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPtrLocationSetAdd - arg0 (cur)");
		validate_NULL_TYPETYPE(  arg1, "xmlXPtrLocationSetAdd - arg1 (val)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

