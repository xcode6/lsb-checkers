/*
 * Test of X11/extensions/sync.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/extensions/sync.h"



#ifdef TET_TEST
void X11_extensions_sync_h()
{
#else
int X11_extensions_sync_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/extensions/sync.h\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncSystemCounter,16, 8615, 2)
#elif __ia64__
CheckTypeSize(XSyncSystemCounter,24, 8615, 3)
#elif __powerpc__
CheckTypeSize(XSyncSystemCounter,16, 8615, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8615,0);
Msg("Find size of XSyncTrigger (8615)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncTrigger,20, 8617, 2)
#elif __ia64__
CheckTypeSize(XSyncTrigger,24, 8617, 3)
#elif __powerpc__
CheckTypeSize(XSyncTrigger,20, 8617, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8617,0);
Msg("Find size of XSyncWaitCondition (8617)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncWaitCondition,28, 8619, 2)
#elif __ia64__
CheckTypeSize(XSyncWaitCondition,32, 8619, 3)
#elif __powerpc__
CheckTypeSize(XSyncWaitCondition,28, 8619, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8619,0);
Msg("Find size of XSyncAlarmAttributes (8619)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 2)
#elif __ia64__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 3)
#elif __powerpc__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8621,0);
Msg("Find size of XSyncCounter (8621)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncCounter,4, 8609, 2)
#elif __ia64__
CheckTypeSize(XSyncCounter,8, 8609, 3)
#elif __powerpc__
CheckTypeSize(XSyncCounter,4, 8609, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8609,0);
Msg("Find size of XSyncAlarm (8609)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncAlarm,4, 8610, 2)
#elif __ia64__
CheckTypeSize(XSyncAlarm,8, 8610, 3)
#elif __powerpc__
CheckTypeSize(XSyncAlarm,4, 8610, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8610,0);
Msg("Find size of XSyncValue (8610)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncValue,8, 8612, 2)
#elif __ia64__
CheckTypeSize(XSyncValue,8, 8612, 3)
#elif __powerpc__
CheckTypeSize(XSyncValue,8, 8612, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8612,0);
Msg("Find size of XSyncValueType (8612)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncValueType,4, 8964, 2)
#elif __ia64__
CheckTypeSize(XSyncValueType,4, 8964, 3)
#elif __powerpc__
CheckTypeSize(XSyncValueType,4, 8964, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8964,0);
Msg("Find size of XSyncTestType (8964)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncTestType,4, 8966, 2)
#elif __ia64__
CheckTypeSize(XSyncTestType,4, 8966, 3)
#elif __powerpc__
CheckTypeSize(XSyncTestType,4, 8966, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8966,0);
Msg("Find size of XSyncAlarmState (8966)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncAlarmState,4, 8968, 2)
#elif __ia64__
CheckTypeSize(XSyncAlarmState,4, 8968, 3)
#elif __powerpc__
CheckTypeSize(XSyncAlarmState,4, 8968, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8968,0);
Msg("Find size of XSyncAlarmState (8968)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/extensions/sync.h\n",cnt);
return cnt;
#endif

}
