// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/msg.h>

#if defined __i386__
int validate_struct_msqid_ds(struct msqid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> msg_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_stime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_rtime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __msg_cbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qnum,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lspid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lrpid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused5,name ))
		failure = 1;
return failure;
}

#endif /* defined __i386__ */
#if defined __ia64__
int validate_struct_msqid_ds(struct msqid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> msg_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_stime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_rtime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __msg_cbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qnum,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lspid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lrpid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused5,name ))
		failure = 1;
return failure;
}

#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
int validate_struct_msqid_ds(struct msqid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> msg_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_stime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_rtime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __msg_cbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qnum,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lspid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lrpid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused5,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
int validate_struct_msqid_ds(struct msqid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> msg_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_stime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_rtime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __msg_cbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qnum,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lspid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lrpid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused5,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
int validate_struct_msqid_ds(struct msqid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> msg_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_stime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_rtime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __msg_cbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qnum,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lspid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lrpid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused5,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
int validate_struct_msqid_ds(struct msqid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> msg_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_stime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_rtime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __msg_cbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qnum,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lspid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lrpid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused5,name ))
		failure = 1;
return failure;
}

#endif /* defined __x86_64__ */
#if defined __s390x__
int validate_struct_msqid_ds(struct msqid_ds  * input, char *name)
{
int failure = 0;
	if(validate_struct_ipc_perm( &(input-> msg_perm),name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_stime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_rtime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_ctime,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __msg_cbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qnum,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_qbytes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lspid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> msg_lrpid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __unused5,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390x__ */