#include "libqanystringview.hpp"
#include "libqversionnumber.hpp"
#include "libqversionnumber.h"

QVersionNumber* q_versionnumber_new() {
    return QVersionNumber_new();
}

QVersionNumber* q_versionnumber_new2(libqt_list args) {
    return QVersionNumber_new2(args);
}

QVersionNumber* q_versionnumber_new3(int maj) {
    return QVersionNumber_new3(maj);
}

QVersionNumber* q_versionnumber_new4(int maj, int min) {
    return QVersionNumber_new4(maj, min);
}

QVersionNumber* q_versionnumber_new5(int maj, int min, int mic) {
    return QVersionNumber_new5(maj, min, mic);
}

QVersionNumber* q_versionnumber_new6(void* param1) {
    return QVersionNumber_new6((QVersionNumber*)param1);
}

bool q_versionnumber_is_null(void* self) {
    return QVersionNumber_IsNull((QVersionNumber*)self);
}

bool q_versionnumber_is_normalized(void* self) {
    return QVersionNumber_IsNormalized((QVersionNumber*)self);
}

int32_t q_versionnumber_major_version(void* self) {
    return QVersionNumber_MajorVersion((QVersionNumber*)self);
}

int32_t q_versionnumber_minor_version(void* self) {
    return QVersionNumber_MinorVersion((QVersionNumber*)self);
}

int32_t q_versionnumber_micro_version(void* self) {
    return QVersionNumber_MicroVersion((QVersionNumber*)self);
}

QVersionNumber* q_versionnumber_normalized(void* self) {
    return QVersionNumber_Normalized((QVersionNumber*)self);
}

libqt_list /* of int */ q_versionnumber_segments(void* self) {
    libqt_list _arr = QVersionNumber_Segments((QVersionNumber*)self);
    return _arr;
}

int32_t q_versionnumber_segment_at(void* self, int64_t index) {
    return QVersionNumber_SegmentAt((QVersionNumber*)self, index);
}

int64_t q_versionnumber_segment_count(void* self) {
    return QVersionNumber_SegmentCount((QVersionNumber*)self);
}

bool q_versionnumber_is_prefix_of(void* self, void* other) {
    return QVersionNumber_IsPrefixOf((QVersionNumber*)self, (QVersionNumber*)other);
}

int32_t q_versionnumber_compare(void* v1, void* v2) {
    return QVersionNumber_Compare((QVersionNumber*)v1, (QVersionNumber*)v2);
}

QVersionNumber* q_versionnumber_common_prefix(void* v1, void* v2) {
    return QVersionNumber_CommonPrefix((QVersionNumber*)v1, (QVersionNumber*)v2);
}

const char* q_versionnumber_to_string(void* self) {
    libqt_string _str = QVersionNumber_ToString((QVersionNumber*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVersionNumber* q_versionnumber_from_string(char* stringVal) {
    return QVersionNumber_FromString(stringVal);
}

#if defined(__linux__) || defined(__FreeBSD__)
QVersionNumber* q_versionnumber_from_string2(char* stringVal, int64_t* suffixIndex) {
    return QVersionNumber_FromString2(stringVal, suffixIndex);
}
#endif

void q_versionnumber_delete(void* self) {
    QVersionNumber_Delete((QVersionNumber*)(self));
}
