#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSGTexture>
#include <QSGTextureProvider>
#include <QString>
#include <qsgtextureprovider.h>
#include "libqsgtextureprovider.hpp"
#include "libqsgtextureprovider.hxx"

QMetaObject* QSGTextureProvider_MetaObject(const QSGTextureProvider* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSGTextureProvider_Metacast(QSGTextureProvider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSGTextureProvider_Metacall(QSGTextureProvider* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

QSGTexture* QSGTextureProvider_Texture(const QSGTextureProvider* self) {
    return self->texture();
}

void QSGTextureProvider_TextureChanged(QSGTextureProvider* self) {
    self->textureChanged();
}

void QSGTextureProvider_Connect_TextureChanged(QSGTextureProvider* self, intptr_t slot) {
    void (*slotFunc)(QSGTextureProvider*) = reinterpret_cast<void (*)(QSGTextureProvider*)>(slot);
    QSGTextureProvider::connect(self, &QSGTextureProvider::textureChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSGTextureProvider_Delete(QSGTextureProvider* self) {
    delete self;
}
