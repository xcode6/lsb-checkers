// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_animation_iter_get_pixbuf
static GdkPixbuf *(*funcptr) (GdkPixbufAnimationIter * ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gdk_pixbuf_animation_iter_get_pixbuf (GdkPixbufAnimationIter * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_animation_iter_get_pixbuf()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_animation_iter_get_pixbuf");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_animation_iter_get_pixbuf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_animation_iter_get_pixbuf() - validating");
		validate_RWaddress( arg0, "gdk_pixbuf_animation_iter_get_pixbuf - arg0 (iter)");
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_animation_iter_get_pixbuf - arg0 (iter)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

