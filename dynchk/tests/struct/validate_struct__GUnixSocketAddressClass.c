// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gio-unix-2.0/gio/gunixsocketaddress.h>

int validate_struct__GUnixSocketAddressClass(struct _GUnixSocketAddressClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
return failure;
}

