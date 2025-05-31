#pragma once
#ifndef SRCQT6C_LIBQTHREADSTORAGE_H
#define SRCQT6C_LIBQTHREADSTORAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qthreadstoragedata.html

/// q_threadstoragedata_new constructs a new QThreadStorageData object.
///
/// ``` QThreadStorageData* param1 ```
QThreadStorageData* q_threadstoragedata_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#get)
///
/// ``` QThreadStorageData* self ```
void* q_threadstoragedata_get(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#set)
///
/// ``` QThreadStorageData* self, void* p ```
void* q_threadstoragedata_set(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#finish)
///
/// ``` void* param1 ```
void q_threadstoragedata_finish(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#dtor.QThreadStorageData)
///
/// Delete this object from C++ memory.
///
/// ``` QThreadStorageData* self ```
void q_threadstoragedata_delete(void* self);

#endif
