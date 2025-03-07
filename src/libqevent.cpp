#include <QAction>
#include <QActionEvent>
#include <QApplicationStateChangeEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QEventPoint>
#include <QExposeEvent>
#include <QFile>
#include <QFileOpenEvent>
#include <QFocusEvent>
#include <QHelpEvent>
#include <QHideEvent>
#include <QHoverEvent>
#include <QIconDragEvent>
#include <QInputDevice>
#include <QInputEvent>
#include <QInputMethodEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute
#include <QInputMethodQueryEvent>
#include <QKeyCombination>
#include <QKeyEvent>
#include <QKeySequence>
#include <QList>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QNativeGestureEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPoint>
#include <QPointF>
#include <QPointerEvent>
#include <QPointingDevice>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QScreenOrientationChangeEvent>
#include <QScrollEvent>
#include <QScrollPrepareEvent>
#include <QShortcutEvent>
#include <QShowEvent>
#include <QSinglePointEvent>
#include <QSize>
#include <QSizeF>
#include <QStatusTipEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QToolBarChangeEvent>
#include <QTouchEvent>
#include <QUrl>
#include <QVariant>
#include <QWhatsThisClickedEvent>
#include <QWheelEvent>
#include <QWindowStateChangeEvent>
#include <qevent.h>
#include "libqevent.hpp"
#include "libqevent.hxx"

QInputEvent* QInputEvent_new(int typeVal, QInputDevice* m_dev) {
    return new VirtualQInputEvent(static_cast<QEvent::Type>(typeVal), m_dev);
}

QInputEvent* QInputEvent_new2(int typeVal, QInputDevice* m_dev, int modifiers) {
    return new VirtualQInputEvent(static_cast<QEvent::Type>(typeVal), m_dev, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QInputDevice* QInputEvent_Device(const QInputEvent* self) {
    return (QInputDevice*)self->device();
}

int QInputEvent_DeviceType(const QInputEvent* self) {
    return static_cast<int>(self->deviceType());
}

int QInputEvent_Modifiers(const QInputEvent* self) {
    return static_cast<int>(self->modifiers());
}

void QInputEvent_SetModifiers(QInputEvent* self, int modifiers) {
    self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

unsigned long long QInputEvent_Timestamp(const QInputEvent* self) {
    return static_cast<unsigned long long>(self->timestamp());
}

// Derived class handler implementation
QInputEvent* QInputEvent_Clone(const QInputEvent* self) {
    if (auto* vqinputevent = const_cast<VirtualQInputEvent*>(dynamic_cast<const VirtualQInputEvent*>(self))) {
        return vqinputevent->clone();
    } else {
        return vqinputevent->clone();
    }
}

// Base class handler implementation
QInputEvent* QInputEvent_QBaseClone(const QInputEvent* self) {
    if (auto* vqinputevent = const_cast<VirtualQInputEvent*>(dynamic_cast<const VirtualQInputEvent*>(self))) {
        vqinputevent->setQInputEvent_Clone_IsBase(true);
        return vqinputevent->clone();
    } else {
        return vqinputevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputEvent_OnClone(const QInputEvent* self, intptr_t slot) {
    if (auto* vqinputevent = const_cast<VirtualQInputEvent*>(dynamic_cast<const VirtualQInputEvent*>(self))) {
        vqinputevent->setQInputEvent_Clone_Callback(reinterpret_cast<VirtualQInputEvent::QInputEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputEvent_SetTimestamp(QInputEvent* self, unsigned long long timestamp) {
    if (auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self)) {
        vqinputevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqinputevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QInputEvent_QBaseSetTimestamp(QInputEvent* self, unsigned long long timestamp) {
    if (auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self)) {
        vqinputevent->setQInputEvent_SetTimestamp_IsBase(true);
        vqinputevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqinputevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QInputEvent_OnSetTimestamp(QInputEvent* self, intptr_t slot) {
    if (auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self)) {
        vqinputevent->setQInputEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQInputEvent::QInputEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputEvent_SetAccepted(QInputEvent* self, bool accepted) {
    if (auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self)) {
        vqinputevent->setAccepted(accepted);
    } else {
        vqinputevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QInputEvent_QBaseSetAccepted(QInputEvent* self, bool accepted) {
    if (auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self)) {
        vqinputevent->setQInputEvent_SetAccepted_IsBase(true);
        vqinputevent->setAccepted(accepted);
    } else {
        vqinputevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputEvent_OnSetAccepted(QInputEvent* self, intptr_t slot) {
    if (auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self)) {
        vqinputevent->setQInputEvent_SetAccepted_Callback(reinterpret_cast<VirtualQInputEvent::QInputEvent_SetAccepted_Callback>(slot));
    }
}

void QInputEvent_Delete(QInputEvent* self) {
    delete self;
}

QPointerEvent* QPointerEvent_new(int typeVal, QPointingDevice* dev) {
    return new VirtualQPointerEvent(static_cast<QEvent::Type>(typeVal), dev);
}

QPointerEvent* QPointerEvent_new2(int typeVal, QPointingDevice* dev, int modifiers) {
    return new VirtualQPointerEvent(static_cast<QEvent::Type>(typeVal), dev, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPointerEvent* QPointerEvent_new3(int typeVal, QPointingDevice* dev, int modifiers, libqt_list /* of QEventPoint* */ points) {
    QList<QEventPoint> points_QList;
    points_QList.reserve(points.len);
    QEventPoint** points_arr = static_cast<QEventPoint**>(points.data.ptr);
    for (size_t i = 0; i < points.len; ++i) {
        points_QList.push_back(*(points_arr[i]));
    }
    return new VirtualQPointerEvent(static_cast<QEvent::Type>(typeVal), dev, static_cast<Qt::KeyboardModifiers>(modifiers), points_QList);
}

QPointingDevice* QPointerEvent_PointingDevice(const QPointerEvent* self) {
    return (QPointingDevice*)self->pointingDevice();
}

int QPointerEvent_PointerType(const QPointerEvent* self) {
    return static_cast<int>(self->pointerType());
}

ptrdiff_t QPointerEvent_PointCount(const QPointerEvent* self) {
    return static_cast<ptrdiff_t>(self->pointCount());
}

QEventPoint* QPointerEvent_Point(QPointerEvent* self, ptrdiff_t i) {
    QEventPoint& _ret = self->point((qsizetype)(i));
    // Cast returned reference into pointer
    return &_ret;
}

libqt_list /* of QEventPoint* */ QPointerEvent_Points(const QPointerEvent* self) {
    const QList<QEventPoint>& _ret = self->points();
    // Convert QList<> from C++ memory to manually-managed C memory
    QEventPoint** _arr = static_cast<QEventPoint**>(malloc(sizeof(QEventPoint*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QEventPoint(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

QEventPoint* QPointerEvent_PointById(QPointerEvent* self, int id) {
    return self->pointById(static_cast<int>(id));
}

bool QPointerEvent_AllPointsGrabbed(const QPointerEvent* self) {
    return self->allPointsGrabbed();
}

bool QPointerEvent_AllPointsAccepted(const QPointerEvent* self) {
    return self->allPointsAccepted();
}

QObject* QPointerEvent_ExclusiveGrabber(const QPointerEvent* self, QEventPoint* point) {
    return self->exclusiveGrabber(*point);
}

void QPointerEvent_SetExclusiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* exclusiveGrabber) {
    self->setExclusiveGrabber(*point, exclusiveGrabber);
}

void QPointerEvent_ClearPassiveGrabbers(QPointerEvent* self, QEventPoint* point) {
    self->clearPassiveGrabbers(*point);
}

bool QPointerEvent_AddPassiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* grabber) {
    return self->addPassiveGrabber(*point, grabber);
}

bool QPointerEvent_RemovePassiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* grabber) {
    return self->removePassiveGrabber(*point, grabber);
}

// Derived class handler implementation
QPointerEvent* QPointerEvent_Clone(const QPointerEvent* self) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        return vqpointerevent->clone();
    } else {
        return vqpointerevent->clone();
    }
}

// Base class handler implementation
QPointerEvent* QPointerEvent_QBaseClone(const QPointerEvent* self) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        vqpointerevent->setQPointerEvent_Clone_IsBase(true);
        return vqpointerevent->clone();
    } else {
        return vqpointerevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnClone(const QPointerEvent* self, intptr_t slot) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        vqpointerevent->setQPointerEvent_Clone_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QPointerEvent_SetTimestamp(QPointerEvent* self, unsigned long long timestamp) {
    if (auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self)) {
        vqpointerevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqpointerevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QPointerEvent_QBaseSetTimestamp(QPointerEvent* self, unsigned long long timestamp) {
    if (auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self)) {
        vqpointerevent->setQPointerEvent_SetTimestamp_IsBase(true);
        vqpointerevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqpointerevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnSetTimestamp(QPointerEvent* self, intptr_t slot) {
    if (auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self)) {
        vqpointerevent->setQPointerEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPointerEvent_IsBeginEvent(const QPointerEvent* self) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        return vqpointerevent->isBeginEvent();
    } else {
        return vqpointerevent->isBeginEvent();
    }
}

// Base class handler implementation
bool QPointerEvent_QBaseIsBeginEvent(const QPointerEvent* self) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        vqpointerevent->setQPointerEvent_IsBeginEvent_IsBase(true);
        return vqpointerevent->isBeginEvent();
    } else {
        return vqpointerevent->isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnIsBeginEvent(const QPointerEvent* self, intptr_t slot) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        vqpointerevent->setQPointerEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPointerEvent_IsUpdateEvent(const QPointerEvent* self) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        return vqpointerevent->isUpdateEvent();
    } else {
        return vqpointerevent->isUpdateEvent();
    }
}

// Base class handler implementation
bool QPointerEvent_QBaseIsUpdateEvent(const QPointerEvent* self) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        vqpointerevent->setQPointerEvent_IsUpdateEvent_IsBase(true);
        return vqpointerevent->isUpdateEvent();
    } else {
        return vqpointerevent->isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnIsUpdateEvent(const QPointerEvent* self, intptr_t slot) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        vqpointerevent->setQPointerEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPointerEvent_IsEndEvent(const QPointerEvent* self) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        return vqpointerevent->isEndEvent();
    } else {
        return vqpointerevent->isEndEvent();
    }
}

// Base class handler implementation
bool QPointerEvent_QBaseIsEndEvent(const QPointerEvent* self) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        vqpointerevent->setQPointerEvent_IsEndEvent_IsBase(true);
        return vqpointerevent->isEndEvent();
    } else {
        return vqpointerevent->isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnIsEndEvent(const QPointerEvent* self, intptr_t slot) {
    if (auto* vqpointerevent = const_cast<VirtualQPointerEvent*>(dynamic_cast<const VirtualQPointerEvent*>(self))) {
        vqpointerevent->setQPointerEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPointerEvent_SetAccepted(QPointerEvent* self, bool accepted) {
    if (auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self)) {
        vqpointerevent->setAccepted(accepted);
    } else {
        vqpointerevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QPointerEvent_QBaseSetAccepted(QPointerEvent* self, bool accepted) {
    if (auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self)) {
        vqpointerevent->setQPointerEvent_SetAccepted_IsBase(true);
        vqpointerevent->setAccepted(accepted);
    } else {
        vqpointerevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnSetAccepted(QPointerEvent* self, intptr_t slot) {
    if (auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self)) {
        vqpointerevent->setQPointerEvent_SetAccepted_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_SetAccepted_Callback>(slot));
    }
}

void QPointerEvent_Delete(QPointerEvent* self) {
    delete self;
}

int QSinglePointEvent_Button(const QSinglePointEvent* self) {
    return static_cast<int>(self->button());
}

int QSinglePointEvent_Buttons(const QSinglePointEvent* self) {
    return static_cast<int>(self->buttons());
}

QPointF* QSinglePointEvent_Position(const QSinglePointEvent* self) {
    return new QPointF(self->position());
}

QPointF* QSinglePointEvent_ScenePosition(const QSinglePointEvent* self) {
    return new QPointF(self->scenePosition());
}

QPointF* QSinglePointEvent_GlobalPosition(const QSinglePointEvent* self) {
    return new QPointF(self->globalPosition());
}

bool QSinglePointEvent_IsBeginEvent(const QSinglePointEvent* self) {
    return self->isBeginEvent();
}

bool QSinglePointEvent_IsUpdateEvent(const QSinglePointEvent* self) {
    return self->isUpdateEvent();
}

bool QSinglePointEvent_IsEndEvent(const QSinglePointEvent* self) {
    return self->isEndEvent();
}

QObject* QSinglePointEvent_ExclusivePointGrabber(const QSinglePointEvent* self) {
    return self->exclusivePointGrabber();
}

void QSinglePointEvent_SetExclusivePointGrabber(QSinglePointEvent* self, QObject* exclusiveGrabber) {
    self->setExclusivePointGrabber(exclusiveGrabber);
}

void QSinglePointEvent_SetTimestamp(QSinglePointEvent* self, unsigned long long timestamp) {
    self->setTimestamp(static_cast<quint64>(timestamp));
}

void QSinglePointEvent_SetAccepted(QSinglePointEvent* self, bool accepted) {
    self->setAccepted(accepted);
}

void QSinglePointEvent_Delete(QSinglePointEvent* self) {
    delete self;
}

QEnterEvent* QEnterEvent_new(QPointF* localPos, QPointF* scenePos, QPointF* globalPos) {
    return new VirtualQEnterEvent(*localPos, *scenePos, *globalPos);
}

QEnterEvent* QEnterEvent_new2(QPointF* localPos, QPointF* scenePos, QPointF* globalPos, QPointingDevice* device) {
    return new VirtualQEnterEvent(*localPos, *scenePos, *globalPos, device);
}

QPoint* QEnterEvent_Pos(const QEnterEvent* self) {
    return new QPoint(self->pos());
}

QPoint* QEnterEvent_GlobalPos(const QEnterEvent* self) {
    return new QPoint(self->globalPos());
}

int QEnterEvent_X(const QEnterEvent* self) {
    return self->x();
}

int QEnterEvent_Y(const QEnterEvent* self) {
    return self->y();
}

int QEnterEvent_GlobalX(const QEnterEvent* self) {
    return self->globalX();
}

int QEnterEvent_GlobalY(const QEnterEvent* self) {
    return self->globalY();
}

QPointF* QEnterEvent_LocalPos(const QEnterEvent* self) {
    return new QPointF(self->localPos());
}

QPointF* QEnterEvent_WindowPos(const QEnterEvent* self) {
    return new QPointF(self->windowPos());
}

QPointF* QEnterEvent_ScreenPos(const QEnterEvent* self) {
    return new QPointF(self->screenPos());
}

// Derived class handler implementation
QEnterEvent* QEnterEvent_Clone(const QEnterEvent* self) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        return vqenterevent->clone();
    } else {
        return vqenterevent->clone();
    }
}

// Base class handler implementation
QEnterEvent* QEnterEvent_QBaseClone(const QEnterEvent* self) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        vqenterevent->setQEnterEvent_Clone_IsBase(true);
        return vqenterevent->clone();
    } else {
        return vqenterevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnClone(const QEnterEvent* self, intptr_t slot) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        vqenterevent->setQEnterEvent_Clone_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QEnterEvent_IsBeginEvent(const QEnterEvent* self) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        return vqenterevent->isBeginEvent();
    } else {
        return vqenterevent->isBeginEvent();
    }
}

// Base class handler implementation
bool QEnterEvent_QBaseIsBeginEvent(const QEnterEvent* self) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        vqenterevent->setQEnterEvent_IsBeginEvent_IsBase(true);
        return vqenterevent->isBeginEvent();
    } else {
        return vqenterevent->isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnIsBeginEvent(const QEnterEvent* self, intptr_t slot) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        vqenterevent->setQEnterEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QEnterEvent_IsUpdateEvent(const QEnterEvent* self) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        return vqenterevent->isUpdateEvent();
    } else {
        return vqenterevent->isUpdateEvent();
    }
}

// Base class handler implementation
bool QEnterEvent_QBaseIsUpdateEvent(const QEnterEvent* self) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        vqenterevent->setQEnterEvent_IsUpdateEvent_IsBase(true);
        return vqenterevent->isUpdateEvent();
    } else {
        return vqenterevent->isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnIsUpdateEvent(const QEnterEvent* self, intptr_t slot) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        vqenterevent->setQEnterEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QEnterEvent_IsEndEvent(const QEnterEvent* self) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        return vqenterevent->isEndEvent();
    } else {
        return vqenterevent->isEndEvent();
    }
}

// Base class handler implementation
bool QEnterEvent_QBaseIsEndEvent(const QEnterEvent* self) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        vqenterevent->setQEnterEvent_IsEndEvent_IsBase(true);
        return vqenterevent->isEndEvent();
    } else {
        return vqenterevent->isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnIsEndEvent(const QEnterEvent* self, intptr_t slot) {
    if (auto* vqenterevent = const_cast<VirtualQEnterEvent*>(dynamic_cast<const VirtualQEnterEvent*>(self))) {
        vqenterevent->setQEnterEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QEnterEvent_SetTimestamp(QEnterEvent* self, unsigned long long timestamp) {
    if (auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self)) {
        vqenterevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqenterevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QEnterEvent_QBaseSetTimestamp(QEnterEvent* self, unsigned long long timestamp) {
    if (auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self)) {
        vqenterevent->setQEnterEvent_SetTimestamp_IsBase(true);
        vqenterevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqenterevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnSetTimestamp(QEnterEvent* self, intptr_t slot) {
    if (auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self)) {
        vqenterevent->setQEnterEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QEnterEvent_SetAccepted(QEnterEvent* self, bool accepted) {
    if (auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self)) {
        vqenterevent->setAccepted(accepted);
    } else {
        vqenterevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QEnterEvent_QBaseSetAccepted(QEnterEvent* self, bool accepted) {
    if (auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self)) {
        vqenterevent->setQEnterEvent_SetAccepted_IsBase(true);
        vqenterevent->setAccepted(accepted);
    } else {
        vqenterevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QEnterEvent_OnSetAccepted(QEnterEvent* self, intptr_t slot) {
    if (auto* vqenterevent = dynamic_cast<VirtualQEnterEvent*>(self)) {
        vqenterevent->setQEnterEvent_SetAccepted_Callback(reinterpret_cast<VirtualQEnterEvent::QEnterEvent_SetAccepted_Callback>(slot));
    }
}

void QEnterEvent_Delete(QEnterEvent* self) {
    delete self;
}

QMouseEvent* QMouseEvent_new(int typeVal, QPointF* localPos, int button, int buttons, int modifiers) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new2(int typeVal, QPointF* localPos, QPointF* globalPos, int button, int buttons, int modifiers) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new3(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new4(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, int source) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::MouseEventSource>(source));
}

QMouseEvent* QMouseEvent_new5(int typeVal, QPointF* localPos, int button, int buttons, int modifiers, QPointingDevice* device) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QMouseEvent* QMouseEvent_new6(int typeVal, QPointF* localPos, QPointF* globalPos, int button, int buttons, int modifiers, QPointingDevice* device) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QMouseEvent* QMouseEvent_new7(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, QPointingDevice* device) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QMouseEvent* QMouseEvent_new8(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, int source, QPointingDevice* device) {
    return new VirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::MouseEventSource>(source), device);
}

QPoint* QMouseEvent_Pos(const QMouseEvent* self) {
    return new QPoint(self->pos());
}

QPoint* QMouseEvent_GlobalPos(const QMouseEvent* self) {
    return new QPoint(self->globalPos());
}

int QMouseEvent_X(const QMouseEvent* self) {
    return self->x();
}

int QMouseEvent_Y(const QMouseEvent* self) {
    return self->y();
}

int QMouseEvent_GlobalX(const QMouseEvent* self) {
    return self->globalX();
}

int QMouseEvent_GlobalY(const QMouseEvent* self) {
    return self->globalY();
}

QPointF* QMouseEvent_LocalPos(const QMouseEvent* self) {
    return new QPointF(self->localPos());
}

QPointF* QMouseEvent_WindowPos(const QMouseEvent* self) {
    return new QPointF(self->windowPos());
}

QPointF* QMouseEvent_ScreenPos(const QMouseEvent* self) {
    return new QPointF(self->screenPos());
}

int QMouseEvent_Source(const QMouseEvent* self) {
    return static_cast<int>(self->source());
}

int QMouseEvent_Flags(const QMouseEvent* self) {
    return static_cast<int>(self->flags());
}

// Derived class handler implementation
QMouseEvent* QMouseEvent_Clone(const QMouseEvent* self) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        return vqmouseevent->clone();
    } else {
        return vqmouseevent->clone();
    }
}

// Base class handler implementation
QMouseEvent* QMouseEvent_QBaseClone(const QMouseEvent* self) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        vqmouseevent->setQMouseEvent_Clone_IsBase(true);
        return vqmouseevent->clone();
    } else {
        return vqmouseevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnClone(const QMouseEvent* self, intptr_t slot) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        vqmouseevent->setQMouseEvent_Clone_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMouseEvent_IsBeginEvent(const QMouseEvent* self) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        return vqmouseevent->isBeginEvent();
    } else {
        return vqmouseevent->isBeginEvent();
    }
}

// Base class handler implementation
bool QMouseEvent_QBaseIsBeginEvent(const QMouseEvent* self) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        vqmouseevent->setQMouseEvent_IsBeginEvent_IsBase(true);
        return vqmouseevent->isBeginEvent();
    } else {
        return vqmouseevent->isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnIsBeginEvent(const QMouseEvent* self, intptr_t slot) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        vqmouseevent->setQMouseEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMouseEvent_IsUpdateEvent(const QMouseEvent* self) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        return vqmouseevent->isUpdateEvent();
    } else {
        return vqmouseevent->isUpdateEvent();
    }
}

// Base class handler implementation
bool QMouseEvent_QBaseIsUpdateEvent(const QMouseEvent* self) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        vqmouseevent->setQMouseEvent_IsUpdateEvent_IsBase(true);
        return vqmouseevent->isUpdateEvent();
    } else {
        return vqmouseevent->isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnIsUpdateEvent(const QMouseEvent* self, intptr_t slot) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        vqmouseevent->setQMouseEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMouseEvent_IsEndEvent(const QMouseEvent* self) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        return vqmouseevent->isEndEvent();
    } else {
        return vqmouseevent->isEndEvent();
    }
}

// Base class handler implementation
bool QMouseEvent_QBaseIsEndEvent(const QMouseEvent* self) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        vqmouseevent->setQMouseEvent_IsEndEvent_IsBase(true);
        return vqmouseevent->isEndEvent();
    } else {
        return vqmouseevent->isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnIsEndEvent(const QMouseEvent* self, intptr_t slot) {
    if (auto* vqmouseevent = const_cast<VirtualQMouseEvent*>(dynamic_cast<const VirtualQMouseEvent*>(self))) {
        vqmouseevent->setQMouseEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMouseEvent_SetTimestamp(QMouseEvent* self, unsigned long long timestamp) {
    if (auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self)) {
        vqmouseevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqmouseevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QMouseEvent_QBaseSetTimestamp(QMouseEvent* self, unsigned long long timestamp) {
    if (auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self)) {
        vqmouseevent->setQMouseEvent_SetTimestamp_IsBase(true);
        vqmouseevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqmouseevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnSetTimestamp(QMouseEvent* self, intptr_t slot) {
    if (auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self)) {
        vqmouseevent->setQMouseEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QMouseEvent_SetAccepted(QMouseEvent* self, bool accepted) {
    if (auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self)) {
        vqmouseevent->setAccepted(accepted);
    } else {
        vqmouseevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QMouseEvent_QBaseSetAccepted(QMouseEvent* self, bool accepted) {
    if (auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self)) {
        vqmouseevent->setQMouseEvent_SetAccepted_IsBase(true);
        vqmouseevent->setAccepted(accepted);
    } else {
        vqmouseevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEvent_OnSetAccepted(QMouseEvent* self, intptr_t slot) {
    if (auto* vqmouseevent = dynamic_cast<VirtualQMouseEvent*>(self)) {
        vqmouseevent->setQMouseEvent_SetAccepted_Callback(reinterpret_cast<VirtualQMouseEvent::QMouseEvent_SetAccepted_Callback>(slot));
    }
}

void QMouseEvent_Delete(QMouseEvent* self) {
    delete self;
}

QHoverEvent* QHoverEvent_new(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *scenePos, *globalPos, *oldPos);
}

QHoverEvent* QHoverEvent_new2(int typeVal, QPointF* pos, QPointF* oldPos) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos);
}

QHoverEvent* QHoverEvent_new3(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *scenePos, *globalPos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QHoverEvent* QHoverEvent_new4(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers, QPointingDevice* device) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *scenePos, *globalPos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QHoverEvent* QHoverEvent_new5(int typeVal, QPointF* pos, QPointF* oldPos, int modifiers) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QHoverEvent* QHoverEvent_new6(int typeVal, QPointF* pos, QPointF* oldPos, int modifiers, QPointingDevice* device) {
    return new VirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QPoint* QHoverEvent_Pos(const QHoverEvent* self) {
    return new QPoint(self->pos());
}

QPointF* QHoverEvent_PosF(const QHoverEvent* self) {
    return new QPointF(self->posF());
}

QPoint* QHoverEvent_OldPos(const QHoverEvent* self) {
    return new QPoint(self->oldPos());
}

QPointF* QHoverEvent_OldPosF(const QHoverEvent* self) {
    return new QPointF(self->oldPosF());
}

// Derived class handler implementation
QHoverEvent* QHoverEvent_Clone(const QHoverEvent* self) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        return vqhoverevent->clone();
    } else {
        return vqhoverevent->clone();
    }
}

// Base class handler implementation
QHoverEvent* QHoverEvent_QBaseClone(const QHoverEvent* self) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        vqhoverevent->setQHoverEvent_Clone_IsBase(true);
        return vqhoverevent->clone();
    } else {
        return vqhoverevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnClone(const QHoverEvent* self, intptr_t slot) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        vqhoverevent->setQHoverEvent_Clone_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHoverEvent_IsUpdateEvent(const QHoverEvent* self) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        return vqhoverevent->isUpdateEvent();
    } else {
        return vqhoverevent->isUpdateEvent();
    }
}

// Base class handler implementation
bool QHoverEvent_QBaseIsUpdateEvent(const QHoverEvent* self) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        vqhoverevent->setQHoverEvent_IsUpdateEvent_IsBase(true);
        return vqhoverevent->isUpdateEvent();
    } else {
        return vqhoverevent->isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnIsUpdateEvent(const QHoverEvent* self, intptr_t slot) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        vqhoverevent->setQHoverEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHoverEvent_IsBeginEvent(const QHoverEvent* self) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        return vqhoverevent->isBeginEvent();
    } else {
        return vqhoverevent->isBeginEvent();
    }
}

// Base class handler implementation
bool QHoverEvent_QBaseIsBeginEvent(const QHoverEvent* self) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        vqhoverevent->setQHoverEvent_IsBeginEvent_IsBase(true);
        return vqhoverevent->isBeginEvent();
    } else {
        return vqhoverevent->isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnIsBeginEvent(const QHoverEvent* self, intptr_t slot) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        vqhoverevent->setQHoverEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHoverEvent_IsEndEvent(const QHoverEvent* self) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        return vqhoverevent->isEndEvent();
    } else {
        return vqhoverevent->isEndEvent();
    }
}

// Base class handler implementation
bool QHoverEvent_QBaseIsEndEvent(const QHoverEvent* self) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        vqhoverevent->setQHoverEvent_IsEndEvent_IsBase(true);
        return vqhoverevent->isEndEvent();
    } else {
        return vqhoverevent->isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnIsEndEvent(const QHoverEvent* self, intptr_t slot) {
    if (auto* vqhoverevent = const_cast<VirtualQHoverEvent*>(dynamic_cast<const VirtualQHoverEvent*>(self))) {
        vqhoverevent->setQHoverEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHoverEvent_SetTimestamp(QHoverEvent* self, unsigned long long timestamp) {
    if (auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self)) {
        vqhoverevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqhoverevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QHoverEvent_QBaseSetTimestamp(QHoverEvent* self, unsigned long long timestamp) {
    if (auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self)) {
        vqhoverevent->setQHoverEvent_SetTimestamp_IsBase(true);
        vqhoverevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqhoverevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnSetTimestamp(QHoverEvent* self, intptr_t slot) {
    if (auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self)) {
        vqhoverevent->setQHoverEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QHoverEvent_SetAccepted(QHoverEvent* self, bool accepted) {
    if (auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self)) {
        vqhoverevent->setAccepted(accepted);
    } else {
        vqhoverevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QHoverEvent_QBaseSetAccepted(QHoverEvent* self, bool accepted) {
    if (auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self)) {
        vqhoverevent->setQHoverEvent_SetAccepted_IsBase(true);
        vqhoverevent->setAccepted(accepted);
    } else {
        vqhoverevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnSetAccepted(QHoverEvent* self, intptr_t slot) {
    if (auto* vqhoverevent = dynamic_cast<VirtualQHoverEvent*>(self)) {
        vqhoverevent->setQHoverEvent_SetAccepted_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_SetAccepted_Callback>(slot));
    }
}

void QHoverEvent_Delete(QHoverEvent* self) {
    delete self;
}

QWheelEvent* QWheelEvent_new(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted) {
    return new VirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted);
}

QWheelEvent* QWheelEvent_new2(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source) {
    return new VirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source));
}

QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source, QPointingDevice* device) {
    return new VirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source), device);
}

QPoint* QWheelEvent_PixelDelta(const QWheelEvent* self) {
    return new QPoint(self->pixelDelta());
}

QPoint* QWheelEvent_AngleDelta(const QWheelEvent* self) {
    return new QPoint(self->angleDelta());
}

int QWheelEvent_Phase(const QWheelEvent* self) {
    return static_cast<int>(self->phase());
}

bool QWheelEvent_Inverted(const QWheelEvent* self) {
    return self->inverted();
}

bool QWheelEvent_IsInverted(const QWheelEvent* self) {
    return self->isInverted();
}

bool QWheelEvent_HasPixelDelta(const QWheelEvent* self) {
    return self->hasPixelDelta();
}

int QWheelEvent_Source(const QWheelEvent* self) {
    return static_cast<int>(self->source());
}

// Derived class handler implementation
QWheelEvent* QWheelEvent_Clone(const QWheelEvent* self) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        return vqwheelevent->clone();
    } else {
        return vqwheelevent->clone();
    }
}

// Base class handler implementation
QWheelEvent* QWheelEvent_QBaseClone(const QWheelEvent* self) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        vqwheelevent->setQWheelEvent_Clone_IsBase(true);
        return vqwheelevent->clone();
    } else {
        return vqwheelevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnClone(const QWheelEvent* self, intptr_t slot) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        vqwheelevent->setQWheelEvent_Clone_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWheelEvent_IsBeginEvent(const QWheelEvent* self) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        return vqwheelevent->isBeginEvent();
    } else {
        return vqwheelevent->isBeginEvent();
    }
}

// Base class handler implementation
bool QWheelEvent_QBaseIsBeginEvent(const QWheelEvent* self) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        vqwheelevent->setQWheelEvent_IsBeginEvent_IsBase(true);
        return vqwheelevent->isBeginEvent();
    } else {
        return vqwheelevent->isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnIsBeginEvent(const QWheelEvent* self, intptr_t slot) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        vqwheelevent->setQWheelEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWheelEvent_IsUpdateEvent(const QWheelEvent* self) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        return vqwheelevent->isUpdateEvent();
    } else {
        return vqwheelevent->isUpdateEvent();
    }
}

// Base class handler implementation
bool QWheelEvent_QBaseIsUpdateEvent(const QWheelEvent* self) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        vqwheelevent->setQWheelEvent_IsUpdateEvent_IsBase(true);
        return vqwheelevent->isUpdateEvent();
    } else {
        return vqwheelevent->isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnIsUpdateEvent(const QWheelEvent* self, intptr_t slot) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        vqwheelevent->setQWheelEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWheelEvent_IsEndEvent(const QWheelEvent* self) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        return vqwheelevent->isEndEvent();
    } else {
        return vqwheelevent->isEndEvent();
    }
}

// Base class handler implementation
bool QWheelEvent_QBaseIsEndEvent(const QWheelEvent* self) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        vqwheelevent->setQWheelEvent_IsEndEvent_IsBase(true);
        return vqwheelevent->isEndEvent();
    } else {
        return vqwheelevent->isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnIsEndEvent(const QWheelEvent* self, intptr_t slot) {
    if (auto* vqwheelevent = const_cast<VirtualQWheelEvent*>(dynamic_cast<const VirtualQWheelEvent*>(self))) {
        vqwheelevent->setQWheelEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWheelEvent_SetTimestamp(QWheelEvent* self, unsigned long long timestamp) {
    if (auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self)) {
        vqwheelevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqwheelevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QWheelEvent_QBaseSetTimestamp(QWheelEvent* self, unsigned long long timestamp) {
    if (auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self)) {
        vqwheelevent->setQWheelEvent_SetTimestamp_IsBase(true);
        vqwheelevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqwheelevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnSetTimestamp(QWheelEvent* self, intptr_t slot) {
    if (auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self)) {
        vqwheelevent->setQWheelEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QWheelEvent_SetAccepted(QWheelEvent* self, bool accepted) {
    if (auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self)) {
        vqwheelevent->setAccepted(accepted);
    } else {
        vqwheelevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QWheelEvent_QBaseSetAccepted(QWheelEvent* self, bool accepted) {
    if (auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self)) {
        vqwheelevent->setQWheelEvent_SetAccepted_IsBase(true);
        vqwheelevent->setAccepted(accepted);
    } else {
        vqwheelevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnSetAccepted(QWheelEvent* self, intptr_t slot) {
    if (auto* vqwheelevent = dynamic_cast<VirtualQWheelEvent*>(self)) {
        vqwheelevent->setQWheelEvent_SetAccepted_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_SetAccepted_Callback>(slot));
    }
}

void QWheelEvent_Delete(QWheelEvent* self) {
    delete self;
}

QTabletEvent* QTabletEvent_new(int t, QPointingDevice* device, QPointF* pos, QPointF* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int keyState, int button, int buttons) {
    return new VirtualQTabletEvent(static_cast<QEvent::Type>(t), device, *pos, *globalPos, static_cast<qreal>(pressure), static_cast<float>(xTilt), static_cast<float>(yTilt), static_cast<float>(tangentialPressure), static_cast<qreal>(rotation), static_cast<float>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons));
}

QPoint* QTabletEvent_Pos(const QTabletEvent* self) {
    return new QPoint(self->pos());
}

QPoint* QTabletEvent_GlobalPos(const QTabletEvent* self) {
    return new QPoint(self->globalPos());
}

QPointF* QTabletEvent_PosF(const QTabletEvent* self) {
    return new QPointF(self->posF());
}

QPointF* QTabletEvent_GlobalPosF(const QTabletEvent* self) {
    return new QPointF(self->globalPosF());
}

int QTabletEvent_X(const QTabletEvent* self) {
    return self->x();
}

int QTabletEvent_Y(const QTabletEvent* self) {
    return self->y();
}

int QTabletEvent_GlobalX(const QTabletEvent* self) {
    return self->globalX();
}

int QTabletEvent_GlobalY(const QTabletEvent* self) {
    return self->globalY();
}

double QTabletEvent_HiResGlobalX(const QTabletEvent* self) {
    return static_cast<double>(self->hiResGlobalX());
}

double QTabletEvent_HiResGlobalY(const QTabletEvent* self) {
    return static_cast<double>(self->hiResGlobalY());
}

long long QTabletEvent_UniqueId(const QTabletEvent* self) {
    return static_cast<long long>(self->uniqueId());
}

double QTabletEvent_Pressure(const QTabletEvent* self) {
    return static_cast<double>(self->pressure());
}

double QTabletEvent_Rotation(const QTabletEvent* self) {
    return static_cast<double>(self->rotation());
}

double QTabletEvent_Z(const QTabletEvent* self) {
    return static_cast<double>(self->z());
}

double QTabletEvent_TangentialPressure(const QTabletEvent* self) {
    return static_cast<double>(self->tangentialPressure());
}

double QTabletEvent_XTilt(const QTabletEvent* self) {
    return static_cast<double>(self->xTilt());
}

double QTabletEvent_YTilt(const QTabletEvent* self) {
    return static_cast<double>(self->yTilt());
}

// Derived class handler implementation
QTabletEvent* QTabletEvent_Clone(const QTabletEvent* self) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        return vqtabletevent->clone();
    } else {
        return vqtabletevent->clone();
    }
}

// Base class handler implementation
QTabletEvent* QTabletEvent_QBaseClone(const QTabletEvent* self) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        vqtabletevent->setQTabletEvent_Clone_IsBase(true);
        return vqtabletevent->clone();
    } else {
        return vqtabletevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnClone(const QTabletEvent* self, intptr_t slot) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        vqtabletevent->setQTabletEvent_Clone_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabletEvent_IsBeginEvent(const QTabletEvent* self) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        return vqtabletevent->isBeginEvent();
    } else {
        return vqtabletevent->isBeginEvent();
    }
}

// Base class handler implementation
bool QTabletEvent_QBaseIsBeginEvent(const QTabletEvent* self) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        vqtabletevent->setQTabletEvent_IsBeginEvent_IsBase(true);
        return vqtabletevent->isBeginEvent();
    } else {
        return vqtabletevent->isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnIsBeginEvent(const QTabletEvent* self, intptr_t slot) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        vqtabletevent->setQTabletEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabletEvent_IsUpdateEvent(const QTabletEvent* self) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        return vqtabletevent->isUpdateEvent();
    } else {
        return vqtabletevent->isUpdateEvent();
    }
}

// Base class handler implementation
bool QTabletEvent_QBaseIsUpdateEvent(const QTabletEvent* self) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        vqtabletevent->setQTabletEvent_IsUpdateEvent_IsBase(true);
        return vqtabletevent->isUpdateEvent();
    } else {
        return vqtabletevent->isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnIsUpdateEvent(const QTabletEvent* self, intptr_t slot) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        vqtabletevent->setQTabletEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabletEvent_IsEndEvent(const QTabletEvent* self) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        return vqtabletevent->isEndEvent();
    } else {
        return vqtabletevent->isEndEvent();
    }
}

// Base class handler implementation
bool QTabletEvent_QBaseIsEndEvent(const QTabletEvent* self) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        vqtabletevent->setQTabletEvent_IsEndEvent_IsBase(true);
        return vqtabletevent->isEndEvent();
    } else {
        return vqtabletevent->isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnIsEndEvent(const QTabletEvent* self, intptr_t slot) {
    if (auto* vqtabletevent = const_cast<VirtualQTabletEvent*>(dynamic_cast<const VirtualQTabletEvent*>(self))) {
        vqtabletevent->setQTabletEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabletEvent_SetTimestamp(QTabletEvent* self, unsigned long long timestamp) {
    if (auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self)) {
        vqtabletevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqtabletevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QTabletEvent_QBaseSetTimestamp(QTabletEvent* self, unsigned long long timestamp) {
    if (auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self)) {
        vqtabletevent->setQTabletEvent_SetTimestamp_IsBase(true);
        vqtabletevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqtabletevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnSetTimestamp(QTabletEvent* self, intptr_t slot) {
    if (auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self)) {
        vqtabletevent->setQTabletEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabletEvent_SetAccepted(QTabletEvent* self, bool accepted) {
    if (auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self)) {
        vqtabletevent->setAccepted(accepted);
    } else {
        vqtabletevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QTabletEvent_QBaseSetAccepted(QTabletEvent* self, bool accepted) {
    if (auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self)) {
        vqtabletevent->setQTabletEvent_SetAccepted_IsBase(true);
        vqtabletevent->setAccepted(accepted);
    } else {
        vqtabletevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabletEvent_OnSetAccepted(QTabletEvent* self, intptr_t slot) {
    if (auto* vqtabletevent = dynamic_cast<VirtualQTabletEvent*>(self)) {
        vqtabletevent->setQTabletEvent_SetAccepted_Callback(reinterpret_cast<VirtualQTabletEvent::QTabletEvent_SetAccepted_Callback>(slot));
    }
}

void QTabletEvent_Delete(QTabletEvent* self) {
    delete self;
}

QNativeGestureEvent* QNativeGestureEvent_new(int typeVal, QPointingDevice* dev, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, unsigned long long sequenceId, unsigned long long intArgument) {
    return new VirtualQNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, *localPos, *scenePos, *globalPos, static_cast<qreal>(value), static_cast<quint64>(sequenceId), static_cast<quint64>(intArgument));
}

QNativeGestureEvent* QNativeGestureEvent_new2(int typeVal, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta) {
    return new VirtualQNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, static_cast<int>(fingerCount), *localPos, *scenePos, *globalPos, static_cast<qreal>(value), *delta);
}

QNativeGestureEvent* QNativeGestureEvent_new3(int typeVal, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta, unsigned long long sequenceId) {
    return new VirtualQNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, static_cast<int>(fingerCount), *localPos, *scenePos, *globalPos, static_cast<qreal>(value), *delta, static_cast<quint64>(sequenceId));
}

int QNativeGestureEvent_GestureType(const QNativeGestureEvent* self) {
    return static_cast<int>(self->gestureType());
}

int QNativeGestureEvent_FingerCount(const QNativeGestureEvent* self) {
    return self->fingerCount();
}

double QNativeGestureEvent_Value(const QNativeGestureEvent* self) {
    return static_cast<double>(self->value());
}

QPointF* QNativeGestureEvent_Delta(const QNativeGestureEvent* self) {
    return new QPointF(self->delta());
}

QPoint* QNativeGestureEvent_Pos(const QNativeGestureEvent* self) {
    return new QPoint(self->pos());
}

QPoint* QNativeGestureEvent_GlobalPos(const QNativeGestureEvent* self) {
    return new QPoint(self->globalPos());
}

QPointF* QNativeGestureEvent_LocalPos(const QNativeGestureEvent* self) {
    return new QPointF(self->localPos());
}

QPointF* QNativeGestureEvent_WindowPos(const QNativeGestureEvent* self) {
    return new QPointF(self->windowPos());
}

QPointF* QNativeGestureEvent_ScreenPos(const QNativeGestureEvent* self) {
    return new QPointF(self->screenPos());
}

// Derived class handler implementation
QNativeGestureEvent* QNativeGestureEvent_Clone(const QNativeGestureEvent* self) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        return vqnativegestureevent->clone();
    } else {
        return vqnativegestureevent->clone();
    }
}

// Base class handler implementation
QNativeGestureEvent* QNativeGestureEvent_QBaseClone(const QNativeGestureEvent* self) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        vqnativegestureevent->setQNativeGestureEvent_Clone_IsBase(true);
        return vqnativegestureevent->clone();
    } else {
        return vqnativegestureevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnClone(const QNativeGestureEvent* self, intptr_t slot) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        vqnativegestureevent->setQNativeGestureEvent_Clone_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNativeGestureEvent_IsBeginEvent(const QNativeGestureEvent* self) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        return vqnativegestureevent->isBeginEvent();
    } else {
        return vqnativegestureevent->isBeginEvent();
    }
}

// Base class handler implementation
bool QNativeGestureEvent_QBaseIsBeginEvent(const QNativeGestureEvent* self) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        vqnativegestureevent->setQNativeGestureEvent_IsBeginEvent_IsBase(true);
        return vqnativegestureevent->isBeginEvent();
    } else {
        return vqnativegestureevent->isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnIsBeginEvent(const QNativeGestureEvent* self, intptr_t slot) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        vqnativegestureevent->setQNativeGestureEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNativeGestureEvent_IsUpdateEvent(const QNativeGestureEvent* self) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        return vqnativegestureevent->isUpdateEvent();
    } else {
        return vqnativegestureevent->isUpdateEvent();
    }
}

// Base class handler implementation
bool QNativeGestureEvent_QBaseIsUpdateEvent(const QNativeGestureEvent* self) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        vqnativegestureevent->setQNativeGestureEvent_IsUpdateEvent_IsBase(true);
        return vqnativegestureevent->isUpdateEvent();
    } else {
        return vqnativegestureevent->isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnIsUpdateEvent(const QNativeGestureEvent* self, intptr_t slot) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        vqnativegestureevent->setQNativeGestureEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNativeGestureEvent_IsEndEvent(const QNativeGestureEvent* self) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        return vqnativegestureevent->isEndEvent();
    } else {
        return vqnativegestureevent->isEndEvent();
    }
}

// Base class handler implementation
bool QNativeGestureEvent_QBaseIsEndEvent(const QNativeGestureEvent* self) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        vqnativegestureevent->setQNativeGestureEvent_IsEndEvent_IsBase(true);
        return vqnativegestureevent->isEndEvent();
    } else {
        return vqnativegestureevent->isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnIsEndEvent(const QNativeGestureEvent* self, intptr_t slot) {
    if (auto* vqnativegestureevent = const_cast<VirtualQNativeGestureEvent*>(dynamic_cast<const VirtualQNativeGestureEvent*>(self))) {
        vqnativegestureevent->setQNativeGestureEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNativeGestureEvent_SetTimestamp(QNativeGestureEvent* self, unsigned long long timestamp) {
    if (auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self)) {
        vqnativegestureevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqnativegestureevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QNativeGestureEvent_QBaseSetTimestamp(QNativeGestureEvent* self, unsigned long long timestamp) {
    if (auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self)) {
        vqnativegestureevent->setQNativeGestureEvent_SetTimestamp_IsBase(true);
        vqnativegestureevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqnativegestureevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnSetTimestamp(QNativeGestureEvent* self, intptr_t slot) {
    if (auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self)) {
        vqnativegestureevent->setQNativeGestureEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QNativeGestureEvent_SetAccepted(QNativeGestureEvent* self, bool accepted) {
    if (auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self)) {
        vqnativegestureevent->setAccepted(accepted);
    } else {
        vqnativegestureevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QNativeGestureEvent_QBaseSetAccepted(QNativeGestureEvent* self, bool accepted) {
    if (auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self)) {
        vqnativegestureevent->setQNativeGestureEvent_SetAccepted_IsBase(true);
        vqnativegestureevent->setAccepted(accepted);
    } else {
        vqnativegestureevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QNativeGestureEvent_OnSetAccepted(QNativeGestureEvent* self, intptr_t slot) {
    if (auto* vqnativegestureevent = dynamic_cast<VirtualQNativeGestureEvent*>(self)) {
        vqnativegestureevent->setQNativeGestureEvent_SetAccepted_Callback(reinterpret_cast<VirtualQNativeGestureEvent::QNativeGestureEvent_SetAccepted_Callback>(slot));
    }
}

void QNativeGestureEvent_Delete(QNativeGestureEvent* self) {
    delete self;
}

QKeyEvent* QKeyEvent_new(int typeVal, int key, int modifiers) {
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QKeyEvent* QKeyEvent_new2(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers) {
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers));
}

QKeyEvent* QKeyEvent_new3(int typeVal, int key, int modifiers, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString);
}

QKeyEvent* QKeyEvent_new4(int typeVal, int key, int modifiers, libqt_string text, bool autorep) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new5(int typeVal, int key, int modifiers, libqt_string text, bool autorep, uint16_t count) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep, static_cast<quint16>(count));
}

QKeyEvent* QKeyEvent_new6(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString);
}

QKeyEvent* QKeyEvent_new7(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, libqt_string text, bool autorep) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new8(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, libqt_string text, bool autorep, uint16_t count) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep, static_cast<quint16>(count));
}

QKeyEvent* QKeyEvent_new9(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, libqt_string text, bool autorep, uint16_t count, QInputDevice* device) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep, static_cast<quint16>(count), device);
}

int QKeyEvent_Key(const QKeyEvent* self) {
    return self->key();
}

bool QKeyEvent_Matches(const QKeyEvent* self, int key) {
    return self->matches(static_cast<QKeySequence::StandardKey>(key));
}

int QKeyEvent_Modifiers(const QKeyEvent* self) {
    return static_cast<int>(self->modifiers());
}

QKeyCombination* QKeyEvent_KeyCombination(const QKeyEvent* self) {
    return new QKeyCombination(self->keyCombination());
}

libqt_string QKeyEvent_Text(const QKeyEvent* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QKeyEvent_IsAutoRepeat(const QKeyEvent* self) {
    return self->isAutoRepeat();
}

int QKeyEvent_Count(const QKeyEvent* self) {
    return self->count();
}

unsigned int QKeyEvent_NativeScanCode(const QKeyEvent* self) {
    return static_cast<unsigned int>(self->nativeScanCode());
}

unsigned int QKeyEvent_NativeVirtualKey(const QKeyEvent* self) {
    return static_cast<unsigned int>(self->nativeVirtualKey());
}

unsigned int QKeyEvent_NativeModifiers(const QKeyEvent* self) {
    return static_cast<unsigned int>(self->nativeModifiers());
}

// Derived class handler implementation
QKeyEvent* QKeyEvent_Clone(const QKeyEvent* self) {
    if (auto* vqkeyevent = const_cast<VirtualQKeyEvent*>(dynamic_cast<const VirtualQKeyEvent*>(self))) {
        return vqkeyevent->clone();
    } else {
        return vqkeyevent->clone();
    }
}

// Base class handler implementation
QKeyEvent* QKeyEvent_QBaseClone(const QKeyEvent* self) {
    if (auto* vqkeyevent = const_cast<VirtualQKeyEvent*>(dynamic_cast<const VirtualQKeyEvent*>(self))) {
        vqkeyevent->setQKeyEvent_Clone_IsBase(true);
        return vqkeyevent->clone();
    } else {
        return vqkeyevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEvent_OnClone(const QKeyEvent* self, intptr_t slot) {
    if (auto* vqkeyevent = const_cast<VirtualQKeyEvent*>(dynamic_cast<const VirtualQKeyEvent*>(self))) {
        vqkeyevent->setQKeyEvent_Clone_Callback(reinterpret_cast<VirtualQKeyEvent::QKeyEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeyEvent_SetTimestamp(QKeyEvent* self, unsigned long long timestamp) {
    if (auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self)) {
        vqkeyevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqkeyevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QKeyEvent_QBaseSetTimestamp(QKeyEvent* self, unsigned long long timestamp) {
    if (auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self)) {
        vqkeyevent->setQKeyEvent_SetTimestamp_IsBase(true);
        vqkeyevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqkeyevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEvent_OnSetTimestamp(QKeyEvent* self, intptr_t slot) {
    if (auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self)) {
        vqkeyevent->setQKeyEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQKeyEvent::QKeyEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeyEvent_SetAccepted(QKeyEvent* self, bool accepted) {
    if (auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self)) {
        vqkeyevent->setAccepted(accepted);
    } else {
        vqkeyevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QKeyEvent_QBaseSetAccepted(QKeyEvent* self, bool accepted) {
    if (auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self)) {
        vqkeyevent->setQKeyEvent_SetAccepted_IsBase(true);
        vqkeyevent->setAccepted(accepted);
    } else {
        vqkeyevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEvent_OnSetAccepted(QKeyEvent* self, intptr_t slot) {
    if (auto* vqkeyevent = dynamic_cast<VirtualQKeyEvent*>(self)) {
        vqkeyevent->setQKeyEvent_SetAccepted_Callback(reinterpret_cast<VirtualQKeyEvent::QKeyEvent_SetAccepted_Callback>(slot));
    }
}

void QKeyEvent_Delete(QKeyEvent* self) {
    delete self;
}

QFocusEvent* QFocusEvent_new(int typeVal) {
    return new VirtualQFocusEvent(static_cast<QEvent::Type>(typeVal));
}

QFocusEvent* QFocusEvent_new2(int typeVal, int reason) {
    return new VirtualQFocusEvent(static_cast<QEvent::Type>(typeVal), static_cast<Qt::FocusReason>(reason));
}

bool QFocusEvent_GotFocus(const QFocusEvent* self) {
    return self->gotFocus();
}

bool QFocusEvent_LostFocus(const QFocusEvent* self) {
    return self->lostFocus();
}

int QFocusEvent_Reason(const QFocusEvent* self) {
    return static_cast<int>(self->reason());
}

// Derived class handler implementation
QFocusEvent* QFocusEvent_Clone(const QFocusEvent* self) {
    if (auto* vqfocusevent = const_cast<VirtualQFocusEvent*>(dynamic_cast<const VirtualQFocusEvent*>(self))) {
        return vqfocusevent->clone();
    } else {
        return vqfocusevent->clone();
    }
}

// Base class handler implementation
QFocusEvent* QFocusEvent_QBaseClone(const QFocusEvent* self) {
    if (auto* vqfocusevent = const_cast<VirtualQFocusEvent*>(dynamic_cast<const VirtualQFocusEvent*>(self))) {
        vqfocusevent->setQFocusEvent_Clone_IsBase(true);
        return vqfocusevent->clone();
    } else {
        return vqfocusevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusEvent_OnClone(const QFocusEvent* self, intptr_t slot) {
    if (auto* vqfocusevent = const_cast<VirtualQFocusEvent*>(dynamic_cast<const VirtualQFocusEvent*>(self))) {
        vqfocusevent->setQFocusEvent_Clone_Callback(reinterpret_cast<VirtualQFocusEvent::QFocusEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusEvent_SetAccepted(QFocusEvent* self, bool accepted) {
    if (auto* vqfocusevent = dynamic_cast<VirtualQFocusEvent*>(self)) {
        vqfocusevent->setAccepted(accepted);
    } else {
        vqfocusevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QFocusEvent_QBaseSetAccepted(QFocusEvent* self, bool accepted) {
    if (auto* vqfocusevent = dynamic_cast<VirtualQFocusEvent*>(self)) {
        vqfocusevent->setQFocusEvent_SetAccepted_IsBase(true);
        vqfocusevent->setAccepted(accepted);
    } else {
        vqfocusevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusEvent_OnSetAccepted(QFocusEvent* self, intptr_t slot) {
    if (auto* vqfocusevent = dynamic_cast<VirtualQFocusEvent*>(self)) {
        vqfocusevent->setQFocusEvent_SetAccepted_Callback(reinterpret_cast<VirtualQFocusEvent::QFocusEvent_SetAccepted_Callback>(slot));
    }
}

void QFocusEvent_Delete(QFocusEvent* self) {
    delete self;
}

QPaintEvent* QPaintEvent_new(QRegion* paintRegion) {
    return new VirtualQPaintEvent(*paintRegion);
}

QPaintEvent* QPaintEvent_new2(QRect* paintRect) {
    return new VirtualQPaintEvent(*paintRect);
}

QRect* QPaintEvent_Rect(const QPaintEvent* self) {
    const QRect& _ret = self->rect();
    // Cast returned reference into pointer
    return const_cast<QRect*>(&_ret);
}

QRegion* QPaintEvent_Region(const QPaintEvent* self) {
    const QRegion& _ret = self->region();
    // Cast returned reference into pointer
    return const_cast<QRegion*>(&_ret);
}

// Derived class handler implementation
QPaintEvent* QPaintEvent_Clone(const QPaintEvent* self) {
    if (auto* vqpaintevent = const_cast<VirtualQPaintEvent*>(dynamic_cast<const VirtualQPaintEvent*>(self))) {
        return vqpaintevent->clone();
    } else {
        return vqpaintevent->clone();
    }
}

// Base class handler implementation
QPaintEvent* QPaintEvent_QBaseClone(const QPaintEvent* self) {
    if (auto* vqpaintevent = const_cast<VirtualQPaintEvent*>(dynamic_cast<const VirtualQPaintEvent*>(self))) {
        vqpaintevent->setQPaintEvent_Clone_IsBase(true);
        return vqpaintevent->clone();
    } else {
        return vqpaintevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEvent_OnClone(const QPaintEvent* self, intptr_t slot) {
    if (auto* vqpaintevent = const_cast<VirtualQPaintEvent*>(dynamic_cast<const VirtualQPaintEvent*>(self))) {
        vqpaintevent->setQPaintEvent_Clone_Callback(reinterpret_cast<VirtualQPaintEvent::QPaintEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEvent_SetAccepted(QPaintEvent* self, bool accepted) {
    if (auto* vqpaintevent = dynamic_cast<VirtualQPaintEvent*>(self)) {
        vqpaintevent->setAccepted(accepted);
    } else {
        vqpaintevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QPaintEvent_QBaseSetAccepted(QPaintEvent* self, bool accepted) {
    if (auto* vqpaintevent = dynamic_cast<VirtualQPaintEvent*>(self)) {
        vqpaintevent->setQPaintEvent_SetAccepted_IsBase(true);
        vqpaintevent->setAccepted(accepted);
    } else {
        vqpaintevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEvent_OnSetAccepted(QPaintEvent* self, intptr_t slot) {
    if (auto* vqpaintevent = dynamic_cast<VirtualQPaintEvent*>(self)) {
        vqpaintevent->setQPaintEvent_SetAccepted_Callback(reinterpret_cast<VirtualQPaintEvent::QPaintEvent_SetAccepted_Callback>(slot));
    }
}

void QPaintEvent_Delete(QPaintEvent* self) {
    delete self;
}

QMoveEvent* QMoveEvent_new(QPoint* pos, QPoint* oldPos) {
    return new VirtualQMoveEvent(*pos, *oldPos);
}

QPoint* QMoveEvent_Pos(const QMoveEvent* self) {
    const QPoint& _ret = self->pos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

QPoint* QMoveEvent_OldPos(const QMoveEvent* self) {
    const QPoint& _ret = self->oldPos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

// Derived class handler implementation
QMoveEvent* QMoveEvent_Clone(const QMoveEvent* self) {
    if (auto* vqmoveevent = const_cast<VirtualQMoveEvent*>(dynamic_cast<const VirtualQMoveEvent*>(self))) {
        return vqmoveevent->clone();
    } else {
        return vqmoveevent->clone();
    }
}

// Base class handler implementation
QMoveEvent* QMoveEvent_QBaseClone(const QMoveEvent* self) {
    if (auto* vqmoveevent = const_cast<VirtualQMoveEvent*>(dynamic_cast<const VirtualQMoveEvent*>(self))) {
        vqmoveevent->setQMoveEvent_Clone_IsBase(true);
        return vqmoveevent->clone();
    } else {
        return vqmoveevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QMoveEvent_OnClone(const QMoveEvent* self, intptr_t slot) {
    if (auto* vqmoveevent = const_cast<VirtualQMoveEvent*>(dynamic_cast<const VirtualQMoveEvent*>(self))) {
        vqmoveevent->setQMoveEvent_Clone_Callback(reinterpret_cast<VirtualQMoveEvent::QMoveEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QMoveEvent_SetAccepted(QMoveEvent* self, bool accepted) {
    if (auto* vqmoveevent = dynamic_cast<VirtualQMoveEvent*>(self)) {
        vqmoveevent->setAccepted(accepted);
    } else {
        vqmoveevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QMoveEvent_QBaseSetAccepted(QMoveEvent* self, bool accepted) {
    if (auto* vqmoveevent = dynamic_cast<VirtualQMoveEvent*>(self)) {
        vqmoveevent->setQMoveEvent_SetAccepted_IsBase(true);
        vqmoveevent->setAccepted(accepted);
    } else {
        vqmoveevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QMoveEvent_OnSetAccepted(QMoveEvent* self, intptr_t slot) {
    if (auto* vqmoveevent = dynamic_cast<VirtualQMoveEvent*>(self)) {
        vqmoveevent->setQMoveEvent_SetAccepted_Callback(reinterpret_cast<VirtualQMoveEvent::QMoveEvent_SetAccepted_Callback>(slot));
    }
}

void QMoveEvent_Delete(QMoveEvent* self) {
    delete self;
}

QExposeEvent* QExposeEvent_new(QRegion* m_region) {
    return new VirtualQExposeEvent(*m_region);
}

QRegion* QExposeEvent_Region(const QExposeEvent* self) {
    const QRegion& _ret = self->region();
    // Cast returned reference into pointer
    return const_cast<QRegion*>(&_ret);
}

// Derived class handler implementation
QExposeEvent* QExposeEvent_Clone(const QExposeEvent* self) {
    if (auto* vqexposeevent = const_cast<VirtualQExposeEvent*>(dynamic_cast<const VirtualQExposeEvent*>(self))) {
        return vqexposeevent->clone();
    } else {
        return vqexposeevent->clone();
    }
}

// Base class handler implementation
QExposeEvent* QExposeEvent_QBaseClone(const QExposeEvent* self) {
    if (auto* vqexposeevent = const_cast<VirtualQExposeEvent*>(dynamic_cast<const VirtualQExposeEvent*>(self))) {
        vqexposeevent->setQExposeEvent_Clone_IsBase(true);
        return vqexposeevent->clone();
    } else {
        return vqexposeevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QExposeEvent_OnClone(const QExposeEvent* self, intptr_t slot) {
    if (auto* vqexposeevent = const_cast<VirtualQExposeEvent*>(dynamic_cast<const VirtualQExposeEvent*>(self))) {
        vqexposeevent->setQExposeEvent_Clone_Callback(reinterpret_cast<VirtualQExposeEvent::QExposeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QExposeEvent_SetAccepted(QExposeEvent* self, bool accepted) {
    if (auto* vqexposeevent = dynamic_cast<VirtualQExposeEvent*>(self)) {
        vqexposeevent->setAccepted(accepted);
    } else {
        vqexposeevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QExposeEvent_QBaseSetAccepted(QExposeEvent* self, bool accepted) {
    if (auto* vqexposeevent = dynamic_cast<VirtualQExposeEvent*>(self)) {
        vqexposeevent->setQExposeEvent_SetAccepted_IsBase(true);
        vqexposeevent->setAccepted(accepted);
    } else {
        vqexposeevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QExposeEvent_OnSetAccepted(QExposeEvent* self, intptr_t slot) {
    if (auto* vqexposeevent = dynamic_cast<VirtualQExposeEvent*>(self)) {
        vqexposeevent->setQExposeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQExposeEvent::QExposeEvent_SetAccepted_Callback>(slot));
    }
}

void QExposeEvent_Delete(QExposeEvent* self) {
    delete self;
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType) {
    return new VirtualQPlatformSurfaceEvent(static_cast<QPlatformSurfaceEvent::SurfaceEventType>(surfaceEventType));
}

int QPlatformSurfaceEvent_SurfaceEventType(const QPlatformSurfaceEvent* self) {
    return static_cast<int>(self->surfaceEventType());
}

// Derived class handler implementation
QPlatformSurfaceEvent* QPlatformSurfaceEvent_Clone(const QPlatformSurfaceEvent* self) {
    if (auto* vqplatformsurfaceevent = const_cast<VirtualQPlatformSurfaceEvent*>(dynamic_cast<const VirtualQPlatformSurfaceEvent*>(self))) {
        return vqplatformsurfaceevent->clone();
    } else {
        return vqplatformsurfaceevent->clone();
    }
}

// Base class handler implementation
QPlatformSurfaceEvent* QPlatformSurfaceEvent_QBaseClone(const QPlatformSurfaceEvent* self) {
    if (auto* vqplatformsurfaceevent = const_cast<VirtualQPlatformSurfaceEvent*>(dynamic_cast<const VirtualQPlatformSurfaceEvent*>(self))) {
        vqplatformsurfaceevent->setQPlatformSurfaceEvent_Clone_IsBase(true);
        return vqplatformsurfaceevent->clone();
    } else {
        return vqplatformsurfaceevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlatformSurfaceEvent_OnClone(const QPlatformSurfaceEvent* self, intptr_t slot) {
    if (auto* vqplatformsurfaceevent = const_cast<VirtualQPlatformSurfaceEvent*>(dynamic_cast<const VirtualQPlatformSurfaceEvent*>(self))) {
        vqplatformsurfaceevent->setQPlatformSurfaceEvent_Clone_Callback(reinterpret_cast<VirtualQPlatformSurfaceEvent::QPlatformSurfaceEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlatformSurfaceEvent_SetAccepted(QPlatformSurfaceEvent* self, bool accepted) {
    if (auto* vqplatformsurfaceevent = dynamic_cast<VirtualQPlatformSurfaceEvent*>(self)) {
        vqplatformsurfaceevent->setAccepted(accepted);
    } else {
        vqplatformsurfaceevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QPlatformSurfaceEvent_QBaseSetAccepted(QPlatformSurfaceEvent* self, bool accepted) {
    if (auto* vqplatformsurfaceevent = dynamic_cast<VirtualQPlatformSurfaceEvent*>(self)) {
        vqplatformsurfaceevent->setQPlatformSurfaceEvent_SetAccepted_IsBase(true);
        vqplatformsurfaceevent->setAccepted(accepted);
    } else {
        vqplatformsurfaceevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlatformSurfaceEvent_OnSetAccepted(QPlatformSurfaceEvent* self, intptr_t slot) {
    if (auto* vqplatformsurfaceevent = dynamic_cast<VirtualQPlatformSurfaceEvent*>(self)) {
        vqplatformsurfaceevent->setQPlatformSurfaceEvent_SetAccepted_Callback(reinterpret_cast<VirtualQPlatformSurfaceEvent::QPlatformSurfaceEvent_SetAccepted_Callback>(slot));
    }
}

void QPlatformSurfaceEvent_Delete(QPlatformSurfaceEvent* self) {
    delete self;
}

QResizeEvent* QResizeEvent_new(QSize* size, QSize* oldSize) {
    return new VirtualQResizeEvent(*size, *oldSize);
}

QSize* QResizeEvent_Size(const QResizeEvent* self) {
    const QSize& _ret = self->size();
    // Cast returned reference into pointer
    return const_cast<QSize*>(&_ret);
}

QSize* QResizeEvent_OldSize(const QResizeEvent* self) {
    const QSize& _ret = self->oldSize();
    // Cast returned reference into pointer
    return const_cast<QSize*>(&_ret);
}

// Derived class handler implementation
QResizeEvent* QResizeEvent_Clone(const QResizeEvent* self) {
    if (auto* vqresizeevent = const_cast<VirtualQResizeEvent*>(dynamic_cast<const VirtualQResizeEvent*>(self))) {
        return vqresizeevent->clone();
    } else {
        return vqresizeevent->clone();
    }
}

// Base class handler implementation
QResizeEvent* QResizeEvent_QBaseClone(const QResizeEvent* self) {
    if (auto* vqresizeevent = const_cast<VirtualQResizeEvent*>(dynamic_cast<const VirtualQResizeEvent*>(self))) {
        vqresizeevent->setQResizeEvent_Clone_IsBase(true);
        return vqresizeevent->clone();
    } else {
        return vqresizeevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QResizeEvent_OnClone(const QResizeEvent* self, intptr_t slot) {
    if (auto* vqresizeevent = const_cast<VirtualQResizeEvent*>(dynamic_cast<const VirtualQResizeEvent*>(self))) {
        vqresizeevent->setQResizeEvent_Clone_Callback(reinterpret_cast<VirtualQResizeEvent::QResizeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QResizeEvent_SetAccepted(QResizeEvent* self, bool accepted) {
    if (auto* vqresizeevent = dynamic_cast<VirtualQResizeEvent*>(self)) {
        vqresizeevent->setAccepted(accepted);
    } else {
        vqresizeevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QResizeEvent_QBaseSetAccepted(QResizeEvent* self, bool accepted) {
    if (auto* vqresizeevent = dynamic_cast<VirtualQResizeEvent*>(self)) {
        vqresizeevent->setQResizeEvent_SetAccepted_IsBase(true);
        vqresizeevent->setAccepted(accepted);
    } else {
        vqresizeevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QResizeEvent_OnSetAccepted(QResizeEvent* self, intptr_t slot) {
    if (auto* vqresizeevent = dynamic_cast<VirtualQResizeEvent*>(self)) {
        vqresizeevent->setQResizeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQResizeEvent::QResizeEvent_SetAccepted_Callback>(slot));
    }
}

void QResizeEvent_Delete(QResizeEvent* self) {
    delete self;
}

QCloseEvent* QCloseEvent_new() {
    return new VirtualQCloseEvent();
}

// Derived class handler implementation
QCloseEvent* QCloseEvent_Clone(const QCloseEvent* self) {
    if (auto* vqcloseevent = const_cast<VirtualQCloseEvent*>(dynamic_cast<const VirtualQCloseEvent*>(self))) {
        return vqcloseevent->clone();
    } else {
        return vqcloseevent->clone();
    }
}

// Base class handler implementation
QCloseEvent* QCloseEvent_QBaseClone(const QCloseEvent* self) {
    if (auto* vqcloseevent = const_cast<VirtualQCloseEvent*>(dynamic_cast<const VirtualQCloseEvent*>(self))) {
        vqcloseevent->setQCloseEvent_Clone_IsBase(true);
        return vqcloseevent->clone();
    } else {
        return vqcloseevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QCloseEvent_OnClone(const QCloseEvent* self, intptr_t slot) {
    if (auto* vqcloseevent = const_cast<VirtualQCloseEvent*>(dynamic_cast<const VirtualQCloseEvent*>(self))) {
        vqcloseevent->setQCloseEvent_Clone_Callback(reinterpret_cast<VirtualQCloseEvent::QCloseEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QCloseEvent_SetAccepted(QCloseEvent* self, bool accepted) {
    if (auto* vqcloseevent = dynamic_cast<VirtualQCloseEvent*>(self)) {
        vqcloseevent->setAccepted(accepted);
    } else {
        vqcloseevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QCloseEvent_QBaseSetAccepted(QCloseEvent* self, bool accepted) {
    if (auto* vqcloseevent = dynamic_cast<VirtualQCloseEvent*>(self)) {
        vqcloseevent->setQCloseEvent_SetAccepted_IsBase(true);
        vqcloseevent->setAccepted(accepted);
    } else {
        vqcloseevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QCloseEvent_OnSetAccepted(QCloseEvent* self, intptr_t slot) {
    if (auto* vqcloseevent = dynamic_cast<VirtualQCloseEvent*>(self)) {
        vqcloseevent->setQCloseEvent_SetAccepted_Callback(reinterpret_cast<VirtualQCloseEvent::QCloseEvent_SetAccepted_Callback>(slot));
    }
}

void QCloseEvent_Delete(QCloseEvent* self) {
    delete self;
}

QIconDragEvent* QIconDragEvent_new() {
    return new VirtualQIconDragEvent();
}

// Derived class handler implementation
QIconDragEvent* QIconDragEvent_Clone(const QIconDragEvent* self) {
    if (auto* vqicondragevent = const_cast<VirtualQIconDragEvent*>(dynamic_cast<const VirtualQIconDragEvent*>(self))) {
        return vqicondragevent->clone();
    } else {
        return vqicondragevent->clone();
    }
}

// Base class handler implementation
QIconDragEvent* QIconDragEvent_QBaseClone(const QIconDragEvent* self) {
    if (auto* vqicondragevent = const_cast<VirtualQIconDragEvent*>(dynamic_cast<const VirtualQIconDragEvent*>(self))) {
        vqicondragevent->setQIconDragEvent_Clone_IsBase(true);
        return vqicondragevent->clone();
    } else {
        return vqicondragevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QIconDragEvent_OnClone(const QIconDragEvent* self, intptr_t slot) {
    if (auto* vqicondragevent = const_cast<VirtualQIconDragEvent*>(dynamic_cast<const VirtualQIconDragEvent*>(self))) {
        vqicondragevent->setQIconDragEvent_Clone_Callback(reinterpret_cast<VirtualQIconDragEvent::QIconDragEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QIconDragEvent_SetAccepted(QIconDragEvent* self, bool accepted) {
    if (auto* vqicondragevent = dynamic_cast<VirtualQIconDragEvent*>(self)) {
        vqicondragevent->setAccepted(accepted);
    } else {
        vqicondragevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QIconDragEvent_QBaseSetAccepted(QIconDragEvent* self, bool accepted) {
    if (auto* vqicondragevent = dynamic_cast<VirtualQIconDragEvent*>(self)) {
        vqicondragevent->setQIconDragEvent_SetAccepted_IsBase(true);
        vqicondragevent->setAccepted(accepted);
    } else {
        vqicondragevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconDragEvent_OnSetAccepted(QIconDragEvent* self, intptr_t slot) {
    if (auto* vqicondragevent = dynamic_cast<VirtualQIconDragEvent*>(self)) {
        vqicondragevent->setQIconDragEvent_SetAccepted_Callback(reinterpret_cast<VirtualQIconDragEvent::QIconDragEvent_SetAccepted_Callback>(slot));
    }
}

void QIconDragEvent_Delete(QIconDragEvent* self) {
    delete self;
}

QShowEvent* QShowEvent_new() {
    return new VirtualQShowEvent();
}

// Derived class handler implementation
QShowEvent* QShowEvent_Clone(const QShowEvent* self) {
    if (auto* vqshowevent = const_cast<VirtualQShowEvent*>(dynamic_cast<const VirtualQShowEvent*>(self))) {
        return vqshowevent->clone();
    } else {
        return vqshowevent->clone();
    }
}

// Base class handler implementation
QShowEvent* QShowEvent_QBaseClone(const QShowEvent* self) {
    if (auto* vqshowevent = const_cast<VirtualQShowEvent*>(dynamic_cast<const VirtualQShowEvent*>(self))) {
        vqshowevent->setQShowEvent_Clone_IsBase(true);
        return vqshowevent->clone();
    } else {
        return vqshowevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QShowEvent_OnClone(const QShowEvent* self, intptr_t slot) {
    if (auto* vqshowevent = const_cast<VirtualQShowEvent*>(dynamic_cast<const VirtualQShowEvent*>(self))) {
        vqshowevent->setQShowEvent_Clone_Callback(reinterpret_cast<VirtualQShowEvent::QShowEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QShowEvent_SetAccepted(QShowEvent* self, bool accepted) {
    if (auto* vqshowevent = dynamic_cast<VirtualQShowEvent*>(self)) {
        vqshowevent->setAccepted(accepted);
    } else {
        vqshowevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QShowEvent_QBaseSetAccepted(QShowEvent* self, bool accepted) {
    if (auto* vqshowevent = dynamic_cast<VirtualQShowEvent*>(self)) {
        vqshowevent->setQShowEvent_SetAccepted_IsBase(true);
        vqshowevent->setAccepted(accepted);
    } else {
        vqshowevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QShowEvent_OnSetAccepted(QShowEvent* self, intptr_t slot) {
    if (auto* vqshowevent = dynamic_cast<VirtualQShowEvent*>(self)) {
        vqshowevent->setQShowEvent_SetAccepted_Callback(reinterpret_cast<VirtualQShowEvent::QShowEvent_SetAccepted_Callback>(slot));
    }
}

void QShowEvent_Delete(QShowEvent* self) {
    delete self;
}

QHideEvent* QHideEvent_new() {
    return new VirtualQHideEvent();
}

// Derived class handler implementation
QHideEvent* QHideEvent_Clone(const QHideEvent* self) {
    if (auto* vqhideevent = const_cast<VirtualQHideEvent*>(dynamic_cast<const VirtualQHideEvent*>(self))) {
        return vqhideevent->clone();
    } else {
        return vqhideevent->clone();
    }
}

// Base class handler implementation
QHideEvent* QHideEvent_QBaseClone(const QHideEvent* self) {
    if (auto* vqhideevent = const_cast<VirtualQHideEvent*>(dynamic_cast<const VirtualQHideEvent*>(self))) {
        vqhideevent->setQHideEvent_Clone_IsBase(true);
        return vqhideevent->clone();
    } else {
        return vqhideevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QHideEvent_OnClone(const QHideEvent* self, intptr_t slot) {
    if (auto* vqhideevent = const_cast<VirtualQHideEvent*>(dynamic_cast<const VirtualQHideEvent*>(self))) {
        vqhideevent->setQHideEvent_Clone_Callback(reinterpret_cast<VirtualQHideEvent::QHideEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QHideEvent_SetAccepted(QHideEvent* self, bool accepted) {
    if (auto* vqhideevent = dynamic_cast<VirtualQHideEvent*>(self)) {
        vqhideevent->setAccepted(accepted);
    } else {
        vqhideevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QHideEvent_QBaseSetAccepted(QHideEvent* self, bool accepted) {
    if (auto* vqhideevent = dynamic_cast<VirtualQHideEvent*>(self)) {
        vqhideevent->setQHideEvent_SetAccepted_IsBase(true);
        vqhideevent->setAccepted(accepted);
    } else {
        vqhideevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QHideEvent_OnSetAccepted(QHideEvent* self, intptr_t slot) {
    if (auto* vqhideevent = dynamic_cast<VirtualQHideEvent*>(self)) {
        vqhideevent->setQHideEvent_SetAccepted_Callback(reinterpret_cast<VirtualQHideEvent::QHideEvent_SetAccepted_Callback>(slot));
    }
}

void QHideEvent_Delete(QHideEvent* self) {
    delete self;
}

QContextMenuEvent* QContextMenuEvent_new(int reason, QPoint* pos, QPoint* globalPos) {
    return new VirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos);
}

QContextMenuEvent* QContextMenuEvent_new2(int reason, QPoint* pos) {
    return new VirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos);
}

QContextMenuEvent* QContextMenuEvent_new3(int reason, QPoint* pos, QPoint* globalPos, int modifiers) {
    return new VirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QContextMenuEvent_X(const QContextMenuEvent* self) {
    return self->x();
}

int QContextMenuEvent_Y(const QContextMenuEvent* self) {
    return self->y();
}

int QContextMenuEvent_GlobalX(const QContextMenuEvent* self) {
    return self->globalX();
}

int QContextMenuEvent_GlobalY(const QContextMenuEvent* self) {
    return self->globalY();
}

QPoint* QContextMenuEvent_Pos(const QContextMenuEvent* self) {
    const QPoint& _ret = self->pos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

QPoint* QContextMenuEvent_GlobalPos(const QContextMenuEvent* self) {
    const QPoint& _ret = self->globalPos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

int QContextMenuEvent_Reason(const QContextMenuEvent* self) {
    return static_cast<int>(self->reason());
}

// Derived class handler implementation
QContextMenuEvent* QContextMenuEvent_Clone(const QContextMenuEvent* self) {
    if (auto* vqcontextmenuevent = const_cast<VirtualQContextMenuEvent*>(dynamic_cast<const VirtualQContextMenuEvent*>(self))) {
        return vqcontextmenuevent->clone();
    } else {
        return vqcontextmenuevent->clone();
    }
}

// Base class handler implementation
QContextMenuEvent* QContextMenuEvent_QBaseClone(const QContextMenuEvent* self) {
    if (auto* vqcontextmenuevent = const_cast<VirtualQContextMenuEvent*>(dynamic_cast<const VirtualQContextMenuEvent*>(self))) {
        vqcontextmenuevent->setQContextMenuEvent_Clone_IsBase(true);
        return vqcontextmenuevent->clone();
    } else {
        return vqcontextmenuevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QContextMenuEvent_OnClone(const QContextMenuEvent* self, intptr_t slot) {
    if (auto* vqcontextmenuevent = const_cast<VirtualQContextMenuEvent*>(dynamic_cast<const VirtualQContextMenuEvent*>(self))) {
        vqcontextmenuevent->setQContextMenuEvent_Clone_Callback(reinterpret_cast<VirtualQContextMenuEvent::QContextMenuEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QContextMenuEvent_SetTimestamp(QContextMenuEvent* self, unsigned long long timestamp) {
    if (auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self)) {
        vqcontextmenuevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqcontextmenuevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QContextMenuEvent_QBaseSetTimestamp(QContextMenuEvent* self, unsigned long long timestamp) {
    if (auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self)) {
        vqcontextmenuevent->setQContextMenuEvent_SetTimestamp_IsBase(true);
        vqcontextmenuevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqcontextmenuevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QContextMenuEvent_OnSetTimestamp(QContextMenuEvent* self, intptr_t slot) {
    if (auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self)) {
        vqcontextmenuevent->setQContextMenuEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQContextMenuEvent::QContextMenuEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QContextMenuEvent_SetAccepted(QContextMenuEvent* self, bool accepted) {
    if (auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self)) {
        vqcontextmenuevent->setAccepted(accepted);
    } else {
        vqcontextmenuevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QContextMenuEvent_QBaseSetAccepted(QContextMenuEvent* self, bool accepted) {
    if (auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self)) {
        vqcontextmenuevent->setQContextMenuEvent_SetAccepted_IsBase(true);
        vqcontextmenuevent->setAccepted(accepted);
    } else {
        vqcontextmenuevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QContextMenuEvent_OnSetAccepted(QContextMenuEvent* self, intptr_t slot) {
    if (auto* vqcontextmenuevent = dynamic_cast<VirtualQContextMenuEvent*>(self)) {
        vqcontextmenuevent->setQContextMenuEvent_SetAccepted_Callback(reinterpret_cast<VirtualQContextMenuEvent::QContextMenuEvent_SetAccepted_Callback>(slot));
    }
}

void QContextMenuEvent_Delete(QContextMenuEvent* self) {
    delete self;
}

QInputMethodEvent* QInputMethodEvent_new() {
    return new VirtualQInputMethodEvent();
}

QInputMethodEvent* QInputMethodEvent_new2(libqt_string preeditText, libqt_list /* of QInputMethodEvent__Attribute* */ attributes) {
    QString preeditText_QString = QString::fromUtf8(preeditText.data, preeditText.len);
    QList<QInputMethodEvent::Attribute> attributes_QList;
    attributes_QList.reserve(attributes.len);
    QInputMethodEvent__Attribute** attributes_arr = static_cast<QInputMethodEvent__Attribute**>(attributes.data.ptr);
    for (size_t i = 0; i < attributes.len; ++i) {
        attributes_QList.push_back(*(attributes_arr[i]));
    }
    return new VirtualQInputMethodEvent(preeditText_QString, attributes_QList);
}

void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, libqt_string commitString) {
    QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
    self->setCommitString(commitString_QString);
}

libqt_list /* of QInputMethodEvent__Attribute* */ QInputMethodEvent_Attributes(const QInputMethodEvent* self) {
    const QList<QInputMethodEvent::Attribute>& _ret = self->attributes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QInputMethodEvent__Attribute** _arr = static_cast<QInputMethodEvent__Attribute**>(malloc(sizeof(QInputMethodEvent__Attribute*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QInputMethodEvent::Attribute(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_string QInputMethodEvent_PreeditString(const QInputMethodEvent* self) {
    const QString _ret = self->preeditString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputMethodEvent_CommitString(const QInputMethodEvent* self) {
    const QString _ret = self->commitString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QInputMethodEvent_ReplacementStart(const QInputMethodEvent* self) {
    return self->replacementStart();
}

int QInputMethodEvent_ReplacementLength(const QInputMethodEvent* self) {
    return self->replacementLength();
}

void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, libqt_string commitString, int replaceFrom) {
    QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
    self->setCommitString(commitString_QString, static_cast<int>(replaceFrom));
}

void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, libqt_string commitString, int replaceFrom, int replaceLength) {
    QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
    self->setCommitString(commitString_QString, static_cast<int>(replaceFrom), static_cast<int>(replaceLength));
}

// Derived class handler implementation
QInputMethodEvent* QInputMethodEvent_Clone(const QInputMethodEvent* self) {
    if (auto* vqinputmethodevent = const_cast<VirtualQInputMethodEvent*>(dynamic_cast<const VirtualQInputMethodEvent*>(self))) {
        return vqinputmethodevent->clone();
    } else {
        return vqinputmethodevent->clone();
    }
}

// Base class handler implementation
QInputMethodEvent* QInputMethodEvent_QBaseClone(const QInputMethodEvent* self) {
    if (auto* vqinputmethodevent = const_cast<VirtualQInputMethodEvent*>(dynamic_cast<const VirtualQInputMethodEvent*>(self))) {
        vqinputmethodevent->setQInputMethodEvent_Clone_IsBase(true);
        return vqinputmethodevent->clone();
    } else {
        return vqinputmethodevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputMethodEvent_OnClone(const QInputMethodEvent* self, intptr_t slot) {
    if (auto* vqinputmethodevent = const_cast<VirtualQInputMethodEvent*>(dynamic_cast<const VirtualQInputMethodEvent*>(self))) {
        vqinputmethodevent->setQInputMethodEvent_Clone_Callback(reinterpret_cast<VirtualQInputMethodEvent::QInputMethodEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputMethodEvent_SetAccepted(QInputMethodEvent* self, bool accepted) {
    if (auto* vqinputmethodevent = dynamic_cast<VirtualQInputMethodEvent*>(self)) {
        vqinputmethodevent->setAccepted(accepted);
    } else {
        vqinputmethodevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QInputMethodEvent_QBaseSetAccepted(QInputMethodEvent* self, bool accepted) {
    if (auto* vqinputmethodevent = dynamic_cast<VirtualQInputMethodEvent*>(self)) {
        vqinputmethodevent->setQInputMethodEvent_SetAccepted_IsBase(true);
        vqinputmethodevent->setAccepted(accepted);
    } else {
        vqinputmethodevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputMethodEvent_OnSetAccepted(QInputMethodEvent* self, intptr_t slot) {
    if (auto* vqinputmethodevent = dynamic_cast<VirtualQInputMethodEvent*>(self)) {
        vqinputmethodevent->setQInputMethodEvent_SetAccepted_Callback(reinterpret_cast<VirtualQInputMethodEvent::QInputMethodEvent_SetAccepted_Callback>(slot));
    }
}

void QInputMethodEvent_Delete(QInputMethodEvent* self) {
    delete self;
}

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries) {
    return new VirtualQInputMethodQueryEvent(static_cast<Qt::InputMethodQueries>(queries));
}

int QInputMethodQueryEvent_Queries(const QInputMethodQueryEvent* self) {
    return static_cast<int>(self->queries());
}

void QInputMethodQueryEvent_SetValue(QInputMethodQueryEvent* self, int query, QVariant* value) {
    self->setValue(static_cast<Qt::InputMethodQuery>(query), *value);
}

QVariant* QInputMethodQueryEvent_Value(const QInputMethodQueryEvent* self, int query) {
    return new QVariant(self->value(static_cast<Qt::InputMethodQuery>(query)));
}

// Derived class handler implementation
QInputMethodQueryEvent* QInputMethodQueryEvent_Clone(const QInputMethodQueryEvent* self) {
    if (auto* vqinputmethodqueryevent = const_cast<VirtualQInputMethodQueryEvent*>(dynamic_cast<const VirtualQInputMethodQueryEvent*>(self))) {
        return vqinputmethodqueryevent->clone();
    } else {
        return vqinputmethodqueryevent->clone();
    }
}

// Base class handler implementation
QInputMethodQueryEvent* QInputMethodQueryEvent_QBaseClone(const QInputMethodQueryEvent* self) {
    if (auto* vqinputmethodqueryevent = const_cast<VirtualQInputMethodQueryEvent*>(dynamic_cast<const VirtualQInputMethodQueryEvent*>(self))) {
        vqinputmethodqueryevent->setQInputMethodQueryEvent_Clone_IsBase(true);
        return vqinputmethodqueryevent->clone();
    } else {
        return vqinputmethodqueryevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputMethodQueryEvent_OnClone(const QInputMethodQueryEvent* self, intptr_t slot) {
    if (auto* vqinputmethodqueryevent = const_cast<VirtualQInputMethodQueryEvent*>(dynamic_cast<const VirtualQInputMethodQueryEvent*>(self))) {
        vqinputmethodqueryevent->setQInputMethodQueryEvent_Clone_Callback(reinterpret_cast<VirtualQInputMethodQueryEvent::QInputMethodQueryEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputMethodQueryEvent_SetAccepted(QInputMethodQueryEvent* self, bool accepted) {
    if (auto* vqinputmethodqueryevent = dynamic_cast<VirtualQInputMethodQueryEvent*>(self)) {
        vqinputmethodqueryevent->setAccepted(accepted);
    } else {
        vqinputmethodqueryevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QInputMethodQueryEvent_QBaseSetAccepted(QInputMethodQueryEvent* self, bool accepted) {
    if (auto* vqinputmethodqueryevent = dynamic_cast<VirtualQInputMethodQueryEvent*>(self)) {
        vqinputmethodqueryevent->setQInputMethodQueryEvent_SetAccepted_IsBase(true);
        vqinputmethodqueryevent->setAccepted(accepted);
    } else {
        vqinputmethodqueryevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputMethodQueryEvent_OnSetAccepted(QInputMethodQueryEvent* self, intptr_t slot) {
    if (auto* vqinputmethodqueryevent = dynamic_cast<VirtualQInputMethodQueryEvent*>(self)) {
        vqinputmethodqueryevent->setQInputMethodQueryEvent_SetAccepted_Callback(reinterpret_cast<VirtualQInputMethodQueryEvent::QInputMethodQueryEvent_SetAccepted_Callback>(slot));
    }
}

void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self) {
    delete self;
}

QDropEvent* QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers) {
    return new VirtualQDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDropEvent* QDropEvent_new2(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal) {
    return new VirtualQDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
}

QPoint* QDropEvent_Pos(const QDropEvent* self) {
    return new QPoint(self->pos());
}

QPointF* QDropEvent_PosF(const QDropEvent* self) {
    return new QPointF(self->posF());
}

int QDropEvent_MouseButtons(const QDropEvent* self) {
    return static_cast<int>(self->mouseButtons());
}

int QDropEvent_KeyboardModifiers(const QDropEvent* self) {
    return static_cast<int>(self->keyboardModifiers());
}

QPointF* QDropEvent_Position(const QDropEvent* self) {
    return new QPointF(self->position());
}

int QDropEvent_Buttons(const QDropEvent* self) {
    return static_cast<int>(self->buttons());
}

int QDropEvent_Modifiers(const QDropEvent* self) {
    return static_cast<int>(self->modifiers());
}

int QDropEvent_PossibleActions(const QDropEvent* self) {
    return static_cast<int>(self->possibleActions());
}

int QDropEvent_ProposedAction(const QDropEvent* self) {
    return static_cast<int>(self->proposedAction());
}

void QDropEvent_AcceptProposedAction(QDropEvent* self) {
    self->acceptProposedAction();
}

int QDropEvent_DropAction(const QDropEvent* self) {
    return static_cast<int>(self->dropAction());
}

void QDropEvent_SetDropAction(QDropEvent* self, int action) {
    self->setDropAction(static_cast<Qt::DropAction>(action));
}

QObject* QDropEvent_Source(const QDropEvent* self) {
    return self->source();
}

QMimeData* QDropEvent_MimeData(const QDropEvent* self) {
    return (QMimeData*)self->mimeData();
}

// Derived class handler implementation
QDropEvent* QDropEvent_Clone(const QDropEvent* self) {
    if (auto* vqdropevent = const_cast<VirtualQDropEvent*>(dynamic_cast<const VirtualQDropEvent*>(self))) {
        return vqdropevent->clone();
    } else {
        return vqdropevent->clone();
    }
}

// Base class handler implementation
QDropEvent* QDropEvent_QBaseClone(const QDropEvent* self) {
    if (auto* vqdropevent = const_cast<VirtualQDropEvent*>(dynamic_cast<const VirtualQDropEvent*>(self))) {
        vqdropevent->setQDropEvent_Clone_IsBase(true);
        return vqdropevent->clone();
    } else {
        return vqdropevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QDropEvent_OnClone(const QDropEvent* self, intptr_t slot) {
    if (auto* vqdropevent = const_cast<VirtualQDropEvent*>(dynamic_cast<const VirtualQDropEvent*>(self))) {
        vqdropevent->setQDropEvent_Clone_Callback(reinterpret_cast<VirtualQDropEvent::QDropEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QDropEvent_SetAccepted(QDropEvent* self, bool accepted) {
    if (auto* vqdropevent = dynamic_cast<VirtualQDropEvent*>(self)) {
        vqdropevent->setAccepted(accepted);
    } else {
        vqdropevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QDropEvent_QBaseSetAccepted(QDropEvent* self, bool accepted) {
    if (auto* vqdropevent = dynamic_cast<VirtualQDropEvent*>(self)) {
        vqdropevent->setQDropEvent_SetAccepted_IsBase(true);
        vqdropevent->setAccepted(accepted);
    } else {
        vqdropevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QDropEvent_OnSetAccepted(QDropEvent* self, intptr_t slot) {
    if (auto* vqdropevent = dynamic_cast<VirtualQDropEvent*>(self)) {
        vqdropevent->setQDropEvent_SetAccepted_Callback(reinterpret_cast<VirtualQDropEvent::QDropEvent_SetAccepted_Callback>(slot));
    }
}

void QDropEvent_Delete(QDropEvent* self) {
    delete self;
}

QDragMoveEvent* QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers) {
    return new VirtualQDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDragMoveEvent* QDragMoveEvent_new2(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal) {
    return new VirtualQDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
}

QRect* QDragMoveEvent_AnswerRect(const QDragMoveEvent* self) {
    return new QRect(self->answerRect());
}

void QDragMoveEvent_Accept(QDragMoveEvent* self) {
    self->accept();
}

void QDragMoveEvent_Ignore(QDragMoveEvent* self) {
    self->ignore();
}

void QDragMoveEvent_AcceptWithQRect(QDragMoveEvent* self, QRect* r) {
    self->accept(*r);
}

void QDragMoveEvent_IgnoreWithQRect(QDragMoveEvent* self, QRect* r) {
    self->ignore(*r);
}

// Derived class handler implementation
QDragMoveEvent* QDragMoveEvent_Clone(const QDragMoveEvent* self) {
    if (auto* vqdragmoveevent = const_cast<VirtualQDragMoveEvent*>(dynamic_cast<const VirtualQDragMoveEvent*>(self))) {
        return vqdragmoveevent->clone();
    } else {
        return vqdragmoveevent->clone();
    }
}

// Base class handler implementation
QDragMoveEvent* QDragMoveEvent_QBaseClone(const QDragMoveEvent* self) {
    if (auto* vqdragmoveevent = const_cast<VirtualQDragMoveEvent*>(dynamic_cast<const VirtualQDragMoveEvent*>(self))) {
        vqdragmoveevent->setQDragMoveEvent_Clone_IsBase(true);
        return vqdragmoveevent->clone();
    } else {
        return vqdragmoveevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QDragMoveEvent_OnClone(const QDragMoveEvent* self, intptr_t slot) {
    if (auto* vqdragmoveevent = const_cast<VirtualQDragMoveEvent*>(dynamic_cast<const VirtualQDragMoveEvent*>(self))) {
        vqdragmoveevent->setQDragMoveEvent_Clone_Callback(reinterpret_cast<VirtualQDragMoveEvent::QDragMoveEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QDragMoveEvent_SetAccepted(QDragMoveEvent* self, bool accepted) {
    if (auto* vqdragmoveevent = dynamic_cast<VirtualQDragMoveEvent*>(self)) {
        vqdragmoveevent->setAccepted(accepted);
    } else {
        vqdragmoveevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QDragMoveEvent_QBaseSetAccepted(QDragMoveEvent* self, bool accepted) {
    if (auto* vqdragmoveevent = dynamic_cast<VirtualQDragMoveEvent*>(self)) {
        vqdragmoveevent->setQDragMoveEvent_SetAccepted_IsBase(true);
        vqdragmoveevent->setAccepted(accepted);
    } else {
        vqdragmoveevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QDragMoveEvent_OnSetAccepted(QDragMoveEvent* self, intptr_t slot) {
    if (auto* vqdragmoveevent = dynamic_cast<VirtualQDragMoveEvent*>(self)) {
        vqdragmoveevent->setQDragMoveEvent_SetAccepted_Callback(reinterpret_cast<VirtualQDragMoveEvent::QDragMoveEvent_SetAccepted_Callback>(slot));
    }
}

void QDragMoveEvent_Delete(QDragMoveEvent* self) {
    delete self;
}

QDragEnterEvent* QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers) {
    return new VirtualQDragEnterEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

// Derived class handler implementation
QDragEnterEvent* QDragEnterEvent_Clone(const QDragEnterEvent* self) {
    if (auto* vqdragenterevent = const_cast<VirtualQDragEnterEvent*>(dynamic_cast<const VirtualQDragEnterEvent*>(self))) {
        return vqdragenterevent->clone();
    } else {
        return vqdragenterevent->clone();
    }
}

// Base class handler implementation
QDragEnterEvent* QDragEnterEvent_QBaseClone(const QDragEnterEvent* self) {
    if (auto* vqdragenterevent = const_cast<VirtualQDragEnterEvent*>(dynamic_cast<const VirtualQDragEnterEvent*>(self))) {
        vqdragenterevent->setQDragEnterEvent_Clone_IsBase(true);
        return vqdragenterevent->clone();
    } else {
        return vqdragenterevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QDragEnterEvent_OnClone(const QDragEnterEvent* self, intptr_t slot) {
    if (auto* vqdragenterevent = const_cast<VirtualQDragEnterEvent*>(dynamic_cast<const VirtualQDragEnterEvent*>(self))) {
        vqdragenterevent->setQDragEnterEvent_Clone_Callback(reinterpret_cast<VirtualQDragEnterEvent::QDragEnterEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QDragEnterEvent_SetAccepted(QDragEnterEvent* self, bool accepted) {
    if (auto* vqdragenterevent = dynamic_cast<VirtualQDragEnterEvent*>(self)) {
        vqdragenterevent->setAccepted(accepted);
    } else {
        vqdragenterevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QDragEnterEvent_QBaseSetAccepted(QDragEnterEvent* self, bool accepted) {
    if (auto* vqdragenterevent = dynamic_cast<VirtualQDragEnterEvent*>(self)) {
        vqdragenterevent->setQDragEnterEvent_SetAccepted_IsBase(true);
        vqdragenterevent->setAccepted(accepted);
    } else {
        vqdragenterevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QDragEnterEvent_OnSetAccepted(QDragEnterEvent* self, intptr_t slot) {
    if (auto* vqdragenterevent = dynamic_cast<VirtualQDragEnterEvent*>(self)) {
        vqdragenterevent->setQDragEnterEvent_SetAccepted_Callback(reinterpret_cast<VirtualQDragEnterEvent::QDragEnterEvent_SetAccepted_Callback>(slot));
    }
}

void QDragEnterEvent_Delete(QDragEnterEvent* self) {
    delete self;
}

QDragLeaveEvent* QDragLeaveEvent_new() {
    return new VirtualQDragLeaveEvent();
}

// Derived class handler implementation
QDragLeaveEvent* QDragLeaveEvent_Clone(const QDragLeaveEvent* self) {
    if (auto* vqdragleaveevent = const_cast<VirtualQDragLeaveEvent*>(dynamic_cast<const VirtualQDragLeaveEvent*>(self))) {
        return vqdragleaveevent->clone();
    } else {
        return vqdragleaveevent->clone();
    }
}

// Base class handler implementation
QDragLeaveEvent* QDragLeaveEvent_QBaseClone(const QDragLeaveEvent* self) {
    if (auto* vqdragleaveevent = const_cast<VirtualQDragLeaveEvent*>(dynamic_cast<const VirtualQDragLeaveEvent*>(self))) {
        vqdragleaveevent->setQDragLeaveEvent_Clone_IsBase(true);
        return vqdragleaveevent->clone();
    } else {
        return vqdragleaveevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QDragLeaveEvent_OnClone(const QDragLeaveEvent* self, intptr_t slot) {
    if (auto* vqdragleaveevent = const_cast<VirtualQDragLeaveEvent*>(dynamic_cast<const VirtualQDragLeaveEvent*>(self))) {
        vqdragleaveevent->setQDragLeaveEvent_Clone_Callback(reinterpret_cast<VirtualQDragLeaveEvent::QDragLeaveEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QDragLeaveEvent_SetAccepted(QDragLeaveEvent* self, bool accepted) {
    if (auto* vqdragleaveevent = dynamic_cast<VirtualQDragLeaveEvent*>(self)) {
        vqdragleaveevent->setAccepted(accepted);
    } else {
        vqdragleaveevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QDragLeaveEvent_QBaseSetAccepted(QDragLeaveEvent* self, bool accepted) {
    if (auto* vqdragleaveevent = dynamic_cast<VirtualQDragLeaveEvent*>(self)) {
        vqdragleaveevent->setQDragLeaveEvent_SetAccepted_IsBase(true);
        vqdragleaveevent->setAccepted(accepted);
    } else {
        vqdragleaveevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QDragLeaveEvent_OnSetAccepted(QDragLeaveEvent* self, intptr_t slot) {
    if (auto* vqdragleaveevent = dynamic_cast<VirtualQDragLeaveEvent*>(self)) {
        vqdragleaveevent->setQDragLeaveEvent_SetAccepted_Callback(reinterpret_cast<VirtualQDragLeaveEvent::QDragLeaveEvent_SetAccepted_Callback>(slot));
    }
}

void QDragLeaveEvent_Delete(QDragLeaveEvent* self) {
    delete self;
}

QHelpEvent* QHelpEvent_new(int typeVal, QPoint* pos, QPoint* globalPos) {
    return new VirtualQHelpEvent(static_cast<QEvent::Type>(typeVal), *pos, *globalPos);
}

int QHelpEvent_X(const QHelpEvent* self) {
    return self->x();
}

int QHelpEvent_Y(const QHelpEvent* self) {
    return self->y();
}

int QHelpEvent_GlobalX(const QHelpEvent* self) {
    return self->globalX();
}

int QHelpEvent_GlobalY(const QHelpEvent* self) {
    return self->globalY();
}

QPoint* QHelpEvent_Pos(const QHelpEvent* self) {
    const QPoint& _ret = self->pos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

QPoint* QHelpEvent_GlobalPos(const QHelpEvent* self) {
    const QPoint& _ret = self->globalPos();
    // Cast returned reference into pointer
    return const_cast<QPoint*>(&_ret);
}

// Derived class handler implementation
QHelpEvent* QHelpEvent_Clone(const QHelpEvent* self) {
    if (auto* vqhelpevent = const_cast<VirtualQHelpEvent*>(dynamic_cast<const VirtualQHelpEvent*>(self))) {
        return vqhelpevent->clone();
    } else {
        return vqhelpevent->clone();
    }
}

// Base class handler implementation
QHelpEvent* QHelpEvent_QBaseClone(const QHelpEvent* self) {
    if (auto* vqhelpevent = const_cast<VirtualQHelpEvent*>(dynamic_cast<const VirtualQHelpEvent*>(self))) {
        vqhelpevent->setQHelpEvent_Clone_IsBase(true);
        return vqhelpevent->clone();
    } else {
        return vqhelpevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QHelpEvent_OnClone(const QHelpEvent* self, intptr_t slot) {
    if (auto* vqhelpevent = const_cast<VirtualQHelpEvent*>(dynamic_cast<const VirtualQHelpEvent*>(self))) {
        vqhelpevent->setQHelpEvent_Clone_Callback(reinterpret_cast<VirtualQHelpEvent::QHelpEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QHelpEvent_SetAccepted(QHelpEvent* self, bool accepted) {
    if (auto* vqhelpevent = dynamic_cast<VirtualQHelpEvent*>(self)) {
        vqhelpevent->setAccepted(accepted);
    } else {
        vqhelpevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QHelpEvent_QBaseSetAccepted(QHelpEvent* self, bool accepted) {
    if (auto* vqhelpevent = dynamic_cast<VirtualQHelpEvent*>(self)) {
        vqhelpevent->setQHelpEvent_SetAccepted_IsBase(true);
        vqhelpevent->setAccepted(accepted);
    } else {
        vqhelpevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QHelpEvent_OnSetAccepted(QHelpEvent* self, intptr_t slot) {
    if (auto* vqhelpevent = dynamic_cast<VirtualQHelpEvent*>(self)) {
        vqhelpevent->setQHelpEvent_SetAccepted_Callback(reinterpret_cast<VirtualQHelpEvent::QHelpEvent_SetAccepted_Callback>(slot));
    }
}

void QHelpEvent_Delete(QHelpEvent* self) {
    delete self;
}

QStatusTipEvent* QStatusTipEvent_new(libqt_string tip) {
    QString tip_QString = QString::fromUtf8(tip.data, tip.len);
    return new VirtualQStatusTipEvent(tip_QString);
}

libqt_string QStatusTipEvent_Tip(const QStatusTipEvent* self) {
    QString _ret = self->tip();
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
QStatusTipEvent* QStatusTipEvent_Clone(const QStatusTipEvent* self) {
    if (auto* vqstatustipevent = const_cast<VirtualQStatusTipEvent*>(dynamic_cast<const VirtualQStatusTipEvent*>(self))) {
        return vqstatustipevent->clone();
    } else {
        return vqstatustipevent->clone();
    }
}

// Base class handler implementation
QStatusTipEvent* QStatusTipEvent_QBaseClone(const QStatusTipEvent* self) {
    if (auto* vqstatustipevent = const_cast<VirtualQStatusTipEvent*>(dynamic_cast<const VirtualQStatusTipEvent*>(self))) {
        vqstatustipevent->setQStatusTipEvent_Clone_IsBase(true);
        return vqstatustipevent->clone();
    } else {
        return vqstatustipevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusTipEvent_OnClone(const QStatusTipEvent* self, intptr_t slot) {
    if (auto* vqstatustipevent = const_cast<VirtualQStatusTipEvent*>(dynamic_cast<const VirtualQStatusTipEvent*>(self))) {
        vqstatustipevent->setQStatusTipEvent_Clone_Callback(reinterpret_cast<VirtualQStatusTipEvent::QStatusTipEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QStatusTipEvent_SetAccepted(QStatusTipEvent* self, bool accepted) {
    if (auto* vqstatustipevent = dynamic_cast<VirtualQStatusTipEvent*>(self)) {
        vqstatustipevent->setAccepted(accepted);
    } else {
        vqstatustipevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QStatusTipEvent_QBaseSetAccepted(QStatusTipEvent* self, bool accepted) {
    if (auto* vqstatustipevent = dynamic_cast<VirtualQStatusTipEvent*>(self)) {
        vqstatustipevent->setQStatusTipEvent_SetAccepted_IsBase(true);
        vqstatustipevent->setAccepted(accepted);
    } else {
        vqstatustipevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QStatusTipEvent_OnSetAccepted(QStatusTipEvent* self, intptr_t slot) {
    if (auto* vqstatustipevent = dynamic_cast<VirtualQStatusTipEvent*>(self)) {
        vqstatustipevent->setQStatusTipEvent_SetAccepted_Callback(reinterpret_cast<VirtualQStatusTipEvent::QStatusTipEvent_SetAccepted_Callback>(slot));
    }
}

void QStatusTipEvent_Delete(QStatusTipEvent* self) {
    delete self;
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(libqt_string href) {
    QString href_QString = QString::fromUtf8(href.data, href.len);
    return new VirtualQWhatsThisClickedEvent(href_QString);
}

libqt_string QWhatsThisClickedEvent_Href(const QWhatsThisClickedEvent* self) {
    QString _ret = self->href();
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
QWhatsThisClickedEvent* QWhatsThisClickedEvent_Clone(const QWhatsThisClickedEvent* self) {
    if (auto* vqwhatsthisclickedevent = const_cast<VirtualQWhatsThisClickedEvent*>(dynamic_cast<const VirtualQWhatsThisClickedEvent*>(self))) {
        return vqwhatsthisclickedevent->clone();
    } else {
        return vqwhatsthisclickedevent->clone();
    }
}

// Base class handler implementation
QWhatsThisClickedEvent* QWhatsThisClickedEvent_QBaseClone(const QWhatsThisClickedEvent* self) {
    if (auto* vqwhatsthisclickedevent = const_cast<VirtualQWhatsThisClickedEvent*>(dynamic_cast<const VirtualQWhatsThisClickedEvent*>(self))) {
        vqwhatsthisclickedevent->setQWhatsThisClickedEvent_Clone_IsBase(true);
        return vqwhatsthisclickedevent->clone();
    } else {
        return vqwhatsthisclickedevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QWhatsThisClickedEvent_OnClone(const QWhatsThisClickedEvent* self, intptr_t slot) {
    if (auto* vqwhatsthisclickedevent = const_cast<VirtualQWhatsThisClickedEvent*>(dynamic_cast<const VirtualQWhatsThisClickedEvent*>(self))) {
        vqwhatsthisclickedevent->setQWhatsThisClickedEvent_Clone_Callback(reinterpret_cast<VirtualQWhatsThisClickedEvent::QWhatsThisClickedEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QWhatsThisClickedEvent_SetAccepted(QWhatsThisClickedEvent* self, bool accepted) {
    if (auto* vqwhatsthisclickedevent = dynamic_cast<VirtualQWhatsThisClickedEvent*>(self)) {
        vqwhatsthisclickedevent->setAccepted(accepted);
    } else {
        vqwhatsthisclickedevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QWhatsThisClickedEvent_QBaseSetAccepted(QWhatsThisClickedEvent* self, bool accepted) {
    if (auto* vqwhatsthisclickedevent = dynamic_cast<VirtualQWhatsThisClickedEvent*>(self)) {
        vqwhatsthisclickedevent->setQWhatsThisClickedEvent_SetAccepted_IsBase(true);
        vqwhatsthisclickedevent->setAccepted(accepted);
    } else {
        vqwhatsthisclickedevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QWhatsThisClickedEvent_OnSetAccepted(QWhatsThisClickedEvent* self, intptr_t slot) {
    if (auto* vqwhatsthisclickedevent = dynamic_cast<VirtualQWhatsThisClickedEvent*>(self)) {
        vqwhatsthisclickedevent->setQWhatsThisClickedEvent_SetAccepted_Callback(reinterpret_cast<VirtualQWhatsThisClickedEvent::QWhatsThisClickedEvent_SetAccepted_Callback>(slot));
    }
}

void QWhatsThisClickedEvent_Delete(QWhatsThisClickedEvent* self) {
    delete self;
}

QActionEvent* QActionEvent_new(int typeVal, QAction* action) {
    return new VirtualQActionEvent(static_cast<int>(typeVal), action);
}

QActionEvent* QActionEvent_new2(int typeVal, QAction* action, QAction* before) {
    return new VirtualQActionEvent(static_cast<int>(typeVal), action, before);
}

QAction* QActionEvent_Action(const QActionEvent* self) {
    return self->action();
}

QAction* QActionEvent_Before(const QActionEvent* self) {
    return self->before();
}

// Derived class handler implementation
QActionEvent* QActionEvent_Clone(const QActionEvent* self) {
    if (auto* vqactionevent = const_cast<VirtualQActionEvent*>(dynamic_cast<const VirtualQActionEvent*>(self))) {
        return vqactionevent->clone();
    } else {
        return vqactionevent->clone();
    }
}

// Base class handler implementation
QActionEvent* QActionEvent_QBaseClone(const QActionEvent* self) {
    if (auto* vqactionevent = const_cast<VirtualQActionEvent*>(dynamic_cast<const VirtualQActionEvent*>(self))) {
        vqactionevent->setQActionEvent_Clone_IsBase(true);
        return vqactionevent->clone();
    } else {
        return vqactionevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QActionEvent_OnClone(const QActionEvent* self, intptr_t slot) {
    if (auto* vqactionevent = const_cast<VirtualQActionEvent*>(dynamic_cast<const VirtualQActionEvent*>(self))) {
        vqactionevent->setQActionEvent_Clone_Callback(reinterpret_cast<VirtualQActionEvent::QActionEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QActionEvent_SetAccepted(QActionEvent* self, bool accepted) {
    if (auto* vqactionevent = dynamic_cast<VirtualQActionEvent*>(self)) {
        vqactionevent->setAccepted(accepted);
    } else {
        vqactionevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QActionEvent_QBaseSetAccepted(QActionEvent* self, bool accepted) {
    if (auto* vqactionevent = dynamic_cast<VirtualQActionEvent*>(self)) {
        vqactionevent->setQActionEvent_SetAccepted_IsBase(true);
        vqactionevent->setAccepted(accepted);
    } else {
        vqactionevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionEvent_OnSetAccepted(QActionEvent* self, intptr_t slot) {
    if (auto* vqactionevent = dynamic_cast<VirtualQActionEvent*>(self)) {
        vqactionevent->setQActionEvent_SetAccepted_Callback(reinterpret_cast<VirtualQActionEvent::QActionEvent_SetAccepted_Callback>(slot));
    }
}

void QActionEvent_Delete(QActionEvent* self) {
    delete self;
}

QFileOpenEvent* QFileOpenEvent_new(libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new VirtualQFileOpenEvent(file_QString);
}

QFileOpenEvent* QFileOpenEvent_new2(QUrl* url) {
    return new VirtualQFileOpenEvent(*url);
}

libqt_string QFileOpenEvent_File(const QFileOpenEvent* self) {
    QString _ret = self->file();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QFileOpenEvent_Url(const QFileOpenEvent* self) {
    return new QUrl(self->url());
}

bool QFileOpenEvent_OpenFile(const QFileOpenEvent* self, QFile* file, int flags) {
    return self->openFile(*file, static_cast<QIODevice::OpenMode>(flags));
}

// Derived class handler implementation
QFileOpenEvent* QFileOpenEvent_Clone(const QFileOpenEvent* self) {
    if (auto* vqfileopenevent = const_cast<VirtualQFileOpenEvent*>(dynamic_cast<const VirtualQFileOpenEvent*>(self))) {
        return vqfileopenevent->clone();
    } else {
        return vqfileopenevent->clone();
    }
}

// Base class handler implementation
QFileOpenEvent* QFileOpenEvent_QBaseClone(const QFileOpenEvent* self) {
    if (auto* vqfileopenevent = const_cast<VirtualQFileOpenEvent*>(dynamic_cast<const VirtualQFileOpenEvent*>(self))) {
        vqfileopenevent->setQFileOpenEvent_Clone_IsBase(true);
        return vqfileopenevent->clone();
    } else {
        return vqfileopenevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileOpenEvent_OnClone(const QFileOpenEvent* self, intptr_t slot) {
    if (auto* vqfileopenevent = const_cast<VirtualQFileOpenEvent*>(dynamic_cast<const VirtualQFileOpenEvent*>(self))) {
        vqfileopenevent->setQFileOpenEvent_Clone_Callback(reinterpret_cast<VirtualQFileOpenEvent::QFileOpenEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileOpenEvent_SetAccepted(QFileOpenEvent* self, bool accepted) {
    if (auto* vqfileopenevent = dynamic_cast<VirtualQFileOpenEvent*>(self)) {
        vqfileopenevent->setAccepted(accepted);
    } else {
        vqfileopenevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QFileOpenEvent_QBaseSetAccepted(QFileOpenEvent* self, bool accepted) {
    if (auto* vqfileopenevent = dynamic_cast<VirtualQFileOpenEvent*>(self)) {
        vqfileopenevent->setQFileOpenEvent_SetAccepted_IsBase(true);
        vqfileopenevent->setAccepted(accepted);
    } else {
        vqfileopenevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileOpenEvent_OnSetAccepted(QFileOpenEvent* self, intptr_t slot) {
    if (auto* vqfileopenevent = dynamic_cast<VirtualQFileOpenEvent*>(self)) {
        vqfileopenevent->setQFileOpenEvent_SetAccepted_Callback(reinterpret_cast<VirtualQFileOpenEvent::QFileOpenEvent_SetAccepted_Callback>(slot));
    }
}

void QFileOpenEvent_Delete(QFileOpenEvent* self) {
    delete self;
}

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t) {
    return new VirtualQToolBarChangeEvent(t);
}

bool QToolBarChangeEvent_Toggle(const QToolBarChangeEvent* self) {
    return self->toggle();
}

// Derived class handler implementation
QToolBarChangeEvent* QToolBarChangeEvent_Clone(const QToolBarChangeEvent* self) {
    if (auto* vqtoolbarchangeevent = const_cast<VirtualQToolBarChangeEvent*>(dynamic_cast<const VirtualQToolBarChangeEvent*>(self))) {
        return vqtoolbarchangeevent->clone();
    } else {
        return vqtoolbarchangeevent->clone();
    }
}

// Base class handler implementation
QToolBarChangeEvent* QToolBarChangeEvent_QBaseClone(const QToolBarChangeEvent* self) {
    if (auto* vqtoolbarchangeevent = const_cast<VirtualQToolBarChangeEvent*>(dynamic_cast<const VirtualQToolBarChangeEvent*>(self))) {
        vqtoolbarchangeevent->setQToolBarChangeEvent_Clone_IsBase(true);
        return vqtoolbarchangeevent->clone();
    } else {
        return vqtoolbarchangeevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBarChangeEvent_OnClone(const QToolBarChangeEvent* self, intptr_t slot) {
    if (auto* vqtoolbarchangeevent = const_cast<VirtualQToolBarChangeEvent*>(dynamic_cast<const VirtualQToolBarChangeEvent*>(self))) {
        vqtoolbarchangeevent->setQToolBarChangeEvent_Clone_Callback(reinterpret_cast<VirtualQToolBarChangeEvent::QToolBarChangeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBarChangeEvent_SetAccepted(QToolBarChangeEvent* self, bool accepted) {
    if (auto* vqtoolbarchangeevent = dynamic_cast<VirtualQToolBarChangeEvent*>(self)) {
        vqtoolbarchangeevent->setAccepted(accepted);
    } else {
        vqtoolbarchangeevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QToolBarChangeEvent_QBaseSetAccepted(QToolBarChangeEvent* self, bool accepted) {
    if (auto* vqtoolbarchangeevent = dynamic_cast<VirtualQToolBarChangeEvent*>(self)) {
        vqtoolbarchangeevent->setQToolBarChangeEvent_SetAccepted_IsBase(true);
        vqtoolbarchangeevent->setAccepted(accepted);
    } else {
        vqtoolbarchangeevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBarChangeEvent_OnSetAccepted(QToolBarChangeEvent* self, intptr_t slot) {
    if (auto* vqtoolbarchangeevent = dynamic_cast<VirtualQToolBarChangeEvent*>(self)) {
        vqtoolbarchangeevent->setQToolBarChangeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQToolBarChangeEvent::QToolBarChangeEvent_SetAccepted_Callback>(slot));
    }
}

void QToolBarChangeEvent_Delete(QToolBarChangeEvent* self) {
    delete self;
}

QShortcutEvent* QShortcutEvent_new(QKeySequence* key, int id) {
    return new VirtualQShortcutEvent(*key, static_cast<int>(id));
}

QShortcutEvent* QShortcutEvent_new2(QKeySequence* key, int id, bool ambiguous) {
    return new VirtualQShortcutEvent(*key, static_cast<int>(id), ambiguous);
}

QKeySequence* QShortcutEvent_Key(const QShortcutEvent* self) {
    const QKeySequence& _ret = self->key();
    // Cast returned reference into pointer
    return const_cast<QKeySequence*>(&_ret);
}

int QShortcutEvent_ShortcutId(const QShortcutEvent* self) {
    return self->shortcutId();
}

bool QShortcutEvent_IsAmbiguous(const QShortcutEvent* self) {
    return self->isAmbiguous();
}

// Derived class handler implementation
QShortcutEvent* QShortcutEvent_Clone(const QShortcutEvent* self) {
    if (auto* vqshortcutevent = const_cast<VirtualQShortcutEvent*>(dynamic_cast<const VirtualQShortcutEvent*>(self))) {
        return vqshortcutevent->clone();
    } else {
        return vqshortcutevent->clone();
    }
}

// Base class handler implementation
QShortcutEvent* QShortcutEvent_QBaseClone(const QShortcutEvent* self) {
    if (auto* vqshortcutevent = const_cast<VirtualQShortcutEvent*>(dynamic_cast<const VirtualQShortcutEvent*>(self))) {
        vqshortcutevent->setQShortcutEvent_Clone_IsBase(true);
        return vqshortcutevent->clone();
    } else {
        return vqshortcutevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcutEvent_OnClone(const QShortcutEvent* self, intptr_t slot) {
    if (auto* vqshortcutevent = const_cast<VirtualQShortcutEvent*>(dynamic_cast<const VirtualQShortcutEvent*>(self))) {
        vqshortcutevent->setQShortcutEvent_Clone_Callback(reinterpret_cast<VirtualQShortcutEvent::QShortcutEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QShortcutEvent_SetAccepted(QShortcutEvent* self, bool accepted) {
    if (auto* vqshortcutevent = dynamic_cast<VirtualQShortcutEvent*>(self)) {
        vqshortcutevent->setAccepted(accepted);
    } else {
        vqshortcutevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QShortcutEvent_QBaseSetAccepted(QShortcutEvent* self, bool accepted) {
    if (auto* vqshortcutevent = dynamic_cast<VirtualQShortcutEvent*>(self)) {
        vqshortcutevent->setQShortcutEvent_SetAccepted_IsBase(true);
        vqshortcutevent->setAccepted(accepted);
    } else {
        vqshortcutevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcutEvent_OnSetAccepted(QShortcutEvent* self, intptr_t slot) {
    if (auto* vqshortcutevent = dynamic_cast<VirtualQShortcutEvent*>(self)) {
        vqshortcutevent->setQShortcutEvent_SetAccepted_Callback(reinterpret_cast<VirtualQShortcutEvent::QShortcutEvent_SetAccepted_Callback>(slot));
    }
}

void QShortcutEvent_Delete(QShortcutEvent* self) {
    delete self;
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int oldState) {
    return new VirtualQWindowStateChangeEvent(static_cast<Qt::WindowStates>(oldState));
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new2(int oldState, bool isOverride) {
    return new VirtualQWindowStateChangeEvent(static_cast<Qt::WindowStates>(oldState), isOverride);
}

int QWindowStateChangeEvent_OldState(const QWindowStateChangeEvent* self) {
    return static_cast<int>(self->oldState());
}

bool QWindowStateChangeEvent_IsOverride(const QWindowStateChangeEvent* self) {
    return self->isOverride();
}

// Derived class handler implementation
QWindowStateChangeEvent* QWindowStateChangeEvent_Clone(const QWindowStateChangeEvent* self) {
    if (auto* vqwindowstatechangeevent = const_cast<VirtualQWindowStateChangeEvent*>(dynamic_cast<const VirtualQWindowStateChangeEvent*>(self))) {
        return vqwindowstatechangeevent->clone();
    } else {
        return vqwindowstatechangeevent->clone();
    }
}

// Base class handler implementation
QWindowStateChangeEvent* QWindowStateChangeEvent_QBaseClone(const QWindowStateChangeEvent* self) {
    if (auto* vqwindowstatechangeevent = const_cast<VirtualQWindowStateChangeEvent*>(dynamic_cast<const VirtualQWindowStateChangeEvent*>(self))) {
        vqwindowstatechangeevent->setQWindowStateChangeEvent_Clone_IsBase(true);
        return vqwindowstatechangeevent->clone();
    } else {
        return vqwindowstatechangeevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowStateChangeEvent_OnClone(const QWindowStateChangeEvent* self, intptr_t slot) {
    if (auto* vqwindowstatechangeevent = const_cast<VirtualQWindowStateChangeEvent*>(dynamic_cast<const VirtualQWindowStateChangeEvent*>(self))) {
        vqwindowstatechangeevent->setQWindowStateChangeEvent_Clone_Callback(reinterpret_cast<VirtualQWindowStateChangeEvent::QWindowStateChangeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindowStateChangeEvent_SetAccepted(QWindowStateChangeEvent* self, bool accepted) {
    if (auto* vqwindowstatechangeevent = dynamic_cast<VirtualQWindowStateChangeEvent*>(self)) {
        vqwindowstatechangeevent->setAccepted(accepted);
    } else {
        vqwindowstatechangeevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QWindowStateChangeEvent_QBaseSetAccepted(QWindowStateChangeEvent* self, bool accepted) {
    if (auto* vqwindowstatechangeevent = dynamic_cast<VirtualQWindowStateChangeEvent*>(self)) {
        vqwindowstatechangeevent->setQWindowStateChangeEvent_SetAccepted_IsBase(true);
        vqwindowstatechangeevent->setAccepted(accepted);
    } else {
        vqwindowstatechangeevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindowStateChangeEvent_OnSetAccepted(QWindowStateChangeEvent* self, intptr_t slot) {
    if (auto* vqwindowstatechangeevent = dynamic_cast<VirtualQWindowStateChangeEvent*>(self)) {
        vqwindowstatechangeevent->setQWindowStateChangeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQWindowStateChangeEvent::QWindowStateChangeEvent_SetAccepted_Callback>(slot));
    }
}

void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self) {
    delete self;
}

QTouchEvent* QTouchEvent_new(int eventType) {
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType));
}

QTouchEvent* QTouchEvent_new2(int eventType, QPointingDevice* device, int modifiers, int touchPointStates) {
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEventPoint::States>(touchPointStates));
}

QTouchEvent* QTouchEvent_new3(int eventType, QPointingDevice* device) {
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device);
}

QTouchEvent* QTouchEvent_new4(int eventType, QPointingDevice* device, int modifiers) {
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QTouchEvent* QTouchEvent_new5(int eventType, QPointingDevice* device, int modifiers, libqt_list /* of QEventPoint* */ touchPoints) {
    QList<QEventPoint> touchPoints_QList;
    touchPoints_QList.reserve(touchPoints.len);
    QEventPoint** touchPoints_arr = static_cast<QEventPoint**>(touchPoints.data.ptr);
    for (size_t i = 0; i < touchPoints.len; ++i) {
        touchPoints_QList.push_back(*(touchPoints_arr[i]));
    }
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), touchPoints_QList);
}

QTouchEvent* QTouchEvent_new6(int eventType, QPointingDevice* device, int modifiers, int touchPointStates, libqt_list /* of QEventPoint* */ touchPoints) {
    QList<QEventPoint> touchPoints_QList;
    touchPoints_QList.reserve(touchPoints.len);
    QEventPoint** touchPoints_arr = static_cast<QEventPoint**>(touchPoints.data.ptr);
    for (size_t i = 0; i < touchPoints.len; ++i) {
        touchPoints_QList.push_back(*(touchPoints_arr[i]));
    }
    return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEventPoint::States>(touchPointStates), touchPoints_QList);
}

QObject* QTouchEvent_Target(const QTouchEvent* self) {
    return self->target();
}

int QTouchEvent_TouchPointStates(const QTouchEvent* self) {
    return static_cast<int>(self->touchPointStates());
}

libqt_list /* of QEventPoint* */ QTouchEvent_TouchPoints(const QTouchEvent* self) {
    const QList<QEventPoint>& _ret = self->touchPoints();
    // Convert QList<> from C++ memory to manually-managed C memory
    QEventPoint** _arr = static_cast<QEventPoint**>(malloc(sizeof(QEventPoint*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QEventPoint(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

// Derived class handler implementation
QTouchEvent* QTouchEvent_Clone(const QTouchEvent* self) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        return vqtouchevent->clone();
    } else {
        return vqtouchevent->clone();
    }
}

// Base class handler implementation
QTouchEvent* QTouchEvent_QBaseClone(const QTouchEvent* self) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        vqtouchevent->setQTouchEvent_Clone_IsBase(true);
        return vqtouchevent->clone();
    } else {
        return vqtouchevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnClone(const QTouchEvent* self, intptr_t slot) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        vqtouchevent->setQTouchEvent_Clone_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTouchEvent_IsBeginEvent(const QTouchEvent* self) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        return vqtouchevent->isBeginEvent();
    } else {
        return vqtouchevent->isBeginEvent();
    }
}

// Base class handler implementation
bool QTouchEvent_QBaseIsBeginEvent(const QTouchEvent* self) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        vqtouchevent->setQTouchEvent_IsBeginEvent_IsBase(true);
        return vqtouchevent->isBeginEvent();
    } else {
        return vqtouchevent->isBeginEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnIsBeginEvent(const QTouchEvent* self, intptr_t slot) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        vqtouchevent->setQTouchEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_IsBeginEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTouchEvent_IsUpdateEvent(const QTouchEvent* self) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        return vqtouchevent->isUpdateEvent();
    } else {
        return vqtouchevent->isUpdateEvent();
    }
}

// Base class handler implementation
bool QTouchEvent_QBaseIsUpdateEvent(const QTouchEvent* self) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        vqtouchevent->setQTouchEvent_IsUpdateEvent_IsBase(true);
        return vqtouchevent->isUpdateEvent();
    } else {
        return vqtouchevent->isUpdateEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnIsUpdateEvent(const QTouchEvent* self, intptr_t slot) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        vqtouchevent->setQTouchEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_IsUpdateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTouchEvent_IsEndEvent(const QTouchEvent* self) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        return vqtouchevent->isEndEvent();
    } else {
        return vqtouchevent->isEndEvent();
    }
}

// Base class handler implementation
bool QTouchEvent_QBaseIsEndEvent(const QTouchEvent* self) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        vqtouchevent->setQTouchEvent_IsEndEvent_IsBase(true);
        return vqtouchevent->isEndEvent();
    } else {
        return vqtouchevent->isEndEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnIsEndEvent(const QTouchEvent* self, intptr_t slot) {
    if (auto* vqtouchevent = const_cast<VirtualQTouchEvent*>(dynamic_cast<const VirtualQTouchEvent*>(self))) {
        vqtouchevent->setQTouchEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_IsEndEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTouchEvent_SetTimestamp(QTouchEvent* self, unsigned long long timestamp) {
    if (auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self)) {
        vqtouchevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqtouchevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Base class handler implementation
void QTouchEvent_QBaseSetTimestamp(QTouchEvent* self, unsigned long long timestamp) {
    if (auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self)) {
        vqtouchevent->setQTouchEvent_SetTimestamp_IsBase(true);
        vqtouchevent->setTimestamp(static_cast<quint64>(timestamp));
    } else {
        vqtouchevent->setTimestamp(static_cast<quint64>(timestamp));
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnSetTimestamp(QTouchEvent* self, intptr_t slot) {
    if (auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self)) {
        vqtouchevent->setQTouchEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_SetTimestamp_Callback>(slot));
    }
}

// Derived class handler implementation
void QTouchEvent_SetAccepted(QTouchEvent* self, bool accepted) {
    if (auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self)) {
        vqtouchevent->setAccepted(accepted);
    } else {
        vqtouchevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QTouchEvent_QBaseSetAccepted(QTouchEvent* self, bool accepted) {
    if (auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self)) {
        vqtouchevent->setQTouchEvent_SetAccepted_IsBase(true);
        vqtouchevent->setAccepted(accepted);
    } else {
        vqtouchevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnSetAccepted(QTouchEvent* self, intptr_t slot) {
    if (auto* vqtouchevent = dynamic_cast<VirtualQTouchEvent*>(self)) {
        vqtouchevent->setQTouchEvent_SetAccepted_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_SetAccepted_Callback>(slot));
    }
}

void QTouchEvent_Delete(QTouchEvent* self) {
    delete self;
}

QScrollPrepareEvent* QScrollPrepareEvent_new(QPointF* startPos) {
    return new VirtualQScrollPrepareEvent(*startPos);
}

QPointF* QScrollPrepareEvent_StartPos(const QScrollPrepareEvent* self) {
    return new QPointF(self->startPos());
}

QSizeF* QScrollPrepareEvent_ViewportSize(const QScrollPrepareEvent* self) {
    return new QSizeF(self->viewportSize());
}

QRectF* QScrollPrepareEvent_ContentPosRange(const QScrollPrepareEvent* self) {
    return new QRectF(self->contentPosRange());
}

QPointF* QScrollPrepareEvent_ContentPos(const QScrollPrepareEvent* self) {
    return new QPointF(self->contentPos());
}

void QScrollPrepareEvent_SetViewportSize(QScrollPrepareEvent* self, QSizeF* size) {
    self->setViewportSize(*size);
}

void QScrollPrepareEvent_SetContentPosRange(QScrollPrepareEvent* self, QRectF* rect) {
    self->setContentPosRange(*rect);
}

void QScrollPrepareEvent_SetContentPos(QScrollPrepareEvent* self, QPointF* pos) {
    self->setContentPos(*pos);
}

// Derived class handler implementation
QScrollPrepareEvent* QScrollPrepareEvent_Clone(const QScrollPrepareEvent* self) {
    if (auto* vqscrollprepareevent = const_cast<VirtualQScrollPrepareEvent*>(dynamic_cast<const VirtualQScrollPrepareEvent*>(self))) {
        return vqscrollprepareevent->clone();
    } else {
        return vqscrollprepareevent->clone();
    }
}

// Base class handler implementation
QScrollPrepareEvent* QScrollPrepareEvent_QBaseClone(const QScrollPrepareEvent* self) {
    if (auto* vqscrollprepareevent = const_cast<VirtualQScrollPrepareEvent*>(dynamic_cast<const VirtualQScrollPrepareEvent*>(self))) {
        vqscrollprepareevent->setQScrollPrepareEvent_Clone_IsBase(true);
        return vqscrollprepareevent->clone();
    } else {
        return vqscrollprepareevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollPrepareEvent_OnClone(const QScrollPrepareEvent* self, intptr_t slot) {
    if (auto* vqscrollprepareevent = const_cast<VirtualQScrollPrepareEvent*>(dynamic_cast<const VirtualQScrollPrepareEvent*>(self))) {
        vqscrollprepareevent->setQScrollPrepareEvent_Clone_Callback(reinterpret_cast<VirtualQScrollPrepareEvent::QScrollPrepareEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollPrepareEvent_SetAccepted(QScrollPrepareEvent* self, bool accepted) {
    if (auto* vqscrollprepareevent = dynamic_cast<VirtualQScrollPrepareEvent*>(self)) {
        vqscrollprepareevent->setAccepted(accepted);
    } else {
        vqscrollprepareevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QScrollPrepareEvent_QBaseSetAccepted(QScrollPrepareEvent* self, bool accepted) {
    if (auto* vqscrollprepareevent = dynamic_cast<VirtualQScrollPrepareEvent*>(self)) {
        vqscrollprepareevent->setQScrollPrepareEvent_SetAccepted_IsBase(true);
        vqscrollprepareevent->setAccepted(accepted);
    } else {
        vqscrollprepareevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollPrepareEvent_OnSetAccepted(QScrollPrepareEvent* self, intptr_t slot) {
    if (auto* vqscrollprepareevent = dynamic_cast<VirtualQScrollPrepareEvent*>(self)) {
        vqscrollprepareevent->setQScrollPrepareEvent_SetAccepted_Callback(reinterpret_cast<VirtualQScrollPrepareEvent::QScrollPrepareEvent_SetAccepted_Callback>(slot));
    }
}

void QScrollPrepareEvent_Delete(QScrollPrepareEvent* self) {
    delete self;
}

QScrollEvent* QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, int scrollState) {
    return new VirtualQScrollEvent(*contentPos, *overshoot, static_cast<QScrollEvent::ScrollState>(scrollState));
}

QPointF* QScrollEvent_ContentPos(const QScrollEvent* self) {
    return new QPointF(self->contentPos());
}

QPointF* QScrollEvent_OvershootDistance(const QScrollEvent* self) {
    return new QPointF(self->overshootDistance());
}

int QScrollEvent_ScrollState(const QScrollEvent* self) {
    return static_cast<int>(self->scrollState());
}

// Derived class handler implementation
QScrollEvent* QScrollEvent_Clone(const QScrollEvent* self) {
    if (auto* vqscrollevent = const_cast<VirtualQScrollEvent*>(dynamic_cast<const VirtualQScrollEvent*>(self))) {
        return vqscrollevent->clone();
    } else {
        return vqscrollevent->clone();
    }
}

// Base class handler implementation
QScrollEvent* QScrollEvent_QBaseClone(const QScrollEvent* self) {
    if (auto* vqscrollevent = const_cast<VirtualQScrollEvent*>(dynamic_cast<const VirtualQScrollEvent*>(self))) {
        vqscrollevent->setQScrollEvent_Clone_IsBase(true);
        return vqscrollevent->clone();
    } else {
        return vqscrollevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollEvent_OnClone(const QScrollEvent* self, intptr_t slot) {
    if (auto* vqscrollevent = const_cast<VirtualQScrollEvent*>(dynamic_cast<const VirtualQScrollEvent*>(self))) {
        vqscrollevent->setQScrollEvent_Clone_Callback(reinterpret_cast<VirtualQScrollEvent::QScrollEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollEvent_SetAccepted(QScrollEvent* self, bool accepted) {
    if (auto* vqscrollevent = dynamic_cast<VirtualQScrollEvent*>(self)) {
        vqscrollevent->setAccepted(accepted);
    } else {
        vqscrollevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QScrollEvent_QBaseSetAccepted(QScrollEvent* self, bool accepted) {
    if (auto* vqscrollevent = dynamic_cast<VirtualQScrollEvent*>(self)) {
        vqscrollevent->setQScrollEvent_SetAccepted_IsBase(true);
        vqscrollevent->setAccepted(accepted);
    } else {
        vqscrollevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollEvent_OnSetAccepted(QScrollEvent* self, intptr_t slot) {
    if (auto* vqscrollevent = dynamic_cast<VirtualQScrollEvent*>(self)) {
        vqscrollevent->setQScrollEvent_SetAccepted_Callback(reinterpret_cast<VirtualQScrollEvent::QScrollEvent_SetAccepted_Callback>(slot));
    }
}

void QScrollEvent_Delete(QScrollEvent* self) {
    delete self;
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation) {
    return new VirtualQScreenOrientationChangeEvent(screen, static_cast<Qt::ScreenOrientation>(orientation));
}

QScreen* QScreenOrientationChangeEvent_Screen(const QScreenOrientationChangeEvent* self) {
    return self->screen();
}

int QScreenOrientationChangeEvent_Orientation(const QScreenOrientationChangeEvent* self) {
    return static_cast<int>(self->orientation());
}

// Derived class handler implementation
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_Clone(const QScreenOrientationChangeEvent* self) {
    if (auto* vqscreenorientationchangeevent = const_cast<VirtualQScreenOrientationChangeEvent*>(dynamic_cast<const VirtualQScreenOrientationChangeEvent*>(self))) {
        return vqscreenorientationchangeevent->clone();
    } else {
        return vqscreenorientationchangeevent->clone();
    }
}

// Base class handler implementation
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_QBaseClone(const QScreenOrientationChangeEvent* self) {
    if (auto* vqscreenorientationchangeevent = const_cast<VirtualQScreenOrientationChangeEvent*>(dynamic_cast<const VirtualQScreenOrientationChangeEvent*>(self))) {
        vqscreenorientationchangeevent->setQScreenOrientationChangeEvent_Clone_IsBase(true);
        return vqscreenorientationchangeevent->clone();
    } else {
        return vqscreenorientationchangeevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenOrientationChangeEvent_OnClone(const QScreenOrientationChangeEvent* self, intptr_t slot) {
    if (auto* vqscreenorientationchangeevent = const_cast<VirtualQScreenOrientationChangeEvent*>(dynamic_cast<const VirtualQScreenOrientationChangeEvent*>(self))) {
        vqscreenorientationchangeevent->setQScreenOrientationChangeEvent_Clone_Callback(reinterpret_cast<VirtualQScreenOrientationChangeEvent::QScreenOrientationChangeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QScreenOrientationChangeEvent_SetAccepted(QScreenOrientationChangeEvent* self, bool accepted) {
    if (auto* vqscreenorientationchangeevent = dynamic_cast<VirtualQScreenOrientationChangeEvent*>(self)) {
        vqscreenorientationchangeevent->setAccepted(accepted);
    } else {
        vqscreenorientationchangeevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QScreenOrientationChangeEvent_QBaseSetAccepted(QScreenOrientationChangeEvent* self, bool accepted) {
    if (auto* vqscreenorientationchangeevent = dynamic_cast<VirtualQScreenOrientationChangeEvent*>(self)) {
        vqscreenorientationchangeevent->setQScreenOrientationChangeEvent_SetAccepted_IsBase(true);
        vqscreenorientationchangeevent->setAccepted(accepted);
    } else {
        vqscreenorientationchangeevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QScreenOrientationChangeEvent_OnSetAccepted(QScreenOrientationChangeEvent* self, intptr_t slot) {
    if (auto* vqscreenorientationchangeevent = dynamic_cast<VirtualQScreenOrientationChangeEvent*>(self)) {
        vqscreenorientationchangeevent->setQScreenOrientationChangeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQScreenOrientationChangeEvent::QScreenOrientationChangeEvent_SetAccepted_Callback>(slot));
    }
}

void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self) {
    delete self;
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state) {
    return new VirtualQApplicationStateChangeEvent(static_cast<Qt::ApplicationState>(state));
}

int QApplicationStateChangeEvent_ApplicationState(const QApplicationStateChangeEvent* self) {
    return static_cast<int>(self->applicationState());
}

// Derived class handler implementation
QApplicationStateChangeEvent* QApplicationStateChangeEvent_Clone(const QApplicationStateChangeEvent* self) {
    if (auto* vqapplicationstatechangeevent = const_cast<VirtualQApplicationStateChangeEvent*>(dynamic_cast<const VirtualQApplicationStateChangeEvent*>(self))) {
        return vqapplicationstatechangeevent->clone();
    } else {
        return vqapplicationstatechangeevent->clone();
    }
}

// Base class handler implementation
QApplicationStateChangeEvent* QApplicationStateChangeEvent_QBaseClone(const QApplicationStateChangeEvent* self) {
    if (auto* vqapplicationstatechangeevent = const_cast<VirtualQApplicationStateChangeEvent*>(dynamic_cast<const VirtualQApplicationStateChangeEvent*>(self))) {
        vqapplicationstatechangeevent->setQApplicationStateChangeEvent_Clone_IsBase(true);
        return vqapplicationstatechangeevent->clone();
    } else {
        return vqapplicationstatechangeevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QApplicationStateChangeEvent_OnClone(const QApplicationStateChangeEvent* self, intptr_t slot) {
    if (auto* vqapplicationstatechangeevent = const_cast<VirtualQApplicationStateChangeEvent*>(dynamic_cast<const VirtualQApplicationStateChangeEvent*>(self))) {
        vqapplicationstatechangeevent->setQApplicationStateChangeEvent_Clone_Callback(reinterpret_cast<VirtualQApplicationStateChangeEvent::QApplicationStateChangeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QApplicationStateChangeEvent_SetAccepted(QApplicationStateChangeEvent* self, bool accepted) {
    if (auto* vqapplicationstatechangeevent = dynamic_cast<VirtualQApplicationStateChangeEvent*>(self)) {
        vqapplicationstatechangeevent->setAccepted(accepted);
    } else {
        vqapplicationstatechangeevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QApplicationStateChangeEvent_QBaseSetAccepted(QApplicationStateChangeEvent* self, bool accepted) {
    if (auto* vqapplicationstatechangeevent = dynamic_cast<VirtualQApplicationStateChangeEvent*>(self)) {
        vqapplicationstatechangeevent->setQApplicationStateChangeEvent_SetAccepted_IsBase(true);
        vqapplicationstatechangeevent->setAccepted(accepted);
    } else {
        vqapplicationstatechangeevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplicationStateChangeEvent_OnSetAccepted(QApplicationStateChangeEvent* self, intptr_t slot) {
    if (auto* vqapplicationstatechangeevent = dynamic_cast<VirtualQApplicationStateChangeEvent*>(self)) {
        vqapplicationstatechangeevent->setQApplicationStateChangeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQApplicationStateChangeEvent::QApplicationStateChangeEvent_SetAccepted_Callback>(slot));
    }
}

void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self) {
    delete self;
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val) {
    return new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l), *val);
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(int typ, int s, int l) {
    return new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l));
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new3(QInputMethodEvent__Attribute* param1) {
    return new QInputMethodEvent::Attribute(*param1);
}

void QInputMethodEvent__Attribute_OperatorAssign(QInputMethodEvent__Attribute* self, QInputMethodEvent__Attribute* param1) {
    self->operator=(*param1);
}

void QInputMethodEvent__Attribute_Delete(QInputMethodEvent__Attribute* self) {
    delete self;
}
