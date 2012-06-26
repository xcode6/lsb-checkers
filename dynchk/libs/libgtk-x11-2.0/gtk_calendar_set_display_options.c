// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_calendar_set_display_options
static void(*funcptr) (GtkCalendar * , GtkCalendarDisplayOptions ) = 0;

extern int __lsb_check_params;
void gtk_calendar_set_display_options (GtkCalendar * arg0 , GtkCalendarDisplayOptions arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_calendar_set_display_options()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_calendar_set_display_options");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_calendar_set_display_options. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_calendar_set_display_options() - validating");
		validate_RWaddress( arg0, "gtk_calendar_set_display_options - arg0 (calendar)");
		validate_NULL_TYPETYPE(  arg0, "gtk_calendar_set_display_options - arg0 (calendar)");
		validate_NULL_TYPETYPE(  arg1, "gtk_calendar_set_display_options - arg1 (flags)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

