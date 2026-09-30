#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuickWebEngineDownloadRequest>
#include <QString>
#include <QWebEngineDownloadRequest>
#include <qquickwebenginedownloadrequest.h>
#include "libqquickwebenginedownloadrequest.hpp"
#include "libqquickwebenginedownloadrequest.hxx"

QMetaObject* QQuickWebEngineDownloadRequest_MetaObject(const QQuickWebEngineDownloadRequest* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickWebEngineDownloadRequest_Metacast(QQuickWebEngineDownloadRequest* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickWebEngineDownloadRequest_Metacall(QQuickWebEngineDownloadRequest* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void QQuickWebEngineDownloadRequest_QmlMarkerUncreatable(QQuickWebEngineDownloadRequest* self) {
    self->qt_qmlMarker_uncreatable();
}

void QQuickWebEngineDownloadRequest_Delete(QQuickWebEngineDownloadRequest* self) {
    delete self;
}
