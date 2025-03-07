#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QGraphicsAnchor>
#include <QGraphicsAnchorLayout>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qgraphicsanchorlayout.h>
#include "libqgraphicsanchorlayout.hpp"
#include "libqgraphicsanchorlayout.hxx"

QMetaObject* QGraphicsAnchor_MetaObject(const QGraphicsAnchor* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsAnchor_Metacast(QGraphicsAnchor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsAnchor_Metacall(QGraphicsAnchor* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsAnchor_Tr(const char* s) {
    QString _ret = QGraphicsAnchor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGraphicsAnchor_SetSpacing(QGraphicsAnchor* self, double spacing) {
    self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchor_UnsetSpacing(QGraphicsAnchor* self) {
    self->unsetSpacing();
}

double QGraphicsAnchor_Spacing(const QGraphicsAnchor* self) {
    return static_cast<double>(self->spacing());
}

void QGraphicsAnchor_SetSizePolicy(QGraphicsAnchor* self, int policy) {
    self->setSizePolicy(static_cast<QSizePolicy::Policy>(policy));
}

int QGraphicsAnchor_SizePolicy(const QGraphicsAnchor* self) {
    return static_cast<int>(self->sizePolicy());
}

libqt_string QGraphicsAnchor_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsAnchor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsAnchor_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsAnchor::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QGraphicsAnchor_Event(QGraphicsAnchor* self, QEvent* event) {
    return self->event(event);
}

bool QGraphicsAnchor_EventFilter(QGraphicsAnchor* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

void QGraphicsAnchor_Delete(QGraphicsAnchor* self) {
    delete self;
}

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new() {
    return new VirtualQGraphicsAnchorLayout();
}

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new2(QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsAnchorLayout(parent);
}

QGraphicsAnchor* QGraphicsAnchorLayout_AddAnchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge) {
    return self->addAnchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

QGraphicsAnchor* QGraphicsAnchorLayout_Anchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge) {
    return self->anchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

void QGraphicsAnchorLayout_AddCornerAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstCorner, QGraphicsLayoutItem* secondItem, int secondCorner) {
    self->addCornerAnchors(firstItem, static_cast<Qt::Corner>(firstCorner), secondItem, static_cast<Qt::Corner>(secondCorner));
}

void QGraphicsAnchorLayout_AddAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem) {
    self->addAnchors(firstItem, secondItem);
}

void QGraphicsAnchorLayout_SetHorizontalSpacing(QGraphicsAnchorLayout* self, double spacing) {
    self->setHorizontalSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchorLayout_SetVerticalSpacing(QGraphicsAnchorLayout* self, double spacing) {
    self->setVerticalSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchorLayout_SetSpacing(QGraphicsAnchorLayout* self, double spacing) {
    self->setSpacing(static_cast<qreal>(spacing));
}

double QGraphicsAnchorLayout_HorizontalSpacing(const QGraphicsAnchorLayout* self) {
    return static_cast<double>(self->horizontalSpacing());
}

double QGraphicsAnchorLayout_VerticalSpacing(const QGraphicsAnchorLayout* self) {
    return static_cast<double>(self->verticalSpacing());
}

void QGraphicsAnchorLayout_AddAnchors3(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations) {
    self->addAnchors(firstItem, secondItem, static_cast<Qt::Orientations>(orientations));
}

// Derived class handler implementation
void QGraphicsAnchorLayout_RemoveAt(QGraphicsAnchorLayout* self, int index) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->removeAt(static_cast<int>(index));
    } else {
        vqgraphicsanchorlayout->removeAt(static_cast<int>(index));
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseRemoveAt(QGraphicsAnchorLayout* self, int index) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_RemoveAt_IsBase(true);
        vqgraphicsanchorlayout->removeAt(static_cast<int>(index));
    } else {
        vqgraphicsanchorlayout->removeAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnRemoveAt(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_RemoveAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_SetGeometry(QGraphicsAnchorLayout* self, QRectF* rect) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setGeometry(*rect);
    } else {
        vqgraphicsanchorlayout->setGeometry(*rect);
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseSetGeometry(QGraphicsAnchorLayout* self, QRectF* rect) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetGeometry_IsBase(true);
        vqgraphicsanchorlayout->setGeometry(*rect);
    } else {
        vqgraphicsanchorlayout->setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSetGeometry(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsAnchorLayout_Count(const QGraphicsAnchorLayout* self) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        return vqgraphicsanchorlayout->count();
    } else {
        return vqgraphicsanchorlayout->count();
    }
}

// Base class handler implementation
int QGraphicsAnchorLayout_QBaseCount(const QGraphicsAnchorLayout* self) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Count_IsBase(true);
        return vqgraphicsanchorlayout->count();
    } else {
        return vqgraphicsanchorlayout->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnCount(const QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
QGraphicsLayoutItem* QGraphicsAnchorLayout_ItemAt(const QGraphicsAnchorLayout* self, int index) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        return vqgraphicsanchorlayout->itemAt(static_cast<int>(index));
    } else {
        return vqgraphicsanchorlayout->itemAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsAnchorLayout_QBaseItemAt(const QGraphicsAnchorLayout* self, int index) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_ItemAt_IsBase(true);
        return vqgraphicsanchorlayout->itemAt(static_cast<int>(index));
    } else {
        return vqgraphicsanchorlayout->itemAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnItemAt(const QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_ItemAt_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_ItemAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_Invalidate(QGraphicsAnchorLayout* self) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->invalidate();
    } else {
        vqgraphicsanchorlayout->invalidate();
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseInvalidate(QGraphicsAnchorLayout* self) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Invalidate_IsBase(true);
        vqgraphicsanchorlayout->invalidate();
    } else {
        vqgraphicsanchorlayout->invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnInvalidate(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QGraphicsAnchorLayout_SizeHint(const QGraphicsAnchorLayout* self, int which, QSizeF* constraint) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        return new QSizeF(vqgraphicsanchorlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Base class handler implementation
QSizeF* QGraphicsAnchorLayout_QBaseSizeHint(const QGraphicsAnchorLayout* self, int which, QSizeF* constraint) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SizeHint_IsBase(true);
        return new QSizeF(vqgraphicsanchorlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSizeHint(const QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_GetContentsMargins(const QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqgraphicsanchorlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseGetContentsMargins(const QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_GetContentsMargins_IsBase(true);
        vqgraphicsanchorlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqgraphicsanchorlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnGetContentsMargins(const QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_UpdateGeometry(QGraphicsAnchorLayout* self) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->updateGeometry();
    } else {
        vqgraphicsanchorlayout->updateGeometry();
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseUpdateGeometry(QGraphicsAnchorLayout* self) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_UpdateGeometry_IsBase(true);
        vqgraphicsanchorlayout->updateGeometry();
    } else {
        vqgraphicsanchorlayout->updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnUpdateGeometry(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_WidgetEvent(QGraphicsAnchorLayout* self, QEvent* e) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->widgetEvent(e);
    } else {
        vqgraphicsanchorlayout->widgetEvent(e);
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseWidgetEvent(QGraphicsAnchorLayout* self, QEvent* e) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_WidgetEvent_IsBase(true);
        vqgraphicsanchorlayout->widgetEvent(e);
    } else {
        vqgraphicsanchorlayout->widgetEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnWidgetEvent(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsAnchorLayout_IsEmpty(const QGraphicsAnchorLayout* self) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        return vqgraphicsanchorlayout->isEmpty();
    } else {
        return vqgraphicsanchorlayout->isEmpty();
    }
}

// Base class handler implementation
bool QGraphicsAnchorLayout_QBaseIsEmpty(const QGraphicsAnchorLayout* self) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_IsEmpty_IsBase(true);
        return vqgraphicsanchorlayout->isEmpty();
    } else {
        return vqgraphicsanchorlayout->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnIsEmpty(const QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self))) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_AddChildLayoutItem(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->addChildLayoutItem(layoutItem);
    } else {
        vqgraphicsanchorlayout->addChildLayoutItem(layoutItem);
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseAddChildLayoutItem(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_AddChildLayoutItem_IsBase(true);
        vqgraphicsanchorlayout->addChildLayoutItem(layoutItem);
    } else {
        vqgraphicsanchorlayout->addChildLayoutItem(layoutItem);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnAddChildLayoutItem(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_AddChildLayoutItem_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_AddChildLayoutItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_SetGraphicsItem(QGraphicsAnchorLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setGraphicsItem(item);
    } else {
        vqgraphicsanchorlayout->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseSetGraphicsItem(QGraphicsAnchorLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetGraphicsItem_IsBase(true);
        vqgraphicsanchorlayout->setGraphicsItem(item);
    } else {
        vqgraphicsanchorlayout->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSetGraphicsItem(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_SetOwnedByLayout(QGraphicsAnchorLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setOwnedByLayout(ownedByLayout);
    } else {
        vqgraphicsanchorlayout->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseSetOwnedByLayout(QGraphicsAnchorLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetOwnedByLayout_IsBase(true);
        vqgraphicsanchorlayout->setOwnedByLayout(ownedByLayout);
    } else {
        vqgraphicsanchorlayout->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSetOwnedByLayout(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SetOwnedByLayout_Callback>(slot));
    }
}

void QGraphicsAnchorLayout_Delete(QGraphicsAnchorLayout* self) {
    delete self;
}
