#include "libqrunnable.hpp"
#include "libqrunnable.h"

/// https://doc.qt.io/qt-6/qrunnable.html

/// q_runnable_new constructs a new QRunnable object.
///
///
QRunnable* q_runnable_new() {
    return QRunnable_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#run)
///
/// ``` QRunnable* self ```
void q_runnable_run(void* self) {
    QRunnable_Run((QRunnable*)self);
}

/// Allows for overriding the related default method
///
/// ``` QRunnable* self, void (*slot)() ```
void q_runnable_on_run(void* self, void (*slot)()) {
    QRunnable_OnRun((QRunnable*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRunnable* self ```
void q_runnable_qbase_run(void* self) {
    QRunnable_QBaseRun((QRunnable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#autoDelete)
///
/// ``` QRunnable* self ```
bool q_runnable_auto_delete(void* self) {
    return QRunnable_AutoDelete((QRunnable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#setAutoDelete)
///
/// ``` QRunnable* self, bool autoDelete ```
void q_runnable_set_auto_delete(void* self, bool autoDelete) {
    QRunnable_SetAutoDelete((QRunnable*)self, autoDelete);
}

/// Delete this object from C++ memory.
///
/// ``` QRunnable* self ```
void q_runnable_delete(void* self) {
    QRunnable_Delete((QRunnable*)(self));
}