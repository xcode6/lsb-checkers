/*
 * Test of sys/mman.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/mman.h"



#ifdef TET_TEST
void sys_mman_h()
{
#else
int sys_mman_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/mman.h\n");
#endif

#ifdef MAP_FAILED
	CompareConstant(MAP_FAILED,((void*)-1))
#else
Msg( "Error: Constant not found: MAP_FAILED\n");
cnt++;
#endif

#ifdef PROT_READ
	CompareConstant(PROT_READ,0x1)
#else
Msg( "Error: Constant not found: PROT_READ\n");
cnt++;
#endif

#ifdef PROT_WRITE
	CompareConstant(PROT_WRITE,0x2)
#else
Msg( "Error: Constant not found: PROT_WRITE\n");
cnt++;
#endif

#ifdef PROT_EXEC
	CompareConstant(PROT_EXEC,0x4)
#else
Msg( "Error: Constant not found: PROT_EXEC\n");
cnt++;
#endif

#ifdef PROT_NONE
	CompareConstant(PROT_NONE,0x0)
#else
Msg( "Error: Constant not found: PROT_NONE\n");
cnt++;
#endif

#ifdef MAP_SHARED
	CompareConstant(MAP_SHARED,0x01)
#else
Msg( "Error: Constant not found: MAP_SHARED\n");
cnt++;
#endif

#ifdef MAP_PRIVATE
	CompareConstant(MAP_PRIVATE,0x02)
#else
Msg( "Error: Constant not found: MAP_PRIVATE\n");
cnt++;
#endif

#ifdef MS_ASYNC
	CompareConstant(MS_ASYNC,1)
#else
Msg( "Error: Constant not found: MS_ASYNC\n");
cnt++;
#endif

#ifdef MS_INVALIDATE
	CompareConstant(MS_INVALIDATE,2)
#else
Msg( "Error: Constant not found: MS_INVALIDATE\n");
cnt++;
#endif

#ifdef MS_SYNC
	CompareConstant(MS_SYNC,4)
#else
Msg( "Error: Constant not found: MS_SYNC\n");
cnt++;
#endif

#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,1)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,2)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/mman.h\n",cnt);
return cnt;
#endif

}
