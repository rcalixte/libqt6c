#include "libqdeadlinetimer.hpp"
#include "libqmutex.hpp"
#include "libqmutex.h"

QBasicMutex* q_basicmutex_new() {
    return QBasicMutex_new();
}

void q_basicmutex_lock(void* self) {
    QBasicMutex_Lock((QBasicMutex*)self);
}

void q_basicmutex_unlock(void* self) {
    QBasicMutex_Unlock((QBasicMutex*)self);
}

bool q_basicmutex_try_lock(void* self) {
    return QBasicMutex_TryLock((QBasicMutex*)self);
}

bool q_basicmutex_try_lock2(void* self) {
    return QBasicMutex_TryLock2((QBasicMutex*)self);
}

void q_basicmutex_delete(void* self) {
    QBasicMutex_Delete((QBasicMutex*)(self));
}

QMutex* q_mutex_new() {
    return QMutex_new();
}

bool q_mutex_try_lock(void* self) {
    return QMutex_TryLock((QMutex*)self);
}

bool q_mutex_try_lock2(void* self, int timeout) {
    return QMutex_TryLock2((QMutex*)self, timeout);
}

bool q_mutex_try_lock3(void* self, void* timeout) {
    return QMutex_TryLock3((QMutex*)self, (QDeadlineTimer*)timeout);
}

void q_mutex_lock(void* self) {
    QBasicMutex_Lock((QBasicMutex*)self);
}

void q_mutex_unlock(void* self) {
    QBasicMutex_Unlock((QBasicMutex*)self);
}

void q_mutex_delete(void* self) {
    QMutex_Delete((QMutex*)(self));
}

QRecursiveMutex* q_recursivemutex_new() {
    return QRecursiveMutex_new();
}

void q_recursivemutex_lock(void* self) {
    QRecursiveMutex_Lock((QRecursiveMutex*)self);
}

bool q_recursivemutex_try_lock(void* self, int timeout) {
    return QRecursiveMutex_TryLock((QRecursiveMutex*)self, timeout);
}

bool q_recursivemutex_try_lock2(void* self) {
    return QRecursiveMutex_TryLock2((QRecursiveMutex*)self);
}

void q_recursivemutex_unlock(void* self) {
    QRecursiveMutex_Unlock((QRecursiveMutex*)self);
}

bool q_recursivemutex_try_lock3(void* self) {
    return QRecursiveMutex_TryLock3((QRecursiveMutex*)self);
}

bool q_recursivemutex_try_lock1(void* self, void* timer) {
    return QRecursiveMutex_TryLock1((QRecursiveMutex*)self, (QDeadlineTimer*)timer);
}

void q_recursivemutex_delete(void* self) {
    QRecursiveMutex_Delete((QRecursiveMutex*)(self));
}
