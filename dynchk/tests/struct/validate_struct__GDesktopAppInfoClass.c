// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gio-unix-2.0/gio/gdesktopappinfo.h>

int validate_struct__GDesktopAppInfoClass(struct _GDesktopAppInfoClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
return failure;
}
