#include "libqnamespace.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqkeysequence.hpp"
#include "libqkeysequence.h"

/// https://doc.qt.io/qt-6/qkeysequence.html

/// q_keysequence_new constructs a new QKeySequence object.
///
///
QKeySequence* q_keysequence_new() {
    return QKeySequence_new();
}

/// q_keysequence_new2 constructs a new QKeySequence object.
///
/// ``` const char* key ```
QKeySequence* q_keysequence_new2(const char* key) {
    return QKeySequence_new2(qstring(key));
}

/// q_keysequence_new3 constructs a new QKeySequence object.
///
/// ``` int k1 ```
QKeySequence* q_keysequence_new3(int k1) {
    return QKeySequence_new3(k1);
}

/// q_keysequence_new4 constructs a new QKeySequence object.
///
/// ``` QKeyCombination* k1 ```
QKeySequence* q_keysequence_new4(void* k1) {
    return QKeySequence_new4((QKeyCombination*)k1);
}

/// q_keysequence_new5 constructs a new QKeySequence object.
///
/// ``` QKeySequence* ks ```
QKeySequence* q_keysequence_new5(void* ks) {
    return QKeySequence_new5((QKeySequence*)ks);
}

/// q_keysequence_new6 constructs a new QKeySequence object.
///
/// ``` enum QKeySequence__StandardKey key ```
QKeySequence* q_keysequence_new6(int64_t key) {
    return QKeySequence_new6(key);
}

/// q_keysequence_new7 constructs a new QKeySequence object.
///
/// ``` const char* key, enum QKeySequence__SequenceFormat format ```
QKeySequence* q_keysequence_new7(const char* key, int64_t format) {
    return QKeySequence_new7(qstring(key), format);
}

/// q_keysequence_new8 constructs a new QKeySequence object.
///
/// ``` int k1, int k2 ```
QKeySequence* q_keysequence_new8(int k1, int k2) {
    return QKeySequence_new8(k1, k2);
}

/// q_keysequence_new9 constructs a new QKeySequence object.
///
/// ``` int k1, int k2, int k3 ```
QKeySequence* q_keysequence_new9(int k1, int k2, int k3) {
    return QKeySequence_new9(k1, k2, k3);
}

/// q_keysequence_new10 constructs a new QKeySequence object.
///
/// ``` int k1, int k2, int k3, int k4 ```
QKeySequence* q_keysequence_new10(int k1, int k2, int k3, int k4) {
    return QKeySequence_new10(k1, k2, k3, k4);
}

/// q_keysequence_new11 constructs a new QKeySequence object.
///
/// ``` QKeyCombination* k1, QKeyCombination* k2 ```
QKeySequence* q_keysequence_new11(void* k1, void* k2) {
    return QKeySequence_new11((QKeyCombination*)k1, (QKeyCombination*)k2);
}

/// q_keysequence_new12 constructs a new QKeySequence object.
///
/// ``` QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3 ```
QKeySequence* q_keysequence_new12(void* k1, void* k2, void* k3) {
    return QKeySequence_new12((QKeyCombination*)k1, (QKeyCombination*)k2, (QKeyCombination*)k3);
}

/// q_keysequence_new13 constructs a new QKeySequence object.
///
/// ``` QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3, QKeyCombination* k4 ```
QKeySequence* q_keysequence_new13(void* k1, void* k2, void* k3, void* k4) {
    return QKeySequence_new13((QKeyCombination*)k1, (QKeyCombination*)k2, (QKeyCombination*)k3, (QKeyCombination*)k4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#count)
///
/// ``` QKeySequence* self ```
int32_t q_keysequence_count(void* self) {
    return QKeySequence_Count((QKeySequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#isEmpty)
///
/// ``` QKeySequence* self ```
bool q_keysequence_is_empty(void* self) {
    return QKeySequence_IsEmpty((QKeySequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#toString)
///
/// ``` QKeySequence* self ```
const char* q_keysequence_to_string(void* self) {
    libqt_string _str = QKeySequence_ToString((QKeySequence*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#fromString)
///
/// ``` const char* str ```
QKeySequence* q_keysequence_from_string(const char* str) {
    return QKeySequence_FromString(qstring(str));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#listFromString)
///
/// ``` const char* str ```
libqt_list /* of QKeySequence* */ q_keysequence_list_from_string(const char* str) {
    libqt_list _arr = QKeySequence_ListFromString(qstring(str));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#listToString)
///
/// ``` QKeySequence* list[] ```
const char* q_keysequence_list_to_string(void* list[]) {
    QKeySequence** list_arr = (QKeySequence**)list;
    size_t list_len = 0;
    while (list_arr[list_len] != NULL) {
        list_len++;
    }
    libqt_list list_list = {
        .len = list_len,
        .data = {(QKeySequence*)list},
    };
    libqt_string _str = QKeySequence_ListToString(list_list);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#matches)
///
/// ``` QKeySequence* self, QKeySequence* seq ```
int64_t q_keysequence_matches(void* self, void* seq) {
    return QKeySequence_Matches((QKeySequence*)self, (QKeySequence*)seq);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#mnemonic)
///
/// ``` const char* text ```
QKeySequence* q_keysequence_mnemonic(const char* text) {
    return QKeySequence_Mnemonic(qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#keyBindings)
///
/// ``` enum QKeySequence__StandardKey key ```
libqt_list /* of QKeySequence* */ q_keysequence_key_bindings(int64_t key) {
    libqt_list _arr = QKeySequence_KeyBindings(key);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator QVariant)
///
/// ``` QKeySequence* self ```
QVariant* q_keysequence_to_q_variant(void* self) {
    return QKeySequence_ToQVariant((QKeySequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator[])
///
/// ``` QKeySequence* self, uint32_t i ```
QKeyCombination* q_keysequence_operator_subscript(void* self, uint32_t i) {
    return QKeySequence_OperatorSubscript((QKeySequence*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator=)
///
/// ``` QKeySequence* self, QKeySequence* other ```
void q_keysequence_operator_assign(void* self, void* other) {
    QKeySequence_OperatorAssign((QKeySequence*)self, (QKeySequence*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#swap)
///
/// ``` QKeySequence* self, QKeySequence* other ```
void q_keysequence_swap(void* self, void* other) {
    QKeySequence_Swap((QKeySequence*)self, (QKeySequence*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator==)
///
/// ``` QKeySequence* self, QKeySequence* other ```
bool q_keysequence_operator_equal(void* self, void* other) {
    return QKeySequence_OperatorEqual((QKeySequence*)self, (QKeySequence*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator!=)
///
/// ``` QKeySequence* self, QKeySequence* other ```
bool q_keysequence_operator_not_equal(void* self, void* other) {
    return QKeySequence_OperatorNotEqual((QKeySequence*)self, (QKeySequence*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator<)
///
/// ``` QKeySequence* self, QKeySequence* ks ```
bool q_keysequence_operator_lesser(void* self, void* ks) {
    return QKeySequence_OperatorLesser((QKeySequence*)self, (QKeySequence*)ks);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator>)
///
/// ``` QKeySequence* self, QKeySequence* other ```
bool q_keysequence_operator_greater(void* self, void* other) {
    return QKeySequence_OperatorGreater((QKeySequence*)self, (QKeySequence*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator<=)
///
/// ``` QKeySequence* self, QKeySequence* other ```
bool q_keysequence_operator_lesser_or_equal(void* self, void* other) {
    return QKeySequence_OperatorLesserOrEqual((QKeySequence*)self, (QKeySequence*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#operator>=)
///
/// ``` QKeySequence* self, QKeySequence* other ```
bool q_keysequence_operator_greater_or_equal(void* self, void* other) {
    return QKeySequence_OperatorGreaterOrEqual((QKeySequence*)self, (QKeySequence*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#isDetached)
///
/// ``` QKeySequence* self ```
bool q_keysequence_is_detached(void* self) {
    return QKeySequence_IsDetached((QKeySequence*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#toString)
///
/// ``` QKeySequence* self, enum QKeySequence__SequenceFormat format ```
const char* q_keysequence_to_string1(void* self, int64_t format) {
    libqt_string _str = QKeySequence_ToString1((QKeySequence*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#fromString)
///
/// ``` const char* str, enum QKeySequence__SequenceFormat format ```
QKeySequence* q_keysequence_from_string2(const char* str, int64_t format) {
    return QKeySequence_FromString2(qstring(str), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#listFromString)
///
/// ``` const char* str, enum QKeySequence__SequenceFormat format ```
libqt_list /* of QKeySequence* */ q_keysequence_list_from_string2(const char* str, int64_t format) {
    libqt_list _arr = QKeySequence_ListFromString2(qstring(str), format);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequence.html#listToString)
///
/// ``` QKeySequence* list[], enum QKeySequence__SequenceFormat format ```
const char* q_keysequence_list_to_string2(void* list[], int64_t format) {
    QKeySequence** list_arr = (QKeySequence**)list;
    size_t list_len = 0;
    while (list_arr[list_len] != NULL) {
        list_len++;
    }
    libqt_list list_list = {
        .len = list_len,
        .data = {(QKeySequence*)list},
    };
    libqt_string _str = QKeySequence_ListToString2(list_list, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QKeySequence* self ```
void q_keysequence_delete(void* self) {
    QKeySequence_Delete((QKeySequence*)(self));
}