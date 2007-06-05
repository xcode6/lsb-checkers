/*
 * Test of libxml2/libxml/xmlerror.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/xmlerror.h"



#ifdef TET_TEST
void libxml2_libxml_xmlerror_h()
{
#else
int libxml2_libxml_xmlerror_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlerror.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlerror.h\n");
#if __i386__
CheckTypeSize(xmlInputReadCallback,4, 14645, 2)
#elif __x86_64__
CheckTypeSize(xmlInputReadCallback,8, 14645, 11)
#elif __ia64__
CheckTypeSize(xmlInputReadCallback,8, 14645, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlInputReadCallback,4, 14645, 6)
#elif __powerpc64__
CheckTypeSize(xmlInputReadCallback,8, 14645, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlInputReadCallback,4, 14645, 10)
#elif __s390x__
CheckTypeSize(xmlInputReadCallback,8, 14645, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14645,0);
Msg("Find size of xmlInputReadCallback (14645)\n");
#endif

#if __i386__
CheckTypeSize(xmlInputCloseCallback,4, 14646, 2)
#elif __x86_64__
CheckTypeSize(xmlInputCloseCallback,8, 14646, 11)
#elif __ia64__
CheckTypeSize(xmlInputCloseCallback,8, 14646, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlInputCloseCallback,4, 14646, 6)
#elif __powerpc64__
CheckTypeSize(xmlInputCloseCallback,8, 14646, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlInputCloseCallback,4, 14646, 10)
#elif __s390x__
CheckTypeSize(xmlInputCloseCallback,8, 14646, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14646,0);
Msg("Find size of xmlInputCloseCallback (14646)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserInputBuffer,36, 14647, 2)
#elif __x86_64__
CheckTypeSize(xmlParserInputBuffer,64, 14647, 11)
#elif __ia64__
CheckTypeSize(xmlParserInputBuffer,64, 14647, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserInputBuffer,36, 14647, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserInputBuffer,64, 14647, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserInputBuffer,36, 14647, 10)
#elif __s390x__
CheckTypeSize(xmlParserInputBuffer,64, 14647, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14647,0);
Msg("Find size of xmlParserInputBuffer (14647)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserInputBufferPtr,4, 14649, 2)
#elif __x86_64__
CheckTypeSize(xmlParserInputBufferPtr,8, 14649, 11)
#elif __ia64__
CheckTypeSize(xmlParserInputBufferPtr,8, 14649, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserInputBufferPtr,4, 14649, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserInputBufferPtr,8, 14649, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserInputBufferPtr,4, 14649, 10)
#elif __s390x__
CheckTypeSize(xmlParserInputBufferPtr,8, 14649, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14649,0);
Msg("Find size of xmlParserInputBufferPtr (14649)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserInputDeallocate,4, 14651, 2)
#elif __x86_64__
CheckTypeSize(xmlParserInputDeallocate,8, 14651, 11)
#elif __ia64__
CheckTypeSize(xmlParserInputDeallocate,8, 14651, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserInputDeallocate,4, 14651, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserInputDeallocate,8, 14651, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserInputDeallocate,4, 14651, 10)
#elif __s390x__
CheckTypeSize(xmlParserInputDeallocate,8, 14651, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14651,0);
Msg("Find size of xmlParserInputDeallocate (14651)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserInput,60, 14652, 2)
#elif __x86_64__
CheckTypeSize(xmlParserInput,104, 14652, 11)
#elif __ia64__
CheckTypeSize(xmlParserInput,104, 14652, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserInput,60, 14652, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserInput,104, 14652, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserInput,60, 14652, 10)
#elif __s390x__
CheckTypeSize(xmlParserInput,104, 14652, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14652,0);
Msg("Find size of xmlParserInput (14652)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserInputPtr,4, 14654, 2)
#elif __x86_64__
CheckTypeSize(xmlParserInputPtr,8, 14654, 11)
#elif __ia64__
CheckTypeSize(xmlParserInputPtr,8, 14654, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserInputPtr,4, 14654, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserInputPtr,8, 14654, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserInputPtr,4, 14654, 10)
#elif __s390x__
CheckTypeSize(xmlParserInputPtr,8, 14654, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14654,0);
Msg("Find size of xmlParserInputPtr (14654)\n");
#endif

#if __i386__
CheckTypeSize(xmlGenericErrorFunc,4, 14656, 2)
#elif __x86_64__
CheckTypeSize(xmlGenericErrorFunc,8, 14656, 11)
#elif __ia64__
CheckTypeSize(xmlGenericErrorFunc,8, 14656, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlGenericErrorFunc,4, 14656, 6)
#elif __powerpc64__
CheckTypeSize(xmlGenericErrorFunc,8, 14656, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlGenericErrorFunc,4, 14656, 10)
#elif __s390x__
CheckTypeSize(xmlGenericErrorFunc,8, 14656, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14656,0);
Msg("Find size of xmlGenericErrorFunc (14656)\n");
#endif

#if __i386__
CheckTypeSize(xmlErrorLevel,4, 14659, 2)
#elif __x86_64__
CheckTypeSize(xmlErrorLevel,4, 14659, 11)
#elif __ia64__
CheckTypeSize(xmlErrorLevel,4, 14659, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlErrorLevel,4, 14659, 6)
#elif __powerpc64__
CheckTypeSize(xmlErrorLevel,4, 14659, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlErrorLevel,4, 14659, 10)
#elif __s390x__
CheckTypeSize(xmlErrorLevel,4, 14659, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14659,0);
Msg("Find size of xmlErrorLevel (14659)\n");
#endif

#if __i386__
CheckTypeSize(xmlError,52, 14660, 2)
#elif __x86_64__
CheckTypeSize(xmlError,88, 14660, 11)
#elif __ia64__
CheckTypeSize(xmlError,88, 14660, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlError,52, 14660, 6)
#elif __powerpc64__
CheckTypeSize(xmlError,88, 14660, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlError,52, 14660, 10)
#elif __s390x__
CheckTypeSize(xmlError,88, 14660, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14660,0);
Msg("Find size of xmlError (14660)\n");
#endif

#if __i386__
CheckTypeSize(xmlErrorPtr,4, 14662, 2)
#elif __x86_64__
CheckTypeSize(xmlErrorPtr,8, 14662, 11)
#elif __ia64__
CheckTypeSize(xmlErrorPtr,8, 14662, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlErrorPtr,4, 14662, 6)
#elif __powerpc64__
CheckTypeSize(xmlErrorPtr,8, 14662, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlErrorPtr,4, 14662, 10)
#elif __s390x__
CheckTypeSize(xmlErrorPtr,8, 14662, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14662,0);
Msg("Find size of xmlErrorPtr (14662)\n");
#endif

#if __i386__
CheckTypeSize(xmlStructuredErrorFunc,4, 14665, 2)
#elif __x86_64__
CheckTypeSize(xmlStructuredErrorFunc,8, 14665, 11)
#elif __ia64__
CheckTypeSize(xmlStructuredErrorFunc,8, 14665, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlStructuredErrorFunc,4, 14665, 6)
#elif __powerpc64__
CheckTypeSize(xmlStructuredErrorFunc,8, 14665, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlStructuredErrorFunc,4, 14665, 10)
#elif __s390x__
CheckTypeSize(xmlStructuredErrorFunc,8, 14665, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14665,0);
Msg("Find size of xmlStructuredErrorFunc (14665)\n");
#endif

#if __i386__
CheckTypeSize(xmlErrorDomain,4, 14667, 2)
#elif __x86_64__
CheckTypeSize(xmlErrorDomain,4, 14667, 11)
#elif __ia64__
CheckTypeSize(xmlErrorDomain,4, 14667, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlErrorDomain,4, 14667, 6)
#elif __powerpc64__
CheckTypeSize(xmlErrorDomain,4, 14667, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlErrorDomain,4, 14667, 10)
#elif __s390x__
CheckTypeSize(xmlErrorDomain,4, 14667, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14667,0);
Msg("Find size of xmlErrorDomain (14667)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserErrors,4, 14669, 2)
#elif __x86_64__
CheckTypeSize(xmlParserErrors,4, 14669, 11)
#elif __ia64__
CheckTypeSize(xmlParserErrors,4, 14669, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserErrors,4, 14669, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserErrors,4, 14669, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserErrors,4, 14669, 10)
#elif __s390x__
CheckTypeSize(xmlParserErrors,4, 14669, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14669,0);
Msg("Find size of xmlParserErrors (14669)\n");
#endif

extern void xmlParserPrintFileInfo_db(xmlParserInputPtr);
CheckInterfacedef(xmlParserPrintFileInfo,xmlParserPrintFileInfo_db);
extern void xmlSetGenericErrorFunc_db(void *, xmlGenericErrorFunc);
CheckInterfacedef(xmlSetGenericErrorFunc,xmlSetGenericErrorFunc_db);
extern void xmlCtxtResetLastError_db(void *);
CheckInterfacedef(xmlCtxtResetLastError,xmlCtxtResetLastError_db);
extern void xmlParserValidityWarning_db(void *, const char *, ...);
CheckInterfacedef(xmlParserValidityWarning,xmlParserValidityWarning_db);
extern int xmlCopyError_db(xmlErrorPtr, xmlErrorPtr);
CheckInterfacedef(xmlCopyError,xmlCopyError_db);
extern void initGenericErrorDefaultFunc_db(xmlGenericErrorFunc *);
CheckInterfacedef(initGenericErrorDefaultFunc,initGenericErrorDefaultFunc_db);
extern xmlErrorPtr xmlCtxtGetLastError_db(void *);
CheckInterfacedef(xmlCtxtGetLastError,xmlCtxtGetLastError_db);
extern void xmlParserPrintFileContext_db(xmlParserInputPtr);
CheckInterfacedef(xmlParserPrintFileContext,xmlParserPrintFileContext_db);
extern void xmlResetLastError_db(void);
CheckInterfacedef(xmlResetLastError,xmlResetLastError_db);
extern void xmlSetStructuredErrorFunc_db(void *, xmlStructuredErrorFunc);
CheckInterfacedef(xmlSetStructuredErrorFunc,xmlSetStructuredErrorFunc_db);
extern void xmlParserWarning_db(void *, const char *, ...);
CheckInterfacedef(xmlParserWarning,xmlParserWarning_db);
extern void xmlResetError_db(xmlErrorPtr);
CheckInterfacedef(xmlResetError,xmlResetError_db);
extern xmlErrorPtr xmlGetLastError_db(void);
CheckInterfacedef(xmlGetLastError,xmlGetLastError_db);
extern void xmlParserValidityError_db(void *, const char *, ...);
CheckInterfacedef(xmlParserValidityError,xmlParserValidityError_db);
extern void xmlParserError_db(void *, const char *, ...);
CheckInterfacedef(xmlParserError,xmlParserError_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlerror.h\n\n",pcnt,cnt);
return cnt;
#endif

}
