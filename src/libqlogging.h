#pragma once
#ifndef SRCQT6C_LIBQLOGGING_H
#define SRCQT6C_LIBQLOGGING_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qmessagelogcontext.html

/// q_messagelogcontext_new constructs a new QMessageLogContext object.
///
QMessageLogContext* q_messagelogcontext_new();

/// q_messagelogcontext_new2 constructs a new QMessageLogContext object.
///
/// @param fileName const char*
/// @param lineNumber int
/// @param functionName const char*
/// @param categoryName const char*
QMessageLogContext* q_messagelogcontext_new2(const char* fileName, int lineNumber, const char* functionName, const char* categoryName);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogcontext.html#dtor.QMessageLogContext)
///
/// Delete this object from C++ memory.
///
/// @param self QMessageLogContext*
void q_messagelogcontext_delete(void* self);

/// https://doc.qt.io/qt-6/qmessagelogger.html

/// q_messagelogger_new constructs a new QMessageLogger object.
///
QMessageLogger* q_messagelogger_new();

/// q_messagelogger_new2 constructs a new QMessageLogger object.
///
/// @param file const char*
/// @param line int
/// @param function const char*
QMessageLogger* q_messagelogger_new2(const char* file, int line, const char* function);

/// q_messagelogger_new3 constructs a new QMessageLogger object.
///
/// @param file const char*
/// @param line int
/// @param function const char*
/// @param category const char*
QMessageLogger* q_messagelogger_new3(const char* file, int line, const char* function, const char* category);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
///
/// @param self QMessageLogger*
QDebug* q_messagelogger_debug(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
///
/// @param self QMessageLogger*
/// @param cat QLoggingCategory*
QDebug* q_messagelogger_debug2(void* self, void* cat);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#info)
///
/// @param self QMessageLogger*
QDebug* q_messagelogger_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#info)
///
/// @param self QMessageLogger*
/// @param cat QLoggingCategory*
QDebug* q_messagelogger_info2(void* self, void* cat);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
///
/// @param self QMessageLogger*
QDebug* q_messagelogger_warning(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
///
/// @param self QMessageLogger*
/// @param cat QLoggingCategory*
QDebug* q_messagelogger_warning2(void* self, void* cat);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
///
/// @param self QMessageLogger*
QDebug* q_messagelogger_critical(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
///
/// @param self QMessageLogger*
/// @param cat QLoggingCategory*
QDebug* q_messagelogger_critical2(void* self, void* cat);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
///
/// @param self QMessageLogger*
QDebug* q_messagelogger_fatal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
///
/// @param self QMessageLogger*
/// @param cat QLoggingCategory*
QDebug* q_messagelogger_fatal2(void* self, void* cat);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#noDebug)
///
/// @param self QMessageLogger*
QNoDebug* q_messagelogger_no_debug(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#dtor.QMessageLogger)
///
/// Delete this object from C++ memory.
///
/// @param self QMessageLogger*
void q_messagelogger_delete(void* self);

/// https://doc.qt.io/qt-6/qlogging.html#types

typedef enum {
    QTMSGTYPE_QTDEBUGMSG = 0,
    QTMSGTYPE_QTWARNINGMSG = 1,
    QTMSGTYPE_QTCRITICALMSG = 2,
    QTMSGTYPE_QTFATALMSG = 3,
    QTMSGTYPE_QTINFOMSG = 4,
    QTMSGTYPE_QTSYSTEMMSG = 2
} QtMsgType__;

#endif
