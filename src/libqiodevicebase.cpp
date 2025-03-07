#include <QIODeviceBase>
#include <qiodevicebase.h>
#include "libqiodevicebase.hpp"
#include "libqiodevicebase.hxx"

QIODeviceBase* QIODeviceBase_new(QIODeviceBase* other) {
    return new QIODeviceBase(*other);
}

void QIODeviceBase_CopyAssign(QIODeviceBase* self, QIODeviceBase* other) {
    *self = *other;
}
