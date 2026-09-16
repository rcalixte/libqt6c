#include <QEvent>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuickItemGrabResult>
#include <QString>
#include <QUrl>
#include <qquickitemgrabresult.h>
#include "libqquickitemgrabresult.hpp"
#include "libqquickitemgrabresult.hxx"

QMetaObject* QQuickItemGrabResult_MetaObject(const QQuickItemGrabResult* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickItemGrabResult_Metacast(QQuickItemGrabResult* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickItemGrabResult_Metacall(QQuickItemGrabResult* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

QImage* QQuickItemGrabResult_Image(const QQuickItemGrabResult* self) {
    return new QImage(self->image());
}

QUrl* QQuickItemGrabResult_Url(const QQuickItemGrabResult* self) {
    return new QUrl(self->url());
}

bool QQuickItemGrabResult_SaveToFile(const QQuickItemGrabResult* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->saveToFile(fileName_QString);
}

bool QQuickItemGrabResult_SaveToFile2(const QQuickItemGrabResult* self, const QUrl* fileName) {
    return self->saveToFile(*fileName);
}

void QQuickItemGrabResult_Ready(QQuickItemGrabResult* self) {
    self->ready();
}

void QQuickItemGrabResult_Connect_Ready(QQuickItemGrabResult* self, intptr_t slot) {
    void (*slotFunc)(QQuickItemGrabResult*) = reinterpret_cast<void (*)(QQuickItemGrabResult*)>(slot);
    QQuickItemGrabResult::connect(self, &QQuickItemGrabResult::ready, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickItemGrabResult_Delete(QQuickItemGrabResult* self) {
    delete self;
}
