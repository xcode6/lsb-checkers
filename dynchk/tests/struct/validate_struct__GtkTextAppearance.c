// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkTextAppearance(struct _GtkTextAppearance  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> bg_color,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> fg_color,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rise,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> underline,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> strikethrough,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> draw_bg,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> inside_selection,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> is_text,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rgba,name ))
		failure = 1;
return failure;
}
