// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/mixer.h>
#undef snd_mixer_elem_set_callback_private
static void(*funcptr) (snd_mixer_elem_t * , void * ) = 0;

extern int __lsb_check_params;
void snd_mixer_elem_set_callback_private (snd_mixer_elem_t * arg0 , void * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for snd_mixer_elem_set_callback_private()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_mixer_elem_set_callback_private", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_mixer_elem_set_callback_private. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_mixer_elem_set_callback_private() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_mixer_elem_set_callback_private - arg0 (obj)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_mixer_elem_set_callback_private - arg0 (obj)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_mixer_elem_set_callback_private - arg1 (val)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_mixer_elem_set_callback_private - arg1 (val)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

