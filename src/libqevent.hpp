#pragma once
#ifndef SRCC_LIBQEVENT_HPP
#define SRCC_LIBQEVENT_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute)
typedef QInputMethodEvent::Attribute QInputMethodEvent__Attribute;
#endif
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QApplicationStateChangeEvent QApplicationStateChangeEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QEventPoint QEventPoint;
typedef struct QExposeEvent QExposeEvent;
typedef struct QFile QFile;
typedef struct QFileOpenEvent QFileOpenEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QHoverEvent QHoverEvent;
typedef struct QIconDragEvent QIconDragEvent;
typedef struct QInputDevice QInputDevice;
typedef struct QInputEvent QInputEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QInputMethodEvent__Attribute QInputMethodEvent__Attribute;
typedef struct QInputMethodQueryEvent QInputMethodQueryEvent;
typedef struct QKeyCombination QKeyCombination;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QNativeGestureEvent QNativeGestureEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPlatformSurfaceEvent QPlatformSurfaceEvent;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QPointerEvent QPointerEvent;
typedef struct QPointingDevice QPointingDevice;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QScreenOrientationChangeEvent QScreenOrientationChangeEvent;
typedef struct QScrollEvent QScrollEvent;
typedef struct QScrollPrepareEvent QScrollPrepareEvent;
typedef struct QShortcutEvent QShortcutEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSinglePointEvent QSinglePointEvent;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QStatusTipEvent QStatusTipEvent;
typedef struct QTabletEvent QTabletEvent;
typedef struct QToolBarChangeEvent QToolBarChangeEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWhatsThisClickedEvent QWhatsThisClickedEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindowStateChangeEvent QWindowStateChangeEvent;
#endif

#ifdef __cplusplus
typedef QContextMenuEvent::Reason Reason;                         // C++ enum
typedef QInputMethodEvent::AttributeType AttributeType;           // C++ enum
typedef QPlatformSurfaceEvent::SurfaceEventType SurfaceEventType; // C++ enum
typedef QScrollEvent::ScrollState ScrollState;                    // C++ enum
#else
typedef QEventPoint* TouchPoint; // C ABI QFlags
typedef int AttributeType;       // C ABI enum
typedef int Reason;              // C ABI enum
typedef int ScrollState;         // C ABI enum
typedef int SurfaceEventType;    // C ABI enum
typedef void QtGadgetHelper;     // C ABI QFlags
#endif

QInputEvent* QInputEvent_new(int typeVal, QInputDevice* m_dev);
QInputEvent* QInputEvent_new2(int typeVal, QInputDevice* m_dev, int modifiers);
QInputEvent* QInputEvent_Clone(const QInputEvent* self);
void QInputEvent_OnClone(const QInputEvent* self, intptr_t slot);
QInputEvent* QInputEvent_QBaseClone(const QInputEvent* self);
QInputDevice* QInputEvent_Device(const QInputEvent* self);
int QInputEvent_DeviceType(const QInputEvent* self);
int QInputEvent_Modifiers(const QInputEvent* self);
void QInputEvent_SetModifiers(QInputEvent* self, int modifiers);
unsigned long long QInputEvent_Timestamp(const QInputEvent* self);
void QInputEvent_SetTimestamp(QInputEvent* self, unsigned long long timestamp);
void QInputEvent_OnSetTimestamp(QInputEvent* self, intptr_t slot);
void QInputEvent_QBaseSetTimestamp(QInputEvent* self, unsigned long long timestamp);
void QInputEvent_SetAccepted(QInputEvent* self, bool accepted);
void QInputEvent_OnSetAccepted(QInputEvent* self, intptr_t slot);
void QInputEvent_QBaseSetAccepted(QInputEvent* self, bool accepted);
void QInputEvent_Delete(QInputEvent* self);

QPointerEvent* QPointerEvent_new(int typeVal, QPointingDevice* dev);
QPointerEvent* QPointerEvent_new2(int typeVal, QPointingDevice* dev, int modifiers);
QPointerEvent* QPointerEvent_new3(int typeVal, QPointingDevice* dev, int modifiers, libqt_list /* of QEventPoint* */ points);
QPointerEvent* QPointerEvent_Clone(const QPointerEvent* self);
void QPointerEvent_OnClone(const QPointerEvent* self, intptr_t slot);
QPointerEvent* QPointerEvent_QBaseClone(const QPointerEvent* self);
QPointingDevice* QPointerEvent_PointingDevice(const QPointerEvent* self);
int QPointerEvent_PointerType(const QPointerEvent* self);
void QPointerEvent_SetTimestamp(QPointerEvent* self, unsigned long long timestamp);
void QPointerEvent_OnSetTimestamp(QPointerEvent* self, intptr_t slot);
void QPointerEvent_QBaseSetTimestamp(QPointerEvent* self, unsigned long long timestamp);
ptrdiff_t QPointerEvent_PointCount(const QPointerEvent* self);
QEventPoint* QPointerEvent_Point(QPointerEvent* self, ptrdiff_t i);
libqt_list /* of QEventPoint* */ QPointerEvent_Points(const QPointerEvent* self);
QEventPoint* QPointerEvent_PointById(QPointerEvent* self, int id);
bool QPointerEvent_AllPointsGrabbed(const QPointerEvent* self);
bool QPointerEvent_IsBeginEvent(const QPointerEvent* self);
void QPointerEvent_OnIsBeginEvent(const QPointerEvent* self, intptr_t slot);
bool QPointerEvent_QBaseIsBeginEvent(const QPointerEvent* self);
bool QPointerEvent_IsUpdateEvent(const QPointerEvent* self);
void QPointerEvent_OnIsUpdateEvent(const QPointerEvent* self, intptr_t slot);
bool QPointerEvent_QBaseIsUpdateEvent(const QPointerEvent* self);
bool QPointerEvent_IsEndEvent(const QPointerEvent* self);
void QPointerEvent_OnIsEndEvent(const QPointerEvent* self, intptr_t slot);
bool QPointerEvent_QBaseIsEndEvent(const QPointerEvent* self);
bool QPointerEvent_AllPointsAccepted(const QPointerEvent* self);
void QPointerEvent_SetAccepted(QPointerEvent* self, bool accepted);
void QPointerEvent_OnSetAccepted(QPointerEvent* self, intptr_t slot);
void QPointerEvent_QBaseSetAccepted(QPointerEvent* self, bool accepted);
QObject* QPointerEvent_ExclusiveGrabber(const QPointerEvent* self, QEventPoint* point);
void QPointerEvent_SetExclusiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* exclusiveGrabber);
void QPointerEvent_ClearPassiveGrabbers(QPointerEvent* self, QEventPoint* point);
bool QPointerEvent_AddPassiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* grabber);
bool QPointerEvent_RemovePassiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* grabber);
void QPointerEvent_Delete(QPointerEvent* self);

int QSinglePointEvent_Button(const QSinglePointEvent* self);
int QSinglePointEvent_Buttons(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_Position(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_ScenePosition(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_GlobalPosition(const QSinglePointEvent* self);
bool QSinglePointEvent_IsBeginEvent(const QSinglePointEvent* self);
bool QSinglePointEvent_IsUpdateEvent(const QSinglePointEvent* self);
bool QSinglePointEvent_IsEndEvent(const QSinglePointEvent* self);
QObject* QSinglePointEvent_ExclusivePointGrabber(const QSinglePointEvent* self);
void QSinglePointEvent_SetExclusivePointGrabber(QSinglePointEvent* self, QObject* exclusiveGrabber);
void QSinglePointEvent_SetTimestamp(QSinglePointEvent* self, unsigned long long timestamp);
void QSinglePointEvent_SetAccepted(QSinglePointEvent* self, bool accepted);
void QSinglePointEvent_Delete(QSinglePointEvent* self);

QEnterEvent* QEnterEvent_new(QPointF* localPos, QPointF* scenePos, QPointF* globalPos);
QEnterEvent* QEnterEvent_new2(QPointF* localPos, QPointF* scenePos, QPointF* globalPos, QPointingDevice* device);
QEnterEvent* QEnterEvent_Clone(const QEnterEvent* self);
void QEnterEvent_OnClone(const QEnterEvent* self, intptr_t slot);
QEnterEvent* QEnterEvent_QBaseClone(const QEnterEvent* self);
QPoint* QEnterEvent_Pos(const QEnterEvent* self);
QPoint* QEnterEvent_GlobalPos(const QEnterEvent* self);
int QEnterEvent_X(const QEnterEvent* self);
int QEnterEvent_Y(const QEnterEvent* self);
int QEnterEvent_GlobalX(const QEnterEvent* self);
int QEnterEvent_GlobalY(const QEnterEvent* self);
QPointF* QEnterEvent_LocalPos(const QEnterEvent* self);
QPointF* QEnterEvent_WindowPos(const QEnterEvent* self);
QPointF* QEnterEvent_ScreenPos(const QEnterEvent* self);
bool QEnterEvent_IsBeginEvent(const QEnterEvent* self);
void QEnterEvent_OnIsBeginEvent(const QEnterEvent* self, intptr_t slot);
bool QEnterEvent_QBaseIsBeginEvent(const QEnterEvent* self);
bool QEnterEvent_IsUpdateEvent(const QEnterEvent* self);
void QEnterEvent_OnIsUpdateEvent(const QEnterEvent* self, intptr_t slot);
bool QEnterEvent_QBaseIsUpdateEvent(const QEnterEvent* self);
bool QEnterEvent_IsEndEvent(const QEnterEvent* self);
void QEnterEvent_OnIsEndEvent(const QEnterEvent* self, intptr_t slot);
bool QEnterEvent_QBaseIsEndEvent(const QEnterEvent* self);
void QEnterEvent_SetTimestamp(QEnterEvent* self, unsigned long long timestamp);
void QEnterEvent_OnSetTimestamp(QEnterEvent* self, intptr_t slot);
void QEnterEvent_QBaseSetTimestamp(QEnterEvent* self, unsigned long long timestamp);
void QEnterEvent_SetAccepted(QEnterEvent* self, bool accepted);
void QEnterEvent_OnSetAccepted(QEnterEvent* self, intptr_t slot);
void QEnterEvent_QBaseSetAccepted(QEnterEvent* self, bool accepted);
void QEnterEvent_Delete(QEnterEvent* self);

QMouseEvent* QMouseEvent_new(int typeVal, QPointF* localPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new2(int typeVal, QPointF* localPos, QPointF* globalPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new3(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new4(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, int source);
QMouseEvent* QMouseEvent_new5(int typeVal, QPointF* localPos, int button, int buttons, int modifiers, QPointingDevice* device);
QMouseEvent* QMouseEvent_new6(int typeVal, QPointF* localPos, QPointF* globalPos, int button, int buttons, int modifiers, QPointingDevice* device);
QMouseEvent* QMouseEvent_new7(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, QPointingDevice* device);
QMouseEvent* QMouseEvent_new8(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, int source, QPointingDevice* device);
QMouseEvent* QMouseEvent_Clone(const QMouseEvent* self);
void QMouseEvent_OnClone(const QMouseEvent* self, intptr_t slot);
QMouseEvent* QMouseEvent_QBaseClone(const QMouseEvent* self);
QPoint* QMouseEvent_Pos(const QMouseEvent* self);
QPoint* QMouseEvent_GlobalPos(const QMouseEvent* self);
int QMouseEvent_X(const QMouseEvent* self);
int QMouseEvent_Y(const QMouseEvent* self);
int QMouseEvent_GlobalX(const QMouseEvent* self);
int QMouseEvent_GlobalY(const QMouseEvent* self);
QPointF* QMouseEvent_LocalPos(const QMouseEvent* self);
QPointF* QMouseEvent_WindowPos(const QMouseEvent* self);
QPointF* QMouseEvent_ScreenPos(const QMouseEvent* self);
int QMouseEvent_Source(const QMouseEvent* self);
int QMouseEvent_Flags(const QMouseEvent* self);
bool QMouseEvent_IsBeginEvent(const QMouseEvent* self);
void QMouseEvent_OnIsBeginEvent(const QMouseEvent* self, intptr_t slot);
bool QMouseEvent_QBaseIsBeginEvent(const QMouseEvent* self);
bool QMouseEvent_IsUpdateEvent(const QMouseEvent* self);
void QMouseEvent_OnIsUpdateEvent(const QMouseEvent* self, intptr_t slot);
bool QMouseEvent_QBaseIsUpdateEvent(const QMouseEvent* self);
bool QMouseEvent_IsEndEvent(const QMouseEvent* self);
void QMouseEvent_OnIsEndEvent(const QMouseEvent* self, intptr_t slot);
bool QMouseEvent_QBaseIsEndEvent(const QMouseEvent* self);
void QMouseEvent_SetTimestamp(QMouseEvent* self, unsigned long long timestamp);
void QMouseEvent_OnSetTimestamp(QMouseEvent* self, intptr_t slot);
void QMouseEvent_QBaseSetTimestamp(QMouseEvent* self, unsigned long long timestamp);
void QMouseEvent_SetAccepted(QMouseEvent* self, bool accepted);
void QMouseEvent_OnSetAccepted(QMouseEvent* self, intptr_t slot);
void QMouseEvent_QBaseSetAccepted(QMouseEvent* self, bool accepted);
void QMouseEvent_Delete(QMouseEvent* self);

QHoverEvent* QHoverEvent_new(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos);
QHoverEvent* QHoverEvent_new2(int typeVal, QPointF* pos, QPointF* oldPos);
QHoverEvent* QHoverEvent_new3(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers);
QHoverEvent* QHoverEvent_new4(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers, QPointingDevice* device);
QHoverEvent* QHoverEvent_new5(int typeVal, QPointF* pos, QPointF* oldPos, int modifiers);
QHoverEvent* QHoverEvent_new6(int typeVal, QPointF* pos, QPointF* oldPos, int modifiers, QPointingDevice* device);
QHoverEvent* QHoverEvent_Clone(const QHoverEvent* self);
void QHoverEvent_OnClone(const QHoverEvent* self, intptr_t slot);
QHoverEvent* QHoverEvent_QBaseClone(const QHoverEvent* self);
QPoint* QHoverEvent_Pos(const QHoverEvent* self);
QPointF* QHoverEvent_PosF(const QHoverEvent* self);
bool QHoverEvent_IsUpdateEvent(const QHoverEvent* self);
void QHoverEvent_OnIsUpdateEvent(const QHoverEvent* self, intptr_t slot);
bool QHoverEvent_QBaseIsUpdateEvent(const QHoverEvent* self);
QPoint* QHoverEvent_OldPos(const QHoverEvent* self);
QPointF* QHoverEvent_OldPosF(const QHoverEvent* self);
bool QHoverEvent_IsBeginEvent(const QHoverEvent* self);
void QHoverEvent_OnIsBeginEvent(const QHoverEvent* self, intptr_t slot);
bool QHoverEvent_QBaseIsBeginEvent(const QHoverEvent* self);
bool QHoverEvent_IsEndEvent(const QHoverEvent* self);
void QHoverEvent_OnIsEndEvent(const QHoverEvent* self, intptr_t slot);
bool QHoverEvent_QBaseIsEndEvent(const QHoverEvent* self);
void QHoverEvent_SetTimestamp(QHoverEvent* self, unsigned long long timestamp);
void QHoverEvent_OnSetTimestamp(QHoverEvent* self, intptr_t slot);
void QHoverEvent_QBaseSetTimestamp(QHoverEvent* self, unsigned long long timestamp);
void QHoverEvent_SetAccepted(QHoverEvent* self, bool accepted);
void QHoverEvent_OnSetAccepted(QHoverEvent* self, intptr_t slot);
void QHoverEvent_QBaseSetAccepted(QHoverEvent* self, bool accepted);
void QHoverEvent_Delete(QHoverEvent* self);

QWheelEvent* QWheelEvent_new(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted);
QWheelEvent* QWheelEvent_new2(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source);
QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source, QPointingDevice* device);
QWheelEvent* QWheelEvent_Clone(const QWheelEvent* self);
void QWheelEvent_OnClone(const QWheelEvent* self, intptr_t slot);
QWheelEvent* QWheelEvent_QBaseClone(const QWheelEvent* self);
QPoint* QWheelEvent_PixelDelta(const QWheelEvent* self);
QPoint* QWheelEvent_AngleDelta(const QWheelEvent* self);
int QWheelEvent_Phase(const QWheelEvent* self);
bool QWheelEvent_Inverted(const QWheelEvent* self);
bool QWheelEvent_IsInverted(const QWheelEvent* self);
bool QWheelEvent_HasPixelDelta(const QWheelEvent* self);
bool QWheelEvent_IsBeginEvent(const QWheelEvent* self);
void QWheelEvent_OnIsBeginEvent(const QWheelEvent* self, intptr_t slot);
bool QWheelEvent_QBaseIsBeginEvent(const QWheelEvent* self);
bool QWheelEvent_IsUpdateEvent(const QWheelEvent* self);
void QWheelEvent_OnIsUpdateEvent(const QWheelEvent* self, intptr_t slot);
bool QWheelEvent_QBaseIsUpdateEvent(const QWheelEvent* self);
bool QWheelEvent_IsEndEvent(const QWheelEvent* self);
void QWheelEvent_OnIsEndEvent(const QWheelEvent* self, intptr_t slot);
bool QWheelEvent_QBaseIsEndEvent(const QWheelEvent* self);
int QWheelEvent_Source(const QWheelEvent* self);
void QWheelEvent_SetTimestamp(QWheelEvent* self, unsigned long long timestamp);
void QWheelEvent_OnSetTimestamp(QWheelEvent* self, intptr_t slot);
void QWheelEvent_QBaseSetTimestamp(QWheelEvent* self, unsigned long long timestamp);
void QWheelEvent_SetAccepted(QWheelEvent* self, bool accepted);
void QWheelEvent_OnSetAccepted(QWheelEvent* self, intptr_t slot);
void QWheelEvent_QBaseSetAccepted(QWheelEvent* self, bool accepted);
void QWheelEvent_Delete(QWheelEvent* self);

QTabletEvent* QTabletEvent_new(int t, QPointingDevice* device, QPointF* pos, QPointF* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int keyState, int button, int buttons);
QTabletEvent* QTabletEvent_Clone(const QTabletEvent* self);
void QTabletEvent_OnClone(const QTabletEvent* self, intptr_t slot);
QTabletEvent* QTabletEvent_QBaseClone(const QTabletEvent* self);
QPoint* QTabletEvent_Pos(const QTabletEvent* self);
QPoint* QTabletEvent_GlobalPos(const QTabletEvent* self);
QPointF* QTabletEvent_PosF(const QTabletEvent* self);
QPointF* QTabletEvent_GlobalPosF(const QTabletEvent* self);
int QTabletEvent_X(const QTabletEvent* self);
int QTabletEvent_Y(const QTabletEvent* self);
int QTabletEvent_GlobalX(const QTabletEvent* self);
int QTabletEvent_GlobalY(const QTabletEvent* self);
double QTabletEvent_HiResGlobalX(const QTabletEvent* self);
double QTabletEvent_HiResGlobalY(const QTabletEvent* self);
long long QTabletEvent_UniqueId(const QTabletEvent* self);
double QTabletEvent_Pressure(const QTabletEvent* self);
double QTabletEvent_Rotation(const QTabletEvent* self);
double QTabletEvent_Z(const QTabletEvent* self);
double QTabletEvent_TangentialPressure(const QTabletEvent* self);
double QTabletEvent_XTilt(const QTabletEvent* self);
double QTabletEvent_YTilt(const QTabletEvent* self);
bool QTabletEvent_IsBeginEvent(const QTabletEvent* self);
void QTabletEvent_OnIsBeginEvent(const QTabletEvent* self, intptr_t slot);
bool QTabletEvent_QBaseIsBeginEvent(const QTabletEvent* self);
bool QTabletEvent_IsUpdateEvent(const QTabletEvent* self);
void QTabletEvent_OnIsUpdateEvent(const QTabletEvent* self, intptr_t slot);
bool QTabletEvent_QBaseIsUpdateEvent(const QTabletEvent* self);
bool QTabletEvent_IsEndEvent(const QTabletEvent* self);
void QTabletEvent_OnIsEndEvent(const QTabletEvent* self, intptr_t slot);
bool QTabletEvent_QBaseIsEndEvent(const QTabletEvent* self);
void QTabletEvent_SetTimestamp(QTabletEvent* self, unsigned long long timestamp);
void QTabletEvent_OnSetTimestamp(QTabletEvent* self, intptr_t slot);
void QTabletEvent_QBaseSetTimestamp(QTabletEvent* self, unsigned long long timestamp);
void QTabletEvent_SetAccepted(QTabletEvent* self, bool accepted);
void QTabletEvent_OnSetAccepted(QTabletEvent* self, intptr_t slot);
void QTabletEvent_QBaseSetAccepted(QTabletEvent* self, bool accepted);
void QTabletEvent_Delete(QTabletEvent* self);

QNativeGestureEvent* QNativeGestureEvent_new(int typeVal, QPointingDevice* dev, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, unsigned long long sequenceId, unsigned long long intArgument);
QNativeGestureEvent* QNativeGestureEvent_new2(int typeVal, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta);
QNativeGestureEvent* QNativeGestureEvent_new3(int typeVal, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta, unsigned long long sequenceId);
QNativeGestureEvent* QNativeGestureEvent_Clone(const QNativeGestureEvent* self);
void QNativeGestureEvent_OnClone(const QNativeGestureEvent* self, intptr_t slot);
QNativeGestureEvent* QNativeGestureEvent_QBaseClone(const QNativeGestureEvent* self);
int QNativeGestureEvent_GestureType(const QNativeGestureEvent* self);
int QNativeGestureEvent_FingerCount(const QNativeGestureEvent* self);
double QNativeGestureEvent_Value(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_Delta(const QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_Pos(const QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_GlobalPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_LocalPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_WindowPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_ScreenPos(const QNativeGestureEvent* self);
bool QNativeGestureEvent_IsBeginEvent(const QNativeGestureEvent* self);
void QNativeGestureEvent_OnIsBeginEvent(const QNativeGestureEvent* self, intptr_t slot);
bool QNativeGestureEvent_QBaseIsBeginEvent(const QNativeGestureEvent* self);
bool QNativeGestureEvent_IsUpdateEvent(const QNativeGestureEvent* self);
void QNativeGestureEvent_OnIsUpdateEvent(const QNativeGestureEvent* self, intptr_t slot);
bool QNativeGestureEvent_QBaseIsUpdateEvent(const QNativeGestureEvent* self);
bool QNativeGestureEvent_IsEndEvent(const QNativeGestureEvent* self);
void QNativeGestureEvent_OnIsEndEvent(const QNativeGestureEvent* self, intptr_t slot);
bool QNativeGestureEvent_QBaseIsEndEvent(const QNativeGestureEvent* self);
void QNativeGestureEvent_SetTimestamp(QNativeGestureEvent* self, unsigned long long timestamp);
void QNativeGestureEvent_OnSetTimestamp(QNativeGestureEvent* self, intptr_t slot);
void QNativeGestureEvent_QBaseSetTimestamp(QNativeGestureEvent* self, unsigned long long timestamp);
void QNativeGestureEvent_SetAccepted(QNativeGestureEvent* self, bool accepted);
void QNativeGestureEvent_OnSetAccepted(QNativeGestureEvent* self, intptr_t slot);
void QNativeGestureEvent_QBaseSetAccepted(QNativeGestureEvent* self, bool accepted);
void QNativeGestureEvent_Delete(QNativeGestureEvent* self);

QKeyEvent* QKeyEvent_new(int typeVal, int key, int modifiers);
QKeyEvent* QKeyEvent_new2(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers);
QKeyEvent* QKeyEvent_new3(int typeVal, int key, int modifiers, libqt_string text);
QKeyEvent* QKeyEvent_new4(int typeVal, int key, int modifiers, libqt_string text, bool autorep);
QKeyEvent* QKeyEvent_new5(int typeVal, int key, int modifiers, libqt_string text, bool autorep, uint16_t count);
QKeyEvent* QKeyEvent_new6(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, libqt_string text);
QKeyEvent* QKeyEvent_new7(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, libqt_string text, bool autorep);
QKeyEvent* QKeyEvent_new8(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, libqt_string text, bool autorep, uint16_t count);
QKeyEvent* QKeyEvent_new9(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, libqt_string text, bool autorep, uint16_t count, QInputDevice* device);
QKeyEvent* QKeyEvent_Clone(const QKeyEvent* self);
void QKeyEvent_OnClone(const QKeyEvent* self, intptr_t slot);
QKeyEvent* QKeyEvent_QBaseClone(const QKeyEvent* self);
int QKeyEvent_Key(const QKeyEvent* self);
bool QKeyEvent_Matches(const QKeyEvent* self, int key);
int QKeyEvent_Modifiers(const QKeyEvent* self);
QKeyCombination* QKeyEvent_KeyCombination(const QKeyEvent* self);
libqt_string QKeyEvent_Text(const QKeyEvent* self);
bool QKeyEvent_IsAutoRepeat(const QKeyEvent* self);
int QKeyEvent_Count(const QKeyEvent* self);
unsigned int QKeyEvent_NativeScanCode(const QKeyEvent* self);
unsigned int QKeyEvent_NativeVirtualKey(const QKeyEvent* self);
unsigned int QKeyEvent_NativeModifiers(const QKeyEvent* self);
void QKeyEvent_SetTimestamp(QKeyEvent* self, unsigned long long timestamp);
void QKeyEvent_OnSetTimestamp(QKeyEvent* self, intptr_t slot);
void QKeyEvent_QBaseSetTimestamp(QKeyEvent* self, unsigned long long timestamp);
void QKeyEvent_SetAccepted(QKeyEvent* self, bool accepted);
void QKeyEvent_OnSetAccepted(QKeyEvent* self, intptr_t slot);
void QKeyEvent_QBaseSetAccepted(QKeyEvent* self, bool accepted);
void QKeyEvent_Delete(QKeyEvent* self);

QFocusEvent* QFocusEvent_new(int typeVal);
QFocusEvent* QFocusEvent_new2(int typeVal, int reason);
QFocusEvent* QFocusEvent_Clone(const QFocusEvent* self);
void QFocusEvent_OnClone(const QFocusEvent* self, intptr_t slot);
QFocusEvent* QFocusEvent_QBaseClone(const QFocusEvent* self);
bool QFocusEvent_GotFocus(const QFocusEvent* self);
bool QFocusEvent_LostFocus(const QFocusEvent* self);
int QFocusEvent_Reason(const QFocusEvent* self);
void QFocusEvent_SetAccepted(QFocusEvent* self, bool accepted);
void QFocusEvent_OnSetAccepted(QFocusEvent* self, intptr_t slot);
void QFocusEvent_QBaseSetAccepted(QFocusEvent* self, bool accepted);
void QFocusEvent_Delete(QFocusEvent* self);

QPaintEvent* QPaintEvent_new(QRegion* paintRegion);
QPaintEvent* QPaintEvent_new2(QRect* paintRect);
QPaintEvent* QPaintEvent_Clone(const QPaintEvent* self);
void QPaintEvent_OnClone(const QPaintEvent* self, intptr_t slot);
QPaintEvent* QPaintEvent_QBaseClone(const QPaintEvent* self);
QRect* QPaintEvent_Rect(const QPaintEvent* self);
QRegion* QPaintEvent_Region(const QPaintEvent* self);
void QPaintEvent_SetAccepted(QPaintEvent* self, bool accepted);
void QPaintEvent_OnSetAccepted(QPaintEvent* self, intptr_t slot);
void QPaintEvent_QBaseSetAccepted(QPaintEvent* self, bool accepted);
void QPaintEvent_Delete(QPaintEvent* self);

QMoveEvent* QMoveEvent_new(QPoint* pos, QPoint* oldPos);
QMoveEvent* QMoveEvent_Clone(const QMoveEvent* self);
void QMoveEvent_OnClone(const QMoveEvent* self, intptr_t slot);
QMoveEvent* QMoveEvent_QBaseClone(const QMoveEvent* self);
QPoint* QMoveEvent_Pos(const QMoveEvent* self);
QPoint* QMoveEvent_OldPos(const QMoveEvent* self);
void QMoveEvent_SetAccepted(QMoveEvent* self, bool accepted);
void QMoveEvent_OnSetAccepted(QMoveEvent* self, intptr_t slot);
void QMoveEvent_QBaseSetAccepted(QMoveEvent* self, bool accepted);
void QMoveEvent_Delete(QMoveEvent* self);

QExposeEvent* QExposeEvent_new(QRegion* m_region);
QExposeEvent* QExposeEvent_Clone(const QExposeEvent* self);
void QExposeEvent_OnClone(const QExposeEvent* self, intptr_t slot);
QExposeEvent* QExposeEvent_QBaseClone(const QExposeEvent* self);
QRegion* QExposeEvent_Region(const QExposeEvent* self);
void QExposeEvent_SetAccepted(QExposeEvent* self, bool accepted);
void QExposeEvent_OnSetAccepted(QExposeEvent* self, intptr_t slot);
void QExposeEvent_QBaseSetAccepted(QExposeEvent* self, bool accepted);
void QExposeEvent_Delete(QExposeEvent* self);

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType);
QPlatformSurfaceEvent* QPlatformSurfaceEvent_Clone(const QPlatformSurfaceEvent* self);
void QPlatformSurfaceEvent_OnClone(const QPlatformSurfaceEvent* self, intptr_t slot);
QPlatformSurfaceEvent* QPlatformSurfaceEvent_QBaseClone(const QPlatformSurfaceEvent* self);
int QPlatformSurfaceEvent_SurfaceEventType(const QPlatformSurfaceEvent* self);
void QPlatformSurfaceEvent_SetAccepted(QPlatformSurfaceEvent* self, bool accepted);
void QPlatformSurfaceEvent_OnSetAccepted(QPlatformSurfaceEvent* self, intptr_t slot);
void QPlatformSurfaceEvent_QBaseSetAccepted(QPlatformSurfaceEvent* self, bool accepted);
void QPlatformSurfaceEvent_Delete(QPlatformSurfaceEvent* self);

QResizeEvent* QResizeEvent_new(QSize* size, QSize* oldSize);
QResizeEvent* QResizeEvent_Clone(const QResizeEvent* self);
void QResizeEvent_OnClone(const QResizeEvent* self, intptr_t slot);
QResizeEvent* QResizeEvent_QBaseClone(const QResizeEvent* self);
QSize* QResizeEvent_Size(const QResizeEvent* self);
QSize* QResizeEvent_OldSize(const QResizeEvent* self);
void QResizeEvent_SetAccepted(QResizeEvent* self, bool accepted);
void QResizeEvent_OnSetAccepted(QResizeEvent* self, intptr_t slot);
void QResizeEvent_QBaseSetAccepted(QResizeEvent* self, bool accepted);
void QResizeEvent_Delete(QResizeEvent* self);

QCloseEvent* QCloseEvent_new();
QCloseEvent* QCloseEvent_Clone(const QCloseEvent* self);
void QCloseEvent_OnClone(const QCloseEvent* self, intptr_t slot);
QCloseEvent* QCloseEvent_QBaseClone(const QCloseEvent* self);
void QCloseEvent_SetAccepted(QCloseEvent* self, bool accepted);
void QCloseEvent_OnSetAccepted(QCloseEvent* self, intptr_t slot);
void QCloseEvent_QBaseSetAccepted(QCloseEvent* self, bool accepted);
void QCloseEvent_Delete(QCloseEvent* self);

QIconDragEvent* QIconDragEvent_new();
QIconDragEvent* QIconDragEvent_Clone(const QIconDragEvent* self);
void QIconDragEvent_OnClone(const QIconDragEvent* self, intptr_t slot);
QIconDragEvent* QIconDragEvent_QBaseClone(const QIconDragEvent* self);
void QIconDragEvent_SetAccepted(QIconDragEvent* self, bool accepted);
void QIconDragEvent_OnSetAccepted(QIconDragEvent* self, intptr_t slot);
void QIconDragEvent_QBaseSetAccepted(QIconDragEvent* self, bool accepted);
void QIconDragEvent_Delete(QIconDragEvent* self);

QShowEvent* QShowEvent_new();
QShowEvent* QShowEvent_Clone(const QShowEvent* self);
void QShowEvent_OnClone(const QShowEvent* self, intptr_t slot);
QShowEvent* QShowEvent_QBaseClone(const QShowEvent* self);
void QShowEvent_SetAccepted(QShowEvent* self, bool accepted);
void QShowEvent_OnSetAccepted(QShowEvent* self, intptr_t slot);
void QShowEvent_QBaseSetAccepted(QShowEvent* self, bool accepted);
void QShowEvent_Delete(QShowEvent* self);

QHideEvent* QHideEvent_new();
QHideEvent* QHideEvent_Clone(const QHideEvent* self);
void QHideEvent_OnClone(const QHideEvent* self, intptr_t slot);
QHideEvent* QHideEvent_QBaseClone(const QHideEvent* self);
void QHideEvent_SetAccepted(QHideEvent* self, bool accepted);
void QHideEvent_OnSetAccepted(QHideEvent* self, intptr_t slot);
void QHideEvent_QBaseSetAccepted(QHideEvent* self, bool accepted);
void QHideEvent_Delete(QHideEvent* self);

QContextMenuEvent* QContextMenuEvent_new(int reason, QPoint* pos, QPoint* globalPos);
QContextMenuEvent* QContextMenuEvent_new2(int reason, QPoint* pos);
QContextMenuEvent* QContextMenuEvent_new3(int reason, QPoint* pos, QPoint* globalPos, int modifiers);
QContextMenuEvent* QContextMenuEvent_Clone(const QContextMenuEvent* self);
void QContextMenuEvent_OnClone(const QContextMenuEvent* self, intptr_t slot);
QContextMenuEvent* QContextMenuEvent_QBaseClone(const QContextMenuEvent* self);
int QContextMenuEvent_X(const QContextMenuEvent* self);
int QContextMenuEvent_Y(const QContextMenuEvent* self);
int QContextMenuEvent_GlobalX(const QContextMenuEvent* self);
int QContextMenuEvent_GlobalY(const QContextMenuEvent* self);
QPoint* QContextMenuEvent_Pos(const QContextMenuEvent* self);
QPoint* QContextMenuEvent_GlobalPos(const QContextMenuEvent* self);
int QContextMenuEvent_Reason(const QContextMenuEvent* self);
void QContextMenuEvent_SetTimestamp(QContextMenuEvent* self, unsigned long long timestamp);
void QContextMenuEvent_OnSetTimestamp(QContextMenuEvent* self, intptr_t slot);
void QContextMenuEvent_QBaseSetTimestamp(QContextMenuEvent* self, unsigned long long timestamp);
void QContextMenuEvent_SetAccepted(QContextMenuEvent* self, bool accepted);
void QContextMenuEvent_OnSetAccepted(QContextMenuEvent* self, intptr_t slot);
void QContextMenuEvent_QBaseSetAccepted(QContextMenuEvent* self, bool accepted);
void QContextMenuEvent_Delete(QContextMenuEvent* self);

QInputMethodEvent* QInputMethodEvent_new();
QInputMethodEvent* QInputMethodEvent_new2(libqt_string preeditText, libqt_list /* of QInputMethodEvent__Attribute* */ attributes);
QInputMethodEvent* QInputMethodEvent_Clone(const QInputMethodEvent* self);
void QInputMethodEvent_OnClone(const QInputMethodEvent* self, intptr_t slot);
QInputMethodEvent* QInputMethodEvent_QBaseClone(const QInputMethodEvent* self);
void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, libqt_string commitString);
libqt_list /* of QInputMethodEvent__Attribute* */ QInputMethodEvent_Attributes(const QInputMethodEvent* self);
libqt_string QInputMethodEvent_PreeditString(const QInputMethodEvent* self);
libqt_string QInputMethodEvent_CommitString(const QInputMethodEvent* self);
int QInputMethodEvent_ReplacementStart(const QInputMethodEvent* self);
int QInputMethodEvent_ReplacementLength(const QInputMethodEvent* self);
void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, libqt_string commitString, int replaceFrom);
void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, libqt_string commitString, int replaceFrom, int replaceLength);
void QInputMethodEvent_SetAccepted(QInputMethodEvent* self, bool accepted);
void QInputMethodEvent_OnSetAccepted(QInputMethodEvent* self, intptr_t slot);
void QInputMethodEvent_QBaseSetAccepted(QInputMethodEvent* self, bool accepted);
void QInputMethodEvent_Delete(QInputMethodEvent* self);

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries);
QInputMethodQueryEvent* QInputMethodQueryEvent_Clone(const QInputMethodQueryEvent* self);
void QInputMethodQueryEvent_OnClone(const QInputMethodQueryEvent* self, intptr_t slot);
QInputMethodQueryEvent* QInputMethodQueryEvent_QBaseClone(const QInputMethodQueryEvent* self);
int QInputMethodQueryEvent_Queries(const QInputMethodQueryEvent* self);
void QInputMethodQueryEvent_SetValue(QInputMethodQueryEvent* self, int query, QVariant* value);
QVariant* QInputMethodQueryEvent_Value(const QInputMethodQueryEvent* self, int query);
void QInputMethodQueryEvent_SetAccepted(QInputMethodQueryEvent* self, bool accepted);
void QInputMethodQueryEvent_OnSetAccepted(QInputMethodQueryEvent* self, intptr_t slot);
void QInputMethodQueryEvent_QBaseSetAccepted(QInputMethodQueryEvent* self, bool accepted);
void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self);

QDropEvent* QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDropEvent* QDropEvent_new2(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal);
QDropEvent* QDropEvent_Clone(const QDropEvent* self);
void QDropEvent_OnClone(const QDropEvent* self, intptr_t slot);
QDropEvent* QDropEvent_QBaseClone(const QDropEvent* self);
QPoint* QDropEvent_Pos(const QDropEvent* self);
QPointF* QDropEvent_PosF(const QDropEvent* self);
int QDropEvent_MouseButtons(const QDropEvent* self);
int QDropEvent_KeyboardModifiers(const QDropEvent* self);
QPointF* QDropEvent_Position(const QDropEvent* self);
int QDropEvent_Buttons(const QDropEvent* self);
int QDropEvent_Modifiers(const QDropEvent* self);
int QDropEvent_PossibleActions(const QDropEvent* self);
int QDropEvent_ProposedAction(const QDropEvent* self);
void QDropEvent_AcceptProposedAction(QDropEvent* self);
int QDropEvent_DropAction(const QDropEvent* self);
void QDropEvent_SetDropAction(QDropEvent* self, int action);
QObject* QDropEvent_Source(const QDropEvent* self);
QMimeData* QDropEvent_MimeData(const QDropEvent* self);
void QDropEvent_SetAccepted(QDropEvent* self, bool accepted);
void QDropEvent_OnSetAccepted(QDropEvent* self, intptr_t slot);
void QDropEvent_QBaseSetAccepted(QDropEvent* self, bool accepted);
void QDropEvent_Delete(QDropEvent* self);

QDragMoveEvent* QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDragMoveEvent* QDragMoveEvent_new2(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal);
QDragMoveEvent* QDragMoveEvent_Clone(const QDragMoveEvent* self);
void QDragMoveEvent_OnClone(const QDragMoveEvent* self, intptr_t slot);
QDragMoveEvent* QDragMoveEvent_QBaseClone(const QDragMoveEvent* self);
QRect* QDragMoveEvent_AnswerRect(const QDragMoveEvent* self);
void QDragMoveEvent_Accept(QDragMoveEvent* self);
void QDragMoveEvent_Ignore(QDragMoveEvent* self);
void QDragMoveEvent_AcceptWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_IgnoreWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_SetAccepted(QDragMoveEvent* self, bool accepted);
void QDragMoveEvent_OnSetAccepted(QDragMoveEvent* self, intptr_t slot);
void QDragMoveEvent_QBaseSetAccepted(QDragMoveEvent* self, bool accepted);
void QDragMoveEvent_Delete(QDragMoveEvent* self);

QDragEnterEvent* QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDragEnterEvent* QDragEnterEvent_Clone(const QDragEnterEvent* self);
void QDragEnterEvent_OnClone(const QDragEnterEvent* self, intptr_t slot);
QDragEnterEvent* QDragEnterEvent_QBaseClone(const QDragEnterEvent* self);
void QDragEnterEvent_SetAccepted(QDragEnterEvent* self, bool accepted);
void QDragEnterEvent_OnSetAccepted(QDragEnterEvent* self, intptr_t slot);
void QDragEnterEvent_QBaseSetAccepted(QDragEnterEvent* self, bool accepted);
void QDragEnterEvent_Delete(QDragEnterEvent* self);

QDragLeaveEvent* QDragLeaveEvent_new();
QDragLeaveEvent* QDragLeaveEvent_Clone(const QDragLeaveEvent* self);
void QDragLeaveEvent_OnClone(const QDragLeaveEvent* self, intptr_t slot);
QDragLeaveEvent* QDragLeaveEvent_QBaseClone(const QDragLeaveEvent* self);
void QDragLeaveEvent_SetAccepted(QDragLeaveEvent* self, bool accepted);
void QDragLeaveEvent_OnSetAccepted(QDragLeaveEvent* self, intptr_t slot);
void QDragLeaveEvent_QBaseSetAccepted(QDragLeaveEvent* self, bool accepted);
void QDragLeaveEvent_Delete(QDragLeaveEvent* self);

QHelpEvent* QHelpEvent_new(int typeVal, QPoint* pos, QPoint* globalPos);
QHelpEvent* QHelpEvent_Clone(const QHelpEvent* self);
void QHelpEvent_OnClone(const QHelpEvent* self, intptr_t slot);
QHelpEvent* QHelpEvent_QBaseClone(const QHelpEvent* self);
int QHelpEvent_X(const QHelpEvent* self);
int QHelpEvent_Y(const QHelpEvent* self);
int QHelpEvent_GlobalX(const QHelpEvent* self);
int QHelpEvent_GlobalY(const QHelpEvent* self);
QPoint* QHelpEvent_Pos(const QHelpEvent* self);
QPoint* QHelpEvent_GlobalPos(const QHelpEvent* self);
void QHelpEvent_SetAccepted(QHelpEvent* self, bool accepted);
void QHelpEvent_OnSetAccepted(QHelpEvent* self, intptr_t slot);
void QHelpEvent_QBaseSetAccepted(QHelpEvent* self, bool accepted);
void QHelpEvent_Delete(QHelpEvent* self);

QStatusTipEvent* QStatusTipEvent_new(libqt_string tip);
QStatusTipEvent* QStatusTipEvent_Clone(const QStatusTipEvent* self);
void QStatusTipEvent_OnClone(const QStatusTipEvent* self, intptr_t slot);
QStatusTipEvent* QStatusTipEvent_QBaseClone(const QStatusTipEvent* self);
libqt_string QStatusTipEvent_Tip(const QStatusTipEvent* self);
void QStatusTipEvent_SetAccepted(QStatusTipEvent* self, bool accepted);
void QStatusTipEvent_OnSetAccepted(QStatusTipEvent* self, intptr_t slot);
void QStatusTipEvent_QBaseSetAccepted(QStatusTipEvent* self, bool accepted);
void QStatusTipEvent_Delete(QStatusTipEvent* self);

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(libqt_string href);
QWhatsThisClickedEvent* QWhatsThisClickedEvent_Clone(const QWhatsThisClickedEvent* self);
void QWhatsThisClickedEvent_OnClone(const QWhatsThisClickedEvent* self, intptr_t slot);
QWhatsThisClickedEvent* QWhatsThisClickedEvent_QBaseClone(const QWhatsThisClickedEvent* self);
libqt_string QWhatsThisClickedEvent_Href(const QWhatsThisClickedEvent* self);
void QWhatsThisClickedEvent_SetAccepted(QWhatsThisClickedEvent* self, bool accepted);
void QWhatsThisClickedEvent_OnSetAccepted(QWhatsThisClickedEvent* self, intptr_t slot);
void QWhatsThisClickedEvent_QBaseSetAccepted(QWhatsThisClickedEvent* self, bool accepted);
void QWhatsThisClickedEvent_Delete(QWhatsThisClickedEvent* self);

QActionEvent* QActionEvent_new(int typeVal, QAction* action);
QActionEvent* QActionEvent_new2(int typeVal, QAction* action, QAction* before);
QActionEvent* QActionEvent_Clone(const QActionEvent* self);
void QActionEvent_OnClone(const QActionEvent* self, intptr_t slot);
QActionEvent* QActionEvent_QBaseClone(const QActionEvent* self);
QAction* QActionEvent_Action(const QActionEvent* self);
QAction* QActionEvent_Before(const QActionEvent* self);
void QActionEvent_SetAccepted(QActionEvent* self, bool accepted);
void QActionEvent_OnSetAccepted(QActionEvent* self, intptr_t slot);
void QActionEvent_QBaseSetAccepted(QActionEvent* self, bool accepted);
void QActionEvent_Delete(QActionEvent* self);

QFileOpenEvent* QFileOpenEvent_new(libqt_string file);
QFileOpenEvent* QFileOpenEvent_new2(QUrl* url);
QFileOpenEvent* QFileOpenEvent_Clone(const QFileOpenEvent* self);
void QFileOpenEvent_OnClone(const QFileOpenEvent* self, intptr_t slot);
QFileOpenEvent* QFileOpenEvent_QBaseClone(const QFileOpenEvent* self);
libqt_string QFileOpenEvent_File(const QFileOpenEvent* self);
QUrl* QFileOpenEvent_Url(const QFileOpenEvent* self);
bool QFileOpenEvent_OpenFile(const QFileOpenEvent* self, QFile* file, int flags);
void QFileOpenEvent_SetAccepted(QFileOpenEvent* self, bool accepted);
void QFileOpenEvent_OnSetAccepted(QFileOpenEvent* self, intptr_t slot);
void QFileOpenEvent_QBaseSetAccepted(QFileOpenEvent* self, bool accepted);
void QFileOpenEvent_Delete(QFileOpenEvent* self);

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t);
QToolBarChangeEvent* QToolBarChangeEvent_Clone(const QToolBarChangeEvent* self);
void QToolBarChangeEvent_OnClone(const QToolBarChangeEvent* self, intptr_t slot);
QToolBarChangeEvent* QToolBarChangeEvent_QBaseClone(const QToolBarChangeEvent* self);
bool QToolBarChangeEvent_Toggle(const QToolBarChangeEvent* self);
void QToolBarChangeEvent_SetAccepted(QToolBarChangeEvent* self, bool accepted);
void QToolBarChangeEvent_OnSetAccepted(QToolBarChangeEvent* self, intptr_t slot);
void QToolBarChangeEvent_QBaseSetAccepted(QToolBarChangeEvent* self, bool accepted);
void QToolBarChangeEvent_Delete(QToolBarChangeEvent* self);

QShortcutEvent* QShortcutEvent_new(QKeySequence* key, int id);
QShortcutEvent* QShortcutEvent_new2(QKeySequence* key, int id, bool ambiguous);
QShortcutEvent* QShortcutEvent_Clone(const QShortcutEvent* self);
void QShortcutEvent_OnClone(const QShortcutEvent* self, intptr_t slot);
QShortcutEvent* QShortcutEvent_QBaseClone(const QShortcutEvent* self);
QKeySequence* QShortcutEvent_Key(const QShortcutEvent* self);
int QShortcutEvent_ShortcutId(const QShortcutEvent* self);
bool QShortcutEvent_IsAmbiguous(const QShortcutEvent* self);
void QShortcutEvent_SetAccepted(QShortcutEvent* self, bool accepted);
void QShortcutEvent_OnSetAccepted(QShortcutEvent* self, intptr_t slot);
void QShortcutEvent_QBaseSetAccepted(QShortcutEvent* self, bool accepted);
void QShortcutEvent_Delete(QShortcutEvent* self);

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int oldState);
QWindowStateChangeEvent* QWindowStateChangeEvent_new2(int oldState, bool isOverride);
QWindowStateChangeEvent* QWindowStateChangeEvent_Clone(const QWindowStateChangeEvent* self);
void QWindowStateChangeEvent_OnClone(const QWindowStateChangeEvent* self, intptr_t slot);
QWindowStateChangeEvent* QWindowStateChangeEvent_QBaseClone(const QWindowStateChangeEvent* self);
int QWindowStateChangeEvent_OldState(const QWindowStateChangeEvent* self);
bool QWindowStateChangeEvent_IsOverride(const QWindowStateChangeEvent* self);
void QWindowStateChangeEvent_SetAccepted(QWindowStateChangeEvent* self, bool accepted);
void QWindowStateChangeEvent_OnSetAccepted(QWindowStateChangeEvent* self, intptr_t slot);
void QWindowStateChangeEvent_QBaseSetAccepted(QWindowStateChangeEvent* self, bool accepted);
void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self);

QTouchEvent* QTouchEvent_new(int eventType);
QTouchEvent* QTouchEvent_new2(int eventType, QPointingDevice* device, int modifiers, int touchPointStates);
QTouchEvent* QTouchEvent_new3(int eventType, QPointingDevice* device);
QTouchEvent* QTouchEvent_new4(int eventType, QPointingDevice* device, int modifiers);
QTouchEvent* QTouchEvent_new5(int eventType, QPointingDevice* device, int modifiers, libqt_list /* of QEventPoint* */ touchPoints);
QTouchEvent* QTouchEvent_new6(int eventType, QPointingDevice* device, int modifiers, int touchPointStates, libqt_list /* of QEventPoint* */ touchPoints);
QTouchEvent* QTouchEvent_Clone(const QTouchEvent* self);
void QTouchEvent_OnClone(const QTouchEvent* self, intptr_t slot);
QTouchEvent* QTouchEvent_QBaseClone(const QTouchEvent* self);
QObject* QTouchEvent_Target(const QTouchEvent* self);
int QTouchEvent_TouchPointStates(const QTouchEvent* self);
libqt_list /* of QEventPoint* */ QTouchEvent_TouchPoints(const QTouchEvent* self);
bool QTouchEvent_IsBeginEvent(const QTouchEvent* self);
void QTouchEvent_OnIsBeginEvent(const QTouchEvent* self, intptr_t slot);
bool QTouchEvent_QBaseIsBeginEvent(const QTouchEvent* self);
bool QTouchEvent_IsUpdateEvent(const QTouchEvent* self);
void QTouchEvent_OnIsUpdateEvent(const QTouchEvent* self, intptr_t slot);
bool QTouchEvent_QBaseIsUpdateEvent(const QTouchEvent* self);
bool QTouchEvent_IsEndEvent(const QTouchEvent* self);
void QTouchEvent_OnIsEndEvent(const QTouchEvent* self, intptr_t slot);
bool QTouchEvent_QBaseIsEndEvent(const QTouchEvent* self);
void QTouchEvent_SetTimestamp(QTouchEvent* self, unsigned long long timestamp);
void QTouchEvent_OnSetTimestamp(QTouchEvent* self, intptr_t slot);
void QTouchEvent_QBaseSetTimestamp(QTouchEvent* self, unsigned long long timestamp);
void QTouchEvent_SetAccepted(QTouchEvent* self, bool accepted);
void QTouchEvent_OnSetAccepted(QTouchEvent* self, intptr_t slot);
void QTouchEvent_QBaseSetAccepted(QTouchEvent* self, bool accepted);
void QTouchEvent_Delete(QTouchEvent* self);

QScrollPrepareEvent* QScrollPrepareEvent_new(QPointF* startPos);
QScrollPrepareEvent* QScrollPrepareEvent_Clone(const QScrollPrepareEvent* self);
void QScrollPrepareEvent_OnClone(const QScrollPrepareEvent* self, intptr_t slot);
QScrollPrepareEvent* QScrollPrepareEvent_QBaseClone(const QScrollPrepareEvent* self);
QPointF* QScrollPrepareEvent_StartPos(const QScrollPrepareEvent* self);
QSizeF* QScrollPrepareEvent_ViewportSize(const QScrollPrepareEvent* self);
QRectF* QScrollPrepareEvent_ContentPosRange(const QScrollPrepareEvent* self);
QPointF* QScrollPrepareEvent_ContentPos(const QScrollPrepareEvent* self);
void QScrollPrepareEvent_SetViewportSize(QScrollPrepareEvent* self, QSizeF* size);
void QScrollPrepareEvent_SetContentPosRange(QScrollPrepareEvent* self, QRectF* rect);
void QScrollPrepareEvent_SetContentPos(QScrollPrepareEvent* self, QPointF* pos);
void QScrollPrepareEvent_SetAccepted(QScrollPrepareEvent* self, bool accepted);
void QScrollPrepareEvent_OnSetAccepted(QScrollPrepareEvent* self, intptr_t slot);
void QScrollPrepareEvent_QBaseSetAccepted(QScrollPrepareEvent* self, bool accepted);
void QScrollPrepareEvent_Delete(QScrollPrepareEvent* self);

QScrollEvent* QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, int scrollState);
QScrollEvent* QScrollEvent_Clone(const QScrollEvent* self);
void QScrollEvent_OnClone(const QScrollEvent* self, intptr_t slot);
QScrollEvent* QScrollEvent_QBaseClone(const QScrollEvent* self);
QPointF* QScrollEvent_ContentPos(const QScrollEvent* self);
QPointF* QScrollEvent_OvershootDistance(const QScrollEvent* self);
int QScrollEvent_ScrollState(const QScrollEvent* self);
void QScrollEvent_SetAccepted(QScrollEvent* self, bool accepted);
void QScrollEvent_OnSetAccepted(QScrollEvent* self, intptr_t slot);
void QScrollEvent_QBaseSetAccepted(QScrollEvent* self, bool accepted);
void QScrollEvent_Delete(QScrollEvent* self);

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation);
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_Clone(const QScreenOrientationChangeEvent* self);
void QScreenOrientationChangeEvent_OnClone(const QScreenOrientationChangeEvent* self, intptr_t slot);
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_QBaseClone(const QScreenOrientationChangeEvent* self);
QScreen* QScreenOrientationChangeEvent_Screen(const QScreenOrientationChangeEvent* self);
int QScreenOrientationChangeEvent_Orientation(const QScreenOrientationChangeEvent* self);
void QScreenOrientationChangeEvent_SetAccepted(QScreenOrientationChangeEvent* self, bool accepted);
void QScreenOrientationChangeEvent_OnSetAccepted(QScreenOrientationChangeEvent* self, intptr_t slot);
void QScreenOrientationChangeEvent_QBaseSetAccepted(QScreenOrientationChangeEvent* self, bool accepted);
void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self);

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state);
QApplicationStateChangeEvent* QApplicationStateChangeEvent_Clone(const QApplicationStateChangeEvent* self);
void QApplicationStateChangeEvent_OnClone(const QApplicationStateChangeEvent* self, intptr_t slot);
QApplicationStateChangeEvent* QApplicationStateChangeEvent_QBaseClone(const QApplicationStateChangeEvent* self);
int QApplicationStateChangeEvent_ApplicationState(const QApplicationStateChangeEvent* self);
void QApplicationStateChangeEvent_SetAccepted(QApplicationStateChangeEvent* self, bool accepted);
void QApplicationStateChangeEvent_OnSetAccepted(QApplicationStateChangeEvent* self, intptr_t slot);
void QApplicationStateChangeEvent_QBaseSetAccepted(QApplicationStateChangeEvent* self, bool accepted);
void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self);

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(int typ, int s, int l);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new3(QInputMethodEvent__Attribute* param1);
void QInputMethodEvent__Attribute_OperatorAssign(QInputMethodEvent__Attribute* self, QInputMethodEvent__Attribute* param1);
void QInputMethodEvent__Attribute_Delete(QInputMethodEvent__Attribute* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
