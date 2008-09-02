/*
 * Test of gtk-2.0/gdk/gdkcairo.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "gtk-2.0/gdk/gdkcairo.h"



#ifdef TET_TEST
void gtk_2_0_gdk_gdkcairo_h()
{
#else
int gtk_2_0_gdk_gdkcairo_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gdk/gdkcairo.h\n");
#endif

printf("Checking data structures in gtk-2.0/gdk/gdkcairo.h\n");
extern cairo_t * gdk_cairo_create_db(GdkDrawable *);
CheckInterfacedef(gdk_cairo_create,gdk_cairo_create_db);
extern void gdk_cairo_set_source_color_db(cairo_t *, GdkColor *);
CheckInterfacedef(gdk_cairo_set_source_color,gdk_cairo_set_source_color_db);
extern void gdk_cairo_set_source_pixbuf_db(cairo_t *, GdkPixbuf *, double, double);
CheckInterfacedef(gdk_cairo_set_source_pixbuf,gdk_cairo_set_source_pixbuf_db);
extern void gdk_cairo_rectangle_db(cairo_t *, GdkRectangle *);
CheckInterfacedef(gdk_cairo_rectangle,gdk_cairo_rectangle_db);
extern void gdk_cairo_region_db(cairo_t *, GdkRegion *);
CheckInterfacedef(gdk_cairo_region,gdk_cairo_region_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gdk/gdkcairo.h\n\n",pcnt,cnt);
return cnt;
#endif

}