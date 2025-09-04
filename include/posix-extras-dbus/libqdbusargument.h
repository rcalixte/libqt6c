#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSARGUMENT_H
#define SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSARGUMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdbusargument.html

/// q_dbusargument_new constructs a new QDBusArgument object.
///
QDBusArgument* q_dbusargument_new();

/// q_dbusargument_new2 constructs a new QDBusArgument object.
///
/// @param other QDBusArgument*
QDBusArgument* q_dbusargument_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-eq)
///
/// @param self QDBusArgument*
/// @param other QDBusArgument*
void q_dbusargument_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#swap)
///
/// @param self QDBusArgument*
/// @param other QDBusArgument*
void q_dbusargument_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg unsigned char
QDBusArgument* q_dbusargument_operator_shift_left(void* self, unsigned char arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg bool
QDBusArgument* q_dbusargument_operator_shift_left2(void* self, bool arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg short
QDBusArgument* q_dbusargument_operator_shift_left3(void* self, short arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg unsigned short
QDBusArgument* q_dbusargument_operator_shift_left4(void* self, unsigned short arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg int
QDBusArgument* q_dbusargument_operator_shift_left5(void* self, int arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg uint32_t
QDBusArgument* q_dbusargument_operator_shift_left6(void* self, uint32_t arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg long long
QDBusArgument* q_dbusargument_operator_shift_left7(void* self, long long arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg uint64_t
QDBusArgument* q_dbusargument_operator_shift_left8(void* self, uint64_t arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg double
QDBusArgument* q_dbusargument_operator_shift_left9(void* self, double arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg const char*
QDBusArgument* q_dbusargument_operator_shift_left10(void* self, const char* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg QDBusVariant*
QDBusArgument* q_dbusargument_operator_shift_left11(void* self, void* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg QDBusObjectPath*
QDBusArgument* q_dbusargument_operator_shift_left12(void* self, void* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg QDBusSignature*
QDBusArgument* q_dbusargument_operator_shift_left13(void* self, void* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg QDBusUnixFileDescriptor*
QDBusArgument* q_dbusargument_operator_shift_left14(void* self, void* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg const char**
QDBusArgument* q_dbusargument_operator_shift_left15(void* self, const char* arg[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-lt-lt)
///
/// @param self QDBusArgument*
/// @param arg const char*
QDBusArgument* q_dbusargument_operator_shift_left16(void* self, const char* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginStructure)
///
/// @param self QDBusArgument*
void q_dbusargument_begin_structure(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endStructure)
///
/// @param self QDBusArgument*
void q_dbusargument_end_structure(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
///
/// @param self QDBusArgument*
/// @param elementMetaTypeId int
void q_dbusargument_begin_array(void* self, int elementMetaTypeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
///
/// @param self QDBusArgument*
/// @param elementMetaType QMetaType*
void q_dbusargument_begin_array2(void* self, void* elementMetaType);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endArray)
///
/// @param self QDBusArgument*
void q_dbusargument_end_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginMap)
///
/// @param self QDBusArgument*
/// @param keyMetaTypeId int
/// @param valueMetaTypeId int
void q_dbusargument_begin_map(void* self, int keyMetaTypeId, int valueMetaTypeId);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginMap)
///
/// @param self QDBusArgument*
/// @param keyMetaType QMetaType*
/// @param valueMetaType QMetaType*
void q_dbusargument_begin_map2(void* self, void* keyMetaType, void* valueMetaType);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endMap)
///
/// @param self QDBusArgument*
void q_dbusargument_end_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginMapEntry)
///
/// @param self QDBusArgument*
void q_dbusargument_begin_map_entry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endMapEntry)
///
/// @param self QDBusArgument*
void q_dbusargument_end_map_entry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#appendVariant)
///
/// @param self QDBusArgument*
/// @param v QVariant*
void q_dbusargument_append_variant(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#currentSignature)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusArgument*
const char* q_dbusargument_current_signature(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#currentType)
///
/// @param self QDBusArgument*
///
/// @return enum QDBusArgument__ElementType
int32_t q_dbusargument_current_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg unsigned char*
const QDBusArgument* q_dbusargument_operator_shift_right(void* self, unsigned char* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg bool*
const QDBusArgument* q_dbusargument_operator_shift_right2(void* self, bool* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg short*
const QDBusArgument* q_dbusargument_operator_shift_right3(void* self, short* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg unsigned short*
const QDBusArgument* q_dbusargument_operator_shift_right4(void* self, unsigned short* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg int*
const QDBusArgument* q_dbusargument_operator_shift_right5(void* self, int* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg uint32_t*
const QDBusArgument* q_dbusargument_operator_shift_right6(void* self, uint32_t* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg long long*
const QDBusArgument* q_dbusargument_operator_shift_right7(void* self, long long* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg uint64_t*
const QDBusArgument* q_dbusargument_operator_shift_right8(void* self, uint64_t* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg double*
const QDBusArgument* q_dbusargument_operator_shift_right9(void* self, double* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg const char*
const QDBusArgument* q_dbusargument_operator_shift_right10(void* self, const char* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg QDBusVariant*
const QDBusArgument* q_dbusargument_operator_shift_right11(void* self, void* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg QDBusObjectPath*
const QDBusArgument* q_dbusargument_operator_shift_right12(void* self, void* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg QDBusSignature*
const QDBusArgument* q_dbusargument_operator_shift_right13(void* self, void* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg QDBusUnixFileDescriptor*
const QDBusArgument* q_dbusargument_operator_shift_right14(void* self, void* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg const char**
const QDBusArgument* q_dbusargument_operator_shift_right15(void* self, const char* arg[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#operator-gt-gt)
///
/// @param self QDBusArgument*
/// @param arg char*
const QDBusArgument* q_dbusargument_operator_shift_right16(void* self, char* arg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginStructure)
///
/// @param self QDBusArgument*
void q_dbusargument_begin_structure2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endStructure)
///
/// @param self QDBusArgument*
void q_dbusargument_end_structure2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginArray)
///
/// @param self QDBusArgument*
void q_dbusargument_begin_array3(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endArray)
///
/// @param self QDBusArgument*
void q_dbusargument_end_array2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginMap)
///
/// @param self QDBusArgument*
void q_dbusargument_begin_map3(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endMap)
///
/// @param self QDBusArgument*
void q_dbusargument_end_map2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#beginMapEntry)
///
/// @param self QDBusArgument*
void q_dbusargument_begin_map_entry2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#endMapEntry)
///
/// @param self QDBusArgument*
void q_dbusargument_end_map_entry2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#atEnd)
///
/// @param self QDBusArgument*
bool q_dbusargument_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#asVariant)
///
/// @param self QDBusArgument*
QVariant* q_dbusargument_as_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusargument.html#dtor.QDBusArgument)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusArgument*
void q_dbusargument_delete(void* self);

/// https://doc.qt.io/qt-6/qdbusargument.html#types

typedef enum {
    QDBUSARGUMENT_ELEMENTTYPE_BASICTYPE = 0,
    QDBUSARGUMENT_ELEMENTTYPE_VARIANTTYPE = 1,
    QDBUSARGUMENT_ELEMENTTYPE_ARRAYTYPE = 2,
    QDBUSARGUMENT_ELEMENTTYPE_STRUCTURETYPE = 3,
    QDBUSARGUMENT_ELEMENTTYPE_MAPTYPE = 4,
    QDBUSARGUMENT_ELEMENTTYPE_MAPENTRYTYPE = 5,
    QDBUSARGUMENT_ELEMENTTYPE_UNKNOWNTYPE = -1
} QDBusArgument__ElementType;

#endif
