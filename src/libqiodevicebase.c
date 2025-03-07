#include "libqiodevicebase.hpp"
#include "libqiodevicebase.h"

/// https://doc.qt.io/qt-6/qiodevicebase.html

/// q_iodevicebase_new constructs a new QIODeviceBase object.
///
/// ``` QIODeviceBase* other ```
QIODeviceBase* q_iodevicebase_new(void* other) {
    return QIODeviceBase_new((QIODeviceBase*)other);
}

/// q_iodevicebase_copy_assign shallow copies `other` into `self`.
///
/// ``` QIODeviceBase* self, QIODeviceBase* other ```
void q_iodevicebase_copy_assign(void* self, void* other) {
    QIODeviceBase_CopyAssign((QIODeviceBase*)self, (QIODeviceBase*)other);
}
