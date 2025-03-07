#include <QRunnable>
#include <qrunnable.h>
#include "libqrunnable.hpp"
#include "libqrunnable.hxx"

QRunnable* QRunnable_new() {
    return new VirtualQRunnable();
}

bool QRunnable_AutoDelete(const QRunnable* self) {
    return self->autoDelete();
}

void QRunnable_SetAutoDelete(QRunnable* self, bool autoDelete) {
    self->setAutoDelete(autoDelete);
}

// Derived class handler implementation
void QRunnable_Run(QRunnable* self) {
    if (auto* vqrunnable = dynamic_cast<VirtualQRunnable*>(self)) {
        vqrunnable->run();
    } else {
        vqrunnable->run();
    }
}

// Base class handler implementation
void QRunnable_QBaseRun(QRunnable* self) {
    if (auto* vqrunnable = dynamic_cast<VirtualQRunnable*>(self)) {
        vqrunnable->setQRunnable_Run_IsBase(true);
        vqrunnable->run();
    } else {
        vqrunnable->run();
    }
}

// Auxiliary method to allow providing re-implementation
void QRunnable_OnRun(QRunnable* self, intptr_t slot) {
    if (auto* vqrunnable = dynamic_cast<VirtualQRunnable*>(self)) {
        vqrunnable->setQRunnable_Run_Callback(reinterpret_cast<VirtualQRunnable::QRunnable_Run_Callback>(slot));
    }
}

void QRunnable_Delete(QRunnable* self) {
    delete self;
}
