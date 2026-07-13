#include <QKeyCombination>
#include <qnamespace.h>
#include "libqnamespace.hpp"
#include "libqnamespace.hxx"

QKeyCombination* QKeyCombination_New(const QKeyCombination* other) {
    return new QKeyCombination(*other);
}

QKeyCombination* QKeyCombination_New2(QKeyCombination* other) {
    return new QKeyCombination(std::move(*other));
}

QKeyCombination* QKeyCombination_New3() {
    return new QKeyCombination();
}

QKeyCombination* QKeyCombination_New4(int modifiers) {
    return new QKeyCombination(static_cast<Qt::Modifiers>(modifiers));
}

QKeyCombination* QKeyCombination_New5(int modifiers) {
    return new QKeyCombination(static_cast<Qt::KeyboardModifiers>(modifiers));
}

QKeyCombination* QKeyCombination_New6(const QKeyCombination* param1) {
    return new QKeyCombination(*param1);
}

QKeyCombination* QKeyCombination_New7(int key) {
    return new QKeyCombination(static_cast<Qt::Key>(key));
}

QKeyCombination* QKeyCombination_New8(int modifiers, int key) {
    return new QKeyCombination(static_cast<Qt::Modifiers>(modifiers), static_cast<Qt::Key>(key));
}

QKeyCombination* QKeyCombination_New9(int modifiers, int key) {
    return new QKeyCombination(static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Key>(key));
}

void QKeyCombination_CopyAssign(QKeyCombination* self, QKeyCombination* other) {
    *self = *other;
}

void QKeyCombination_MoveAssign(QKeyCombination* self, QKeyCombination* other) {
    *self = std::move(*other);
}

int QKeyCombination_KeyboardModifiers(const QKeyCombination* self) {
    return static_cast<int>(self->keyboardModifiers());
}

int QKeyCombination_Key(const QKeyCombination* self) {
    return static_cast<int>(self->key());
}

QKeyCombination* QKeyCombination_FromCombined(int combined) {
    return new QKeyCombination(QKeyCombination::fromCombined(static_cast<int>(combined)));
}

int QKeyCombination_ToCombined(const QKeyCombination* self) {
    return self->toCombined();
}

int QKeyCombination_ToInt(const QKeyCombination* self) {
    return self->operator int();
}

void QKeyCombination_Delete(QKeyCombination* self) {
    delete self;
}
