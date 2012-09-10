// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#undef xmlIOFTPMatch
static int(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
int xmlIOFTPMatch (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlIOFTPMatch()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlIOFTPMatch", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlIOFTPMatch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlIOFTPMatch() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlIOFTPMatch - arg0 (filename)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlIOFTPMatch - arg0 (filename)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

