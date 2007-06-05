/*
 * Test of libxml2/libxml/xmlschemas.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include <libxml/globals.h>
#ifndef LSBCC_MODE
#include <libxml/schemasInternals.h>
#endif

struct _xmlSchemaValidCtxt {} ;
struct _xmlSchemaSAXPlug {} ;
struct _xmlSchemaParserCtxt {} ;
#ifdef LSBCC_MODE
struct _xmlSchema {} ;
#endif
#include "libxml2/libxml/xmlschemas.h"



#ifdef TET_TEST
void libxml2_libxml_xmlschemas_h()
{
#else
int libxml2_libxml_xmlschemas_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlschemas.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlschemas.h\n");
#if __i386__
CheckTypeSize(xmlSchemaValidCtxt,0, 15027, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaValidCtxt,0, 15027, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaValidCtxt,0, 15027, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaValidCtxt,0, 15027, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaValidCtxt,0, 15027, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaValidCtxt,0, 15027, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaValidCtxt,0, 15027, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15027,0);
Msg("Find size of xmlSchemaValidCtxt (15027)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaValidCtxtPtr,4, 15029, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaValidCtxtPtr,8, 15029, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaValidCtxtPtr,8, 15029, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaValidCtxtPtr,4, 15029, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaValidCtxtPtr,8, 15029, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaValidCtxtPtr,4, 15029, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaValidCtxtPtr,8, 15029, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15029,0);
Msg("Find size of xmlSchemaValidCtxtPtr (15029)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaSAXPlugStruct,0, 15031, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaSAXPlugStruct,0, 15031, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaSAXPlugStruct,0, 15031, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaSAXPlugStruct,0, 15031, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaSAXPlugStruct,0, 15031, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaSAXPlugStruct,0, 15031, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaSAXPlugStruct,0, 15031, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15031,0);
Msg("Find size of xmlSchemaSAXPlugStruct (15031)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaSAXPlugPtr,4, 15033, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaSAXPlugPtr,8, 15033, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaSAXPlugPtr,8, 15033, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaSAXPlugPtr,4, 15033, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaSAXPlugPtr,8, 15033, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaSAXPlugPtr,4, 15033, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaSAXPlugPtr,8, 15033, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15033,0);
Msg("Find size of xmlSchemaSAXPlugPtr (15033)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaParserCtxt,0, 15035, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaParserCtxt,0, 15035, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaParserCtxt,0, 15035, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaParserCtxt,0, 15035, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaParserCtxt,0, 15035, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaParserCtxt,0, 15035, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaParserCtxt,0, 15035, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15035,0);
Msg("Find size of xmlSchemaParserCtxt (15035)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaParserCtxtPtr,4, 15037, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaParserCtxtPtr,8, 15037, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaParserCtxtPtr,8, 15037, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaParserCtxtPtr,4, 15037, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaParserCtxtPtr,8, 15037, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaParserCtxtPtr,4, 15037, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaParserCtxtPtr,8, 15037, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15037,0);
Msg("Find size of xmlSchemaParserCtxtPtr (15037)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaValidityErrorFunc,4, 15039, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaValidityErrorFunc,8, 15039, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaValidityErrorFunc,8, 15039, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaValidityErrorFunc,4, 15039, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaValidityErrorFunc,8, 15039, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaValidityErrorFunc,4, 15039, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaValidityErrorFunc,8, 15039, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15039,0);
Msg("Find size of xmlSchemaValidityErrorFunc (15039)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaValidityWarningFunc,4, 15041, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaValidityWarningFunc,8, 15041, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaValidityWarningFunc,8, 15041, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaValidityWarningFunc,4, 15041, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaValidityWarningFunc,8, 15041, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaValidityWarningFunc,4, 15041, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaValidityWarningFunc,8, 15041, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15041,0);
Msg("Find size of xmlSchemaValidityWarningFunc (15041)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchema,84, 15044, 2)
#elif __x86_64__
CheckTypeSize(xmlSchema,160, 15044, 11)
#elif __ia64__
CheckTypeSize(xmlSchema,160, 15044, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchema,84, 15044, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchema,160, 15044, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchema,84, 15044, 10)
#elif __s390x__
CheckTypeSize(xmlSchema,160, 15044, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15044,0);
Msg("Find size of xmlSchema (15044)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaPtr,4, 15046, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaPtr,8, 15046, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaPtr,8, 15046, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaPtr,4, 15046, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaPtr,8, 15046, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaPtr,4, 15046, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaPtr,8, 15046, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15046,0);
Msg("Find size of xmlSchemaPtr (15046)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchemaValidOption,4, 15118, 2)
#elif __x86_64__
CheckTypeSize(xmlSchemaValidOption,4, 15118, 11)
#elif __ia64__
CheckTypeSize(xmlSchemaValidOption,4, 15118, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchemaValidOption,4, 15118, 6)
#elif __powerpc64__
CheckTypeSize(xmlSchemaValidOption,4, 15118, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchemaValidOption,4, 15118, 10)
#elif __s390x__
CheckTypeSize(xmlSchemaValidOption,4, 15118, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15118,0);
Msg("Find size of xmlSchemaValidOption (15118)\n");
#endif

extern int xmlSchemaValidateFile_db(xmlSchemaValidCtxtPtr, const char *, int);
CheckInterfacedef(xmlSchemaValidateFile,xmlSchemaValidateFile_db);
extern int xmlSchemaSAXUnplug_db(xmlSchemaSAXPlugPtr);
CheckInterfacedef(xmlSchemaSAXUnplug,xmlSchemaSAXUnplug_db);
extern xmlSchemaParserCtxtPtr xmlSchemaNewMemParserCtxt_db(const char *, int);
CheckInterfacedef(xmlSchemaNewMemParserCtxt,xmlSchemaNewMemParserCtxt_db);
extern int xmlSchemaValidateOneElement_db(xmlSchemaValidCtxtPtr, xmlNodePtr);
CheckInterfacedef(xmlSchemaValidateOneElement,xmlSchemaValidateOneElement_db);
extern int xmlSchemaIsValid_db(xmlSchemaValidCtxtPtr);
CheckInterfacedef(xmlSchemaIsValid,xmlSchemaIsValid_db);
extern xmlSchemaSAXPlugPtr xmlSchemaSAXPlug_db(xmlSchemaValidCtxtPtr, xmlSAXHandlerPtr *, void * *);
CheckInterfacedef(xmlSchemaSAXPlug,xmlSchemaSAXPlug_db);
extern void xmlSchemaFreeParserCtxt_db(xmlSchemaParserCtxtPtr);
CheckInterfacedef(xmlSchemaFreeParserCtxt,xmlSchemaFreeParserCtxt_db);
extern int xmlSchemaValidateDoc_db(xmlSchemaValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlSchemaValidateDoc,xmlSchemaValidateDoc_db);
extern int xmlSchemaGetValidErrors_db(xmlSchemaValidCtxtPtr, xmlSchemaValidityErrorFunc *, xmlSchemaValidityWarningFunc *, void * *);
CheckInterfacedef(xmlSchemaGetValidErrors,xmlSchemaGetValidErrors_db);
extern void xmlSchemaDump_db(FILE *, xmlSchemaPtr);
CheckInterfacedef(xmlSchemaDump,xmlSchemaDump_db);
extern void xmlSchemaSetValidStructuredErrors_db(xmlSchemaValidCtxtPtr, xmlStructuredErrorFunc, void *);
CheckInterfacedef(xmlSchemaSetValidStructuredErrors,xmlSchemaSetValidStructuredErrors_db);
extern int xmlSchemaValidateStream_db(xmlSchemaValidCtxtPtr, xmlParserInputBufferPtr, xmlCharEncoding, xmlSAXHandlerPtr, void *);
CheckInterfacedef(xmlSchemaValidateStream,xmlSchemaValidateStream_db);
extern xmlSchemaPtr xmlSchemaParse_db(xmlSchemaParserCtxtPtr);
CheckInterfacedef(xmlSchemaParse,xmlSchemaParse_db);
extern xmlSchemaValidCtxtPtr xmlSchemaNewValidCtxt_db(xmlSchemaPtr);
CheckInterfacedef(xmlSchemaNewValidCtxt,xmlSchemaNewValidCtxt_db);
extern int xmlSchemaGetParserErrors_db(xmlSchemaParserCtxtPtr, xmlSchemaValidityErrorFunc *, xmlSchemaValidityWarningFunc *, void * *);
CheckInterfacedef(xmlSchemaGetParserErrors,xmlSchemaGetParserErrors_db);
extern void xmlSchemaFreeValidCtxt_db(xmlSchemaValidCtxtPtr);
CheckInterfacedef(xmlSchemaFreeValidCtxt,xmlSchemaFreeValidCtxt_db);
extern int xmlSchemaSetValidOptions_db(xmlSchemaValidCtxtPtr, int);
CheckInterfacedef(xmlSchemaSetValidOptions,xmlSchemaSetValidOptions_db);
extern int xmlSchemaValidCtxtGetOptions_db(xmlSchemaValidCtxtPtr);
CheckInterfacedef(xmlSchemaValidCtxtGetOptions,xmlSchemaValidCtxtGetOptions_db);
extern xmlSchemaParserCtxtPtr xmlSchemaNewParserCtxt_db(const char *);
CheckInterfacedef(xmlSchemaNewParserCtxt,xmlSchemaNewParserCtxt_db);
extern void xmlSchemaSetValidErrors_db(xmlSchemaValidCtxtPtr, xmlSchemaValidityErrorFunc, xmlSchemaValidityWarningFunc, void *);
CheckInterfacedef(xmlSchemaSetValidErrors,xmlSchemaSetValidErrors_db);
extern xmlSchemaParserCtxtPtr xmlSchemaNewDocParserCtxt_db(xmlDocPtr);
CheckInterfacedef(xmlSchemaNewDocParserCtxt,xmlSchemaNewDocParserCtxt_db);
extern void xmlSchemaSetParserErrors_db(xmlSchemaParserCtxtPtr, xmlSchemaValidityErrorFunc, xmlSchemaValidityWarningFunc, void *);
CheckInterfacedef(xmlSchemaSetParserErrors,xmlSchemaSetParserErrors_db);
extern void xmlSchemaFree_db(xmlSchemaPtr);
CheckInterfacedef(xmlSchemaFree,xmlSchemaFree_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlschemas.h\n\n",pcnt,cnt);
return cnt;
#endif

}
