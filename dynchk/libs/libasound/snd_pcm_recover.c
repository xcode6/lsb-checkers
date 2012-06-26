// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_recover
static int(*funcptr) (snd_pcm_t * , int , int ) = 0;

extern int __lsb_check_params;
int snd_pcm_recover (snd_pcm_t * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_recover()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_recover", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_recover. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_recover() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_pcm_recover - arg0 (pcm)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_recover - arg0 (pcm)");
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_recover - arg1 (err)");
		validate_NULL_TYPETYPE(  arg2, "snd_pcm_recover - arg2 (silent)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

