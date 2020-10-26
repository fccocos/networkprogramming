#if _MSC_VER > 1000
#pragma once
#endif

#define SOCKETBIND 1
#define SOCKETNOBIND 2
#define SOKET_TIMEOUT -100

#include <winsock2.h>

#include <winsock.h>
#include <string>
using namespace std;
#pragma comment(lib,"ws2_32.lib")
class CTcpTran{
public:
  CTcpTran();
  virtual ~CTcpTran();
public:
  staic BOOL InitSocketLibrary(int lower,int higver);
public:
  SOCKET InitSocket(int SocketType,string strBindIp,u_short BindPort);
  int mysend(SOCKET sock,const char *buf,int len, int flag,int overtime);
  int myrecv(SOCKET sock,char *buf,int len,int flag,int overtime,char* EndMark,Bool soonflag=FALSE);
private:
  SOCKET m_Socket;
};
