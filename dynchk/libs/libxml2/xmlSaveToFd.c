// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlsave.h>
#undef xmlSaveToFd
static xmlSaveCtxtPtr(*funcptr) (int , const char * , int ) = 0;

extern int __lsb_check_params;
xmlSaveCtxtPtr xmlSaveToFd (int arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlSaveCtxtPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSaveToFd()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSaveToFd", "LIBXML2_2.6.8");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSaveToFd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSaveToFd() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSaveToFd - arg0 (fd)");
		validate_Rdaddress( arg1, "xmlSaveToFd - arg1 (encoding)");
		validate_NULL_TYPETYPE(  arg1, "xmlSaveToFd - arg1 (encoding)");
		validate_NULL_TYPETYPE(  arg2, "xmlSaveToFd - arg2 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

