// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/pattern.h>
#include <libxml2/libxml/tree.h>
#undef xmlPatternMatch
static int(*funcptr) (xmlPatternPtr , xmlNodePtr ) = 0;

extern int __lsb_check_params;
int xmlPatternMatch (xmlPatternPtr arg0 , xmlNodePtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlPatternMatch()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlPatternMatch", "LIBXML2_2.6.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlPatternMatch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlPatternMatch() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlPatternMatch - arg0 (comp)");
		validate_NULL_TYPETYPE(  arg1, "xmlPatternMatch - arg1 (node)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
