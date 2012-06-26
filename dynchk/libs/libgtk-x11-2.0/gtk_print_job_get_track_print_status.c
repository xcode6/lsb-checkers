// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-unix-print-2.0/gtk/gtkprintjob.h>
#undef gtk_print_job_get_track_print_status
static gboolean(*funcptr) (GtkPrintJob * ) = 0;

extern int __lsb_check_params;
gboolean gtk_print_job_get_track_print_status (GtkPrintJob * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_print_job_get_track_print_status()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_print_job_get_track_print_status");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_print_job_get_track_print_status. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_print_job_get_track_print_status() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_print_job_get_track_print_status - arg0 (job)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_print_job_get_track_print_status - arg0 (job)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

