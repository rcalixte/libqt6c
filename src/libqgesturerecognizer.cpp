#include <QEvent>
#include <QGesture>
#include <QGestureRecognizer>
#include <QObject>
#include <qgesturerecognizer.h>
#include "libqgesturerecognizer.hpp"
#include "libqgesturerecognizer.hxx"

QGestureRecognizer* QGestureRecognizer_new() {
    return new VirtualQGestureRecognizer();
}

int QGestureRecognizer_RegisterRecognizer(QGestureRecognizer* recognizer) {
    return static_cast<int>(QGestureRecognizer::registerRecognizer(recognizer));
}

void QGestureRecognizer_UnregisterRecognizer(int typeVal) {
    QGestureRecognizer::unregisterRecognizer(static_cast<Qt::GestureType>(typeVal));
}

void QGestureRecognizer_OperatorAssign(QGestureRecognizer* self, QGestureRecognizer* param1) {
    self->operator=(*param1);
}

// Derived class handler implementation
QGesture* QGestureRecognizer_Create(QGestureRecognizer* self, QObject* target) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self)) {
        return vqgesturerecognizer->create(target);
    } else {
        return vqgesturerecognizer->create(target);
    }
}

// Base class handler implementation
QGesture* QGestureRecognizer_QBaseCreate(QGestureRecognizer* self, QObject* target) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self)) {
        vqgesturerecognizer->setQGestureRecognizer_Create_IsBase(true);
        return vqgesturerecognizer->create(target);
    } else {
        return vqgesturerecognizer->create(target);
    }
}

// Auxiliary method to allow providing re-implementation
void QGestureRecognizer_OnCreate(QGestureRecognizer* self, intptr_t slot) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self)) {
        vqgesturerecognizer->setQGestureRecognizer_Create_Callback(reinterpret_cast<VirtualQGestureRecognizer::QGestureRecognizer_Create_Callback>(slot));
    }
}

// Derived class handler implementation
int QGestureRecognizer_Recognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self)) {
        return static_cast<int>(vqgesturerecognizer->recognize(state, watched, event));
    } else {
        return static_cast<int>(vqgesturerecognizer->recognize(state, watched, event));
    }
}

// Base class handler implementation
int QGestureRecognizer_QBaseRecognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self)) {
        vqgesturerecognizer->setQGestureRecognizer_Recognize_IsBase(true);
        return static_cast<int>(vqgesturerecognizer->recognize(state, watched, event));
    } else {
        return static_cast<int>(vqgesturerecognizer->recognize(state, watched, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QGestureRecognizer_OnRecognize(QGestureRecognizer* self, intptr_t slot) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self)) {
        vqgesturerecognizer->setQGestureRecognizer_Recognize_Callback(reinterpret_cast<VirtualQGestureRecognizer::QGestureRecognizer_Recognize_Callback>(slot));
    }
}

// Derived class handler implementation
void QGestureRecognizer_Reset(QGestureRecognizer* self, QGesture* state) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self)) {
        vqgesturerecognizer->reset(state);
    } else {
        vqgesturerecognizer->reset(state);
    }
}

// Base class handler implementation
void QGestureRecognizer_QBaseReset(QGestureRecognizer* self, QGesture* state) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self)) {
        vqgesturerecognizer->setQGestureRecognizer_Reset_IsBase(true);
        vqgesturerecognizer->reset(state);
    } else {
        vqgesturerecognizer->reset(state);
    }
}

// Auxiliary method to allow providing re-implementation
void QGestureRecognizer_OnReset(QGestureRecognizer* self, intptr_t slot) {
    if (auto* vqgesturerecognizer = dynamic_cast<VirtualQGestureRecognizer*>(self)) {
        vqgesturerecognizer->setQGestureRecognizer_Reset_Callback(reinterpret_cast<VirtualQGestureRecognizer::QGestureRecognizer_Reset_Callback>(slot));
    }
}

void QGestureRecognizer_Delete(QGestureRecognizer* self) {
    delete self;
}
