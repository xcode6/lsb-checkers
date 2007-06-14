/*
 * Test of limits.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "limits.h"



#ifdef TET_TEST
void limits_h()
{
#else
int limits_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in limits.h\n");
#endif

printf("Checking data structures in limits.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SHRT_MIN
	CompareConstant(SHRT_MIN,(-32768),10,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SHRT_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHRT_MAX
	CompareConstant(SHRT_MAX,32767,11,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SHRT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef USHRT_MAX
	CompareConstant(USHRT_MAX,65535,12,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: USHRT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_MIN
	CompareConstant(INT_MIN,(-INT_MAX-1),13,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: INT_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_MAX
	CompareConstant(INT_MAX,2147483647,14,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: INT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINT_MAX
	CompareConstant(UINT_MAX,4294967295U,15,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: UINT_MAX\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,9223372036854775807L,16,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,2147483647L,16,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif __ia64__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,0x7FFFFFFFFFFFFFFFL,16,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif __i386__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,0x7FFFFFFFL,16,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif __s390x__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,9223372036854775807L,16,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif __x86_64__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,0x7FFFFFFFFFFFFFFFL,16,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,2147483647,16,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for LONG_MAX (16, int) in db\n");
#ifdef LONG_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,16,%d,'""1.3""',NULL);\n", architecture, LONG_MAX);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef LONG_MIN
	CompareConstant(LONG_MIN,(-LONG_MAX-1L),17,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LONG_MIN\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFFFFFFFFFUL,18,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFUL,18,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif __ia64__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFFFFFFFFFUL,18,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif __i386__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFUL,18,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif __s390x__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFFFFFFFFFUL,18,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif __x86_64__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFFFFFFFFFUL,18,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFUL,18,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for ULONG_MAX (18, long) in db\n");
#ifdef ULONG_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,18,%ld,'""1.3""',NULL);\n", architecture, ULONG_MAX);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef MB_LEN_MAX
	CompareConstant(MB_LEN_MAX,16,2,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: MB_LEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OPEN_MAX
	CompareConstant(OPEN_MAX,256,24,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: OPEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PATH_MAX
	CompareConstant(PATH_MAX,4096,29,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PATH_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LLONG_MAX
	CompareConstant(LLONG_MAX,9223372036854775807LL,3062,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: LLONG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LLONG_MIN
	CompareConstant(LLONG_MIN,(-LLONG_MAX-1LL),3063,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: LLONG_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ULLONG_MAX
	CompareConstant(ULLONG_MAX,18446744073709551615ULL,3064,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ULLONG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_THREADS_MAX
	CompareConstant(PTHREAD_THREADS_MAX,16384,3085,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_THREADS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_KEYS_MAX
	CompareConstant(PTHREAD_KEYS_MAX,1024,3088,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_KEYS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_DESTRUCTOR_ITERATIONS
	CompareConstant(PTHREAD_DESTRUCTOR_ITERATIONS,4,3089,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_DESTRUCTOR_ITERATIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CHAR_BIT
	CompareConstant(CHAR_BIT,8,4,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CHAR_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCHAR_MIN
	CompareConstant(SCHAR_MIN,(-128),5,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SCHAR_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSIZE_MAX
	CompareConstant(SSIZE_MAX,LONG_MAX,5127,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SSIZE_MAX\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif __ia64__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,196608,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif __i386__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif __s390x__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif __x86_64__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#else
Msg( "No definition for PTHREAD_STACK_MIN (5310, int) in db\n");
#ifdef PTHREAD_STACK_MIN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5310,%d,'""3.0""',NULL);\n", architecture, PTHREAD_STACK_MIN);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef SCHAR_MAX
	CompareConstant(SCHAR_MAX,127,6,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SCHAR_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UCHAR_MAX
	CompareConstant(UCHAR_MAX,255,7,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: UCHAR_MAX\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,0,8,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,0,8,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif __ia64__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,SCHAR_MIN,8,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif __i386__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,SCHAR_MIN,8,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif __s390x__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,0,8,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif __x86_64__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,SCHAR_MIN,8,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,0,8,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#else
Msg( "No definition for CHAR_MIN (8, int) in db\n");
#ifdef CHAR_MIN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,8,%d,'""1.3""',NULL);\n", architecture, CHAR_MIN);
#endif
#endif
#if __powerpc64__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,255,9,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,255,9,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif __ia64__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,SCHAR_MAX,9,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif __i386__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,SCHAR_MAX,9,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif __s390x__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,255,9,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif __x86_64__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,127,9,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,255,9,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for CHAR_MAX (9, int) in db\n");
#ifdef CHAR_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,9,%d,'""1.3""',NULL);\n", architecture, CHAR_MAX);
#endif
#endif
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in limits.h\n\n",pcnt,cnt);
return cnt;
#endif

}
