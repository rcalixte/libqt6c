#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORSTREAMWRITER_H
#define SRC_CBORQT6C_LIBQCBORSTREAMWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqiodevice.h"

/// https://doc.qt.io/qt-6/qcborstreamwriter.html

/// q_cborstreamwriter_new constructs a new QCborStreamWriter object.
///
/// ``` QIODevice* device ```
QCborStreamWriter* q_cborstreamwriter_new(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#setDevice)
///
/// ``` QCborStreamWriter* self, QIODevice* device ```
void q_cborstreamwriter_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#device)
///
/// ``` QCborStreamWriter* self ```
QIODevice* q_cborstreamwriter_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, uint64_t u ```
void q_cborstreamwriter_append(void* self, uint64_t u);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, long long i ```
void q_cborstreamwriter_append_with_qint64(void* self, long long i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, enum QCborStreamWriter__QCborNegativeInteger n ```
void q_cborstreamwriter_append_with_q_cbor_negative_integer(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, const char* ba ```
void q_cborstreamwriter_append_with_ba(void* self, const char* ba);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, enum QCborStreamWriter__QCborTag tag ```
void q_cborstreamwriter_append_with_tag(void* self, int64_t tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, enum QCborStreamWriter__QCborKnownTags tag ```
void q_cborstreamwriter_append3(void* self, int64_t tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, enum QCborStreamWriter__QCborSimpleType st ```
void q_cborstreamwriter_append_with_st(void* self, int64_t st);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, float f ```
void q_cborstreamwriter_append_with_float(void* self, float f);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, double d ```
void q_cborstreamwriter_append_with_double(void* self, double d);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendByteString)
///
/// ``` QCborStreamWriter* self, const char* data, int64_t lenVal ```
void q_cborstreamwriter_append_byte_string(void* self, const char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendTextString)
///
/// ``` QCborStreamWriter* self, const char* utf8, int64_t lenVal ```
void q_cborstreamwriter_append_text_string(void* self, const char* utf8, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, bool b ```
void q_cborstreamwriter_append_with_bool(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendNull)
///
/// ``` QCborStreamWriter* self ```
void q_cborstreamwriter_append_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendUndefined)
///
/// ``` QCborStreamWriter* self ```
void q_cborstreamwriter_append_undefined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, int i ```
void q_cborstreamwriter_append_with_int(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, uint32_t u ```
void q_cborstreamwriter_append_with_uint(void* self, uint32_t u);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, const char* str ```
void q_cborstreamwriter_append4(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#startArray)
///
/// ``` QCborStreamWriter* self ```
void q_cborstreamwriter_start_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#startArray)
///
/// ``` QCborStreamWriter* self, uint64_t count ```
void q_cborstreamwriter_start_array_with_count(void* self, uint64_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#endArray)
///
/// ``` QCborStreamWriter* self ```
bool q_cborstreamwriter_end_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#startMap)
///
/// ``` QCborStreamWriter* self ```
void q_cborstreamwriter_start_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#startMap)
///
/// ``` QCborStreamWriter* self, uint64_t count ```
void q_cborstreamwriter_start_map_with_count(void* self, uint64_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#endMap)
///
/// ``` QCborStreamWriter* self ```
bool q_cborstreamwriter_end_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// ``` QCborStreamWriter* self, const char* str, int64_t size ```
void q_cborstreamwriter_append22(void* self, const char* str, int64_t size);

/// Delete this object from C++ memory.
///
/// ``` QCborStreamWriter* self ```
void q_cborstreamwriter_delete(void* self);

#endif
