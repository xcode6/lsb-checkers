/*
 * Test of time.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#ifndef LSBCC_MODE
#define CLK_TCK	((clock_t)sysconf(2))
#endif
#include "time.h"



#ifdef TET_TEST
void time_h()
{
#else
int time_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in time.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef CLOCK_MONOTONIC
	CompareConstant(CLOCK_MONOTONIC,1,19982,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CLOCK_MONOTONIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLOCKS_PER_SEC
	CompareConstant(CLOCKS_PER_SEC,1000000l,2473,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CLOCKS_PER_SEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLK_TCK
	CompareConstant(CLK_TCK,((clock_t)sysconf(2)),2474,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CLK_TCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLOCK_REALTIME
	CompareConstant(CLOCK_REALTIME,0,2475,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CLOCK_REALTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLOCK_PROCESS_CPUTIME_ID
	CompareConstant(CLOCK_PROCESS_CPUTIME_ID,2,2476,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CLOCK_PROCESS_CPUTIME_ID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLOCK_THREAD_CPUTIME_ID
	CompareConstant(CLOCK_THREAD_CPUTIME_ID,3,2477,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CLOCK_THREAD_CPUTIME_ID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TIMER_ABSTIME
	CompareConstant(TIMER_ABSTIME,1,2478,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TIMER_ABSTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for timerisset(tvp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for timerclear(tvp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for timercmp(a,b,CMP) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for timeradd(a,b,result) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for timersub(a,b,result) */
#endif

#if defined __s390x__
CheckTypeSize(struct tm,56, 7019, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct tm,tm_min,4,12,33513)
CheckOffset(struct tm,tm_min,4,12,33513)
CheckMemberSize(struct tm,tm_hour,4,12,33514)
CheckOffset(struct tm,tm_hour,8,12,33514)
CheckMemberSize(struct tm,tm_mday,4,12,33515)
CheckOffset(struct tm,tm_mday,12,12,33515)
CheckMemberSize(struct tm,tm_mon,4,12,33516)
CheckOffset(struct tm,tm_mon,16,12,33516)
CheckMemberSize(struct tm,tm_year,4,12,33517)
CheckOffset(struct tm,tm_year,20,12,33517)
CheckMemberSize(struct tm,tm_wday,4,12,33518)
CheckOffset(struct tm,tm_wday,24,12,33518)
CheckMemberSize(struct tm,tm_yday,4,12,33519)
CheckOffset(struct tm,tm_yday,28,12,33519)
CheckMemberSize(struct tm,tm_isdst,4,12,33520)
CheckOffset(struct tm,tm_isdst,32,12,33520)
CheckMemberSize(struct tm,tm_gmtoff,8,12,33521)
CheckOffset(struct tm,tm_gmtoff,40,12,33521)
CheckMemberSize(struct tm,tm_zone,8,12,33522)
CheckOffset(struct tm,tm_zone,48,12,33522)
#elif defined __x86_64__
CheckTypeSize(struct tm,56, 7019, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct tm,tm_min,4,11,33513)
CheckOffset(struct tm,tm_min,4,11,33513)
CheckMemberSize(struct tm,tm_hour,4,11,33514)
CheckOffset(struct tm,tm_hour,8,11,33514)
CheckMemberSize(struct tm,tm_mday,4,11,33515)
CheckOffset(struct tm,tm_mday,12,11,33515)
CheckMemberSize(struct tm,tm_mon,4,11,33516)
CheckOffset(struct tm,tm_mon,16,11,33516)
CheckMemberSize(struct tm,tm_year,4,11,33517)
CheckOffset(struct tm,tm_year,20,11,33517)
CheckMemberSize(struct tm,tm_wday,4,11,33518)
CheckOffset(struct tm,tm_wday,24,11,33518)
CheckMemberSize(struct tm,tm_yday,4,11,33519)
CheckOffset(struct tm,tm_yday,28,11,33519)
CheckMemberSize(struct tm,tm_isdst,4,11,33520)
CheckOffset(struct tm,tm_isdst,32,11,33520)
CheckMemberSize(struct tm,tm_gmtoff,8,11,33521)
CheckOffset(struct tm,tm_gmtoff,40,11,33521)
CheckMemberSize(struct tm,tm_zone,8,11,33522)
CheckOffset(struct tm,tm_zone,48,11,33522)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct tm,44, 7019, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct tm,tm_min,4,10,33513)
CheckOffset(struct tm,tm_min,4,10,33513)
CheckMemberSize(struct tm,tm_hour,4,10,33514)
CheckOffset(struct tm,tm_hour,8,10,33514)
CheckMemberSize(struct tm,tm_mday,4,10,33515)
CheckOffset(struct tm,tm_mday,12,10,33515)
CheckMemberSize(struct tm,tm_mon,4,10,33516)
CheckOffset(struct tm,tm_mon,16,10,33516)
CheckMemberSize(struct tm,tm_year,4,10,33517)
CheckOffset(struct tm,tm_year,20,10,33517)
CheckMemberSize(struct tm,tm_wday,4,10,33518)
CheckOffset(struct tm,tm_wday,24,10,33518)
CheckMemberSize(struct tm,tm_yday,4,10,33519)
CheckOffset(struct tm,tm_yday,28,10,33519)
CheckMemberSize(struct tm,tm_isdst,4,10,33520)
CheckOffset(struct tm,tm_isdst,32,10,33520)
CheckMemberSize(struct tm,tm_gmtoff,4,10,33521)
CheckOffset(struct tm,tm_gmtoff,36,10,33521)
CheckMemberSize(struct tm,tm_zone,4,10,33522)
CheckOffset(struct tm,tm_zone,40,10,33522)
#elif defined __powerpc64__
CheckTypeSize(struct tm,56, 7019, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct tm,tm_min,4,9,33513)
CheckOffset(struct tm,tm_min,4,9,33513)
CheckMemberSize(struct tm,tm_hour,4,9,33514)
CheckOffset(struct tm,tm_hour,8,9,33514)
CheckMemberSize(struct tm,tm_mday,4,9,33515)
CheckOffset(struct tm,tm_mday,12,9,33515)
CheckMemberSize(struct tm,tm_mon,4,9,33516)
CheckOffset(struct tm,tm_mon,16,9,33516)
CheckMemberSize(struct tm,tm_year,4,9,33517)
CheckOffset(struct tm,tm_year,20,9,33517)
CheckMemberSize(struct tm,tm_wday,4,9,33518)
CheckOffset(struct tm,tm_wday,24,9,33518)
CheckMemberSize(struct tm,tm_yday,4,9,33519)
CheckOffset(struct tm,tm_yday,28,9,33519)
CheckMemberSize(struct tm,tm_isdst,4,9,33520)
CheckOffset(struct tm,tm_isdst,32,9,33520)
CheckMemberSize(struct tm,tm_gmtoff,8,9,33521)
CheckOffset(struct tm,tm_gmtoff,40,9,33521)
CheckMemberSize(struct tm,tm_zone,8,9,33522)
CheckOffset(struct tm,tm_zone,48,9,33522)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct tm,44, 7019, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct tm,tm_min,4,6,33513)
CheckOffset(struct tm,tm_min,4,6,33513)
CheckMemberSize(struct tm,tm_hour,4,6,33514)
CheckOffset(struct tm,tm_hour,8,6,33514)
CheckMemberSize(struct tm,tm_mday,4,6,33515)
CheckOffset(struct tm,tm_mday,12,6,33515)
CheckMemberSize(struct tm,tm_mon,4,6,33516)
CheckOffset(struct tm,tm_mon,16,6,33516)
CheckMemberSize(struct tm,tm_year,4,6,33517)
CheckOffset(struct tm,tm_year,20,6,33517)
CheckMemberSize(struct tm,tm_wday,4,6,33518)
CheckOffset(struct tm,tm_wday,24,6,33518)
CheckMemberSize(struct tm,tm_yday,4,6,33519)
CheckOffset(struct tm,tm_yday,28,6,33519)
CheckMemberSize(struct tm,tm_isdst,4,6,33520)
CheckOffset(struct tm,tm_isdst,32,6,33520)
CheckMemberSize(struct tm,tm_gmtoff,4,6,33521)
CheckOffset(struct tm,tm_gmtoff,36,6,33521)
CheckMemberSize(struct tm,tm_zone,4,6,33522)
CheckOffset(struct tm,tm_zone,40,6,33522)
#elif defined __ia64__
CheckTypeSize(struct tm,56, 7019, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct tm,tm_min,4,3,33513)
CheckOffset(struct tm,tm_min,4,3,33513)
CheckMemberSize(struct tm,tm_hour,4,3,33514)
CheckOffset(struct tm,tm_hour,8,3,33514)
CheckMemberSize(struct tm,tm_mday,4,3,33515)
CheckOffset(struct tm,tm_mday,12,3,33515)
CheckMemberSize(struct tm,tm_mon,4,3,33516)
CheckOffset(struct tm,tm_mon,16,3,33516)
CheckMemberSize(struct tm,tm_year,4,3,33517)
CheckOffset(struct tm,tm_year,20,3,33517)
CheckMemberSize(struct tm,tm_wday,4,3,33518)
CheckOffset(struct tm,tm_wday,24,3,33518)
CheckMemberSize(struct tm,tm_yday,4,3,33519)
CheckOffset(struct tm,tm_yday,28,3,33519)
CheckMemberSize(struct tm,tm_isdst,4,3,33520)
CheckOffset(struct tm,tm_isdst,32,3,33520)
CheckMemberSize(struct tm,tm_gmtoff,8,3,33521)
CheckOffset(struct tm,tm_gmtoff,40,3,33521)
CheckMemberSize(struct tm,tm_zone,8,3,33522)
CheckOffset(struct tm,tm_zone,48,3,33522)
#elif defined __i386__
CheckTypeSize(struct tm,44, 7019, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct tm,tm_min,4,2,33513)
CheckOffset(struct tm,tm_min,4,2,33513)
CheckMemberSize(struct tm,tm_hour,4,2,33514)
CheckOffset(struct tm,tm_hour,8,2,33514)
CheckMemberSize(struct tm,tm_mday,4,2,33515)
CheckOffset(struct tm,tm_mday,12,2,33515)
CheckMemberSize(struct tm,tm_mon,4,2,33516)
CheckOffset(struct tm,tm_mon,16,2,33516)
CheckMemberSize(struct tm,tm_year,4,2,33517)
CheckOffset(struct tm,tm_year,20,2,33517)
CheckMemberSize(struct tm,tm_wday,4,2,33518)
CheckOffset(struct tm,tm_wday,24,2,33518)
CheckMemberSize(struct tm,tm_yday,4,2,33519)
CheckOffset(struct tm,tm_yday,28,2,33519)
CheckMemberSize(struct tm,tm_isdst,4,2,33520)
CheckOffset(struct tm,tm_isdst,32,2,33520)
CheckMemberSize(struct tm,tm_gmtoff,4,2,33521)
CheckOffset(struct tm,tm_gmtoff,36,2,33521)
CheckMemberSize(struct tm,tm_zone,4,2,33522)
CheckOffset(struct tm,tm_zone,40,2,33522)
#else
Msg("Find size of tm (7019)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,7019,0);
#endif

#if defined __s390x__
CheckTypeSize(struct itimerspec,32, 10101, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct itimerspec,it_value,16,12,33509)
CheckOffset(struct itimerspec,it_value,16,12,33509)
#elif defined __x86_64__
CheckTypeSize(struct itimerspec,32, 10101, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct itimerspec,it_value,16,11,33509)
CheckOffset(struct itimerspec,it_value,16,11,33509)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct itimerspec,16, 10101, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct itimerspec,it_value,8,10,33509)
CheckOffset(struct itimerspec,it_value,8,10,33509)
#elif defined __powerpc64__
CheckTypeSize(struct itimerspec,32, 10101, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct itimerspec,it_value,16,9,33509)
CheckOffset(struct itimerspec,it_value,16,9,33509)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct itimerspec,16, 10101, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct itimerspec,it_value,8,6,33509)
CheckOffset(struct itimerspec,it_value,8,6,33509)
#elif defined __ia64__
CheckTypeSize(struct itimerspec,32, 10101, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct itimerspec,it_value,16,3,33509)
CheckOffset(struct itimerspec,it_value,16,3,33509)
#elif defined __i386__
CheckTypeSize(struct itimerspec,16, 10101, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct itimerspec,it_value,8,2,33509)
CheckOffset(struct itimerspec,it_value,8,2,33509)
#else
Msg("Find size of itimerspec (10101)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,10101,0);
#endif

#if defined __i386__
/* IA32 */
int __daylight_db ;
CheckGlobalVar(__daylight_db, __daylight);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
int __daylight_db ;
CheckGlobalVar(__daylight_db, __daylight);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
int __daylight_db ;
CheckGlobalVar(__daylight_db, __daylight);
#endif
#if defined __ia64__
/* IA64 */
int __daylight_db ;
CheckGlobalVar(__daylight_db, __daylight);
#endif
#if defined __s390x__
/* S390X */
int __daylight_db ;
CheckGlobalVar(__daylight_db, __daylight);
#endif
#if defined __x86_64__
/* x86-64 */
int __daylight_db ;
CheckGlobalVar(__daylight_db, __daylight);
#endif
#if defined __powerpc64__
/* PPC64 */
int __daylight_db ;
CheckGlobalVar(__daylight_db, __daylight);
#endif
#if defined __i386__
/* IA32 */
long int __timezone_db ;
CheckGlobalVar(__timezone_db, __timezone);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
long int __timezone_db ;
CheckGlobalVar(__timezone_db, __timezone);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
long int __timezone_db ;
CheckGlobalVar(__timezone_db, __timezone);
#endif
#if defined __ia64__
/* IA64 */
long int __timezone_db ;
CheckGlobalVar(__timezone_db, __timezone);
#endif
#if defined __s390x__
/* S390X */
long int __timezone_db ;
CheckGlobalVar(__timezone_db, __timezone);
#endif
#if defined __x86_64__
/* x86-64 */
long int __timezone_db ;
CheckGlobalVar(__timezone_db, __timezone);
#endif
#if defined __powerpc64__
/* PPC64 */
long int __timezone_db ;
CheckGlobalVar(__timezone_db, __timezone);
#endif
extern char * asctime_db(const struct tm *);
CheckInterfacedef(asctime,asctime_db);
extern clock_t clock_db(void);
CheckInterfacedef(clock,clock_db);
extern char * ctime_db(const time_t *);
CheckInterfacedef(ctime,ctime_db);
extern char * ctime_r_db(const time_t *, char *);
CheckInterfacedef(ctime_r,ctime_r_db);
extern double difftime_db(time_t, time_t);
CheckInterfacedef(difftime,difftime_db);
extern struct tm * getdate_db(const char *);
CheckInterfacedef(getdate,getdate_db);
extern struct tm * gmtime_db(const time_t *);
CheckInterfacedef(gmtime,gmtime_db);
extern struct tm * localtime_db(const time_t *);
CheckInterfacedef(localtime,localtime_db);
extern time_t mktime_db(struct tm *);
CheckInterfacedef(mktime,mktime_db);
extern int stime_db(const time_t *);
CheckInterfacedef(stime,stime_db);
extern size_t strftime_db(char *, size_t, const char *, const struct tm *);
CheckInterfacedef(strftime,strftime_db);
extern char * strptime_db(const char *, const char *, struct tm *);
CheckInterfacedef(strptime,strptime_db);
extern time_t time_db(time_t *);
CheckInterfacedef(time,time_db);
extern int nanosleep_db(const struct timespec *, struct timespec *);
CheckInterfacedef(nanosleep,nanosleep_db);
extern void tzset_db(void);
CheckInterfacedef(tzset,tzset_db);
extern char * asctime_r_db(const struct tm *, char *);
CheckInterfacedef(asctime_r,asctime_r_db);
extern struct tm * gmtime_r_db(const time_t *, struct tm *);
CheckInterfacedef(gmtime_r,gmtime_r_db);
extern struct tm * localtime_r_db(const time_t *, struct tm *);
CheckInterfacedef(localtime_r,localtime_r_db);
extern int clock_getcpuclockid_db(pid_t, clockid_t *);
CheckInterfacedef(clock_getcpuclockid,clock_getcpuclockid_db);
extern int clock_getres_db(clockid_t, struct timespec *);
CheckInterfacedef(clock_getres,clock_getres_db);
extern int clock_gettime_db(clockid_t, struct timespec *);
CheckInterfacedef(clock_gettime,clock_gettime_db);
extern int clock_nanosleep_db(clockid_t, int, const struct timespec *, struct timespec *);
CheckInterfacedef(clock_nanosleep,clock_nanosleep_db);
extern int clock_settime_db(clockid_t, const struct timespec *);
CheckInterfacedef(clock_settime,clock_settime_db);
extern int timer_create_db(clockid_t, struct sigevent *, timer_t *);
CheckInterfacedef(timer_create,timer_create_db);
extern int timer_delete_db(timer_t);
CheckInterfacedef(timer_delete,timer_delete_db);
extern int timer_getoverrun_db(timer_t);
CheckInterfacedef(timer_getoverrun,timer_getoverrun_db);
extern int timer_gettime_db(timer_t, struct itimerspec *);
CheckInterfacedef(timer_gettime,timer_gettime_db);
extern int timer_settime_db(timer_t, int, const struct itimerspec *, struct itimerspec *);
CheckInterfacedef(timer_settime,timer_settime_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in time.h\n\n",pcnt,cnt);
return cnt;
#endif

}
