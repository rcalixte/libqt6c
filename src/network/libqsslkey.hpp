#pragma once
#ifndef SRC_NETWORKC_LIBQSSLKEY_HPP
#define SRC_NETWORKC_LIBQSSLKEY_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODevice QIODevice;
typedef struct QSslKey QSslKey;
#endif

QSslKey* QSslKey_New();
QSslKey* QSslKey_New2(const libqt_string encoded, int algorithm);
QSslKey* QSslKey_New3(QIODevice* device, int algorithm);
QSslKey* QSslKey_New4(void* handle);
QSslKey* QSslKey_New5(const QSslKey* other);
QSslKey* QSslKey_New6(const libqt_string encoded, int algorithm, int format);
QSslKey* QSslKey_New7(const libqt_string encoded, int algorithm, int format, int type);
QSslKey* QSslKey_New8(const libqt_string encoded, int algorithm, int format, int type, const libqt_string passPhrase);
QSslKey* QSslKey_New9(QIODevice* device, int algorithm, int format);
QSslKey* QSslKey_New10(QIODevice* device, int algorithm, int format, int type);
QSslKey* QSslKey_New11(QIODevice* device, int algorithm, int format, int type, const libqt_string passPhrase);
QSslKey* QSslKey_New12(void* handle, int type);
void QSslKey_OperatorAssign(QSslKey* self, const QSslKey* other);
void QSslKey_Swap(QSslKey* self, QSslKey* other);
bool QSslKey_IsNull(const QSslKey* self);
void QSslKey_Clear(QSslKey* self);
int QSslKey_Length(const QSslKey* self);
int QSslKey_Type(const QSslKey* self);
int QSslKey_Algorithm(const QSslKey* self);
libqt_string QSslKey_ToPem(const QSslKey* self);
libqt_string QSslKey_ToDer(const QSslKey* self);
void* QSslKey_Handle(const QSslKey* self);
bool QSslKey_OperatorEqual(const QSslKey* self, const QSslKey* key);
bool QSslKey_OperatorNotEqual(const QSslKey* self, const QSslKey* key);
libqt_string QSslKey_ToPem1(const QSslKey* self, const libqt_string passPhrase);
libqt_string QSslKey_ToDer1(const QSslKey* self, const libqt_string passPhrase);
void QSslKey_Delete(QSslKey* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
