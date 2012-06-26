// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/control.h>
#undef snd_ctl_elem_add_integer
static int(*funcptr) (snd_ctl_t * , const snd_ctl_elem_id_t * , unsigned int , long int , long int , long int ) = 0;

extern int __lsb_check_params;
int snd_ctl_elem_add_integer (snd_ctl_t * arg0 , const snd_ctl_elem_id_t * arg1 , unsigned int arg2 , long int arg3 , long int arg4 , long int arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_ctl_elem_add_integer()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_ctl_elem_add_integer", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_ctl_elem_add_integer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_ctl_elem_add_integer() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_ctl_elem_add_integer - arg0 (ctl)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_ctl_elem_add_integer - arg0 (ctl)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "snd_ctl_elem_add_integer - arg1 (id)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_ctl_elem_add_integer - arg1 (id)");
		validate_NULL_TYPETYPE(  arg2, "snd_ctl_elem_add_integer - arg2 (count)");
		validate_NULL_TYPETYPE(  arg3, "snd_ctl_elem_add_integer - arg3 (imin)");
		validate_NULL_TYPETYPE(  arg4, "snd_ctl_elem_add_integer - arg4 (imax)");
		validate_NULL_TYPETYPE(  arg5, "snd_ctl_elem_add_integer - arg5 (istep)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

