/*
 * Test of sys/statvfs.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/statvfs.h"



#ifdef TET_TEST
void sys_statvfs_h()
{
#else
int sys_statvfs_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/statvfs.h\n");
#endif

#if __i386__
CheckTypeSize(struct statvfs,72, 10323, 2)
CheckMemberSize(struct statvfs,f_bsize,4,2,34518)
CheckOffset(struct statvfs,f_bsize,0,2,34518)
CheckMemberSize(struct statvfs,f_frsize,4,2,34519)
CheckOffset(struct statvfs,f_frsize,4,2,34519)
CheckMemberSize(struct statvfs,f_blocks,4,2,34520)
CheckOffset(struct statvfs,f_blocks,8,2,34520)
CheckMemberSize(struct statvfs,f_bfree,4,2,34521)
CheckOffset(struct statvfs,f_bfree,12,2,34521)
CheckMemberSize(struct statvfs,f_bavail,4,2,34522)
CheckOffset(struct statvfs,f_bavail,16,2,34522)
CheckMemberSize(struct statvfs,f_files,4,2,34523)
CheckOffset(struct statvfs,f_files,20,2,34523)
CheckMemberSize(struct statvfs,f_ffree,4,2,34524)
CheckOffset(struct statvfs,f_ffree,24,2,34524)
CheckMemberSize(struct statvfs,f_favail,4,2,34525)
CheckOffset(struct statvfs,f_favail,28,2,34525)
CheckMemberSize(struct statvfs,f_fsid,4,2,34526)
CheckOffset(struct statvfs,f_fsid,32,2,34526)
CheckMemberSize(struct statvfs,__f_unused,4,2,34527)
CheckOffset(struct statvfs,__f_unused,36,2,34527)
CheckMemberSize(struct statvfs,f_flag,4,2,34528)
CheckOffset(struct statvfs,f_flag,40,2,34528)
CheckMemberSize(struct statvfs,f_namemax,4,2,34529)
CheckOffset(struct statvfs,f_namemax,44,2,34529)
CheckMemberSize(struct statvfs,__f_spare,24,2,34530)
CheckOffset(struct statvfs,__f_spare,48,2,34530)
#endif

#if __i386__
CheckTypeSize(struct statvfs64,96, 10325, 2)
CheckMemberSize(struct statvfs64,f_bsize,4,2,34532)
CheckOffset(struct statvfs64,f_bsize,0,2,34532)
CheckMemberSize(struct statvfs64,f_frsize,4,2,34533)
CheckOffset(struct statvfs64,f_frsize,4,2,34533)
CheckMemberSize(struct statvfs64,f_blocks,8,2,34534)
CheckOffset(struct statvfs64,f_blocks,8,2,34534)
CheckMemberSize(struct statvfs64,f_bfree,8,2,34535)
CheckOffset(struct statvfs64,f_bfree,16,2,34535)
CheckMemberSize(struct statvfs64,f_bavail,8,2,34536)
CheckOffset(struct statvfs64,f_bavail,24,2,34536)
CheckMemberSize(struct statvfs64,f_files,8,2,34537)
CheckOffset(struct statvfs64,f_files,32,2,34537)
CheckMemberSize(struct statvfs64,f_ffree,8,2,34538)
CheckOffset(struct statvfs64,f_ffree,40,2,34538)
CheckMemberSize(struct statvfs64,f_favail,8,2,34539)
CheckOffset(struct statvfs64,f_favail,48,2,34539)
CheckMemberSize(struct statvfs64,f_fsid,4,2,34540)
CheckOffset(struct statvfs64,f_fsid,56,2,34540)
CheckMemberSize(struct statvfs64,__f_unused,4,2,34541)
CheckOffset(struct statvfs64,__f_unused,60,2,34541)
CheckMemberSize(struct statvfs64,f_flag,4,2,34542)
CheckOffset(struct statvfs64,f_flag,64,2,34542)
CheckMemberSize(struct statvfs64,f_namemax,4,2,34543)
CheckOffset(struct statvfs64,f_namemax,68,2,34543)
CheckMemberSize(struct statvfs64,__f_spare,24,2,34544)
CheckOffset(struct statvfs64,__f_spare,72,2,34544)
#endif

#if __ia64__
CheckTypeSize(struct statvfs,112, 10399, 3)
CheckMemberSize(struct statvfs,f_bsize,8,3,34688)
CheckOffset(struct statvfs,f_bsize,0,3,34688)
CheckMemberSize(struct statvfs,f_frsize,8,3,34689)
CheckOffset(struct statvfs,f_frsize,8,3,34689)
CheckMemberSize(struct statvfs,f_blocks,8,3,34690)
CheckOffset(struct statvfs,f_blocks,16,3,34690)
CheckMemberSize(struct statvfs,f_bfree,8,3,34691)
CheckOffset(struct statvfs,f_bfree,24,3,34691)
CheckMemberSize(struct statvfs,f_bavail,8,3,34692)
CheckOffset(struct statvfs,f_bavail,32,3,34692)
CheckMemberSize(struct statvfs,f_files,8,3,34693)
CheckOffset(struct statvfs,f_files,40,3,34693)
CheckMemberSize(struct statvfs,f_ffree,8,3,34694)
CheckOffset(struct statvfs,f_ffree,48,3,34694)
CheckMemberSize(struct statvfs,f_favail,8,3,34695)
CheckOffset(struct statvfs,f_favail,56,3,34695)
CheckMemberSize(struct statvfs,f_fsid,8,3,34696)
CheckOffset(struct statvfs,f_fsid,64,3,34696)
CheckMemberSize(struct statvfs,f_flag,8,3,34697)
CheckOffset(struct statvfs,f_flag,72,3,34697)
CheckMemberSize(struct statvfs,f_namemax,8,3,34698)
CheckOffset(struct statvfs,f_namemax,80,3,34698)
CheckMemberSize(struct statvfs,__f_spare,24,3,34699)
CheckOffset(struct statvfs,__f_spare,88,3,34699)
#endif

#if __ia64__
CheckTypeSize(struct statvfs64,112, 10400, 3)
CheckMemberSize(struct statvfs64,f_bsize,8,3,34700)
CheckOffset(struct statvfs64,f_bsize,0,3,34700)
CheckMemberSize(struct statvfs64,f_frsize,8,3,34701)
CheckOffset(struct statvfs64,f_frsize,8,3,34701)
CheckMemberSize(struct statvfs64,f_blocks,8,3,34702)
CheckOffset(struct statvfs64,f_blocks,16,3,34702)
CheckMemberSize(struct statvfs64,f_bfree,8,3,34703)
CheckOffset(struct statvfs64,f_bfree,24,3,34703)
CheckMemberSize(struct statvfs64,f_bavail,8,3,34704)
CheckOffset(struct statvfs64,f_bavail,32,3,34704)
CheckMemberSize(struct statvfs64,f_files,8,3,34705)
CheckOffset(struct statvfs64,f_files,40,3,34705)
CheckMemberSize(struct statvfs64,f_ffree,8,3,34706)
CheckOffset(struct statvfs64,f_ffree,48,3,34706)
CheckMemberSize(struct statvfs64,f_favail,8,3,34707)
CheckOffset(struct statvfs64,f_favail,56,3,34707)
CheckMemberSize(struct statvfs64,f_fsid,8,3,34708)
CheckOffset(struct statvfs64,f_fsid,64,3,34708)
CheckMemberSize(struct statvfs64,f_flag,8,3,34709)
CheckOffset(struct statvfs64,f_flag,72,3,34709)
CheckMemberSize(struct statvfs64,f_namemax,8,3,34710)
CheckOffset(struct statvfs64,f_namemax,80,3,34710)
CheckMemberSize(struct statvfs64,__f_spare,24,3,34711)
CheckOffset(struct statvfs64,__f_spare,88,3,34711)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct statvfs,72, 10486, 6)
CheckMemberSize(struct statvfs,f_bsize,4,6,40034)
CheckOffset(struct statvfs,f_bsize,0,6,40034)
CheckMemberSize(struct statvfs,f_frsize,4,6,40035)
CheckOffset(struct statvfs,f_frsize,4,6,40035)
CheckMemberSize(struct statvfs,f_blocks,4,6,40036)
CheckOffset(struct statvfs,f_blocks,8,6,40036)
CheckMemberSize(struct statvfs,f_bfree,4,6,40037)
CheckOffset(struct statvfs,f_bfree,12,6,40037)
CheckMemberSize(struct statvfs,f_bavail,4,6,40038)
CheckOffset(struct statvfs,f_bavail,16,6,40038)
CheckMemberSize(struct statvfs,f_files,4,6,40039)
CheckOffset(struct statvfs,f_files,20,6,40039)
CheckMemberSize(struct statvfs,f_ffree,4,6,40040)
CheckOffset(struct statvfs,f_ffree,24,6,40040)
CheckMemberSize(struct statvfs,f_favail,4,6,40041)
CheckOffset(struct statvfs,f_favail,28,6,40041)
CheckMemberSize(struct statvfs,f_fsid,4,6,40042)
CheckOffset(struct statvfs,f_fsid,32,6,40042)
CheckMemberSize(struct statvfs,__f_unused,4,6,40043)
CheckOffset(struct statvfs,__f_unused,36,6,40043)
CheckMemberSize(struct statvfs,f_flag,4,6,40044)
CheckOffset(struct statvfs,f_flag,40,6,40044)
CheckMemberSize(struct statvfs,f_namemax,4,6,40045)
CheckOffset(struct statvfs,f_namemax,44,6,40045)
CheckMemberSize(struct statvfs,__f_spare,24,6,40046)
CheckOffset(struct statvfs,__f_spare,48,6,40046)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct statvfs64,96, 10487, 6)
CheckMemberSize(struct statvfs64,f_bsize,4,6,40047)
CheckOffset(struct statvfs64,f_bsize,0,6,40047)
CheckMemberSize(struct statvfs64,f_frsize,4,6,40048)
CheckOffset(struct statvfs64,f_frsize,4,6,40048)
CheckMemberSize(struct statvfs64,f_blocks,8,6,40049)
CheckOffset(struct statvfs64,f_blocks,8,6,40049)
CheckMemberSize(struct statvfs64,f_bfree,8,6,40050)
CheckOffset(struct statvfs64,f_bfree,16,6,40050)
CheckMemberSize(struct statvfs64,f_bavail,8,6,40051)
CheckOffset(struct statvfs64,f_bavail,24,6,40051)
CheckMemberSize(struct statvfs64,f_files,8,6,40052)
CheckOffset(struct statvfs64,f_files,32,6,40052)
CheckMemberSize(struct statvfs64,f_ffree,8,6,40053)
CheckOffset(struct statvfs64,f_ffree,40,6,40053)
CheckMemberSize(struct statvfs64,f_favail,8,6,40054)
CheckOffset(struct statvfs64,f_favail,48,6,40054)
CheckMemberSize(struct statvfs64,f_fsid,4,6,40055)
CheckOffset(struct statvfs64,f_fsid,56,6,40055)
CheckMemberSize(struct statvfs64,__f_unused,4,6,40056)
CheckOffset(struct statvfs64,__f_unused,60,6,40056)
CheckMemberSize(struct statvfs64,f_flag,4,6,40057)
CheckOffset(struct statvfs64,f_flag,64,6,40057)
CheckMemberSize(struct statvfs64,f_namemax,4,6,40058)
CheckOffset(struct statvfs64,f_namemax,68,6,40058)
CheckMemberSize(struct statvfs64,__f_spare,24,6,40059)
CheckOffset(struct statvfs64,__f_spare,72,6,40059)
#endif

#if __powerpc64__
CheckTypeSize(struct statvfs,112, 10499, 9)
CheckMemberSize(struct statvfs,f_bsize,8,9,40126)
CheckOffset(struct statvfs,f_bsize,0,9,40126)
CheckMemberSize(struct statvfs,f_frsize,8,9,40127)
CheckOffset(struct statvfs,f_frsize,8,9,40127)
CheckMemberSize(struct statvfs,f_blocks,8,9,40128)
CheckOffset(struct statvfs,f_blocks,16,9,40128)
CheckMemberSize(struct statvfs,f_bfree,8,9,40129)
CheckOffset(struct statvfs,f_bfree,24,9,40129)
CheckMemberSize(struct statvfs,f_bavail,8,9,40130)
CheckOffset(struct statvfs,f_bavail,32,9,40130)
CheckMemberSize(struct statvfs,f_files,8,9,40131)
CheckOffset(struct statvfs,f_files,40,9,40131)
CheckMemberSize(struct statvfs,f_ffree,8,9,40132)
CheckOffset(struct statvfs,f_ffree,48,9,40132)
CheckMemberSize(struct statvfs,f_favail,8,9,40133)
CheckOffset(struct statvfs,f_favail,56,9,40133)
CheckMemberSize(struct statvfs,f_fsid,8,9,40134)
CheckOffset(struct statvfs,f_fsid,64,9,40134)
CheckMemberSize(struct statvfs,f_flag,8,9,40135)
CheckOffset(struct statvfs,f_flag,72,9,40135)
CheckMemberSize(struct statvfs,f_namemax,8,9,40136)
CheckOffset(struct statvfs,f_namemax,80,9,40136)
CheckMemberSize(struct statvfs,__f_spare,24,9,40148)
CheckOffset(struct statvfs,__f_spare,88,9,40148)
#endif

#if __powerpc64__
CheckTypeSize(struct statvfs64,112, 10500, 9)
CheckMemberSize(struct statvfs64,f_bsize,8,9,40137)
CheckOffset(struct statvfs64,f_bsize,0,9,40137)
CheckMemberSize(struct statvfs64,f_frsize,8,9,40138)
CheckOffset(struct statvfs64,f_frsize,8,9,40138)
CheckMemberSize(struct statvfs64,f_blocks,8,9,40139)
CheckOffset(struct statvfs64,f_blocks,16,9,40139)
CheckMemberSize(struct statvfs64,f_bfree,8,9,40140)
CheckOffset(struct statvfs64,f_bfree,24,9,40140)
CheckMemberSize(struct statvfs64,f_bavail,8,9,40141)
CheckOffset(struct statvfs64,f_bavail,32,9,40141)
CheckMemberSize(struct statvfs64,f_files,8,9,40142)
CheckOffset(struct statvfs64,f_files,40,9,40142)
CheckMemberSize(struct statvfs64,f_ffree,8,9,40143)
CheckOffset(struct statvfs64,f_ffree,48,9,40143)
CheckMemberSize(struct statvfs64,f_favail,8,9,40144)
CheckOffset(struct statvfs64,f_favail,56,9,40144)
CheckMemberSize(struct statvfs64,f_fsid,8,9,40145)
CheckOffset(struct statvfs64,f_fsid,64,9,40145)
CheckMemberSize(struct statvfs64,f_flag,8,9,40146)
CheckOffset(struct statvfs64,f_flag,72,9,40146)
CheckMemberSize(struct statvfs64,f_namemax,8,9,40147)
CheckOffset(struct statvfs64,f_namemax,80,9,40147)
CheckMemberSize(struct statvfs64,__f_spare,24,9,40149)
CheckOffset(struct statvfs64,__f_spare,88,9,40149)
#endif

#if __s390x__
CheckTypeSize(struct statvfs,120, 10552, 12)
CheckMemberSize(struct statvfs,f_bsize,8,12,40262)
CheckOffset(struct statvfs,f_bsize,0,12,40262)
CheckMemberSize(struct statvfs,f_frsize,8,12,40263)
CheckOffset(struct statvfs,f_frsize,8,12,40263)
CheckMemberSize(struct statvfs,f_blocks,8,12,40264)
CheckOffset(struct statvfs,f_blocks,16,12,40264)
CheckMemberSize(struct statvfs,f_bfree,8,12,40265)
CheckOffset(struct statvfs,f_bfree,24,12,40265)
CheckMemberSize(struct statvfs,f_bavail,8,12,40266)
CheckOffset(struct statvfs,f_bavail,32,12,40266)
CheckMemberSize(struct statvfs,f_files,8,12,40267)
CheckOffset(struct statvfs,f_files,40,12,40267)
CheckMemberSize(struct statvfs,f_ffree,8,12,40268)
CheckOffset(struct statvfs,f_ffree,48,12,40268)
CheckMemberSize(struct statvfs,f_favail,8,12,40269)
CheckOffset(struct statvfs,f_favail,56,12,40269)
CheckMemberSize(struct statvfs,f_fsid,8,12,40270)
CheckOffset(struct statvfs,f_fsid,64,12,40270)
CheckMemberSize(struct statvfs,__f_unused,4,12,40271)
CheckOffset(struct statvfs,__f_unused,72,12,40271)
CheckMemberSize(struct statvfs,f_flag,8,12,40272)
CheckOffset(struct statvfs,f_flag,80,12,40272)
CheckMemberSize(struct statvfs,f_namemax,8,12,40273)
CheckOffset(struct statvfs,f_namemax,88,12,40273)
#endif

#if __s390x__
CheckTypeSize(struct statvfs64,120, 10553, 12)
CheckMemberSize(struct statvfs64,f_bsize,8,12,40274)
CheckOffset(struct statvfs64,f_bsize,0,12,40274)
CheckMemberSize(struct statvfs64,f_frsize,8,12,40275)
CheckOffset(struct statvfs64,f_frsize,8,12,40275)
CheckMemberSize(struct statvfs64,f_blocks,8,12,40276)
CheckOffset(struct statvfs64,f_blocks,16,12,40276)
CheckMemberSize(struct statvfs64,f_bfree,8,12,40277)
CheckOffset(struct statvfs64,f_bfree,24,12,40277)
CheckMemberSize(struct statvfs64,f_bavail,8,12,40278)
CheckOffset(struct statvfs64,f_bavail,32,12,40278)
CheckMemberSize(struct statvfs64,f_files,8,12,40279)
CheckOffset(struct statvfs64,f_files,40,12,40279)
CheckMemberSize(struct statvfs64,f_ffree,8,12,40280)
CheckOffset(struct statvfs64,f_ffree,48,12,40280)
CheckMemberSize(struct statvfs64,f_favail,8,12,40281)
CheckOffset(struct statvfs64,f_favail,56,12,40281)
CheckMemberSize(struct statvfs64,f_fsid,8,12,40282)
CheckOffset(struct statvfs64,f_fsid,64,12,40282)
CheckMemberSize(struct statvfs64,__f_unused,4,12,40283)
CheckOffset(struct statvfs64,__f_unused,72,12,40283)
CheckMemberSize(struct statvfs64,f_flag,8,12,40284)
CheckOffset(struct statvfs64,f_flag,80,12,40284)
CheckMemberSize(struct statvfs64,f_namemax,8,12,40285)
CheckOffset(struct statvfs64,f_namemax,88,12,40285)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/statvfs.h\n",cnt);
return cnt;
#endif

}
