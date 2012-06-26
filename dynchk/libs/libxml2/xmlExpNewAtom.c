// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlExpNewAtom
static xmlExpNodePtr(*funcptr) (xmlExpCtxtPtr , const xmlChar * , int ) = 0;

extern int __lsb_check_params;
xmlExpNodePtr xmlExpNewAtom (xmlExpCtxtPtr arg0 , const xmlChar * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlExpNodePtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlExpNewAtom()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlExpNewAtom", "LIBXML2_2.6.21");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlExpNewAtom. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlExpNewAtom() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlExpNewAtom - arg0 (ctxt)");
		validate_Rdaddress( arg1, "xmlExpNewAtom - arg1 (name)");
		validate_NULL_TYPETYPE(  arg1, "xmlExpNewAtom - arg1 (name)");
		validate_NULL_TYPETYPE(  arg2, "xmlExpNewAtom - arg2 (len)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

