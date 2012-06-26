// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlHashUpdateEntry
static int(*funcptr) (xmlHashTablePtr , const xmlChar * , void * , xmlHashDeallocator ) = 0;

extern int __lsb_check_params;
int xmlHashUpdateEntry (xmlHashTablePtr arg0 , const xmlChar * arg1 , void * arg2 , xmlHashDeallocator arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlHashUpdateEntry()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlHashUpdateEntry", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlHashUpdateEntry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlHashUpdateEntry() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlHashUpdateEntry - arg0 (table)");
		validate_Rdaddress( arg1, "xmlHashUpdateEntry - arg1 (name)");
		validate_NULL_TYPETYPE(  arg1, "xmlHashUpdateEntry - arg1 (name)");
		validate_RWaddress( arg2, "xmlHashUpdateEntry - arg2 (userdata)");
		validate_NULL_TYPETYPE(  arg2, "xmlHashUpdateEntry - arg2 (userdata)");
		validate_NULL_TYPETYPE(  arg3, "xmlHashUpdateEntry - arg3 (f)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

