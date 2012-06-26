// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/seq.h>
#include <sys/poll.h>
#undef snd_seq_poll_descriptors
static int(*funcptr) (snd_seq_t * , struct pollfd * , unsigned int , short int ) = 0;

extern int __lsb_check_params;
int snd_seq_poll_descriptors (snd_seq_t * arg0 , struct pollfd * arg1 , unsigned int arg2 , short int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_seq_poll_descriptors()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_seq_poll_descriptors", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_seq_poll_descriptors. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_seq_poll_descriptors() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_seq_poll_descriptors - arg0 (handle)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_seq_poll_descriptors - arg0 (handle)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_seq_poll_descriptors - arg1 (pfds)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_seq_poll_descriptors - arg1 (pfds)");
		validate_NULL_TYPETYPE(  arg2, "snd_seq_poll_descriptors - arg2 (space)");
		validate_NULL_TYPETYPE(  arg3, "snd_seq_poll_descriptors - arg3 (events)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

