#include "libqanystringview.hpp"
#include "libqbytearrayview.hpp"
#include <string.h>
#include "libquuid.hpp"
#include "libquuid.h"

/// https://doc.qt.io/qt-6/quuid.html

/// q_uuid_new constructs a new QUuid object.
///
/// ``` QUuid* other ```
QUuid* q_uuid_new(void* other) {
    return QUuid_new((QUuid*)other);
}

/// q_uuid_new2 constructs a new QUuid object and invalidates the source QUuid object.
///
/// ``` QUuid* other ```
QUuid* q_uuid_new2(void* other) {
    return QUuid_new2((QUuid*)other);
}

/// q_uuid_new3 constructs a new QUuid object.
///
///
QUuid* q_uuid_new3() {
    return QUuid_new3();
}

/// q_uuid_new4 constructs a new QUuid object.
///
/// ``` uint32_t l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8 ```
QUuid* q_uuid_new4(uint32_t l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8) {
    return QUuid_new4(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
}

/// q_uuid_new5 constructs a new QUuid object.
///
/// ``` const char* stringVal ```
QUuid* q_uuid_new5(const char* stringVal) {
    libqt_strview stringVal_strview = qstrview(stringVal);

    return QUuid_new5((QAnyStringView*)&stringVal_strview);
}

/// q_uuid_new6 constructs a new QUuid object.
///
/// ``` QUuid* param1 ```
QUuid* q_uuid_new6(void* param1) {
    return QUuid_new6((QUuid*)param1);
}

/// q_uuid_copy_assign shallow copies `other` into `self`.
///
/// ``` QUuid* self, QUuid* other ```
void q_uuid_copy_assign(void* self, void* other) {
    QUuid_CopyAssign((QUuid*)self, (QUuid*)other);
}

/// q_uuid_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QUuid* self, QUuid* other ```
void q_uuid_move_assign(void* self, void* other) {
    QUuid_MoveAssign((QUuid*)self, (QUuid*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#fromString)
///
/// ``` const char* stringVal ```
QUuid* q_uuid_from_string(const char* stringVal) {
    libqt_strview stringVal_strview = qstrview(stringVal);
    return QUuid_FromString((QAnyStringView*)&stringVal_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toString)
///
/// ``` QUuid* self ```
const char* q_uuid_to_string(void* self) {
    libqt_string _str = QUuid_ToString((QUuid*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toByteArray)
///
/// ``` QUuid* self ```
char* q_uuid_to_byte_array(void* self) {
    libqt_string _str = QUuid_ToByteArray((QUuid*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toRfc4122)
///
/// ``` QUuid* self ```
char* q_uuid_to_rfc4122(void* self) {
    libqt_string _str = QUuid_ToRfc4122((QUuid*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#fromRfc4122)
///
/// ``` const char* param1 ```
QUuid* q_uuid_from_rfc4122(const char* param1) {
    libqt_strview param1_strview = qstrview(param1);
    return QUuid_FromRfc4122((QByteArrayView*)&param1_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#isNull)
///
/// ``` QUuid* self ```
bool q_uuid_is_null(void* self) {
    return QUuid_IsNull((QUuid*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#operator==)
///
/// ``` QUuid* self, QUuid* orig ```
bool q_uuid_operator_equal(void* self, void* orig) {
    return QUuid_OperatorEqual((QUuid*)self, (QUuid*)orig);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#operator!=)
///
/// ``` QUuid* self, QUuid* orig ```
bool q_uuid_operator_not_equal(void* self, void* orig) {
    return QUuid_OperatorNotEqual((QUuid*)self, (QUuid*)orig);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#operator<)
///
/// ``` QUuid* self, QUuid* other ```
bool q_uuid_operator_lesser(void* self, void* other) {
    return QUuid_OperatorLesser((QUuid*)self, (QUuid*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#operator>)
///
/// ``` QUuid* self, QUuid* other ```
bool q_uuid_operator_greater(void* self, void* other) {
    return QUuid_OperatorGreater((QUuid*)self, (QUuid*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuid)
///
///
QUuid* q_uuid_create_uuid() {
    return QUuid_CreateUuid();
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
///
/// ``` QUuid* ns, const char* baseData ```
QUuid* q_uuid_create_uuid_v3(void* ns, const char* baseData) {
    return QUuid_CreateUuidV3((QUuid*)ns, qstring(baseData));
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
///
/// ``` QUuid* ns, const char* baseData ```
QUuid* q_uuid_create_uuid_v5(void* ns, const char* baseData) {
    return QUuid_CreateUuidV5((QUuid*)ns, qstring(baseData));
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
///
/// ``` QUuid* ns, const char* baseData ```
QUuid* q_uuid_create_uuid_v32(void* ns, const char* baseData) {
    return QUuid_CreateUuidV32((QUuid*)ns, qstring(baseData));
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
///
/// ``` QUuid* ns, const char* baseData ```
QUuid* q_uuid_create_uuid_v52(void* ns, const char* baseData) {
    return QUuid_CreateUuidV52((QUuid*)ns, qstring(baseData));
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#variant)
///
/// ``` QUuid* self ```
int64_t q_uuid_variant(void* self) {
    return QUuid_Variant((QUuid*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#version)
///
/// ``` QUuid* self ```
int64_t q_uuid_version(void* self) {
    return QUuid_Version((QUuid*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toString)
///
/// ``` QUuid* self, enum QUuid__StringFormat mode ```
const char* q_uuid_to_string1(void* self, int64_t mode) {
    libqt_string _str = QUuid_ToString1((QUuid*)self, mode);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toByteArray)
///
/// ``` QUuid* self, enum QUuid__StringFormat mode ```
char* q_uuid_to_byte_array1(void* self, int64_t mode) {
    libqt_string _str = QUuid_ToByteArray1((QUuid*)self, mode);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QUuid* self ```
void q_uuid_delete(void* self) {
    QUuid_Delete((QUuid*)(self));
}