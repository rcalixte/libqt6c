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
#include <QGraphicsTransform>
#include <QGraphicsVideoItem>
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
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QThread>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QVideoSink>
#include <QWidget>
#include <qgraphicsvideoitem.h>
#include "libqgraphicsvideoitem.hpp"
#include "libqgraphicsvideoitem.hxx"

QGraphicsVideoItem* QGraphicsVideoItem_new() {
    return new VirtualQGraphicsVideoItem();
}

QGraphicsVideoItem* QGraphicsVideoItem_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsVideoItem(parent);
}

QMetaObject* QGraphicsVideoItem_MetaObject(const QGraphicsVideoItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsVideoItem_Metacast(QGraphicsVideoItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsVideoItem_Metacall(QGraphicsVideoItem* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsVideoItem_OnMetacall(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Metacall_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsVideoItem_QBaseMetacall(QGraphicsVideoItem* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Metacall_IsBase(true);
        return vqgraphicsvideoitem->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsVideoItem_Tr(const char* s) {
    QString _ret = QGraphicsVideoItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QVideoSink* QGraphicsVideoItem_VideoSink(const QGraphicsVideoItem* self) {
    return self->videoSink();
}

int QGraphicsVideoItem_AspectRatioMode(const QGraphicsVideoItem* self) {
    return static_cast<int>(self->aspectRatioMode());
}

void QGraphicsVideoItem_SetAspectRatioMode(QGraphicsVideoItem* self, int mode) {
    self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

QPointF* QGraphicsVideoItem_Offset(const QGraphicsVideoItem* self) {
    return new QPointF(self->offset());
}

void QGraphicsVideoItem_SetOffset(QGraphicsVideoItem* self, QPointF* offset) {
    self->setOffset(*offset);
}

QSizeF* QGraphicsVideoItem_Size(const QGraphicsVideoItem* self) {
    return new QSizeF(self->size());
}

void QGraphicsVideoItem_SetSize(QGraphicsVideoItem* self, QSizeF* size) {
    self->setSize(*size);
}

QSizeF* QGraphicsVideoItem_NativeSize(const QGraphicsVideoItem* self) {
    return new QSizeF(self->nativeSize());
}

void QGraphicsVideoItem_NativeSizeChanged(QGraphicsVideoItem* self, QSizeF* size) {
    self->nativeSizeChanged(*size);
}

void QGraphicsVideoItem_Connect_NativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsVideoItem*, QSizeF*) = reinterpret_cast<void (*)(QGraphicsVideoItem*, QSizeF*)>(slot);
    QGraphicsVideoItem::connect(self, &QGraphicsVideoItem::nativeSizeChanged, [self, slotFunc](const QSizeF& size) {
        const QSizeF& size_ret = size;
        // Cast returned reference into pointer
        QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QGraphicsVideoItem_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsVideoItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsVideoItem_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsVideoItem::tr(s, c, static_cast<int>(n));
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
QRectF* QGraphicsVideoItem_BoundingRect(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return new QRectF(vqgraphicsvideoitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsVideoItem_QBaseBoundingRect(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicsvideoitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnBoundingRect(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_Paint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->paint(painter, option, widget);
    } else {
        vqgraphicsvideoitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBasePaint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Paint_IsBase(true);
        vqgraphicsvideoitem->paint(painter, option, widget);
    } else {
        vqgraphicsvideoitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnPaint(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsVideoItem_Type(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->type();
    } else {
        return vqgraphicsvideoitem->type();
    }
}

// Base class handler implementation
int QGraphicsVideoItem_QBaseType(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Type_IsBase(true);
        return vqgraphicsvideoitem->type();
    } else {
        return vqgraphicsvideoitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnType(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Type_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_TimerEvent(QGraphicsVideoItem* self, QTimerEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->timerEvent(event);
    } else {
        vqgraphicsvideoitem->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseTimerEvent(QGraphicsVideoItem* self, QTimerEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_TimerEvent_IsBase(true);
        vqgraphicsvideoitem->timerEvent(event);
    } else {
        vqgraphicsvideoitem->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnTimerEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsVideoItem_ItemChange(QGraphicsVideoItem* self, int change, QVariant* value) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        return new QVariant(vqgraphicsvideoitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsVideoItem_QBaseItemChange(QGraphicsVideoItem* self, int change, QVariant* value) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicsvideoitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnItemChange(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_Event(QGraphicsVideoItem* self, QEvent* ev) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        return vqgraphicsvideoitem->event(ev);
    } else {
        return vqgraphicsvideoitem->event(ev);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseEvent(QGraphicsVideoItem* self, QEvent* ev) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Event_IsBase(true);
        return vqgraphicsvideoitem->event(ev);
    } else {
        return vqgraphicsvideoitem->event(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Event_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_EventFilter(QGraphicsVideoItem* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        return vqgraphicsvideoitem->eventFilter(watched, event);
    } else {
        return vqgraphicsvideoitem->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseEventFilter(QGraphicsVideoItem* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_EventFilter_IsBase(true);
        return vqgraphicsvideoitem->eventFilter(watched, event);
    } else {
        return vqgraphicsvideoitem->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnEventFilter(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_ChildEvent(QGraphicsVideoItem* self, QChildEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->childEvent(event);
    } else {
        vqgraphicsvideoitem->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseChildEvent(QGraphicsVideoItem* self, QChildEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ChildEvent_IsBase(true);
        vqgraphicsvideoitem->childEvent(event);
    } else {
        vqgraphicsvideoitem->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnChildEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_CustomEvent(QGraphicsVideoItem* self, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->customEvent(event);
    } else {
        vqgraphicsvideoitem->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseCustomEvent(QGraphicsVideoItem* self, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CustomEvent_IsBase(true);
        vqgraphicsvideoitem->customEvent(event);
    } else {
        vqgraphicsvideoitem->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnCustomEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_ConnectNotify(QGraphicsVideoItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->connectNotify(*signal);
    } else {
        vqgraphicsvideoitem->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseConnectNotify(QGraphicsVideoItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ConnectNotify_IsBase(true);
        vqgraphicsvideoitem->connectNotify(*signal);
    } else {
        vqgraphicsvideoitem->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnConnectNotify(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_DisconnectNotify(QGraphicsVideoItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->disconnectNotify(*signal);
    } else {
        vqgraphicsvideoitem->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseDisconnectNotify(QGraphicsVideoItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DisconnectNotify_IsBase(true);
        vqgraphicsvideoitem->disconnectNotify(*signal);
    } else {
        vqgraphicsvideoitem->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDisconnectNotify(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_Advance(QGraphicsVideoItem* self, int phase) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicsvideoitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseAdvance(QGraphicsVideoItem* self, int phase) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Advance_IsBase(true);
        vqgraphicsvideoitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicsvideoitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnAdvance(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsVideoItem_Shape(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return new QPainterPath(vqgraphicsvideoitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsVideoItem_QBaseShape(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicsvideoitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnShape(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_Contains(const QGraphicsVideoItem* self, QPointF* point) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->contains(*point);
    } else {
        return vqgraphicsvideoitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseContains(const QGraphicsVideoItem* self, QPointF* point) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Contains_IsBase(true);
        return vqgraphicsvideoitem->contains(*point);
    } else {
        return vqgraphicsvideoitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnContains(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_CollidesWithItem(const QGraphicsVideoItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsvideoitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseCollidesWithItem(const QGraphicsVideoItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CollidesWithItem_IsBase(true);
        return vqgraphicsvideoitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsvideoitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnCollidesWithItem(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_CollidesWithPath(const QGraphicsVideoItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsvideoitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseCollidesWithPath(const QGraphicsVideoItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CollidesWithPath_IsBase(true);
        return vqgraphicsvideoitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsvideoitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnCollidesWithPath(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_IsObscuredBy(const QGraphicsVideoItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->isObscuredBy(item);
    } else {
        return vqgraphicsvideoitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseIsObscuredBy(const QGraphicsVideoItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_IsObscuredBy_IsBase(true);
        return vqgraphicsvideoitem->isObscuredBy(item);
    } else {
        return vqgraphicsvideoitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnIsObscuredBy(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsVideoItem_OpaqueArea(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return new QPainterPath(vqgraphicsvideoitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsVideoItem_QBaseOpaqueArea(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicsvideoitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnOpaqueArea(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_SceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        return vqgraphicsvideoitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsvideoitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseSceneEventFilter(QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SceneEventFilter_IsBase(true);
        return vqgraphicsvideoitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsvideoitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSceneEventFilter(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_SceneEvent(QGraphicsVideoItem* self, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        return vqgraphicsvideoitem->sceneEvent(event);
    } else {
        return vqgraphicsvideoitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseSceneEvent(QGraphicsVideoItem* self, QEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SceneEvent_IsBase(true);
        return vqgraphicsvideoitem->sceneEvent(event);
    } else {
        return vqgraphicsvideoitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSceneEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_ContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->contextMenuEvent(event);
    } else {
        vqgraphicsvideoitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseContextMenuEvent(QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ContextMenuEvent_IsBase(true);
        vqgraphicsvideoitem->contextMenuEvent(event);
    } else {
        vqgraphicsvideoitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnContextMenuEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_DragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->dragEnterEvent(event);
    } else {
        vqgraphicsvideoitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseDragEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragEnterEvent_IsBase(true);
        vqgraphicsvideoitem->dragEnterEvent(event);
    } else {
        vqgraphicsvideoitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDragEnterEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_DragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->dragLeaveEvent(event);
    } else {
        vqgraphicsvideoitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseDragLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragLeaveEvent_IsBase(true);
        vqgraphicsvideoitem->dragLeaveEvent(event);
    } else {
        vqgraphicsvideoitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDragLeaveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_DragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->dragMoveEvent(event);
    } else {
        vqgraphicsvideoitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseDragMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragMoveEvent_IsBase(true);
        vqgraphicsvideoitem->dragMoveEvent(event);
    } else {
        vqgraphicsvideoitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDragMoveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_DropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->dropEvent(event);
    } else {
        vqgraphicsvideoitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseDropEvent(QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DropEvent_IsBase(true);
        vqgraphicsvideoitem->dropEvent(event);
    } else {
        vqgraphicsvideoitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnDropEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_FocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->focusInEvent(event);
    } else {
        vqgraphicsvideoitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseFocusInEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_FocusInEvent_IsBase(true);
        vqgraphicsvideoitem->focusInEvent(event);
    } else {
        vqgraphicsvideoitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnFocusInEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_FocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->focusOutEvent(event);
    } else {
        vqgraphicsvideoitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseFocusOutEvent(QGraphicsVideoItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_FocusOutEvent_IsBase(true);
        vqgraphicsvideoitem->focusOutEvent(event);
    } else {
        vqgraphicsvideoitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnFocusOutEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_HoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->hoverEnterEvent(event);
    } else {
        vqgraphicsvideoitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseHoverEnterEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverEnterEvent_IsBase(true);
        vqgraphicsvideoitem->hoverEnterEvent(event);
    } else {
        vqgraphicsvideoitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnHoverEnterEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_HoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->hoverMoveEvent(event);
    } else {
        vqgraphicsvideoitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseHoverMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverMoveEvent_IsBase(true);
        vqgraphicsvideoitem->hoverMoveEvent(event);
    } else {
        vqgraphicsvideoitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnHoverMoveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_HoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->hoverLeaveEvent(event);
    } else {
        vqgraphicsvideoitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseHoverLeaveEvent(QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverLeaveEvent_IsBase(true);
        vqgraphicsvideoitem->hoverLeaveEvent(event);
    } else {
        vqgraphicsvideoitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnHoverLeaveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_KeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->keyPressEvent(event);
    } else {
        vqgraphicsvideoitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseKeyPressEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_KeyPressEvent_IsBase(true);
        vqgraphicsvideoitem->keyPressEvent(event);
    } else {
        vqgraphicsvideoitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnKeyPressEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_KeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->keyReleaseEvent(event);
    } else {
        vqgraphicsvideoitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseKeyReleaseEvent(QGraphicsVideoItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_KeyReleaseEvent_IsBase(true);
        vqgraphicsvideoitem->keyReleaseEvent(event);
    } else {
        vqgraphicsvideoitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnKeyReleaseEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_MousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->mousePressEvent(event);
    } else {
        vqgraphicsvideoitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseMousePressEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MousePressEvent_IsBase(true);
        vqgraphicsvideoitem->mousePressEvent(event);
    } else {
        vqgraphicsvideoitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMousePressEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_MouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->mouseMoveEvent(event);
    } else {
        vqgraphicsvideoitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseMouseMoveEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseMoveEvent_IsBase(true);
        vqgraphicsvideoitem->mouseMoveEvent(event);
    } else {
        vqgraphicsvideoitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMouseMoveEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_MouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->mouseReleaseEvent(event);
    } else {
        vqgraphicsvideoitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseMouseReleaseEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseReleaseEvent_IsBase(true);
        vqgraphicsvideoitem->mouseReleaseEvent(event);
    } else {
        vqgraphicsvideoitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMouseReleaseEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_MouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsvideoitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseMouseDoubleClickEvent(QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsvideoitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsvideoitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnMouseDoubleClickEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_WheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->wheelEvent(event);
    } else {
        vqgraphicsvideoitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseWheelEvent(QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_WheelEvent_IsBase(true);
        vqgraphicsvideoitem->wheelEvent(event);
    } else {
        vqgraphicsvideoitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnWheelEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_InputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->inputMethodEvent(event);
    } else {
        vqgraphicsvideoitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseInputMethodEvent(QGraphicsVideoItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_InputMethodEvent_IsBase(true);
        vqgraphicsvideoitem->inputMethodEvent(event);
    } else {
        vqgraphicsvideoitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnInputMethodEvent(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsVideoItem_InputMethodQuery(const QGraphicsVideoItem* self, int query) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return new QVariant(vqgraphicsvideoitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsVideoItem_QBaseInputMethodQuery(const QGraphicsVideoItem* self, int query) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsvideoitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnInputMethodQuery(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_SupportsExtension(const QGraphicsVideoItem* self, int extension) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->supportsExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension));
    } else {
        return vqgraphicsvideoitem->supportsExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseSupportsExtension(const QGraphicsVideoItem* self, int extension) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SupportsExtension_IsBase(true);
        return vqgraphicsvideoitem->supportsExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension));
    } else {
        return vqgraphicsvideoitem->supportsExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSupportsExtension(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_SetExtension(QGraphicsVideoItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension), *variant);
    } else {
        vqgraphicsvideoitem->setExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseSetExtension(QGraphicsVideoItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SetExtension_IsBase(true);
        vqgraphicsvideoitem->setExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension), *variant);
    } else {
        vqgraphicsvideoitem->setExtension(static_cast<VirtualQGraphicsVideoItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSetExtension(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsVideoItem_Extension(const QGraphicsVideoItem* self, QVariant* variant) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return new QVariant(vqgraphicsvideoitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsVideoItem_QBaseExtension(const QGraphicsVideoItem* self, QVariant* variant) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Extension_IsBase(true);
        return new QVariant(vqgraphicsvideoitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnExtension(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_UpdateMicroFocus(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->updateMicroFocus();
    } else {
        vqgraphicsvideoitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseUpdateMicroFocus(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_UpdateMicroFocus_IsBase(true);
        vqgraphicsvideoitem->updateMicroFocus();
    } else {
        vqgraphicsvideoitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnUpdateMicroFocus(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsVideoItem_Sender(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->sender();
    } else {
        return vqgraphicsvideoitem->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsVideoItem_QBaseSender(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Sender_IsBase(true);
        return vqgraphicsvideoitem->sender();
    } else {
        return vqgraphicsvideoitem->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSender(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Sender_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsVideoItem_SenderSignalIndex(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->senderSignalIndex();
    } else {
        return vqgraphicsvideoitem->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsVideoItem_QBaseSenderSignalIndex(const QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SenderSignalIndex_IsBase(true);
        return vqgraphicsvideoitem->senderSignalIndex();
    } else {
        return vqgraphicsvideoitem->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnSenderSignalIndex(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsVideoItem_Receivers(const QGraphicsVideoItem* self, const char* signal) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->receivers(signal);
    } else {
        return vqgraphicsvideoitem->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsVideoItem_QBaseReceivers(const QGraphicsVideoItem* self, const char* signal) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Receivers_IsBase(true);
        return vqgraphicsvideoitem->receivers(signal);
    } else {
        return vqgraphicsvideoitem->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnReceivers(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_Receivers_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsVideoItem_IsSignalConnected(const QGraphicsVideoItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        return vqgraphicsvideoitem->isSignalConnected(*signal);
    } else {
        return vqgraphicsvideoitem->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsVideoItem_QBaseIsSignalConnected(const QGraphicsVideoItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_IsSignalConnected_IsBase(true);
        return vqgraphicsvideoitem->isSignalConnected(*signal);
    } else {
        return vqgraphicsvideoitem->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnIsSignalConnected(const QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = const_cast<VirtualQGraphicsVideoItem*>(dynamic_cast<const VirtualQGraphicsVideoItem*>(self))) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_AddToIndex(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->addToIndex();
    } else {
        vqgraphicsvideoitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseAddToIndex(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_AddToIndex_IsBase(true);
        vqgraphicsvideoitem->addToIndex();
    } else {
        vqgraphicsvideoitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnAddToIndex(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_RemoveFromIndex(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->removeFromIndex();
    } else {
        vqgraphicsvideoitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBaseRemoveFromIndex(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_RemoveFromIndex_IsBase(true);
        vqgraphicsvideoitem->removeFromIndex();
    } else {
        vqgraphicsvideoitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnRemoveFromIndex(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsVideoItem_PrepareGeometryChange(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->prepareGeometryChange();
    } else {
        vqgraphicsvideoitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsVideoItem_QBasePrepareGeometryChange(QGraphicsVideoItem* self) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_PrepareGeometryChange_IsBase(true);
        vqgraphicsvideoitem->prepareGeometryChange();
    } else {
        vqgraphicsvideoitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsVideoItem_OnPrepareGeometryChange(QGraphicsVideoItem* self, intptr_t slot) {
    if (auto* vqgraphicsvideoitem = dynamic_cast<VirtualQGraphicsVideoItem*>(self)) {
        vqgraphicsvideoitem->setQGraphicsVideoItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsVideoItem::QGraphicsVideoItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsVideoItem_Delete(QGraphicsVideoItem* self) {
    delete self;
}
