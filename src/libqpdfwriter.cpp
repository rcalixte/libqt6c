#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMarginsF>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPdfWriter>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qpdfwriter.h>
#include "libqpdfwriter.hpp"
#include "libqpdfwriter.hxx"

QPdfWriter* QPdfWriter_new(libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualQPdfWriter(filename_QString);
}

QPdfWriter* QPdfWriter_new2(QIODevice* device) {
    return new VirtualQPdfWriter(device);
}

QMetaObject* QPdfWriter_MetaObject(const QPdfWriter* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfWriter_Metacast(QPdfWriter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfWriter_Metacall(QPdfWriter* self, int param1, int param2, void** param3) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPdfWriter_OnMetacall(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_Metacall_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPdfWriter_QBaseMetacall(QPdfWriter* self, int param1, int param2, void** param3) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_Metacall_IsBase(true);
        return vqpdfwriter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPdfWriter_Tr(const char* s) {
    QString _ret = QPdfWriter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPdfWriter_SetPdfVersion(QPdfWriter* self, int version) {
    self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

int QPdfWriter_PdfVersion(const QPdfWriter* self) {
    return static_cast<int>(self->pdfVersion());
}

libqt_string QPdfWriter_Title(const QPdfWriter* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPdfWriter_SetTitle(QPdfWriter* self, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string QPdfWriter_Creator(const QPdfWriter* self) {
    QString _ret = self->creator();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPdfWriter_SetCreator(QPdfWriter* self, libqt_string creator) {
    QString creator_QString = QString::fromUtf8(creator.data, creator.len);
    self->setCreator(creator_QString);
}

void QPdfWriter_SetResolution(QPdfWriter* self, int resolution) {
    self->setResolution(static_cast<int>(resolution));
}

int QPdfWriter_Resolution(const QPdfWriter* self) {
    return self->resolution();
}

void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, libqt_string xmpMetadata) {
    QByteArray xmpMetadata_QByteArray(xmpMetadata.data, xmpMetadata.len);
    self->setDocumentXmpMetadata(xmpMetadata_QByteArray);
}

libqt_string QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self) {
    QByteArray _qb = self->documentXmpMetadata();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPdfWriter_AddFileAttachment(QPdfWriter* self, libqt_string fileName, libqt_string data) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray data_QByteArray(data.data, data.len);
    self->addFileAttachment(fileName_QString, data_QByteArray);
}

libqt_string QPdfWriter_Tr2(const char* s, const char* c) {
    QString _ret = QPdfWriter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPdfWriter_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPdfWriter::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPdfWriter_AddFileAttachment3(QPdfWriter* self, libqt_string fileName, libqt_string data, libqt_string mimeType) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray data_QByteArray(data.data, data.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->addFileAttachment(fileName_QString, data_QByteArray, mimeType_QString);
}

// Derived class handler implementation
bool QPdfWriter_NewPage(QPdfWriter* self) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        return vqpdfwriter->newPage();
    } else {
        return vqpdfwriter->newPage();
    }
}

// Base class handler implementation
bool QPdfWriter_QBaseNewPage(QPdfWriter* self) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_NewPage_IsBase(true);
        return vqpdfwriter->newPage();
    } else {
        return vqpdfwriter->newPage();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnNewPage(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_NewPage_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_NewPage_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPdfWriter_PaintEngine(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->paintEngine();
    } else {
        return vqpdfwriter->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPdfWriter_QBasePaintEngine(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_PaintEngine_IsBase(true);
        return vqpdfwriter->paintEngine();
    } else {
        return vqpdfwriter->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnPaintEngine(const QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_PaintEngine_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfWriter_Metric(const QPdfWriter* self, int id) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(id));
    } else {
        return vqpdfwriter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(id));
    }
}

// Base class handler implementation
int QPdfWriter_QBaseMetric(const QPdfWriter* self, int id) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_Metric_IsBase(true);
        return vqpdfwriter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(id));
    } else {
        return vqpdfwriter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(id));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnMetric(const QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_Metric_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfWriter_Event(QPdfWriter* self, QEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        return vqpdfwriter->event(event);
    } else {
        return vqpdfwriter->event(event);
    }
}

// Base class handler implementation
bool QPdfWriter_QBaseEvent(QPdfWriter* self, QEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_Event_IsBase(true);
        return vqpdfwriter->event(event);
    } else {
        return vqpdfwriter->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnEvent(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_Event_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfWriter_EventFilter(QPdfWriter* self, QObject* watched, QEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        return vqpdfwriter->eventFilter(watched, event);
    } else {
        return vqpdfwriter->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPdfWriter_QBaseEventFilter(QPdfWriter* self, QObject* watched, QEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_EventFilter_IsBase(true);
        return vqpdfwriter->eventFilter(watched, event);
    } else {
        return vqpdfwriter->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnEventFilter(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_EventFilter_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfWriter_TimerEvent(QPdfWriter* self, QTimerEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->timerEvent(event);
    } else {
        vqpdfwriter->timerEvent(event);
    }
}

// Base class handler implementation
void QPdfWriter_QBaseTimerEvent(QPdfWriter* self, QTimerEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_TimerEvent_IsBase(true);
        vqpdfwriter->timerEvent(event);
    } else {
        vqpdfwriter->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnTimerEvent(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_TimerEvent_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfWriter_ChildEvent(QPdfWriter* self, QChildEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->childEvent(event);
    } else {
        vqpdfwriter->childEvent(event);
    }
}

// Base class handler implementation
void QPdfWriter_QBaseChildEvent(QPdfWriter* self, QChildEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_ChildEvent_IsBase(true);
        vqpdfwriter->childEvent(event);
    } else {
        vqpdfwriter->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnChildEvent(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_ChildEvent_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfWriter_CustomEvent(QPdfWriter* self, QEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->customEvent(event);
    } else {
        vqpdfwriter->customEvent(event);
    }
}

// Base class handler implementation
void QPdfWriter_QBaseCustomEvent(QPdfWriter* self, QEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_CustomEvent_IsBase(true);
        vqpdfwriter->customEvent(event);
    } else {
        vqpdfwriter->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnCustomEvent(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_CustomEvent_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfWriter_ConnectNotify(QPdfWriter* self, QMetaMethod* signal) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->connectNotify(*signal);
    } else {
        vqpdfwriter->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfWriter_QBaseConnectNotify(QPdfWriter* self, QMetaMethod* signal) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_ConnectNotify_IsBase(true);
        vqpdfwriter->connectNotify(*signal);
    } else {
        vqpdfwriter->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnConnectNotify(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_ConnectNotify_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfWriter_DisconnectNotify(QPdfWriter* self, QMetaMethod* signal) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->disconnectNotify(*signal);
    } else {
        vqpdfwriter->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfWriter_QBaseDisconnectNotify(QPdfWriter* self, QMetaMethod* signal) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_DisconnectNotify_IsBase(true);
        vqpdfwriter->disconnectNotify(*signal);
    } else {
        vqpdfwriter->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnDisconnectNotify(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_DisconnectNotify_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfWriter_SetPageLayout(QPdfWriter* self, QPageLayout* pageLayout) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        return vqpdfwriter->setPageLayout(*pageLayout);
    } else {
        return vqpdfwriter->setPageLayout(*pageLayout);
    }
}

// Base class handler implementation
bool QPdfWriter_QBaseSetPageLayout(QPdfWriter* self, QPageLayout* pageLayout) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_SetPageLayout_IsBase(true);
        return vqpdfwriter->setPageLayout(*pageLayout);
    } else {
        return vqpdfwriter->setPageLayout(*pageLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSetPageLayout(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_SetPageLayout_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SetPageLayout_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfWriter_SetPageSize(QPdfWriter* self, QPageSize* pageSize) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        return vqpdfwriter->setPageSize(*pageSize);
    } else {
        return vqpdfwriter->setPageSize(*pageSize);
    }
}

// Base class handler implementation
bool QPdfWriter_QBaseSetPageSize(QPdfWriter* self, QPageSize* pageSize) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_SetPageSize_IsBase(true);
        return vqpdfwriter->setPageSize(*pageSize);
    } else {
        return vqpdfwriter->setPageSize(*pageSize);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSetPageSize(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_SetPageSize_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SetPageSize_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfWriter_SetPageOrientation(QPdfWriter* self, int orientation) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        return vqpdfwriter->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    } else {
        return vqpdfwriter->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    }
}

// Base class handler implementation
bool QPdfWriter_QBaseSetPageOrientation(QPdfWriter* self, int orientation) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_SetPageOrientation_IsBase(true);
        return vqpdfwriter->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    } else {
        return vqpdfwriter->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSetPageOrientation(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_SetPageOrientation_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SetPageOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfWriter_SetPageMargins(QPdfWriter* self, QMarginsF* margins, int units) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        return vqpdfwriter->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    } else {
        return vqpdfwriter->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    }
}

// Base class handler implementation
bool QPdfWriter_QBaseSetPageMargins(QPdfWriter* self, QMarginsF* margins, int units) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_SetPageMargins_IsBase(true);
        return vqpdfwriter->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    } else {
        return vqpdfwriter->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSetPageMargins(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_SetPageMargins_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SetPageMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfWriter_SetPageRanges(QPdfWriter* self, QPageRanges* ranges) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setPageRanges(*ranges);
    } else {
        vqpdfwriter->setPageRanges(*ranges);
    }
}

// Base class handler implementation
void QPdfWriter_QBaseSetPageRanges(QPdfWriter* self, QPageRanges* ranges) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_SetPageRanges_IsBase(true);
        vqpdfwriter->setPageRanges(*ranges);
    } else {
        vqpdfwriter->setPageRanges(*ranges);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSetPageRanges(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->setQPdfWriter_SetPageRanges_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SetPageRanges_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfWriter_DevType(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->devType();
    } else {
        return vqpdfwriter->devType();
    }
}

// Base class handler implementation
int QPdfWriter_QBaseDevType(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_DevType_IsBase(true);
        return vqpdfwriter->devType();
    } else {
        return vqpdfwriter->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnDevType(const QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_DevType_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfWriter_InitPainter(const QPdfWriter* self, QPainter* painter) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->initPainter(painter);
    } else {
        vqpdfwriter->initPainter(painter);
    }
}

// Base class handler implementation
void QPdfWriter_QBaseInitPainter(const QPdfWriter* self, QPainter* painter) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_InitPainter_IsBase(true);
        vqpdfwriter->initPainter(painter);
    } else {
        vqpdfwriter->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnInitPainter(const QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_InitPainter_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPdfWriter_Redirected(const QPdfWriter* self, QPoint* offset) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->redirected(offset);
    } else {
        return vqpdfwriter->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPdfWriter_QBaseRedirected(const QPdfWriter* self, QPoint* offset) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_Redirected_IsBase(true);
        return vqpdfwriter->redirected(offset);
    } else {
        return vqpdfwriter->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnRedirected(const QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_Redirected_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPdfWriter_SharedPainter(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->sharedPainter();
    } else {
        return vqpdfwriter->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPdfWriter_QBaseSharedPainter(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_SharedPainter_IsBase(true);
        return vqpdfwriter->sharedPainter();
    } else {
        return vqpdfwriter->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSharedPainter(const QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_SharedPainter_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPdfWriter_Sender(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->sender();
    } else {
        return vqpdfwriter->sender();
    }
}

// Base class handler implementation
QObject* QPdfWriter_QBaseSender(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_Sender_IsBase(true);
        return vqpdfwriter->sender();
    } else {
        return vqpdfwriter->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSender(const QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_Sender_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfWriter_SenderSignalIndex(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->senderSignalIndex();
    } else {
        return vqpdfwriter->senderSignalIndex();
    }
}

// Base class handler implementation
int QPdfWriter_QBaseSenderSignalIndex(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_SenderSignalIndex_IsBase(true);
        return vqpdfwriter->senderSignalIndex();
    } else {
        return vqpdfwriter->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSenderSignalIndex(const QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfWriter_Receivers(const QPdfWriter* self, const char* signal) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->receivers(signal);
    } else {
        return vqpdfwriter->receivers(signal);
    }
}

// Base class handler implementation
int QPdfWriter_QBaseReceivers(const QPdfWriter* self, const char* signal) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_Receivers_IsBase(true);
        return vqpdfwriter->receivers(signal);
    } else {
        return vqpdfwriter->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnReceivers(const QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_Receivers_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfWriter_IsSignalConnected(const QPdfWriter* self, QMetaMethod* signal) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->isSignalConnected(*signal);
    } else {
        return vqpdfwriter->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPdfWriter_QBaseIsSignalConnected(const QPdfWriter* self, QMetaMethod* signal) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_IsSignalConnected_IsBase(true);
        return vqpdfwriter->isSignalConnected(*signal);
    } else {
        return vqpdfwriter->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnIsSignalConnected(const QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->setQPdfWriter_IsSignalConnected_Callback(reinterpret_cast<VirtualQPdfWriter::QPdfWriter_IsSignalConnected_Callback>(slot));
    }
}

void QPdfWriter_Delete(QPdfWriter* self) {
    delete self;
}
