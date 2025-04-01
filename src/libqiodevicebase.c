#include "libqiodevicebase.hpp"
#include "libqiodevicebase.h"

QIODeviceBase* q_iodevicebase_new(void* other) {
    return QIODeviceBase_new((QIODeviceBase*)other);
}

void q_iodevicebase_copy_assign(void* self, void* other) {
    QIODeviceBase_CopyAssign((QIODeviceBase*)self, (QIODeviceBase*)other);
}
