// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XQueryBestTile
static int(*funcptr) (Display * , Drawable , unsigned int , unsigned int , unsigned int * , unsigned int * ) = 0;

extern int __lsb_check_params;
int XQueryBestTile (Display * arg0 , Drawable arg1 , unsigned int arg2 , unsigned int arg3 , unsigned int * arg4 , unsigned int * arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XQueryBestTile ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XQueryBestTile()");
		validate_RWaddress( arg0, "XQueryBestTile - arg0");
		validate_NULL_TYPETYPE(  arg0, "XQueryBestTile - arg0");
		validate_NULL_TYPETYPE(  arg1, "XQueryBestTile - arg1");
		validate_NULL_TYPETYPE(  arg2, "XQueryBestTile - arg2");
		validate_NULL_TYPETYPE(  arg3, "XQueryBestTile - arg3");
		validate_RWaddress( arg4, "XQueryBestTile - arg4");
		validate_NULL_TYPETYPE(  arg4, "XQueryBestTile - arg4");
		validate_RWaddress( arg5, "XQueryBestTile - arg5");
		validate_NULL_TYPETYPE(  arg5, "XQueryBestTile - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

