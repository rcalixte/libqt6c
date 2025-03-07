#include <string.h>
#include "libqversionnumber.hpp"
#include "libqoperatingsystemversion.hpp"
#include "libqoperatingsystemversion.h"

/// https://doc.qt.io/qt-6/qoperatingsystemversionbase.html

/// q_operatingsystemversionbase_new constructs a new QOperatingSystemVersionBase object.
///
/// ``` enum QOperatingSystemVersionBase__OSType osType, int vmajor ```
QOperatingSystemVersionBase* q_operatingsystemversionbase_new(int64_t osType, int vmajor) {
    return QOperatingSystemVersionBase_new(osType, vmajor);
}

/// q_operatingsystemversionbase_new2 constructs a new QOperatingSystemVersionBase object.
///
/// ``` QOperatingSystemVersionBase* param1 ```
QOperatingSystemVersionBase* q_operatingsystemversionbase_new2(void* param1) {
    return QOperatingSystemVersionBase_new2((QOperatingSystemVersionBase*)param1);
}

/// q_operatingsystemversionbase_new3 constructs a new QOperatingSystemVersionBase object.
///
/// ``` enum QOperatingSystemVersionBase__OSType osType, int vmajor, int vminor ```
QOperatingSystemVersionBase* q_operatingsystemversionbase_new3(int64_t osType, int vmajor, int vminor) {
    return QOperatingSystemVersionBase_new3(osType, vmajor, vminor);
}

/// q_operatingsystemversionbase_new4 constructs a new QOperatingSystemVersionBase object.
///
/// ``` enum QOperatingSystemVersionBase__OSType osType, int vmajor, int vminor, int vmicro ```
QOperatingSystemVersionBase* q_operatingsystemversionbase_new4(int64_t osType, int vmajor, int vminor, int vmicro) {
    return QOperatingSystemVersionBase_new4(osType, vmajor, vminor, vmicro);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
///
///
QOperatingSystemVersionBase* q_operatingsystemversionbase_current() {
    return QOperatingSystemVersionBase_Current();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// ``` QOperatingSystemVersionBase* osversion ```
const char* q_operatingsystemversionbase_name(void* osversion) {
    libqt_string _str = QOperatingSystemVersionBase_Name((QOperatingSystemVersionBase*)osversion);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#currentType)
///
///
int64_t q_operatingsystemversionbase_current_type() {
    return QOperatingSystemVersionBase_CurrentType();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
///
/// ``` QOperatingSystemVersionBase* self ```
QVersionNumber* q_operatingsystemversionbase_version(void* self) {
    return QOperatingSystemVersionBase_Version((QOperatingSystemVersionBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
///
/// ``` QOperatingSystemVersionBase* self ```
int32_t q_operatingsystemversionbase_major_version(void* self) {
    return QOperatingSystemVersionBase_MajorVersion((QOperatingSystemVersionBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
///
/// ``` QOperatingSystemVersionBase* self ```
int32_t q_operatingsystemversionbase_minor_version(void* self) {
    return QOperatingSystemVersionBase_MinorVersion((QOperatingSystemVersionBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
///
/// ``` QOperatingSystemVersionBase* self ```
int32_t q_operatingsystemversionbase_micro_version(void* self) {
    return QOperatingSystemVersionBase_MicroVersion((QOperatingSystemVersionBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
///
/// ``` QOperatingSystemVersionBase* self ```
int32_t q_operatingsystemversionbase_segment_count(void* self) {
    return QOperatingSystemVersionBase_SegmentCount((QOperatingSystemVersionBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#type)
///
/// ``` QOperatingSystemVersionBase* self ```
int64_t q_operatingsystemversionbase_type(void* self) {
    return QOperatingSystemVersionBase_Type((QOperatingSystemVersionBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// ``` QOperatingSystemVersionBase* self ```
const char* q_operatingsystemversionbase_name2(void* self) {
    libqt_string _str = QOperatingSystemVersionBase_Name2((QOperatingSystemVersionBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QOperatingSystemVersionBase* self ```
void q_operatingsystemversionbase_delete(void* self) {
    QOperatingSystemVersionBase_Delete((QOperatingSystemVersionBase*)(self));
}

/// https://doc.qt.io/qt-6/qoperatingsystemversion.html

/// q_operatingsystemversion_new constructs a new QOperatingSystemVersion object.
///
/// ``` QOperatingSystemVersionBase* osversion ```
QOperatingSystemVersion* q_operatingsystemversion_new(void* osversion) {
    return QOperatingSystemVersion_new((QOperatingSystemVersionBase*)osversion);
}

/// q_operatingsystemversion_new2 constructs a new QOperatingSystemVersion object.
///
/// ``` enum QOperatingSystemVersion__OSType osType, int vmajor ```
QOperatingSystemVersion* q_operatingsystemversion_new2(int64_t osType, int vmajor) {
    return QOperatingSystemVersion_new2(osType, vmajor);
}

/// q_operatingsystemversion_new3 constructs a new QOperatingSystemVersion object.
///
/// ``` QOperatingSystemVersion* param1 ```
QOperatingSystemVersion* q_operatingsystemversion_new3(void* param1) {
    return QOperatingSystemVersion_new3((QOperatingSystemVersion*)param1);
}

/// q_operatingsystemversion_new4 constructs a new QOperatingSystemVersion object.
///
/// ``` enum QOperatingSystemVersion__OSType osType, int vmajor, int vminor ```
QOperatingSystemVersion* q_operatingsystemversion_new4(int64_t osType, int vmajor, int vminor) {
    return QOperatingSystemVersion_new4(osType, vmajor, vminor);
}

/// q_operatingsystemversion_new5 constructs a new QOperatingSystemVersion object.
///
/// ``` enum QOperatingSystemVersion__OSType osType, int vmajor, int vminor, int vmicro ```
QOperatingSystemVersion* q_operatingsystemversion_new5(int64_t osType, int vmajor, int vminor, int vmicro) {
    return QOperatingSystemVersion_new5(osType, vmajor, vminor, vmicro);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#current)
///
///
QOperatingSystemVersion* q_operatingsystemversion_current() {
    return QOperatingSystemVersion_Current();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#currentType)
///
///
int64_t q_operatingsystemversion_current_type() {
    return QOperatingSystemVersion_CurrentType();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#version)
///
/// ``` QOperatingSystemVersion* self ```
QVersionNumber* q_operatingsystemversion_version(void* self) {
    return QOperatingSystemVersion_Version((QOperatingSystemVersion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#majorVersion)
///
/// ``` QOperatingSystemVersion* self ```
int32_t q_operatingsystemversion_major_version(void* self) {
    return QOperatingSystemVersion_MajorVersion((QOperatingSystemVersion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#minorVersion)
///
/// ``` QOperatingSystemVersion* self ```
int32_t q_operatingsystemversion_minor_version(void* self) {
    return QOperatingSystemVersion_MinorVersion((QOperatingSystemVersion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#microVersion)
///
/// ``` QOperatingSystemVersion* self ```
int32_t q_operatingsystemversion_micro_version(void* self) {
    return QOperatingSystemVersion_MicroVersion((QOperatingSystemVersion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#segmentCount)
///
/// ``` QOperatingSystemVersion* self ```
int32_t q_operatingsystemversion_segment_count(void* self) {
    return QOperatingSystemVersion_SegmentCount((QOperatingSystemVersion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#type)
///
/// ``` QOperatingSystemVersion* self ```
int64_t q_operatingsystemversion_type(void* self) {
    return QOperatingSystemVersion_Type((QOperatingSystemVersion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#name)
///
/// ``` QOperatingSystemVersion* self ```
const char* q_operatingsystemversion_name(void* self) {
    libqt_string _str = QOperatingSystemVersion_Name((QOperatingSystemVersion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// ``` QOperatingSystemVersion* self ```
const char* q_operatingsystemversion_name2(void* self) {
    libqt_string _str = QOperatingSystemVersionBase_Name2((QOperatingSystemVersionBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QOperatingSystemVersion* self ```
void q_operatingsystemversion_delete(void* self) {
    QOperatingSystemVersion_Delete((QOperatingSystemVersion*)(self));
}