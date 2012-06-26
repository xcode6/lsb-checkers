// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/seq.h>
#undef snd_seq_port_subscribe_get_dest
static const snd_seq_addr_t *(*funcptr) (const snd_seq_port_subscribe_t * ) = 0;

extern int __lsb_check_params;
const snd_seq_addr_t * snd_seq_port_subscribe_get_dest (const snd_seq_port_subscribe_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	const snd_seq_addr_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_seq_port_subscribe_get_dest()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_seq_port_subscribe_get_dest", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_seq_port_subscribe_get_dest. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_seq_port_subscribe_get_dest() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "snd_seq_port_subscribe_get_dest - arg0 (info)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_seq_port_subscribe_get_dest - arg0 (info)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

