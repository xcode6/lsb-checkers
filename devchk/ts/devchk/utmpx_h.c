/*
 * Test of utmpx.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <utmp.h>
#include "utmpx.h"



#ifdef TET_TEST
void utmpx_h()
{
#else
int utmpx_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in utmpx.h\n");
#endif

#if __i386__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10558,0);
Msg("Find size of utmpx * (10558)\n");
#endif

#if 1
CheckTypeSize(char[UT_LINESIZE],32, 10559, 1)
#endif

#if 1
CheckTypeSize(char[UT_NAMESIZE],32, 10560, 1)
#endif

#if 1
CheckTypeSize(char[UT_HOSTSIZE],256, 10561, 1)
#endif

#if __i386__
CheckTypeSize(struct utmpx,384, 10555, 2)
CheckMemberSize(struct utmpx,ut_pid,4,2,40287)
CheckOffset(struct utmpx,ut_pid,4,2,40287)
CheckMemberSize(struct utmpx,ut_line,32,2,40288)
CheckOffset(struct utmpx,ut_line,8,2,40288)
CheckMemberSize(struct utmpx,ut_id,4,2,40289)
CheckOffset(struct utmpx,ut_id,40,2,40289)
CheckMemberSize(struct utmpx,ut_user,32,2,40290)
CheckOffset(struct utmpx,ut_user,44,2,40290)
CheckMemberSize(struct utmpx,ut_host,256,2,40291)
CheckOffset(struct utmpx,ut_host,76,2,40291)
CheckMemberSize(struct utmpx,ut_exit,4,2,40292)
CheckOffset(struct utmpx,ut_exit,332,2,40292)
CheckMemberSize(struct utmpx,ut_session,4,2,40293)
CheckOffset(struct utmpx,ut_session,336,2,40293)
CheckMemberSize(struct utmpx,ut_tv,8,2,40294)
CheckOffset(struct utmpx,ut_tv,340,2,40294)
CheckMemberSize(struct utmpx,ut_addr_v6,16,2,40295)
CheckOffset(struct utmpx,ut_addr_v6,348,2,40295)
CheckMemberSize(struct utmpx,__unused,20,2,40296)
CheckOffset(struct utmpx,__unused,364,2,40296)
#elif __s390x__
CheckTypeSize(struct utmpx,0, 10555, 12)
Msg("Missing member data for utmpx on S390X\n");
CheckOffset(struct utmpx,ut_type,0,12,40286)
CheckOffset(struct utmpx,ut_pid,0,12,40287)
CheckOffset(struct utmpx,ut_line,0,12,40288)
CheckOffset(struct utmpx,ut_id,0,12,40289)
CheckOffset(struct utmpx,ut_user,0,12,40290)
CheckOffset(struct utmpx,ut_host,0,12,40291)
CheckOffset(struct utmpx,ut_exit,0,12,40292)
CheckOffset(struct utmpx,ut_session,0,12,40293)
CheckOffset(struct utmpx,ut_tv,0,12,40294)
CheckOffset(struct utmpx,ut_addr_v6,0,12,40295)
CheckOffset(struct utmpx,__unused,0,12,40296)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10555,0);
Msg("Find size of utmpx (10555)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in utmpx.h\n",cnt);
return cnt;
#endif

}
