// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gio-unix-2.0/gio/gunixcredentialsmessage.h>

int validate_struct__GUnixCredentialsMessageClass(struct _GUnixCredentialsMessageClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved2,name ))
		failure = 1;
return failure;
}

