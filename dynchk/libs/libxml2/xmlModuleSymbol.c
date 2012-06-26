// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlmodule.h>
#undef xmlModuleSymbol
static int(*funcptr) (xmlModulePtr , const char * , void * * ) = 0;

extern int __lsb_check_params;
int xmlModuleSymbol (xmlModulePtr arg0 , const char * arg1 , void * * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlModuleSymbol()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlModuleSymbol", "LIBXML2_2.6.17");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlModuleSymbol. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlModuleSymbol() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlModuleSymbol - arg0 (module)");
		validate_Rdaddress( arg1, "xmlModuleSymbol - arg1 (name)");
		validate_NULL_TYPETYPE(  arg1, "xmlModuleSymbol - arg1 (name)");
		validate_RWaddress( arg2, "xmlModuleSymbol - arg2 (result)");
		validate_NULL_TYPETYPE(  arg2, "xmlModuleSymbol - arg2 (result)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

