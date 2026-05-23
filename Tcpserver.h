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
    bool startListening(uint_16 port);
    bool stopListening();
    bool hasPendingConnections() const;
    bool isListening() const;

private slots:
    void onNewConnection();
    void onConnectionDisconnected();
private:

QTcpServer* mserver_;
std::vector<QTcpSocket&> msocket_;

};

#endif // TCPSERVER_H
