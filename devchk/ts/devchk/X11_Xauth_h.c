/*
 * Test of X11/Xauth.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/Xauth.h"



#ifdef TET_TEST
void X11_Xauth_h()
{
#else
int X11_Xauth_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/Xauth.h\n");
#endif

#ifdef __i386__
CheckTypeSize(Xauth,32, 8961, 2)
#elif __ia64__
CheckTypeSize(Xauth,64, 8961, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8961,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/Xauth.h\n",cnt);
return cnt;
#endif

}
