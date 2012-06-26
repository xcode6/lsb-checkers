// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/fttypes.h>
#include <freetype/ftlist.h>
#undef FT_List_Remove
static void(*funcptr) (FT_List , FT_ListNode ) = 0;

extern int __lsb_check_params;
void FT_List_Remove (FT_List arg0 , FT_ListNode arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FT_List_Remove()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_List_Remove");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_List_Remove. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_List_Remove() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_List_Remove - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_List_Remove - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

