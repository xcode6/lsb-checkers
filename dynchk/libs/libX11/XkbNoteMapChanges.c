// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/XKBlib.h>
#undef XkbNoteMapChanges
static void(*funcptr) (, XkbMapNotifyEvent * , unsigned int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XkbNoteMapChanges ( arg0, XkbMapNotifyEvent * arg1 , unsigned int arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbNoteMapChanges");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XkbNoteMapChanges()");
		validate_NULL_TYPETYPE(  arg0, "XkbNoteMapChanges - arg0");
	validate_RWaddress( arg1, "XkbNoteMapChanges - arg1");
		validate_NULL_TYPETYPE(  arg1, "XkbNoteMapChanges - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbNoteMapChanges - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

