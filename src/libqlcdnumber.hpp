#pragma once
#ifndef SRCC_LIBQLCDNUMBER_HPP
#define SRCC_LIBQLCDNUMBER_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLCDNumber QLCDNumber;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QLCDNumber* QLCDNumber_new(QWidget* parent);
QLCDNumber* QLCDNumber_new2();
QLCDNumber* QLCDNumber_new3(unsigned int numDigits);
QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent);
QMetaObject* QLCDNumber_MetaObject(const QLCDNumber* self);
void* QLCDNumber_Metacast(QLCDNumber* self, const char* param1);
int QLCDNumber_Metacall(QLCDNumber* self, int param1, int param2, void** param3);
void QLCDNumber_OnMetacall(QLCDNumber* self, intptr_t slot);
int QLCDNumber_QBaseMetacall(QLCDNumber* self, int param1, int param2, void** param3);
libqt_string QLCDNumber_Tr(const char* s);
bool QLCDNumber_SmallDecimalPoint(const QLCDNumber* self);
int QLCDNumber_DigitCount(const QLCDNumber* self);
void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits);
bool QLCDNumber_CheckOverflow(const QLCDNumber* self, double num);
bool QLCDNumber_CheckOverflow2(const QLCDNumber* self, int num);
int QLCDNumber_Mode(const QLCDNumber* self);
void QLCDNumber_SetMode(QLCDNumber* self, int mode);
int QLCDNumber_SegmentStyle(const QLCDNumber* self);
void QLCDNumber_SetSegmentStyle(QLCDNumber* self, int segmentStyle);
double QLCDNumber_Value(const QLCDNumber* self);
int QLCDNumber_IntValue(const QLCDNumber* self);
QSize* QLCDNumber_SizeHint(const QLCDNumber* self);
void QLCDNumber_OnSizeHint(const QLCDNumber* self, intptr_t slot);
QSize* QLCDNumber_QBaseSizeHint(const QLCDNumber* self);
void QLCDNumber_Display(QLCDNumber* self, const libqt_string str);
void QLCDNumber_Display2(QLCDNumber* self, int num);
void QLCDNumber_Display3(QLCDNumber* self, double num);
void QLCDNumber_SetHexMode(QLCDNumber* self);
void QLCDNumber_SetDecMode(QLCDNumber* self);
void QLCDNumber_SetOctMode(QLCDNumber* self);
void QLCDNumber_SetBinMode(QLCDNumber* self);
void QLCDNumber_SetSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint);
void QLCDNumber_Overflow(QLCDNumber* self);
void QLCDNumber_Connect_Overflow(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_Event(QLCDNumber* self, QEvent* e);
void QLCDNumber_OnEvent(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_QBaseEvent(QLCDNumber* self, QEvent* e);
void QLCDNumber_PaintEvent(QLCDNumber* self, QPaintEvent* param1);
void QLCDNumber_OnPaintEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBasePaintEvent(QLCDNumber* self, QPaintEvent* param1);
libqt_string QLCDNumber_Tr2(const char* s, const char* c);
libqt_string QLCDNumber_Tr3(const char* s, const char* c, int n);
void QLCDNumber_ChangeEvent(QLCDNumber* self, QEvent* param1);
void QLCDNumber_OnChangeEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseChangeEvent(QLCDNumber* self, QEvent* param1);
void QLCDNumber_InitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option);
void QLCDNumber_OnInitStyleOption(const QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseInitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option);
int QLCDNumber_DevType(const QLCDNumber* self);
void QLCDNumber_OnDevType(const QLCDNumber* self, intptr_t slot);
int QLCDNumber_QBaseDevType(const QLCDNumber* self);
void QLCDNumber_SetVisible(QLCDNumber* self, bool visible);
void QLCDNumber_OnSetVisible(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseSetVisible(QLCDNumber* self, bool visible);
QSize* QLCDNumber_MinimumSizeHint(const QLCDNumber* self);
void QLCDNumber_OnMinimumSizeHint(const QLCDNumber* self, intptr_t slot);
QSize* QLCDNumber_QBaseMinimumSizeHint(const QLCDNumber* self);
int QLCDNumber_HeightForWidth(const QLCDNumber* self, int param1);
void QLCDNumber_OnHeightForWidth(const QLCDNumber* self, intptr_t slot);
int QLCDNumber_QBaseHeightForWidth(const QLCDNumber* self, int param1);
bool QLCDNumber_HasHeightForWidth(const QLCDNumber* self);
void QLCDNumber_OnHasHeightForWidth(const QLCDNumber* self, intptr_t slot);
bool QLCDNumber_QBaseHasHeightForWidth(const QLCDNumber* self);
QPaintEngine* QLCDNumber_PaintEngine(const QLCDNumber* self);
void QLCDNumber_OnPaintEngine(const QLCDNumber* self, intptr_t slot);
QPaintEngine* QLCDNumber_QBasePaintEngine(const QLCDNumber* self);
void QLCDNumber_MousePressEvent(QLCDNumber* self, QMouseEvent* event);
void QLCDNumber_OnMousePressEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseMousePressEvent(QLCDNumber* self, QMouseEvent* event);
void QLCDNumber_MouseReleaseEvent(QLCDNumber* self, QMouseEvent* event);
void QLCDNumber_OnMouseReleaseEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseMouseReleaseEvent(QLCDNumber* self, QMouseEvent* event);
void QLCDNumber_MouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event);
void QLCDNumber_OnMouseDoubleClickEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseMouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event);
void QLCDNumber_MouseMoveEvent(QLCDNumber* self, QMouseEvent* event);
void QLCDNumber_OnMouseMoveEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseMouseMoveEvent(QLCDNumber* self, QMouseEvent* event);
void QLCDNumber_WheelEvent(QLCDNumber* self, QWheelEvent* event);
void QLCDNumber_OnWheelEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseWheelEvent(QLCDNumber* self, QWheelEvent* event);
void QLCDNumber_KeyPressEvent(QLCDNumber* self, QKeyEvent* event);
void QLCDNumber_OnKeyPressEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseKeyPressEvent(QLCDNumber* self, QKeyEvent* event);
void QLCDNumber_KeyReleaseEvent(QLCDNumber* self, QKeyEvent* event);
void QLCDNumber_OnKeyReleaseEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseKeyReleaseEvent(QLCDNumber* self, QKeyEvent* event);
void QLCDNumber_FocusInEvent(QLCDNumber* self, QFocusEvent* event);
void QLCDNumber_OnFocusInEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseFocusInEvent(QLCDNumber* self, QFocusEvent* event);
void QLCDNumber_FocusOutEvent(QLCDNumber* self, QFocusEvent* event);
void QLCDNumber_OnFocusOutEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseFocusOutEvent(QLCDNumber* self, QFocusEvent* event);
void QLCDNumber_EnterEvent(QLCDNumber* self, QEnterEvent* event);
void QLCDNumber_OnEnterEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseEnterEvent(QLCDNumber* self, QEnterEvent* event);
void QLCDNumber_LeaveEvent(QLCDNumber* self, QEvent* event);
void QLCDNumber_OnLeaveEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseLeaveEvent(QLCDNumber* self, QEvent* event);
void QLCDNumber_MoveEvent(QLCDNumber* self, QMoveEvent* event);
void QLCDNumber_OnMoveEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseMoveEvent(QLCDNumber* self, QMoveEvent* event);
void QLCDNumber_ResizeEvent(QLCDNumber* self, QResizeEvent* event);
void QLCDNumber_OnResizeEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseResizeEvent(QLCDNumber* self, QResizeEvent* event);
void QLCDNumber_CloseEvent(QLCDNumber* self, QCloseEvent* event);
void QLCDNumber_OnCloseEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseCloseEvent(QLCDNumber* self, QCloseEvent* event);
void QLCDNumber_ContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event);
void QLCDNumber_OnContextMenuEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event);
void QLCDNumber_TabletEvent(QLCDNumber* self, QTabletEvent* event);
void QLCDNumber_OnTabletEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseTabletEvent(QLCDNumber* self, QTabletEvent* event);
void QLCDNumber_ActionEvent(QLCDNumber* self, QActionEvent* event);
void QLCDNumber_OnActionEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseActionEvent(QLCDNumber* self, QActionEvent* event);
void QLCDNumber_DragEnterEvent(QLCDNumber* self, QDragEnterEvent* event);
void QLCDNumber_OnDragEnterEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseDragEnterEvent(QLCDNumber* self, QDragEnterEvent* event);
void QLCDNumber_DragMoveEvent(QLCDNumber* self, QDragMoveEvent* event);
void QLCDNumber_OnDragMoveEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseDragMoveEvent(QLCDNumber* self, QDragMoveEvent* event);
void QLCDNumber_DragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event);
void QLCDNumber_OnDragLeaveEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseDragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event);
void QLCDNumber_DropEvent(QLCDNumber* self, QDropEvent* event);
void QLCDNumber_OnDropEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseDropEvent(QLCDNumber* self, QDropEvent* event);
void QLCDNumber_ShowEvent(QLCDNumber* self, QShowEvent* event);
void QLCDNumber_OnShowEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseShowEvent(QLCDNumber* self, QShowEvent* event);
void QLCDNumber_HideEvent(QLCDNumber* self, QHideEvent* event);
void QLCDNumber_OnHideEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseHideEvent(QLCDNumber* self, QHideEvent* event);
bool QLCDNumber_NativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result);
void QLCDNumber_OnNativeEvent(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_QBaseNativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result);
int QLCDNumber_Metric(const QLCDNumber* self, int param1);
void QLCDNumber_OnMetric(const QLCDNumber* self, intptr_t slot);
int QLCDNumber_QBaseMetric(const QLCDNumber* self, int param1);
void QLCDNumber_InitPainter(const QLCDNumber* self, QPainter* painter);
void QLCDNumber_OnInitPainter(const QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseInitPainter(const QLCDNumber* self, QPainter* painter);
QPaintDevice* QLCDNumber_Redirected(const QLCDNumber* self, QPoint* offset);
void QLCDNumber_OnRedirected(const QLCDNumber* self, intptr_t slot);
QPaintDevice* QLCDNumber_QBaseRedirected(const QLCDNumber* self, QPoint* offset);
QPainter* QLCDNumber_SharedPainter(const QLCDNumber* self);
void QLCDNumber_OnSharedPainter(const QLCDNumber* self, intptr_t slot);
QPainter* QLCDNumber_QBaseSharedPainter(const QLCDNumber* self);
void QLCDNumber_InputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1);
void QLCDNumber_OnInputMethodEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseInputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1);
QVariant* QLCDNumber_InputMethodQuery(const QLCDNumber* self, int param1);
void QLCDNumber_OnInputMethodQuery(const QLCDNumber* self, intptr_t slot);
QVariant* QLCDNumber_QBaseInputMethodQuery(const QLCDNumber* self, int param1);
bool QLCDNumber_FocusNextPrevChild(QLCDNumber* self, bool next);
void QLCDNumber_OnFocusNextPrevChild(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_QBaseFocusNextPrevChild(QLCDNumber* self, bool next);
bool QLCDNumber_EventFilter(QLCDNumber* self, QObject* watched, QEvent* event);
void QLCDNumber_OnEventFilter(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_QBaseEventFilter(QLCDNumber* self, QObject* watched, QEvent* event);
void QLCDNumber_TimerEvent(QLCDNumber* self, QTimerEvent* event);
void QLCDNumber_OnTimerEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseTimerEvent(QLCDNumber* self, QTimerEvent* event);
void QLCDNumber_ChildEvent(QLCDNumber* self, QChildEvent* event);
void QLCDNumber_OnChildEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseChildEvent(QLCDNumber* self, QChildEvent* event);
void QLCDNumber_CustomEvent(QLCDNumber* self, QEvent* event);
void QLCDNumber_OnCustomEvent(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseCustomEvent(QLCDNumber* self, QEvent* event);
void QLCDNumber_ConnectNotify(QLCDNumber* self, const QMetaMethod* signal);
void QLCDNumber_OnConnectNotify(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseConnectNotify(QLCDNumber* self, const QMetaMethod* signal);
void QLCDNumber_DisconnectNotify(QLCDNumber* self, const QMetaMethod* signal);
void QLCDNumber_OnDisconnectNotify(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseDisconnectNotify(QLCDNumber* self, const QMetaMethod* signal);
void QLCDNumber_DrawFrame(QLCDNumber* self, QPainter* param1);
void QLCDNumber_OnDrawFrame(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseDrawFrame(QLCDNumber* self, QPainter* param1);
void QLCDNumber_UpdateMicroFocus(QLCDNumber* self);
void QLCDNumber_OnUpdateMicroFocus(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseUpdateMicroFocus(QLCDNumber* self);
void QLCDNumber_Create(QLCDNumber* self);
void QLCDNumber_OnCreate(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseCreate(QLCDNumber* self);
void QLCDNumber_Destroy(QLCDNumber* self);
void QLCDNumber_OnDestroy(QLCDNumber* self, intptr_t slot);
void QLCDNumber_QBaseDestroy(QLCDNumber* self);
bool QLCDNumber_FocusNextChild(QLCDNumber* self);
void QLCDNumber_OnFocusNextChild(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_QBaseFocusNextChild(QLCDNumber* self);
bool QLCDNumber_FocusPreviousChild(QLCDNumber* self);
void QLCDNumber_OnFocusPreviousChild(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_QBaseFocusPreviousChild(QLCDNumber* self);
QObject* QLCDNumber_Sender(const QLCDNumber* self);
void QLCDNumber_OnSender(const QLCDNumber* self, intptr_t slot);
QObject* QLCDNumber_QBaseSender(const QLCDNumber* self);
int QLCDNumber_SenderSignalIndex(const QLCDNumber* self);
void QLCDNumber_OnSenderSignalIndex(const QLCDNumber* self, intptr_t slot);
int QLCDNumber_QBaseSenderSignalIndex(const QLCDNumber* self);
int QLCDNumber_Receivers(const QLCDNumber* self, const char* signal);
void QLCDNumber_OnReceivers(const QLCDNumber* self, intptr_t slot);
int QLCDNumber_QBaseReceivers(const QLCDNumber* self, const char* signal);
bool QLCDNumber_IsSignalConnected(const QLCDNumber* self, const QMetaMethod* signal);
void QLCDNumber_OnIsSignalConnected(const QLCDNumber* self, intptr_t slot);
bool QLCDNumber_QBaseIsSignalConnected(const QLCDNumber* self, const QMetaMethod* signal);
double QLCDNumber_GetDecodedMetricF(const QLCDNumber* self, int metricA, int metricB);
void QLCDNumber_OnGetDecodedMetricF(const QLCDNumber* self, intptr_t slot);
double QLCDNumber_QBaseGetDecodedMetricF(const QLCDNumber* self, int metricA, int metricB);
void QLCDNumber_Delete(QLCDNumber* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
