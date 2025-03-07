#include <QAnyStringView>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QGraphicsBlurEffect>
#include <QGraphicsColorizeEffect>
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>
#include <QGraphicsOpacityEffect>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qgraphicseffect.h>
#include "libqgraphicseffect.hpp"
#include "libqgraphicseffect.hxx"

QGraphicsEffect* QGraphicsEffect_new() {
    return new VirtualQGraphicsEffect();
}

QGraphicsEffect* QGraphicsEffect_new2(QObject* parent) {
    return new VirtualQGraphicsEffect(parent);
}

QMetaObject* QGraphicsEffect_MetaObject(const QGraphicsEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsEffect_Metacast(QGraphicsEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsEffect_Metacall(QGraphicsEffect* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsEffect_OnMetacall(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_Metacall_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsEffect_QBaseMetacall(QGraphicsEffect* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_Metacall_IsBase(true);
        return vqgraphicseffect->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsEffect_Tr(const char* s) {
    QString _ret = QGraphicsEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QRectF* QGraphicsEffect_BoundingRect(const QGraphicsEffect* self) {
    return new QRectF(self->boundingRect());
}

bool QGraphicsEffect_IsEnabled(const QGraphicsEffect* self) {
    return self->isEnabled();
}

void QGraphicsEffect_SetEnabled(QGraphicsEffect* self, bool enable) {
    self->setEnabled(enable);
}

void QGraphicsEffect_Update(QGraphicsEffect* self) {
    self->update();
}

void QGraphicsEffect_EnabledChanged(QGraphicsEffect* self, bool enabled) {
    self->enabledChanged(enabled);
}

void QGraphicsEffect_Connect_EnabledChanged(QGraphicsEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsEffect*, bool) = reinterpret_cast<void (*)(QGraphicsEffect*, bool)>(slot);
    QGraphicsEffect::connect(self, &QGraphicsEffect::enabledChanged, [self, slotFunc](bool enabled) {
        bool sigval1 = enabled;
        slotFunc(self, sigval1);
    });
}

libqt_string QGraphicsEffect_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsEffect_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsEffect::tr(s, c, static_cast<int>(n));
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
QRectF* QGraphicsEffect_BoundingRectFor(const QGraphicsEffect* self, QRectF* sourceRect) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return new QRectF(vqgraphicseffect->boundingRectFor(*sourceRect));
    } else {
        return new QRectF(self->boundingRectFor(*sourceRect));
    }
}

// Base class handler implementation
QRectF* QGraphicsEffect_QBaseBoundingRectFor(const QGraphicsEffect* self, QRectF* sourceRect) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_BoundingRectFor_IsBase(true);
        return new QRectF(vqgraphicseffect->boundingRectFor(*sourceRect));
    } else {
        return new QRectF(self->boundingRectFor(*sourceRect));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnBoundingRectFor(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_BoundingRectFor_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_BoundingRectFor_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEffect_Draw(QGraphicsEffect* self, QPainter* painter) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->draw(painter);
    } else {
        vqgraphicseffect->draw(painter);
    }
}

// Base class handler implementation
void QGraphicsEffect_QBaseDraw(QGraphicsEffect* self, QPainter* painter) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_Draw_IsBase(true);
        vqgraphicseffect->draw(painter);
    } else {
        vqgraphicseffect->draw(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnDraw(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_Draw_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_Draw_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEffect_SourceChanged(QGraphicsEffect* self, int flags) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        vqgraphicseffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

// Base class handler implementation
void QGraphicsEffect_QBaseSourceChanged(QGraphicsEffect* self, int flags) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_SourceChanged_IsBase(true);
        vqgraphicseffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        vqgraphicseffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourceChanged(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_SourceChanged_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourceChanged_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEffect_Event(QGraphicsEffect* self, QEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        return vqgraphicseffect->event(event);
    } else {
        return vqgraphicseffect->event(event);
    }
}

// Base class handler implementation
bool QGraphicsEffect_QBaseEvent(QGraphicsEffect* self, QEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_Event_IsBase(true);
        return vqgraphicseffect->event(event);
    } else {
        return vqgraphicseffect->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnEvent(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_Event_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEffect_EventFilter(QGraphicsEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        return vqgraphicseffect->eventFilter(watched, event);
    } else {
        return vqgraphicseffect->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsEffect_QBaseEventFilter(QGraphicsEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_EventFilter_IsBase(true);
        return vqgraphicseffect->eventFilter(watched, event);
    } else {
        return vqgraphicseffect->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnEventFilter(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEffect_TimerEvent(QGraphicsEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->timerEvent(event);
    } else {
        vqgraphicseffect->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEffect_QBaseTimerEvent(QGraphicsEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_TimerEvent_IsBase(true);
        vqgraphicseffect->timerEvent(event);
    } else {
        vqgraphicseffect->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnTimerEvent(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEffect_ChildEvent(QGraphicsEffect* self, QChildEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->childEvent(event);
    } else {
        vqgraphicseffect->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEffect_QBaseChildEvent(QGraphicsEffect* self, QChildEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_ChildEvent_IsBase(true);
        vqgraphicseffect->childEvent(event);
    } else {
        vqgraphicseffect->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnChildEvent(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEffect_CustomEvent(QGraphicsEffect* self, QEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->customEvent(event);
    } else {
        vqgraphicseffect->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEffect_QBaseCustomEvent(QGraphicsEffect* self, QEvent* event) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_CustomEvent_IsBase(true);
        vqgraphicseffect->customEvent(event);
    } else {
        vqgraphicseffect->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnCustomEvent(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEffect_ConnectNotify(QGraphicsEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->connectNotify(*signal);
    } else {
        vqgraphicseffect->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsEffect_QBaseConnectNotify(QGraphicsEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_ConnectNotify_IsBase(true);
        vqgraphicseffect->connectNotify(*signal);
    } else {
        vqgraphicseffect->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnConnectNotify(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEffect_DisconnectNotify(QGraphicsEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->disconnectNotify(*signal);
    } else {
        vqgraphicseffect->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsEffect_QBaseDisconnectNotify(QGraphicsEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_DisconnectNotify_IsBase(true);
        vqgraphicseffect->disconnectNotify(*signal);
    } else {
        vqgraphicseffect->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnDisconnectNotify(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEffect_UpdateBoundingRect(QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->updateBoundingRect();
    } else {
        vqgraphicseffect->updateBoundingRect();
    }
}

// Base class handler implementation
void QGraphicsEffect_QBaseUpdateBoundingRect(QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_UpdateBoundingRect_IsBase(true);
        vqgraphicseffect->updateBoundingRect();
    } else {
        vqgraphicseffect->updateBoundingRect();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnUpdateBoundingRect(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_UpdateBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_UpdateBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEffect_SourceIsPixmap(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return vqgraphicseffect->sourceIsPixmap();
    } else {
        return vqgraphicseffect->sourceIsPixmap();
    }
}

// Base class handler implementation
bool QGraphicsEffect_QBaseSourceIsPixmap(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourceIsPixmap_IsBase(true);
        return vqgraphicseffect->sourceIsPixmap();
    } else {
        return vqgraphicseffect->sourceIsPixmap();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourceIsPixmap(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourceIsPixmap_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourceIsPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsEffect_SourceBoundingRect(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return new QRectF(vqgraphicseffect->sourceBoundingRect());
    }
    return {};
}

// Base class handler implementation
QRectF* QGraphicsEffect_QBaseSourceBoundingRect(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourceBoundingRect_IsBase(true);
        return new QRectF(vqgraphicseffect->sourceBoundingRect());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourceBoundingRect(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourceBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourceBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEffect_DrawSource(QGraphicsEffect* self, QPainter* painter) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->drawSource(painter);
    } else {
        vqgraphicseffect->drawSource(painter);
    }
}

// Base class handler implementation
void QGraphicsEffect_QBaseDrawSource(QGraphicsEffect* self, QPainter* painter) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_DrawSource_IsBase(true);
        vqgraphicseffect->drawSource(painter);
    } else {
        vqgraphicseffect->drawSource(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnDrawSource(QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = dynamic_cast<VirtualQGraphicsEffect*>(self)) {
        vqgraphicseffect->setQGraphicsEffect_DrawSource_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_DrawSource_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return new QPixmap(vqgraphicseffect->sourcePixmap());
    }
    return {};
}

// Base class handler implementation
QPixmap* QGraphicsEffect_QBaseSourcePixmap(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourcePixmap_IsBase(true);
        return new QPixmap(vqgraphicseffect->sourcePixmap());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourcePixmap(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourcePixmap_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourcePixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsEffect_SourceBoundingRect1(const QGraphicsEffect* self, int system) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return new QRectF(vqgraphicseffect->sourceBoundingRect(static_cast<Qt::CoordinateSystem>(system)));
    }
    return {};
}

// Base class handler implementation
QRectF* QGraphicsEffect_QBaseSourceBoundingRect1(const QGraphicsEffect* self, int system) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourceBoundingRect1_IsBase(true);
        return new QRectF(vqgraphicseffect->sourceBoundingRect(static_cast<Qt::CoordinateSystem>(system)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourceBoundingRect1(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourceBoundingRect1_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourceBoundingRect1_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap1(const QGraphicsEffect* self, int system) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system)));
    }
    return {};
}

// Base class handler implementation
QPixmap* QGraphicsEffect_QBaseSourcePixmap1(const QGraphicsEffect* self, int system) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourcePixmap1_IsBase(true);
        return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourcePixmap1(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourcePixmap1_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourcePixmap1_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset));
    }
    return {};
}

// Base class handler implementation
QPixmap* QGraphicsEffect_QBaseSourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourcePixmap2_IsBase(true);
        return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourcePixmap2(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourcePixmap2_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourcePixmap2_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QGraphicsEffect_SourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset, static_cast<QGraphicsEffect::PixmapPadMode>(mode)));
    }
    return {};
}

// Base class handler implementation
QPixmap* QGraphicsEffect_QBaseSourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourcePixmap3_IsBase(true);
        return new QPixmap(vqgraphicseffect->sourcePixmap(static_cast<Qt::CoordinateSystem>(system), offset, static_cast<QGraphicsEffect::PixmapPadMode>(mode)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSourcePixmap3(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SourcePixmap3_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SourcePixmap3_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsEffect_Sender(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return vqgraphicseffect->sender();
    } else {
        return vqgraphicseffect->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsEffect_QBaseSender(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_Sender_IsBase(true);
        return vqgraphicseffect->sender();
    } else {
        return vqgraphicseffect->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSender(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_Sender_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsEffect_SenderSignalIndex(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return vqgraphicseffect->senderSignalIndex();
    } else {
        return vqgraphicseffect->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsEffect_QBaseSenderSignalIndex(const QGraphicsEffect* self) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SenderSignalIndex_IsBase(true);
        return vqgraphicseffect->senderSignalIndex();
    } else {
        return vqgraphicseffect->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnSenderSignalIndex(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsEffect_Receivers(const QGraphicsEffect* self, const char* signal) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return vqgraphicseffect->receivers(signal);
    } else {
        return vqgraphicseffect->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsEffect_QBaseReceivers(const QGraphicsEffect* self, const char* signal) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_Receivers_IsBase(true);
        return vqgraphicseffect->receivers(signal);
    } else {
        return vqgraphicseffect->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnReceivers(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_Receivers_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEffect_IsSignalConnected(const QGraphicsEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        return vqgraphicseffect->isSignalConnected(*signal);
    } else {
        return vqgraphicseffect->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsEffect_QBaseIsSignalConnected(const QGraphicsEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_IsSignalConnected_IsBase(true);
        return vqgraphicseffect->isSignalConnected(*signal);
    } else {
        return vqgraphicseffect->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEffect_OnIsSignalConnected(const QGraphicsEffect* self, intptr_t slot) {
    if (auto* vqgraphicseffect = const_cast<VirtualQGraphicsEffect*>(dynamic_cast<const VirtualQGraphicsEffect*>(self))) {
        vqgraphicseffect->setQGraphicsEffect_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsEffect::QGraphicsEffect_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsEffect_Delete(QGraphicsEffect* self) {
    delete self;
}

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new() {
    return new VirtualQGraphicsColorizeEffect();
}

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent) {
    return new VirtualQGraphicsColorizeEffect(parent);
}

QMetaObject* QGraphicsColorizeEffect_MetaObject(const QGraphicsColorizeEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsColorizeEffect_Metacast(QGraphicsColorizeEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsColorizeEffect_Metacall(QGraphicsColorizeEffect* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsColorizeEffect_OnMetacall(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Metacall_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsColorizeEffect_QBaseMetacall(QGraphicsColorizeEffect* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Metacall_IsBase(true);
        return vqgraphicscolorizeeffect->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsColorizeEffect_Tr(const char* s) {
    QString _ret = QGraphicsColorizeEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QGraphicsColorizeEffect_Color(const QGraphicsColorizeEffect* self) {
    return new QColor(self->color());
}

double QGraphicsColorizeEffect_Strength(const QGraphicsColorizeEffect* self) {
    return static_cast<double>(self->strength());
}

void QGraphicsColorizeEffect_SetColor(QGraphicsColorizeEffect* self, QColor* c) {
    self->setColor(*c);
}

void QGraphicsColorizeEffect_SetStrength(QGraphicsColorizeEffect* self, double strength) {
    self->setStrength(static_cast<qreal>(strength));
}

void QGraphicsColorizeEffect_ColorChanged(QGraphicsColorizeEffect* self, QColor* color) {
    self->colorChanged(*color);
}

void QGraphicsColorizeEffect_Connect_ColorChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsColorizeEffect*, QColor*) = reinterpret_cast<void (*)(QGraphicsColorizeEffect*, QColor*)>(slot);
    QGraphicsColorizeEffect::connect(self, &QGraphicsColorizeEffect::colorChanged, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

void QGraphicsColorizeEffect_StrengthChanged(QGraphicsColorizeEffect* self, double strength) {
    self->strengthChanged(static_cast<qreal>(strength));
}

void QGraphicsColorizeEffect_Connect_StrengthChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsColorizeEffect*, double) = reinterpret_cast<void (*)(QGraphicsColorizeEffect*, double)>(slot);
    QGraphicsColorizeEffect::connect(self, &QGraphicsColorizeEffect::strengthChanged, [self, slotFunc](qreal strength) {
        double sigval1 = static_cast<double>(strength);
        slotFunc(self, sigval1);
    });
}

libqt_string QGraphicsColorizeEffect_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsColorizeEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsColorizeEffect_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsColorizeEffect::tr(s, c, static_cast<int>(n));
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
void QGraphicsColorizeEffect_Draw(QGraphicsColorizeEffect* self, QPainter* painter) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->draw(painter);
    } else {
        vqgraphicscolorizeeffect->draw(painter);
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_QBaseDraw(QGraphicsColorizeEffect* self, QPainter* painter) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Draw_IsBase(true);
        vqgraphicscolorizeeffect->draw(painter);
    } else {
        vqgraphicscolorizeeffect->draw(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnDraw(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Draw_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_Draw_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsColorizeEffect_BoundingRectFor(const QGraphicsColorizeEffect* self, QRectF* sourceRect) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return new QRectF(vqgraphicscolorizeeffect->boundingRectFor(*sourceRect));
    } else {
        return new QRectF(self->boundingRectFor(*sourceRect));
    }
}

// Base class handler implementation
QRectF* QGraphicsColorizeEffect_QBaseBoundingRectFor(const QGraphicsColorizeEffect* self, QRectF* sourceRect) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_BoundingRectFor_IsBase(true);
        return new QRectF(vqgraphicscolorizeeffect->boundingRectFor(*sourceRect));
    } else {
        return new QRectF(self->boundingRectFor(*sourceRect));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnBoundingRectFor(const QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_BoundingRectFor_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_BoundingRectFor_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsColorizeEffect_SourceChanged(QGraphicsColorizeEffect* self, int flags) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        vqgraphicscolorizeeffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_QBaseSourceChanged(QGraphicsColorizeEffect* self, int flags) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_SourceChanged_IsBase(true);
        vqgraphicscolorizeeffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        vqgraphicscolorizeeffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnSourceChanged(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_SourceChanged_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_SourceChanged_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsColorizeEffect_Event(QGraphicsColorizeEffect* self, QEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        return vqgraphicscolorizeeffect->event(event);
    } else {
        return vqgraphicscolorizeeffect->event(event);
    }
}

// Base class handler implementation
bool QGraphicsColorizeEffect_QBaseEvent(QGraphicsColorizeEffect* self, QEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Event_IsBase(true);
        return vqgraphicscolorizeeffect->event(event);
    } else {
        return vqgraphicscolorizeeffect->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnEvent(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Event_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsColorizeEffect_EventFilter(QGraphicsColorizeEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        return vqgraphicscolorizeeffect->eventFilter(watched, event);
    } else {
        return vqgraphicscolorizeeffect->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsColorizeEffect_QBaseEventFilter(QGraphicsColorizeEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_EventFilter_IsBase(true);
        return vqgraphicscolorizeeffect->eventFilter(watched, event);
    } else {
        return vqgraphicscolorizeeffect->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnEventFilter(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsColorizeEffect_TimerEvent(QGraphicsColorizeEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->timerEvent(event);
    } else {
        vqgraphicscolorizeeffect->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_QBaseTimerEvent(QGraphicsColorizeEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_TimerEvent_IsBase(true);
        vqgraphicscolorizeeffect->timerEvent(event);
    } else {
        vqgraphicscolorizeeffect->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnTimerEvent(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsColorizeEffect_ChildEvent(QGraphicsColorizeEffect* self, QChildEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->childEvent(event);
    } else {
        vqgraphicscolorizeeffect->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_QBaseChildEvent(QGraphicsColorizeEffect* self, QChildEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_ChildEvent_IsBase(true);
        vqgraphicscolorizeeffect->childEvent(event);
    } else {
        vqgraphicscolorizeeffect->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnChildEvent(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsColorizeEffect_CustomEvent(QGraphicsColorizeEffect* self, QEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->customEvent(event);
    } else {
        vqgraphicscolorizeeffect->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_QBaseCustomEvent(QGraphicsColorizeEffect* self, QEvent* event) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_CustomEvent_IsBase(true);
        vqgraphicscolorizeeffect->customEvent(event);
    } else {
        vqgraphicscolorizeeffect->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnCustomEvent(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsColorizeEffect_ConnectNotify(QGraphicsColorizeEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->connectNotify(*signal);
    } else {
        vqgraphicscolorizeeffect->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_QBaseConnectNotify(QGraphicsColorizeEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_ConnectNotify_IsBase(true);
        vqgraphicscolorizeeffect->connectNotify(*signal);
    } else {
        vqgraphicscolorizeeffect->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnConnectNotify(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsColorizeEffect_DisconnectNotify(QGraphicsColorizeEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->disconnectNotify(*signal);
    } else {
        vqgraphicscolorizeeffect->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_QBaseDisconnectNotify(QGraphicsColorizeEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_DisconnectNotify_IsBase(true);
        vqgraphicscolorizeeffect->disconnectNotify(*signal);
    } else {
        vqgraphicscolorizeeffect->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnDisconnectNotify(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsColorizeEffect_UpdateBoundingRect(QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->updateBoundingRect();
    } else {
        vqgraphicscolorizeeffect->updateBoundingRect();
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_QBaseUpdateBoundingRect(QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_UpdateBoundingRect_IsBase(true);
        vqgraphicscolorizeeffect->updateBoundingRect();
    } else {
        vqgraphicscolorizeeffect->updateBoundingRect();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnUpdateBoundingRect(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_UpdateBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_UpdateBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsColorizeEffect_SourceIsPixmap(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return vqgraphicscolorizeeffect->sourceIsPixmap();
    } else {
        return vqgraphicscolorizeeffect->sourceIsPixmap();
    }
}

// Base class handler implementation
bool QGraphicsColorizeEffect_QBaseSourceIsPixmap(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_SourceIsPixmap_IsBase(true);
        return vqgraphicscolorizeeffect->sourceIsPixmap();
    } else {
        return vqgraphicscolorizeeffect->sourceIsPixmap();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnSourceIsPixmap(const QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_SourceIsPixmap_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_SourceIsPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsColorizeEffect_SourceBoundingRect(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return new QRectF(vqgraphicscolorizeeffect->sourceBoundingRect());
    }
    return {};
}

// Base class handler implementation
QRectF* QGraphicsColorizeEffect_QBaseSourceBoundingRect(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_SourceBoundingRect_IsBase(true);
        return new QRectF(vqgraphicscolorizeeffect->sourceBoundingRect());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnSourceBoundingRect(const QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_SourceBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_SourceBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsColorizeEffect_DrawSource(QGraphicsColorizeEffect* self, QPainter* painter) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->drawSource(painter);
    } else {
        vqgraphicscolorizeeffect->drawSource(painter);
    }
}

// Base class handler implementation
void QGraphicsColorizeEffect_QBaseDrawSource(QGraphicsColorizeEffect* self, QPainter* painter) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_DrawSource_IsBase(true);
        vqgraphicscolorizeeffect->drawSource(painter);
    } else {
        vqgraphicscolorizeeffect->drawSource(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnDrawSource(QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = dynamic_cast<VirtualQGraphicsColorizeEffect*>(self)) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_DrawSource_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_DrawSource_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QGraphicsColorizeEffect_SourcePixmap(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return new QPixmap(vqgraphicscolorizeeffect->sourcePixmap());
    }
    return {};
}

// Base class handler implementation
QPixmap* QGraphicsColorizeEffect_QBaseSourcePixmap(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_SourcePixmap_IsBase(true);
        return new QPixmap(vqgraphicscolorizeeffect->sourcePixmap());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnSourcePixmap(const QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_SourcePixmap_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_SourcePixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsColorizeEffect_Sender(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return vqgraphicscolorizeeffect->sender();
    } else {
        return vqgraphicscolorizeeffect->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsColorizeEffect_QBaseSender(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Sender_IsBase(true);
        return vqgraphicscolorizeeffect->sender();
    } else {
        return vqgraphicscolorizeeffect->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnSender(const QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Sender_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsColorizeEffect_SenderSignalIndex(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return vqgraphicscolorizeeffect->senderSignalIndex();
    } else {
        return vqgraphicscolorizeeffect->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsColorizeEffect_QBaseSenderSignalIndex(const QGraphicsColorizeEffect* self) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_SenderSignalIndex_IsBase(true);
        return vqgraphicscolorizeeffect->senderSignalIndex();
    } else {
        return vqgraphicscolorizeeffect->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnSenderSignalIndex(const QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsColorizeEffect_Receivers(const QGraphicsColorizeEffect* self, const char* signal) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return vqgraphicscolorizeeffect->receivers(signal);
    } else {
        return vqgraphicscolorizeeffect->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsColorizeEffect_QBaseReceivers(const QGraphicsColorizeEffect* self, const char* signal) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Receivers_IsBase(true);
        return vqgraphicscolorizeeffect->receivers(signal);
    } else {
        return vqgraphicscolorizeeffect->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnReceivers(const QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_Receivers_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsColorizeEffect_IsSignalConnected(const QGraphicsColorizeEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        return vqgraphicscolorizeeffect->isSignalConnected(*signal);
    } else {
        return vqgraphicscolorizeeffect->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsColorizeEffect_QBaseIsSignalConnected(const QGraphicsColorizeEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_IsSignalConnected_IsBase(true);
        return vqgraphicscolorizeeffect->isSignalConnected(*signal);
    } else {
        return vqgraphicscolorizeeffect->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsColorizeEffect_OnIsSignalConnected(const QGraphicsColorizeEffect* self, intptr_t slot) {
    if (auto* vqgraphicscolorizeeffect = const_cast<VirtualQGraphicsColorizeEffect*>(dynamic_cast<const VirtualQGraphicsColorizeEffect*>(self))) {
        vqgraphicscolorizeeffect->setQGraphicsColorizeEffect_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsColorizeEffect::QGraphicsColorizeEffect_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsColorizeEffect_Delete(QGraphicsColorizeEffect* self) {
    delete self;
}

QGraphicsBlurEffect* QGraphicsBlurEffect_new() {
    return new VirtualQGraphicsBlurEffect();
}

QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent) {
    return new VirtualQGraphicsBlurEffect(parent);
}

QMetaObject* QGraphicsBlurEffect_MetaObject(const QGraphicsBlurEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsBlurEffect_Metacast(QGraphicsBlurEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsBlurEffect_Metacall(QGraphicsBlurEffect* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsBlurEffect_OnMetacall(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_Metacall_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsBlurEffect_QBaseMetacall(QGraphicsBlurEffect* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_Metacall_IsBase(true);
        return vqgraphicsblureffect->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsBlurEffect_Tr(const char* s) {
    QString _ret = QGraphicsBlurEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

double QGraphicsBlurEffect_BlurRadius(const QGraphicsBlurEffect* self) {
    return static_cast<double>(self->blurRadius());
}

int QGraphicsBlurEffect_BlurHints(const QGraphicsBlurEffect* self) {
    return static_cast<int>(self->blurHints());
}

void QGraphicsBlurEffect_SetBlurRadius(QGraphicsBlurEffect* self, double blurRadius) {
    self->setBlurRadius(static_cast<qreal>(blurRadius));
}

void QGraphicsBlurEffect_SetBlurHints(QGraphicsBlurEffect* self, int hints) {
    self->setBlurHints(static_cast<QGraphicsBlurEffect::BlurHints>(hints));
}

void QGraphicsBlurEffect_BlurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius) {
    self->blurRadiusChanged(static_cast<qreal>(blurRadius));
}

void QGraphicsBlurEffect_Connect_BlurRadiusChanged(QGraphicsBlurEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsBlurEffect*, double) = reinterpret_cast<void (*)(QGraphicsBlurEffect*, double)>(slot);
    QGraphicsBlurEffect::connect(self, &QGraphicsBlurEffect::blurRadiusChanged, [self, slotFunc](qreal blurRadius) {
        double sigval1 = static_cast<double>(blurRadius);
        slotFunc(self, sigval1);
    });
}

void QGraphicsBlurEffect_BlurHintsChanged(QGraphicsBlurEffect* self, int hints) {
    self->blurHintsChanged(static_cast<QGraphicsBlurEffect::BlurHints>(hints));
}

void QGraphicsBlurEffect_Connect_BlurHintsChanged(QGraphicsBlurEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsBlurEffect*, int) = reinterpret_cast<void (*)(QGraphicsBlurEffect*, int)>(slot);
    QGraphicsBlurEffect::connect(self, &QGraphicsBlurEffect::blurHintsChanged, [self, slotFunc](QGraphicsBlurEffect::BlurHints hints) {
        int sigval1 = static_cast<int>(hints);
        slotFunc(self, sigval1);
    });
}

libqt_string QGraphicsBlurEffect_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsBlurEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsBlurEffect_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsBlurEffect::tr(s, c, static_cast<int>(n));
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
QRectF* QGraphicsBlurEffect_BoundingRectFor(const QGraphicsBlurEffect* self, QRectF* rect) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return new QRectF(vqgraphicsblureffect->boundingRectFor(*rect));
    } else {
        return new QRectF(self->boundingRectFor(*rect));
    }
}

// Base class handler implementation
QRectF* QGraphicsBlurEffect_QBaseBoundingRectFor(const QGraphicsBlurEffect* self, QRectF* rect) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_BoundingRectFor_IsBase(true);
        return new QRectF(vqgraphicsblureffect->boundingRectFor(*rect));
    } else {
        return new QRectF(self->boundingRectFor(*rect));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnBoundingRectFor(const QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_BoundingRectFor_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_BoundingRectFor_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsBlurEffect_Draw(QGraphicsBlurEffect* self, QPainter* painter) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->draw(painter);
    } else {
        vqgraphicsblureffect->draw(painter);
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_QBaseDraw(QGraphicsBlurEffect* self, QPainter* painter) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_Draw_IsBase(true);
        vqgraphicsblureffect->draw(painter);
    } else {
        vqgraphicsblureffect->draw(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnDraw(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_Draw_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_Draw_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsBlurEffect_SourceChanged(QGraphicsBlurEffect* self, int flags) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        vqgraphicsblureffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_QBaseSourceChanged(QGraphicsBlurEffect* self, int flags) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_SourceChanged_IsBase(true);
        vqgraphicsblureffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        vqgraphicsblureffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnSourceChanged(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_SourceChanged_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_SourceChanged_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsBlurEffect_Event(QGraphicsBlurEffect* self, QEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        return vqgraphicsblureffect->event(event);
    } else {
        return vqgraphicsblureffect->event(event);
    }
}

// Base class handler implementation
bool QGraphicsBlurEffect_QBaseEvent(QGraphicsBlurEffect* self, QEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_Event_IsBase(true);
        return vqgraphicsblureffect->event(event);
    } else {
        return vqgraphicsblureffect->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnEvent(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_Event_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsBlurEffect_EventFilter(QGraphicsBlurEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        return vqgraphicsblureffect->eventFilter(watched, event);
    } else {
        return vqgraphicsblureffect->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsBlurEffect_QBaseEventFilter(QGraphicsBlurEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_EventFilter_IsBase(true);
        return vqgraphicsblureffect->eventFilter(watched, event);
    } else {
        return vqgraphicsblureffect->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnEventFilter(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsBlurEffect_TimerEvent(QGraphicsBlurEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->timerEvent(event);
    } else {
        vqgraphicsblureffect->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_QBaseTimerEvent(QGraphicsBlurEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_TimerEvent_IsBase(true);
        vqgraphicsblureffect->timerEvent(event);
    } else {
        vqgraphicsblureffect->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnTimerEvent(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsBlurEffect_ChildEvent(QGraphicsBlurEffect* self, QChildEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->childEvent(event);
    } else {
        vqgraphicsblureffect->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_QBaseChildEvent(QGraphicsBlurEffect* self, QChildEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_ChildEvent_IsBase(true);
        vqgraphicsblureffect->childEvent(event);
    } else {
        vqgraphicsblureffect->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnChildEvent(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsBlurEffect_CustomEvent(QGraphicsBlurEffect* self, QEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->customEvent(event);
    } else {
        vqgraphicsblureffect->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_QBaseCustomEvent(QGraphicsBlurEffect* self, QEvent* event) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_CustomEvent_IsBase(true);
        vqgraphicsblureffect->customEvent(event);
    } else {
        vqgraphicsblureffect->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnCustomEvent(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsBlurEffect_ConnectNotify(QGraphicsBlurEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->connectNotify(*signal);
    } else {
        vqgraphicsblureffect->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_QBaseConnectNotify(QGraphicsBlurEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_ConnectNotify_IsBase(true);
        vqgraphicsblureffect->connectNotify(*signal);
    } else {
        vqgraphicsblureffect->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnConnectNotify(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsBlurEffect_DisconnectNotify(QGraphicsBlurEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->disconnectNotify(*signal);
    } else {
        vqgraphicsblureffect->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_QBaseDisconnectNotify(QGraphicsBlurEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_DisconnectNotify_IsBase(true);
        vqgraphicsblureffect->disconnectNotify(*signal);
    } else {
        vqgraphicsblureffect->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnDisconnectNotify(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsBlurEffect_UpdateBoundingRect(QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->updateBoundingRect();
    } else {
        vqgraphicsblureffect->updateBoundingRect();
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_QBaseUpdateBoundingRect(QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_UpdateBoundingRect_IsBase(true);
        vqgraphicsblureffect->updateBoundingRect();
    } else {
        vqgraphicsblureffect->updateBoundingRect();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnUpdateBoundingRect(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_UpdateBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_UpdateBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsBlurEffect_SourceIsPixmap(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return vqgraphicsblureffect->sourceIsPixmap();
    } else {
        return vqgraphicsblureffect->sourceIsPixmap();
    }
}

// Base class handler implementation
bool QGraphicsBlurEffect_QBaseSourceIsPixmap(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_SourceIsPixmap_IsBase(true);
        return vqgraphicsblureffect->sourceIsPixmap();
    } else {
        return vqgraphicsblureffect->sourceIsPixmap();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnSourceIsPixmap(const QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_SourceIsPixmap_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_SourceIsPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsBlurEffect_SourceBoundingRect(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return new QRectF(vqgraphicsblureffect->sourceBoundingRect());
    }
    return {};
}

// Base class handler implementation
QRectF* QGraphicsBlurEffect_QBaseSourceBoundingRect(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_SourceBoundingRect_IsBase(true);
        return new QRectF(vqgraphicsblureffect->sourceBoundingRect());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnSourceBoundingRect(const QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_SourceBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_SourceBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsBlurEffect_DrawSource(QGraphicsBlurEffect* self, QPainter* painter) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->drawSource(painter);
    } else {
        vqgraphicsblureffect->drawSource(painter);
    }
}

// Base class handler implementation
void QGraphicsBlurEffect_QBaseDrawSource(QGraphicsBlurEffect* self, QPainter* painter) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_DrawSource_IsBase(true);
        vqgraphicsblureffect->drawSource(painter);
    } else {
        vqgraphicsblureffect->drawSource(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnDrawSource(QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = dynamic_cast<VirtualQGraphicsBlurEffect*>(self)) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_DrawSource_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_DrawSource_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QGraphicsBlurEffect_SourcePixmap(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return new QPixmap(vqgraphicsblureffect->sourcePixmap());
    }
    return {};
}

// Base class handler implementation
QPixmap* QGraphicsBlurEffect_QBaseSourcePixmap(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_SourcePixmap_IsBase(true);
        return new QPixmap(vqgraphicsblureffect->sourcePixmap());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnSourcePixmap(const QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_SourcePixmap_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_SourcePixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsBlurEffect_Sender(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return vqgraphicsblureffect->sender();
    } else {
        return vqgraphicsblureffect->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsBlurEffect_QBaseSender(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_Sender_IsBase(true);
        return vqgraphicsblureffect->sender();
    } else {
        return vqgraphicsblureffect->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnSender(const QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_Sender_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsBlurEffect_SenderSignalIndex(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return vqgraphicsblureffect->senderSignalIndex();
    } else {
        return vqgraphicsblureffect->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsBlurEffect_QBaseSenderSignalIndex(const QGraphicsBlurEffect* self) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_SenderSignalIndex_IsBase(true);
        return vqgraphicsblureffect->senderSignalIndex();
    } else {
        return vqgraphicsblureffect->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnSenderSignalIndex(const QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsBlurEffect_Receivers(const QGraphicsBlurEffect* self, const char* signal) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return vqgraphicsblureffect->receivers(signal);
    } else {
        return vqgraphicsblureffect->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsBlurEffect_QBaseReceivers(const QGraphicsBlurEffect* self, const char* signal) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_Receivers_IsBase(true);
        return vqgraphicsblureffect->receivers(signal);
    } else {
        return vqgraphicsblureffect->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnReceivers(const QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_Receivers_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsBlurEffect_IsSignalConnected(const QGraphicsBlurEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        return vqgraphicsblureffect->isSignalConnected(*signal);
    } else {
        return vqgraphicsblureffect->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsBlurEffect_QBaseIsSignalConnected(const QGraphicsBlurEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_IsSignalConnected_IsBase(true);
        return vqgraphicsblureffect->isSignalConnected(*signal);
    } else {
        return vqgraphicsblureffect->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsBlurEffect_OnIsSignalConnected(const QGraphicsBlurEffect* self, intptr_t slot) {
    if (auto* vqgraphicsblureffect = const_cast<VirtualQGraphicsBlurEffect*>(dynamic_cast<const VirtualQGraphicsBlurEffect*>(self))) {
        vqgraphicsblureffect->setQGraphicsBlurEffect_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsBlurEffect::QGraphicsBlurEffect_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsBlurEffect_Delete(QGraphicsBlurEffect* self) {
    delete self;
}

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new() {
    return new VirtualQGraphicsDropShadowEffect();
}

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent) {
    return new VirtualQGraphicsDropShadowEffect(parent);
}

QMetaObject* QGraphicsDropShadowEffect_MetaObject(const QGraphicsDropShadowEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsDropShadowEffect_Metacast(QGraphicsDropShadowEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsDropShadowEffect_Metacall(QGraphicsDropShadowEffect* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsDropShadowEffect_OnMetacall(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Metacall_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsDropShadowEffect_QBaseMetacall(QGraphicsDropShadowEffect* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Metacall_IsBase(true);
        return vqgraphicsdropshadoweffect->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsDropShadowEffect_Tr(const char* s) {
    QString _ret = QGraphicsDropShadowEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QPointF* QGraphicsDropShadowEffect_Offset(const QGraphicsDropShadowEffect* self) {
    return new QPointF(self->offset());
}

double QGraphicsDropShadowEffect_XOffset(const QGraphicsDropShadowEffect* self) {
    return static_cast<double>(self->xOffset());
}

double QGraphicsDropShadowEffect_YOffset(const QGraphicsDropShadowEffect* self) {
    return static_cast<double>(self->yOffset());
}

double QGraphicsDropShadowEffect_BlurRadius(const QGraphicsDropShadowEffect* self) {
    return static_cast<double>(self->blurRadius());
}

QColor* QGraphicsDropShadowEffect_Color(const QGraphicsDropShadowEffect* self) {
    return new QColor(self->color());
}

void QGraphicsDropShadowEffect_SetOffset(QGraphicsDropShadowEffect* self, QPointF* ofs) {
    self->setOffset(*ofs);
}

void QGraphicsDropShadowEffect_SetOffset2(QGraphicsDropShadowEffect* self, double dx, double dy) {
    self->setOffset(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsDropShadowEffect_SetOffsetWithQreal(QGraphicsDropShadowEffect* self, double d) {
    self->setOffset(static_cast<qreal>(d));
}

void QGraphicsDropShadowEffect_SetXOffset(QGraphicsDropShadowEffect* self, double dx) {
    self->setXOffset(static_cast<qreal>(dx));
}

void QGraphicsDropShadowEffect_SetYOffset(QGraphicsDropShadowEffect* self, double dy) {
    self->setYOffset(static_cast<qreal>(dy));
}

void QGraphicsDropShadowEffect_SetBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius) {
    self->setBlurRadius(static_cast<qreal>(blurRadius));
}

void QGraphicsDropShadowEffect_SetColor(QGraphicsDropShadowEffect* self, QColor* color) {
    self->setColor(*color);
}

void QGraphicsDropShadowEffect_OffsetChanged(QGraphicsDropShadowEffect* self, QPointF* offset) {
    self->offsetChanged(*offset);
}

void QGraphicsDropShadowEffect_Connect_OffsetChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsDropShadowEffect*, QPointF*) = reinterpret_cast<void (*)(QGraphicsDropShadowEffect*, QPointF*)>(slot);
    QGraphicsDropShadowEffect::connect(self, &QGraphicsDropShadowEffect::offsetChanged, [self, slotFunc](const QPointF& offset) {
        const QPointF& offset_ret = offset;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&offset_ret);
        slotFunc(self, sigval1);
    });
}

void QGraphicsDropShadowEffect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius) {
    self->blurRadiusChanged(static_cast<qreal>(blurRadius));
}

void QGraphicsDropShadowEffect_Connect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsDropShadowEffect*, double) = reinterpret_cast<void (*)(QGraphicsDropShadowEffect*, double)>(slot);
    QGraphicsDropShadowEffect::connect(self, &QGraphicsDropShadowEffect::blurRadiusChanged, [self, slotFunc](qreal blurRadius) {
        double sigval1 = static_cast<double>(blurRadius);
        slotFunc(self, sigval1);
    });
}

void QGraphicsDropShadowEffect_ColorChanged(QGraphicsDropShadowEffect* self, QColor* color) {
    self->colorChanged(*color);
}

void QGraphicsDropShadowEffect_Connect_ColorChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsDropShadowEffect*, QColor*) = reinterpret_cast<void (*)(QGraphicsDropShadowEffect*, QColor*)>(slot);
    QGraphicsDropShadowEffect::connect(self, &QGraphicsDropShadowEffect::colorChanged, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QGraphicsDropShadowEffect_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsDropShadowEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsDropShadowEffect_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsDropShadowEffect::tr(s, c, static_cast<int>(n));
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
QRectF* QGraphicsDropShadowEffect_BoundingRectFor(const QGraphicsDropShadowEffect* self, QRectF* rect) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return new QRectF(vqgraphicsdropshadoweffect->boundingRectFor(*rect));
    } else {
        return new QRectF(self->boundingRectFor(*rect));
    }
}

// Base class handler implementation
QRectF* QGraphicsDropShadowEffect_QBaseBoundingRectFor(const QGraphicsDropShadowEffect* self, QRectF* rect) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_BoundingRectFor_IsBase(true);
        return new QRectF(vqgraphicsdropshadoweffect->boundingRectFor(*rect));
    } else {
        return new QRectF(self->boundingRectFor(*rect));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnBoundingRectFor(const QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_BoundingRectFor_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_BoundingRectFor_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_Draw(QGraphicsDropShadowEffect* self, QPainter* painter) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->draw(painter);
    } else {
        vqgraphicsdropshadoweffect->draw(painter);
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_QBaseDraw(QGraphicsDropShadowEffect* self, QPainter* painter) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Draw_IsBase(true);
        vqgraphicsdropshadoweffect->draw(painter);
    } else {
        vqgraphicsdropshadoweffect->draw(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnDraw(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Draw_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_Draw_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_SourceChanged(QGraphicsDropShadowEffect* self, int flags) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        vqgraphicsdropshadoweffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_QBaseSourceChanged(QGraphicsDropShadowEffect* self, int flags) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_SourceChanged_IsBase(true);
        vqgraphicsdropshadoweffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        vqgraphicsdropshadoweffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnSourceChanged(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_SourceChanged_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_SourceChanged_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsDropShadowEffect_Event(QGraphicsDropShadowEffect* self, QEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        return vqgraphicsdropshadoweffect->event(event);
    } else {
        return vqgraphicsdropshadoweffect->event(event);
    }
}

// Base class handler implementation
bool QGraphicsDropShadowEffect_QBaseEvent(QGraphicsDropShadowEffect* self, QEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Event_IsBase(true);
        return vqgraphicsdropshadoweffect->event(event);
    } else {
        return vqgraphicsdropshadoweffect->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnEvent(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Event_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsDropShadowEffect_EventFilter(QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        return vqgraphicsdropshadoweffect->eventFilter(watched, event);
    } else {
        return vqgraphicsdropshadoweffect->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsDropShadowEffect_QBaseEventFilter(QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_EventFilter_IsBase(true);
        return vqgraphicsdropshadoweffect->eventFilter(watched, event);
    } else {
        return vqgraphicsdropshadoweffect->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnEventFilter(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_TimerEvent(QGraphicsDropShadowEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->timerEvent(event);
    } else {
        vqgraphicsdropshadoweffect->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_QBaseTimerEvent(QGraphicsDropShadowEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_TimerEvent_IsBase(true);
        vqgraphicsdropshadoweffect->timerEvent(event);
    } else {
        vqgraphicsdropshadoweffect->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnTimerEvent(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_ChildEvent(QGraphicsDropShadowEffect* self, QChildEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->childEvent(event);
    } else {
        vqgraphicsdropshadoweffect->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_QBaseChildEvent(QGraphicsDropShadowEffect* self, QChildEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_ChildEvent_IsBase(true);
        vqgraphicsdropshadoweffect->childEvent(event);
    } else {
        vqgraphicsdropshadoweffect->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnChildEvent(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_CustomEvent(QGraphicsDropShadowEffect* self, QEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->customEvent(event);
    } else {
        vqgraphicsdropshadoweffect->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_QBaseCustomEvent(QGraphicsDropShadowEffect* self, QEvent* event) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_CustomEvent_IsBase(true);
        vqgraphicsdropshadoweffect->customEvent(event);
    } else {
        vqgraphicsdropshadoweffect->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnCustomEvent(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_ConnectNotify(QGraphicsDropShadowEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->connectNotify(*signal);
    } else {
        vqgraphicsdropshadoweffect->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_QBaseConnectNotify(QGraphicsDropShadowEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_ConnectNotify_IsBase(true);
        vqgraphicsdropshadoweffect->connectNotify(*signal);
    } else {
        vqgraphicsdropshadoweffect->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnConnectNotify(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_DisconnectNotify(QGraphicsDropShadowEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->disconnectNotify(*signal);
    } else {
        vqgraphicsdropshadoweffect->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_QBaseDisconnectNotify(QGraphicsDropShadowEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_DisconnectNotify_IsBase(true);
        vqgraphicsdropshadoweffect->disconnectNotify(*signal);
    } else {
        vqgraphicsdropshadoweffect->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnDisconnectNotify(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_UpdateBoundingRect(QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->updateBoundingRect();
    } else {
        vqgraphicsdropshadoweffect->updateBoundingRect();
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_QBaseUpdateBoundingRect(QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_UpdateBoundingRect_IsBase(true);
        vqgraphicsdropshadoweffect->updateBoundingRect();
    } else {
        vqgraphicsdropshadoweffect->updateBoundingRect();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnUpdateBoundingRect(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_UpdateBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_UpdateBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsDropShadowEffect_SourceIsPixmap(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return vqgraphicsdropshadoweffect->sourceIsPixmap();
    } else {
        return vqgraphicsdropshadoweffect->sourceIsPixmap();
    }
}

// Base class handler implementation
bool QGraphicsDropShadowEffect_QBaseSourceIsPixmap(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_SourceIsPixmap_IsBase(true);
        return vqgraphicsdropshadoweffect->sourceIsPixmap();
    } else {
        return vqgraphicsdropshadoweffect->sourceIsPixmap();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnSourceIsPixmap(const QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_SourceIsPixmap_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_SourceIsPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsDropShadowEffect_SourceBoundingRect(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return new QRectF(vqgraphicsdropshadoweffect->sourceBoundingRect());
    }
    return {};
}

// Base class handler implementation
QRectF* QGraphicsDropShadowEffect_QBaseSourceBoundingRect(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_SourceBoundingRect_IsBase(true);
        return new QRectF(vqgraphicsdropshadoweffect->sourceBoundingRect());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnSourceBoundingRect(const QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_SourceBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_SourceBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsDropShadowEffect_DrawSource(QGraphicsDropShadowEffect* self, QPainter* painter) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->drawSource(painter);
    } else {
        vqgraphicsdropshadoweffect->drawSource(painter);
    }
}

// Base class handler implementation
void QGraphicsDropShadowEffect_QBaseDrawSource(QGraphicsDropShadowEffect* self, QPainter* painter) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_DrawSource_IsBase(true);
        vqgraphicsdropshadoweffect->drawSource(painter);
    } else {
        vqgraphicsdropshadoweffect->drawSource(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnDrawSource(QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = dynamic_cast<VirtualQGraphicsDropShadowEffect*>(self)) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_DrawSource_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_DrawSource_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QGraphicsDropShadowEffect_SourcePixmap(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return new QPixmap(vqgraphicsdropshadoweffect->sourcePixmap());
    }
    return {};
}

// Base class handler implementation
QPixmap* QGraphicsDropShadowEffect_QBaseSourcePixmap(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_SourcePixmap_IsBase(true);
        return new QPixmap(vqgraphicsdropshadoweffect->sourcePixmap());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnSourcePixmap(const QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_SourcePixmap_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_SourcePixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsDropShadowEffect_Sender(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return vqgraphicsdropshadoweffect->sender();
    } else {
        return vqgraphicsdropshadoweffect->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsDropShadowEffect_QBaseSender(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Sender_IsBase(true);
        return vqgraphicsdropshadoweffect->sender();
    } else {
        return vqgraphicsdropshadoweffect->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnSender(const QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Sender_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsDropShadowEffect_SenderSignalIndex(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return vqgraphicsdropshadoweffect->senderSignalIndex();
    } else {
        return vqgraphicsdropshadoweffect->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsDropShadowEffect_QBaseSenderSignalIndex(const QGraphicsDropShadowEffect* self) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_SenderSignalIndex_IsBase(true);
        return vqgraphicsdropshadoweffect->senderSignalIndex();
    } else {
        return vqgraphicsdropshadoweffect->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnSenderSignalIndex(const QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsDropShadowEffect_Receivers(const QGraphicsDropShadowEffect* self, const char* signal) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return vqgraphicsdropshadoweffect->receivers(signal);
    } else {
        return vqgraphicsdropshadoweffect->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsDropShadowEffect_QBaseReceivers(const QGraphicsDropShadowEffect* self, const char* signal) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Receivers_IsBase(true);
        return vqgraphicsdropshadoweffect->receivers(signal);
    } else {
        return vqgraphicsdropshadoweffect->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnReceivers(const QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_Receivers_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsDropShadowEffect_IsSignalConnected(const QGraphicsDropShadowEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        return vqgraphicsdropshadoweffect->isSignalConnected(*signal);
    } else {
        return vqgraphicsdropshadoweffect->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsDropShadowEffect_QBaseIsSignalConnected(const QGraphicsDropShadowEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_IsSignalConnected_IsBase(true);
        return vqgraphicsdropshadoweffect->isSignalConnected(*signal);
    } else {
        return vqgraphicsdropshadoweffect->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsDropShadowEffect_OnIsSignalConnected(const QGraphicsDropShadowEffect* self, intptr_t slot) {
    if (auto* vqgraphicsdropshadoweffect = const_cast<VirtualQGraphicsDropShadowEffect*>(dynamic_cast<const VirtualQGraphicsDropShadowEffect*>(self))) {
        vqgraphicsdropshadoweffect->setQGraphicsDropShadowEffect_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsDropShadowEffect::QGraphicsDropShadowEffect_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsDropShadowEffect_Delete(QGraphicsDropShadowEffect* self) {
    delete self;
}

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new() {
    return new VirtualQGraphicsOpacityEffect();
}

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent) {
    return new VirtualQGraphicsOpacityEffect(parent);
}

QMetaObject* QGraphicsOpacityEffect_MetaObject(const QGraphicsOpacityEffect* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsOpacityEffect_Metacast(QGraphicsOpacityEffect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsOpacityEffect_Metacall(QGraphicsOpacityEffect* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsOpacityEffect_OnMetacall(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Metacall_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsOpacityEffect_QBaseMetacall(QGraphicsOpacityEffect* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Metacall_IsBase(true);
        return vqgraphicsopacityeffect->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsOpacityEffect_Tr(const char* s) {
    QString _ret = QGraphicsOpacityEffect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

double QGraphicsOpacityEffect_Opacity(const QGraphicsOpacityEffect* self) {
    return static_cast<double>(self->opacity());
}

QBrush* QGraphicsOpacityEffect_OpacityMask(const QGraphicsOpacityEffect* self) {
    return new QBrush(self->opacityMask());
}

void QGraphicsOpacityEffect_SetOpacity(QGraphicsOpacityEffect* self, double opacity) {
    self->setOpacity(static_cast<qreal>(opacity));
}

void QGraphicsOpacityEffect_SetOpacityMask(QGraphicsOpacityEffect* self, QBrush* mask) {
    self->setOpacityMask(*mask);
}

void QGraphicsOpacityEffect_OpacityChanged(QGraphicsOpacityEffect* self, double opacity) {
    self->opacityChanged(static_cast<qreal>(opacity));
}

void QGraphicsOpacityEffect_Connect_OpacityChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsOpacityEffect*, double) = reinterpret_cast<void (*)(QGraphicsOpacityEffect*, double)>(slot);
    QGraphicsOpacityEffect::connect(self, &QGraphicsOpacityEffect::opacityChanged, [self, slotFunc](qreal opacity) {
        double sigval1 = static_cast<double>(opacity);
        slotFunc(self, sigval1);
    });
}

void QGraphicsOpacityEffect_OpacityMaskChanged(QGraphicsOpacityEffect* self, QBrush* mask) {
    self->opacityMaskChanged(*mask);
}

void QGraphicsOpacityEffect_Connect_OpacityMaskChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsOpacityEffect*, QBrush*) = reinterpret_cast<void (*)(QGraphicsOpacityEffect*, QBrush*)>(slot);
    QGraphicsOpacityEffect::connect(self, &QGraphicsOpacityEffect::opacityMaskChanged, [self, slotFunc](const QBrush& mask) {
        const QBrush& mask_ret = mask;
        // Cast returned reference into pointer
        QBrush* sigval1 = const_cast<QBrush*>(&mask_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QGraphicsOpacityEffect_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsOpacityEffect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsOpacityEffect_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsOpacityEffect::tr(s, c, static_cast<int>(n));
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
void QGraphicsOpacityEffect_Draw(QGraphicsOpacityEffect* self, QPainter* painter) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->draw(painter);
    } else {
        vqgraphicsopacityeffect->draw(painter);
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_QBaseDraw(QGraphicsOpacityEffect* self, QPainter* painter) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Draw_IsBase(true);
        vqgraphicsopacityeffect->draw(painter);
    } else {
        vqgraphicsopacityeffect->draw(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnDraw(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Draw_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_Draw_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsOpacityEffect_BoundingRectFor(const QGraphicsOpacityEffect* self, QRectF* sourceRect) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return new QRectF(vqgraphicsopacityeffect->boundingRectFor(*sourceRect));
    } else {
        return new QRectF(self->boundingRectFor(*sourceRect));
    }
}

// Base class handler implementation
QRectF* QGraphicsOpacityEffect_QBaseBoundingRectFor(const QGraphicsOpacityEffect* self, QRectF* sourceRect) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_BoundingRectFor_IsBase(true);
        return new QRectF(vqgraphicsopacityeffect->boundingRectFor(*sourceRect));
    } else {
        return new QRectF(self->boundingRectFor(*sourceRect));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnBoundingRectFor(const QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_BoundingRectFor_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_BoundingRectFor_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsOpacityEffect_SourceChanged(QGraphicsOpacityEffect* self, int flags) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        vqgraphicsopacityeffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_QBaseSourceChanged(QGraphicsOpacityEffect* self, int flags) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_SourceChanged_IsBase(true);
        vqgraphicsopacityeffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    } else {
        vqgraphicsopacityeffect->sourceChanged(static_cast<QGraphicsEffect::ChangeFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnSourceChanged(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_SourceChanged_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_SourceChanged_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsOpacityEffect_Event(QGraphicsOpacityEffect* self, QEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        return vqgraphicsopacityeffect->event(event);
    } else {
        return vqgraphicsopacityeffect->event(event);
    }
}

// Base class handler implementation
bool QGraphicsOpacityEffect_QBaseEvent(QGraphicsOpacityEffect* self, QEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Event_IsBase(true);
        return vqgraphicsopacityeffect->event(event);
    } else {
        return vqgraphicsopacityeffect->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnEvent(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Event_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsOpacityEffect_EventFilter(QGraphicsOpacityEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        return vqgraphicsopacityeffect->eventFilter(watched, event);
    } else {
        return vqgraphicsopacityeffect->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsOpacityEffect_QBaseEventFilter(QGraphicsOpacityEffect* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_EventFilter_IsBase(true);
        return vqgraphicsopacityeffect->eventFilter(watched, event);
    } else {
        return vqgraphicsopacityeffect->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnEventFilter(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsOpacityEffect_TimerEvent(QGraphicsOpacityEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->timerEvent(event);
    } else {
        vqgraphicsopacityeffect->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_QBaseTimerEvent(QGraphicsOpacityEffect* self, QTimerEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_TimerEvent_IsBase(true);
        vqgraphicsopacityeffect->timerEvent(event);
    } else {
        vqgraphicsopacityeffect->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnTimerEvent(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsOpacityEffect_ChildEvent(QGraphicsOpacityEffect* self, QChildEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->childEvent(event);
    } else {
        vqgraphicsopacityeffect->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_QBaseChildEvent(QGraphicsOpacityEffect* self, QChildEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_ChildEvent_IsBase(true);
        vqgraphicsopacityeffect->childEvent(event);
    } else {
        vqgraphicsopacityeffect->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnChildEvent(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsOpacityEffect_CustomEvent(QGraphicsOpacityEffect* self, QEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->customEvent(event);
    } else {
        vqgraphicsopacityeffect->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_QBaseCustomEvent(QGraphicsOpacityEffect* self, QEvent* event) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_CustomEvent_IsBase(true);
        vqgraphicsopacityeffect->customEvent(event);
    } else {
        vqgraphicsopacityeffect->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnCustomEvent(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsOpacityEffect_ConnectNotify(QGraphicsOpacityEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->connectNotify(*signal);
    } else {
        vqgraphicsopacityeffect->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_QBaseConnectNotify(QGraphicsOpacityEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_ConnectNotify_IsBase(true);
        vqgraphicsopacityeffect->connectNotify(*signal);
    } else {
        vqgraphicsopacityeffect->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnConnectNotify(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsOpacityEffect_DisconnectNotify(QGraphicsOpacityEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->disconnectNotify(*signal);
    } else {
        vqgraphicsopacityeffect->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_QBaseDisconnectNotify(QGraphicsOpacityEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_DisconnectNotify_IsBase(true);
        vqgraphicsopacityeffect->disconnectNotify(*signal);
    } else {
        vqgraphicsopacityeffect->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnDisconnectNotify(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsOpacityEffect_UpdateBoundingRect(QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->updateBoundingRect();
    } else {
        vqgraphicsopacityeffect->updateBoundingRect();
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_QBaseUpdateBoundingRect(QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_UpdateBoundingRect_IsBase(true);
        vqgraphicsopacityeffect->updateBoundingRect();
    } else {
        vqgraphicsopacityeffect->updateBoundingRect();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnUpdateBoundingRect(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_UpdateBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_UpdateBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsOpacityEffect_SourceIsPixmap(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return vqgraphicsopacityeffect->sourceIsPixmap();
    } else {
        return vqgraphicsopacityeffect->sourceIsPixmap();
    }
}

// Base class handler implementation
bool QGraphicsOpacityEffect_QBaseSourceIsPixmap(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_SourceIsPixmap_IsBase(true);
        return vqgraphicsopacityeffect->sourceIsPixmap();
    } else {
        return vqgraphicsopacityeffect->sourceIsPixmap();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnSourceIsPixmap(const QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_SourceIsPixmap_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_SourceIsPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsOpacityEffect_SourceBoundingRect(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return new QRectF(vqgraphicsopacityeffect->sourceBoundingRect());
    }
    return {};
}

// Base class handler implementation
QRectF* QGraphicsOpacityEffect_QBaseSourceBoundingRect(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_SourceBoundingRect_IsBase(true);
        return new QRectF(vqgraphicsopacityeffect->sourceBoundingRect());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnSourceBoundingRect(const QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_SourceBoundingRect_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_SourceBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsOpacityEffect_DrawSource(QGraphicsOpacityEffect* self, QPainter* painter) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->drawSource(painter);
    } else {
        vqgraphicsopacityeffect->drawSource(painter);
    }
}

// Base class handler implementation
void QGraphicsOpacityEffect_QBaseDrawSource(QGraphicsOpacityEffect* self, QPainter* painter) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_DrawSource_IsBase(true);
        vqgraphicsopacityeffect->drawSource(painter);
    } else {
        vqgraphicsopacityeffect->drawSource(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnDrawSource(QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = dynamic_cast<VirtualQGraphicsOpacityEffect*>(self)) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_DrawSource_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_DrawSource_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QGraphicsOpacityEffect_SourcePixmap(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return new QPixmap(vqgraphicsopacityeffect->sourcePixmap());
    }
    return {};
}

// Base class handler implementation
QPixmap* QGraphicsOpacityEffect_QBaseSourcePixmap(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_SourcePixmap_IsBase(true);
        return new QPixmap(vqgraphicsopacityeffect->sourcePixmap());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnSourcePixmap(const QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_SourcePixmap_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_SourcePixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsOpacityEffect_Sender(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return vqgraphicsopacityeffect->sender();
    } else {
        return vqgraphicsopacityeffect->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsOpacityEffect_QBaseSender(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Sender_IsBase(true);
        return vqgraphicsopacityeffect->sender();
    } else {
        return vqgraphicsopacityeffect->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnSender(const QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Sender_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsOpacityEffect_SenderSignalIndex(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return vqgraphicsopacityeffect->senderSignalIndex();
    } else {
        return vqgraphicsopacityeffect->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsOpacityEffect_QBaseSenderSignalIndex(const QGraphicsOpacityEffect* self) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_SenderSignalIndex_IsBase(true);
        return vqgraphicsopacityeffect->senderSignalIndex();
    } else {
        return vqgraphicsopacityeffect->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnSenderSignalIndex(const QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsOpacityEffect_Receivers(const QGraphicsOpacityEffect* self, const char* signal) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return vqgraphicsopacityeffect->receivers(signal);
    } else {
        return vqgraphicsopacityeffect->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsOpacityEffect_QBaseReceivers(const QGraphicsOpacityEffect* self, const char* signal) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Receivers_IsBase(true);
        return vqgraphicsopacityeffect->receivers(signal);
    } else {
        return vqgraphicsopacityeffect->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnReceivers(const QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_Receivers_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsOpacityEffect_IsSignalConnected(const QGraphicsOpacityEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        return vqgraphicsopacityeffect->isSignalConnected(*signal);
    } else {
        return vqgraphicsopacityeffect->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsOpacityEffect_QBaseIsSignalConnected(const QGraphicsOpacityEffect* self, QMetaMethod* signal) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_IsSignalConnected_IsBase(true);
        return vqgraphicsopacityeffect->isSignalConnected(*signal);
    } else {
        return vqgraphicsopacityeffect->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsOpacityEffect_OnIsSignalConnected(const QGraphicsOpacityEffect* self, intptr_t slot) {
    if (auto* vqgraphicsopacityeffect = const_cast<VirtualQGraphicsOpacityEffect*>(dynamic_cast<const VirtualQGraphicsOpacityEffect*>(self))) {
        vqgraphicsopacityeffect->setQGraphicsOpacityEffect_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsOpacityEffect::QGraphicsOpacityEffect_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsOpacityEffect_Delete(QGraphicsOpacityEffect* self) {
    delete self;
}
