#include "libqsemaphore.hpp"
#include "libqsemaphore.h"

/// https://doc.qt.io/qt-6/qsemaphore.html

/// q_semaphore_new constructs a new QSemaphore object.
///
///
QSemaphore* q_semaphore_new() {
    return QSemaphore_new();
}

/// q_semaphore_new2 constructs a new QSemaphore object.
///
/// ``` int n ```
QSemaphore* q_semaphore_new2(int n) {
    return QSemaphore_new2(n);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
///
/// ``` QSemaphore* self ```
void q_semaphore_acquire(void* self) {
    QSemaphore_Acquire((QSemaphore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
///
/// ``` QSemaphore* self ```
bool q_semaphore_try_acquire(void* self) {
    return QSemaphore_TryAcquire((QSemaphore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
///
/// ``` QSemaphore* self, int n, int timeout ```
bool q_semaphore_try_acquire2(void* self, int n, int timeout) {
    return QSemaphore_TryAcquire2((QSemaphore*)self, n, timeout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#release)
///
/// ``` QSemaphore* self ```
void q_semaphore_release(void* self) {
    QSemaphore_Release((QSemaphore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#available)
///
/// ``` QSemaphore* self ```
int32_t q_semaphore_available(void* self) {
    return QSemaphore_Available((QSemaphore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#try_acquire)
///
/// ``` QSemaphore* self ```
bool q_semaphore_try_acquire3(void* self) {
    return QSemaphore_TryAcquire3((QSemaphore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
///
/// ``` QSemaphore* self, int n ```
void q_semaphore_acquire1(void* self, int n) {
    QSemaphore_Acquire1((QSemaphore*)self, n);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
///
/// ``` QSemaphore* self, int n ```
bool q_semaphore_try_acquire1(void* self, int n) {
    return QSemaphore_TryAcquire1((QSemaphore*)self, n);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#release)
///
/// ``` QSemaphore* self, int n ```
void q_semaphore_release1(void* self, int n) {
    QSemaphore_Release1((QSemaphore*)self, n);
}

/// Delete this object from C++ memory.
///
/// ``` QSemaphore* self ```
void q_semaphore_delete(void* self) {
    QSemaphore_Delete((QSemaphore*)(self));
}

/// https://doc.qt.io/qt-6/qsemaphorereleaser.html

/// q_semaphorereleaser_new constructs a new QSemaphoreReleaser object.
///
///
QSemaphoreReleaser* q_semaphorereleaser_new() {
    return QSemaphoreReleaser_new();
}

/// q_semaphorereleaser_new2 constructs a new QSemaphoreReleaser object.
///
/// ``` QSemaphore* sem ```
QSemaphoreReleaser* q_semaphorereleaser_new2(void* sem) {
    return QSemaphoreReleaser_new2((QSemaphore*)sem);
}

/// q_semaphorereleaser_new3 constructs a new QSemaphoreReleaser object.
///
/// ``` QSemaphore* sem ```
QSemaphoreReleaser* q_semaphorereleaser_new3(void* sem) {
    return QSemaphoreReleaser_new3((QSemaphore*)sem);
}

/// q_semaphorereleaser_new4 constructs a new QSemaphoreReleaser object.
///
/// ``` QSemaphore* sem, int n ```
QSemaphoreReleaser* q_semaphorereleaser_new4(void* sem, int n) {
    return QSemaphoreReleaser_new4((QSemaphore*)sem, n);
}

/// q_semaphorereleaser_new5 constructs a new QSemaphoreReleaser object.
///
/// ``` QSemaphore* sem, int n ```
QSemaphoreReleaser* q_semaphorereleaser_new5(void* sem, int n) {
    return QSemaphoreReleaser_new5((QSemaphore*)sem, n);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#swap)
///
/// ``` QSemaphoreReleaser* self, QSemaphoreReleaser* other ```
void q_semaphorereleaser_swap(void* self, void* other) {
    QSemaphoreReleaser_Swap((QSemaphoreReleaser*)self, (QSemaphoreReleaser*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#semaphore)
///
/// ``` QSemaphoreReleaser* self ```
QSemaphore* q_semaphorereleaser_semaphore(void* self) {
    return QSemaphoreReleaser_Semaphore((QSemaphoreReleaser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#cancel)
///
/// ``` QSemaphoreReleaser* self ```
QSemaphore* q_semaphorereleaser_cancel(void* self) {
    return QSemaphoreReleaser_Cancel((QSemaphoreReleaser*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSemaphoreReleaser* self ```
void q_semaphorereleaser_delete(void* self) {
    QSemaphoreReleaser_Delete((QSemaphoreReleaser*)(self));
}