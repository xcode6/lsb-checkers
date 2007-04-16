/*
 * Test of wctype.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include "wctype.h"



#ifdef TET_TEST
void wctype_h()
{
#else
int wctype_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in wctype.h\n");
#endif

printf("Checking data structures in wctype.h\n");
#if __i386__
CheckTypeSize(wctype_t,4, 7024, 2);
#elif __ia64__
CheckTypeSize(wctype_t,8, 7024, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wctype_t,4, 7024, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(wctype_t,4, 7024, 10);
#elif __powerpc64__
CheckTypeSize(wctype_t,8, 7024, 9);
#elif __s390x__
CheckTypeSize(wctype_t,8, 7024, 12);
#elif __x86_64__
CheckTypeSize(wctype_t,8, 7024, 11);
#elif 1
CheckTypeSize(wctype_t,0, 7024, 1);
#endif

#if __i386__
CheckTypeSize(wint_t,4, 8980, 2);
#elif __ia64__
CheckTypeSize(wint_t,4, 8980, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wint_t,4, 8980, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(wint_t,4, 8980, 10);
#elif __powerpc64__
CheckTypeSize(wint_t,4, 8980, 9);
#elif __s390x__
CheckTypeSize(wint_t,4, 8980, 12);
#elif __x86_64__
CheckTypeSize(wint_t,4, 8980, 11);
#elif 1
CheckTypeSize(wint_t,0, 8980, 1);
#endif

#if __i386__
CheckTypeSize(wctrans_t,4, 9199, 2);
#elif __ia64__
CheckTypeSize(wctrans_t,8, 9199, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wctrans_t,4, 9199, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(wctrans_t,4, 9199, 10);
#elif __powerpc64__
CheckTypeSize(wctrans_t,8, 9199, 9);
#elif __s390x__
CheckTypeSize(wctrans_t,8, 9199, 12);
#elif __x86_64__
CheckTypeSize(wctrans_t,8, 9199, 11);
#elif 1
CheckTypeSize(wctrans_t,0, 9199, 1);
#endif

#if __powerpc64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __ia64__
#elif __i386__
#elif __s390x__
#elif __x86_64__
#elif 1
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(__mbstate_t,8, 10488, 6);
#elif __i386__
CheckTypeSize(__mbstate_t,8, 10488, 2);
#elif __ia64__
CheckTypeSize(__mbstate_t,8, 10488, 3);
#elif __s390x__
CheckTypeSize(__mbstate_t,8, 10488, 12);
#elif __s390__ && !__s390x__
CheckTypeSize(__mbstate_t,8, 10488, 10);
#elif __x86_64__
CheckTypeSize(__mbstate_t,8, 10488, 11);
#elif __powerpc64__
CheckTypeSize(__mbstate_t,8, 10488, 9);
#elif 1
CheckTypeSize(__mbstate_t,0, 10488, 1);
#endif

#if __i386__
CheckTypeSize(mbstate_t,8, 9235, 2);
#elif __ia64__
CheckTypeSize(mbstate_t,8, 9235, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(mbstate_t,8, 9235, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(mbstate_t,8, 9235, 10);
#elif __powerpc64__
CheckTypeSize(mbstate_t,8, 9235, 9);
#elif __s390x__
CheckTypeSize(mbstate_t,8, 9235, 12);
#elif __x86_64__
CheckTypeSize(mbstate_t,8, 9235, 11);
#elif 1
CheckTypeSize(mbstate_t,0, 9235, 1);
#endif

extern int iswblank_db(wint_t);
CheckInterfacedef(iswblank,iswblank_db);
extern wint_t towlower_db(wint_t);
CheckInterfacedef(towlower,towlower_db);
extern wint_t towupper_db(wint_t);
CheckInterfacedef(towupper,towupper_db);
extern wctrans_t wctrans_db(const char *);
CheckInterfacedef(wctrans,wctrans_db);
extern int iswalnum_db(wint_t);
CheckInterfacedef(iswalnum,iswalnum_db);
extern int iswalpha_db(wint_t);
CheckInterfacedef(iswalpha,iswalpha_db);
extern int iswcntrl_db(wint_t);
CheckInterfacedef(iswcntrl,iswcntrl_db);
extern int iswctype_db(wint_t, wctype_t);
CheckInterfacedef(iswctype,iswctype_db);
extern int iswdigit_db(wint_t);
CheckInterfacedef(iswdigit,iswdigit_db);
extern int iswgraph_db(wint_t);
CheckInterfacedef(iswgraph,iswgraph_db);
extern int iswlower_db(wint_t);
CheckInterfacedef(iswlower,iswlower_db);
extern int iswprint_db(wint_t);
CheckInterfacedef(iswprint,iswprint_db);
extern int iswpunct_db(wint_t);
CheckInterfacedef(iswpunct,iswpunct_db);
extern int iswspace_db(wint_t);
CheckInterfacedef(iswspace,iswspace_db);
extern int iswupper_db(wint_t);
CheckInterfacedef(iswupper,iswupper_db);
extern int iswxdigit_db(wint_t);
CheckInterfacedef(iswxdigit,iswxdigit_db);
extern wctype_t wctype_db(const char *);
CheckInterfacedef(wctype,wctype_db);
extern wint_t towctrans_db(wint_t, wctrans_t);
CheckInterfacedef(towctrans,towctrans_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in wctype.h\n\n",pcnt,cnt);
return cnt;
#endif

}
