/*
 * Test of wctype.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "wctype.h"



int wctype_h()
{
int cnt=0;
CheckTypeSize(wctrans_t,0)
CheckTypeSize(wctype_t,0)
printf("%d tests in wctype.h\n",cnt);
return cnt;
}
