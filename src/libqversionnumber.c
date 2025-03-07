#include "libqanystringview.hpp"
#include <string.h>
#include "libqversionnumber.hpp"
#include "libqversionnumber.h"

/// https://doc.qt.io/qt-6/qversionnumber.html

/// q_versionnumber_new constructs a new QVersionNumber object.
///
///
QVersionNumber* q_versionnumber_new() {
    return QVersionNumber_new();
}

/// q_versionnumber_new2 constructs a new QVersionNumber object.
///
/// ``` int* seg[] ```
QVersionNumber* q_versionnumber_new2(int* seg[]) {
    size_t seg_len = 0;
    while (seg[seg_len] != NULL) {
        seg_len++;
    }
    libqt_list seg_list = {
        .len = seg_len,
        .data = {(int*)seg},
    };

    return QVersionNumber_new2(seg_list);
}

/// q_versionnumber_new3 constructs a new QVersionNumber object.
///
/// ``` int maj ```
QVersionNumber* q_versionnumber_new3(int maj) {
    return QVersionNumber_new3(maj);
}

/// q_versionnumber_new4 constructs a new QVersionNumber object.
///
/// ``` int maj, int min ```
QVersionNumber* q_versionnumber_new4(int maj, int min) {
    return QVersionNumber_new4(maj, min);
}

/// q_versionnumber_new5 constructs a new QVersionNumber object.
///
/// ``` int maj, int min, int mic ```
QVersionNumber* q_versionnumber_new5(int maj, int min, int mic) {
    return QVersionNumber_new5(maj, min, mic);
}

/// q_versionnumber_new6 constructs a new QVersionNumber object.
///
/// ``` QVersionNumber* param1 ```
QVersionNumber* q_versionnumber_new6(void* param1) {
    return QVersionNumber_new6((QVersionNumber*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isNull)
///
/// ``` QVersionNumber* self ```
bool q_versionnumber_is_null(void* self) {
    return QVersionNumber_IsNull((QVersionNumber*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isNormalized)
///
/// ``` QVersionNumber* self ```
bool q_versionnumber_is_normalized(void* self) {
    return QVersionNumber_IsNormalized((QVersionNumber*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#majorVersion)
///
/// ``` QVersionNumber* self ```
int32_t q_versionnumber_major_version(void* self) {
    return QVersionNumber_MajorVersion((QVersionNumber*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#minorVersion)
///
/// ``` QVersionNumber* self ```
int32_t q_versionnumber_minor_version(void* self) {
    return QVersionNumber_MinorVersion((QVersionNumber*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#microVersion)
///
/// ``` QVersionNumber* self ```
int32_t q_versionnumber_micro_version(void* self) {
    return QVersionNumber_MicroVersion((QVersionNumber*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#normalized)
///
/// ``` QVersionNumber* self ```
QVersionNumber* q_versionnumber_normalized(void* self) {
    return QVersionNumber_Normalized((QVersionNumber*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segments)
///
/// ``` QVersionNumber* self ```
libqt_list /* of int */ q_versionnumber_segments(void* self) {
    libqt_list _arr = QVersionNumber_Segments((QVersionNumber*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segmentAt)
///
/// ``` QVersionNumber* self, int64_t index ```
int32_t q_versionnumber_segment_at(void* self, int64_t index) {
    return QVersionNumber_SegmentAt((QVersionNumber*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segmentCount)
///
/// ``` QVersionNumber* self ```
int64_t q_versionnumber_segment_count(void* self) {
    return QVersionNumber_SegmentCount((QVersionNumber*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isPrefixOf)
///
/// ``` QVersionNumber* self, QVersionNumber* other ```
bool q_versionnumber_is_prefix_of(void* self, void* other) {
    return QVersionNumber_IsPrefixOf((QVersionNumber*)self, (QVersionNumber*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#compare)
///
/// ``` QVersionNumber* v1, QVersionNumber* v2 ```
int32_t q_versionnumber_compare(void* v1, void* v2) {
    return QVersionNumber_Compare((QVersionNumber*)v1, (QVersionNumber*)v2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#commonPrefix)
///
/// ``` QVersionNumber* v1, QVersionNumber* v2 ```
QVersionNumber* q_versionnumber_common_prefix(void* v1, void* v2) {
    return QVersionNumber_CommonPrefix((QVersionNumber*)v1, (QVersionNumber*)v2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#toString)
///
/// ``` QVersionNumber* self ```
const char* q_versionnumber_to_string(void* self) {
    libqt_string _str = QVersionNumber_ToString((QVersionNumber*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
///
/// ``` const char* stringVal ```
QVersionNumber* q_versionnumber_from_string(const char* stringVal) {
    libqt_strview stringVal_strview = qstrview(stringVal);
    return QVersionNumber_FromString((QAnyStringView*)&stringVal_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
///
/// ``` const char* stringVal, int64_t* suffixIndex ```
QVersionNumber* q_versionnumber_from_string2(const char* stringVal, int64_t* suffixIndex) {
    libqt_strview stringVal_strview = qstrview(stringVal);
    return QVersionNumber_FromString2((QAnyStringView*)&stringVal_strview, suffixIndex);
}

/// Delete this object from C++ memory.
///
/// ``` QVersionNumber* self ```
void q_versionnumber_delete(void* self) {
    QVersionNumber_Delete((QVersionNumber*)(self));
}

/// https://doc.qt.io/qt-6/qtyperevision.html

/// q_typerevision_new constructs a new QTypeRevision object.
///
/// ``` QTypeRevision* other ```
QTypeRevision* q_typerevision_new(void* other) {
    return QTypeRevision_new((QTypeRevision*)other);
}

/// q_typerevision_new2 constructs a new QTypeRevision object and invalidates the source QTypeRevision object.
///
/// ``` QTypeRevision* other ```
QTypeRevision* q_typerevision_new2(void* other) {
    return QTypeRevision_new2((QTypeRevision*)other);
}

/// q_typerevision_new3 constructs a new QTypeRevision object.
///
///
QTypeRevision* q_typerevision_new3() {
    return QTypeRevision_new3();
}

/// q_typerevision_new4 constructs a new QTypeRevision object.
///
/// ``` QTypeRevision* param1 ```
QTypeRevision* q_typerevision_new4(void* param1) {
    return QTypeRevision_new4((QTypeRevision*)param1);
}

/// q_typerevision_copy_assign shallow copies `other` into `self`.
///
/// ``` QTypeRevision* self, QTypeRevision* other ```
void q_typerevision_copy_assign(void* self, void* other) {
    QTypeRevision_CopyAssign((QTypeRevision*)self, (QTypeRevision*)other);
}

/// q_typerevision_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTypeRevision* self, QTypeRevision* other ```
void q_typerevision_move_assign(void* self, void* other) {
    QTypeRevision_MoveAssign((QTypeRevision*)self, (QTypeRevision*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#zero)
///
///
QTypeRevision* q_typerevision_zero() {
    return QTypeRevision_Zero();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#hasMajorVersion)
///
/// ``` QTypeRevision* self ```
bool q_typerevision_has_major_version(void* self) {
    return QTypeRevision_HasMajorVersion((QTypeRevision*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#majorVersion)
///
/// ``` QTypeRevision* self ```
unsigned char q_typerevision_major_version(void* self) {
    return QTypeRevision_MajorVersion((QTypeRevision*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#hasMinorVersion)
///
/// ``` QTypeRevision* self ```
bool q_typerevision_has_minor_version(void* self) {
    return QTypeRevision_HasMinorVersion((QTypeRevision*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#minorVersion)
///
/// ``` QTypeRevision* self ```
unsigned char q_typerevision_minor_version(void* self) {
    return QTypeRevision_MinorVersion((QTypeRevision*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#isValid)
///
/// ``` QTypeRevision* self ```
bool q_typerevision_is_valid(void* self) {
    return QTypeRevision_IsValid((QTypeRevision*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QTypeRevision* self ```
void q_typerevision_delete(void* self) {
    QTypeRevision_Delete((QTypeRevision*)(self));
}