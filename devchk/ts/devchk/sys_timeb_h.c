/*
 * Test of sys/timeb.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/timeb.h"



#ifdef TET_TEST
void sys_timeb_h()
{
#else
int sys_timeb_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/timeb.h\n");
#endif

printf("Checking data structures in sys/timeb.h\n");
#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10216,0);
Msg("Find size of timeb (10216)\n");
#endif

extern int ftime_db(struct timeb *);
CheckInterfacedef(ftime,ftime_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/timeb.h\n\n",pcnt,cnt);
return cnt;
#endif

}
