// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <rpc/auth.h>
#undef key_decryptsession
static int(*funcptr) (char * , union des_block * ) = 0;

extern int __lsb_check_params;
int key_decryptsession (char * arg0 , union des_block * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "key_decryptsession", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "key_decryptsession()");
		validate_RWaddress( arg0, "key_decryptsession - arg0");
		validate_NULL_TYPETYPE(  arg0, "key_decryptsession - arg0");
		validate_RWaddress( arg1, "key_decryptsession - arg1");
		validate_NULL_TYPETYPE(  arg1, "key_decryptsession - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

