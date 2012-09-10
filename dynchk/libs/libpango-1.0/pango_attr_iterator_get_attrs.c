// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_attr_iterator_get_attrs
static GSList *(*funcptr) (PangoAttrIterator * ) = 0;

extern int __lsb_check_params;
GSList * pango_attr_iterator_get_attrs (PangoAttrIterator * arg0 )
{
	int reset_flag = __lsb_check_params;
	GSList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_attr_iterator_get_attrs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_attr_iterator_get_attrs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_attr_iterator_get_attrs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_attr_iterator_get_attrs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_attr_iterator_get_attrs - arg0 (iterator)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_attr_iterator_get_attrs - arg0 (iterator)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

