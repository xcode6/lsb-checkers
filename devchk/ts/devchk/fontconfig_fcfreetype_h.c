/*
 * Test of fontconfig/fcfreetype.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <fontconfig.h>
#include "fontconfig/fcfreetype.h"



#ifdef TET_TEST
void fontconfig_fcfreetype_h()
{
#else
int fontconfig_fcfreetype_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in fontconfig/fcfreetype.h\n");
#endif

printf("Checking data structures in fontconfig/fcfreetype.h\n");
#if __i386__
CheckTypeSize(struct FT_FaceRec_ *,4, 11167, 2)
#elif __x86_64__
CheckTypeSize(struct FT_FaceRec_ *,8, 11167, 11)
#elif __ia64__
CheckTypeSize(struct FT_FaceRec_ *,8, 11167, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11167,0);
Msg("Find size of FT_FaceRec_ * (11167)\n");
#endif

#if __i386__
CheckTypeSize(FT_Face *,4, 11169, 2)
#elif __x86_64__
CheckTypeSize(FT_Face *,8, 11169, 11)
#elif __ia64__
CheckTypeSize(FT_Face *,8, 11169, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11169,0);
Msg("Find size of FT_Face * (11169)\n");
#endif

#if __i386__
CheckTypeSize(const FT_Face,4, 11170, 2)
#elif __x86_64__
CheckTypeSize(const FT_Face,8, 11170, 11)
#elif __ia64__
CheckTypeSize(const FT_Face,8, 11170, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11170,0);
Msg("Find size of const FT_Face (11170)\n");
#endif

extern FcResult FcPatternGetFTFace_db(const FcPattern *, const char *, int, FT_Face *);
CheckInterfacedef(FcPatternGetFTFace,FcPatternGetFTFace_db);
extern FcBool FcPatternAddFTFace_db(FcPattern *, const char *, const FT_Face);
CheckInterfacedef(FcPatternAddFTFace,FcPatternAddFTFace_db);
extern FT_UInt FcFreeTypeCharIndex_db(FT_Face, FcChar32);
CheckInterfacedef(FcFreeTypeCharIndex,FcFreeTypeCharIndex_db);
extern FcCharSet * FcFreeTypeCharSet_db(FT_Face, FcBlanks *);
CheckInterfacedef(FcFreeTypeCharSet,FcFreeTypeCharSet_db);
extern FcCharSet * FcFreeTypeCharSetAndSpacing_db(FT_Face, FcBlanks *, int *);
CheckInterfacedef(FcFreeTypeCharSetAndSpacing,FcFreeTypeCharSetAndSpacing_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in fontconfig/fcfreetype.h\n\n",pcnt,cnt);
return cnt;
#endif

}
