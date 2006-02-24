/*
 * Test of libxml2/libxml/xpointer.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/xpointer.h"



#ifdef TET_TEST
void libxml2_libxml_xpointer_h()
{
#else
int libxml2_libxml_xpointer_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xpointer.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xpointer.h\n");
#if __i386__
CheckTypeSize(struct _xmlLocationSet,12, 14910, 2)
CheckMemberSize(struct _xmlLocationSet,locMax,4,2,49080)
CheckOffset(struct _xmlLocationSet,locMax,4,2,49080)
CheckMemberSize(struct _xmlLocationSet,locTab,4,2,49081)
CheckOffset(struct _xmlLocationSet,locTab,8,2,49081)
#elif __x86_64__
CheckTypeSize(struct _xmlLocationSet,16, 14910, 11)
CheckMemberSize(struct _xmlLocationSet,locMax,4,11,49080)
CheckOffset(struct _xmlLocationSet,locMax,4,11,49080)
CheckMemberSize(struct _xmlLocationSet,locTab,8,11,49081)
CheckOffset(struct _xmlLocationSet,locTab,8,11,49081)
#elif __ia64__
CheckTypeSize(struct _xmlLocationSet,16, 14910, 3)
CheckMemberSize(struct _xmlLocationSet,locMax,4,3,49080)
CheckOffset(struct _xmlLocationSet,locMax,4,3,49080)
CheckMemberSize(struct _xmlLocationSet,locTab,8,3,49081)
CheckOffset(struct _xmlLocationSet,locTab,8,3,49081)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _xmlLocationSet,12, 14910, 6)
CheckMemberSize(struct _xmlLocationSet,locMax,4,6,49080)
CheckOffset(struct _xmlLocationSet,locMax,4,6,49080)
CheckMemberSize(struct _xmlLocationSet,locTab,4,6,49081)
CheckOffset(struct _xmlLocationSet,locTab,8,6,49081)
#elif __powerpc64__
CheckTypeSize(struct _xmlLocationSet,16, 14910, 9)
CheckMemberSize(struct _xmlLocationSet,locMax,4,9,49080)
CheckOffset(struct _xmlLocationSet,locMax,4,9,49080)
CheckMemberSize(struct _xmlLocationSet,locTab,8,9,49081)
CheckOffset(struct _xmlLocationSet,locTab,8,9,49081)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _xmlLocationSet,12, 14910, 10)
CheckMemberSize(struct _xmlLocationSet,locMax,4,10,49080)
CheckOffset(struct _xmlLocationSet,locMax,4,10,49080)
CheckMemberSize(struct _xmlLocationSet,locTab,4,10,49081)
CheckOffset(struct _xmlLocationSet,locTab,8,10,49081)
#elif __s390x__
CheckTypeSize(struct _xmlLocationSet,16, 14910, 12)
CheckMemberSize(struct _xmlLocationSet,locMax,4,12,49080)
CheckOffset(struct _xmlLocationSet,locMax,4,12,49080)
CheckMemberSize(struct _xmlLocationSet,locTab,8,12,49081)
CheckOffset(struct _xmlLocationSet,locTab,8,12,49081)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14910,0);
Msg("Find size of _xmlLocationSet (14910)\n");
#endif

#if __i386__
CheckTypeSize(xmlLocationSet,12, 14911, 2)
#elif __x86_64__
CheckTypeSize(xmlLocationSet,16, 14911, 11)
#elif __ia64__
CheckTypeSize(xmlLocationSet,16, 14911, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlLocationSet,12, 14911, 6)
#elif __powerpc64__
CheckTypeSize(xmlLocationSet,16, 14911, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlLocationSet,12, 14911, 10)
#elif __s390x__
CheckTypeSize(xmlLocationSet,16, 14911, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14911,0);
Msg("Find size of xmlLocationSet (14911)\n");
#endif

#if __i386__
CheckTypeSize(xmlLocationSet *,4, 14912, 2)
#elif __x86_64__
CheckTypeSize(xmlLocationSet *,8, 14912, 11)
#elif __ia64__
CheckTypeSize(xmlLocationSet *,8, 14912, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlLocationSet *,4, 14912, 6)
#elif __powerpc64__
CheckTypeSize(xmlLocationSet *,8, 14912, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlLocationSet *,4, 14912, 10)
#elif __s390x__
CheckTypeSize(xmlLocationSet *,8, 14912, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14912,0);
Msg("Find size of xmlLocationSet * (14912)\n");
#endif

#if __i386__
CheckTypeSize(xmlLocationSetPtr,4, 14913, 2)
#elif __x86_64__
CheckTypeSize(xmlLocationSetPtr,8, 14913, 11)
#elif __ia64__
CheckTypeSize(xmlLocationSetPtr,8, 14913, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlLocationSetPtr,4, 14913, 6)
#elif __powerpc64__
CheckTypeSize(xmlLocationSetPtr,8, 14913, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlLocationSetPtr,4, 14913, 10)
#elif __s390x__
CheckTypeSize(xmlLocationSetPtr,8, 14913, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14913,0);
Msg("Find size of xmlLocationSetPtr (14913)\n");
#endif

extern xmlLocationSetPtr xmlXPtrLocationSetCreate_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrLocationSetCreate,xmlXPtrLocationSetCreate_db);
extern xmlXPathObjectPtr xmlXPtrNewRange_db(xmlNodePtr, int, xmlNodePtr, int);
CheckInterfacedef(xmlXPtrNewRange,xmlXPtrNewRange_db);
extern xmlXPathObjectPtr xmlXPtrNewRangeNodeObject_db(xmlNodePtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrNewRangeNodeObject,xmlXPtrNewRangeNodeObject_db);
extern xmlXPathObjectPtr xmlXPtrEval_db(const xmlChar *, xmlXPathContextPtr);
CheckInterfacedef(xmlXPtrEval,xmlXPtrEval_db);
extern void xmlXPtrEvalRangePredicate_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPtrEvalRangePredicate,xmlXPtrEvalRangePredicate_db);
extern xmlXPathContextPtr xmlXPtrNewContext_db(xmlDocPtr, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlXPtrNewContext,xmlXPtrNewContext_db);
extern xmlXPathObjectPtr xmlXPtrNewRangePoints_db(xmlXPathObjectPtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrNewRangePoints,xmlXPtrNewRangePoints_db);
extern void xmlXPtrRangeToFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPtrRangeToFunction,xmlXPtrRangeToFunction_db);
extern xmlXPathObjectPtr xmlXPtrNewRangeNodePoint_db(xmlNodePtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrNewRangeNodePoint,xmlXPtrNewRangeNodePoint_db);
extern xmlLocationSetPtr xmlXPtrLocationSetMerge_db(xmlLocationSetPtr, xmlLocationSetPtr);
CheckInterfacedef(xmlXPtrLocationSetMerge,xmlXPtrLocationSetMerge_db);
extern xmlXPathObjectPtr xmlXPtrNewRangeNodes_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlXPtrNewRangeNodes,xmlXPtrNewRangeNodes_db);
extern xmlNodePtr xmlXPtrBuildNodeList_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrBuildNodeList,xmlXPtrBuildNodeList_db);
extern xmlXPathObjectPtr xmlXPtrWrapLocationSet_db(xmlLocationSetPtr);
CheckInterfacedef(xmlXPtrWrapLocationSet,xmlXPtrWrapLocationSet_db);
extern xmlXPathObjectPtr xmlXPtrNewLocationSetNodes_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlXPtrNewLocationSetNodes,xmlXPtrNewLocationSetNodes_db);
extern xmlXPathObjectPtr xmlXPtrNewLocationSetNodeSet_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPtrNewLocationSetNodeSet,xmlXPtrNewLocationSetNodeSet_db);
extern void xmlXPtrLocationSetDel_db(xmlLocationSetPtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrLocationSetDel,xmlXPtrLocationSetDel_db);
extern void xmlXPtrLocationSetRemove_db(xmlLocationSetPtr, int);
CheckInterfacedef(xmlXPtrLocationSetRemove,xmlXPtrLocationSetRemove_db);
extern xmlXPathObjectPtr xmlXPtrNewCollapsedRange_db(xmlNodePtr);
CheckInterfacedef(xmlXPtrNewCollapsedRange,xmlXPtrNewCollapsedRange_db);
extern xmlXPathObjectPtr xmlXPtrNewRangePointNode_db(xmlXPathObjectPtr, xmlNodePtr);
CheckInterfacedef(xmlXPtrNewRangePointNode,xmlXPtrNewRangePointNode_db);
extern void xmlXPtrLocationSetAdd_db(xmlLocationSetPtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrLocationSetAdd,xmlXPtrLocationSetAdd_db);
extern void xmlXPtrFreeLocationSet_db(xmlLocationSetPtr);
CheckInterfacedef(xmlXPtrFreeLocationSet,xmlXPtrFreeLocationSet_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xpointer.h\n\n",pcnt,cnt);
return cnt;
#endif

}
