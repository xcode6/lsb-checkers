/*
 * Test of sys/ipc.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/ipc.h"



#ifdef TET_TEST
void sys_ipc_h()
{
#else
int sys_ipc_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/ipc.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_PRIVATE
	CompareConstant(IPC_PRIVATE,((key_t)0),3445,architecture)
#else
Msg( "Error: Constant not found: IPC_PRIVATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_CREAT
	CompareConstant(IPC_CREAT,00001000,3446,architecture)
#else
Msg( "Error: Constant not found: IPC_CREAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_EXCL
	CompareConstant(IPC_EXCL,00002000,3447,architecture)
#else
Msg( "Error: Constant not found: IPC_EXCL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_NOWAIT
	CompareConstant(IPC_NOWAIT,00004000,3448,architecture)
#else
Msg( "Error: Constant not found: IPC_NOWAIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_RMID
	CompareConstant(IPC_RMID,0,3449,architecture)
#else
Msg( "Error: Constant not found: IPC_RMID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_SET
	CompareConstant(IPC_SET,1,3450,architecture)
#else
Msg( "Error: Constant not found: IPC_SET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_STAT
	CompareConstant(IPC_STAT,2,3451,architecture)
#else
Msg( "Error: Constant not found: IPC_STAT\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct ipc_perm,36, 10128, 2)
CheckOffset(struct ipc_perm,__key,0,2,33724)
CheckOffset(struct ipc_perm,uid,4,2,33725)
CheckOffset(struct ipc_perm,gid,8,2,33726)
CheckOffset(struct ipc_perm,cuid,12,2,33727)
CheckOffset(struct ipc_perm,cgid,16,2,33728)
CheckOffset(struct ipc_perm,mode,20,2,33729)
CheckOffset(struct ipc_perm,__pad1,22,2,33730)
CheckOffset(struct ipc_perm,__seq,24,2,34416)
CheckOffset(struct ipc_perm,__pad2,26,2,34417)
CheckOffset(struct ipc_perm,__unused1,28,2,34418)
CheckOffset(struct ipc_perm,__unused2,32,2,34419)
#endif

#if __ia64__
CheckTypeSize(struct ipc_perm,48, 10394, 3)
CheckOffset(struct ipc_perm,__key,0,3,34644)
CheckOffset(struct ipc_perm,uid,4,3,34645)
CheckOffset(struct ipc_perm,gid,8,3,34646)
CheckOffset(struct ipc_perm,cuid,12,3,34647)
CheckOffset(struct ipc_perm,cgid,16,3,34648)
CheckOffset(struct ipc_perm,mode,20,3,34649)
CheckOffset(struct ipc_perm,__seq,24,3,34650)
CheckOffset(struct ipc_perm,__pad1,26,3,34651)
CheckOffset(struct ipc_perm,__unused1,32,3,34652)
CheckOffset(struct ipc_perm,__unused2,40,3,34653)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct ipc_perm,48, 10403, 6)
CheckOffset(struct ipc_perm,__key,0,6,34720)
CheckOffset(struct ipc_perm,uid,0,6,34721)
CheckOffset(struct ipc_perm,gid,0,6,34723)
CheckOffset(struct ipc_perm,cuid,0,6,34722)
CheckOffset(struct ipc_perm,cgid,0,6,34724)
CheckOffset(struct ipc_perm,mode,0,6,34725)
CheckOffset(struct ipc_perm,__pad1,0,6,34726)
CheckOffset(struct ipc_perm,__seq,0,6,34727)
CheckOffset(struct ipc_perm,__pad2,0,6,34728)
CheckOffset(struct ipc_perm,__unused1,0,6,34729)
CheckOffset(struct ipc_perm,__unused2,0,6,34730)
#endif

#if __s390__
CheckTypeSize(struct ipc_perm,36, 10404, 10)
CheckOffset(struct ipc_perm,__key,0,10,34731)
CheckOffset(struct ipc_perm,uid,4,10,34732)
CheckOffset(struct ipc_perm,gid,8,10,34734)
CheckOffset(struct ipc_perm,cuid,12,10,34733)
CheckOffset(struct ipc_perm,cgid,16,10,34735)
CheckOffset(struct ipc_perm,mode,20,10,34736)
CheckOffset(struct ipc_perm,__pad1,22,10,34737)
CheckOffset(struct ipc_perm,__seq,24,10,34738)
CheckOffset(struct ipc_perm,__pad2,26,10,34739)
CheckOffset(struct ipc_perm,__unused1,28,10,34740)
CheckOffset(struct ipc_perm,__unused2,32,10,34741)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/ipc.h\n",cnt);
return cnt;
#endif

}
