// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/mixer.h>
#undef snd_mixer_selem_id_sizeof
static size_t(*funcptr) () = 0;

extern int __lsb_check_params;
size_t snd_mixer_selem_id_sizeof ()
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_mixer_selem_id_sizeof()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_mixer_selem_id_sizeof", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_mixer_selem_id_sizeof. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_mixer_selem_id_sizeof() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

