#include "libqnamespace.hpp"
#include "libqnamespace.h"

Disambiguated_t* q_disambiguated_t_new(Disambiguated_t* other) {
    return Disambiguated_t_new((Disambiguated_t*)other);
}

Disambiguated_t* q_disambiguated_t_new2(Disambiguated_t* other) {
    return Disambiguated_t_new2((Disambiguated_t*)other);
}

Disambiguated_t* q_disambiguated_t_new3() {
    return Disambiguated_t_new3();
}

Disambiguated_t* q_disambiguated_t_new4(Disambiguated_t* param1) {
    return Disambiguated_t_new4((Disambiguated_t*)param1);
}

void q_disambiguated_t_copy_assign(void* self, void* other) {
    Disambiguated_t_CopyAssign((Disambiguated_t*)self, (Disambiguated_t*)other);
}

void q_disambiguated_t_move_assign(void* self, void* other) {
    Disambiguated_t_MoveAssign((Disambiguated_t*)self, (Disambiguated_t*)other);
}

void q_disambiguated_t_delete(void* self) {
    Disambiguated_t_Delete((Disambiguated_t*)(self));
}

QInternal* q_internal_new(void* other) {
    return QInternal_new((QInternal*)other);
}

QInternal* q_internal_new2(void* other) {
    return QInternal_new2((QInternal*)other);
}

void q_internal_copy_assign(void* self, void* other) {
    QInternal_CopyAssign((QInternal*)self, (QInternal*)other);
}

void q_internal_move_assign(void* self, void* other) {
    QInternal_MoveAssign((QInternal*)self, (QInternal*)other);
}

bool q_internal_activate_callbacks(int64_t param1, void* param2) {
    return QInternal_ActivateCallbacks(param1, param2);
}

void q_internal_delete(void* self) {
    QInternal_Delete((QInternal*)(self));
}

QKeyCombination* q_keycombination_new(void* other) {
    return QKeyCombination_new((QKeyCombination*)other);
}

QKeyCombination* q_keycombination_new2(void* other) {
    return QKeyCombination_new2((QKeyCombination*)other);
}

QKeyCombination* q_keycombination_new3() {
    return QKeyCombination_new3();
}

QKeyCombination* q_keycombination_new4(int64_t modifiers) {
    return QKeyCombination_new4(modifiers);
}

QKeyCombination* q_keycombination_new5(int64_t modifiers) {
    return QKeyCombination_new5(modifiers);
}

QKeyCombination* q_keycombination_new6(void* param1) {
    return QKeyCombination_new6((QKeyCombination*)param1);
}

QKeyCombination* q_keycombination_new7(int64_t key) {
    return QKeyCombination_new7(key);
}

QKeyCombination* q_keycombination_new8(int64_t modifiers, int64_t key) {
    return QKeyCombination_new8(modifiers, key);
}

QKeyCombination* q_keycombination_new9(int64_t modifiers, int64_t key) {
    return QKeyCombination_new9(modifiers, key);
}

void q_keycombination_copy_assign(void* self, void* other) {
    QKeyCombination_CopyAssign((QKeyCombination*)self, (QKeyCombination*)other);
}

void q_keycombination_move_assign(void* self, void* other) {
    QKeyCombination_MoveAssign((QKeyCombination*)self, (QKeyCombination*)other);
}

int64_t q_keycombination_keyboard_modifiers(void* self) {
    return QKeyCombination_KeyboardModifiers((QKeyCombination*)self);
}

int64_t q_keycombination_key(void* self) {
    return QKeyCombination_Key((QKeyCombination*)self);
}

QKeyCombination* q_keycombination_from_combined(int combined) {
    return QKeyCombination_FromCombined(combined);
}

int32_t q_keycombination_to_combined(void* self) {
    return QKeyCombination_ToCombined((QKeyCombination*)self);
}

int32_t q_keycombination_to_int(void* self) {
    return QKeyCombination_ToInt((QKeyCombination*)self);
}

void q_keycombination_delete(void* self) {
    QKeyCombination_Delete((QKeyCombination*)(self));
}
