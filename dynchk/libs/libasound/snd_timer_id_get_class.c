// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/timer.h>
#undef snd_timer_id_get_class
static int(*funcptr) (snd_timer_id_t * ) = 0;

extern int __lsb_check_params;
int snd_timer_id_get_class (snd_timer_id_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_timer_id_get_class()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_timer_id_get_class", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_timer_id_get_class. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_timer_id_get_class() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_timer_id_get_class - arg0 (id)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_timer_id_get_class - arg0 (id)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

