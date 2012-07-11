// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/rawmidi.h>
#include <stddef.h>
#undef snd_rawmidi_read
static ssize_t(*funcptr) (snd_rawmidi_t * , void * , size_t ) = 0;

extern int __lsb_check_params;
ssize_t snd_rawmidi_read (snd_rawmidi_t * arg0 , void * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_rawmidi_read()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_rawmidi_read", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_rawmidi_read. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_rawmidi_read() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_rawmidi_read - arg0 (rmidi)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_rawmidi_read - arg0 (rmidi)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_rawmidi_read - arg1 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_rawmidi_read - arg1 (buffer)");
		validate_NULL_TYPETYPE(  arg2, "snd_rawmidi_read - arg2 (size)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
