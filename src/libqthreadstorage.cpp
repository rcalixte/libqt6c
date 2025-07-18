#include <QThreadStorageData>
#include <qthreadstorage.h>
#include "libqthreadstorage.hpp"
#include "libqthreadstorage.hxx"

QThreadStorageData* QThreadStorageData_new(const QThreadStorageData* param1) {
    return new QThreadStorageData(*param1);
}

void** QThreadStorageData_Get(const QThreadStorageData* self) {
    return self->get();
}

void** QThreadStorageData_Set(QThreadStorageData* self, void* p) {
    return self->set(p);
}

void QThreadStorageData_Finish(void** param1) {
    QThreadStorageData::finish(param1);
}

void QThreadStorageData_Delete(QThreadStorageData* self) {
    delete self;
}
