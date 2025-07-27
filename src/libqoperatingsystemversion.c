#include "libqversionnumber.hpp"
#include "libqoperatingsystemversion.hpp"
#include "libqoperatingsystemversion.h"

QOperatingSystemVersionBase* q_operatingsystemversionbase_new(int64_t osType, int vmajor) {
    return QOperatingSystemVersionBase_new(osType, vmajor);
}

QOperatingSystemVersionBase* q_operatingsystemversionbase_new2(void* param1) {
    return QOperatingSystemVersionBase_new2((QOperatingSystemVersionBase*)param1);
}

QOperatingSystemVersionBase* q_operatingsystemversionbase_new3(int64_t osType, int vmajor, int vminor) {
    return QOperatingSystemVersionBase_new3(osType, vmajor, vminor);
}

QOperatingSystemVersionBase* q_operatingsystemversionbase_new4(int64_t osType, int vmajor, int vminor, int vmicro) {
    return QOperatingSystemVersionBase_new4(osType, vmajor, vminor, vmicro);
}

QOperatingSystemVersionBase* q_operatingsystemversionbase_current() {
    return QOperatingSystemVersionBase_Current();
}

const char* q_operatingsystemversionbase_name(void* osversion) {
    libqt_string _str = QOperatingSystemVersionBase_Name((QOperatingSystemVersionBase*)osversion);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_operatingsystemversionbase_current_type() {
    return QOperatingSystemVersionBase_CurrentType();
}

QVersionNumber* q_operatingsystemversionbase_version(void* self) {
    return QOperatingSystemVersionBase_Version((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversionbase_major_version(void* self) {
    return QOperatingSystemVersionBase_MajorVersion((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversionbase_minor_version(void* self) {
    return QOperatingSystemVersionBase_MinorVersion((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversionbase_micro_version(void* self) {
    return QOperatingSystemVersionBase_MicroVersion((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversionbase_segment_count(void* self) {
    return QOperatingSystemVersionBase_SegmentCount((QOperatingSystemVersionBase*)self);
}

int64_t q_operatingsystemversionbase_type(void* self) {
    return QOperatingSystemVersionBase_Type((QOperatingSystemVersionBase*)self);
}

const char* q_operatingsystemversionbase_name2(void* self) {
    libqt_string _str = QOperatingSystemVersionBase_Name2((QOperatingSystemVersionBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_operatingsystemversionbase_delete(void* self) {
    QOperatingSystemVersionBase_Delete((QOperatingSystemVersionBase*)(self));
}

QOperatingSystemVersionUnexported* q_operatingsystemversionunexported_new(void* other) {
    return QOperatingSystemVersionUnexported_new((QOperatingSystemVersionBase*)other);
}

QOperatingSystemVersionUnexported* q_operatingsystemversionunexported_new2() {
    return QOperatingSystemVersionUnexported_new2();
}

QOperatingSystemVersionUnexported* q_operatingsystemversionunexported_new3(void* param1) {
    return QOperatingSystemVersionUnexported_new3((QOperatingSystemVersionUnexported*)param1);
}

QOperatingSystemVersionBase* q_operatingsystemversionunexported_current() {
    return QOperatingSystemVersionBase_Current();
}

const char* q_operatingsystemversionunexported_name(void* osversion) {
    libqt_string _str = QOperatingSystemVersionBase_Name((QOperatingSystemVersionBase*)osversion);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_operatingsystemversionunexported_current_type() {
    return QOperatingSystemVersionBase_CurrentType();
}

QVersionNumber* q_operatingsystemversionunexported_version(void* self) {
    return QOperatingSystemVersionBase_Version((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversionunexported_major_version(void* self) {
    return QOperatingSystemVersionBase_MajorVersion((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversionunexported_minor_version(void* self) {
    return QOperatingSystemVersionBase_MinorVersion((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversionunexported_micro_version(void* self) {
    return QOperatingSystemVersionBase_MicroVersion((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversionunexported_segment_count(void* self) {
    return QOperatingSystemVersionBase_SegmentCount((QOperatingSystemVersionBase*)self);
}

int64_t q_operatingsystemversionunexported_type(void* self) {
    return QOperatingSystemVersionBase_Type((QOperatingSystemVersionBase*)self);
}

const char* q_operatingsystemversionunexported_name2(void* self) {
    libqt_string _str = QOperatingSystemVersionBase_Name2((QOperatingSystemVersionBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_operatingsystemversionunexported_delete(void* self) {
    QOperatingSystemVersionUnexported_Delete((QOperatingSystemVersionUnexported*)(self));
}

QOperatingSystemVersion* q_operatingsystemversion_new(void* osversion) {
    return QOperatingSystemVersion_new((QOperatingSystemVersionBase*)osversion);
}

QOperatingSystemVersion* q_operatingsystemversion_new2(int64_t osType, int vmajor) {
    return QOperatingSystemVersion_new2(osType, vmajor);
}

QOperatingSystemVersion* q_operatingsystemversion_new3(void* param1) {
    return QOperatingSystemVersion_new3((QOperatingSystemVersion*)param1);
}

QOperatingSystemVersion* q_operatingsystemversion_new4(int64_t osType, int vmajor, int vminor) {
    return QOperatingSystemVersion_new4(osType, vmajor, vminor);
}

QOperatingSystemVersion* q_operatingsystemversion_new5(int64_t osType, int vmajor, int vminor, int vmicro) {
    return QOperatingSystemVersion_new5(osType, vmajor, vminor, vmicro);
}

int64_t q_operatingsystemversion_current_type() {
    return QOperatingSystemVersion_CurrentType();
}

int64_t q_operatingsystemversion_type(void* self) {
    return QOperatingSystemVersion_Type((QOperatingSystemVersion*)self);
}

QOperatingSystemVersionBase* q_operatingsystemversion_current() {
    return QOperatingSystemVersionBase_Current();
}

const char* q_operatingsystemversion_name(void* osversion) {
    libqt_string _str = QOperatingSystemVersionBase_Name((QOperatingSystemVersionBase*)osversion);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVersionNumber* q_operatingsystemversion_version(void* self) {
    return QOperatingSystemVersionBase_Version((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversion_major_version(void* self) {
    return QOperatingSystemVersionBase_MajorVersion((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversion_minor_version(void* self) {
    return QOperatingSystemVersionBase_MinorVersion((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversion_micro_version(void* self) {
    return QOperatingSystemVersionBase_MicroVersion((QOperatingSystemVersionBase*)self);
}

int32_t q_operatingsystemversion_segment_count(void* self) {
    return QOperatingSystemVersionBase_SegmentCount((QOperatingSystemVersionBase*)self);
}

const char* q_operatingsystemversion_name2(void* self) {
    libqt_string _str = QOperatingSystemVersionBase_Name2((QOperatingSystemVersionBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_operatingsystemversion_delete(void* self) {
    QOperatingSystemVersion_Delete((QOperatingSystemVersion*)(self));
}
