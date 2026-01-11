#include "../libqvariant.hpp"
#include "libqmediametadata.hpp"
#include "libqmediametadata.h"

QMediaMetaData* q_mediametadata_new(void* param1) {
    return QMediaMetaData_new((QMediaMetaData*)param1);
}

QMediaMetaData* q_mediametadata_new2() {
    return QMediaMetaData_new2();
}

QVariant* q_mediametadata_value(void* self, int32_t k) {
    return QMediaMetaData_Value((QMediaMetaData*)self, k);
}

void q_mediametadata_insert(void* self, int32_t k, void* value) {
    QMediaMetaData_Insert((QMediaMetaData*)self, k, (QVariant*)value);
}

void q_mediametadata_remove(void* self, int32_t k) {
    QMediaMetaData_Remove((QMediaMetaData*)self, k);
}

libqt_list /* of enum QMediaMetaData__Key */ q_mediametadata_keys(void* self) {
    libqt_list _arr = QMediaMetaData_Keys((QMediaMetaData*)self);
    return _arr;
}

QVariant* q_mediametadata_operator_subscript(void* self, int32_t k) {
    return QMediaMetaData_OperatorSubscript((QMediaMetaData*)self, k);
}

void q_mediametadata_clear(void* self) {
    QMediaMetaData_Clear((QMediaMetaData*)self);
}

bool q_mediametadata_is_empty(void* self) {
    return QMediaMetaData_IsEmpty((QMediaMetaData*)self);
}

const char* q_mediametadata_string_value(void* self, int32_t k) {
    libqt_string _str = QMediaMetaData_StringValue((QMediaMetaData*)self, k);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediametadata_meta_data_key_to_string(int32_t k) {
    libqt_string _str = QMediaMetaData_MetaDataKeyToString(k);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mediametadata_delete(void* self) {
    QMediaMetaData_Delete((QMediaMetaData*)(self));
}
