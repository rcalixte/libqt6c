#pragma once
#ifndef SRC_QT6C_LIBQLOGGING_H
#define SRC_QT6C_LIBQLOGGING_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html)

/// q_messagelogcontext_new constructs a new QMessageLogContext object.
///
QMessageLogContext* q_messagelogcontext_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html)

/// q_messagelogcontext_new2 constructs a new QMessageLogContext object.
///
/// @param fileName const char*
/// @param lineNumber int
/// @param functionName const char*
/// @param categoryName const char*
///
QMessageLogContext* q_messagelogcontext_new2(const char* fileName, int lineNumber, const char* functionName, const char* categoryName);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#version-var)
///
/// @param self QMessageLogContext*
///
int32_t q_messagelogcontext_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#version-var)
///
/// @param self QMessageLogContext*
/// @param version int
///
void q_messagelogcontext_set_version(void* self, int version);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#line-var)
///
/// @param self QMessageLogContext*
///
int32_t q_messagelogcontext_line(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#line-var)
///
/// @param self QMessageLogContext*
/// @param line int
///
void q_messagelogcontext_set_line(void* self, int line);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#file-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMessageLogContext*
///
const char* q_messagelogcontext_file(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#file-var)
///
/// @param self QMessageLogContext*
/// @param file const char*
///
void q_messagelogcontext_set_file(void* self, const char* file);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#function-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMessageLogContext*
///
const char* q_messagelogcontext_function(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#function-var)
///
/// @param self QMessageLogContext*
/// @param function const char*
///
void q_messagelogcontext_set_function(void* self, const char* function);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#category-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMessageLogContext*
///
const char* q_messagelogcontext_category(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#category-var)
///
/// @param self QMessageLogContext*
/// @param category const char*
///
void q_messagelogcontext_set_category(void* self, const char* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogcontext.html#dtor.QMessageLogContext)
///
/// Delete this object from C++ memory.
///
/// @param self QMessageLogContext*
///
void q_messagelogcontext_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html)

/// q_messagelogger_new constructs a new QMessageLogger object.
///
QMessageLogger* q_messagelogger_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html)

/// q_messagelogger_new2 constructs a new QMessageLogger object.
///
/// @param file const char*
/// @param line int
/// @param function const char*
///
QMessageLogger* q_messagelogger_new2(const char* file, int line, const char* function);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html)

/// q_messagelogger_new3 constructs a new QMessageLogger object.
///
/// @param file const char*
/// @param line int
/// @param function const char*
/// @param category const char*
///
QMessageLogger* q_messagelogger_new3(const char* file, int line, const char* function, const char* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
///
/// @param self QMessageLogger*
///
QDebug* q_messagelogger_debug(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#debug)
///
/// @param self QMessageLogger*
/// @param cat QLoggingCategory*
///
QDebug* q_messagelogger_debug2(void* self, void* cat);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
///
/// @param self QMessageLogger*
///
QDebug* q_messagelogger_info(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#info)
///
/// @param self QMessageLogger*
/// @param cat QLoggingCategory*
///
QDebug* q_messagelogger_info2(void* self, void* cat);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
///
/// @param self QMessageLogger*
///
QDebug* q_messagelogger_warning(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#warning)
///
/// @param self QMessageLogger*
/// @param cat QLoggingCategory*
///
QDebug* q_messagelogger_warning2(void* self, void* cat);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
///
/// @param self QMessageLogger*
///
QDebug* q_messagelogger_critical(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#critical)
///
/// @param self QMessageLogger*
/// @param cat QLoggingCategory*
///
QDebug* q_messagelogger_critical2(void* self, void* cat);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
///
/// @param self QMessageLogger*
///
QDebug* q_messagelogger_fatal(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#fatal)
///
/// @param self QMessageLogger*
/// @param cat QLoggingCategory*
///
QDebug* q_messagelogger_fatal2(void* self, void* cat);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#noDebug)
///
/// @param self QMessageLogger*
///
QNoDebug* q_messagelogger_no_debug(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmessagelogger.html#dtor.QMessageLogger)
///
/// Delete this object from C++ memory.
///
/// @param self QMessageLogger*
///
void q_messagelogger_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlogging.html#public-types)

typedef enum {
    QTMSGTYPE_QTDEBUGMSG = 0,
    QTMSGTYPE_QTWARNINGMSG = 1,
    QTMSGTYPE_QTCRITICALMSG = 2,
    QTMSGTYPE_QTFATALMSG = 3,
    QTMSGTYPE_QTINFOMSG = 4,
    QTMSGTYPE_QTSYSTEMMSG = 2
} QtMsgType__;

#endif
