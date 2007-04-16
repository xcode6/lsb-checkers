/*
 * Test of sys/un.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/un.h"



#ifdef TET_TEST
void sys_un_h()
{
#else
int sys_un_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/un.h\n");
#endif

printf("Checking data structures in sys/un.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef UNIX_PATH_MAX
	CompareConstant(UNIX_PATH_MAX,108,4992,architecture)
#else
Msg( "Error: Constant not found: UNIX_PATH_MAX\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct sockaddr_un,110, 9152, 2);
CheckMemberSize(struct sockaddr_un,sun_path,108,2,34486);
CheckOffset(struct sockaddr_un,sun_path,2,2,34486);
#elif __ia64__
CheckTypeSize(struct sockaddr_un,110, 9152, 3);
CheckMemberSize(struct sockaddr_un,sun_path,108,3,34486);
CheckOffset(struct sockaddr_un,sun_path,2,3,34486);
#elif __s390__ && !__s390x__
CheckTypeSize(struct sockaddr_un,110, 9152, 10);
CheckMemberSize(struct sockaddr_un,sun_path,108,10,34486);
CheckOffset(struct sockaddr_un,sun_path,2,10,34486);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct sockaddr_un,110, 9152, 6);
CheckMemberSize(struct sockaddr_un,sun_path,108,6,34486);
CheckOffset(struct sockaddr_un,sun_path,2,6,34486);
#elif __powerpc64__
CheckTypeSize(struct sockaddr_un,110, 9152, 9);
CheckMemberSize(struct sockaddr_un,sun_path,108,9,34486);
CheckOffset(struct sockaddr_un,sun_path,2,9,34486);
#elif __s390x__
CheckTypeSize(struct sockaddr_un,110, 9152, 12);
CheckMemberSize(struct sockaddr_un,sun_path,108,12,34486);
CheckOffset(struct sockaddr_un,sun_path,2,12,34486);
#elif __x86_64__
CheckTypeSize(struct sockaddr_un,110, 9152, 11);
CheckMemberSize(struct sockaddr_un,sun_path,108,11,34486);
CheckOffset(struct sockaddr_un,sun_path,2,11,34486);
#elif 1
CheckTypeSize(struct sockaddr_un,0, 9152, 1);
Msg("Missing member data for sockaddr_un on All\n");
CheckOffset(struct sockaddr_un,sun_family,0,1,34485);
CheckOffset(struct sockaddr_un,sun_path,0,1,34486);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/un.h\n\n",pcnt,cnt);
return cnt;
#endif

}
