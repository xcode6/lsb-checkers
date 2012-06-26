// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/catalog.h>
#undef xmlCatalogLocalResolveURI
static xmlChar *(*funcptr) (void * , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlChar * xmlCatalogLocalResolveURI (void * arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlCatalogLocalResolveURI()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlCatalogLocalResolveURI", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlCatalogLocalResolveURI. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlCatalogLocalResolveURI() - validating");
		validate_RWaddress( arg0, "xmlCatalogLocalResolveURI - arg0 (catalogs)");
		validate_NULL_TYPETYPE(  arg0, "xmlCatalogLocalResolveURI - arg0 (catalogs)");
		validate_Rdaddress( arg1, "xmlCatalogLocalResolveURI - arg1 (URI)");
		validate_NULL_TYPETYPE(  arg1, "xmlCatalogLocalResolveURI - arg1 (URI)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

