// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/control.h>
#undef snd_hctl_handle_events
static int(*funcptr) (snd_hctl_t * ) = 0;

extern int __lsb_check_params;
int snd_hctl_handle_events (snd_hctl_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_hctl_handle_events()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_hctl_handle_events", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_hctl_handle_events. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_hctl_handle_events() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_hctl_handle_events - arg0 (hctl)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_hctl_handle_events - arg0 (hctl)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

