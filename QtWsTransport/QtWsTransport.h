#ifndef QTWSTRANSPORT_H
#define QTWSTRANSPORT_H

#include <string>
class QThread;
class Helper;
class QCoreApplication;
class QMutex;

#ifdef WIN32
//  #ifdef EXPORT_RPCTRANSPORT
    #define CLASS_Qt_ws_transport __declspec(dllexport)
//  #else
//    #define CLASS_Qt_ws_transport __declspec(dllimport)
//  #endif
#else
  #define CLASS_Qt_ws_transport
#endif


class CLASS_Qt_ws_transport QtWsTransport
{
    QCoreApplication * m_application;
    QThread * m_thread;
    Helper * m_helper;
    QMutex * m_mutex;

    std::string m_fileName;
public:
    QtWsTransport();
    enum Command
    {
		CMD_NONE,
		CMD_ZERO_AXIS,
		CMD_LOAD_CODE,
		CMD_START,
        CMD_STOP,
		CMD_RESET,
		CMD_GOTO_LINE
    };
    Command GetLastCommand();

    std::string FileName();

private:
    Command m_lastCmd;
    void SetLastCommand(Command cmd);
    void SetFileName(std::string fn);

    friend class Helper;
};

#endif // QTWSTRANSPORT_H
