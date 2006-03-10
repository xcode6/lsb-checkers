/*
 * Test of pango-1.0/pango/pangoxft.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define G_DISABLE_DEPRECATED
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE
#define PANGO_DISABLE_DEPRECATED

struct _PangoXftRendererPrivate {
};

struct _PangoXftFontMap { };
struct _PangoFcFont { };
struct _PangoXftFont { };
struct _PangoFcFontClass { };

#ifdef LSBCC_MODE
struct _PangoXftRenderer { };

#include <ft2build.h>
#include FT_FREETYPE_H
#define _XFT_NO_COMPAT
#define _XFTCOMPAT_H_
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#endif
#include "pango-1.0/pango/pangoxft.h"



#ifdef TET_TEST
void pango_1_0_pango_pangoxft_h()
{
#else
int pango_1_0_pango_pangoxft_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in pango-1.0/pango/pangoxft.h\n");
#endif

printf("Checking data structures in pango-1.0/pango/pangoxft.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_XFT_RENDERER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_RENDERER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_XFT_RENDERER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_RENDERER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_XFT_RENDERER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_RENDERER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PANGO_RENDER_TYPE_XFT
	CompareStringConstant(PANGO_RENDER_TYPE_XFT,"PangoRenderXft")
#else
Msg( "Error: Constant not found: PANGO_RENDER_TYPE_XFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_XFT_FONT_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_FONT_MAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_IS_FONT_MAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_FONT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_XFT_FONT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_IS_FONT(object) */
#endif

#if __i386__
CheckTypeSize(XftDraw *,4, 12555, 2)
#elif __x86_64__
CheckTypeSize(XftDraw *,8, 12555, 11)
#elif __ia64__
CheckTypeSize(XftDraw *,8, 12555, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XftDraw *,4, 12555, 6)
#elif __powerpc64__
CheckTypeSize(XftDraw *,8, 12555, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(XftDraw *,4, 12555, 10)
#elif __s390x__
CheckTypeSize(XftDraw *,8, 12555, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12555,0);
Msg("Find size of XftDraw * (12555)\n");
#endif

#if __i386__
CheckTypeSize(XftColor *,4, 12558, 2)
#elif __x86_64__
CheckTypeSize(XftColor *,8, 12558, 11)
#elif __ia64__
CheckTypeSize(XftColor *,8, 12558, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XftColor *,4, 12558, 6)
#elif __powerpc64__
CheckTypeSize(XftColor *,8, 12558, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(XftColor *,4, 12558, 10)
#elif __s390x__
CheckTypeSize(XftColor *,8, 12558, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12558,0);
Msg("Find size of XftColor * (12558)\n");
#endif

#if __i386__
CheckTypeSize(PangoXftRenderer,48, 12560, 2)
#elif __x86_64__
CheckTypeSize(PangoXftRenderer,88, 12560, 11)
#elif __ia64__
CheckTypeSize(PangoXftRenderer,88, 12560, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoXftRenderer,48, 12560, 6)
#elif __powerpc64__
CheckTypeSize(PangoXftRenderer,88, 12560, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoXftRenderer,48, 12560, 10)
#elif __s390x__
CheckTypeSize(PangoXftRenderer,88, 12560, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12560,0);
Msg("Find size of PangoXftRenderer (12560)\n");
#endif

#if __i386__
CheckTypeSize(PangoXftRenderer *,4, 12561, 2)
#elif __x86_64__
CheckTypeSize(PangoXftRenderer *,8, 12561, 11)
#elif __ia64__
CheckTypeSize(PangoXftRenderer *,8, 12561, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoXftRenderer *,4, 12561, 6)
#elif __powerpc64__
CheckTypeSize(PangoXftRenderer *,8, 12561, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoXftRenderer *,4, 12561, 10)
#elif __s390x__
CheckTypeSize(PangoXftRenderer *,8, 12561, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12561,0);
Msg("Find size of PangoXftRenderer * (12561)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12563,0);
Msg("Find size of fptr_pangoxft_9 (12563)\n");
#endif

#if __i386__
CheckTypeSize(PangoXftSubstituteFunc,4, 12564, 2)
#elif __x86_64__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 11)
#elif __ia64__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoXftSubstituteFunc,4, 12564, 6)
#elif __powerpc64__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoXftSubstituteFunc,4, 12564, 10)
#elif __s390x__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12564,0);
Msg("Find size of PangoXftSubstituteFunc (12564)\n");
#endif

#if __i386__
CheckTypeSize(PangoXftFontMap,0, 12566, 2)
#elif __x86_64__
CheckTypeSize(PangoXftFontMap,0, 12566, 11)
#elif __ia64__
CheckTypeSize(PangoXftFontMap,0, 12566, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoXftFontMap,0, 12566, 6)
#elif __powerpc64__
CheckTypeSize(PangoXftFontMap,0, 12566, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoXftFontMap,0, 12566, 10)
#elif __s390x__
CheckTypeSize(PangoXftFontMap,0, 12566, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12566,0);
Msg("Find size of PangoXftFontMap (12566)\n");
#endif

#if __i386__
CheckTypeSize(struct _PangoXftRendererClass,132, 12567, 2)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,4,2,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,124,2,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,4,2,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,128,2,43300)
#elif __x86_64__
CheckTypeSize(struct _PangoXftRendererClass,264, 12567, 11)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,8,11,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,248,11,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,8,11,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,256,11,43300)
#elif __ia64__
CheckTypeSize(struct _PangoXftRendererClass,264, 12567, 3)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,8,3,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,248,3,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,8,3,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,256,3,43300)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _PangoXftRendererClass,132, 12567, 6)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,4,6,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,124,6,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,4,6,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,128,6,43300)
#elif __powerpc64__
CheckTypeSize(struct _PangoXftRendererClass,264, 12567, 9)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,8,9,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,248,9,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,8,9,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,256,9,43300)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _PangoXftRendererClass,132, 12567, 10)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,4,10,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,124,10,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,4,10,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,128,10,43300)
#elif __s390x__
CheckTypeSize(struct _PangoXftRendererClass,264, 12567, 12)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,8,12,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,248,12,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,8,12,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,256,12,43300)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12567,0);
Msg("Find size of _PangoXftRendererClass (12567)\n");
#endif

#if __i386__
CheckTypeSize(XTrapezoid *,4, 12570, 2)
#elif __x86_64__
CheckTypeSize(XTrapezoid *,8, 12570, 11)
#elif __ia64__
CheckTypeSize(XTrapezoid *,8, 12570, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XTrapezoid *,4, 12570, 6)
#elif __powerpc64__
CheckTypeSize(XTrapezoid *,8, 12570, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(XTrapezoid *,4, 12570, 10)
#elif __s390x__
CheckTypeSize(XTrapezoid *,8, 12570, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12570,0);
Msg("Find size of XTrapezoid * (12570)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12571,0);
Msg("Find size of fptr_pangoxft_74 (12571)\n");
#endif

#if __i386__
CheckTypeSize(XftFont *,4, 12574, 2)
#elif __x86_64__
CheckTypeSize(XftFont *,8, 12574, 11)
#elif __ia64__
CheckTypeSize(XftFont *,8, 12574, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XftFont *,4, 12574, 6)
#elif __powerpc64__
CheckTypeSize(XftFont *,8, 12574, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(XftFont *,4, 12574, 10)
#elif __s390x__
CheckTypeSize(XftFont *,8, 12574, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12574,0);
Msg("Find size of XftFont * (12574)\n");
#endif

#if __i386__
CheckTypeSize(XftGlyphSpec *,4, 12577, 2)
#elif __x86_64__
CheckTypeSize(XftGlyphSpec *,8, 12577, 11)
#elif __ia64__
CheckTypeSize(XftGlyphSpec *,8, 12577, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XftGlyphSpec *,4, 12577, 6)
#elif __powerpc64__
CheckTypeSize(XftGlyphSpec *,8, 12577, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(XftGlyphSpec *,4, 12577, 10)
#elif __s390x__
CheckTypeSize(XftGlyphSpec *,8, 12577, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12577,0);
Msg("Find size of XftGlyphSpec * (12577)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12578,0);
Msg("Find size of fptr_pangoxft_85 (12578)\n");
#endif

#if __i386__
CheckTypeSize(PangoXftRendererClass,132, 12579, 2)
#elif __x86_64__
CheckTypeSize(PangoXftRendererClass,264, 12579, 11)
#elif __ia64__
CheckTypeSize(PangoXftRendererClass,264, 12579, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoXftRendererClass,132, 12579, 6)
#elif __powerpc64__
CheckTypeSize(PangoXftRendererClass,264, 12579, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoXftRendererClass,132, 12579, 10)
#elif __s390x__
CheckTypeSize(PangoXftRendererClass,264, 12579, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12579,0);
Msg("Find size of PangoXftRendererClass (12579)\n");
#endif

#if __i386__
CheckTypeSize(PangoFcFontClass,0, 12581, 2)
#elif __x86_64__
CheckTypeSize(PangoFcFontClass,0, 12581, 11)
#elif __ia64__
CheckTypeSize(PangoFcFontClass,0, 12581, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoFcFontClass,0, 12581, 6)
#elif __powerpc64__
CheckTypeSize(PangoFcFontClass,0, 12581, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoFcFontClass,0, 12581, 10)
#elif __s390x__
CheckTypeSize(PangoFcFontClass,0, 12581, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12581,0);
Msg("Find size of PangoFcFontClass (12581)\n");
#endif

#if __i386__
CheckTypeSize(PangoFcFont,0, 12583, 2)
#elif __x86_64__
CheckTypeSize(PangoFcFont,0, 12583, 11)
#elif __ia64__
CheckTypeSize(PangoFcFont,0, 12583, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoFcFont,0, 12583, 6)
#elif __powerpc64__
CheckTypeSize(PangoFcFont,0, 12583, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoFcFont,0, 12583, 10)
#elif __s390x__
CheckTypeSize(PangoFcFont,0, 12583, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12583,0);
Msg("Find size of PangoFcFont (12583)\n");
#endif

#if __i386__
CheckTypeSize(PangoXftFont,0, 12585, 2)
#elif __x86_64__
CheckTypeSize(PangoXftFont,0, 12585, 11)
#elif __ia64__
CheckTypeSize(PangoXftFont,0, 12585, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoXftFont,0, 12585, 6)
#elif __powerpc64__
CheckTypeSize(PangoXftFont,0, 12585, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoXftFont,0, 12585, 10)
#elif __s390x__
CheckTypeSize(PangoXftFont,0, 12585, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12585,0);
Msg("Find size of PangoXftFont (12585)\n");
#endif

#if __i386__
CheckTypeSize(PangoXftRendererPrivate,0, 12587, 2)
#elif __x86_64__
CheckTypeSize(PangoXftRendererPrivate,0, 12587, 11)
#elif __ia64__
CheckTypeSize(PangoXftRendererPrivate,0, 12587, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoXftRendererPrivate,0, 12587, 6)
#elif __powerpc64__
CheckTypeSize(PangoXftRendererPrivate,0, 12587, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoXftRendererPrivate,0, 12587, 10)
#elif __s390x__
CheckTypeSize(PangoXftRendererPrivate,0, 12587, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12587,0);
Msg("Find size of PangoXftRendererPrivate (12587)\n");
#endif

extern void pango_xft_substitute_changed_db(Display *, int);
CheckInterfacedef(pango_xft_substitute_changed,pango_xft_substitute_changed_db);
extern void pango_xft_render_db(XftDraw *, XftColor *, PangoFont *, PangoGlyphString *, gint, gint);
CheckInterfacedef(pango_xft_render,pango_xft_render_db);
extern PangoRenderer * pango_xft_renderer_new_db(Display *, int);
CheckInterfacedef(pango_xft_renderer_new,pango_xft_renderer_new_db);
extern GType pango_xft_renderer_get_type_db(void);
CheckInterfacedef(pango_xft_renderer_get_type,pango_xft_renderer_get_type_db);
extern void pango_xft_renderer_set_default_color_db(PangoXftRenderer *, PangoColor *);
CheckInterfacedef(pango_xft_renderer_set_default_color,pango_xft_renderer_set_default_color_db);
extern GType pango_xft_font_get_type_db(void);
CheckInterfacedef(pango_xft_font_get_type,pango_xft_font_get_type_db);
extern void pango_xft_picture_render_db(Display *, Picture, Picture, PangoFont *, PangoGlyphString *, gint, gint);
CheckInterfacedef(pango_xft_picture_render,pango_xft_picture_render_db);
extern void pango_xft_render_layout_db(XftDraw *, XftColor *, PangoLayout *, int, int);
CheckInterfacedef(pango_xft_render_layout,pango_xft_render_layout_db);
extern void pango_xft_render_transformed_db(XftDraw *, XftColor *, PangoMatrix *, PangoFont *, PangoGlyphString *, int, int);
CheckInterfacedef(pango_xft_render_transformed,pango_xft_render_transformed_db);
extern void pango_xft_renderer_set_draw_db(PangoXftRenderer *, XftDraw *);
CheckInterfacedef(pango_xft_renderer_set_draw,pango_xft_renderer_set_draw_db);
extern void pango_xft_render_layout_line_db(XftDraw *, XftColor *, PangoLayoutLine *, int, int);
CheckInterfacedef(pango_xft_render_layout_line,pango_xft_render_layout_line_db);
extern void pango_xft_shutdown_display_db(Display *, int);
CheckInterfacedef(pango_xft_shutdown_display,pango_xft_shutdown_display_db);
extern PangoFontMap * pango_xft_get_font_map_db(Display *, int);
CheckInterfacedef(pango_xft_get_font_map,pango_xft_get_font_map_db);
extern PangoContext * pango_xft_get_context_db(Display *, int);
CheckInterfacedef(pango_xft_get_context,pango_xft_get_context_db);
extern GType pango_xft_font_map_get_type_db(void);
CheckInterfacedef(pango_xft_font_map_get_type,pango_xft_font_map_get_type_db);
extern void pango_xft_set_default_substitute_db(Display *, int, PangoXftSubstituteFunc, gpointer, GDestroyNotify);
CheckInterfacedef(pango_xft_set_default_substitute,pango_xft_set_default_substitute_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pango-1.0/pango/pangoxft.h\n\n",pcnt,cnt);
return cnt;
#endif

}
