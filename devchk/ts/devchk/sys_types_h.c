/*
 * Test of sys/types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <stdarg.h>
#include "sys/types.h"



#ifdef TET_TEST
void sys_types_h()
{
#else
int sys_types_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/types.h\n");
#endif

#ifdef NULL
	CompareConstant(NULL,((void*)0))
#else
Msg( "Error: Constant not found: NULL\n");
cnt++;
#endif

#ifdef __FDSET_LONGS
	CompareConstant(__FDSET_LONGS,32)
#else
Msg( "Error: Constant not found: __FDSET_LONGS\n");
cnt++;
#endif

#ifdef __FDSET_LONGS
	CompareConstant(__FDSET_LONGS,16)
#else
Msg( "Error: Constant not found: __FDSET_LONGS\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(int32_t,4, 6997, 2)
#elif __ia64__
CheckTypeSize(int32_t,4, 6997, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6997,0);
#endif

#ifdef __i386__
CheckTypeSize(size_t,4, 8969, 2)
#elif __ia64__
CheckTypeSize(size_t,8, 8969, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8969,0);
#endif

#ifdef __i386__
CheckTypeSize(__ssize_t,4, 8970, 2)
#elif __ia64__
CheckTypeSize(__ssize_t,8, 8970, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8970,0);
#endif

#ifdef __i386__
CheckTypeSize(__off_t,4, 8971, 2)
#elif __ia64__
CheckTypeSize(__off_t,8, 8971, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8971,0);
#endif

#ifdef __i386__
CheckTypeSize(__off64_t,8, 8972, 2)
#elif __ia64__
CheckTypeSize(__off64_t,8, 8972, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8972,0);
#endif

#ifdef __i386__
CheckTypeSize(ssize_t,4, 9029, 2)
#elif __ia64__
CheckTypeSize(ssize_t,8, 9029, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9029,0);
#endif

#ifdef __i386__
CheckTypeSize(__uid_t,4, 9068, 2)
#elif __ia64__
CheckTypeSize(__uid_t,4, 9068, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9068,0);
#endif

#ifdef __i386__
CheckTypeSize(pid_t,4, 9094, 2)
#elif __ia64__
CheckTypeSize(pid_t,4, 9094, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9094,0);
#endif

#ifdef __i386__
CheckTypeSize(off_t,4, 9111, 2)
#elif __ia64__
CheckTypeSize(off_t,8, 9111, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9111,0);
#endif

#ifdef __i386__
CheckTypeSize(key_t,4, 9116, 2)
#elif __ia64__
CheckTypeSize(key_t,4, 9116, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9116,0);
#endif

#ifdef __i386__
CheckTypeSize(clock_t,4, 9164, 2)
#elif __ia64__
CheckTypeSize(clock_t,8, 9164, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9164,0);
#endif

#ifdef __i386__
CheckTypeSize(time_t,4, 9191, 2)
#elif __ia64__
CheckTypeSize(time_t,8, 9191, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9191,0);
#endif

#ifdef __i386__
CheckTypeSize(fd_set,128, 10133, 2)
#elif __ia64__
CheckTypeSize(fd_set,128, 10133, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10133,0);
#endif

#ifdef __i386__
CheckTypeSize(mode_t,4, 9160, 2)
#elif __ia64__
CheckTypeSize(mode_t,4, 9160, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9160,0);
#endif

#ifdef __i386__
CheckTypeSize(caddr_t,4, 9258, 2)
#elif __ia64__
CheckTypeSize(caddr_t,8, 9258, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9258,0);
#endif

#ifdef __i386__
CheckTypeSize(__gid_t,4, 9011, 2)
#elif __ia64__
CheckTypeSize(__gid_t,4, 9011, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9011,0);
#endif

#ifdef __i386__
CheckTypeSize(loff_t,8, 9167, 2)
#elif __ia64__
CheckTypeSize(loff_t,8, 9167, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9167,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/types.h\n",cnt);
return cnt;
#endif

}
