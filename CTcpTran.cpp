#include "CTcpTran.h"
CTcpTran::CTcpTran()
{
  m_Socket=INVALD_SOCKET;
}
CTcpTran::~CTcpTran()
{

}
BOOOL CTcpTran::InitSocketLibray(int lowver,int higver)
{
  WORD wVersion = 0;
  int errer = -1;
  WSADATA wsaData;
  wVersion = MAKEWORD(lowver,higver);
  erret = WSAStartup(wVersion,&wsaData);
  
  if(LOBYTE(wsaData.wVersion) !=2||HIBYTE(wsaData.wVersion)!=2)
  {
    MessageBox(NULL,"winsocket版本库底","提示",MB_OK);
    return FALSE;
  }
  return TRUE;
}
