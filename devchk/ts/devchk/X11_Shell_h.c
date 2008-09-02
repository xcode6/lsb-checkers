/*
 * Test of X11/Shell.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Shell.h"



#ifdef TET_TEST
void X11_Shell_h()
{
#else
int X11_Shell_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Shell.h\n");
#endif

printf("Checking data structures in X11/Shell.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for _XtShell_h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Shell.h\n\n",pcnt,cnt);
return cnt;
#endif

}
