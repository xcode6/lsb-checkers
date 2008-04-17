/*
 * Test of X11/Xft/Xft.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct _XftFontInfo {};
struct _XftFtFile {};
#include "X11/Xft/Xft.h"



#ifdef TET_TEST
void X11_Xft_Xft_h()
{
#else
int X11_Xft_Xft_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xft/Xft.h\n");
#endif

printf("Checking data structures in X11/Xft/Xft.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XFT_CORE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_MAX_GLYPH_MEMORY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_MAX_UNREF_FONTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_RENDER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_VERSION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XftVersion */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_XLFD */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_MAJOR
	CompareConstant(XFT_MAJOR,2,10666,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XFT_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_MINOR
	CompareConstant(XFT_MINOR,1,10667,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XFT_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_NMISSING
	CompareConstant(XFT_NMISSING,256,10668,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XFT_NMISSING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_REVISION
	CompareConstant(XFT_REVISION,8,10669,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XFT_REVISION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XFT_H_ */
#endif

#if defined __i386__
CheckTypeSize(struct _XftColor,12, 12556, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftColor on IA32\n");
CheckOffset(struct _XftColor,pixel,0,2,63991)
CheckOffset(struct _XftColor,color,0,2,63992)
#else
Msg("Find size of _XftColor (12556)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12556,0);
#endif

#if defined __i386__
CheckTypeSize(XftColor,12, 12557, 2, 1.2, NULL, 12556, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftColor,12, 12557, 6, 1.2, NULL, 12556, NULL)
#elif defined __x86_64__
CheckTypeSize(XftColor,16, 12557, 11, 1.2, NULL, 12556, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftColor,12, 12557, 10, 1.2, NULL, 12556, NULL)
#elif defined __s390x__
CheckTypeSize(XftColor,16, 12557, 12, 1.2, NULL, 12556, NULL)
#elif defined __ia64__
CheckTypeSize(XftColor,16, 12557, 3, 1.2, NULL, 12556, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftColor,16, 12557, 9, 1.2, NULL, 12556, NULL)
#else
Msg("Find size of XftColor (12557)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12556,NULL);\n",architecture,12557,0);
#endif

#if defined __i386__
CheckTypeSize(XftColor *,4, 12558, 2, 1.2, NULL, 12557, NULL)
#elif defined __x86_64__
CheckTypeSize(XftColor *,8, 12558, 11, 1.2, NULL, 12557, NULL)
#elif defined __ia64__
CheckTypeSize(XftColor *,8, 12558, 3, 1.2, NULL, 12557, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftColor *,4, 12558, 6, 1.2, NULL, 12557, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftColor *,8, 12558, 9, 1.2, NULL, 12557, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftColor *,4, 12558, 10, 1.2, NULL, 12557, NULL)
#elif defined __s390x__
CheckTypeSize(XftColor *,8, 12558, 12, 1.2, NULL, 12557, NULL)
#else
Msg("Find size of XftColor * (12558)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12557,NULL);\n",architecture,12558,0);
#endif

#if defined __i386__
CheckTypeSize(struct _XftFont,24, 12572, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftFont on IA32\n");
CheckOffset(struct _XftFont,ascent,0,2,63993)
CheckOffset(struct _XftFont,descent,0,2,63994)
CheckOffset(struct _XftFont,height,0,2,63995)
CheckOffset(struct _XftFont,max_advance_width,0,2,63996)
CheckOffset(struct _XftFont,charset,0,2,63997)
CheckOffset(struct _XftFont,pattern,0,2,63998)
#else
Msg("Find size of _XftFont (12572)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12572,0);
#endif

#if defined __i386__
CheckTypeSize(XftFont,24, 12573, 2, 1.2, NULL, 12572, NULL)
#elif defined __x86_64__
CheckTypeSize(XftFont,32, 12573, 11, 1.2, NULL, 12572, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftFont,24, 12573, 10, 1.2, NULL, 12572, NULL)
#elif defined __s390x__
CheckTypeSize(XftFont,32, 12573, 12, 1.2, NULL, 12572, NULL)
#elif defined __ia64__
CheckTypeSize(XftFont,32, 12573, 3, 1.2, NULL, 12572, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftFont,24, 12573, 6, 1.2, NULL, 12572, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftFont,32, 12573, 9, 1.2, NULL, 12572, NULL)
#else
Msg("Find size of XftFont (12573)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12572,NULL);\n",architecture,12573,0);
#endif

#if defined __i386__
CheckTypeSize(XftFont *,4, 12574, 2, 1.2, NULL, 12573, NULL)
#elif defined __x86_64__
CheckTypeSize(XftFont *,8, 12574, 11, 1.2, NULL, 12573, NULL)
#elif defined __ia64__
CheckTypeSize(XftFont *,8, 12574, 3, 1.2, NULL, 12573, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftFont *,4, 12574, 6, 1.2, NULL, 12573, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftFont *,8, 12574, 9, 1.2, NULL, 12573, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftFont *,4, 12574, 10, 1.2, NULL, 12573, NULL)
#elif defined __s390x__
CheckTypeSize(XftFont *,8, 12574, 12, 1.2, NULL, 12573, NULL)
#else
Msg("Find size of XftFont * (12574)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12573,NULL);\n",architecture,12574,0);
#endif

#if defined __i386__
CheckTypeSize(struct _XftGlyphSpec,8, 12575, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftGlyphSpec on IA32\n");
CheckOffset(struct _XftGlyphSpec,glyph,0,2,63999)
CheckOffset(struct _XftGlyphSpec,x,0,2,64000)
CheckOffset(struct _XftGlyphSpec,y,0,2,64001)
#else
Msg("Find size of _XftGlyphSpec (12575)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12575,0);
#endif

#if defined __i386__
CheckTypeSize(XftGlyphSpec,8, 12576, 2, 1.2, NULL, 12575, NULL)
#elif defined __x86_64__
CheckTypeSize(XftGlyphSpec,8, 12576, 11, 1.2, NULL, 12575, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftGlyphSpec,8, 12576, 10, 1.2, NULL, 12575, NULL)
#elif defined __s390x__
CheckTypeSize(XftGlyphSpec,8, 12576, 12, 1.2, NULL, 12575, NULL)
#elif defined __ia64__
CheckTypeSize(XftGlyphSpec,8, 12576, 3, 1.2, NULL, 12575, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftGlyphSpec,8, 12576, 6, 1.2, NULL, 12575, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftGlyphSpec,8, 12576, 9, 1.2, NULL, 12575, NULL)
#else
Msg("Find size of XftGlyphSpec (12576)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12575,NULL);\n",architecture,12576,0);
#endif

#if defined __i386__
CheckTypeSize(XftGlyphSpec *,4, 12577, 2, 1.2, NULL, 12576, NULL)
#elif defined __x86_64__
CheckTypeSize(XftGlyphSpec *,8, 12577, 11, 1.2, NULL, 12576, NULL)
#elif defined __ia64__
CheckTypeSize(XftGlyphSpec *,8, 12577, 3, 1.2, NULL, 12576, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftGlyphSpec *,4, 12577, 6, 1.2, NULL, 12576, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftGlyphSpec *,8, 12577, 9, 1.2, NULL, 12576, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftGlyphSpec *,4, 12577, 10, 1.2, NULL, 12576, NULL)
#elif defined __s390x__
CheckTypeSize(XftGlyphSpec *,8, 12577, 12, 1.2, NULL, 12576, NULL)
#else
Msg("Find size of XftGlyphSpec * (12577)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12576,NULL);\n",architecture,12577,0);
#endif

#if 1
CheckTypeSize(const XftColor,0, 16992, 1, 1.2, NULL, 12557, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XftCharSpec,8, 16994, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftCharSpec on All\n");
CheckOffset(struct _XftCharSpec,ucs4,0,1,54360)
CheckOffset(struct _XftCharSpec,x,0,1,54361)
CheckOffset(struct _XftCharSpec,y,0,1,54362)
#endif

#if defined __x86_64__
CheckTypeSize(XftCharSpec,8, 16995, 11, 1.2, NULL, 16994, NULL)
#elif defined __i386__
CheckTypeSize(XftCharSpec,8, 16995, 2, 1.2, NULL, 16994, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftCharSpec,8, 16995, 10, 1.2, NULL, 16994, NULL)
#elif defined __s390x__
CheckTypeSize(XftCharSpec,8, 16995, 12, 1.2, NULL, 16994, NULL)
#elif defined __ia64__
CheckTypeSize(XftCharSpec,8, 16995, 3, 1.2, NULL, 16994, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftCharSpec,8, 16995, 6, 1.2, NULL, 16994, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftCharSpec,8, 16995, 9, 1.2, NULL, 16994, NULL)
#else
Msg("Find size of XftCharSpec (16995)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16994,NULL);\n",architecture,16995,0);
#endif

#if 1
CheckTypeSize(const XftCharSpec,0, 16996, 1, 1.2, NULL, 16995, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(XGlyphInfo *,4, 16998, 1, 1.2, NULL, 16649, NULL)
#endif

#if 1
CheckTypeSize(const XftGlyphSpec,0, 16999, 1, 1.2, NULL, 12576, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XftFontInfo,68, 17001, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftFontInfo on All\n");
#endif

#if 1
CheckTypeSize(struct _XftFtFile,48, 17002, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftFtFile on All\n");
#endif

#if 1
CheckTypeSize(struct _XftFtFile *,4, 17003, 1, 1.2, NULL, 17002, NULL)
#endif

#if 1
CheckTypeSize(struct _XftCharFontSpec,12, 17008, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftCharFontSpec on All\n");
CheckOffset(struct _XftCharFontSpec,font,0,1,54386)
CheckOffset(struct _XftCharFontSpec,ucs4,0,1,54387)
CheckOffset(struct _XftCharFontSpec,x,0,1,54388)
CheckOffset(struct _XftCharFontSpec,y,0,1,54389)
#endif

#if defined __x86_64__
CheckTypeSize(XftCharFontSpec,16, 17009, 11, 1.2, NULL, 17008, NULL)
#elif defined __i386__
CheckTypeSize(XftCharFontSpec,12, 17009, 2, 1.2, NULL, 17008, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftCharFontSpec,12, 17009, 10, 1.2, NULL, 17008, NULL)
#elif defined __s390x__
CheckTypeSize(XftCharFontSpec,16, 17009, 12, 1.2, NULL, 17008, NULL)
#elif defined __ia64__
CheckTypeSize(XftCharFontSpec,16, 17009, 3, 1.2, NULL, 17008, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftCharFontSpec,12, 17009, 6, 1.2, NULL, 17008, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftCharFontSpec,16, 17009, 9, 1.2, NULL, 17008, NULL)
#else
Msg("Find size of XftCharFontSpec (17009)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,17008,NULL);\n",architecture,17009,0);
#endif

#if 1
CheckTypeSize(const XftCharFontSpec,0, 17010, 1, 1.2, NULL, 17009, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(const FT_UInt,0, 17012, 1, 1.2, NULL, 11171, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(const FcChar16,0, 17014, 1, 1.2, NULL, 16181, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XftGlyphFontSpec,12, 17016, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftGlyphFontSpec on All\n");
CheckOffset(struct _XftGlyphFontSpec,font,0,1,54390)
CheckOffset(struct _XftGlyphFontSpec,glyph,0,1,54391)
CheckOffset(struct _XftGlyphFontSpec,x,0,1,54392)
CheckOffset(struct _XftGlyphFontSpec,y,0,1,54393)
#endif

#if defined __x86_64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 11, 1.2, NULL, 17016, NULL)
#elif defined __i386__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 2, 1.2, NULL, 17016, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 10, 1.2, NULL, 17016, NULL)
#elif defined __s390x__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 12, 1.2, NULL, 17016, NULL)
#elif defined __ia64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 3, 1.2, NULL, 17016, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 6, 1.2, NULL, 17016, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 9, 1.2, NULL, 17016, NULL)
#else
Msg("Find size of XftGlyphFontSpec (17017)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,17016,NULL);\n",architecture,17017,0);
#endif

#if 1
CheckTypeSize(const XftGlyphFontSpec,0, 17018, 1, 1.2, NULL, 17017, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(const XftFontInfo,0, 17020, 1, 1.2, NULL, 17006, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(const FcChar32,0, 17022, 1, 1.2, NULL, 11113, NULL)
#endif

#if 1
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xft/Xft.h\n\n",pcnt,cnt);
return cnt;
#endif

}
