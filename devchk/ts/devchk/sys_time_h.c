/*
 * Test of sys/time.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/time.h"



#ifdef TET_TEST
void sys_time_h()
{
#else
int sys_time_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/time.h\n");
#endif

#ifdef ITIMER_REAL
	CompareConstant(ITIMER_REAL,0)
#else
Msg( "Error: Constant not found: ITIMER_REAL\n");
cnt++;
#endif

#ifdef ITIMER_VIRTUAL
	CompareConstant(ITIMER_VIRTUAL,1)
#else
Msg( "Error: Constant not found: ITIMER_VIRTUAL\n");
cnt++;
#endif

#ifdef ITIMER_PROF
	CompareConstant(ITIMER_PROF,2)
#else
Msg( "Error: Constant not found: ITIMER_PROF\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(struct timezone,8, 9855, 2)
#elif __ia64__
CheckTypeSize(struct timezone,8, 9855, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9855,0);
#endif

#ifdef __i386__
CheckTypeSize(struct itimerval,16, 9861, 2)
#elif __ia64__
CheckTypeSize(struct itimerval,32, 9861, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9861,0);
#endif

#ifdef __i386__
CheckTypeSize(struct timespec,8, 7018, 2)
#elif __ia64__
CheckTypeSize(struct timespec,16, 7018, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7018,0);
#endif

#ifdef __i386__
CheckTypeSize(struct timeval,8, 9858, 2)
#elif __ia64__
CheckTypeSize(struct timeval,16, 9858, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9858,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/time.h\n",cnt);
return cnt;
#endif

}
