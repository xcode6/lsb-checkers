// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/control.h>
#undef snd_hctl_get_count
static unsigned int(*funcptr) (snd_hctl_t * ) = 0;

extern int __lsb_check_params;
unsigned int snd_hctl_get_count (snd_hctl_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	unsigned int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_hctl_get_count()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_hctl_get_count", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_hctl_get_count. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_hctl_get_count() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_hctl_get_count - arg0 (hctl)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_hctl_get_count - arg0 (hctl)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

