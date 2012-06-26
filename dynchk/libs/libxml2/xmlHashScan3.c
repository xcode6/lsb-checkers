// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlHashScan3
static void(*funcptr) (xmlHashTablePtr , const xmlChar * , const xmlChar * , const xmlChar * , xmlHashScanner , void * ) = 0;

extern int __lsb_check_params;
void xmlHashScan3 (xmlHashTablePtr arg0 , const xmlChar * arg1 , const xmlChar * arg2 , const xmlChar * arg3 , xmlHashScanner arg4 , void * arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlHashScan3()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlHashScan3", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlHashScan3. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlHashScan3() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlHashScan3 - arg0 (table)");
		validate_Rdaddress( arg1, "xmlHashScan3 - arg1 (name)");
		validate_NULL_TYPETYPE(  arg1, "xmlHashScan3 - arg1 (name)");
		validate_Rdaddress( arg2, "xmlHashScan3 - arg2 (name2)");
		validate_NULL_TYPETYPE(  arg2, "xmlHashScan3 - arg2 (name2)");
		validate_Rdaddress( arg3, "xmlHashScan3 - arg3 (name3)");
		validate_NULL_TYPETYPE(  arg3, "xmlHashScan3 - arg3 (name3)");
		validate_NULL_TYPETYPE(  arg4, "xmlHashScan3 - arg4 (f)");
		validate_RWaddress( arg5, "xmlHashScan3 - arg5 (data)");
		validate_NULL_TYPETYPE(  arg5, "xmlHashScan3 - arg5 (data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

