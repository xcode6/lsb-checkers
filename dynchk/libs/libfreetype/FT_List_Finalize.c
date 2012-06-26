// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/fttypes.h>
#include <freetype/ftlist.h>
#include <freetype/ftsystem.h>
#undef FT_List_Finalize
static void(*funcptr) (FT_List , FT_List_Destructor , FT_Memory , void * ) = 0;

extern int __lsb_check_params;
void FT_List_Finalize (FT_List arg0 , FT_List_Destructor arg1 , FT_Memory arg2 , void * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FT_List_Finalize()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_List_Finalize");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_List_Finalize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_List_Finalize() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_List_Finalize - arg0");
		validate_NULL_TYPETYPE(  arg1, "FT_List_Finalize - arg1");
		validate_NULL_TYPETYPE(  arg2, "FT_List_Finalize - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "FT_List_Finalize - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "FT_List_Finalize - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

