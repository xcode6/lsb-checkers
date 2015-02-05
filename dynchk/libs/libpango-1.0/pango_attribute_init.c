// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_attribute_init
static void(*funcptr) (PangoAttribute * , const PangoAttrClass * ) = 0;

extern int __lsb_check_params;
void pango_attribute_init (PangoAttribute * arg0 , const PangoAttrClass * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_attribute_init()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_attribute_init");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_attribute_init. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_attribute_init() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_attribute_init - arg0 (attr)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_attribute_init - arg0 (attr)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "pango_attribute_init - arg1 (klass)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_attribute_init - arg1 (klass)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
