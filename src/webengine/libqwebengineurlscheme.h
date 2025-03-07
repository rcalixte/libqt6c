#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEURLSCHEME_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEURLSCHEME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

QWebEngineUrlScheme* q_webengineurlscheme_new();
QWebEngineUrlScheme* q_webengineurlscheme_new2(const char* name);
QWebEngineUrlScheme* q_webengineurlscheme_new3(void* that);
void q_webengineurlscheme_operator_assign(void* self, void* that);
bool q_webengineurlscheme_operator_equal(void* self, void* that);
bool q_webengineurlscheme_operator_not_equal(void* self, void* that);
char* q_webengineurlscheme_name(void* self);
void q_webengineurlscheme_set_name(void* self, const char* newValue);
int64_t q_webengineurlscheme_syntax(void* self);
void q_webengineurlscheme_set_syntax(void* self, int64_t newValue);
int32_t q_webengineurlscheme_default_port(void* self);
void q_webengineurlscheme_set_default_port(void* self, int newValue);
int64_t q_webengineurlscheme_flags(void* self);
void q_webengineurlscheme_set_flags(void* self, int64_t newValue);
void q_webengineurlscheme_register_scheme(void* scheme);
QWebEngineUrlScheme* q_webengineurlscheme_scheme_by_name(const char* name);
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
    QWEBENGINEURLSCHEME_FLAG_CORSENABLED = 128
} QWebEngineUrlScheme__Flag;

#endif
