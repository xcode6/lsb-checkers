// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gdk/gdk.h>

int validate_struct__GdkTimeCoord(struct _GdkTimeCoord  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> time,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> axes,name ))
		failure = 1;
return failure;
}
