// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtGetApplicationResources
static void(*funcptr) (Widget , XtPointer , XtResourceList , Cardinal , ArgList , Cardinal ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtGetApplicationResources (Widget arg0 , XtPointer arg1 , XtResourceList arg2 , Cardinal arg3 , ArgList arg4 , Cardinal arg5 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetApplicationResources");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtGetApplicationResources()");
		validate_NULL_TYPETYPE(  arg0, "XtGetApplicationResources - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtGetApplicationResources - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtGetApplicationResources - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtGetApplicationResources - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtGetApplicationResources - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtGetApplicationResources - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

