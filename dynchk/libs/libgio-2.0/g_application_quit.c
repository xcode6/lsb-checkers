// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gapplication.h>
#undef g_application_quit
static void(*funcptr) (GApplication * ) = 0;

extern int __lsb_check_params;
void g_application_quit (GApplication * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_application_quit()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_application_quit");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_application_quit. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_application_quit() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_application_quit - arg0 (application)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_application_quit - arg0 (application)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

