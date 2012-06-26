// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/entities.h>
#undef xmlDumpEntityDecl
static void(*funcptr) (xmlBufferPtr , xmlEntityPtr ) = 0;

extern int __lsb_check_params;
void xmlDumpEntityDecl (xmlBufferPtr arg0 , xmlEntityPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlDumpEntityDecl()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlDumpEntityDecl", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlDumpEntityDecl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlDumpEntityDecl() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlDumpEntityDecl - arg0 (buf)");
		validate_NULL_TYPETYPE(  arg1, "xmlDumpEntityDecl - arg1 (ent)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

