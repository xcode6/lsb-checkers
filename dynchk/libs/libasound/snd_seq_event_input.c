// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/seq.h>
#include <alsa/seq_event.h>
#undef snd_seq_event_input
static int(*funcptr) (snd_seq_t * , snd_seq_event_t * * ) = 0;

extern int __lsb_check_params;
int snd_seq_event_input (snd_seq_t * arg0 , snd_seq_event_t * * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_seq_event_input()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_seq_event_input", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_seq_event_input. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_seq_event_input() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_seq_event_input - arg0 (handle)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_seq_event_input - arg0 (handle)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_seq_event_input - arg1 (ev)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_seq_event_input - arg1 (ev)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

