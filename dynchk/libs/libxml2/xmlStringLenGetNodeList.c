// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlStringLenGetNodeList
static xmlNodePtr(*funcptr) (xmlDocPtr , const xmlChar * , int ) = 0;

extern int __lsb_check_params;
xmlNodePtr xmlStringLenGetNodeList (xmlDocPtr arg0 , const xmlChar * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlNodePtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlStringLenGetNodeList()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlStringLenGetNodeList", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlStringLenGetNodeList. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlStringLenGetNodeList() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlStringLenGetNodeList - arg0 (doc)");
		validate_Rdaddress( arg1, "xmlStringLenGetNodeList - arg1 (value)");
		validate_NULL_TYPETYPE(  arg1, "xmlStringLenGetNodeList - arg1 (value)");
		validate_NULL_TYPETYPE(  arg2, "xmlStringLenGetNodeList - arg2 (len)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

