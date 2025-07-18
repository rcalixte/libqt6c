#pragma once
#ifndef SRCC_LIBQMDIAREA_HPP
#define SRCC_LIBQMDIAREA_HPP

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
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QBrush QBrush;
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
typedef struct QMargins QMargins;
typedef struct QMdiArea QMdiArea;
typedef struct QMdiSubWindow QMdiSubWindow;
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

QMdiArea* QMdiArea_new(QWidget* parent);
QMdiArea* QMdiArea_new2();
QMetaObject* QMdiArea_MetaObject(const QMdiArea* self);
void* QMdiArea_Metacast(QMdiArea* self, const char* param1);
int QMdiArea_Metacall(QMdiArea* self, int param1, int param2, void** param3);
void QMdiArea_OnMetacall(QMdiArea* self, intptr_t slot);
int QMdiArea_QBaseMetacall(QMdiArea* self, int param1, int param2, void** param3);
libqt_string QMdiArea_Tr(const char* s);
QSize* QMdiArea_SizeHint(const QMdiArea* self);
void QMdiArea_OnSizeHint(const QMdiArea* self, intptr_t slot);
QSize* QMdiArea_QBaseSizeHint(const QMdiArea* self);
QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self);
void QMdiArea_OnMinimumSizeHint(const QMdiArea* self, intptr_t slot);
QSize* QMdiArea_QBaseMinimumSizeHint(const QMdiArea* self);
QMdiSubWindow* QMdiArea_CurrentSubWindow(const QMdiArea* self);
QMdiSubWindow* QMdiArea_ActiveSubWindow(const QMdiArea* self);
libqt_list /* of QMdiSubWindow* */ QMdiArea_SubWindowList(const QMdiArea* self);
QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget);
void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget);
QBrush* QMdiArea_Background(const QMdiArea* self);
void QMdiArea_SetBackground(QMdiArea* self, const QBrush* background);
int QMdiArea_ActivationOrder(const QMdiArea* self);
void QMdiArea_SetActivationOrder(QMdiArea* self, int order);
void QMdiArea_SetOption(QMdiArea* self, int option);
bool QMdiArea_TestOption(const QMdiArea* self, int opton);
void QMdiArea_SetViewMode(QMdiArea* self, int mode);
int QMdiArea_ViewMode(const QMdiArea* self);
bool QMdiArea_DocumentMode(const QMdiArea* self);
void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled);
void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable);
bool QMdiArea_TabsClosable(const QMdiArea* self);
void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable);
bool QMdiArea_TabsMovable(const QMdiArea* self);
void QMdiArea_SetTabShape(QMdiArea* self, int shape);
int QMdiArea_TabShape(const QMdiArea* self);
void QMdiArea_SetTabPosition(QMdiArea* self, int position);
int QMdiArea_TabPosition(const QMdiArea* self);
void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1);
void QMdiArea_Connect_SubWindowActivated(QMdiArea* self, intptr_t slot);
void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window);
void QMdiArea_TileSubWindows(QMdiArea* self);
void QMdiArea_CascadeSubWindows(QMdiArea* self);
void QMdiArea_CloseActiveSubWindow(QMdiArea* self);
void QMdiArea_CloseAllSubWindows(QMdiArea* self);
void QMdiArea_ActivateNextSubWindow(QMdiArea* self);
void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self);
void QMdiArea_SetupViewport(QMdiArea* self, QWidget* viewport);
void QMdiArea_OnSetupViewport(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseSetupViewport(QMdiArea* self, QWidget* viewport);
bool QMdiArea_Event(QMdiArea* self, QEvent* event);
void QMdiArea_OnEvent(QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseEvent(QMdiArea* self, QEvent* event);
bool QMdiArea_EventFilter(QMdiArea* self, QObject* object, QEvent* event);
void QMdiArea_OnEventFilter(QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseEventFilter(QMdiArea* self, QObject* object, QEvent* event);
void QMdiArea_PaintEvent(QMdiArea* self, QPaintEvent* paintEvent);
void QMdiArea_OnPaintEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBasePaintEvent(QMdiArea* self, QPaintEvent* paintEvent);
void QMdiArea_ChildEvent(QMdiArea* self, QChildEvent* childEvent);
void QMdiArea_OnChildEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseChildEvent(QMdiArea* self, QChildEvent* childEvent);
void QMdiArea_ResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
void QMdiArea_OnResizeEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
void QMdiArea_TimerEvent(QMdiArea* self, QTimerEvent* timerEvent);
void QMdiArea_OnTimerEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseTimerEvent(QMdiArea* self, QTimerEvent* timerEvent);
void QMdiArea_ShowEvent(QMdiArea* self, QShowEvent* showEvent);
void QMdiArea_OnShowEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseShowEvent(QMdiArea* self, QShowEvent* showEvent);
bool QMdiArea_ViewportEvent(QMdiArea* self, QEvent* event);
void QMdiArea_OnViewportEvent(QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseViewportEvent(QMdiArea* self, QEvent* event);
void QMdiArea_ScrollContentsBy(QMdiArea* self, int dx, int dy);
void QMdiArea_OnScrollContentsBy(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseScrollContentsBy(QMdiArea* self, int dx, int dy);
libqt_string QMdiArea_Tr2(const char* s, const char* c);
libqt_string QMdiArea_Tr3(const char* s, const char* c, int n);
libqt_list /* of QMdiSubWindow* */ QMdiArea_SubWindowList1(const QMdiArea* self, int order);
QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags);
void QMdiArea_SetOption2(QMdiArea* self, int option, bool on);
void QMdiArea_MousePressEvent(QMdiArea* self, QMouseEvent* param1);
void QMdiArea_OnMousePressEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseMousePressEvent(QMdiArea* self, QMouseEvent* param1);
void QMdiArea_MouseReleaseEvent(QMdiArea* self, QMouseEvent* param1);
void QMdiArea_OnMouseReleaseEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseMouseReleaseEvent(QMdiArea* self, QMouseEvent* param1);
void QMdiArea_MouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1);
void QMdiArea_OnMouseDoubleClickEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseMouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1);
void QMdiArea_MouseMoveEvent(QMdiArea* self, QMouseEvent* param1);
void QMdiArea_OnMouseMoveEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseMouseMoveEvent(QMdiArea* self, QMouseEvent* param1);
void QMdiArea_WheelEvent(QMdiArea* self, QWheelEvent* param1);
void QMdiArea_OnWheelEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseWheelEvent(QMdiArea* self, QWheelEvent* param1);
void QMdiArea_ContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1);
void QMdiArea_OnContextMenuEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1);
void QMdiArea_DragEnterEvent(QMdiArea* self, QDragEnterEvent* param1);
void QMdiArea_OnDragEnterEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseDragEnterEvent(QMdiArea* self, QDragEnterEvent* param1);
void QMdiArea_DragMoveEvent(QMdiArea* self, QDragMoveEvent* param1);
void QMdiArea_OnDragMoveEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseDragMoveEvent(QMdiArea* self, QDragMoveEvent* param1);
void QMdiArea_DragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1);
void QMdiArea_OnDragLeaveEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseDragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1);
void QMdiArea_DropEvent(QMdiArea* self, QDropEvent* param1);
void QMdiArea_OnDropEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseDropEvent(QMdiArea* self, QDropEvent* param1);
void QMdiArea_KeyPressEvent(QMdiArea* self, QKeyEvent* param1);
void QMdiArea_OnKeyPressEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseKeyPressEvent(QMdiArea* self, QKeyEvent* param1);
QSize* QMdiArea_ViewportSizeHint(const QMdiArea* self);
void QMdiArea_OnViewportSizeHint(const QMdiArea* self, intptr_t slot);
QSize* QMdiArea_QBaseViewportSizeHint(const QMdiArea* self);
void QMdiArea_ChangeEvent(QMdiArea* self, QEvent* param1);
void QMdiArea_OnChangeEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseChangeEvent(QMdiArea* self, QEvent* param1);
void QMdiArea_InitStyleOption(const QMdiArea* self, QStyleOptionFrame* option);
void QMdiArea_OnInitStyleOption(const QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseInitStyleOption(const QMdiArea* self, QStyleOptionFrame* option);
int QMdiArea_DevType(const QMdiArea* self);
void QMdiArea_OnDevType(const QMdiArea* self, intptr_t slot);
int QMdiArea_QBaseDevType(const QMdiArea* self);
void QMdiArea_SetVisible(QMdiArea* self, bool visible);
void QMdiArea_OnSetVisible(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseSetVisible(QMdiArea* self, bool visible);
int QMdiArea_HeightForWidth(const QMdiArea* self, int param1);
void QMdiArea_OnHeightForWidth(const QMdiArea* self, intptr_t slot);
int QMdiArea_QBaseHeightForWidth(const QMdiArea* self, int param1);
bool QMdiArea_HasHeightForWidth(const QMdiArea* self);
void QMdiArea_OnHasHeightForWidth(const QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseHasHeightForWidth(const QMdiArea* self);
QPaintEngine* QMdiArea_PaintEngine(const QMdiArea* self);
void QMdiArea_OnPaintEngine(const QMdiArea* self, intptr_t slot);
QPaintEngine* QMdiArea_QBasePaintEngine(const QMdiArea* self);
void QMdiArea_KeyReleaseEvent(QMdiArea* self, QKeyEvent* event);
void QMdiArea_OnKeyReleaseEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseKeyReleaseEvent(QMdiArea* self, QKeyEvent* event);
void QMdiArea_FocusInEvent(QMdiArea* self, QFocusEvent* event);
void QMdiArea_OnFocusInEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseFocusInEvent(QMdiArea* self, QFocusEvent* event);
void QMdiArea_FocusOutEvent(QMdiArea* self, QFocusEvent* event);
void QMdiArea_OnFocusOutEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseFocusOutEvent(QMdiArea* self, QFocusEvent* event);
void QMdiArea_EnterEvent(QMdiArea* self, QEnterEvent* event);
void QMdiArea_OnEnterEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseEnterEvent(QMdiArea* self, QEnterEvent* event);
void QMdiArea_LeaveEvent(QMdiArea* self, QEvent* event);
void QMdiArea_OnLeaveEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseLeaveEvent(QMdiArea* self, QEvent* event);
void QMdiArea_MoveEvent(QMdiArea* self, QMoveEvent* event);
void QMdiArea_OnMoveEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseMoveEvent(QMdiArea* self, QMoveEvent* event);
void QMdiArea_CloseEvent(QMdiArea* self, QCloseEvent* event);
void QMdiArea_OnCloseEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseCloseEvent(QMdiArea* self, QCloseEvent* event);
void QMdiArea_TabletEvent(QMdiArea* self, QTabletEvent* event);
void QMdiArea_OnTabletEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseTabletEvent(QMdiArea* self, QTabletEvent* event);
void QMdiArea_ActionEvent(QMdiArea* self, QActionEvent* event);
void QMdiArea_OnActionEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseActionEvent(QMdiArea* self, QActionEvent* event);
void QMdiArea_HideEvent(QMdiArea* self, QHideEvent* event);
void QMdiArea_OnHideEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseHideEvent(QMdiArea* self, QHideEvent* event);
bool QMdiArea_NativeEvent(QMdiArea* self, const libqt_string eventType, void* message, intptr_t* result);
void QMdiArea_OnNativeEvent(QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseNativeEvent(QMdiArea* self, const libqt_string eventType, void* message, intptr_t* result);
int QMdiArea_Metric(const QMdiArea* self, int param1);
void QMdiArea_OnMetric(const QMdiArea* self, intptr_t slot);
int QMdiArea_QBaseMetric(const QMdiArea* self, int param1);
void QMdiArea_InitPainter(const QMdiArea* self, QPainter* painter);
void QMdiArea_OnInitPainter(const QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseInitPainter(const QMdiArea* self, QPainter* painter);
QPaintDevice* QMdiArea_Redirected(const QMdiArea* self, QPoint* offset);
void QMdiArea_OnRedirected(const QMdiArea* self, intptr_t slot);
QPaintDevice* QMdiArea_QBaseRedirected(const QMdiArea* self, QPoint* offset);
QPainter* QMdiArea_SharedPainter(const QMdiArea* self);
void QMdiArea_OnSharedPainter(const QMdiArea* self, intptr_t slot);
QPainter* QMdiArea_QBaseSharedPainter(const QMdiArea* self);
void QMdiArea_InputMethodEvent(QMdiArea* self, QInputMethodEvent* param1);
void QMdiArea_OnInputMethodEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseInputMethodEvent(QMdiArea* self, QInputMethodEvent* param1);
QVariant* QMdiArea_InputMethodQuery(const QMdiArea* self, int param1);
void QMdiArea_OnInputMethodQuery(const QMdiArea* self, intptr_t slot);
QVariant* QMdiArea_QBaseInputMethodQuery(const QMdiArea* self, int param1);
bool QMdiArea_FocusNextPrevChild(QMdiArea* self, bool next);
void QMdiArea_OnFocusNextPrevChild(QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseFocusNextPrevChild(QMdiArea* self, bool next);
void QMdiArea_CustomEvent(QMdiArea* self, QEvent* event);
void QMdiArea_OnCustomEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseCustomEvent(QMdiArea* self, QEvent* event);
void QMdiArea_ConnectNotify(QMdiArea* self, const QMetaMethod* signal);
void QMdiArea_OnConnectNotify(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseConnectNotify(QMdiArea* self, const QMetaMethod* signal);
void QMdiArea_DisconnectNotify(QMdiArea* self, const QMetaMethod* signal);
void QMdiArea_OnDisconnectNotify(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseDisconnectNotify(QMdiArea* self, const QMetaMethod* signal);
void QMdiArea_SetViewportMargins(QMdiArea* self, int left, int top, int right, int bottom);
void QMdiArea_OnSetViewportMargins(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseSetViewportMargins(QMdiArea* self, int left, int top, int right, int bottom);
QMargins* QMdiArea_ViewportMargins(const QMdiArea* self);
void QMdiArea_OnViewportMargins(const QMdiArea* self, intptr_t slot);
QMargins* QMdiArea_QBaseViewportMargins(const QMdiArea* self);
void QMdiArea_DrawFrame(QMdiArea* self, QPainter* param1);
void QMdiArea_OnDrawFrame(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseDrawFrame(QMdiArea* self, QPainter* param1);
void QMdiArea_UpdateMicroFocus(QMdiArea* self);
void QMdiArea_OnUpdateMicroFocus(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseUpdateMicroFocus(QMdiArea* self);
void QMdiArea_Create(QMdiArea* self);
void QMdiArea_OnCreate(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseCreate(QMdiArea* self);
void QMdiArea_Destroy(QMdiArea* self);
void QMdiArea_OnDestroy(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseDestroy(QMdiArea* self);
bool QMdiArea_FocusNextChild(QMdiArea* self);
void QMdiArea_OnFocusNextChild(QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseFocusNextChild(QMdiArea* self);
bool QMdiArea_FocusPreviousChild(QMdiArea* self);
void QMdiArea_OnFocusPreviousChild(QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseFocusPreviousChild(QMdiArea* self);
QObject* QMdiArea_Sender(const QMdiArea* self);
void QMdiArea_OnSender(const QMdiArea* self, intptr_t slot);
QObject* QMdiArea_QBaseSender(const QMdiArea* self);
int QMdiArea_SenderSignalIndex(const QMdiArea* self);
void QMdiArea_OnSenderSignalIndex(const QMdiArea* self, intptr_t slot);
int QMdiArea_QBaseSenderSignalIndex(const QMdiArea* self);
int QMdiArea_Receivers(const QMdiArea* self, const char* signal);
void QMdiArea_OnReceivers(const QMdiArea* self, intptr_t slot);
int QMdiArea_QBaseReceivers(const QMdiArea* self, const char* signal);
bool QMdiArea_IsSignalConnected(const QMdiArea* self, const QMetaMethod* signal);
void QMdiArea_OnIsSignalConnected(const QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseIsSignalConnected(const QMdiArea* self, const QMetaMethod* signal);
double QMdiArea_GetDecodedMetricF(const QMdiArea* self, int metricA, int metricB);
void QMdiArea_OnGetDecodedMetricF(const QMdiArea* self, intptr_t slot);
double QMdiArea_QBaseGetDecodedMetricF(const QMdiArea* self, int metricA, int metricB);
void QMdiArea_Delete(QMdiArea* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
