#include "mainwindow.h"
#include "Tcpserver.h"

HashcashServer::QTcpServer (QObject* parent) : QObject(parent)
{
    mserver_ = new QTcpServer(this);
    connect(m_server, &QTcpServer::newConnection, this, &TcpServer::onNewConnection);
}
QTcpServer::QTcpServer()
{
    closed();
}
bool HashcashServer::startListening(uint_16 port)
{
    if (mserver_->listen(QHostAddress::Any, port)) {
        emit updateUiLog(QString("[SERVER] Server listening on port %1...").arg(port));
        return true;
    }
    return false;
}
