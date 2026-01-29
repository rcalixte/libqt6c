#include "libqnamespace.hpp"
#include "libqnamespace.h"

QKeyCombination* q_keycombination_new(void* other) {
    return QKeyCombination_new((QKeyCombination*)other);
}

QKeyCombination* q_keycombination_new2(void* other) {
    return QKeyCombination_new2((QKeyCombination*)other);
}

QKeyCombination* q_keycombination_new3() {
    return QKeyCombination_new3();
}

QKeyCombination* q_keycombination_new4(int32_t modifiers) {
    return QKeyCombination_new4(modifiers);
}

QKeyCombination* q_keycombination_new5(int32_t modifiers) {
    return QKeyCombination_new5(modifiers);
}

QKeyCombination* q_keycombination_new6(void* param1) {
    return QKeyCombination_new6((QKeyCombination*)param1);
}

QKeyCombination* q_keycombination_new7(int32_t key) {
    return QKeyCombination_new7(key);
}

QKeyCombination* q_keycombination_new8(int32_t modifiers, int32_t key) {
    return QKeyCombination_new8(modifiers, key);
}

QKeyCombination* q_keycombination_new9(int32_t modifiers, int32_t key) {
    return QKeyCombination_new9(modifiers, key);
}

void q_keycombination_copy_assign(void* self, void* other) {
    QKeyCombination_CopyAssign((QKeyCombination*)self, (QKeyCombination*)other);
}

void q_keycombination_move_assign(void* self, void* other) {
    QKeyCombination_MoveAssign((QKeyCombination*)self, (QKeyCombination*)other);
}

int32_t q_keycombination_keyboard_modifiers(void* self) {
    return QKeyCombination_KeyboardModifiers((QKeyCombination*)self);
}

int32_t q_keycombination_key(void* self) {
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
