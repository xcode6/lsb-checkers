/*
 * Test of X11/ConstrainP.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/Core.h>
#include <X11/CoreP.h>
#include "X11/ConstrainP.h"



#ifdef TET_TEST
void X11_ConstrainP_h()
{
#else
int X11_ConstrainP_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/ConstrainP.h\n");
#endif

#ifdef XtConstraintExtensionVersion
	CompareConstant(XtConstraintExtensionVersion,1L)
#else
Msg( "Error: Constant not found: XtConstraintExtensionVersion\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(ConstraintClassRec,164, 10258, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10258,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/ConstrainP.h\n",cnt);
return cnt;
#endif

}
