#include "libqanystringview.hpp"
#include <string.h>
#include "libqversionnumber.hpp"
#include "libqversionnumber.h"

QVersionNumber* q_versionnumber_new() {
    return QVersionNumber_new();
}

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

QVersionNumber* q_versionnumber_from_string(const char* stringVal) {
    libqt_strview stringVal_strview = qstrview(stringVal);
    return QVersionNumber_FromString((QAnyStringView*)&stringVal_strview);
}

QVersionNumber* q_versionnumber_from_string2(const char* stringVal, int64_t* suffixIndex) {
    libqt_strview stringVal_strview = qstrview(stringVal);
    return QVersionNumber_FromString2((QAnyStringView*)&stringVal_strview, suffixIndex);
}

void q_versionnumber_delete(void* self) {
    QVersionNumber_Delete((QVersionNumber*)(self));
}

QTypeRevision* q_typerevision_new(void* other) {
    return QTypeRevision_new((QTypeRevision*)other);
}

QTypeRevision* q_typerevision_new2(void* other) {
    return QTypeRevision_new2((QTypeRevision*)other);
}

QTypeRevision* q_typerevision_new3() {
    return QTypeRevision_new3();
}

QTypeRevision* q_typerevision_new4(void* param1) {
    return QTypeRevision_new4((QTypeRevision*)param1);
}

void q_typerevision_copy_assign(void* self, void* other) {
    QTypeRevision_CopyAssign((QTypeRevision*)self, (QTypeRevision*)other);
}

void q_typerevision_move_assign(void* self, void* other) {
    QTypeRevision_MoveAssign((QTypeRevision*)self, (QTypeRevision*)other);
}

QTypeRevision* q_typerevision_zero() {
    return QTypeRevision_Zero();
}

bool q_typerevision_has_major_version(void* self) {
    return QTypeRevision_HasMajorVersion((QTypeRevision*)self);
}

unsigned char q_typerevision_major_version(void* self) {
    return QTypeRevision_MajorVersion((QTypeRevision*)self);
}

bool q_typerevision_has_minor_version(void* self) {
    return QTypeRevision_HasMinorVersion((QTypeRevision*)self);
}

unsigned char q_typerevision_minor_version(void* self) {
    return QTypeRevision_MinorVersion((QTypeRevision*)self);
}

bool q_typerevision_is_valid(void* self) {
    return QTypeRevision_IsValid((QTypeRevision*)self);
}

void q_typerevision_delete(void* self) {
    QTypeRevision_Delete((QTypeRevision*)(self));
}
