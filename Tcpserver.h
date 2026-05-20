#ifndef TCPSERVER_H
#define TCPSERVER_H
#include<QTcpServer>

class QTcpServer{

public:
QTcpServer(QObject *parent = nullptr);
hasPendingConnections() const
{}
isListening() const
{}

};
#endif // TCPSERVER_H
