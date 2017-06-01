#ifndef HELPER_H
#define HELPER_H

#include <QObject>
#include <QUrl>
#include <QWebSocket>

class QtWsTransport;
class Helper : public QObject
{
    Q_OBJECT
    QUrl m_serverUrl;
    QWebSocket * m_ws;
    QtWsTransport * m_parent;

public:
    explicit Helper(QtWsTransport *parent);

signals:

public slots:
    void Init();
private slots:
    void onTextMessageReceived(QString s);
};

#endif // HELPER_H
