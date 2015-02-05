// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkTextAttributes(struct _GtkTextAttributes  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> refcount,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> appearance,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> justification,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> direction,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> font,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> font_scale,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> left_margin,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> right_margin,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> indent,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> pixels_above_lines,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> pixels_below_lines,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> pixels_inside_wrap,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> tabs,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> wrap_mode,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> language,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> pg_bg_color,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> invisible,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> bg_full_height,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> editable,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> pg_bg_rgba,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> padding,name ))
		failure = 1;
return failure;
}
