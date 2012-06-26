// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/control.h>
#undef snd_ctl_elem_info_set_id
static void(*funcptr) (snd_ctl_elem_info_t * , const snd_ctl_elem_id_t * ) = 0;

extern int __lsb_check_params;
void snd_ctl_elem_info_set_id (snd_ctl_elem_info_t * arg0 , const snd_ctl_elem_id_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for snd_ctl_elem_info_set_id()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_ctl_elem_info_set_id", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_ctl_elem_info_set_id. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_ctl_elem_info_set_id() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_ctl_elem_info_set_id - arg0 (obj)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_ctl_elem_info_set_id - arg0 (obj)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "snd_ctl_elem_info_set_id - arg1 (ptr)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_ctl_elem_info_set_id - arg1 (ptr)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

