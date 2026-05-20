#ifndef TCPSERVER_H
#define TCPSERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include"vector"

class QTcpServer : public Qobject{
Q_OBJECT

public:

 explicit QTcpServer(QObject *parent = nullptr);

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
