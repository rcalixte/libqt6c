#include "libqrunnable.hpp"
#include "libqrunnable.h"

QRunnable* q_runnable_new() {
    return QRunnable_New();
}

void q_runnable_run(void* self) {
    QRunnable_Run((QRunnable*)self);
}

void q_runnable_on_run(void* self, void (*callback)(void*)) {
    QRunnable_OnRun((QRunnable*)self, (intptr_t)callback);
}

bool q_runnable_auto_delete(const void* self) {
    return QRunnable_AutoDelete((QRunnable*)self);
}

void q_runnable_set_auto_delete(void* self, bool autoDelete) {
    QRunnable_SetAutoDelete((QRunnable*)self, autoDelete);
}

void q_runnable_delete(void* self) {
    QRunnable_Delete((QRunnable*)(self));
}
