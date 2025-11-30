#pragma once
#ifndef SRC_QT6C_LIBQTHREADSTORAGE_H
#define SRC_QT6C_LIBQTHREADSTORAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qthreadstoragedata.html

/// q_threadstoragedata_new constructs a new QThreadStorageData object.
///
/// @param param1 QThreadStorageData*
QThreadStorageData* q_threadstoragedata_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qthreadstoragedata.html#get)
///
/// @param self QThreadStorageData*
void* q_threadstoragedata_get(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthreadstoragedata.html#set)
///
/// @param self QThreadStorageData*
/// @param p void*
void* q_threadstoragedata_set(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qthreadstoragedata.html#id-var)
///
/// @param self QThreadStorageData*
int32_t q_threadstoragedata_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthreadstoragedata.html#id-var)
///
/// @param self QThreadStorageData*
/// @param id int
void q_threadstoragedata_set_id(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qthreadstoragedata.html#dtor.QThreadStorageData)
///
/// Delete this object from C++ memory.
///
/// @param self QThreadStorageData*
void q_threadstoragedata_delete(void* self);

#endif
