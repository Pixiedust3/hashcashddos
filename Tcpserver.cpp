#include "mainwindow.h"
#include "Tcpserver.h"

QTcpServer::QTcpServer (QObject* parent) : QObject(parent)
{
    mserver_ = new QTcpServer(this);
    connect(m_server, &QTcpServer::newConnection, this, &TcpServer::onNewConnection);
}
QTcpServer::QTcpServer()
{
    closed();
}
