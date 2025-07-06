#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEURLSCHEME_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEURLSCHEME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineurlscheme.html

/// q_webengineurlscheme_new constructs a new QWebEngineUrlScheme object.
///
///
QWebEngineUrlScheme* q_webengineurlscheme_new();

/// q_webengineurlscheme_new2 constructs a new QWebEngineUrlScheme object.
///
/// ``` const char* name ```
QWebEngineUrlScheme* q_webengineurlscheme_new2(const char* name);

/// q_webengineurlscheme_new3 constructs a new QWebEngineUrlScheme object.
///
/// ``` QWebEngineUrlScheme* that ```
QWebEngineUrlScheme* q_webengineurlscheme_new3(void* that);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator=)
///
/// ``` QWebEngineUrlScheme* self, QWebEngineUrlScheme* that ```
void q_webengineurlscheme_operator_assign(void* self, void* that);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator==)
///
/// ``` QWebEngineUrlScheme* self, QWebEngineUrlScheme* that ```
bool q_webengineurlscheme_operator_equal(void* self, void* that);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#operator!=)
///
/// ``` QWebEngineUrlScheme* self, QWebEngineUrlScheme* that ```
bool q_webengineurlscheme_operator_not_equal(void* self, void* that);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#name)
///
/// ``` QWebEngineUrlScheme* self ```
char* q_webengineurlscheme_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setName)
///
/// ``` QWebEngineUrlScheme* self, const char* newValue ```
void q_webengineurlscheme_set_name(void* self, const char* newValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#syntax)
///
/// ``` QWebEngineUrlScheme* self ```
int64_t q_webengineurlscheme_syntax(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setSyntax)
///
/// ``` QWebEngineUrlScheme* self, enum QWebEngineUrlScheme__Syntax newValue ```
void q_webengineurlscheme_set_syntax(void* self, int64_t newValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#defaultPort)
///
/// ``` QWebEngineUrlScheme* self ```
int32_t q_webengineurlscheme_default_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setDefaultPort)
///
/// ``` QWebEngineUrlScheme* self, int newValue ```
void q_webengineurlscheme_set_default_port(void* self, int newValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#flags)
///
/// ``` QWebEngineUrlScheme* self ```
int64_t q_webengineurlscheme_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#setFlags)
///
/// ``` QWebEngineUrlScheme* self, int newValue ```
void q_webengineurlscheme_set_flags(void* self, int64_t newValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#registerScheme)
///
/// ``` QWebEngineUrlScheme* scheme ```
void q_webengineurlscheme_register_scheme(void* scheme);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#schemeByName)
///
/// ``` const char* name ```
QWebEngineUrlScheme* q_webengineurlscheme_scheme_by_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlscheme.html#dtor.QWebEngineUrlScheme)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineUrlScheme* self ```
void q_webengineurlscheme_delete(void* self);

/// https://doc.qt.io/qt-6/qwebengineurlscheme.html#types

typedef enum {
    QWEBENGINEURLSCHEME_SYNTAX_HOSTPORTANDUSERINFORMATION = 0,
    QWEBENGINEURLSCHEME_SYNTAX_HOSTANDPORT = 1,
    QWEBENGINEURLSCHEME_SYNTAX_HOST = 2,
    QWEBENGINEURLSCHEME_SYNTAX_PATH = 3
} QWebEngineUrlScheme__Syntax;

typedef enum {
    QWEBENGINEURLSCHEME_SPECIALPORT_PORTUNSPECIFIED = -1
} QWebEngineUrlScheme__SpecialPort;

typedef enum {
    QWEBENGINEURLSCHEME_FLAG_SECURESCHEME = 1,
    QWEBENGINEURLSCHEME_FLAG_LOCALSCHEME = 2,
    QWEBENGINEURLSCHEME_FLAG_LOCALACCESSALLOWED = 4,
    QWEBENGINEURLSCHEME_FLAG_NOACCESSALLOWED = 8,
    QWEBENGINEURLSCHEME_FLAG_SERVICEWORKERSALLOWED = 16,
    QWEBENGINEURLSCHEME_FLAG_VIEWSOURCEALLOWED = 32,
    QWEBENGINEURLSCHEME_FLAG_CONTENTSECURITYPOLICYIGNORED = 64,
    QWEBENGINEURLSCHEME_FLAG_CORSENABLED = 128,
    QWEBENGINEURLSCHEME_FLAG_FETCHAPIALLOWED = 256
} QWebEngineUrlScheme__Flag;

#endif
