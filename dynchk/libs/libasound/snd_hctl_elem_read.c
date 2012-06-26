// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/control.h>
#undef snd_hctl_elem_read
static int(*funcptr) (snd_hctl_elem_t * , snd_ctl_elem_value_t * ) = 0;

extern int __lsb_check_params;
int snd_hctl_elem_read (snd_hctl_elem_t * arg0 , snd_ctl_elem_value_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_hctl_elem_read()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_hctl_elem_read", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_hctl_elem_read. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_hctl_elem_read() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_hctl_elem_read - arg0 (elem)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_hctl_elem_read - arg0 (elem)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_hctl_elem_read - arg1 (value)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_hctl_elem_read - arg1 (value)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

