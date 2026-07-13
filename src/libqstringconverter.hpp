#pragma once
#ifndef SRCC_LIBQSTRINGCONVERTER_HPP
#define SRCC_LIBQSTRINGCONVERTER_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QChar QChar;
typedef struct QStringConverter QStringConverter;
typedef struct QStringDecoder QStringDecoder;
typedef struct QStringEncoder QStringEncoder;
#endif

QStringEncoder* QStringEncoder_New();
QStringEncoder* QStringEncoder_New2(int encoding);
QStringEncoder* QStringEncoder_New3(const char* name);
QStringEncoder* QStringEncoder_New4(int encoding, int flags);
QStringEncoder* QStringEncoder_New5(const char* name, int flags);
ptrdiff_t QStringEncoder_RequiredSpace(const QStringEncoder* self, ptrdiff_t inputLength);
char* QStringEncoder_AppendToBuffer(QStringEncoder* self, char* out, libqt_string in);
void QStringEncoder_Delete(QStringEncoder* self);

QStringDecoder* QStringDecoder_New(int encoding);
QStringDecoder* QStringDecoder_New2();
QStringDecoder* QStringDecoder_New3(const char* name);
QStringDecoder* QStringDecoder_New4(int encoding, int flags);
QStringDecoder* QStringDecoder_New5(const char* name, int f);
ptrdiff_t QStringDecoder_RequiredSpace(const QStringDecoder* self, ptrdiff_t inputLength);
QChar* QStringDecoder_AppendToBuffer(QStringDecoder* self, QChar* out, libqt_string ba);
QStringDecoder* QStringDecoder_DecoderForHtml(libqt_string data);
void QStringDecoder_Delete(QStringDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
