/*
 * Test of libxml2/libxml/SAX2.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/SAX2.h"



#ifdef TET_TEST
void libxml2_libxml_SAX2_h()
{
#else
int libxml2_libxml_SAX2_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/SAX2.h\n");
#endif

printf("Checking data structures in libxml2/libxml/SAX2.h\n");
#if defined __i386__
CheckTypeSize(internalSubsetSAXFunc,4, 14742, 2, 3.1, NULL, 14741, NULL)
#elif defined __x86_64__
CheckTypeSize(internalSubsetSAXFunc,8, 14742, 11, 3.1, NULL, 14741, NULL)
#elif defined __ia64__
CheckTypeSize(internalSubsetSAXFunc,8, 14742, 3, 3.1, NULL, 14741, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(internalSubsetSAXFunc,4, 14742, 6, 3.1, NULL, 14741, NULL)
#elif defined __powerpc64__
CheckTypeSize(internalSubsetSAXFunc,8, 14742, 9, 3.1, NULL, 14741, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(internalSubsetSAXFunc,4, 14742, 10, 3.1, NULL, 14741, NULL)
#elif defined __s390x__
CheckTypeSize(internalSubsetSAXFunc,8, 14742, 12, 3.1, NULL, 14741, NULL)
#else
Msg("Find size of internalSubsetSAXFunc (14742)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14741,NULL);\n",architecture,14742,0);
#endif

#if defined __i386__
CheckTypeSize(isStandaloneSAXFunc,4, 14743, 2, 3.1, NULL, 14629, NULL)
#elif defined __x86_64__
CheckTypeSize(isStandaloneSAXFunc,8, 14743, 11, 3.1, NULL, 14629, NULL)
#elif defined __ia64__
CheckTypeSize(isStandaloneSAXFunc,8, 14743, 3, 3.1, NULL, 14629, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(isStandaloneSAXFunc,4, 14743, 6, 3.1, NULL, 14629, NULL)
#elif defined __powerpc64__
CheckTypeSize(isStandaloneSAXFunc,8, 14743, 9, 3.1, NULL, 14629, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(isStandaloneSAXFunc,4, 14743, 10, 3.1, NULL, 14629, NULL)
#elif defined __s390x__
CheckTypeSize(isStandaloneSAXFunc,8, 14743, 12, 3.1, NULL, 14629, NULL)
#else
Msg("Find size of isStandaloneSAXFunc (14743)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14629,NULL);\n",architecture,14743,0);
#endif

#if defined __i386__
CheckTypeSize(hasInternalSubsetSAXFunc,4, 14744, 2, 3.1, NULL, 14629, NULL)
#elif defined __x86_64__
CheckTypeSize(hasInternalSubsetSAXFunc,8, 14744, 11, 3.1, NULL, 14629, NULL)
#elif defined __ia64__
CheckTypeSize(hasInternalSubsetSAXFunc,8, 14744, 3, 3.1, NULL, 14629, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(hasInternalSubsetSAXFunc,4, 14744, 6, 3.1, NULL, 14629, NULL)
#elif defined __powerpc64__
CheckTypeSize(hasInternalSubsetSAXFunc,8, 14744, 9, 3.1, NULL, 14629, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(hasInternalSubsetSAXFunc,4, 14744, 10, 3.1, NULL, 14629, NULL)
#elif defined __s390x__
CheckTypeSize(hasInternalSubsetSAXFunc,8, 14744, 12, 3.1, NULL, 14629, NULL)
#else
Msg("Find size of hasInternalSubsetSAXFunc (14744)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14629,NULL);\n",architecture,14744,0);
#endif

#if defined __i386__
CheckTypeSize(hasExternalSubsetSAXFunc,4, 14745, 2, 3.1, NULL, 14629, NULL)
#elif defined __x86_64__
CheckTypeSize(hasExternalSubsetSAXFunc,8, 14745, 11, 3.1, NULL, 14629, NULL)
#elif defined __ia64__
CheckTypeSize(hasExternalSubsetSAXFunc,8, 14745, 3, 3.1, NULL, 14629, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(hasExternalSubsetSAXFunc,4, 14745, 6, 3.1, NULL, 14629, NULL)
#elif defined __powerpc64__
CheckTypeSize(hasExternalSubsetSAXFunc,8, 14745, 9, 3.1, NULL, 14629, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(hasExternalSubsetSAXFunc,4, 14745, 10, 3.1, NULL, 14629, NULL)
#elif defined __s390x__
CheckTypeSize(hasExternalSubsetSAXFunc,8, 14745, 12, 3.1, NULL, 14629, NULL)
#else
Msg("Find size of hasExternalSubsetSAXFunc (14745)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14629,NULL);\n",architecture,14745,0);
#endif

#if defined __i386__
CheckTypeSize(resolveEntitySAXFunc,4, 14747, 2, 3.1, NULL, 14746, NULL)
#elif defined __x86_64__
CheckTypeSize(resolveEntitySAXFunc,8, 14747, 11, 3.1, NULL, 14746, NULL)
#elif defined __ia64__
CheckTypeSize(resolveEntitySAXFunc,8, 14747, 3, 3.1, NULL, 14746, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(resolveEntitySAXFunc,4, 14747, 6, 3.1, NULL, 14746, NULL)
#elif defined __powerpc64__
CheckTypeSize(resolveEntitySAXFunc,8, 14747, 9, 3.1, NULL, 14746, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(resolveEntitySAXFunc,4, 14747, 10, 3.1, NULL, 14746, NULL)
#elif defined __s390x__
CheckTypeSize(resolveEntitySAXFunc,8, 14747, 12, 3.1, NULL, 14746, NULL)
#else
Msg("Find size of resolveEntitySAXFunc (14747)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14746,NULL);\n",architecture,14747,0);
#endif

#if defined __i386__
CheckTypeSize(getEntitySAXFunc,4, 14749, 2, 3.1, NULL, 14748, NULL)
#elif defined __x86_64__
CheckTypeSize(getEntitySAXFunc,8, 14749, 11, 3.1, NULL, 14748, NULL)
#elif defined __ia64__
CheckTypeSize(getEntitySAXFunc,8, 14749, 3, 3.1, NULL, 14748, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(getEntitySAXFunc,4, 14749, 6, 3.1, NULL, 14748, NULL)
#elif defined __powerpc64__
CheckTypeSize(getEntitySAXFunc,8, 14749, 9, 3.1, NULL, 14748, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(getEntitySAXFunc,4, 14749, 10, 3.1, NULL, 14748, NULL)
#elif defined __s390x__
CheckTypeSize(getEntitySAXFunc,8, 14749, 12, 3.1, NULL, 14748, NULL)
#else
Msg("Find size of getEntitySAXFunc (14749)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14748,NULL);\n",architecture,14749,0);
#endif

#if defined __i386__
CheckTypeSize(entityDeclSAXFunc,4, 14751, 2, 3.1, NULL, 14750, NULL)
#elif defined __x86_64__
CheckTypeSize(entityDeclSAXFunc,8, 14751, 11, 3.1, NULL, 14750, NULL)
#elif defined __ia64__
CheckTypeSize(entityDeclSAXFunc,8, 14751, 3, 3.1, NULL, 14750, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(entityDeclSAXFunc,4, 14751, 6, 3.1, NULL, 14750, NULL)
#elif defined __powerpc64__
CheckTypeSize(entityDeclSAXFunc,8, 14751, 9, 3.1, NULL, 14750, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(entityDeclSAXFunc,4, 14751, 10, 3.1, NULL, 14750, NULL)
#elif defined __s390x__
CheckTypeSize(entityDeclSAXFunc,8, 14751, 12, 3.1, NULL, 14750, NULL)
#else
Msg("Find size of entityDeclSAXFunc (14751)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14750,NULL);\n",architecture,14751,0);
#endif

#if defined __i386__
CheckTypeSize(notationDeclSAXFunc,4, 14752, 2, 3.1, NULL, 14741, NULL)
#elif defined __x86_64__
CheckTypeSize(notationDeclSAXFunc,8, 14752, 11, 3.1, NULL, 14741, NULL)
#elif defined __ia64__
CheckTypeSize(notationDeclSAXFunc,8, 14752, 3, 3.1, NULL, 14741, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(notationDeclSAXFunc,4, 14752, 6, 3.1, NULL, 14741, NULL)
#elif defined __powerpc64__
CheckTypeSize(notationDeclSAXFunc,8, 14752, 9, 3.1, NULL, 14741, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(notationDeclSAXFunc,4, 14752, 10, 3.1, NULL, 14741, NULL)
#elif defined __s390x__
CheckTypeSize(notationDeclSAXFunc,8, 14752, 12, 3.1, NULL, 14741, NULL)
#else
Msg("Find size of notationDeclSAXFunc (14752)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14741,NULL);\n",architecture,14752,0);
#endif

#if defined __i386__
CheckTypeSize(xmlEnumeration,8, 14755, 2, 3.1, NULL, 14753, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlEnumeration,16, 14755, 11, 3.1, NULL, 14753, NULL)
#elif defined __ia64__
CheckTypeSize(xmlEnumeration,16, 14755, 3, 3.1, NULL, 14753, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlEnumeration,8, 14755, 6, 3.1, NULL, 14753, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlEnumeration,16, 14755, 9, 3.1, NULL, 14753, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlEnumeration,8, 14755, 10, 3.1, NULL, 14753, NULL)
#elif defined __s390x__
CheckTypeSize(xmlEnumeration,16, 14755, 12, 3.1, NULL, 14753, NULL)
#else
Msg("Find size of xmlEnumeration (14755)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14753,NULL);\n",architecture,14755,0);
#endif

#if defined __i386__
CheckTypeSize(xmlEnumerationPtr,4, 14757, 2, 3.1, NULL, 14756, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlEnumerationPtr,8, 14757, 11, 3.1, NULL, 14756, NULL)
#elif defined __ia64__
CheckTypeSize(xmlEnumerationPtr,8, 14757, 3, 3.1, NULL, 14756, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlEnumerationPtr,4, 14757, 6, 3.1, NULL, 14756, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlEnumerationPtr,8, 14757, 9, 3.1, NULL, 14756, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlEnumerationPtr,4, 14757, 10, 3.1, NULL, 14756, NULL)
#elif defined __s390x__
CheckTypeSize(xmlEnumerationPtr,8, 14757, 12, 3.1, NULL, 14756, NULL)
#else
Msg("Find size of xmlEnumerationPtr (14757)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14756,NULL);\n",architecture,14757,0);
#endif

#if defined __i386__
CheckTypeSize(attributeDeclSAXFunc,4, 14759, 2, 3.1, NULL, 14758, NULL)
#elif defined __x86_64__
CheckTypeSize(attributeDeclSAXFunc,8, 14759, 11, 3.1, NULL, 14758, NULL)
#elif defined __ia64__
CheckTypeSize(attributeDeclSAXFunc,8, 14759, 3, 3.1, NULL, 14758, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(attributeDeclSAXFunc,4, 14759, 6, 3.1, NULL, 14758, NULL)
#elif defined __powerpc64__
CheckTypeSize(attributeDeclSAXFunc,8, 14759, 9, 3.1, NULL, 14758, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(attributeDeclSAXFunc,4, 14759, 10, 3.1, NULL, 14758, NULL)
#elif defined __s390x__
CheckTypeSize(attributeDeclSAXFunc,8, 14759, 12, 3.1, NULL, 14758, NULL)
#else
Msg("Find size of attributeDeclSAXFunc (14759)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14758,NULL);\n",architecture,14759,0);
#endif

#if defined __i386__
CheckTypeSize(xmlElementContentType,4, 14762, 2, 3.1, NULL, 14761, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlElementContentType,4, 14762, 11, 3.1, NULL, 14761, NULL)
#elif defined __ia64__
CheckTypeSize(xmlElementContentType,4, 14762, 3, 3.1, NULL, 14761, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlElementContentType,4, 14762, 6, 3.1, NULL, 14761, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlElementContentType,4, 14762, 9, 3.1, NULL, 14761, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlElementContentType,4, 14762, 10, 3.1, NULL, 14761, NULL)
#elif defined __s390x__
CheckTypeSize(xmlElementContentType,4, 14762, 12, 3.1, NULL, 14761, NULL)
#else
Msg("Find size of xmlElementContentType (14762)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14761,NULL);\n",architecture,14762,0);
#endif

#if defined __i386__
CheckTypeSize(xmlElementContentOccur,4, 14764, 2, 3.1, NULL, 14763, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlElementContentOccur,4, 14764, 11, 3.1, NULL, 14763, NULL)
#elif defined __ia64__
CheckTypeSize(xmlElementContentOccur,4, 14764, 3, 3.1, NULL, 14763, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlElementContentOccur,4, 14764, 6, 3.1, NULL, 14763, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlElementContentOccur,4, 14764, 9, 3.1, NULL, 14763, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlElementContentOccur,4, 14764, 10, 3.1, NULL, 14763, NULL)
#elif defined __s390x__
CheckTypeSize(xmlElementContentOccur,4, 14764, 12, 3.1, NULL, 14763, NULL)
#else
Msg("Find size of xmlElementContentOccur (14764)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14763,NULL);\n",architecture,14764,0);
#endif

#if defined __i386__
CheckTypeSize(xmlElementContent,28, 14766, 2, 3.1, NULL, 14760, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlElementContent,48, 14766, 11, 3.1, NULL, 14760, NULL)
#elif defined __ia64__
CheckTypeSize(xmlElementContent,48, 14766, 3, 3.1, NULL, 14760, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlElementContent,28, 14766, 6, 3.1, NULL, 14760, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlElementContent,48, 14766, 9, 3.1, NULL, 14760, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlElementContent,28, 14766, 10, 3.1, NULL, 14760, NULL)
#elif defined __s390x__
CheckTypeSize(xmlElementContent,48, 14766, 12, 3.1, NULL, 14760, NULL)
#else
Msg("Find size of xmlElementContent (14766)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14760,NULL);\n",architecture,14766,0);
#endif

#if defined __i386__
CheckTypeSize(xmlElementContentPtr,4, 14768, 2, 3.1, NULL, 14767, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlElementContentPtr,8, 14768, 11, 3.1, NULL, 14767, NULL)
#elif defined __ia64__
CheckTypeSize(xmlElementContentPtr,8, 14768, 3, 3.1, NULL, 14767, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlElementContentPtr,4, 14768, 6, 3.1, NULL, 14767, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlElementContentPtr,8, 14768, 9, 3.1, NULL, 14767, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlElementContentPtr,4, 14768, 10, 3.1, NULL, 14767, NULL)
#elif defined __s390x__
CheckTypeSize(xmlElementContentPtr,8, 14768, 12, 3.1, NULL, 14767, NULL)
#else
Msg("Find size of xmlElementContentPtr (14768)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14767,NULL);\n",architecture,14768,0);
#endif

#if defined __i386__
CheckTypeSize(elementDeclSAXFunc,4, 14770, 2, 3.1, NULL, 14769, NULL)
#elif defined __x86_64__
CheckTypeSize(elementDeclSAXFunc,8, 14770, 11, 3.1, NULL, 14769, NULL)
#elif defined __ia64__
CheckTypeSize(elementDeclSAXFunc,8, 14770, 3, 3.1, NULL, 14769, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(elementDeclSAXFunc,4, 14770, 6, 3.1, NULL, 14769, NULL)
#elif defined __powerpc64__
CheckTypeSize(elementDeclSAXFunc,8, 14770, 9, 3.1, NULL, 14769, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(elementDeclSAXFunc,4, 14770, 10, 3.1, NULL, 14769, NULL)
#elif defined __s390x__
CheckTypeSize(elementDeclSAXFunc,8, 14770, 12, 3.1, NULL, 14769, NULL)
#else
Msg("Find size of elementDeclSAXFunc (14770)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14769,NULL);\n",architecture,14770,0);
#endif

#if defined __i386__
CheckTypeSize(unparsedEntityDeclSAXFunc,4, 14772, 2, 3.1, NULL, 14771, NULL)
#elif defined __x86_64__
CheckTypeSize(unparsedEntityDeclSAXFunc,8, 14772, 11, 3.1, NULL, 14771, NULL)
#elif defined __ia64__
CheckTypeSize(unparsedEntityDeclSAXFunc,8, 14772, 3, 3.1, NULL, 14771, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(unparsedEntityDeclSAXFunc,4, 14772, 6, 3.1, NULL, 14771, NULL)
#elif defined __powerpc64__
CheckTypeSize(unparsedEntityDeclSAXFunc,8, 14772, 9, 3.1, NULL, 14771, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(unparsedEntityDeclSAXFunc,4, 14772, 10, 3.1, NULL, 14771, NULL)
#elif defined __s390x__
CheckTypeSize(unparsedEntityDeclSAXFunc,8, 14772, 12, 3.1, NULL, 14771, NULL)
#else
Msg("Find size of unparsedEntityDeclSAXFunc (14772)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14771,NULL);\n",architecture,14772,0);
#endif

#if defined __i386__
CheckTypeSize(xmlSAXLocator,16, 14775, 2, 3.1, NULL, 14773, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSAXLocator,32, 14775, 11, 3.1, NULL, 14773, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSAXLocator,32, 14775, 3, 3.1, NULL, 14773, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSAXLocator,16, 14775, 6, 3.1, NULL, 14773, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSAXLocator,32, 14775, 9, 3.1, NULL, 14773, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSAXLocator,16, 14775, 10, 3.1, NULL, 14773, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSAXLocator,32, 14775, 12, 3.1, NULL, 14773, NULL)
#else
Msg("Find size of xmlSAXLocator (14775)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14773,NULL);\n",architecture,14775,0);
#endif

#if defined __i386__
CheckTypeSize(xmlSAXLocatorPtr,4, 14777, 2, 3.1, NULL, 14776, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSAXLocatorPtr,8, 14777, 11, 3.1, NULL, 14776, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSAXLocatorPtr,8, 14777, 3, 3.1, NULL, 14776, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSAXLocatorPtr,4, 14777, 6, 3.1, NULL, 14776, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSAXLocatorPtr,8, 14777, 9, 3.1, NULL, 14776, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSAXLocatorPtr,4, 14777, 10, 3.1, NULL, 14776, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSAXLocatorPtr,8, 14777, 12, 3.1, NULL, 14776, NULL)
#else
Msg("Find size of xmlSAXLocatorPtr (14777)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14776,NULL);\n",architecture,14777,0);
#endif

#if defined __i386__
CheckTypeSize(setDocumentLocatorSAXFunc,4, 14779, 2, 3.1, NULL, 14778, NULL)
#elif defined __x86_64__
CheckTypeSize(setDocumentLocatorSAXFunc,8, 14779, 11, 3.1, NULL, 14778, NULL)
#elif defined __ia64__
CheckTypeSize(setDocumentLocatorSAXFunc,8, 14779, 3, 3.1, NULL, 14778, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(setDocumentLocatorSAXFunc,4, 14779, 6, 3.1, NULL, 14778, NULL)
#elif defined __powerpc64__
CheckTypeSize(setDocumentLocatorSAXFunc,8, 14779, 9, 3.1, NULL, 14778, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(setDocumentLocatorSAXFunc,4, 14779, 10, 3.1, NULL, 14778, NULL)
#elif defined __s390x__
CheckTypeSize(setDocumentLocatorSAXFunc,8, 14779, 12, 3.1, NULL, 14778, NULL)
#else
Msg("Find size of setDocumentLocatorSAXFunc (14779)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14778,NULL);\n",architecture,14779,0);
#endif

#if defined __i386__
CheckTypeSize(startDocumentSAXFunc,4, 14780, 2, 3.1, NULL, 14569, NULL)
#elif defined __x86_64__
CheckTypeSize(startDocumentSAXFunc,8, 14780, 11, 3.1, NULL, 14569, NULL)
#elif defined __ia64__
CheckTypeSize(startDocumentSAXFunc,8, 14780, 3, 3.1, NULL, 14569, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(startDocumentSAXFunc,4, 14780, 6, 3.1, NULL, 14569, NULL)
#elif defined __powerpc64__
CheckTypeSize(startDocumentSAXFunc,8, 14780, 9, 3.1, NULL, 14569, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(startDocumentSAXFunc,4, 14780, 10, 3.1, NULL, 14569, NULL)
#elif defined __s390x__
CheckTypeSize(startDocumentSAXFunc,8, 14780, 12, 3.1, NULL, 14569, NULL)
#else
Msg("Find size of startDocumentSAXFunc (14780)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14569,NULL);\n",architecture,14780,0);
#endif

#if defined __i386__
CheckTypeSize(endDocumentSAXFunc,4, 14781, 2, 3.1, NULL, 14569, NULL)
#elif defined __x86_64__
CheckTypeSize(endDocumentSAXFunc,8, 14781, 11, 3.1, NULL, 14569, NULL)
#elif defined __ia64__
CheckTypeSize(endDocumentSAXFunc,8, 14781, 3, 3.1, NULL, 14569, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(endDocumentSAXFunc,4, 14781, 6, 3.1, NULL, 14569, NULL)
#elif defined __powerpc64__
CheckTypeSize(endDocumentSAXFunc,8, 14781, 9, 3.1, NULL, 14569, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(endDocumentSAXFunc,4, 14781, 10, 3.1, NULL, 14569, NULL)
#elif defined __s390x__
CheckTypeSize(endDocumentSAXFunc,8, 14781, 12, 3.1, NULL, 14569, NULL)
#else
Msg("Find size of endDocumentSAXFunc (14781)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14569,NULL);\n",architecture,14781,0);
#endif

#if defined __i386__
CheckTypeSize(startElementSAXFunc,4, 14783, 2, 3.1, NULL, 14782, NULL)
#elif defined __x86_64__
CheckTypeSize(startElementSAXFunc,8, 14783, 11, 3.1, NULL, 14782, NULL)
#elif defined __ia64__
CheckTypeSize(startElementSAXFunc,8, 14783, 3, 3.1, NULL, 14782, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(startElementSAXFunc,4, 14783, 6, 3.1, NULL, 14782, NULL)
#elif defined __powerpc64__
CheckTypeSize(startElementSAXFunc,8, 14783, 9, 3.1, NULL, 14782, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(startElementSAXFunc,4, 14783, 10, 3.1, NULL, 14782, NULL)
#elif defined __s390x__
CheckTypeSize(startElementSAXFunc,8, 14783, 12, 3.1, NULL, 14782, NULL)
#else
Msg("Find size of startElementSAXFunc (14783)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14782,NULL);\n",architecture,14783,0);
#endif

#if defined __i386__
CheckTypeSize(endElementSAXFunc,4, 14785, 2, 3.1, NULL, 14784, NULL)
#elif defined __x86_64__
CheckTypeSize(endElementSAXFunc,8, 14785, 11, 3.1, NULL, 14784, NULL)
#elif defined __ia64__
CheckTypeSize(endElementSAXFunc,8, 14785, 3, 3.1, NULL, 14784, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(endElementSAXFunc,4, 14785, 6, 3.1, NULL, 14784, NULL)
#elif defined __powerpc64__
CheckTypeSize(endElementSAXFunc,8, 14785, 9, 3.1, NULL, 14784, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(endElementSAXFunc,4, 14785, 10, 3.1, NULL, 14784, NULL)
#elif defined __s390x__
CheckTypeSize(endElementSAXFunc,8, 14785, 12, 3.1, NULL, 14784, NULL)
#else
Msg("Find size of endElementSAXFunc (14785)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14784,NULL);\n",architecture,14785,0);
#endif

#if defined __i386__
CheckTypeSize(referenceSAXFunc,4, 14786, 2, 3.1, NULL, 14784, NULL)
#elif defined __x86_64__
CheckTypeSize(referenceSAXFunc,8, 14786, 11, 3.1, NULL, 14784, NULL)
#elif defined __ia64__
CheckTypeSize(referenceSAXFunc,8, 14786, 3, 3.1, NULL, 14784, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(referenceSAXFunc,4, 14786, 6, 3.1, NULL, 14784, NULL)
#elif defined __powerpc64__
CheckTypeSize(referenceSAXFunc,8, 14786, 9, 3.1, NULL, 14784, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(referenceSAXFunc,4, 14786, 10, 3.1, NULL, 14784, NULL)
#elif defined __s390x__
CheckTypeSize(referenceSAXFunc,8, 14786, 12, 3.1, NULL, 14784, NULL)
#else
Msg("Find size of referenceSAXFunc (14786)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14784,NULL);\n",architecture,14786,0);
#endif

#if defined __i386__
CheckTypeSize(charactersSAXFunc,4, 14788, 2, 3.1, NULL, 14787, NULL)
#elif defined __x86_64__
CheckTypeSize(charactersSAXFunc,8, 14788, 11, 3.1, NULL, 14787, NULL)
#elif defined __ia64__
CheckTypeSize(charactersSAXFunc,8, 14788, 3, 3.1, NULL, 14787, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(charactersSAXFunc,4, 14788, 6, 3.1, NULL, 14787, NULL)
#elif defined __powerpc64__
CheckTypeSize(charactersSAXFunc,8, 14788, 9, 3.1, NULL, 14787, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(charactersSAXFunc,4, 14788, 10, 3.1, NULL, 14787, NULL)
#elif defined __s390x__
CheckTypeSize(charactersSAXFunc,8, 14788, 12, 3.1, NULL, 14787, NULL)
#else
Msg("Find size of charactersSAXFunc (14788)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14787,NULL);\n",architecture,14788,0);
#endif

#if defined __i386__
CheckTypeSize(ignorableWhitespaceSAXFunc,4, 14789, 2, 3.1, NULL, 14787, NULL)
#elif defined __x86_64__
CheckTypeSize(ignorableWhitespaceSAXFunc,8, 14789, 11, 3.1, NULL, 14787, NULL)
#elif defined __ia64__
CheckTypeSize(ignorableWhitespaceSAXFunc,8, 14789, 3, 3.1, NULL, 14787, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ignorableWhitespaceSAXFunc,4, 14789, 6, 3.1, NULL, 14787, NULL)
#elif defined __powerpc64__
CheckTypeSize(ignorableWhitespaceSAXFunc,8, 14789, 9, 3.1, NULL, 14787, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ignorableWhitespaceSAXFunc,4, 14789, 10, 3.1, NULL, 14787, NULL)
#elif defined __s390x__
CheckTypeSize(ignorableWhitespaceSAXFunc,8, 14789, 12, 3.1, NULL, 14787, NULL)
#else
Msg("Find size of ignorableWhitespaceSAXFunc (14789)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14787,NULL);\n",architecture,14789,0);
#endif

#if defined __i386__
CheckTypeSize(processingInstructionSAXFunc,4, 14791, 2, 3.1, NULL, 14790, NULL)
#elif defined __x86_64__
CheckTypeSize(processingInstructionSAXFunc,8, 14791, 11, 3.1, NULL, 14790, NULL)
#elif defined __ia64__
CheckTypeSize(processingInstructionSAXFunc,8, 14791, 3, 3.1, NULL, 14790, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(processingInstructionSAXFunc,4, 14791, 6, 3.1, NULL, 14790, NULL)
#elif defined __powerpc64__
CheckTypeSize(processingInstructionSAXFunc,8, 14791, 9, 3.1, NULL, 14790, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(processingInstructionSAXFunc,4, 14791, 10, 3.1, NULL, 14790, NULL)
#elif defined __s390x__
CheckTypeSize(processingInstructionSAXFunc,8, 14791, 12, 3.1, NULL, 14790, NULL)
#else
Msg("Find size of processingInstructionSAXFunc (14791)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14790,NULL);\n",architecture,14791,0);
#endif

#if defined __i386__
CheckTypeSize(commentSAXFunc,4, 14792, 2, 3.1, NULL, 14784, NULL)
#elif defined __x86_64__
CheckTypeSize(commentSAXFunc,8, 14792, 11, 3.1, NULL, 14784, NULL)
#elif defined __ia64__
CheckTypeSize(commentSAXFunc,8, 14792, 3, 3.1, NULL, 14784, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(commentSAXFunc,4, 14792, 6, 3.1, NULL, 14784, NULL)
#elif defined __powerpc64__
CheckTypeSize(commentSAXFunc,8, 14792, 9, 3.1, NULL, 14784, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(commentSAXFunc,4, 14792, 10, 3.1, NULL, 14784, NULL)
#elif defined __s390x__
CheckTypeSize(commentSAXFunc,8, 14792, 12, 3.1, NULL, 14784, NULL)
#else
Msg("Find size of commentSAXFunc (14792)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14784,NULL);\n",architecture,14792,0);
#endif

#if defined __i386__
CheckTypeSize(warningSAXFunc,4, 14793, 2, 3.1, NULL, 14655, NULL)
#elif defined __x86_64__
CheckTypeSize(warningSAXFunc,8, 14793, 11, 3.1, NULL, 14655, NULL)
#elif defined __ia64__
CheckTypeSize(warningSAXFunc,8, 14793, 3, 3.1, NULL, 14655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(warningSAXFunc,4, 14793, 6, 3.1, NULL, 14655, NULL)
#elif defined __powerpc64__
CheckTypeSize(warningSAXFunc,8, 14793, 9, 3.1, NULL, 14655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(warningSAXFunc,4, 14793, 10, 3.1, NULL, 14655, NULL)
#elif defined __s390x__
CheckTypeSize(warningSAXFunc,8, 14793, 12, 3.1, NULL, 14655, NULL)
#else
Msg("Find size of warningSAXFunc (14793)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14655,NULL);\n",architecture,14793,0);
#endif

#if defined __i386__
CheckTypeSize(errorSAXFunc,4, 14794, 2, 3.1, NULL, 14655, NULL)
#elif defined __x86_64__
CheckTypeSize(errorSAXFunc,8, 14794, 11, 3.1, NULL, 14655, NULL)
#elif defined __ia64__
CheckTypeSize(errorSAXFunc,8, 14794, 3, 3.1, NULL, 14655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(errorSAXFunc,4, 14794, 6, 3.1, NULL, 14655, NULL)
#elif defined __powerpc64__
CheckTypeSize(errorSAXFunc,8, 14794, 9, 3.1, NULL, 14655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(errorSAXFunc,4, 14794, 10, 3.1, NULL, 14655, NULL)
#elif defined __s390x__
CheckTypeSize(errorSAXFunc,8, 14794, 12, 3.1, NULL, 14655, NULL)
#else
Msg("Find size of errorSAXFunc (14794)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14655,NULL);\n",architecture,14794,0);
#endif

#if defined __i386__
CheckTypeSize(fatalErrorSAXFunc,4, 14795, 2, 3.1, NULL, 14655, NULL)
#elif defined __x86_64__
CheckTypeSize(fatalErrorSAXFunc,8, 14795, 11, 3.1, NULL, 14655, NULL)
#elif defined __ia64__
CheckTypeSize(fatalErrorSAXFunc,8, 14795, 3, 3.1, NULL, 14655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(fatalErrorSAXFunc,4, 14795, 6, 3.1, NULL, 14655, NULL)
#elif defined __powerpc64__
CheckTypeSize(fatalErrorSAXFunc,8, 14795, 9, 3.1, NULL, 14655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(fatalErrorSAXFunc,4, 14795, 10, 3.1, NULL, 14655, NULL)
#elif defined __s390x__
CheckTypeSize(fatalErrorSAXFunc,8, 14795, 12, 3.1, NULL, 14655, NULL)
#else
Msg("Find size of fatalErrorSAXFunc (14795)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14655,NULL);\n",architecture,14795,0);
#endif

#if defined __i386__
CheckTypeSize(getParameterEntitySAXFunc,4, 14796, 2, 3.1, NULL, 14748, NULL)
#elif defined __x86_64__
CheckTypeSize(getParameterEntitySAXFunc,8, 14796, 11, 3.1, NULL, 14748, NULL)
#elif defined __ia64__
CheckTypeSize(getParameterEntitySAXFunc,8, 14796, 3, 3.1, NULL, 14748, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(getParameterEntitySAXFunc,4, 14796, 6, 3.1, NULL, 14748, NULL)
#elif defined __powerpc64__
CheckTypeSize(getParameterEntitySAXFunc,8, 14796, 9, 3.1, NULL, 14748, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(getParameterEntitySAXFunc,4, 14796, 10, 3.1, NULL, 14748, NULL)
#elif defined __s390x__
CheckTypeSize(getParameterEntitySAXFunc,8, 14796, 12, 3.1, NULL, 14748, NULL)
#else
Msg("Find size of getParameterEntitySAXFunc (14796)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14748,NULL);\n",architecture,14796,0);
#endif

#if defined __i386__
CheckTypeSize(cdataBlockSAXFunc,4, 14797, 2, 3.1, NULL, 14787, NULL)
#elif defined __x86_64__
CheckTypeSize(cdataBlockSAXFunc,8, 14797, 11, 3.1, NULL, 14787, NULL)
#elif defined __ia64__
CheckTypeSize(cdataBlockSAXFunc,8, 14797, 3, 3.1, NULL, 14787, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(cdataBlockSAXFunc,4, 14797, 6, 3.1, NULL, 14787, NULL)
#elif defined __powerpc64__
CheckTypeSize(cdataBlockSAXFunc,8, 14797, 9, 3.1, NULL, 14787, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(cdataBlockSAXFunc,4, 14797, 10, 3.1, NULL, 14787, NULL)
#elif defined __s390x__
CheckTypeSize(cdataBlockSAXFunc,8, 14797, 12, 3.1, NULL, 14787, NULL)
#else
Msg("Find size of cdataBlockSAXFunc (14797)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14787,NULL);\n",architecture,14797,0);
#endif

#if defined __i386__
CheckTypeSize(externalSubsetSAXFunc,4, 14798, 2, 3.1, NULL, 14741, NULL)
#elif defined __x86_64__
CheckTypeSize(externalSubsetSAXFunc,8, 14798, 11, 3.1, NULL, 14741, NULL)
#elif defined __ia64__
CheckTypeSize(externalSubsetSAXFunc,8, 14798, 3, 3.1, NULL, 14741, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(externalSubsetSAXFunc,4, 14798, 6, 3.1, NULL, 14741, NULL)
#elif defined __powerpc64__
CheckTypeSize(externalSubsetSAXFunc,8, 14798, 9, 3.1, NULL, 14741, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(externalSubsetSAXFunc,4, 14798, 10, 3.1, NULL, 14741, NULL)
#elif defined __s390x__
CheckTypeSize(externalSubsetSAXFunc,8, 14798, 12, 3.1, NULL, 14741, NULL)
#else
Msg("Find size of externalSubsetSAXFunc (14798)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14741,NULL);\n",architecture,14798,0);
#endif

#if defined __i386__
CheckTypeSize(startElementNsSAX2Func,4, 14800, 2, 3.1, NULL, 14799, NULL)
#elif defined __x86_64__
CheckTypeSize(startElementNsSAX2Func,8, 14800, 11, 3.1, NULL, 14799, NULL)
#elif defined __ia64__
CheckTypeSize(startElementNsSAX2Func,8, 14800, 3, 3.1, NULL, 14799, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(startElementNsSAX2Func,4, 14800, 6, 3.1, NULL, 14799, NULL)
#elif defined __powerpc64__
CheckTypeSize(startElementNsSAX2Func,8, 14800, 9, 3.1, NULL, 14799, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(startElementNsSAX2Func,4, 14800, 10, 3.1, NULL, 14799, NULL)
#elif defined __s390x__
CheckTypeSize(startElementNsSAX2Func,8, 14800, 12, 3.1, NULL, 14799, NULL)
#else
Msg("Find size of startElementNsSAX2Func (14800)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14799,NULL);\n",architecture,14800,0);
#endif

#if defined __i386__
CheckTypeSize(endElementNsSAX2Func,4, 14801, 2, 3.1, NULL, 14741, NULL)
#elif defined __x86_64__
CheckTypeSize(endElementNsSAX2Func,8, 14801, 11, 3.1, NULL, 14741, NULL)
#elif defined __ia64__
CheckTypeSize(endElementNsSAX2Func,8, 14801, 3, 3.1, NULL, 14741, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(endElementNsSAX2Func,4, 14801, 6, 3.1, NULL, 14741, NULL)
#elif defined __powerpc64__
CheckTypeSize(endElementNsSAX2Func,8, 14801, 9, 3.1, NULL, 14741, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(endElementNsSAX2Func,4, 14801, 10, 3.1, NULL, 14741, NULL)
#elif defined __s390x__
CheckTypeSize(endElementNsSAX2Func,8, 14801, 12, 3.1, NULL, 14741, NULL)
#else
Msg("Find size of endElementNsSAX2Func (14801)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14741,NULL);\n",architecture,14801,0);
#endif

#if defined __i386__
CheckTypeSize(xmlSAXHandler,128, 14802, 2, 3.1, NULL, 14740, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSAXHandler,256, 14802, 11, 3.1, NULL, 14740, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSAXHandler,256, 14802, 3, 3.1, NULL, 14740, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSAXHandler,128, 14802, 6, 3.1, NULL, 14740, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSAXHandler,256, 14802, 9, 3.1, NULL, 14740, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSAXHandler,128, 14802, 10, 3.1, NULL, 14740, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSAXHandler,256, 14802, 12, 3.1, NULL, 14740, NULL)
#else
Msg("Find size of xmlSAXHandler (14802)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14740, NULL);\n",architecture,14802,0);
#endif

extern void xmlSAX2EndElement_db(void *, const xmlChar *);
CheckInterfacedef(xmlSAX2EndElement,xmlSAX2EndElement_db);
extern void xmlSAX2Characters_db(void *, const xmlChar *, int);
CheckInterfacedef(xmlSAX2Characters,xmlSAX2Characters_db);
extern int xmlSAX2HasInternalSubset_db(void *);
CheckInterfacedef(xmlSAX2HasInternalSubset,xmlSAX2HasInternalSubset_db);
extern void xmlSAX2Comment_db(void *, const xmlChar *);
CheckInterfacedef(xmlSAX2Comment,xmlSAX2Comment_db);
extern void xmlSAX2ExternalSubset_db(void *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2ExternalSubset,xmlSAX2ExternalSubset_db);
extern void xmlSAX2StartElementNs_db(void *, const xmlChar *, const xmlChar *, const xmlChar *, int, const xmlChar * *, int, int, const xmlChar * *);
CheckInterfacedef(xmlSAX2StartElementNs,xmlSAX2StartElementNs_db);
extern void xmlSAX2Reference_db(void *, const xmlChar *);
CheckInterfacedef(xmlSAX2Reference,xmlSAX2Reference_db);
extern void xmlSAX2EndElementNs_db(void *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2EndElementNs,xmlSAX2EndElementNs_db);
extern int xmlSAXDefaultVersion_db(int);
CheckInterfacedef(xmlSAXDefaultVersion,xmlSAXDefaultVersion_db);
extern const xmlChar * xmlSAX2GetSystemId_db(void *);
CheckInterfacedef(xmlSAX2GetSystemId,xmlSAX2GetSystemId_db);
extern void xmlSAX2InitDefaultSAXHandler_db(xmlSAXHandler *, int);
CheckInterfacedef(xmlSAX2InitDefaultSAXHandler,xmlSAX2InitDefaultSAXHandler_db);
extern void xmlDefaultSAXHandlerInit_db(void);
CheckInterfacedef(xmlDefaultSAXHandlerInit,xmlDefaultSAXHandlerInit_db);
extern void xmlSAX2CDataBlock_db(void *, const xmlChar *, int);
CheckInterfacedef(xmlSAX2CDataBlock,xmlSAX2CDataBlock_db);
extern void xmlSAX2IgnorableWhitespace_db(void *, const xmlChar *, int);
CheckInterfacedef(xmlSAX2IgnorableWhitespace,xmlSAX2IgnorableWhitespace_db);
extern void xmlSAX2ElementDecl_db(void *, const xmlChar *, int, xmlElementContentPtr);
CheckInterfacedef(xmlSAX2ElementDecl,xmlSAX2ElementDecl_db);
extern int xmlSAX2IsStandalone_db(void *);
CheckInterfacedef(xmlSAX2IsStandalone,xmlSAX2IsStandalone_db);
extern const xmlChar * xmlSAX2GetPublicId_db(void *);
CheckInterfacedef(xmlSAX2GetPublicId,xmlSAX2GetPublicId_db);
extern int xmlSAX2GetLineNumber_db(void *);
CheckInterfacedef(xmlSAX2GetLineNumber,xmlSAX2GetLineNumber_db);
extern xmlEntityPtr xmlSAX2GetEntity_db(void *, const xmlChar *);
CheckInterfacedef(xmlSAX2GetEntity,xmlSAX2GetEntity_db);
extern void xmlSAX2EndDocument_db(void *);
CheckInterfacedef(xmlSAX2EndDocument,xmlSAX2EndDocument_db);
extern void xmlSAX2AttributeDecl_db(void *, const xmlChar *, const xmlChar *, int, int, const xmlChar *, xmlEnumerationPtr);
CheckInterfacedef(xmlSAX2AttributeDecl,xmlSAX2AttributeDecl_db);
extern void xmlSAX2ProcessingInstruction_db(void *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2ProcessingInstruction,xmlSAX2ProcessingInstruction_db);
extern void xmlSAX2NotationDecl_db(void *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2NotationDecl,xmlSAX2NotationDecl_db);
extern void xmlSAX2EntityDecl_db(void *, const xmlChar *, int, const xmlChar *, const xmlChar *, xmlChar *);
CheckInterfacedef(xmlSAX2EntityDecl,xmlSAX2EntityDecl_db);
extern void xmlSAX2StartDocument_db(void *);
CheckInterfacedef(xmlSAX2StartDocument,xmlSAX2StartDocument_db);
extern xmlParserInputPtr xmlSAX2ResolveEntity_db(void *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2ResolveEntity,xmlSAX2ResolveEntity_db);
extern xmlEntityPtr xmlSAX2GetParameterEntity_db(void *, const xmlChar *);
CheckInterfacedef(xmlSAX2GetParameterEntity,xmlSAX2GetParameterEntity_db);
extern int xmlSAX2GetColumnNumber_db(void *);
CheckInterfacedef(xmlSAX2GetColumnNumber,xmlSAX2GetColumnNumber_db);
extern void htmlDefaultSAXHandlerInit_db(void);
CheckInterfacedef(htmlDefaultSAXHandlerInit,htmlDefaultSAXHandlerInit_db);
extern int xmlSAX2HasExternalSubset_db(void *);
CheckInterfacedef(xmlSAX2HasExternalSubset,xmlSAX2HasExternalSubset_db);
extern void xmlSAX2StartElement_db(void *, const xmlChar *, const xmlChar * *);
CheckInterfacedef(xmlSAX2StartElement,xmlSAX2StartElement_db);
extern void xmlSAX2InitDocbDefaultSAXHandler_db(xmlSAXHandler *);
CheckInterfacedef(xmlSAX2InitDocbDefaultSAXHandler,xmlSAX2InitDocbDefaultSAXHandler_db);
extern void xmlSAX2SetDocumentLocator_db(void *, xmlSAXLocatorPtr);
CheckInterfacedef(xmlSAX2SetDocumentLocator,xmlSAX2SetDocumentLocator_db);
extern void xmlSAX2InitHtmlDefaultSAXHandler_db(xmlSAXHandler *);
CheckInterfacedef(xmlSAX2InitHtmlDefaultSAXHandler,xmlSAX2InitHtmlDefaultSAXHandler_db);
extern void docbDefaultSAXHandlerInit_db(void);
CheckInterfacedef(docbDefaultSAXHandlerInit,docbDefaultSAXHandlerInit_db);
extern void xmlSAX2UnparsedEntityDecl_db(void *, const xmlChar *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2UnparsedEntityDecl,xmlSAX2UnparsedEntityDecl_db);
extern void xmlSAX2InternalSubset_db(void *, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAX2InternalSubset,xmlSAX2InternalSubset_db);
extern int xmlSAXVersion_db(xmlSAXHandler *, int);
CheckInterfacedef(xmlSAXVersion,xmlSAXVersion_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/SAX2.h\n\n",pcnt,cnt);
return cnt;
#endif

}
