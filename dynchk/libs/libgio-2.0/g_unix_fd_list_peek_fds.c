// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <gio-unix-2.0/gio/gunixfdlist.h>
#undef g_unix_fd_list_peek_fds
static const int *(*funcptr) (GUnixFDList * , gint * ) = 0;

extern int __lsb_check_params;
const int * g_unix_fd_list_peek_fds (GUnixFDList * arg0 , gint * arg1 )
{
	int reset_flag = __lsb_check_params;
	const int * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_unix_fd_list_peek_fds()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unix_fd_list_peek_fds");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unix_fd_list_peek_fds. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unix_fd_list_peek_fds() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_unix_fd_list_peek_fds - arg0 (list)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_unix_fd_list_peek_fds - arg0 (list)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_unix_fd_list_peek_fds - arg1 (length)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_unix_fd_list_peek_fds - arg1 (length)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

