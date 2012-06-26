// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/seq.h>
#undef snd_seq_get_port_info
static int(*funcptr) (snd_seq_t * , int , snd_seq_port_info_t * ) = 0;

extern int __lsb_check_params;
int snd_seq_get_port_info (snd_seq_t * arg0 , int arg1 , snd_seq_port_info_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_seq_get_port_info()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_seq_get_port_info", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_seq_get_port_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_seq_get_port_info() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_seq_get_port_info - arg0 (handle)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_seq_get_port_info - arg0 (handle)");
		validate_NULL_TYPETYPE(  arg1, "snd_seq_get_port_info - arg1 (port)");
		if( arg2 ) {
		validate_RWaddress( arg2, "snd_seq_get_port_info - arg2 (info)");
		}
		validate_NULL_TYPETYPE(  arg2, "snd_seq_get_port_info - arg2 (info)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

