// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/control.h>
#include <alsa/hwdep.h>
#undef snd_ctl_hwdep_info
static int(*funcptr) (snd_ctl_t * , snd_hwdep_info_t * ) = 0;

extern int __lsb_check_params;
int snd_ctl_hwdep_info (snd_ctl_t * arg0 , snd_hwdep_info_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_ctl_hwdep_info()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_ctl_hwdep_info", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_ctl_hwdep_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_ctl_hwdep_info() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_ctl_hwdep_info - arg0 (ctl)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_ctl_hwdep_info - arg0 (ctl)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_ctl_hwdep_info - arg1 (info)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_ctl_hwdep_info - arg1 (info)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

