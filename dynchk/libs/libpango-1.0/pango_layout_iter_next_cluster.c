// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_layout_iter_next_cluster
static gboolean(*funcptr) (PangoLayoutIter * ) = 0;

extern int __lsb_check_params;
gboolean pango_layout_iter_next_cluster (PangoLayoutIter * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_layout_iter_next_cluster()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_iter_next_cluster");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_iter_next_cluster. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_iter_next_cluster() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_layout_iter_next_cluster - arg0 (iter)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_layout_iter_next_cluster - arg0 (iter)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

