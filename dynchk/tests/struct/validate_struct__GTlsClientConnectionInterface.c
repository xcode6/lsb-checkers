// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gtlsclientconnection.h>

int validate_struct__GTlsClientConnectionInterface(struct _GTlsClientConnectionInterface  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> g_iface,name ))
		failure = 1;
return failure;
}

