/*
 * Test of sys/sem.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/sem.h"



#ifdef TET_TEST
void sys_sem_h()
{
#else
int sys_sem_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/sem.h\n");
#endif

printf("Checking data structures in sys/sem.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SEM_UNDO
	CompareConstant(SEM_UNDO,0x1000,3198,architecture)
#else
Msg( "Error: Constant not found: SEM_UNDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GETPID
	CompareConstant(GETPID,11,3199,architecture)
#else
Msg( "Error: Constant not found: GETPID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GETVAL
	CompareConstant(GETVAL,12,3200,architecture)
#else
Msg( "Error: Constant not found: GETVAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GETALL
	CompareConstant(GETALL,13,3201,architecture)
#else
Msg( "Error: Constant not found: GETALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GETNCNT
	CompareConstant(GETNCNT,14,3202,architecture)
#else
Msg( "Error: Constant not found: GETNCNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GETZCNT
	CompareConstant(GETZCNT,15,3203,architecture)
#else
Msg( "Error: Constant not found: GETZCNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SETVAL
	CompareConstant(SETVAL,16,3204,architecture)
#else
Msg( "Error: Constant not found: SETVAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SETALL
	CompareConstant(SETALL,17,3205,architecture)
#else
Msg( "Error: Constant not found: SETALL\n");
cnt++;
#endif

#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif __x86_64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6982,0);
Msg("Find size of sembuf (6982)\n");
#endif

#if __ia64__
#elif __i386__
#elif __s390__ && !__s390x__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#endif

extern int semctl_db(int, int, int, ...);
CheckInterfacedef(semctl,semctl_db);
extern int semget_db(key_t, int, int);
CheckInterfacedef(semget,semget_db);
extern int semop_db(int, struct sembuf *, size_t);
CheckInterfacedef(semop,semop_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/sem.h\n\n",pcnt,cnt);
return cnt;
#endif

}
