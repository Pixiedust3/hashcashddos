#ifndef TCPSERVER_H
#define TCPSERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include"vector"

class HashcashServer : public Qobject{
Q_OBJECT

public:

explicit HashcashServer(QObject *parent = nullptr);
~HashcashServer();
bool hasPendingConnections() const
{}
bool isListening() const
{}
void QTcpServer::closed()
{}
private:

QTcpServer* mserver_;
std::vector<QTcpSocket> msocket_;

};

#endif // TCPSERVER_H
