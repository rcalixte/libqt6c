#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QImage>
#include <QImageIOHandler>
#include <QImageIOPlugin>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qimageiohandler.h>
#include "libqimageiohandler.hpp"
#include "libqimageiohandler.hxx"

QImageIOHandler* QImageIOHandler_new() {
    return new VirtualQImageIOHandler();
}

void QImageIOHandler_SetDevice(QImageIOHandler* self, QIODevice* device) {
    self->setDevice(device);
}

QIODevice* QImageIOHandler_Device(const QImageIOHandler* self) {
    return self->device();
}

void QImageIOHandler_SetFormat(QImageIOHandler* self, libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    self->setFormat(format_QByteArray);
}

void QImageIOHandler_SetFormatWithFormat(const QImageIOHandler* self, libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    self->setFormat(format_QByteArray);
}

libqt_string QImageIOHandler_Format(const QImageIOHandler* self) {
    QByteArray _qb = self->format();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QImageIOHandler_AllocateImage(QSize* size, int format, QImage* image) {
    return QImageIOHandler::allocateImage(*size, static_cast<QImage::Format>(format), image);
}

// Derived class handler implementation
bool QImageIOHandler_CanRead(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        return vqimageiohandler->canRead();
    } else {
        return vqimageiohandler->canRead();
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseCanRead(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_CanRead_IsBase(true);
        return vqimageiohandler->canRead();
    } else {
        return vqimageiohandler->canRead();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCanRead(const QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_CanRead_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CanRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        return vqimageiohandler->read(image);
    } else {
        return vqimageiohandler->read(image);
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseRead(QImageIOHandler* self, QImage* image) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setQImageIOHandler_Read_IsBase(true);
        return vqimageiohandler->read(image);
    } else {
        return vqimageiohandler->read(image);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnRead(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setQImageIOHandler_Read_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Read_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOHandler_Write(QImageIOHandler* self, QImage* image) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        return vqimageiohandler->write(*image);
    } else {
        return vqimageiohandler->write(*image);
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseWrite(QImageIOHandler* self, QImage* image) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setQImageIOHandler_Write_IsBase(true);
        return vqimageiohandler->write(*image);
    } else {
        return vqimageiohandler->write(*image);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnWrite(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setQImageIOHandler_Write_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Write_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QImageIOHandler_Option(const QImageIOHandler* self, int option) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        return new QVariant(vqimageiohandler->option(static_cast<QImageIOHandler::ImageOption>(option)));
    } else {
        return new QVariant(self->option(static_cast<QImageIOHandler::ImageOption>(option)));
    }
}

// Base class handler implementation
QVariant* QImageIOHandler_QBaseOption(const QImageIOHandler* self, int option) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_Option_IsBase(true);
        return new QVariant(vqimageiohandler->option(static_cast<QImageIOHandler::ImageOption>(option)));
    } else {
        return new QVariant(self->option(static_cast<QImageIOHandler::ImageOption>(option)));
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnOption(const QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_Option_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_Option_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOHandler_SetOption(QImageIOHandler* self, int option, QVariant* value) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    } else {
        vqimageiohandler->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    }
}

// Base class handler implementation
void QImageIOHandler_QBaseSetOption(QImageIOHandler* self, int option, QVariant* value) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setQImageIOHandler_SetOption_IsBase(true);
        vqimageiohandler->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    } else {
        vqimageiohandler->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnSetOption(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setQImageIOHandler_SetOption_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_SetOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOHandler_SupportsOption(const QImageIOHandler* self, int option) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        return vqimageiohandler->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    } else {
        return vqimageiohandler->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseSupportsOption(const QImageIOHandler* self, int option) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_SupportsOption_IsBase(true);
        return vqimageiohandler->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    } else {
        return vqimageiohandler->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnSupportsOption(const QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_SupportsOption_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_SupportsOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        return vqimageiohandler->jumpToNextImage();
    } else {
        return vqimageiohandler->jumpToNextImage();
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseJumpToNextImage(QImageIOHandler* self) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setQImageIOHandler_JumpToNextImage_IsBase(true);
        return vqimageiohandler->jumpToNextImage();
    } else {
        return vqimageiohandler->jumpToNextImage();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnJumpToNextImage(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setQImageIOHandler_JumpToNextImage_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_JumpToNextImage_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        return vqimageiohandler->jumpToImage(static_cast<int>(imageNumber));
    } else {
        return vqimageiohandler->jumpToImage(static_cast<int>(imageNumber));
    }
}

// Base class handler implementation
bool QImageIOHandler_QBaseJumpToImage(QImageIOHandler* self, int imageNumber) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setQImageIOHandler_JumpToImage_IsBase(true);
        return vqimageiohandler->jumpToImage(static_cast<int>(imageNumber));
    } else {
        return vqimageiohandler->jumpToImage(static_cast<int>(imageNumber));
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnJumpToImage(QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = dynamic_cast<VirtualQImageIOHandler*>(self)) {
        vqimageiohandler->setQImageIOHandler_JumpToImage_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_JumpToImage_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOHandler_LoopCount(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        return vqimageiohandler->loopCount();
    } else {
        return vqimageiohandler->loopCount();
    }
}

// Base class handler implementation
int QImageIOHandler_QBaseLoopCount(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_LoopCount_IsBase(true);
        return vqimageiohandler->loopCount();
    } else {
        return vqimageiohandler->loopCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnLoopCount(const QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_LoopCount_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_LoopCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOHandler_ImageCount(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        return vqimageiohandler->imageCount();
    } else {
        return vqimageiohandler->imageCount();
    }
}

// Base class handler implementation
int QImageIOHandler_QBaseImageCount(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_ImageCount_IsBase(true);
        return vqimageiohandler->imageCount();
    } else {
        return vqimageiohandler->imageCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnImageCount(const QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_ImageCount_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_ImageCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOHandler_NextImageDelay(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        return vqimageiohandler->nextImageDelay();
    } else {
        return vqimageiohandler->nextImageDelay();
    }
}

// Base class handler implementation
int QImageIOHandler_QBaseNextImageDelay(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_NextImageDelay_IsBase(true);
        return vqimageiohandler->nextImageDelay();
    } else {
        return vqimageiohandler->nextImageDelay();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnNextImageDelay(const QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_NextImageDelay_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_NextImageDelay_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOHandler_CurrentImageNumber(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        return vqimageiohandler->currentImageNumber();
    } else {
        return vqimageiohandler->currentImageNumber();
    }
}

// Base class handler implementation
int QImageIOHandler_QBaseCurrentImageNumber(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_CurrentImageNumber_IsBase(true);
        return vqimageiohandler->currentImageNumber();
    } else {
        return vqimageiohandler->currentImageNumber();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCurrentImageNumber(const QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_CurrentImageNumber_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CurrentImageNumber_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QImageIOHandler_CurrentImageRect(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        return new QRect(vqimageiohandler->currentImageRect());
    } else {
        return new QRect(self->currentImageRect());
    }
}

// Base class handler implementation
QRect* QImageIOHandler_QBaseCurrentImageRect(const QImageIOHandler* self) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_CurrentImageRect_IsBase(true);
        return new QRect(vqimageiohandler->currentImageRect());
    } else {
        return new QRect(self->currentImageRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOHandler_OnCurrentImageRect(const QImageIOHandler* self, intptr_t slot) {
    if (auto* vqimageiohandler = const_cast<VirtualQImageIOHandler*>(dynamic_cast<const VirtualQImageIOHandler*>(self))) {
        vqimageiohandler->setQImageIOHandler_CurrentImageRect_Callback(reinterpret_cast<VirtualQImageIOHandler::QImageIOHandler_CurrentImageRect_Callback>(slot));
    }
}

void QImageIOHandler_Delete(QImageIOHandler* self) {
    delete self;
}

QImageIOPlugin* QImageIOPlugin_new() {
    return new VirtualQImageIOPlugin();
}

QImageIOPlugin* QImageIOPlugin_new2(QObject* parent) {
    return new VirtualQImageIOPlugin(parent);
}

QMetaObject* QImageIOPlugin_MetaObject(const QImageIOPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QImageIOPlugin_Metacast(QImageIOPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QImageIOPlugin_Metacall(QImageIOPlugin* self, int param1, int param2, void** param3) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageIOPlugin_OnMetacall(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_Metacall_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QImageIOPlugin_QBaseMetacall(QImageIOPlugin* self, int param1, int param2, void** param3) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_Metacall_IsBase(true);
        return vqimageioplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QImageIOPlugin_Tr(const char* s) {
    QString _ret = QImageIOPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QImageIOPlugin_Tr2(const char* s, const char* c) {
    QString _ret = QImageIOPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QImageIOPlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = QImageIOPlugin::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QImageIOPlugin_Capabilities(const QImageIOPlugin* self, QIODevice* device, libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        return static_cast<int>(vqimageioplugin->capabilities(device, format_QByteArray));
    } else {
        return static_cast<int>(vqimageioplugin->capabilities(device, format_QByteArray));
    }
}

// Base class handler implementation
int QImageIOPlugin_QBaseCapabilities(const QImageIOPlugin* self, QIODevice* device, libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_Capabilities_IsBase(true);
        return static_cast<int>(vqimageioplugin->capabilities(device, format_QByteArray));
    } else {
        return static_cast<int>(vqimageioplugin->capabilities(device, format_QByteArray));
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCapabilities(const QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_Capabilities_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Capabilities_Callback>(slot));
    }
}

// Derived class handler implementation
QImageIOHandler* QImageIOPlugin_Create(const QImageIOPlugin* self, QIODevice* device, libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        return vqimageioplugin->create(device, format_QByteArray);
    } else {
        return vqimageioplugin->create(device, format_QByteArray);
    }
}

// Base class handler implementation
QImageIOHandler* QImageIOPlugin_QBaseCreate(const QImageIOPlugin* self, QIODevice* device, libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_Create_IsBase(true);
        return vqimageioplugin->create(device, format_QByteArray);
    } else {
        return vqimageioplugin->create(device, format_QByteArray);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCreate(const QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_Create_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Create_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOPlugin_Event(QImageIOPlugin* self, QEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        return vqimageioplugin->event(event);
    } else {
        return vqimageioplugin->event(event);
    }
}

// Base class handler implementation
bool QImageIOPlugin_QBaseEvent(QImageIOPlugin* self, QEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_Event_IsBase(true);
        return vqimageioplugin->event(event);
    } else {
        return vqimageioplugin->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnEvent(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_Event_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOPlugin_EventFilter(QImageIOPlugin* self, QObject* watched, QEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        return vqimageioplugin->eventFilter(watched, event);
    } else {
        return vqimageioplugin->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QImageIOPlugin_QBaseEventFilter(QImageIOPlugin* self, QObject* watched, QEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_EventFilter_IsBase(true);
        return vqimageioplugin->eventFilter(watched, event);
    } else {
        return vqimageioplugin->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnEventFilter(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_EventFilter_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOPlugin_TimerEvent(QImageIOPlugin* self, QTimerEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->timerEvent(event);
    } else {
        vqimageioplugin->timerEvent(event);
    }
}

// Base class handler implementation
void QImageIOPlugin_QBaseTimerEvent(QImageIOPlugin* self, QTimerEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_TimerEvent_IsBase(true);
        vqimageioplugin->timerEvent(event);
    } else {
        vqimageioplugin->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnTimerEvent(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_TimerEvent_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOPlugin_ChildEvent(QImageIOPlugin* self, QChildEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->childEvent(event);
    } else {
        vqimageioplugin->childEvent(event);
    }
}

// Base class handler implementation
void QImageIOPlugin_QBaseChildEvent(QImageIOPlugin* self, QChildEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_ChildEvent_IsBase(true);
        vqimageioplugin->childEvent(event);
    } else {
        vqimageioplugin->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnChildEvent(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_ChildEvent_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOPlugin_CustomEvent(QImageIOPlugin* self, QEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->customEvent(event);
    } else {
        vqimageioplugin->customEvent(event);
    }
}

// Base class handler implementation
void QImageIOPlugin_QBaseCustomEvent(QImageIOPlugin* self, QEvent* event) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_CustomEvent_IsBase(true);
        vqimageioplugin->customEvent(event);
    } else {
        vqimageioplugin->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnCustomEvent(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_CustomEvent_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOPlugin_ConnectNotify(QImageIOPlugin* self, QMetaMethod* signal) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->connectNotify(*signal);
    } else {
        vqimageioplugin->connectNotify(*signal);
    }
}

// Base class handler implementation
void QImageIOPlugin_QBaseConnectNotify(QImageIOPlugin* self, QMetaMethod* signal) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_ConnectNotify_IsBase(true);
        vqimageioplugin->connectNotify(*signal);
    } else {
        vqimageioplugin->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnConnectNotify(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageIOPlugin_DisconnectNotify(QImageIOPlugin* self, QMetaMethod* signal) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->disconnectNotify(*signal);
    } else {
        vqimageioplugin->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QImageIOPlugin_QBaseDisconnectNotify(QImageIOPlugin* self, QMetaMethod* signal) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_DisconnectNotify_IsBase(true);
        vqimageioplugin->disconnectNotify(*signal);
    } else {
        vqimageioplugin->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnDisconnectNotify(QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = dynamic_cast<VirtualQImageIOPlugin*>(self)) {
        vqimageioplugin->setQImageIOPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QImageIOPlugin_Sender(const QImageIOPlugin* self) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        return vqimageioplugin->sender();
    } else {
        return vqimageioplugin->sender();
    }
}

// Base class handler implementation
QObject* QImageIOPlugin_QBaseSender(const QImageIOPlugin* self) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_Sender_IsBase(true);
        return vqimageioplugin->sender();
    } else {
        return vqimageioplugin->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnSender(const QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_Sender_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOPlugin_SenderSignalIndex(const QImageIOPlugin* self) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        return vqimageioplugin->senderSignalIndex();
    } else {
        return vqimageioplugin->senderSignalIndex();
    }
}

// Base class handler implementation
int QImageIOPlugin_QBaseSenderSignalIndex(const QImageIOPlugin* self) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_SenderSignalIndex_IsBase(true);
        return vqimageioplugin->senderSignalIndex();
    } else {
        return vqimageioplugin->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnSenderSignalIndex(const QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageIOPlugin_Receivers(const QImageIOPlugin* self, const char* signal) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        return vqimageioplugin->receivers(signal);
    } else {
        return vqimageioplugin->receivers(signal);
    }
}

// Base class handler implementation
int QImageIOPlugin_QBaseReceivers(const QImageIOPlugin* self, const char* signal) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_Receivers_IsBase(true);
        return vqimageioplugin->receivers(signal);
    } else {
        return vqimageioplugin->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnReceivers(const QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_Receivers_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageIOPlugin_IsSignalConnected(const QImageIOPlugin* self, QMetaMethod* signal) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        return vqimageioplugin->isSignalConnected(*signal);
    } else {
        return vqimageioplugin->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QImageIOPlugin_QBaseIsSignalConnected(const QImageIOPlugin* self, QMetaMethod* signal) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_IsSignalConnected_IsBase(true);
        return vqimageioplugin->isSignalConnected(*signal);
    } else {
        return vqimageioplugin->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageIOPlugin_OnIsSignalConnected(const QImageIOPlugin* self, intptr_t slot) {
    if (auto* vqimageioplugin = const_cast<VirtualQImageIOPlugin*>(dynamic_cast<const VirtualQImageIOPlugin*>(self))) {
        vqimageioplugin->setQImageIOPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQImageIOPlugin::QImageIOPlugin_IsSignalConnected_Callback>(slot));
    }
}

void QImageIOPlugin_Delete(QImageIOPlugin* self) {
    delete self;
}
