/*
 * Test of sys/socket.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/socket.h"



#ifdef TET_TEST
void sys_socket_h()
{
#else
int sys_socket_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/socket.h\n");
#endif

#ifdef AF_UNSPEC
	CompareConstant(AF_UNSPEC,0)
#else
Msg( "Error: Constant not found: AF_UNSPEC\n");
cnt++;
#endif

#ifdef AF_UNIX
	CompareConstant(AF_UNIX,1)
#else
Msg( "Error: Constant not found: AF_UNIX\n");
cnt++;
#endif

#ifdef AF_LOCAL
	CompareConstant(AF_LOCAL,1)
#else
Msg( "Error: Constant not found: AF_LOCAL\n");
cnt++;
#endif

#ifdef AF_INET
	CompareConstant(AF_INET,2)
#else
Msg( "Error: Constant not found: AF_INET\n");
cnt++;
#endif

#ifdef AF_AX25
	CompareConstant(AF_AX25,3)
#else
Msg( "Error: Constant not found: AF_AX25\n");
cnt++;
#endif

#ifdef AF_IPX
	CompareConstant(AF_IPX,4)
#else
Msg( "Error: Constant not found: AF_IPX\n");
cnt++;
#endif

#ifdef AF_APPLETALK
	CompareConstant(AF_APPLETALK,5)
#else
Msg( "Error: Constant not found: AF_APPLETALK\n");
cnt++;
#endif

#ifdef AF_NETROM
	CompareConstant(AF_NETROM,6)
#else
Msg( "Error: Constant not found: AF_NETROM\n");
cnt++;
#endif

#ifdef AF_BRIDGE
	CompareConstant(AF_BRIDGE,7)
#else
Msg( "Error: Constant not found: AF_BRIDGE\n");
cnt++;
#endif

#ifdef AF_ATMPVC
	CompareConstant(AF_ATMPVC,8)
#else
Msg( "Error: Constant not found: AF_ATMPVC\n");
cnt++;
#endif

#ifdef AF_X25
	CompareConstant(AF_X25,9)
#else
Msg( "Error: Constant not found: AF_X25\n");
cnt++;
#endif

#ifdef AF_INET6
	CompareConstant(AF_INET6,10)
#else
Msg( "Error: Constant not found: AF_INET6\n");
cnt++;
#endif

#ifdef SOCK_STREAM
	CompareConstant(SOCK_STREAM,1)
#else
Msg( "Error: Constant not found: SOCK_STREAM\n");
cnt++;
#endif

#ifdef SOCK_DGRAM
	CompareConstant(SOCK_DGRAM,2)
#else
Msg( "Error: Constant not found: SOCK_DGRAM\n");
cnt++;
#endif

#ifdef SOCK_RAW
	CompareConstant(SOCK_RAW,3)
#else
Msg( "Error: Constant not found: SOCK_RAW\n");
cnt++;
#endif

#ifdef SOCK_RDM
	CompareConstant(SOCK_RDM,4)
#else
Msg( "Error: Constant not found: SOCK_RDM\n");
cnt++;
#endif

#ifdef SOCK_SEQPACKET
	CompareConstant(SOCK_SEQPACKET,5)
#else
Msg( "Error: Constant not found: SOCK_SEQPACKET\n");
cnt++;
#endif

#ifdef SOCK_PACKET
	CompareConstant(SOCK_PACKET,10)
#else
Msg( "Error: Constant not found: SOCK_PACKET\n");
cnt++;
#endif

#ifdef SOL_SOCKET
	CompareConstant(SOL_SOCKET,1)
#else
Msg( "Error: Constant not found: SOL_SOCKET\n");
cnt++;
#endif

#ifdef SO_DEBUG
	CompareConstant(SO_DEBUG,1)
#else
Msg( "Error: Constant not found: SO_DEBUG\n");
cnt++;
#endif

#ifdef SO_REUSEADDR
	CompareConstant(SO_REUSEADDR,2)
#else
Msg( "Error: Constant not found: SO_REUSEADDR\n");
cnt++;
#endif

#ifdef SO_TYPE
	CompareConstant(SO_TYPE,3)
#else
Msg( "Error: Constant not found: SO_TYPE\n");
cnt++;
#endif

#ifdef SO_ERROR
	CompareConstant(SO_ERROR,4)
#else
Msg( "Error: Constant not found: SO_ERROR\n");
cnt++;
#endif

#ifdef SO_DONTROUTE
	CompareConstant(SO_DONTROUTE,5)
#else
Msg( "Error: Constant not found: SO_DONTROUTE\n");
cnt++;
#endif

#ifdef SO_BROADCAST
	CompareConstant(SO_BROADCAST,6)
#else
Msg( "Error: Constant not found: SO_BROADCAST\n");
cnt++;
#endif

#ifdef SO_SNDBUF
	CompareConstant(SO_SNDBUF,7)
#else
Msg( "Error: Constant not found: SO_SNDBUF\n");
cnt++;
#endif

#ifdef SO_RCVBUF
	CompareConstant(SO_RCVBUF,8)
#else
Msg( "Error: Constant not found: SO_RCVBUF\n");
cnt++;
#endif

#ifdef SO_KEEPALIVE
	CompareConstant(SO_KEEPALIVE,9)
#else
Msg( "Error: Constant not found: SO_KEEPALIVE\n");
cnt++;
#endif

#ifdef SO_OOBINLINE
	CompareConstant(SO_OOBINLINE,10)
#else
Msg( "Error: Constant not found: SO_OOBINLINE\n");
cnt++;
#endif

#ifdef SO_NO_CHECK
	CompareConstant(SO_NO_CHECK,11)
#else
Msg( "Error: Constant not found: SO_NO_CHECK\n");
cnt++;
#endif

#ifdef SO_PRIORITY
	CompareConstant(SO_PRIORITY,12)
#else
Msg( "Error: Constant not found: SO_PRIORITY\n");
cnt++;
#endif

#ifdef SO_LINGER
	CompareConstant(SO_LINGER,13)
#else
Msg( "Error: Constant not found: SO_LINGER\n");
cnt++;
#endif

#ifdef SOL_IP
	CompareConstant(SOL_IP,0)
#else
Msg( "Error: Constant not found: SOL_IP\n");
cnt++;
#endif

#ifdef SOL_TCP
	CompareConstant(SOL_TCP,6)
#else
Msg( "Error: Constant not found: SOL_TCP\n");
cnt++;
#endif

#ifdef SOL_UDP
	CompareConstant(SOL_UDP,17)
#else
Msg( "Error: Constant not found: SOL_UDP\n");
cnt++;
#endif

#ifdef SOL_RAW
	CompareConstant(SOL_RAW,255)
#else
Msg( "Error: Constant not found: SOL_RAW\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(socklen_t,4, 9155, 2)
#elif __ia64__
CheckTypeSize(socklen_t,4, 9155, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9155,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/socket.h\n",cnt);
return cnt;
#endif

}
