// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_cclosure_marshal_VOID__FLAGS
static void(*funcptr) (GClosure * , GValue * , guint , const GValue * , gpointer , gpointer ) = 0;

extern int __lsb_check_params;
void g_cclosure_marshal_VOID__FLAGS (GClosure * arg0 , GValue * arg1 , guint arg2 , const GValue * arg3 , gpointer arg4 , gpointer arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_cclosure_marshal_VOID__FLAGS()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_cclosure_marshal_VOID__FLAGS");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_cclosure_marshal_VOID__FLAGS. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_cclosure_marshal_VOID__FLAGS() - validating");
		validate_RWaddress( arg0, "g_cclosure_marshal_VOID__FLAGS - arg0");
		validate_NULL_TYPETYPE(  arg0, "g_cclosure_marshal_VOID__FLAGS - arg0");
		validate_RWaddress( arg1, "g_cclosure_marshal_VOID__FLAGS - arg1");
		validate_NULL_TYPETYPE(  arg1, "g_cclosure_marshal_VOID__FLAGS - arg1");
		validate_NULL_TYPETYPE(  arg2, "g_cclosure_marshal_VOID__FLAGS - arg2");
		validate_Rdaddress( arg3, "g_cclosure_marshal_VOID__FLAGS - arg3");
		validate_NULL_TYPETYPE(  arg3, "g_cclosure_marshal_VOID__FLAGS - arg3");
		validate_NULL_TYPETYPE(  arg4, "g_cclosure_marshal_VOID__FLAGS - arg4");
		validate_NULL_TYPETYPE(  arg5, "g_cclosure_marshal_VOID__FLAGS - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

