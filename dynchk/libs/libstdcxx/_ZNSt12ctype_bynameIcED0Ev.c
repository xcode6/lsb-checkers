// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <ctype>
#undef _ZNSt12ctype_bynameIcED0Ev
static (*funcptr)() = 0;

extern int __lsb_check_params;
 _ZNSt12ctype_bynameIcED0Ev()
{
	int reset_flag = __lsb_check_params;
	 ret_value ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "_ZNSt12ctype_bynameIcED0Ev", "GLIBCXX_3.4");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_ZNSt12ctype_bynameIcED0Ev()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

