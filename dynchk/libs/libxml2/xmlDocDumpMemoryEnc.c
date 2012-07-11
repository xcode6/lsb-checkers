// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#undef xmlDocDumpMemoryEnc
static void(*funcptr) (xmlDocPtr , xmlChar * * , int * , const char * ) = 0;

extern int __lsb_check_params;
void xmlDocDumpMemoryEnc (xmlDocPtr arg0 , xmlChar * * arg1 , int * arg2 , const char * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlDocDumpMemoryEnc()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlDocDumpMemoryEnc", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlDocDumpMemoryEnc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlDocDumpMemoryEnc() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlDocDumpMemoryEnc - arg0 (out_doc)");
		validate_RWaddress( arg1, "xmlDocDumpMemoryEnc - arg1 (doc_txt_ptr)");
		validate_NULL_TYPETYPE(  arg1, "xmlDocDumpMemoryEnc - arg1 (doc_txt_ptr)");
		validate_RWaddress( arg2, "xmlDocDumpMemoryEnc - arg2 (doc_txt_len)");
		validate_NULL_TYPETYPE(  arg2, "xmlDocDumpMemoryEnc - arg2 (doc_txt_len)");
		validate_Rdaddress( arg3, "xmlDocDumpMemoryEnc - arg3 (txt_encoding)");
		validate_NULL_TYPETYPE(  arg3, "xmlDocDumpMemoryEnc - arg3 (txt_encoding)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
