/*
 * Test of ftw.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <sys/stat.h>
#include "ftw.h"



#ifdef TET_TEST
void ftw_h()
{
#else
int ftw_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in ftw.h\n");
#endif

printf("Checking data structures in ftw.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FTW_F
	CompareConstant(FTW_F,FTW_F,1230,architecture)
#else
Msg( "Error: Constant not found: FTW_F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_D
	CompareConstant(FTW_D,FTW_D,1231,architecture)
#else
Msg( "Error: Constant not found: FTW_D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_DNR
	CompareConstant(FTW_DNR,FTW_DNR,1232,architecture)
#else
Msg( "Error: Constant not found: FTW_DNR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_NS
	CompareConstant(FTW_NS,FTW_NS,1233,architecture)
#else
Msg( "Error: Constant not found: FTW_NS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_SL
	CompareConstant(FTW_SL,FTW_SL,1234,architecture)
#else
Msg( "Error: Constant not found: FTW_SL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_DP
	CompareConstant(FTW_DP,FTW_DP,3060,architecture)
#else
Msg( "Error: Constant not found: FTW_DP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_SLN
	CompareConstant(FTW_SLN,FTW_SLN,3061,architecture)
#else
Msg( "Error: Constant not found: FTW_SLN\n");
cnt++;
#endif

#endif

#if __i386__
CheckEnum("FTW_F",FTW_F,0,29747);
CheckEnum("FTW_D",FTW_D,(0) + 1,29748);
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749);
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750);
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751);
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752);
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753);
#elif __ia64__
CheckEnum("FTW_F",FTW_F,0,29747);
CheckEnum("FTW_D",FTW_D,(0) + 1,29748);
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749);
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750);
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751);
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752);
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753);
#elif __powerpc__ && !__powerpc64__
CheckEnum("FTW_F",FTW_F,0,29747);
CheckEnum("FTW_D",FTW_D,(0) + 1,29748);
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749);
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750);
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751);
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752);
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753);
#elif __s390__ && !__s390x__
CheckEnum("FTW_F",FTW_F,0,29747);
CheckEnum("FTW_D",FTW_D,(0) + 1,29748);
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749);
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750);
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751);
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752);
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753);
#elif __powerpc64__
CheckEnum("FTW_F",FTW_F,0,29747);
CheckEnum("FTW_D",FTW_D,(0) + 1,29748);
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749);
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750);
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751);
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752);
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753);
#elif __s390x__
CheckEnum("FTW_F",FTW_F,0,29747);
CheckEnum("FTW_D",FTW_D,(0) + 1,29748);
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749);
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750);
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751);
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752);
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753);
#elif __x86_64__
CheckEnum("FTW_F",FTW_F,0,29747);
CheckEnum("FTW_D",FTW_D,(0) + 1,29748);
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749);
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750);
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751);
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752);
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8989,0);
Msg("Find size of anon-ftw.h-13 (8989)\n");
#endif

#if __i386__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754);
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755);
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756);
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757);
#elif __ia64__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754);
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755);
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756);
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757);
#elif __powerpc__ && !__powerpc64__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754);
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755);
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756);
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757);
#elif __s390__ && !__s390x__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754);
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755);
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756);
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757);
#elif __powerpc64__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754);
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755);
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756);
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757);
#elif __s390x__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754);
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755);
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756);
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757);
#elif __x86_64__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754);
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755);
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756);
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8990,0);
Msg("Find size of anon-ftw.h-34 (8990)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8691,0);
Msg("Find size of FTW (8691)\n");
#endif

#if __i386__
CheckTypeSize(__ftw_func_t,4, 8992, 2)
#elif __ia64__
CheckTypeSize(__ftw_func_t,8, 8992, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__ftw_func_t,4, 8992, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(__ftw_func_t,4, 8992, 10)
#elif __powerpc64__
CheckTypeSize(__ftw_func_t,8, 8992, 9)
#elif __s390x__
CheckTypeSize(__ftw_func_t,8, 8992, 12)
#elif __x86_64__
CheckTypeSize(__ftw_func_t,8, 8992, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8992,0);
Msg("Find size of __ftw_func_t (8992)\n");
#endif

#if __i386__
CheckTypeSize(__ftw64_func_t,4, 8994, 2)
#elif __ia64__
CheckTypeSize(__ftw64_func_t,8, 8994, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__ftw64_func_t,4, 8994, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(__ftw64_func_t,4, 8994, 10)
#elif __powerpc64__
CheckTypeSize(__ftw64_func_t,8, 8994, 9)
#elif __s390x__
CheckTypeSize(__ftw64_func_t,8, 8994, 12)
#elif __x86_64__
CheckTypeSize(__ftw64_func_t,8, 8994, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8994,0);
Msg("Find size of __ftw64_func_t (8994)\n");
#endif

#if __i386__
CheckTypeSize(__nftw_func_t,4, 8996, 2)
#elif __ia64__
CheckTypeSize(__nftw_func_t,8, 8996, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__nftw_func_t,4, 8996, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(__nftw_func_t,4, 8996, 10)
#elif __powerpc64__
CheckTypeSize(__nftw_func_t,8, 8996, 9)
#elif __s390x__
CheckTypeSize(__nftw_func_t,8, 8996, 12)
#elif __x86_64__
CheckTypeSize(__nftw_func_t,8, 8996, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8996,0);
Msg("Find size of __nftw_func_t (8996)\n");
#endif

#if __i386__
CheckTypeSize(__nftw64_func_t,4, 8998, 2)
#elif __ia64__
CheckTypeSize(__nftw64_func_t,8, 8998, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__nftw64_func_t,4, 8998, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(__nftw64_func_t,4, 8998, 10)
#elif __powerpc64__
CheckTypeSize(__nftw64_func_t,8, 8998, 9)
#elif __s390x__
CheckTypeSize(__nftw64_func_t,8, 8998, 12)
#elif __x86_64__
CheckTypeSize(__nftw64_func_t,8, 8998, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8998,0);
Msg("Find size of __nftw64_func_t (8998)\n");
#endif

extern int ftw_db(const char *, __ftw_func_t, int);
CheckInterfacedef(ftw,ftw_db);
extern int ftw64_db(const char *, __ftw64_func_t, int);
CheckInterfacedef(ftw64,ftw64_db);
extern int nftw_db(const char *, __nftw_func_t, int, int);
CheckInterfacedef(nftw,nftw_db);
extern int nftw64_db(const char *, __nftw64_func_t, int, int);
CheckInterfacedef(nftw64,nftw64_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in ftw.h\n\n",pcnt,cnt);
return cnt;
#endif

}
