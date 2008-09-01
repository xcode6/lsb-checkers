/*
 * Test of X11/IntrinsicP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/IntrinsicP.h"



#ifdef TET_TEST
void X11_IntrinsicP_h()
{
#else
int X11_IntrinsicP_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/IntrinsicP.h\n");
#endif

printf("Checking data structures in X11/IntrinsicP.h\n");
#if defined __s390x__
CheckTypeSize(XrmResource,48, 100559, 12, 1.3, NULL, 100558, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmResource,48, 100559, 11, 2.0, NULL, 100558, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmResource,28, 100559, 10, 1.3, NULL, 100558, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmResource,48, 100559, 9, 2.0, NULL, 100558, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmResource,28, 100559, 6, 1.2, NULL, 100558, NULL)
#elif defined __ia64__
CheckTypeSize(XrmResource,48, 100559, 3, 1.3, NULL, 100558, NULL)
#elif defined __i386__
CheckTypeSize(XrmResource,28, 100559, 2, 1.2, NULL, 100558, NULL)
#else
Msg("Find size of XrmResource (100559)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100558,NULL);\n",architecture,100559,0);
#endif

#if defined __s390x__
CheckTypeSize(XrmResourceList,8, 100561, 12, 1.3, NULL, 100560, NULL)
#elif defined __x86_64__
CheckTypeSize(XrmResourceList,8, 100561, 11, 2.0, NULL, 100560, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XrmResourceList,4, 100561, 10, 1.3, NULL, 100560, NULL)
#elif defined __powerpc64__
CheckTypeSize(XrmResourceList,8, 100561, 9, 2.0, NULL, 100560, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XrmResourceList,4, 100561, 6, 1.2, NULL, 100560, NULL)
#elif defined __ia64__
CheckTypeSize(XrmResourceList,8, 100561, 3, 1.3, NULL, 100560, NULL)
#elif defined __i386__
CheckTypeSize(XrmResourceList,4, 100561, 2, 1.2, NULL, 100560, NULL)
#else
Msg("Find size of XrmResourceList (100561)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100560,NULL);\n",architecture,100561,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XtTMRec,32, 100587, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,8,12,78350)
CheckOffset(struct _XtTMRec,proc_table,8,12,78350)
CheckMemberSize(struct _XtTMRec,current_state,8,12,78351)
CheckOffset(struct _XtTMRec,current_state,16,12,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,8,12,78352)
CheckOffset(struct _XtTMRec,lastEventTime,24,12,78352)
#elif defined __x86_64__
CheckTypeSize(struct _XtTMRec,32, 100587, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,8,11,78350)
CheckOffset(struct _XtTMRec,proc_table,8,11,78350)
CheckMemberSize(struct _XtTMRec,current_state,8,11,78351)
CheckOffset(struct _XtTMRec,current_state,16,11,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,8,11,78352)
CheckOffset(struct _XtTMRec,lastEventTime,24,11,78352)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtTMRec,16, 100587, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,4,10,78350)
CheckOffset(struct _XtTMRec,proc_table,4,10,78350)
CheckMemberSize(struct _XtTMRec,current_state,4,10,78351)
CheckOffset(struct _XtTMRec,current_state,8,10,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,4,10,78352)
CheckOffset(struct _XtTMRec,lastEventTime,12,10,78352)
#elif defined __powerpc64__
CheckTypeSize(struct _XtTMRec,32, 100587, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,8,9,78350)
CheckOffset(struct _XtTMRec,proc_table,8,9,78350)
CheckMemberSize(struct _XtTMRec,current_state,8,9,78351)
CheckOffset(struct _XtTMRec,current_state,16,9,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,8,9,78352)
CheckOffset(struct _XtTMRec,lastEventTime,24,9,78352)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtTMRec,16, 100587, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,4,6,78350)
CheckOffset(struct _XtTMRec,proc_table,4,6,78350)
CheckMemberSize(struct _XtTMRec,current_state,4,6,78351)
CheckOffset(struct _XtTMRec,current_state,8,6,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,4,6,78352)
CheckOffset(struct _XtTMRec,lastEventTime,12,6,78352)
#elif defined __ia64__
CheckTypeSize(struct _XtTMRec,32, 100587, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,8,3,78350)
CheckOffset(struct _XtTMRec,proc_table,8,3,78350)
CheckMemberSize(struct _XtTMRec,current_state,8,3,78351)
CheckOffset(struct _XtTMRec,current_state,16,3,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,8,3,78352)
CheckOffset(struct _XtTMRec,lastEventTime,24,3,78352)
#elif defined __i386__
CheckTypeSize(struct _XtTMRec,16, 100587, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XtTMRec,proc_table,4,2,78350)
CheckOffset(struct _XtTMRec,proc_table,4,2,78350)
CheckMemberSize(struct _XtTMRec,current_state,4,2,78351)
CheckOffset(struct _XtTMRec,current_state,8,2,78351)
CheckMemberSize(struct _XtTMRec,lastEventTime,4,2,78352)
CheckOffset(struct _XtTMRec,lastEventTime,12,2,78352)
#else
Msg("Find size of _XtTMRec (100587)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100587,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTM,8, 100589, 12, 1.3, NULL, 100588, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTM,8, 100589, 11, 2.0, NULL, 100588, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTM,4, 100589, 10, 1.3, NULL, 100588, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTM,8, 100589, 9, 2.0, NULL, 100588, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTM,4, 100589, 6, 1.2, NULL, 100588, NULL)
#elif defined __ia64__
CheckTypeSize(XtTM,8, 100589, 3, 1.3, NULL, 100588, NULL)
#elif defined __i386__
CheckTypeSize(XtTM,4, 100589, 2, 1.2, NULL, 100588, NULL)
#else
Msg("Find size of XtTM (100589)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100588,NULL);\n",architecture,100589,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTypedArg,32, 100593, 12, 1.3, NULL, 100592, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTypedArg,32, 100593, 11, 2.0, NULL, 100592, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTypedArg,16, 100593, 10, 1.3, NULL, 100592, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTypedArg,32, 100593, 9, 2.0, NULL, 100592, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTypedArg,16, 100593, 6, 1.2, NULL, 100592, NULL)
#elif defined __ia64__
CheckTypeSize(XtTypedArg,32, 100593, 3, 1.3, NULL, 100592, NULL)
#elif defined __i386__
CheckTypeSize(XtTypedArg,16, 100593, 2, 1.2, NULL, 100592, NULL)
#else
Msg("Find size of XtTypedArg (100593)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100592,NULL);\n",architecture,100593,0);
#endif

#if defined __s390x__
CheckTypeSize(XtTypedArgList,8, 100595, 12, 1.3, NULL, 100594, NULL)
#elif defined __x86_64__
CheckTypeSize(XtTypedArgList,8, 100595, 11, 2.0, NULL, 100594, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtTypedArgList,4, 100595, 10, 1.3, NULL, 100594, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtTypedArgList,8, 100595, 9, 2.0, NULL, 100594, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtTypedArgList,4, 100595, 6, 1.2, NULL, 100594, NULL)
#elif defined __ia64__
CheckTypeSize(XtTypedArgList,8, 100595, 3, 1.3, NULL, 100594, NULL)
#elif defined __i386__
CheckTypeSize(XtTypedArgList,4, 100595, 2, 1.2, NULL, 100594, NULL)
#else
Msg("Find size of XtTypedArgList (100595)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100594,NULL);\n",architecture,100595,0);
#endif

#if defined __s390x__
CheckTypeSize(XtProc,8, 100618, 12, 1.3, NULL, 20504, NULL)
#elif defined __x86_64__
CheckTypeSize(XtProc,8, 100618, 11, 2.0, NULL, 20504, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtProc,4, 100618, 10, 1.3, NULL, 20504, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtProc,8, 100618, 9, 2.0, NULL, 20504, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtProc,4, 100618, 6, 1.2, NULL, 20504, NULL)
#elif defined __ia64__
CheckTypeSize(XtProc,8, 100618, 3, 1.3, NULL, 20504, NULL)
#elif defined __i386__
CheckTypeSize(XtProc,4, 100618, 2, 1.2, NULL, 20504, NULL)
#else
Msg("Find size of XtProc (100618)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,20504,NULL);\n",architecture,100618,0);
#endif

#if defined __s390x__
CheckTypeSize(XtWidgetClassProc,8, 100620, 12, 1.3, NULL, 100619, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWidgetClassProc,8, 100620, 11, 2.0, NULL, 100619, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtWidgetClassProc,4, 100620, 10, 1.3, NULL, 100619, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWidgetClassProc,8, 100620, 9, 2.0, NULL, 100619, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWidgetClassProc,4, 100620, 6, 1.2, NULL, 100619, NULL)
#elif defined __ia64__
CheckTypeSize(XtWidgetClassProc,8, 100620, 3, 1.3, NULL, 100619, NULL)
#elif defined __i386__
CheckTypeSize(XtWidgetClassProc,4, 100620, 2, 1.2, NULL, 100619, NULL)
#else
Msg("Find size of XtWidgetClassProc (100620)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100619,NULL);\n",architecture,100620,0);
#endif

#if defined __s390x__
CheckTypeSize(XtInitProc,8, 100622, 12, 1.3, NULL, 100621, NULL)
#elif defined __x86_64__
CheckTypeSize(XtInitProc,8, 100622, 11, 2.0, NULL, 100621, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtInitProc,4, 100622, 10, 1.3, NULL, 100621, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtInitProc,8, 100622, 9, 2.0, NULL, 100621, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtInitProc,4, 100622, 6, 1.2, NULL, 100621, NULL)
#elif defined __ia64__
CheckTypeSize(XtInitProc,8, 100622, 3, 1.3, NULL, 100621, NULL)
#elif defined __i386__
CheckTypeSize(XtInitProc,4, 100622, 2, 1.2, NULL, 100621, NULL)
#else
Msg("Find size of XtInitProc (100622)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100621,NULL);\n",architecture,100622,0);
#endif

#if defined __s390x__
CheckTypeSize(XtArgsProc,8, 100624, 12, 1.3, NULL, 100623, NULL)
#elif defined __x86_64__
CheckTypeSize(XtArgsProc,8, 100624, 11, 2.0, NULL, 100623, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtArgsProc,4, 100624, 10, 1.3, NULL, 100623, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtArgsProc,8, 100624, 9, 2.0, NULL, 100623, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtArgsProc,4, 100624, 6, 1.2, NULL, 100623, NULL)
#elif defined __ia64__
CheckTypeSize(XtArgsProc,8, 100624, 3, 1.3, NULL, 100623, NULL)
#elif defined __i386__
CheckTypeSize(XtArgsProc,4, 100624, 2, 1.2, NULL, 100623, NULL)
#else
Msg("Find size of XtArgsProc (100624)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100623,NULL);\n",architecture,100624,0);
#endif

#if defined __s390x__
CheckTypeSize(XtRealizeProc,8, 100627, 12, 1.3, NULL, 100626, NULL)
#elif defined __x86_64__
CheckTypeSize(XtRealizeProc,8, 100627, 11, 2.0, NULL, 100626, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtRealizeProc,4, 100627, 10, 1.3, NULL, 100626, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtRealizeProc,8, 100627, 9, 2.0, NULL, 100626, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtRealizeProc,4, 100627, 6, 1.2, NULL, 100626, NULL)
#elif defined __ia64__
CheckTypeSize(XtRealizeProc,8, 100627, 3, 1.3, NULL, 100626, NULL)
#elif defined __i386__
CheckTypeSize(XtRealizeProc,4, 100627, 2, 1.2, NULL, 100626, NULL)
#else
Msg("Find size of XtRealizeProc (100627)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100626,NULL);\n",architecture,100627,0);
#endif

#if defined __s390x__
CheckTypeSize(XtWidgetProc,8, 100629, 12, 1.3, NULL, 100628, NULL)
#elif defined __x86_64__
CheckTypeSize(XtWidgetProc,8, 100629, 11, 2.0, NULL, 100628, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtWidgetProc,4, 100629, 10, 1.3, NULL, 100628, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtWidgetProc,8, 100629, 9, 2.0, NULL, 100628, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtWidgetProc,4, 100629, 6, 1.2, NULL, 100628, NULL)
#elif defined __ia64__
CheckTypeSize(XtWidgetProc,8, 100629, 3, 1.3, NULL, 100628, NULL)
#elif defined __i386__
CheckTypeSize(XtWidgetProc,4, 100629, 2, 1.2, NULL, 100628, NULL)
#else
Msg("Find size of XtWidgetProc (100629)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100628,NULL);\n",architecture,100629,0);
#endif

#if defined __s390x__
CheckTypeSize(XtExposeProc,8, 100631, 12, 1.3, NULL, 100630, NULL)
#elif defined __x86_64__
CheckTypeSize(XtExposeProc,8, 100631, 11, 2.0, NULL, 100630, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtExposeProc,4, 100631, 10, 1.3, NULL, 100630, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtExposeProc,8, 100631, 9, 2.0, NULL, 100630, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtExposeProc,4, 100631, 6, 1.2, NULL, 100630, NULL)
#elif defined __ia64__
CheckTypeSize(XtExposeProc,8, 100631, 3, 1.3, NULL, 100630, NULL)
#elif defined __i386__
CheckTypeSize(XtExposeProc,4, 100631, 2, 1.2, NULL, 100630, NULL)
#else
Msg("Find size of XtExposeProc (100631)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100630,NULL);\n",architecture,100631,0);
#endif

#if defined __s390x__
CheckTypeSize(XtSetValuesFunc,8, 100633, 12, 1.3, NULL, 100632, NULL)
#elif defined __x86_64__
CheckTypeSize(XtSetValuesFunc,8, 100633, 11, 2.0, NULL, 100632, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtSetValuesFunc,4, 100633, 10, 1.3, NULL, 100632, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtSetValuesFunc,8, 100633, 9, 2.0, NULL, 100632, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtSetValuesFunc,4, 100633, 6, 1.2, NULL, 100632, NULL)
#elif defined __ia64__
CheckTypeSize(XtSetValuesFunc,8, 100633, 3, 1.3, NULL, 100632, NULL)
#elif defined __i386__
CheckTypeSize(XtSetValuesFunc,4, 100633, 2, 1.2, NULL, 100632, NULL)
#else
Msg("Find size of XtSetValuesFunc (100633)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100632,NULL);\n",architecture,100633,0);
#endif

#if defined __s390x__
CheckTypeSize(XtArgsFunc,8, 100635, 12, 1.3, NULL, 100634, NULL)
#elif defined __x86_64__
CheckTypeSize(XtArgsFunc,8, 100635, 11, 2.0, NULL, 100634, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtArgsFunc,4, 100635, 10, 1.3, NULL, 100634, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtArgsFunc,8, 100635, 9, 2.0, NULL, 100634, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtArgsFunc,4, 100635, 6, 1.2, NULL, 100634, NULL)
#elif defined __ia64__
CheckTypeSize(XtArgsFunc,8, 100635, 3, 1.3, NULL, 100634, NULL)
#elif defined __i386__
CheckTypeSize(XtArgsFunc,4, 100635, 2, 1.2, NULL, 100634, NULL)
#else
Msg("Find size of XtArgsFunc (100635)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100634,NULL);\n",architecture,100635,0);
#endif

#if defined __s390x__
CheckTypeSize(XtAlmostProc,8, 100637, 12, 1.3, NULL, 100636, NULL)
#elif defined __x86_64__
CheckTypeSize(XtAlmostProc,8, 100637, 11, 2.0, NULL, 100636, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtAlmostProc,4, 100637, 10, 1.3, NULL, 100636, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtAlmostProc,8, 100637, 9, 2.0, NULL, 100636, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAlmostProc,4, 100637, 6, 1.2, NULL, 100636, NULL)
#elif defined __ia64__
CheckTypeSize(XtAlmostProc,8, 100637, 3, 1.3, NULL, 100636, NULL)
#elif defined __i386__
CheckTypeSize(XtAlmostProc,4, 100637, 2, 1.2, NULL, 100636, NULL)
#else
Msg("Find size of XtAlmostProc (100637)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100636,NULL);\n",architecture,100637,0);
#endif

#if defined __s390x__
CheckTypeSize(XtAcceptFocusProc,8, 100639, 12, 1.3, NULL, 100638, NULL)
#elif defined __x86_64__
CheckTypeSize(XtAcceptFocusProc,8, 100639, 11, 2.0, NULL, 100638, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtAcceptFocusProc,4, 100639, 10, 1.3, NULL, 100638, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtAcceptFocusProc,8, 100639, 9, 2.0, NULL, 100638, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtAcceptFocusProc,4, 100639, 6, 1.2, NULL, 100638, NULL)
#elif defined __ia64__
CheckTypeSize(XtAcceptFocusProc,8, 100639, 3, 1.3, NULL, 100638, NULL)
#elif defined __i386__
CheckTypeSize(XtAcceptFocusProc,4, 100639, 2, 1.2, NULL, 100638, NULL)
#else
Msg("Find size of XtAcceptFocusProc (100639)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100638,NULL);\n",architecture,100639,0);
#endif

#if defined __s390x__
CheckTypeSize(XtVersionType,8, 100640, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(XtVersionType,8, 100640, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtVersionType,4, 100640, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtVersionType,8, 100640, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtVersionType,4, 100640, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(XtVersionType,8, 100640, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(XtVersionType,4, 100640, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of XtVersionType (100640)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,100640,0);
#endif

#if defined __s390x__
CheckTypeSize(XtGeometryHandler,8, 100642, 12, 1.3, NULL, 100641, NULL)
#elif defined __x86_64__
CheckTypeSize(XtGeometryHandler,8, 100642, 11, 2.0, NULL, 100641, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtGeometryHandler,4, 100642, 10, 1.3, NULL, 100641, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtGeometryHandler,8, 100642, 9, 2.0, NULL, 100641, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtGeometryHandler,4, 100642, 6, 1.2, NULL, 100641, NULL)
#elif defined __ia64__
CheckTypeSize(XtGeometryHandler,8, 100642, 3, 1.3, NULL, 100641, NULL)
#elif defined __i386__
CheckTypeSize(XtGeometryHandler,4, 100642, 2, 1.2, NULL, 100641, NULL)
#else
Msg("Find size of XtGeometryHandler (100642)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100641,NULL);\n",architecture,100642,0);
#endif

#if defined __s390x__
CheckTypeSize(XtStringProc,8, 100644, 12, 1.3, NULL, 100643, NULL)
#elif defined __x86_64__
CheckTypeSize(XtStringProc,8, 100644, 11, 2.0, NULL, 100643, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtStringProc,4, 100644, 10, 1.3, NULL, 100643, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtStringProc,8, 100644, 9, 2.0, NULL, 100643, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtStringProc,4, 100644, 6, 1.2, NULL, 100643, NULL)
#elif defined __ia64__
CheckTypeSize(XtStringProc,8, 100644, 3, 1.3, NULL, 100643, NULL)
#elif defined __i386__
CheckTypeSize(XtStringProc,4, 100644, 2, 1.2, NULL, 100643, NULL)
#else
Msg("Find size of XtStringProc (100644)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100643,NULL);\n",architecture,100644,0);
#endif

#if 1
CheckTypeSize(XtAllocateProc,0, 1008957, 1, 1.2, NULL, 1008959, NULL)
#endif

#if 1
CheckTypeSize(XtDeallocateProc,0, 1008960, 1, 1.2, NULL, 1008961, NULL)
#endif

#if 1
CheckTypeSize(XtTMRec,0, 1008962, 1, 1.2, NULL, 100587, NULL)
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtProc_db)(void);
CheckFunctionTypedef(XtProc,XtProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtWidgetClassProc_db)(WidgetClass);
CheckFunctionTypedef(XtWidgetClassProc,XtWidgetClassProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtInitProc_db)(Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtInitProc,XtInitProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtArgsProc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsProc,XtArgsProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtRealizeProc_db)(Widget, XtValueMask *, XSetWindowAttributes *);
CheckFunctionTypedef(XtRealizeProc,XtRealizeProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtWidgetProc_db)(Widget);
CheckFunctionTypedef(XtWidgetProc,XtWidgetProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtExposeProc_db)(Widget, XEvent *, Region);
CheckFunctionTypedef(XtExposeProc,XtExposeProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtSetValuesFunc_db)(Widget, Widget, Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtSetValuesFunc,XtSetValuesFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtArgsFunc_db)(Widget, ArgList, Cardinal *);
CheckFunctionTypedef(XtArgsFunc,XtArgsFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtAlmostProc_db)(Widget, Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtAlmostProc,XtAlmostProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __ia64__
/* IA64 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#elif defined __i386__
/* IA32 */
typedef Boolean (*XtAcceptFocusProc_db)(Widget, Time *);
CheckFunctionTypedef(XtAcceptFocusProc,XtAcceptFocusProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __ia64__
/* IA64 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#elif defined __i386__
/* IA32 */
typedef XtGeometryResult (*XtGeometryHandler_db)(Widget, XtWidgetGeometry *, XtWidgetGeometry *);
CheckFunctionTypedef(XtGeometryHandler,XtGeometryHandler_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtStringProc_db)(Widget, String);
CheckFunctionTypedef(XtStringProc,XtStringProc_db);
#endif

#if 1
/* All */
typedef void (*XtAllocateProc_db)(WidgetClass, Cardinal *, Cardinal *, ArgList, Cardinal *, XtTypedArgList, Cardinal *, struct _WidgetRec * *, void * *);
CheckFunctionTypedef(XtAllocateProc,XtAllocateProc_db);
#endif

#if 1
/* All */
typedef void (*XtDeallocateProc_db)(struct _WidgetRec *, void *);
CheckFunctionTypedef(XtDeallocateProc,XtDeallocateProc_db);
#endif

extern void XtConfigureWidget_db(Widget, Position, Position, Dimension, Dimension, Dimension);
CheckInterfacedef(XtConfigureWidget,XtConfigureWidget_db);
extern void XtCreateWindow_db(Widget, unsigned int, Visual *, XtValueMask, XSetWindowAttributes *);
CheckInterfacedef(XtCreateWindow,XtCreateWindow_db);
extern Boolean XtIsComposite_db(Widget);
CheckInterfacedef(XtIsComposite,XtIsComposite_db);
extern Boolean XtIsConstraint_db(Widget);
CheckInterfacedef(XtIsConstraint,XtIsConstraint_db);
extern Boolean XtIsRectObj_db(Widget);
CheckInterfacedef(XtIsRectObj,XtIsRectObj_db);
extern Boolean XtIsShell_db(Widget);
CheckInterfacedef(XtIsShell,XtIsShell_db);
extern Boolean XtIsTopLevelShell_db(Widget);
CheckInterfacedef(XtIsTopLevelShell,XtIsTopLevelShell_db);
extern Boolean XtIsWMShell_db(Widget);
CheckInterfacedef(XtIsWMShell,XtIsWMShell_db);
extern Boolean XtIsWidget_db(Widget);
CheckInterfacedef(XtIsWidget,XtIsWidget_db);
extern void XtMoveWidget_db(Widget, Position, Position);
CheckInterfacedef(XtMoveWidget,XtMoveWidget_db);
extern void XtProcessLock_db(void);
CheckInterfacedef(XtProcessLock,XtProcessLock_db);
extern void XtProcessUnlock_db(void);
CheckInterfacedef(XtProcessUnlock,XtProcessUnlock_db);
extern void XtResizeWidget_db(Widget, Dimension, Dimension, Dimension);
CheckInterfacedef(XtResizeWidget,XtResizeWidget_db);
extern void XtResizeWindow_db(Widget);
CheckInterfacedef(XtResizeWindow,XtResizeWindow_db);
extern void _XtInherit_db(void);
CheckInterfacedef(_XtInherit,_XtInherit_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/IntrinsicP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
