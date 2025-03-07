#pragma once
#ifndef SRCQT6C_LIBQSTRINGCONVERTER_BASE_H
#define SRCQT6C_LIBQSTRINGCONVERTER_BASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqstringconverter.h"

bool q_stringconverter_is_valid(void* self);
void q_stringconverter_reset_state(void* self);
bool q_stringconverter_has_error(void* self);
const char* q_stringconverter_name(void* self);
const char* q_stringconverter_name_for_encoding(int64_t e);
QStringConverterBase__State* q_stringconverterbase__state_new();
QStringConverterBase__State* q_stringconverterbase__state_new2(int64_t f);
void q_stringconverterbase__state_clear(void* self);
void q_stringconverterbase__state_reset(void* self);
void q_stringconverterbase__state_delete(void* self);

/// https://doc.qt.io/qt-6/qstringconverter_base.html#types

typedef enum {
    QSTRINGCONVERTERBASE_FLAG_DEFAULT = 0,
    QSTRINGCONVERTERBASE_FLAG_STATELESS = 1,
    QSTRINGCONVERTERBASE_FLAG_CONVERTINVALIDTONULL = 2,
    QSTRINGCONVERTERBASE_FLAG_WRITEBOM = 4,
    QSTRINGCONVERTERBASE_FLAG_CONVERTINITIALBOM = 8,
    QSTRINGCONVERTERBASE_FLAG_USESICU = 16
} QStringConverterBase__Flag;

typedef enum {
    QSTRINGCONVERTER_ENCODING_UTF8 = 0,
    QSTRINGCONVERTER_ENCODING_UTF16 = 1,
    QSTRINGCONVERTER_ENCODING_UTF16LE = 2,
    QSTRINGCONVERTER_ENCODING_UTF16BE = 3,
    QSTRINGCONVERTER_ENCODING_UTF32 = 4,
    QSTRINGCONVERTER_ENCODING_UTF32LE = 5,
    QSTRINGCONVERTER_ENCODING_UTF32BE = 6,
    QSTRINGCONVERTER_ENCODING_LATIN1 = 7,
    QSTRINGCONVERTER_ENCODING_SYSTEM = 8,
    QSTRINGCONVERTER_ENCODING_LASTENCODING = 8
} QStringConverter__Encoding;

#endif
