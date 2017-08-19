#include "Helper.h"
#include <QFile>
#include <QDebug>
#include <QThread>
#include "QtWsTransport.h"
#include <QJsonDocument>
#include <QDateTime>
Helper::Helper(QtWsTransport *parent) : QObject(nullptr),
    m_serverUrl("ws://127.0.0.1:8666"), m_parent(parent)
{

}

QMap<QString, QtWsTransport::Command> g_cmds;

void Helper::Init()
{
    g_cmds.insert("zero_axis", QtWsTransport::CMD_ZERO_AXIS);
    g_cmds.insert("load_gcode", QtWsTransport::CMD_LOAD_CODE);
    g_cmds.insert("start", QtWsTransport::CMD_START);
    g_cmds.insert("stop", QtWsTransport::CMD_STOP);
    g_cmds.insert("reset", QtWsTransport::CMD_RESET);
    g_cmds.insert("goto_line", QtWsTransport::CMD_GOTO_LINE);
    g_cmds.insert("", QtWsTransport::CMD_NONE);

    QFile f("remote_plugin.json");
    if(f.open(QIODevice::ReadOnly))
    {
        auto d = QJsonDocument::fromJson(f.readAll());
        if(!d.isNull())
        {
            auto vals = d.toVariant().toMap();
            m_serverUrl = vals.value("server_url", m_serverUrl).toUrl();
        }

    }
    m_ws = new QWebSocket;

    connect(m_ws, &QWebSocket::textMessageReceived,
            this, &Helper::onTextMessageReceived);
    m_ws->open(m_serverUrl);
}

void Helper::onTextMessageReceived(QString msg)
{
    m_ws->sendTextMessage("Echo: " + msg);
    auto d = QJsonDocument::fromJson(msg.toUtf8());
    if(!d.isNull())
    {
        auto params = d.toVariant().toMap();
        auto cmd = params.value("cmd").toString();
        if(cmd == "load_gcode")
        {
            QString gcode = params.value("gcode").toString();
            QString fileName = "C:\\CNC\\" + QString::number(QDateTime::currentDateTime().toMSecsSinceEpoch()) + ".nc";
            QFile file(fileName);
            if(file.open(QIODevice::WriteOnly))
            {
                file.write(gcode.toUtf8());
                file.close();
            }
            m_parent->SetFileName(fileName.toStdString());
            m_parent->SetLastCommand(QtWsTransport::CMD_LOAD_CODE);
        }

    }
}
