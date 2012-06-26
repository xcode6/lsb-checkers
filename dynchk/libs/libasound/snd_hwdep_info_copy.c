// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/hwdep.h>
#undef snd_hwdep_info_copy
static void(*funcptr) (snd_hwdep_info_t * , const snd_hwdep_info_t * ) = 0;

extern int __lsb_check_params;
void snd_hwdep_info_copy (snd_hwdep_info_t * arg0 , const snd_hwdep_info_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for snd_hwdep_info_copy()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_hwdep_info_copy", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_hwdep_info_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_hwdep_info_copy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_hwdep_info_copy - arg0 (dst)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_hwdep_info_copy - arg0 (dst)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "snd_hwdep_info_copy - arg1 (src)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_hwdep_info_copy - arg1 (src)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

