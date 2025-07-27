#include "libqnamespace.hpp"
#include "libqvariant.hpp"
#include "libqkeysequence.hpp"
#include "libqkeysequence.h"

QKeySequence* q_keysequence_new() {
    return QKeySequence_new();
}

QKeySequence* q_keysequence_new2(const char* key) {
    return QKeySequence_new2(qstring(key));
}

QKeySequence* q_keysequence_new3(int k1) {
    return QKeySequence_new3(k1);
}

QKeySequence* q_keysequence_new4(void* k1) {
    return QKeySequence_new4((QKeyCombination*)k1);
}

QKeySequence* q_keysequence_new5(void* ks) {
    return QKeySequence_new5((QKeySequence*)ks);
}

QKeySequence* q_keysequence_new6(int64_t key) {
    return QKeySequence_new6(key);
}

QKeySequence* q_keysequence_new7(const char* key, int64_t format) {
    return QKeySequence_new7(qstring(key), format);
}

QKeySequence* q_keysequence_new8(int k1, int k2) {
    return QKeySequence_new8(k1, k2);
}

QKeySequence* q_keysequence_new9(int k1, int k2, int k3) {
    return QKeySequence_new9(k1, k2, k3);
}

QKeySequence* q_keysequence_new10(int k1, int k2, int k3, int k4) {
    return QKeySequence_new10(k1, k2, k3, k4);
}

QKeySequence* q_keysequence_new11(void* k1, void* k2) {
    return QKeySequence_new11((QKeyCombination*)k1, (QKeyCombination*)k2);
}

QKeySequence* q_keysequence_new12(void* k1, void* k2, void* k3) {
    return QKeySequence_new12((QKeyCombination*)k1, (QKeyCombination*)k2, (QKeyCombination*)k3);
}

QKeySequence* q_keysequence_new13(void* k1, void* k2, void* k3, void* k4) {
    return QKeySequence_new13((QKeyCombination*)k1, (QKeyCombination*)k2, (QKeyCombination*)k3, (QKeyCombination*)k4);
}

int32_t q_keysequence_count(void* self) {
    return QKeySequence_Count((QKeySequence*)self);
}

bool q_keysequence_is_empty(void* self) {
    return QKeySequence_IsEmpty((QKeySequence*)self);
}

const char* q_keysequence_to_string(void* self) {
    libqt_string _str = QKeySequence_ToString((QKeySequence*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QKeySequence* q_keysequence_from_string(const char* str) {
    return QKeySequence_FromString(qstring(str));
}

libqt_list /* of QKeySequence* */ q_keysequence_list_from_string(const char* str) {
    libqt_list _arr = QKeySequence_ListFromString(qstring(str));
    return _arr;
}

const char* q_keysequence_list_to_string(libqt_list list) {
    libqt_string _str = QKeySequence_ListToString(list);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_keysequence_matches(void* self, void* seq) {
    return QKeySequence_Matches((QKeySequence*)self, (QKeySequence*)seq);
}

QKeySequence* q_keysequence_mnemonic(const char* text) {
    return QKeySequence_Mnemonic(qstring(text));
}

libqt_list /* of QKeySequence* */ q_keysequence_key_bindings(int64_t key) {
    libqt_list _arr = QKeySequence_KeyBindings(key);
    return _arr;
}

QVariant* q_keysequence_to_q_variant(void* self) {
    return QKeySequence_ToQVariant((QKeySequence*)self);
}

QKeyCombination* q_keysequence_operator_subscript(void* self, uint32_t i) {
    return QKeySequence_OperatorSubscript((QKeySequence*)self, i);
}

void q_keysequence_operator_assign(void* self, void* other) {
    QKeySequence_OperatorAssign((QKeySequence*)self, (QKeySequence*)other);
}

void q_keysequence_swap(void* self, void* other) {
    QKeySequence_Swap((QKeySequence*)self, (QKeySequence*)other);
}

bool q_keysequence_operator_equal(void* self, void* other) {
    return QKeySequence_OperatorEqual((QKeySequence*)self, (QKeySequence*)other);
}

bool q_keysequence_operator_not_equal(void* self, void* other) {
    return QKeySequence_OperatorNotEqual((QKeySequence*)self, (QKeySequence*)other);
}

bool q_keysequence_operator_lesser(void* self, void* ks) {
    return QKeySequence_OperatorLesser((QKeySequence*)self, (QKeySequence*)ks);
}

bool q_keysequence_operator_greater(void* self, void* other) {
    return QKeySequence_OperatorGreater((QKeySequence*)self, (QKeySequence*)other);
}

bool q_keysequence_operator_lesser_or_equal(void* self, void* other) {
    return QKeySequence_OperatorLesserOrEqual((QKeySequence*)self, (QKeySequence*)other);
}

bool q_keysequence_operator_greater_or_equal(void* self, void* other) {
    return QKeySequence_OperatorGreaterOrEqual((QKeySequence*)self, (QKeySequence*)other);
}

bool q_keysequence_is_detached(void* self) {
    return QKeySequence_IsDetached((QKeySequence*)self);
}

const char* q_keysequence_to_string1(void* self, int64_t format) {
    libqt_string _str = QKeySequence_ToString1((QKeySequence*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QKeySequence* q_keysequence_from_string2(const char* str, int64_t format) {
    return QKeySequence_FromString2(qstring(str), format);
}

libqt_list /* of QKeySequence* */ q_keysequence_list_from_string2(const char* str, int64_t format) {
    libqt_list _arr = QKeySequence_ListFromString2(qstring(str), format);
    return _arr;
}

const char* q_keysequence_list_to_string2(libqt_list list, int64_t format) {
    libqt_string _str = QKeySequence_ListToString2(list, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keysequence_delete(void* self) {
    QKeySequence_Delete((QKeySequence*)(self));
}
