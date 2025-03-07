#include "libqnamespace.hpp"
#include "libqnamespace.h"

/// https://doc.qt.io/qt-6/disambiguated_t.html

/// q_disambiguated_t_new constructs a new Qt::Disambiguated_t object.
///
/// ``` Disambiguated_t* other ```
Disambiguated_t* q_disambiguated_t_new(Disambiguated_t* other) {
    return Disambiguated_t_new((Disambiguated_t*)other);
}

/// q_disambiguated_t_new2 constructs a new Qt::Disambiguated_t object and invalidates the source Qt::Disambiguated_t object.
///
/// ``` Disambiguated_t* other ```
Disambiguated_t* q_disambiguated_t_new2(Disambiguated_t* other) {
    return Disambiguated_t_new2((Disambiguated_t*)other);
}

/// q_disambiguated_t_new3 constructs a new Qt::Disambiguated_t object.
///
///
Disambiguated_t* q_disambiguated_t_new3() {
    return Disambiguated_t_new3();
}

/// q_disambiguated_t_new4 constructs a new Qt::Disambiguated_t object.
///
/// ``` Disambiguated_t* param1 ```
Disambiguated_t* q_disambiguated_t_new4(Disambiguated_t* param1) {
    return Disambiguated_t_new4((Disambiguated_t*)param1);
}

/// q_disambiguated_t_copy_assign shallow copies `other` into `self`.
///
/// ``` Disambiguated_t* self, Disambiguated_t* other ```
void q_disambiguated_t_copy_assign(void* self, void* other) {
    Disambiguated_t_CopyAssign((Disambiguated_t*)self, (Disambiguated_t*)other);
}

/// q_disambiguated_t_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` Disambiguated_t* self, Disambiguated_t* other ```
void q_disambiguated_t_move_assign(void* self, void* other) {
    Disambiguated_t_MoveAssign((Disambiguated_t*)self, (Disambiguated_t*)other);
}

/// Delete this object from C++ memory.
///
/// ``` Disambiguated_t* self ```
void q_disambiguated_t_delete(void* self) {
    Disambiguated_t_Delete((Disambiguated_t*)(self));
}

/// https://doc.qt.io/qt-6/qinternal.html

/// q_internal_new constructs a new QInternal object.
///
/// ``` QInternal* other ```
QInternal* q_internal_new(void* other) {
    return QInternal_new((QInternal*)other);
}

/// q_internal_new2 constructs a new QInternal object and invalidates the source QInternal object.
///
/// ``` QInternal* other ```
QInternal* q_internal_new2(void* other) {
    return QInternal_new2((QInternal*)other);
}

/// q_internal_copy_assign shallow copies `other` into `self`.
///
/// ``` QInternal* self, QInternal* other ```
void q_internal_copy_assign(void* self, void* other) {
    QInternal_CopyAssign((QInternal*)self, (QInternal*)other);
}

/// q_internal_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QInternal* self, QInternal* other ```
void q_internal_move_assign(void* self, void* other) {
    QInternal_MoveAssign((QInternal*)self, (QInternal*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinternal.html#activateCallbacks)
///
/// ``` enum QInternal__Callback param1, void* param2 ```
bool q_internal_activate_callbacks(int64_t param1, void* param2) {
    return QInternal_ActivateCallbacks(param1, param2);
}

/// Delete this object from C++ memory.
///
/// ``` QInternal* self ```
void q_internal_delete(void* self) {
    QInternal_Delete((QInternal*)(self));
}

/// https://doc.qt.io/qt-6/qkeycombination.html

/// q_keycombination_new constructs a new QKeyCombination object.
///
/// ``` QKeyCombination* other ```
QKeyCombination* q_keycombination_new(void* other) {
    return QKeyCombination_new((QKeyCombination*)other);
}

/// q_keycombination_new2 constructs a new QKeyCombination object and invalidates the source QKeyCombination object.
///
/// ``` QKeyCombination* other ```
QKeyCombination* q_keycombination_new2(void* other) {
    return QKeyCombination_new2((QKeyCombination*)other);
}

/// q_keycombination_new3 constructs a new QKeyCombination object.
///
///
QKeyCombination* q_keycombination_new3() {
    return QKeyCombination_new3();
}

/// q_keycombination_new4 constructs a new QKeyCombination object.
///
/// ``` int modifiers ```
QKeyCombination* q_keycombination_new4(int64_t modifiers) {
    return QKeyCombination_new4(modifiers);
}

/// q_keycombination_new5 constructs a new QKeyCombination object.
///
/// ``` int modifiers ```
QKeyCombination* q_keycombination_new5(int64_t modifiers) {
    return QKeyCombination_new5(modifiers);
}

/// q_keycombination_new6 constructs a new QKeyCombination object.
///
/// ``` QKeyCombination* param1 ```
QKeyCombination* q_keycombination_new6(void* param1) {
    return QKeyCombination_new6((QKeyCombination*)param1);
}

/// q_keycombination_new7 constructs a new QKeyCombination object.
///
/// ``` enum Qt__Key key ```
QKeyCombination* q_keycombination_new7(int64_t key) {
    return QKeyCombination_new7(key);
}

/// q_keycombination_new8 constructs a new QKeyCombination object.
///
/// ``` int modifiers, enum Qt__Key key ```
QKeyCombination* q_keycombination_new8(int64_t modifiers, int64_t key) {
    return QKeyCombination_new8(modifiers, key);
}

/// q_keycombination_new9 constructs a new QKeyCombination object.
///
/// ``` int modifiers, enum Qt__Key key ```
QKeyCombination* q_keycombination_new9(int64_t modifiers, int64_t key) {
    return QKeyCombination_new9(modifiers, key);
}

/// q_keycombination_copy_assign shallow copies `other` into `self`.
///
/// ``` QKeyCombination* self, QKeyCombination* other ```
void q_keycombination_copy_assign(void* self, void* other) {
    QKeyCombination_CopyAssign((QKeyCombination*)self, (QKeyCombination*)other);
}

/// q_keycombination_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QKeyCombination* self, QKeyCombination* other ```
void q_keycombination_move_assign(void* self, void* other) {
    QKeyCombination_MoveAssign((QKeyCombination*)self, (QKeyCombination*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#keyboardModifiers)
///
/// ``` QKeyCombination* self ```
int64_t q_keycombination_keyboard_modifiers(void* self) {
    return QKeyCombination_KeyboardModifiers((QKeyCombination*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#key)
///
/// ``` QKeyCombination* self ```
int64_t q_keycombination_key(void* self) {
    return QKeyCombination_Key((QKeyCombination*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#fromCombined)
///
/// ``` int combined ```
QKeyCombination* q_keycombination_from_combined(int combined) {
    return QKeyCombination_FromCombined(combined);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#toCombined)
///
/// ``` QKeyCombination* self ```
int32_t q_keycombination_to_combined(void* self) {
    return QKeyCombination_ToCombined((QKeyCombination*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#operator int)
///
/// ``` QKeyCombination* self ```
int32_t q_keycombination_to_int(void* self) {
    return QKeyCombination_ToInt((QKeyCombination*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QKeyCombination* self ```
void q_keycombination_delete(void* self) {
    QKeyCombination_Delete((QKeyCombination*)(self));
}