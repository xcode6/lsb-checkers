// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <security/pam_appl.h>
#undef pam_set_item
static int(*funcptr) (pam_handle_t * , int , const void * ) = 0;

int pam_set_item (pam_handle_t * arg0 , int arg1 , const void * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_set_item");
	validate_Rdaddress( arg0, "pam_set_item");
	validate_NULL_TYPETYPE(  arg0, "pam_set_item");
	validate_NULL_TYPETYPE(  arg1, "pam_set_item");
	validate_Rdaddress( arg2, "pam_set_item");
	validate_NULL_TYPETYPE(  arg2, "pam_set_item");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_pam_set_item (pam_handle_t * arg0 , int arg1 , const void * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_set_item");
	return funcptr(arg0, arg1, arg2);
}

