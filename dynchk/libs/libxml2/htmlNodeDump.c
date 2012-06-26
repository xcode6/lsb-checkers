// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/HTMLtree.h>
#undef htmlNodeDump
static int(*funcptr) (xmlBufferPtr , xmlDocPtr , xmlNodePtr ) = 0;

extern int __lsb_check_params;
int htmlNodeDump (xmlBufferPtr arg0 , xmlDocPtr arg1 , xmlNodePtr arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for htmlNodeDump()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlNodeDump", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlNodeDump. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlNodeDump() - validating");
		validate_NULL_TYPETYPE(  arg0, "htmlNodeDump - arg0 (buf)");
		validate_NULL_TYPETYPE(  arg1, "htmlNodeDump - arg1 (doc)");
		validate_NULL_TYPETYPE(  arg2, "htmlNodeDump - arg2 (cur)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

