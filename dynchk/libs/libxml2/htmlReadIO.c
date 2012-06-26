// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/HTMLparser.h>
#undef htmlReadIO
static htmlDocPtr(*funcptr) (xmlInputReadCallback , xmlInputCloseCallback , void * , const char * , const char * , int ) = 0;

extern int __lsb_check_params;
htmlDocPtr htmlReadIO (xmlInputReadCallback arg0 , xmlInputCloseCallback arg1 , void * arg2 , const char * arg3 , const char * arg4 , int arg5 )
{
	int reset_flag = __lsb_check_params;
	htmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for htmlReadIO()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "htmlReadIO", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load htmlReadIO. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "htmlReadIO() - validating");
		validate_NULL_TYPETYPE(  arg0, "htmlReadIO - arg0 (ioread)");
		validate_NULL_TYPETYPE(  arg1, "htmlReadIO - arg1 (ioclose)");
		validate_RWaddress( arg2, "htmlReadIO - arg2 (ioctx)");
		validate_NULL_TYPETYPE(  arg2, "htmlReadIO - arg2 (ioctx)");
		validate_Rdaddress( arg3, "htmlReadIO - arg3 (URL)");
		validate_NULL_TYPETYPE(  arg3, "htmlReadIO - arg3 (URL)");
		validate_Rdaddress( arg4, "htmlReadIO - arg4 (encoding)");
		validate_NULL_TYPETYPE(  arg4, "htmlReadIO - arg4 (encoding)");
		validate_NULL_TYPETYPE(  arg5, "htmlReadIO - arg5 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

