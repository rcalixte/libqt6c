#include <QContiguousCacheData>
#include <qcontiguouscache.h>
#include "libqcontiguouscache.hpp"
#include "libqcontiguouscache.hxx"

QContiguousCacheData* QContiguousCacheData_AllocateData(ptrdiff_t size, ptrdiff_t alignment) {
    return QContiguousCacheData::allocateData((qsizetype)(size), (qsizetype)(alignment));
}

void QContiguousCacheData_FreeData(QContiguousCacheData* data) {
    QContiguousCacheData::freeData(data);
}

void QContiguousCacheData_Delete(QContiguousCacheData* self) {
    delete self;
}
