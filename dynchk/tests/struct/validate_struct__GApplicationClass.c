// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gapplication.h>

int validate_struct__GApplicationClass(struct _GApplicationClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> startup,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> activate,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> open,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> command_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> local_command_line,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> before_emit,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> after_emit,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> add_platform_data,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> quit_mainloop,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> run_mainloop,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> shutdown,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> padding,name ))
		failure = 1;
return failure;
}
