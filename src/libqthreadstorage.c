#include "libqthreadstorage.hpp"
#include "libqthreadstorage.h"

/// https://doc.qt.io/qt-6/qthreadstoragedata.html

/// q_threadstoragedata_new constructs a new QThreadStorageData object.
///
/// ``` QThreadStorageData* param1 ```
QThreadStorageData* q_threadstoragedata_new(void* param1) {
    return QThreadStorageData_new((QThreadStorageData*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#get)
///
/// ``` QThreadStorageData* self ```
void* q_threadstoragedata_get(void* self) {
    return QThreadStorageData_Get((QThreadStorageData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#set)
///
/// ``` QThreadStorageData* self, void* p ```
void* q_threadstoragedata_set(void* self, void* p) {
    return QThreadStorageData_Set((QThreadStorageData*)self, p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#finish)
///
/// ``` void* param1 ```
void q_threadstoragedata_finish(void* param1) {
    QThreadStorageData_Finish(param1);
}

/// Delete this object from C++ memory.
///
/// ``` QThreadStorageData* self ```
void q_threadstoragedata_delete(void* self) {
    QThreadStorageData_Delete((QThreadStorageData*)(self));
}