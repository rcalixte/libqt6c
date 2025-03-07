#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QCursor>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsEffect>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsObject>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSvgItem>
#include <QGraphicsTransform>
#include <QGraphicsWidget>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QSvgRenderer>
#include <QThread>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicssvgitem.h>
#include "libqgraphicssvgitem.hpp"
#include "libqgraphicssvgitem.hxx"

QGraphicsSvgItem* QGraphicsSvgItem_new() {
    return new VirtualQGraphicsSvgItem();
}

QGraphicsSvgItem* QGraphicsSvgItem_new2(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQGraphicsSvgItem(fileName_QString);
}

QGraphicsSvgItem* QGraphicsSvgItem_new3(QGraphicsItem* parentItem) {
    return new VirtualQGraphicsSvgItem(parentItem);
}

QGraphicsSvgItem* QGraphicsSvgItem_new4(libqt_string fileName, QGraphicsItem* parentItem) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQGraphicsSvgItem(fileName_QString, parentItem);
}

QMetaObject* QGraphicsSvgItem_MetaObject(const QGraphicsSvgItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsSvgItem_Metacast(QGraphicsSvgItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsSvgItem_Metacall(QGraphicsSvgItem* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsSvgItem_OnMetacall(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Metacall_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsSvgItem_QBaseMetacall(QGraphicsSvgItem* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Metacall_IsBase(true);
        return vqgraphicssvgitem->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsSvgItem_Tr(const char* s) {
    QString _ret = QGraphicsSvgItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGraphicsSvgItem_SetSharedRenderer(QGraphicsSvgItem* self, QSvgRenderer* renderer) {
    self->setSharedRenderer(renderer);
}

QSvgRenderer* QGraphicsSvgItem_Renderer(const QGraphicsSvgItem* self) {
    return self->renderer();
}

void QGraphicsSvgItem_SetElementId(QGraphicsSvgItem* self, libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setElementId(id_QString);
}

libqt_string QGraphicsSvgItem_ElementId(const QGraphicsSvgItem* self) {
    QString _ret = self->elementId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGraphicsSvgItem_SetCachingEnabled(QGraphicsSvgItem* self, bool cachingEnabled) {
    self->setCachingEnabled(cachingEnabled);
}

bool QGraphicsSvgItem_IsCachingEnabled(const QGraphicsSvgItem* self) {
    return self->isCachingEnabled();
}

void QGraphicsSvgItem_SetMaximumCacheSize(QGraphicsSvgItem* self, QSize* size) {
    self->setMaximumCacheSize(*size);
}

QSize* QGraphicsSvgItem_MaximumCacheSize(const QGraphicsSvgItem* self) {
    return new QSize(self->maximumCacheSize());
}

libqt_string QGraphicsSvgItem_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsSvgItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsSvgItem_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsSvgItem::tr(s, c, static_cast<int>(n));
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
QRectF* QGraphicsSvgItem_BoundingRect(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return new QRectF(vqgraphicssvgitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsSvgItem_QBaseBoundingRect(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicssvgitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnBoundingRect(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_Paint(QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->paint(painter, option, widget);
    } else {
        vqgraphicssvgitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBasePaint(QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Paint_IsBase(true);
        vqgraphicssvgitem->paint(painter, option, widget);
    } else {
        vqgraphicssvgitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnPaint(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsSvgItem_Type(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->type();
    } else {
        return vqgraphicssvgitem->type();
    }
}

// Base class handler implementation
int QGraphicsSvgItem_QBaseType(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Type_IsBase(true);
        return vqgraphicssvgitem->type();
    } else {
        return vqgraphicssvgitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnType(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Type_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_Event(QGraphicsSvgItem* self, QEvent* ev) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        return vqgraphicssvgitem->event(ev);
    } else {
        return vqgraphicssvgitem->event(ev);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseEvent(QGraphicsSvgItem* self, QEvent* ev) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Event_IsBase(true);
        return vqgraphicssvgitem->event(ev);
    } else {
        return vqgraphicssvgitem->event(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Event_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_EventFilter(QGraphicsSvgItem* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        return vqgraphicssvgitem->eventFilter(watched, event);
    } else {
        return vqgraphicssvgitem->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseEventFilter(QGraphicsSvgItem* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_EventFilter_IsBase(true);
        return vqgraphicssvgitem->eventFilter(watched, event);
    } else {
        return vqgraphicssvgitem->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnEventFilter(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_TimerEvent(QGraphicsSvgItem* self, QTimerEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->timerEvent(event);
    } else {
        vqgraphicssvgitem->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseTimerEvent(QGraphicsSvgItem* self, QTimerEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_TimerEvent_IsBase(true);
        vqgraphicssvgitem->timerEvent(event);
    } else {
        vqgraphicssvgitem->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnTimerEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_ChildEvent(QGraphicsSvgItem* self, QChildEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->childEvent(event);
    } else {
        vqgraphicssvgitem->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseChildEvent(QGraphicsSvgItem* self, QChildEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ChildEvent_IsBase(true);
        vqgraphicssvgitem->childEvent(event);
    } else {
        vqgraphicssvgitem->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnChildEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_CustomEvent(QGraphicsSvgItem* self, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->customEvent(event);
    } else {
        vqgraphicssvgitem->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseCustomEvent(QGraphicsSvgItem* self, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CustomEvent_IsBase(true);
        vqgraphicssvgitem->customEvent(event);
    } else {
        vqgraphicssvgitem->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnCustomEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_ConnectNotify(QGraphicsSvgItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->connectNotify(*signal);
    } else {
        vqgraphicssvgitem->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseConnectNotify(QGraphicsSvgItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ConnectNotify_IsBase(true);
        vqgraphicssvgitem->connectNotify(*signal);
    } else {
        vqgraphicssvgitem->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnConnectNotify(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_DisconnectNotify(QGraphicsSvgItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->disconnectNotify(*signal);
    } else {
        vqgraphicssvgitem->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseDisconnectNotify(QGraphicsSvgItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DisconnectNotify_IsBase(true);
        vqgraphicssvgitem->disconnectNotify(*signal);
    } else {
        vqgraphicssvgitem->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDisconnectNotify(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_Advance(QGraphicsSvgItem* self, int phase) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicssvgitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseAdvance(QGraphicsSvgItem* self, int phase) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Advance_IsBase(true);
        vqgraphicssvgitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicssvgitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnAdvance(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsSvgItem_Shape(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return new QPainterPath(vqgraphicssvgitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsSvgItem_QBaseShape(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicssvgitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnShape(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_Contains(const QGraphicsSvgItem* self, QPointF* point) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->contains(*point);
    } else {
        return vqgraphicssvgitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseContains(const QGraphicsSvgItem* self, QPointF* point) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Contains_IsBase(true);
        return vqgraphicssvgitem->contains(*point);
    } else {
        return vqgraphicssvgitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnContains(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_CollidesWithItem(const QGraphicsSvgItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicssvgitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseCollidesWithItem(const QGraphicsSvgItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CollidesWithItem_IsBase(true);
        return vqgraphicssvgitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicssvgitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnCollidesWithItem(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_CollidesWithPath(const QGraphicsSvgItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicssvgitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseCollidesWithPath(const QGraphicsSvgItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CollidesWithPath_IsBase(true);
        return vqgraphicssvgitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicssvgitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnCollidesWithPath(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_IsObscuredBy(const QGraphicsSvgItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->isObscuredBy(item);
    } else {
        return vqgraphicssvgitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseIsObscuredBy(const QGraphicsSvgItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_IsObscuredBy_IsBase(true);
        return vqgraphicssvgitem->isObscuredBy(item);
    } else {
        return vqgraphicssvgitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnIsObscuredBy(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsSvgItem_OpaqueArea(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return new QPainterPath(vqgraphicssvgitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsSvgItem_QBaseOpaqueArea(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicssvgitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnOpaqueArea(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_SceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        return vqgraphicssvgitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicssvgitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseSceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SceneEventFilter_IsBase(true);
        return vqgraphicssvgitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicssvgitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSceneEventFilter(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_SceneEvent(QGraphicsSvgItem* self, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        return vqgraphicssvgitem->sceneEvent(event);
    } else {
        return vqgraphicssvgitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseSceneEvent(QGraphicsSvgItem* self, QEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SceneEvent_IsBase(true);
        return vqgraphicssvgitem->sceneEvent(event);
    } else {
        return vqgraphicssvgitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSceneEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_ContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->contextMenuEvent(event);
    } else {
        vqgraphicssvgitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ContextMenuEvent_IsBase(true);
        vqgraphicssvgitem->contextMenuEvent(event);
    } else {
        vqgraphicssvgitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnContextMenuEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_DragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->dragEnterEvent(event);
    } else {
        vqgraphicssvgitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseDragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragEnterEvent_IsBase(true);
        vqgraphicssvgitem->dragEnterEvent(event);
    } else {
        vqgraphicssvgitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDragEnterEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_DragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->dragLeaveEvent(event);
    } else {
        vqgraphicssvgitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseDragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragLeaveEvent_IsBase(true);
        vqgraphicssvgitem->dragLeaveEvent(event);
    } else {
        vqgraphicssvgitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDragLeaveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_DragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->dragMoveEvent(event);
    } else {
        vqgraphicssvgitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseDragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragMoveEvent_IsBase(true);
        vqgraphicssvgitem->dragMoveEvent(event);
    } else {
        vqgraphicssvgitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDragMoveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_DropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->dropEvent(event);
    } else {
        vqgraphicssvgitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseDropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DropEvent_IsBase(true);
        vqgraphicssvgitem->dropEvent(event);
    } else {
        vqgraphicssvgitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnDropEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_FocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->focusInEvent(event);
    } else {
        vqgraphicssvgitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseFocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_FocusInEvent_IsBase(true);
        vqgraphicssvgitem->focusInEvent(event);
    } else {
        vqgraphicssvgitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnFocusInEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_FocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->focusOutEvent(event);
    } else {
        vqgraphicssvgitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseFocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_FocusOutEvent_IsBase(true);
        vqgraphicssvgitem->focusOutEvent(event);
    } else {
        vqgraphicssvgitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnFocusOutEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_HoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->hoverEnterEvent(event);
    } else {
        vqgraphicssvgitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseHoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverEnterEvent_IsBase(true);
        vqgraphicssvgitem->hoverEnterEvent(event);
    } else {
        vqgraphicssvgitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnHoverEnterEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_HoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->hoverMoveEvent(event);
    } else {
        vqgraphicssvgitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseHoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverMoveEvent_IsBase(true);
        vqgraphicssvgitem->hoverMoveEvent(event);
    } else {
        vqgraphicssvgitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnHoverMoveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_HoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->hoverLeaveEvent(event);
    } else {
        vqgraphicssvgitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseHoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverLeaveEvent_IsBase(true);
        vqgraphicssvgitem->hoverLeaveEvent(event);
    } else {
        vqgraphicssvgitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnHoverLeaveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_KeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->keyPressEvent(event);
    } else {
        vqgraphicssvgitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseKeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_KeyPressEvent_IsBase(true);
        vqgraphicssvgitem->keyPressEvent(event);
    } else {
        vqgraphicssvgitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnKeyPressEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_KeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->keyReleaseEvent(event);
    } else {
        vqgraphicssvgitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseKeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_KeyReleaseEvent_IsBase(true);
        vqgraphicssvgitem->keyReleaseEvent(event);
    } else {
        vqgraphicssvgitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnKeyReleaseEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_MousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->mousePressEvent(event);
    } else {
        vqgraphicssvgitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseMousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MousePressEvent_IsBase(true);
        vqgraphicssvgitem->mousePressEvent(event);
    } else {
        vqgraphicssvgitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMousePressEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_MouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->mouseMoveEvent(event);
    } else {
        vqgraphicssvgitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseMouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseMoveEvent_IsBase(true);
        vqgraphicssvgitem->mouseMoveEvent(event);
    } else {
        vqgraphicssvgitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMouseMoveEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_MouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->mouseReleaseEvent(event);
    } else {
        vqgraphicssvgitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseMouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseReleaseEvent_IsBase(true);
        vqgraphicssvgitem->mouseReleaseEvent(event);
    } else {
        vqgraphicssvgitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMouseReleaseEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_MouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicssvgitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseMouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicssvgitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicssvgitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnMouseDoubleClickEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_WheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->wheelEvent(event);
    } else {
        vqgraphicssvgitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseWheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_WheelEvent_IsBase(true);
        vqgraphicssvgitem->wheelEvent(event);
    } else {
        vqgraphicssvgitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnWheelEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_InputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->inputMethodEvent(event);
    } else {
        vqgraphicssvgitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseInputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_InputMethodEvent_IsBase(true);
        vqgraphicssvgitem->inputMethodEvent(event);
    } else {
        vqgraphicssvgitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnInputMethodEvent(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsSvgItem_InputMethodQuery(const QGraphicsSvgItem* self, int query) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return new QVariant(vqgraphicssvgitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsSvgItem_QBaseInputMethodQuery(const QGraphicsSvgItem* self, int query) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicssvgitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnInputMethodQuery(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsSvgItem_ItemChange(QGraphicsSvgItem* self, int change, QVariant* value) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        return new QVariant(vqgraphicssvgitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsSvgItem_QBaseItemChange(QGraphicsSvgItem* self, int change, QVariant* value) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicssvgitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnItemChange(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_SupportsExtension(const QGraphicsSvgItem* self, int extension) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->supportsExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension));
    } else {
        return vqgraphicssvgitem->supportsExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseSupportsExtension(const QGraphicsSvgItem* self, int extension) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SupportsExtension_IsBase(true);
        return vqgraphicssvgitem->supportsExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension));
    } else {
        return vqgraphicssvgitem->supportsExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSupportsExtension(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_SetExtension(QGraphicsSvgItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension), *variant);
    } else {
        vqgraphicssvgitem->setExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseSetExtension(QGraphicsSvgItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SetExtension_IsBase(true);
        vqgraphicssvgitem->setExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension), *variant);
    } else {
        vqgraphicssvgitem->setExtension(static_cast<VirtualQGraphicsSvgItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSetExtension(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsSvgItem_Extension(const QGraphicsSvgItem* self, QVariant* variant) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return new QVariant(vqgraphicssvgitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsSvgItem_QBaseExtension(const QGraphicsSvgItem* self, QVariant* variant) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Extension_IsBase(true);
        return new QVariant(vqgraphicssvgitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnExtension(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_UpdateMicroFocus(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->updateMicroFocus();
    } else {
        vqgraphicssvgitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseUpdateMicroFocus(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_UpdateMicroFocus_IsBase(true);
        vqgraphicssvgitem->updateMicroFocus();
    } else {
        vqgraphicssvgitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnUpdateMicroFocus(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsSvgItem_Sender(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->sender();
    } else {
        return vqgraphicssvgitem->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsSvgItem_QBaseSender(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Sender_IsBase(true);
        return vqgraphicssvgitem->sender();
    } else {
        return vqgraphicssvgitem->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSender(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Sender_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsSvgItem_SenderSignalIndex(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->senderSignalIndex();
    } else {
        return vqgraphicssvgitem->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsSvgItem_QBaseSenderSignalIndex(const QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SenderSignalIndex_IsBase(true);
        return vqgraphicssvgitem->senderSignalIndex();
    } else {
        return vqgraphicssvgitem->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnSenderSignalIndex(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsSvgItem_Receivers(const QGraphicsSvgItem* self, const char* signal) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->receivers(signal);
    } else {
        return vqgraphicssvgitem->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsSvgItem_QBaseReceivers(const QGraphicsSvgItem* self, const char* signal) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Receivers_IsBase(true);
        return vqgraphicssvgitem->receivers(signal);
    } else {
        return vqgraphicssvgitem->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnReceivers(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_Receivers_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSvgItem_IsSignalConnected(const QGraphicsSvgItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        return vqgraphicssvgitem->isSignalConnected(*signal);
    } else {
        return vqgraphicssvgitem->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsSvgItem_QBaseIsSignalConnected(const QGraphicsSvgItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_IsSignalConnected_IsBase(true);
        return vqgraphicssvgitem->isSignalConnected(*signal);
    } else {
        return vqgraphicssvgitem->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnIsSignalConnected(const QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = const_cast<VirtualQGraphicsSvgItem*>(dynamic_cast<const VirtualQGraphicsSvgItem*>(self))) {
        vqgraphicssvgitem->setQGraphicsSvgItem_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_AddToIndex(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->addToIndex();
    } else {
        vqgraphicssvgitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseAddToIndex(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_AddToIndex_IsBase(true);
        vqgraphicssvgitem->addToIndex();
    } else {
        vqgraphicssvgitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnAddToIndex(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_RemoveFromIndex(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->removeFromIndex();
    } else {
        vqgraphicssvgitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBaseRemoveFromIndex(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_RemoveFromIndex_IsBase(true);
        vqgraphicssvgitem->removeFromIndex();
    } else {
        vqgraphicssvgitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnRemoveFromIndex(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSvgItem_PrepareGeometryChange(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->prepareGeometryChange();
    } else {
        vqgraphicssvgitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsSvgItem_QBasePrepareGeometryChange(QGraphicsSvgItem* self) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_PrepareGeometryChange_IsBase(true);
        vqgraphicssvgitem->prepareGeometryChange();
    } else {
        vqgraphicssvgitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSvgItem_OnPrepareGeometryChange(QGraphicsSvgItem* self, intptr_t slot) {
    if (auto* vqgraphicssvgitem = dynamic_cast<VirtualQGraphicsSvgItem*>(self)) {
        vqgraphicssvgitem->setQGraphicsSvgItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsSvgItem::QGraphicsSvgItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsSvgItem_Delete(QGraphicsSvgItem* self) {
    delete self;
}
