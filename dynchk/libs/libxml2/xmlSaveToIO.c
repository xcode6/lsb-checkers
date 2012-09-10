// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlsave.h>
#undef xmlSaveToIO
static xmlSaveCtxtPtr(*funcptr) (xmlOutputWriteCallback , xmlOutputCloseCallback , void * , const char * , int ) = 0;

extern int __lsb_check_params;
xmlSaveCtxtPtr xmlSaveToIO (xmlOutputWriteCallback arg0 , xmlOutputCloseCallback arg1 , void * arg2 , const char * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	xmlSaveCtxtPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSaveToIO()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSaveToIO", "LIBXML2_2.6.8");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSaveToIO. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSaveToIO() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSaveToIO - arg0 (iowrite)");
		validate_NULL_TYPETYPE(  arg1, "xmlSaveToIO - arg1 (ioclose)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xmlSaveToIO - arg2 (ioctx)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlSaveToIO - arg2 (ioctx)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xmlSaveToIO - arg3 (encoding)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlSaveToIO - arg3 (encoding)");
		validate_NULL_TYPETYPE(  arg4, "xmlSaveToIO - arg4 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

