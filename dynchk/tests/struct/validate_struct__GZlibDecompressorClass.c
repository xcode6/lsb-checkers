// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gzlibdecompressor.h>

int validate_struct__GZlibDecompressorClass(struct _GZlibDecompressorClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
return failure;
}

