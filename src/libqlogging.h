#pragma once
#ifndef SRCQT6C_LIBQLOGGING_H
#define SRCQT6C_LIBQLOGGING_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qmessagelogcontext.html

/// q_messagelogcontext_new constructs a new QMessageLogContext object.
///
///
QMessageLogContext* q_messagelogcontext_new();

/// q_messagelogcontext_new2 constructs a new QMessageLogContext object.
///
/// ``` const char* fileName, int lineNumber, const char* functionName, const char* categoryName ```
QMessageLogContext* q_messagelogcontext_new2(const char* fileName, int lineNumber, const char* functionName, const char* categoryName);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogcontext.html#dtor.QMessageLogContext)
///
/// Delete this object from C++ memory.
///
/// ``` QMessageLogContext* self ```
void q_messagelogcontext_delete(void* self);

/// https://doc.qt.io/qt-6/qmessagelogger.html

/// q_messagelogger_new constructs a new QMessageLogger object.
///
///
QMessageLogger* q_messagelogger_new();

/// q_messagelogger_new2 constructs a new QMessageLogger object.
///
/// ``` const char* file, int line, const char* function ```
QMessageLogger* q_messagelogger_new2(const char* file, int line, const char* function);

/// q_messagelogger_new3 constructs a new QMessageLogger object.
///
/// ``` const char* file, int line, const char* function, const char* category ```
QMessageLogger* q_messagelogger_new3(const char* file, int line, const char* function, const char* category);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
///
/// ``` QMessageLogger* self ```
QDebug* q_messagelogger_debug(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
///
/// ``` QMessageLogger* self, QLoggingCategory* cat ```
QDebug* q_messagelogger_debug2(void* self, void* cat);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#info)
///
/// ``` QMessageLogger* self ```
QDebug* q_messagelogger_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#info)
///
/// ``` QMessageLogger* self, QLoggingCategory* cat ```
QDebug* q_messagelogger_info2(void* self, void* cat);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
///
/// ``` QMessageLogger* self ```
QDebug* q_messagelogger_warning(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
///
/// ``` QMessageLogger* self, QLoggingCategory* cat ```
QDebug* q_messagelogger_warning2(void* self, void* cat);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
///
/// ``` QMessageLogger* self ```
QDebug* q_messagelogger_critical(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
///
/// ``` QMessageLogger* self, QLoggingCategory* cat ```
QDebug* q_messagelogger_critical2(void* self, void* cat);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
///
/// ``` QMessageLogger* self ```
QDebug* q_messagelogger_fatal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
///
/// ``` QMessageLogger* self, QLoggingCategory* cat ```
QDebug* q_messagelogger_fatal2(void* self, void* cat);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#noDebug)
///
/// ``` QMessageLogger* self ```
QNoDebug* q_messagelogger_no_debug(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagelogger.html#dtor.QMessageLogger)
///
/// Delete this object from C++ memory.
///
/// ``` QMessageLogger* self ```
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
