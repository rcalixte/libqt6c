#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORSTREAMWRITER_H
#define SRC_CBORQT6C_LIBQCBORSTREAMWRITER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcborstreamwriter.html

/// q_cborstreamwriter_new constructs a new QCborStreamWriter object.
///
/// @param device QIODevice*
QCborStreamWriter* q_cborstreamwriter_new(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#setDevice)
///
/// @param self QCborStreamWriter*
/// @param device QIODevice*
void q_cborstreamwriter_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#device)
///
/// @param self QCborStreamWriter*
QIODevice* q_cborstreamwriter_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param u uint64_t
void q_cborstreamwriter_append(void* self, uint64_t u);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param i long long
void q_cborstreamwriter_append2(void* self, long long i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param n enum QCborStreamWriter__QCborNegativeInteger
void q_cborstreamwriter_append3(void* self, uint64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param ba const char*
void q_cborstreamwriter_append4(void* self, const char* ba);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param tag enum QCborStreamWriter__QCborTag
void q_cborstreamwriter_append7(void* self, uint64_t tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param tag enum QCborStreamWriter__QCborKnownTags
void q_cborstreamwriter_append8(void* self, int32_t tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param st enum QCborStreamWriter__QCborSimpleType
void q_cborstreamwriter_append9(void* self, uint8_t st);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param f float
void q_cborstreamwriter_append12(void* self, float f);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param d double
void q_cborstreamwriter_append13(void* self, double d);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendByteString)
///
/// @param self QCborStreamWriter*
/// @param data const char*
/// @param lenVal int64_t
void q_cborstreamwriter_append_byte_string(void* self, const char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendTextString)
///
/// @param self QCborStreamWriter*
/// @param utf8 const char*
/// @param lenVal int64_t
void q_cborstreamwriter_append_text_string(void* self, const char* utf8, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param b bool
void q_cborstreamwriter_append14(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendNull)
///
/// @param self QCborStreamWriter*
void q_cborstreamwriter_append_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#appendUndefined)
///
/// @param self QCborStreamWriter*
void q_cborstreamwriter_append_undefined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param i int
void q_cborstreamwriter_append15(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param u uint32_t
void q_cborstreamwriter_append16(void* self, uint32_t u);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param str const char*
void q_cborstreamwriter_append17(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#startArray)
///
/// @param self QCborStreamWriter*
void q_cborstreamwriter_start_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#startArray)
///
/// @param self QCborStreamWriter*
/// @param count uint64_t
void q_cborstreamwriter_start_array2(void* self, uint64_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#endArray)
///
/// @param self QCborStreamWriter*
bool q_cborstreamwriter_end_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#startMap)
///
/// @param self QCborStreamWriter*
void q_cborstreamwriter_start_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#startMap)
///
/// @param self QCborStreamWriter*
/// @param count uint64_t
void q_cborstreamwriter_start_map2(void* self, uint64_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#endMap)
///
/// @param self QCborStreamWriter*
bool q_cborstreamwriter_end_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#append)
///
/// @param self QCborStreamWriter*
/// @param str const char*
/// @param size int64_t
void q_cborstreamwriter_append22(void* self, const char* str, int64_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborstreamwriter.html#dtor.QCborStreamWriter)
///
/// Delete this object from C++ memory.
///
/// @param self QCborStreamWriter*
void q_cborstreamwriter_delete(void* self);

#endif
