/*
 * Test of rpc/types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "rpc/types.h"



#ifdef TET_TEST
void rpc_types_h()
{
#else
int rpc_types_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in rpc/types.h\n");
#endif

#ifdef 1
CheckTypeSize(bool_t,4, 9890, 1)
#elif __i386__
CheckTypeSize(bool_t,4, 9890, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9890,0);
Msg("Find size of bool_t (9890)\n");
#endif

#ifdef __i386__
CheckTypeSize(enum_t,4, 9895, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9895,0);
Msg("Find size of enum_t (9895)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in rpc/types.h\n",cnt);
return cnt;
#endif

}
