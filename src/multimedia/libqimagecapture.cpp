#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QImageCapture>
#include <QList>
#include <QMediaCaptureSession>
#include <QMediaMetaData>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QVideoFrame>
#include <qimagecapture.h>
#include "libqimagecapture.hpp"
#include "libqimagecapture.hxx"

QImageCapture* QImageCapture_new() {
    return new VirtualQImageCapture();
}

QImageCapture* QImageCapture_new2(QObject* parent) {
    return new VirtualQImageCapture(parent);
}

QMetaObject* QImageCapture_MetaObject(const QImageCapture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QImageCapture_Metacast(QImageCapture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QImageCapture_Metacall(QImageCapture* self, int param1, int param2, void** param3) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QImageCapture_OnMetacall(QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_Metacall_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QImageCapture_QBaseMetacall(QImageCapture* self, int param1, int param2, void** param3) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_Metacall_IsBase(true);
        return vqimagecapture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QImageCapture_Tr(const char* s) {
    QString _ret = QImageCapture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QImageCapture_IsAvailable(const QImageCapture* self) {
    return self->isAvailable();
}

QMediaCaptureSession* QImageCapture_CaptureSession(const QImageCapture* self) {
    return self->captureSession();
}

int QImageCapture_Error(const QImageCapture* self) {
    return static_cast<int>(self->error());
}

libqt_string QImageCapture_ErrorString(const QImageCapture* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QImageCapture_IsReadyForCapture(const QImageCapture* self) {
    return self->isReadyForCapture();
}

int QImageCapture_FileFormat(const QImageCapture* self) {
    return static_cast<int>(self->fileFormat());
}

void QImageCapture_SetFileFormat(QImageCapture* self, int format) {
    self->setFileFormat(static_cast<QImageCapture::FileFormat>(format));
}

libqt_list /* of int */ QImageCapture_SupportedFormats() {
    QList<QImageCapture::FileFormat> _ret = QImageCapture::supportedFormats();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ints = _arr;
    return _out;
}

libqt_string QImageCapture_FileFormatName(int c) {
    QString _ret = QImageCapture::fileFormatName(static_cast<QImageCapture::FileFormat>(c));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QImageCapture_FileFormatDescription(int c) {
    QString _ret = QImageCapture::fileFormatDescription(static_cast<QImageCapture::FileFormat>(c));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QSize* QImageCapture_Resolution(const QImageCapture* self) {
    return new QSize(self->resolution());
}

void QImageCapture_SetResolution(QImageCapture* self, QSize* resolution) {
    self->setResolution(*resolution);
}

void QImageCapture_SetResolution2(QImageCapture* self, int width, int height) {
    self->setResolution(static_cast<int>(width), static_cast<int>(height));
}

int QImageCapture_Quality(const QImageCapture* self) {
    return static_cast<int>(self->quality());
}

void QImageCapture_SetQuality(QImageCapture* self, int quality) {
    self->setQuality(static_cast<QImageCapture::Quality>(quality));
}

QMediaMetaData* QImageCapture_MetaData(const QImageCapture* self) {
    return new QMediaMetaData(self->metaData());
}

void QImageCapture_SetMetaData(QImageCapture* self, QMediaMetaData* metaData) {
    self->setMetaData(*metaData);
}

void QImageCapture_AddMetaData(QImageCapture* self, QMediaMetaData* metaData) {
    self->addMetaData(*metaData);
}

int QImageCapture_CaptureToFile(QImageCapture* self) {
    return self->captureToFile();
}

int QImageCapture_Capture(QImageCapture* self) {
    return self->capture();
}

void QImageCapture_ErrorChanged(QImageCapture* self) {
    self->errorChanged();
}

void QImageCapture_Connect_ErrorChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::errorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QImageCapture_ErrorOccurred(QImageCapture* self, int id, int errorVal, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<int>(id), static_cast<QImageCapture::Error>(errorVal), errorString_QString);
}

void QImageCapture_Connect_ErrorOccurred(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, int, libqt_string) = reinterpret_cast<void (*)(QImageCapture*, int, int, libqt_string)>(slot);
    QImageCapture::connect(self, &QImageCapture::errorOccurred, [self, slotFunc](int id, QImageCapture::Error errorVal, const QString& errorString) {
        int sigval1 = id;
        int sigval2 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        libqt_string errorString_str;
        errorString_str.len = errorString_b.length();
        errorString_str.data = static_cast<char*>(malloc((errorString_str.len + 1) * sizeof(char)));
        memcpy(errorString_str.data, errorString_b.data(), errorString_str.len);
        errorString_str.data[errorString_str.len] = '\0';
        libqt_string sigval3 = errorString_str;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QImageCapture_ReadyForCaptureChanged(QImageCapture* self, bool ready) {
    self->readyForCaptureChanged(ready);
}

void QImageCapture_Connect_ReadyForCaptureChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, bool) = reinterpret_cast<void (*)(QImageCapture*, bool)>(slot);
    QImageCapture::connect(self, &QImageCapture::readyForCaptureChanged, [self, slotFunc](bool ready) {
        bool sigval1 = ready;
        slotFunc(self, sigval1);
    });
}

void QImageCapture_MetaDataChanged(QImageCapture* self) {
    self->metaDataChanged();
}

void QImageCapture_Connect_MetaDataChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::metaDataChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QImageCapture_FileFormatChanged(QImageCapture* self) {
    self->fileFormatChanged();
}

void QImageCapture_Connect_FileFormatChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::fileFormatChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QImageCapture_QualityChanged(QImageCapture* self) {
    self->qualityChanged();
}

void QImageCapture_Connect_QualityChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::qualityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QImageCapture_ResolutionChanged(QImageCapture* self) {
    self->resolutionChanged();
}

void QImageCapture_Connect_ResolutionChanged(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*) = reinterpret_cast<void (*)(QImageCapture*)>(slot);
    QImageCapture::connect(self, &QImageCapture::resolutionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QImageCapture_ImageExposed(QImageCapture* self, int id) {
    self->imageExposed(static_cast<int>(id));
}

void QImageCapture_Connect_ImageExposed(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int) = reinterpret_cast<void (*)(QImageCapture*, int)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageExposed, [self, slotFunc](int id) {
        int sigval1 = id;
        slotFunc(self, sigval1);
    });
}

void QImageCapture_ImageCaptured(QImageCapture* self, int id, QImage* preview) {
    self->imageCaptured(static_cast<int>(id), *preview);
}

void QImageCapture_Connect_ImageCaptured(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, QImage*) = reinterpret_cast<void (*)(QImageCapture*, int, QImage*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageCaptured, [self, slotFunc](int id, const QImage& preview) {
        int sigval1 = id;
        const QImage& preview_ret = preview;
        // Cast returned reference into pointer
        QImage* sigval2 = const_cast<QImage*>(&preview_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QImageCapture_ImageMetadataAvailable(QImageCapture* self, int id, QMediaMetaData* metaData) {
    self->imageMetadataAvailable(static_cast<int>(id), *metaData);
}

void QImageCapture_Connect_ImageMetadataAvailable(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, QMediaMetaData*) = reinterpret_cast<void (*)(QImageCapture*, int, QMediaMetaData*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageMetadataAvailable, [self, slotFunc](int id, const QMediaMetaData& metaData) {
        int sigval1 = id;
        const QMediaMetaData& metaData_ret = metaData;
        // Cast returned reference into pointer
        QMediaMetaData* sigval2 = const_cast<QMediaMetaData*>(&metaData_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QImageCapture_ImageAvailable(QImageCapture* self, int id, QVideoFrame* frame) {
    self->imageAvailable(static_cast<int>(id), *frame);
}

void QImageCapture_Connect_ImageAvailable(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, QVideoFrame*) = reinterpret_cast<void (*)(QImageCapture*, int, QVideoFrame*)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageAvailable, [self, slotFunc](int id, const QVideoFrame& frame) {
        int sigval1 = id;
        const QVideoFrame& frame_ret = frame;
        // Cast returned reference into pointer
        QVideoFrame* sigval2 = const_cast<QVideoFrame*>(&frame_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QImageCapture_ImageSaved(QImageCapture* self, int id, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->imageSaved(static_cast<int>(id), fileName_QString);
}

void QImageCapture_Connect_ImageSaved(QImageCapture* self, intptr_t slot) {
    void (*slotFunc)(QImageCapture*, int, libqt_string) = reinterpret_cast<void (*)(QImageCapture*, int, libqt_string)>(slot);
    QImageCapture::connect(self, &QImageCapture::imageSaved, [self, slotFunc](int id, const QString& fileName) {
        int sigval1 = id;
        const QString fileName_ret = fileName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray fileName_b = fileName_ret.toUtf8();
        libqt_string fileName_str;
        fileName_str.len = fileName_b.length();
        fileName_str.data = static_cast<char*>(malloc((fileName_str.len + 1) * sizeof(char)));
        memcpy(fileName_str.data, fileName_b.data(), fileName_str.len);
        fileName_str.data[fileName_str.len] = '\0';
        libqt_string sigval2 = fileName_str;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QImageCapture_Tr2(const char* s, const char* c) {
    QString _ret = QImageCapture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QImageCapture_Tr3(const char* s, const char* c, int n) {
    QString _ret = QImageCapture::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QImageCapture_CaptureToFile1(QImageCapture* self, libqt_string location) {
    QString location_QString = QString::fromUtf8(location.data, location.len);
    return self->captureToFile(location_QString);
}

// Derived class handler implementation
bool QImageCapture_Event(QImageCapture* self, QEvent* event) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        return vqimagecapture->event(event);
    } else {
        return vqimagecapture->event(event);
    }
}

// Base class handler implementation
bool QImageCapture_QBaseEvent(QImageCapture* self, QEvent* event) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_Event_IsBase(true);
        return vqimagecapture->event(event);
    } else {
        return vqimagecapture->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnEvent(QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_Event_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageCapture_EventFilter(QImageCapture* self, QObject* watched, QEvent* event) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        return vqimagecapture->eventFilter(watched, event);
    } else {
        return vqimagecapture->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QImageCapture_QBaseEventFilter(QImageCapture* self, QObject* watched, QEvent* event) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_EventFilter_IsBase(true);
        return vqimagecapture->eventFilter(watched, event);
    } else {
        return vqimagecapture->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnEventFilter(QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_EventFilter_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageCapture_TimerEvent(QImageCapture* self, QTimerEvent* event) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->timerEvent(event);
    } else {
        vqimagecapture->timerEvent(event);
    }
}

// Base class handler implementation
void QImageCapture_QBaseTimerEvent(QImageCapture* self, QTimerEvent* event) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_TimerEvent_IsBase(true);
        vqimagecapture->timerEvent(event);
    } else {
        vqimagecapture->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnTimerEvent(QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_TimerEvent_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageCapture_ChildEvent(QImageCapture* self, QChildEvent* event) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->childEvent(event);
    } else {
        vqimagecapture->childEvent(event);
    }
}

// Base class handler implementation
void QImageCapture_QBaseChildEvent(QImageCapture* self, QChildEvent* event) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_ChildEvent_IsBase(true);
        vqimagecapture->childEvent(event);
    } else {
        vqimagecapture->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnChildEvent(QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_ChildEvent_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageCapture_CustomEvent(QImageCapture* self, QEvent* event) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->customEvent(event);
    } else {
        vqimagecapture->customEvent(event);
    }
}

// Base class handler implementation
void QImageCapture_QBaseCustomEvent(QImageCapture* self, QEvent* event) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_CustomEvent_IsBase(true);
        vqimagecapture->customEvent(event);
    } else {
        vqimagecapture->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnCustomEvent(QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_CustomEvent_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageCapture_ConnectNotify(QImageCapture* self, QMetaMethod* signal) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->connectNotify(*signal);
    } else {
        vqimagecapture->connectNotify(*signal);
    }
}

// Base class handler implementation
void QImageCapture_QBaseConnectNotify(QImageCapture* self, QMetaMethod* signal) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_ConnectNotify_IsBase(true);
        vqimagecapture->connectNotify(*signal);
    } else {
        vqimagecapture->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnConnectNotify(QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_ConnectNotify_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QImageCapture_DisconnectNotify(QImageCapture* self, QMetaMethod* signal) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->disconnectNotify(*signal);
    } else {
        vqimagecapture->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QImageCapture_QBaseDisconnectNotify(QImageCapture* self, QMetaMethod* signal) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_DisconnectNotify_IsBase(true);
        vqimagecapture->disconnectNotify(*signal);
    } else {
        vqimagecapture->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnDisconnectNotify(QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = dynamic_cast<VirtualQImageCapture*>(self)) {
        vqimagecapture->setQImageCapture_DisconnectNotify_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QImageCapture_Sender(const QImageCapture* self) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        return vqimagecapture->sender();
    } else {
        return vqimagecapture->sender();
    }
}

// Base class handler implementation
QObject* QImageCapture_QBaseSender(const QImageCapture* self) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        vqimagecapture->setQImageCapture_Sender_IsBase(true);
        return vqimagecapture->sender();
    } else {
        return vqimagecapture->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnSender(const QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        vqimagecapture->setQImageCapture_Sender_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageCapture_SenderSignalIndex(const QImageCapture* self) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        return vqimagecapture->senderSignalIndex();
    } else {
        return vqimagecapture->senderSignalIndex();
    }
}

// Base class handler implementation
int QImageCapture_QBaseSenderSignalIndex(const QImageCapture* self) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        vqimagecapture->setQImageCapture_SenderSignalIndex_IsBase(true);
        return vqimagecapture->senderSignalIndex();
    } else {
        return vqimagecapture->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnSenderSignalIndex(const QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        vqimagecapture->setQImageCapture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QImageCapture_Receivers(const QImageCapture* self, const char* signal) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        return vqimagecapture->receivers(signal);
    } else {
        return vqimagecapture->receivers(signal);
    }
}

// Base class handler implementation
int QImageCapture_QBaseReceivers(const QImageCapture* self, const char* signal) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        vqimagecapture->setQImageCapture_Receivers_IsBase(true);
        return vqimagecapture->receivers(signal);
    } else {
        return vqimagecapture->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnReceivers(const QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        vqimagecapture->setQImageCapture_Receivers_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImageCapture_IsSignalConnected(const QImageCapture* self, QMetaMethod* signal) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        return vqimagecapture->isSignalConnected(*signal);
    } else {
        return vqimagecapture->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QImageCapture_QBaseIsSignalConnected(const QImageCapture* self, QMetaMethod* signal) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        vqimagecapture->setQImageCapture_IsSignalConnected_IsBase(true);
        return vqimagecapture->isSignalConnected(*signal);
    } else {
        return vqimagecapture->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QImageCapture_OnIsSignalConnected(const QImageCapture* self, intptr_t slot) {
    if (auto* vqimagecapture = const_cast<VirtualQImageCapture*>(dynamic_cast<const VirtualQImageCapture*>(self))) {
        vqimagecapture->setQImageCapture_IsSignalConnected_Callback(reinterpret_cast<VirtualQImageCapture::QImageCapture_IsSignalConnected_Callback>(slot));
    }
}

void QImageCapture_Delete(QImageCapture* self) {
    delete self;
}
