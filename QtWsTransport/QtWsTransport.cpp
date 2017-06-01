#include "QtWsTransport.h"
#include <QThread>
#include <QTimer>
#include "Helper.h"
#include <QDebug>
#include <QCoreApplication>
#include <QMutexLocker>
#include <QMutex>
QtWsTransport::QtWsTransport()
{
    int argc = 0;
    m_application = new QCoreApplication(argc, 0);
    m_thread = new QThread;
    m_helper = new Helper(this);
    m_mutex = new QMutex;

    m_helper->moveToThread(m_thread);
    m_thread->start();
    QTimer::singleShot(0, m_helper, &Helper::Init);
}

QtWsTransport::Command QtWsTransport::GetLastCommand()
{
    QMutexLocker l(m_mutex);
    auto ret = m_lastCmd;
    m_lastCmd = CMD_NONE;
    return ret;
}

std::string QtWsTransport::FileName()
{
    QMutexLocker l(m_mutex);
    return m_fileName;
}

void QtWsTransport::SetLastCommand(QtWsTransport::Command cmd)
{
    QMutexLocker l(m_mutex);
    m_lastCmd = cmd;
    qDebug() << "Last command" << cmd;
}

void QtWsTransport::SetFileName(std::string fn)
{
    QMutexLocker l(m_mutex);
    m_fileName = fn;
}
