// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <security/pam_appl.h>
#undef pam_set_item
static int(*funcptr) (pam_handle_t * , int , const void * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int pam_set_item (pam_handle_t * arg0 , int arg1 , const void * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_set_item");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "pam_set_item()");
	validate_RWaddress( arg0, "pam_set_item - arg0");
		validate_NULL_TYPETYPE(  arg0, "pam_set_item - arg0");
		validate_NULL_TYPETYPE(  arg1, "pam_set_item - arg1");
	validate_Rdaddress( arg2, "pam_set_item - arg2");
		validate_NULL_TYPETYPE(  arg2, "pam_set_item - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

