#include "libqrunnable.hpp"
#include "libqrunnable.h"

QRunnable* q_runnable_new() {
    return QRunnable_new();
}

void q_runnable_run(void* self) {
    QRunnable_Run((QRunnable*)self);
}

void q_runnable_on_run(void* self, void (*slot)()) {
    QRunnable_OnRun((QRunnable*)self, (intptr_t)slot);
}

void q_runnable_qbase_run(void* self) {
    QRunnable_QBaseRun((QRunnable*)self);
}

bool q_runnable_auto_delete(void* self) {
    return QRunnable_AutoDelete((QRunnable*)self);
}

void q_runnable_set_auto_delete(void* self, bool autoDelete) {
    QRunnable_SetAutoDelete((QRunnable*)self, autoDelete);
}

void q_runnable_delete(void* self) {
    QRunnable_Delete((QRunnable*)(self));
}
