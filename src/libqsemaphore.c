#include "libqsemaphore.hpp"
#include "libqsemaphore.h"

QSemaphore* q_semaphore_new() {
    return QSemaphore_new();
}

QSemaphore* q_semaphore_new2(int n) {
    return QSemaphore_new2(n);
}

void q_semaphore_acquire(void* self) {
    QSemaphore_Acquire((QSemaphore*)self);
}

bool q_semaphore_try_acquire(void* self) {
    return QSemaphore_TryAcquire((QSemaphore*)self);
}

bool q_semaphore_try_acquire2(void* self, int n, int timeout) {
    return QSemaphore_TryAcquire2((QSemaphore*)self, n, timeout);
}

void q_semaphore_release(void* self) {
    QSemaphore_Release((QSemaphore*)self);
}

int32_t q_semaphore_available(void* self) {
    return QSemaphore_Available((QSemaphore*)self);
}

bool q_semaphore_try_acquire3(void* self) {
    return QSemaphore_TryAcquire3((QSemaphore*)self);
}

void q_semaphore_acquire1(void* self, int n) {
    QSemaphore_Acquire1((QSemaphore*)self, n);
}

bool q_semaphore_try_acquire1(void* self, int n) {
    return QSemaphore_TryAcquire1((QSemaphore*)self, n);
}

void q_semaphore_release1(void* self, int n) {
    QSemaphore_Release1((QSemaphore*)self, n);
}

void q_semaphore_delete(void* self) {
    QSemaphore_Delete((QSemaphore*)(self));
}

QSemaphoreReleaser* q_semaphorereleaser_new() {
    return QSemaphoreReleaser_new();
}

QSemaphoreReleaser* q_semaphorereleaser_new2(void* sem) {
    return QSemaphoreReleaser_new2((QSemaphore*)sem);
}

QSemaphoreReleaser* q_semaphorereleaser_new3(void* sem) {
    return QSemaphoreReleaser_new3((QSemaphore*)sem);
}

QSemaphoreReleaser* q_semaphorereleaser_new4(void* sem, int n) {
    return QSemaphoreReleaser_new4((QSemaphore*)sem, n);
}

QSemaphoreReleaser* q_semaphorereleaser_new5(void* sem, int n) {
    return QSemaphoreReleaser_new5((QSemaphore*)sem, n);
}

void q_semaphorereleaser_swap(void* self, void* other) {
    QSemaphoreReleaser_Swap((QSemaphoreReleaser*)self, (QSemaphoreReleaser*)other);
}

QSemaphore* q_semaphorereleaser_semaphore(void* self) {
    return QSemaphoreReleaser_Semaphore((QSemaphoreReleaser*)self);
}

QSemaphore* q_semaphorereleaser_cancel(void* self) {
    return QSemaphoreReleaser_Cancel((QSemaphoreReleaser*)self);
}

void q_semaphorereleaser_delete(void* self) {
    QSemaphoreReleaser_Delete((QSemaphoreReleaser*)(self));
}
