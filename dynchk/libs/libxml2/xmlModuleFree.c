// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlmodule.h>
#undef xmlModuleFree
static int(*funcptr) (xmlModulePtr ) = 0;

extern int __lsb_check_params;
int xmlModuleFree (xmlModulePtr arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlModuleFree()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlModuleFree", "LIBXML2_2.6.17");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlModuleFree. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlModuleFree() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlModuleFree - arg0 (module)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

