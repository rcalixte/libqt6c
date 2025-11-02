#include "libqdbusextratypes.hpp"
#include "libqdbusunixfiledescriptor.hpp"
#include "../libqmetatype.hpp"
#include "../libqvariant.hpp"
#include "libqdbusargument.hpp"
#include "libqdbusargument.h"

QDBusArgument* q_dbusargument_new() {
    return QDBusArgument_new();
}

QDBusArgument* q_dbusargument_new2(void* other) {
    return QDBusArgument_new2((QDBusArgument*)other);
}

void q_dbusargument_operator_assign(void* self, void* other) {
    QDBusArgument_OperatorAssign((QDBusArgument*)self, (QDBusArgument*)other);
}

void q_dbusargument_swap(void* self, void* other) {
    QDBusArgument_Swap((QDBusArgument*)self, (QDBusArgument*)other);
}

QDBusArgument* q_dbusargument_operator_shift_left(void* self, unsigned char arg) {
    return QDBusArgument_OperatorShiftLeft((QDBusArgument*)self, arg);
}

QDBusArgument* q_dbusargument_operator_shift_left2(void* self, bool arg) {
    return QDBusArgument_OperatorShiftLeft2((QDBusArgument*)self, arg);
}

QDBusArgument* q_dbusargument_operator_shift_left3(void* self, short arg) {
    return QDBusArgument_OperatorShiftLeft3((QDBusArgument*)self, arg);
}

QDBusArgument* q_dbusargument_operator_shift_left4(void* self, unsigned short arg) {
    return QDBusArgument_OperatorShiftLeft4((QDBusArgument*)self, arg);
}

QDBusArgument* q_dbusargument_operator_shift_left5(void* self, int arg) {
    return QDBusArgument_OperatorShiftLeft5((QDBusArgument*)self, arg);
}

QDBusArgument* q_dbusargument_operator_shift_left6(void* self, uint32_t arg) {
    return QDBusArgument_OperatorShiftLeft6((QDBusArgument*)self, arg);
}

QDBusArgument* q_dbusargument_operator_shift_left7(void* self, long long arg) {
    return QDBusArgument_OperatorShiftLeft7((QDBusArgument*)self, arg);
}

QDBusArgument* q_dbusargument_operator_shift_left8(void* self, uint64_t arg) {
    return QDBusArgument_OperatorShiftLeft8((QDBusArgument*)self, arg);
}

QDBusArgument* q_dbusargument_operator_shift_left9(void* self, double arg) {
    return QDBusArgument_OperatorShiftLeft9((QDBusArgument*)self, arg);
}

QDBusArgument* q_dbusargument_operator_shift_left10(void* self, const char* arg) {
    return QDBusArgument_OperatorShiftLeft10((QDBusArgument*)self, qstring(arg));
}

QDBusArgument* q_dbusargument_operator_shift_left11(void* self, void* arg) {
    return QDBusArgument_OperatorShiftLeft11((QDBusArgument*)self, (QDBusVariant*)arg);
}

QDBusArgument* q_dbusargument_operator_shift_left12(void* self, void* arg) {
    return QDBusArgument_OperatorShiftLeft12((QDBusArgument*)self, (QDBusObjectPath*)arg);
}

QDBusArgument* q_dbusargument_operator_shift_left13(void* self, void* arg) {
    return QDBusArgument_OperatorShiftLeft13((QDBusArgument*)self, (QDBusSignature*)arg);
}

QDBusArgument* q_dbusargument_operator_shift_left14(void* self, void* arg) {
    return QDBusArgument_OperatorShiftLeft14((QDBusArgument*)self, (QDBusUnixFileDescriptor*)arg);
}

QDBusArgument* q_dbusargument_operator_shift_left15(void* self, const char* arg[static 1]) {
    size_t arg_len = libqt_strv_length(arg);
    libqt_string* arg_qstr = (libqt_string*)malloc(arg_len * sizeof(libqt_string));
    if (arg_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dbusargument_operator_shift_left15");
        abort();
    }
    for (size_t i = 0; i < arg_len; ++i) {
        arg_qstr[i] = qstring(arg[i]);
    }
    libqt_list arg_list = qlist(arg_qstr, arg_len);
    QDBusArgument* _out = QDBusArgument_OperatorShiftLeft15((QDBusArgument*)self, arg_list);
    free(arg_qstr);
    return _out;
}

QDBusArgument* q_dbusargument_operator_shift_left16(void* self, const char* arg) {
    return QDBusArgument_OperatorShiftLeft16((QDBusArgument*)self, qstring(arg));
}

void q_dbusargument_begin_structure(void* self) {
    QDBusArgument_BeginStructure((QDBusArgument*)self);
}

void q_dbusargument_end_structure(void* self) {
    QDBusArgument_EndStructure((QDBusArgument*)self);
}

void q_dbusargument_begin_array(void* self, int elementMetaTypeId) {
    QDBusArgument_BeginArray((QDBusArgument*)self, elementMetaTypeId);
}

void q_dbusargument_begin_array2(void* self, void* elementMetaType) {
    QDBusArgument_BeginArray2((QDBusArgument*)self, (QMetaType*)elementMetaType);
}

void q_dbusargument_end_array(void* self) {
    QDBusArgument_EndArray((QDBusArgument*)self);
}

void q_dbusargument_begin_map(void* self, int keyMetaTypeId, int valueMetaTypeId) {
    QDBusArgument_BeginMap((QDBusArgument*)self, keyMetaTypeId, valueMetaTypeId);
}

void q_dbusargument_begin_map2(void* self, void* keyMetaType, void* valueMetaType) {
    QDBusArgument_BeginMap2((QDBusArgument*)self, (QMetaType*)keyMetaType, (QMetaType*)valueMetaType);
}

void q_dbusargument_end_map(void* self) {
    QDBusArgument_EndMap((QDBusArgument*)self);
}

void q_dbusargument_begin_map_entry(void* self) {
    QDBusArgument_BeginMapEntry((QDBusArgument*)self);
}

void q_dbusargument_end_map_entry(void* self) {
    QDBusArgument_EndMapEntry((QDBusArgument*)self);
}

void q_dbusargument_append_variant(void* self, void* v) {
    QDBusArgument_AppendVariant((QDBusArgument*)self, (QVariant*)v);
}

const char* q_dbusargument_current_signature(void* self) {
    libqt_string _str = QDBusArgument_CurrentSignature((QDBusArgument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_dbusargument_current_type(void* self) {
    return QDBusArgument_CurrentType((QDBusArgument*)self);
}

const QDBusArgument* q_dbusargument_operator_shift_right(void* self, unsigned char* arg) {
    return QDBusArgument_OperatorShiftRight((QDBusArgument*)self, arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right2(void* self, bool* arg) {
    return QDBusArgument_OperatorShiftRight2((QDBusArgument*)self, (bool*)arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right3(void* self, short* arg) {
    return QDBusArgument_OperatorShiftRight3((QDBusArgument*)self, arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right4(void* self, unsigned short* arg) {
    return QDBusArgument_OperatorShiftRight4((QDBusArgument*)self, arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right5(void* self, int* arg) {
    return QDBusArgument_OperatorShiftRight5((QDBusArgument*)self, arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right6(void* self, uint32_t* arg) {
    return QDBusArgument_OperatorShiftRight6((QDBusArgument*)self, arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right7(void* self, long long* arg) {
    return QDBusArgument_OperatorShiftRight7((QDBusArgument*)self, arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right8(void* self, uint64_t* arg) {
    return QDBusArgument_OperatorShiftRight8((QDBusArgument*)self, (unsigned long long*)arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right9(void* self, double* arg) {
    return QDBusArgument_OperatorShiftRight9((QDBusArgument*)self, arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right10(void* self, const char* arg) {
    return QDBusArgument_OperatorShiftRight10((QDBusArgument*)self, qstring(arg));
}

const QDBusArgument* q_dbusargument_operator_shift_right11(void* self, void* arg) {
    return QDBusArgument_OperatorShiftRight11((QDBusArgument*)self, (QDBusVariant*)arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right12(void* self, void* arg) {
    return QDBusArgument_OperatorShiftRight12((QDBusArgument*)self, (QDBusObjectPath*)arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right13(void* self, void* arg) {
    return QDBusArgument_OperatorShiftRight13((QDBusArgument*)self, (QDBusSignature*)arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right14(void* self, void* arg) {
    return QDBusArgument_OperatorShiftRight14((QDBusArgument*)self, (QDBusUnixFileDescriptor*)arg);
}

const QDBusArgument* q_dbusargument_operator_shift_right15(void* self, const char* arg[static 1]) {
    size_t arg_len = libqt_strv_length(arg);
    libqt_string* arg_qstr = (libqt_string*)malloc(arg_len * sizeof(libqt_string));
    if (arg_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dbusargument_operator_shift_right15");
        abort();
    }
    for (size_t i = 0; i < arg_len; ++i) {
        arg_qstr[i] = qstring(arg[i]);
    }
    libqt_list arg_list = qlist(arg_qstr, arg_len);
    const QDBusArgument* _out = QDBusArgument_OperatorShiftRight15((QDBusArgument*)self, arg_list);
    free(arg_qstr);
    return _out;
}

const QDBusArgument* q_dbusargument_operator_shift_right16(void* self, char* arg) {
    return QDBusArgument_OperatorShiftRight16((QDBusArgument*)self, qstring(arg));
}

void q_dbusargument_begin_structure2(void* self) {
    QDBusArgument_BeginStructure2((QDBusArgument*)self);
}

void q_dbusargument_end_structure2(void* self) {
    QDBusArgument_EndStructure2((QDBusArgument*)self);
}

void q_dbusargument_begin_array3(void* self) {
    QDBusArgument_BeginArray3((QDBusArgument*)self);
}

void q_dbusargument_end_array2(void* self) {
    QDBusArgument_EndArray2((QDBusArgument*)self);
}

void q_dbusargument_begin_map3(void* self) {
    QDBusArgument_BeginMap3((QDBusArgument*)self);
}

void q_dbusargument_end_map2(void* self) {
    QDBusArgument_EndMap2((QDBusArgument*)self);
}

void q_dbusargument_begin_map_entry2(void* self) {
    QDBusArgument_BeginMapEntry2((QDBusArgument*)self);
}

void q_dbusargument_end_map_entry2(void* self) {
    QDBusArgument_EndMapEntry2((QDBusArgument*)self);
}

bool q_dbusargument_at_end(void* self) {
    return QDBusArgument_AtEnd((QDBusArgument*)self);
}

QVariant* q_dbusargument_as_variant(void* self) {
    return QDBusArgument_AsVariant((QDBusArgument*)self);
}

void q_dbusargument_delete(void* self) {
    QDBusArgument_Delete((QDBusArgument*)(self));
}
