/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct _SmcConn {};
struct _SmsConn {};

#include "X11/SM/SMlib.h"



#ifdef TET_TEST
void X11_SM_SMlib_h()
{
#else
int X11_SM_SMlib_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/SM/SMlib.h\n");
#endif

printf("Checking data structures in X11/SM/SMlib.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for SmsSaveYourselfP2RequestProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsSaveYourselfRequestProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsRegisterClientProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsCloseConnectionProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsSaveYourselfDoneProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsGetPropertiesProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsInteractRequestProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmcShutdownCancelledProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsSetPropertiesProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsInteractDoneProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmcSaveYourselfProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmcSaveCompleteProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsDeletePropertiesProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmcDieProcMask */
#endif

#if 1
CheckTypeSize(SmPointer,8, 100247, 1, 1.2, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(SmPropValue,16, 100249, 1, 1.2, NULL, 100248, NULL)
#endif

#if 1
CheckTypeSize(SmPropValue *,0, 100250, 1, 1.2, NULL, 100249, NULL)
#endif

#if 1
CheckTypeSize(SmProp,32, 100252, 1, 1.2, NULL, 100251, NULL)
#endif

#if 1
CheckTypeSize(SmProp *,0, 100253, 1, 1.2, NULL, 100252, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _SmcConn,0, 100255, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _SmcConn on All\n");
#endif

#if 1
CheckTypeSize(struct _SmcConn *,0, 100256, 1, 1.2, NULL, 100255, NULL)
#endif

#if 1
CheckTypeSize(SmcConn,8, 100257, 1, 1.2, NULL, 100256, NULL)
#endif

#if 1
CheckTypeSize(SmcSaveYourselfProc,8, 100259, 1, 1.2, NULL, 100258, NULL)
#endif

#if 1
CheckTypeSize(SmcDieProc,8, 100262, 1, 1.2, NULL, 100261, NULL)
#endif

#if 1
CheckTypeSize(SmcSaveCompleteProc,8, 100264, 1, 1.2, NULL, 100261, NULL)
#endif

#if 1
CheckTypeSize(SmcShutdownCancelledProc,8, 100266, 1, 1.2, NULL, 100261, NULL)
#endif

#if 1
CheckTypeSize(SmcCallbacks,64, 100269, 1, 1.2, NULL, 100268, NULL)
#endif

#if 1
CheckTypeSize(SmcCallbacks *,0, 100270, 1, 1.2, NULL, 100269, NULL)
#endif

#if 1
CheckTypeSize(struct _SmsConn,0, 100271, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _SmsConn on All\n");
#endif

#if 1
CheckTypeSize(struct _SmsConn *,0, 100272, 1, 1.2, NULL, 100271, NULL)
#endif

#if 1
CheckTypeSize(SmsConn,8, 100273, 1, 1.2, NULL, 100272, NULL)
#endif

#if 1
CheckTypeSize(SmsErrorHandler,8, 100275, 1, 1.2, NULL, 100274, NULL)
#endif

#if 1
CheckTypeSize(SmcErrorHandler,8, 100277, 1, 1.2, NULL, 100276, NULL)
#endif

#if 1
CheckTypeSize(SmsRegisterClientProc,8, 100280, 1, 1.2, NULL, 100279, NULL)
#endif

#if 1
CheckTypeSize(SmsInteractRequestProc,8, 100283, 1, 1.2, NULL, 100282, NULL)
#endif

#if 1
CheckTypeSize(SmsInteractDoneProc,8, 100285, 1, 1.2, NULL, 100282, NULL)
#endif

#if 1
CheckTypeSize(SmsSaveYourselfRequestProc,8, 100288, 1, 1.2, NULL, 100287, NULL)
#endif

#if 1
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,8, 100291, 1, 1.2, NULL, 100290, NULL)
#endif

#if 1
CheckTypeSize(SmsSaveYourselfDoneProc,8, 100293, 1, 1.2, NULL, 100282, NULL)
#endif

#if 1
CheckTypeSize(SmsCloseConnectionProc,8, 100296, 1, 1.2, NULL, 100295, NULL)
#endif

#if 1
CheckTypeSize(SmsSetPropertiesProc,8, 100299, 1, 1.2, NULL, 100298, NULL)
#endif

#if 1
CheckTypeSize(SmsDeletePropertiesProc,8, 100301, 1, 1.2, NULL, 100295, NULL)
#endif

#if 1
CheckTypeSize(SmsGetPropertiesProc,8, 100303, 1, 1.2, NULL, 100290, NULL)
#endif

#if 1
CheckTypeSize(SmsCallbacks,160, 100306, 1, 1.2, NULL, 100305, NULL)
#endif

#if 1
CheckTypeSize(SmsCallbacks *,0, 100307, 1, 1.2, NULL, 100306, NULL)
#endif

#if 1
CheckTypeSize(SmsNewClientProc,8, 100309, 1, 1.2, NULL, 100308, NULL)
#endif

#if 1
CheckTypeSize(SmcPropReplyProc,8, 100311, 1, 1.2, NULL, 100310, NULL)
#endif

#if 1
CheckTypeSize(SmcInteractProc,8, 100312, 1, 1.2, NULL, 100261, NULL)
#endif

#if 1
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 100313, 1, 1.2, NULL, 100261, NULL)
#endif

#if 1
CheckEnum("SmcClosedNow",SmcClosedNow,0,78028)
CheckEnum("SmcClosedASAP",SmcClosedASAP,(0) + 1,78029)
CheckEnum("SmcConnectionInUse",SmcConnectionInUse,((0) + 1) + 1,78030)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/SM/SMlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
