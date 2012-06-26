// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#undef xmlUTF8Size
static int(*funcptr) (const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlUTF8Size (const xmlChar * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlUTF8Size()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlUTF8Size", "LIBXML2_2.5.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlUTF8Size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlUTF8Size() - validating");
		validate_Rdaddress( arg0, "xmlUTF8Size - arg0 (utf)");
		validate_NULL_TYPETYPE(  arg0, "xmlUTF8Size - arg0 (utf)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

