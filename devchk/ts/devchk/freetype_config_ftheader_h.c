/*
 * Test of freetype/config/ftheader.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/config/ftheader.h"



#ifdef TET_TEST
void freetype_config_ftheader_h()
{
#else
int freetype_config_ftheader_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/config/ftheader.h\n");
#endif

printf("Checking data structures in freetype/config/ftheader.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_BEGIN_HEADER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_END_HEADER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_BBOX_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_BDF_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_BITMAP_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_CHARMAP_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_IMAGE_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_INTERNAL_CACHE_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_INTERNAL_GLYPH_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_INTERNAL_IMAGE_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_INTERNAL_MANAGER_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_INTERNAL_MRU_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_INTERNAL_SBITS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_MANAGER_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_SMALL_BITMAPS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CONFIG_CONFIG_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CONFIG_MODULES_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CONFIG_OPTIONS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CONFIG_STANDARD_LIBRARY_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERROR_DEFINITIONS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FREETYPE_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_GLYPH_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_GZIP_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_IMAGE_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_INCREMENTAL_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_LIST_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_LZW_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_MAC_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_MODULE_ERRORS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_MODULE_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_MULTIPLE_MASTERS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_OPENTYPE_VALIDATE_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_OUTLINE_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_RENDER_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_SFNT_NAMES_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_SIZES_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_STROKER_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_SYNTHESIS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_SYSTEM_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_TRIGONOMETRY_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_TRUETYPE_IDS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_TRUETYPE_TABLES_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_TRUETYPE_TAGS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_TRUETYPE_UNPATENTED_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_TYPE1_TABLES_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_TYPES_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_WINFONTS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_XFREE86_H */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/config/ftheader.h\n\n",pcnt,cnt);
return cnt;
#endif

}
