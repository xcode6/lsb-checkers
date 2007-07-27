/*
 * Test of freetype/config/ftmodule.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/config/ftmodule.h"



#ifdef TET_TEST
void freetype_config_ftmodule_h()
{
#else
int freetype_config_ftmodule_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/config/ftmodule.h\n");
#endif

printf("Checking data structures in freetype/config/ftmodule.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for freetype/config/ftmodule.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/config/ftmodule.h\n\n",pcnt,cnt);
return cnt;
#endif

}