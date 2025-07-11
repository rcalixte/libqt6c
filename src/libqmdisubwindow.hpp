#pragma once
#ifndef SRCC_LIBQMDISUBWINDOW_HPP
#define SRCC_LIBQMDISUBWINDOW_HPP

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
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMdiArea QMdiArea;
typedef struct QMdiSubWindow QMdiSubWindow;
typedef struct QMenu QMenu;
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
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QMdiSubWindow* QMdiSubWindow_new(QWidget* parent);
QMdiSubWindow* QMdiSubWindow_new2();
QMdiSubWindow* QMdiSubWindow_new3(QWidget* parent, int flags);
QMetaObject* QMdiSubWindow_MetaObject(const QMdiSubWindow* self);
void* QMdiSubWindow_Metacast(QMdiSubWindow* self, const char* param1);
int QMdiSubWindow_Metacall(QMdiSubWindow* self, int param1, int param2, void** param3);
void QMdiSubWindow_OnMetacall(QMdiSubWindow* self, intptr_t slot);
int QMdiSubWindow_QBaseMetacall(QMdiSubWindow* self, int param1, int param2, void** param3);
libqt_string QMdiSubWindow_Tr(const char* s);
QSize* QMdiSubWindow_SizeHint(const QMdiSubWindow* self);
void QMdiSubWindow_OnSizeHint(const QMdiSubWindow* self, intptr_t slot);
QSize* QMdiSubWindow_QBaseSizeHint(const QMdiSubWindow* self);
QSize* QMdiSubWindow_MinimumSizeHint(const QMdiSubWindow* self);
void QMdiSubWindow_OnMinimumSizeHint(const QMdiSubWindow* self, intptr_t slot);
QSize* QMdiSubWindow_QBaseMinimumSizeHint(const QMdiSubWindow* self);
void QMdiSubWindow_SetWidget(QMdiSubWindow* self, QWidget* widget);
QWidget* QMdiSubWindow_Widget(const QMdiSubWindow* self);
QWidget* QMdiSubWindow_MaximizedButtonsWidget(const QMdiSubWindow* self);
QWidget* QMdiSubWindow_MaximizedSystemMenuIconWidget(const QMdiSubWindow* self);
bool QMdiSubWindow_IsShaded(const QMdiSubWindow* self);
void QMdiSubWindow_SetOption(QMdiSubWindow* self, int option);
bool QMdiSubWindow_TestOption(const QMdiSubWindow* self, int param1);
void QMdiSubWindow_SetKeyboardSingleStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_KeyboardSingleStep(const QMdiSubWindow* self);
void QMdiSubWindow_SetKeyboardPageStep(QMdiSubWindow* self, int step);
int QMdiSubWindow_KeyboardPageStep(const QMdiSubWindow* self);
void QMdiSubWindow_SetSystemMenu(QMdiSubWindow* self, QMenu* systemMenu);
QMenu* QMdiSubWindow_SystemMenu(const QMdiSubWindow* self);
QMdiArea* QMdiSubWindow_MdiArea(const QMdiSubWindow* self);
void QMdiSubWindow_WindowStateChanged(QMdiSubWindow* self, int oldState, int newState);
void QMdiSubWindow_Connect_WindowStateChanged(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_AboutToActivate(QMdiSubWindow* self);
void QMdiSubWindow_Connect_AboutToActivate(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self);
void QMdiSubWindow_ShowShaded(QMdiSubWindow* self);
bool QMdiSubWindow_EventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
void QMdiSubWindow_OnEventFilter(QMdiSubWindow* self, intptr_t slot);
bool QMdiSubWindow_QBaseEventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
bool QMdiSubWindow_Event(QMdiSubWindow* self, QEvent* event);
void QMdiSubWindow_OnEvent(QMdiSubWindow* self, intptr_t slot);
bool QMdiSubWindow_QBaseEvent(QMdiSubWindow* self, QEvent* event);
void QMdiSubWindow_ShowEvent(QMdiSubWindow* self, QShowEvent* showEvent);
void QMdiSubWindow_OnShowEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseShowEvent(QMdiSubWindow* self, QShowEvent* showEvent);
void QMdiSubWindow_HideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
void QMdiSubWindow_OnHideEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseHideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
void QMdiSubWindow_ChangeEvent(QMdiSubWindow* self, QEvent* changeEvent);
void QMdiSubWindow_OnChangeEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseChangeEvent(QMdiSubWindow* self, QEvent* changeEvent);
void QMdiSubWindow_CloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
void QMdiSubWindow_OnCloseEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseCloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
void QMdiSubWindow_LeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
void QMdiSubWindow_OnLeaveEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseLeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
void QMdiSubWindow_ResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
void QMdiSubWindow_OnResizeEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
void QMdiSubWindow_TimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
void QMdiSubWindow_OnTimerEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseTimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
void QMdiSubWindow_MoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
void QMdiSubWindow_OnMoveEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseMoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
void QMdiSubWindow_PaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
void QMdiSubWindow_OnPaintEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBasePaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
void QMdiSubWindow_MousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_OnMousePressEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseMousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_MouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_OnMouseDoubleClickEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseMouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_MouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_OnMouseReleaseEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseMouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_MouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_OnMouseMoveEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseMouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
void QMdiSubWindow_KeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
void QMdiSubWindow_OnKeyPressEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseKeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
void QMdiSubWindow_ContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
void QMdiSubWindow_OnContextMenuEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
void QMdiSubWindow_FocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
void QMdiSubWindow_OnFocusInEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseFocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
void QMdiSubWindow_FocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
void QMdiSubWindow_OnFocusOutEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseFocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
void QMdiSubWindow_ChildEvent(QMdiSubWindow* self, QChildEvent* childEvent);
void QMdiSubWindow_OnChildEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseChildEvent(QMdiSubWindow* self, QChildEvent* childEvent);
libqt_string QMdiSubWindow_Tr2(const char* s, const char* c);
libqt_string QMdiSubWindow_Tr3(const char* s, const char* c, int n);
void QMdiSubWindow_SetOption2(QMdiSubWindow* self, int option, bool on);
int QMdiSubWindow_DevType(const QMdiSubWindow* self);
void QMdiSubWindow_OnDevType(const QMdiSubWindow* self, intptr_t slot);
int QMdiSubWindow_QBaseDevType(const QMdiSubWindow* self);
void QMdiSubWindow_SetVisible(QMdiSubWindow* self, bool visible);
void QMdiSubWindow_OnSetVisible(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseSetVisible(QMdiSubWindow* self, bool visible);
int QMdiSubWindow_HeightForWidth(const QMdiSubWindow* self, int param1);
void QMdiSubWindow_OnHeightForWidth(const QMdiSubWindow* self, intptr_t slot);
int QMdiSubWindow_QBaseHeightForWidth(const QMdiSubWindow* self, int param1);
bool QMdiSubWindow_HasHeightForWidth(const QMdiSubWindow* self);
void QMdiSubWindow_OnHasHeightForWidth(const QMdiSubWindow* self, intptr_t slot);
bool QMdiSubWindow_QBaseHasHeightForWidth(const QMdiSubWindow* self);
QPaintEngine* QMdiSubWindow_PaintEngine(const QMdiSubWindow* self);
void QMdiSubWindow_OnPaintEngine(const QMdiSubWindow* self, intptr_t slot);
QPaintEngine* QMdiSubWindow_QBasePaintEngine(const QMdiSubWindow* self);
void QMdiSubWindow_WheelEvent(QMdiSubWindow* self, QWheelEvent* event);
void QMdiSubWindow_OnWheelEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseWheelEvent(QMdiSubWindow* self, QWheelEvent* event);
void QMdiSubWindow_KeyReleaseEvent(QMdiSubWindow* self, QKeyEvent* event);
void QMdiSubWindow_OnKeyReleaseEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseKeyReleaseEvent(QMdiSubWindow* self, QKeyEvent* event);
void QMdiSubWindow_EnterEvent(QMdiSubWindow* self, QEnterEvent* event);
void QMdiSubWindow_OnEnterEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseEnterEvent(QMdiSubWindow* self, QEnterEvent* event);
void QMdiSubWindow_TabletEvent(QMdiSubWindow* self, QTabletEvent* event);
void QMdiSubWindow_OnTabletEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseTabletEvent(QMdiSubWindow* self, QTabletEvent* event);
void QMdiSubWindow_ActionEvent(QMdiSubWindow* self, QActionEvent* event);
void QMdiSubWindow_OnActionEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseActionEvent(QMdiSubWindow* self, QActionEvent* event);
void QMdiSubWindow_DragEnterEvent(QMdiSubWindow* self, QDragEnterEvent* event);
void QMdiSubWindow_OnDragEnterEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseDragEnterEvent(QMdiSubWindow* self, QDragEnterEvent* event);
void QMdiSubWindow_DragMoveEvent(QMdiSubWindow* self, QDragMoveEvent* event);
void QMdiSubWindow_OnDragMoveEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseDragMoveEvent(QMdiSubWindow* self, QDragMoveEvent* event);
void QMdiSubWindow_DragLeaveEvent(QMdiSubWindow* self, QDragLeaveEvent* event);
void QMdiSubWindow_OnDragLeaveEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseDragLeaveEvent(QMdiSubWindow* self, QDragLeaveEvent* event);
void QMdiSubWindow_DropEvent(QMdiSubWindow* self, QDropEvent* event);
void QMdiSubWindow_OnDropEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseDropEvent(QMdiSubWindow* self, QDropEvent* event);
bool QMdiSubWindow_NativeEvent(QMdiSubWindow* self, const libqt_string eventType, void* message, intptr_t* result);
void QMdiSubWindow_OnNativeEvent(QMdiSubWindow* self, intptr_t slot);
bool QMdiSubWindow_QBaseNativeEvent(QMdiSubWindow* self, const libqt_string eventType, void* message, intptr_t* result);
int QMdiSubWindow_Metric(const QMdiSubWindow* self, int param1);
void QMdiSubWindow_OnMetric(const QMdiSubWindow* self, intptr_t slot);
int QMdiSubWindow_QBaseMetric(const QMdiSubWindow* self, int param1);
void QMdiSubWindow_InitPainter(const QMdiSubWindow* self, QPainter* painter);
void QMdiSubWindow_OnInitPainter(const QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseInitPainter(const QMdiSubWindow* self, QPainter* painter);
QPaintDevice* QMdiSubWindow_Redirected(const QMdiSubWindow* self, QPoint* offset);
void QMdiSubWindow_OnRedirected(const QMdiSubWindow* self, intptr_t slot);
QPaintDevice* QMdiSubWindow_QBaseRedirected(const QMdiSubWindow* self, QPoint* offset);
QPainter* QMdiSubWindow_SharedPainter(const QMdiSubWindow* self);
void QMdiSubWindow_OnSharedPainter(const QMdiSubWindow* self, intptr_t slot);
QPainter* QMdiSubWindow_QBaseSharedPainter(const QMdiSubWindow* self);
void QMdiSubWindow_InputMethodEvent(QMdiSubWindow* self, QInputMethodEvent* param1);
void QMdiSubWindow_OnInputMethodEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseInputMethodEvent(QMdiSubWindow* self, QInputMethodEvent* param1);
QVariant* QMdiSubWindow_InputMethodQuery(const QMdiSubWindow* self, int param1);
void QMdiSubWindow_OnInputMethodQuery(const QMdiSubWindow* self, intptr_t slot);
QVariant* QMdiSubWindow_QBaseInputMethodQuery(const QMdiSubWindow* self, int param1);
bool QMdiSubWindow_FocusNextPrevChild(QMdiSubWindow* self, bool next);
void QMdiSubWindow_OnFocusNextPrevChild(QMdiSubWindow* self, intptr_t slot);
bool QMdiSubWindow_QBaseFocusNextPrevChild(QMdiSubWindow* self, bool next);
void QMdiSubWindow_CustomEvent(QMdiSubWindow* self, QEvent* event);
void QMdiSubWindow_OnCustomEvent(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseCustomEvent(QMdiSubWindow* self, QEvent* event);
void QMdiSubWindow_ConnectNotify(QMdiSubWindow* self, const QMetaMethod* signal);
void QMdiSubWindow_OnConnectNotify(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseConnectNotify(QMdiSubWindow* self, const QMetaMethod* signal);
void QMdiSubWindow_DisconnectNotify(QMdiSubWindow* self, const QMetaMethod* signal);
void QMdiSubWindow_OnDisconnectNotify(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseDisconnectNotify(QMdiSubWindow* self, const QMetaMethod* signal);
void QMdiSubWindow_UpdateMicroFocus(QMdiSubWindow* self);
void QMdiSubWindow_OnUpdateMicroFocus(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseUpdateMicroFocus(QMdiSubWindow* self);
void QMdiSubWindow_Create(QMdiSubWindow* self);
void QMdiSubWindow_OnCreate(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseCreate(QMdiSubWindow* self);
void QMdiSubWindow_Destroy(QMdiSubWindow* self);
void QMdiSubWindow_OnDestroy(QMdiSubWindow* self, intptr_t slot);
void QMdiSubWindow_QBaseDestroy(QMdiSubWindow* self);
bool QMdiSubWindow_FocusNextChild(QMdiSubWindow* self);
void QMdiSubWindow_OnFocusNextChild(QMdiSubWindow* self, intptr_t slot);
bool QMdiSubWindow_QBaseFocusNextChild(QMdiSubWindow* self);
bool QMdiSubWindow_FocusPreviousChild(QMdiSubWindow* self);
void QMdiSubWindow_OnFocusPreviousChild(QMdiSubWindow* self, intptr_t slot);
bool QMdiSubWindow_QBaseFocusPreviousChild(QMdiSubWindow* self);
QObject* QMdiSubWindow_Sender(const QMdiSubWindow* self);
void QMdiSubWindow_OnSender(const QMdiSubWindow* self, intptr_t slot);
QObject* QMdiSubWindow_QBaseSender(const QMdiSubWindow* self);
int QMdiSubWindow_SenderSignalIndex(const QMdiSubWindow* self);
void QMdiSubWindow_OnSenderSignalIndex(const QMdiSubWindow* self, intptr_t slot);
int QMdiSubWindow_QBaseSenderSignalIndex(const QMdiSubWindow* self);
int QMdiSubWindow_Receivers(const QMdiSubWindow* self, const char* signal);
void QMdiSubWindow_OnReceivers(const QMdiSubWindow* self, intptr_t slot);
int QMdiSubWindow_QBaseReceivers(const QMdiSubWindow* self, const char* signal);
bool QMdiSubWindow_IsSignalConnected(const QMdiSubWindow* self, const QMetaMethod* signal);
void QMdiSubWindow_OnIsSignalConnected(const QMdiSubWindow* self, intptr_t slot);
bool QMdiSubWindow_QBaseIsSignalConnected(const QMdiSubWindow* self, const QMetaMethod* signal);
double QMdiSubWindow_GetDecodedMetricF(const QMdiSubWindow* self, int metricA, int metricB);
void QMdiSubWindow_OnGetDecodedMetricF(const QMdiSubWindow* self, intptr_t slot);
double QMdiSubWindow_QBaseGetDecodedMetricF(const QMdiSubWindow* self, int metricA, int metricB);
void QMdiSubWindow_Delete(QMdiSubWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
