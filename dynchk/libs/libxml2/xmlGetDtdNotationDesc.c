// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/valid.h>
#undef xmlGetDtdNotationDesc
static xmlNotationPtr(*funcptr) (xmlDtdPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlNotationPtr xmlGetDtdNotationDesc (xmlDtdPtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlNotationPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlGetDtdNotationDesc()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlGetDtdNotationDesc", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlGetDtdNotationDesc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlGetDtdNotationDesc() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlGetDtdNotationDesc - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlGetDtdNotationDesc - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlGetDtdNotationDesc - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

