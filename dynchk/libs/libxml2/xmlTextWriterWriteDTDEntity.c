// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlTextWriterWriteDTDEntity
static int(*funcptr) (xmlTextWriterPtr , int , const xmlChar * , const xmlChar * , const xmlChar * , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlTextWriterWriteDTDEntity (xmlTextWriterPtr arg0 , int arg1 , const xmlChar * arg2 , const xmlChar * arg3 , const xmlChar * arg4 , const xmlChar * arg5 , const xmlChar * arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextWriterWriteDTDEntity()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextWriterWriteDTDEntity", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextWriterWriteDTDEntity. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextWriterWriteDTDEntity() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextWriterWriteDTDEntity - arg0 (writer)");
		validate_NULL_TYPETYPE(  arg1, "xmlTextWriterWriteDTDEntity - arg1 (pe)");
		validate_Rdaddress( arg2, "xmlTextWriterWriteDTDEntity - arg2 (name)");
		validate_NULL_TYPETYPE(  arg2, "xmlTextWriterWriteDTDEntity - arg2 (name)");
		validate_Rdaddress( arg3, "xmlTextWriterWriteDTDEntity - arg3 (pubid)");
		validate_NULL_TYPETYPE(  arg3, "xmlTextWriterWriteDTDEntity - arg3 (pubid)");
		validate_Rdaddress( arg4, "xmlTextWriterWriteDTDEntity - arg4 (sysid)");
		validate_NULL_TYPETYPE(  arg4, "xmlTextWriterWriteDTDEntity - arg4 (sysid)");
		validate_Rdaddress( arg5, "xmlTextWriterWriteDTDEntity - arg5 (ndataid)");
		validate_NULL_TYPETYPE(  arg5, "xmlTextWriterWriteDTDEntity - arg5 (ndataid)");
		validate_Rdaddress( arg6, "xmlTextWriterWriteDTDEntity - arg6 (content)");
		validate_NULL_TYPETYPE(  arg6, "xmlTextWriterWriteDTDEntity - arg6 (content)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}
