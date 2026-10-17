#include <QAbstractDataProxy>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <qabstractdataproxy.h>
#include "libqabstractdataproxy.hpp"
#include "libqabstractdataproxy.hxx"

QMetaObject* QAbstractDataProxy_MetaObject(const QAbstractDataProxy* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractDataProxy_Metacast(QAbstractDataProxy* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractDataProxy_Metacall(QAbstractDataProxy* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

int QAbstractDataProxy_Type(const QAbstractDataProxy* self) {
    return static_cast<int>(self->type());
}

void QAbstractDataProxy_Delete(QAbstractDataProxy* self) {
    delete self;
}
