// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/xmlregexp.h>
#undef xmlExpNewCtxt
static xmlExpCtxtPtr(*funcptr) (int , xmlDictPtr ) = 0;

extern int __lsb_check_params;
xmlExpCtxtPtr xmlExpNewCtxt (int arg0 , xmlDictPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlExpCtxtPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlExpNewCtxt()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlExpNewCtxt", "LIBXML2_2.6.21");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlExpNewCtxt. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlExpNewCtxt() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlExpNewCtxt - arg0 (maxNodes)");
		validate_NULL_TYPETYPE(  arg1, "xmlExpNewCtxt - arg1 (dict)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

