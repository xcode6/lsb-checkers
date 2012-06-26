// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_document_get_document
static gpointer(*funcptr) (AtkDocument * ) = 0;

extern int __lsb_check_params;
gpointer atk_document_get_document (AtkDocument * arg0 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_document_get_document()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_document_get_document");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_document_get_document. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_document_get_document() - validating");
		validate_RWaddress( arg0, "atk_document_get_document - arg0 (document)");
		validate_NULL_TYPETYPE(  arg0, "atk_document_get_document - arg0 (document)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

