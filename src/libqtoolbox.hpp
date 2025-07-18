#pragma once
#ifndef SRCC_LIBQTOOLBOX_HPP
#define SRCC_LIBQTOOLBOX_HPP

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
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
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
typedef struct QToolBox QToolBox;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QToolBox* QToolBox_new(QWidget* parent);
QToolBox* QToolBox_new2();
QToolBox* QToolBox_new3(QWidget* parent, int f);
QMetaObject* QToolBox_MetaObject(const QToolBox* self);
void* QToolBox_Metacast(QToolBox* self, const char* param1);
int QToolBox_Metacall(QToolBox* self, int param1, int param2, void** param3);
void QToolBox_OnMetacall(QToolBox* self, intptr_t slot);
int QToolBox_QBaseMetacall(QToolBox* self, int param1, int param2, void** param3);
libqt_string QToolBox_Tr(const char* s);
int QToolBox_AddItem(QToolBox* self, QWidget* widget, const libqt_string text);
int QToolBox_AddItem2(QToolBox* self, QWidget* widget, const QIcon* icon, const libqt_string text);
int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, const libqt_string text);
int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, const QIcon* icon, const libqt_string text);
void QToolBox_RemoveItem(QToolBox* self, int index);
void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled);
bool QToolBox_IsItemEnabled(const QToolBox* self, int index);
void QToolBox_SetItemText(QToolBox* self, int index, const libqt_string text);
libqt_string QToolBox_ItemText(const QToolBox* self, int index);
void QToolBox_SetItemIcon(QToolBox* self, int index, const QIcon* icon);
QIcon* QToolBox_ItemIcon(const QToolBox* self, int index);
void QToolBox_SetItemToolTip(QToolBox* self, int index, const libqt_string toolTip);
libqt_string QToolBox_ItemToolTip(const QToolBox* self, int index);
int QToolBox_CurrentIndex(const QToolBox* self);
QWidget* QToolBox_CurrentWidget(const QToolBox* self);
QWidget* QToolBox_Widget(const QToolBox* self, int index);
int QToolBox_IndexOf(const QToolBox* self, const QWidget* widget);
int QToolBox_Count(const QToolBox* self);
void QToolBox_SetCurrentIndex(QToolBox* self, int index);
void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget);
void QToolBox_CurrentChanged(QToolBox* self, int index);
void QToolBox_Connect_CurrentChanged(QToolBox* self, intptr_t slot);
bool QToolBox_Event(QToolBox* self, QEvent* e);
void QToolBox_OnEvent(QToolBox* self, intptr_t slot);
bool QToolBox_QBaseEvent(QToolBox* self, QEvent* e);
void QToolBox_ItemInserted(QToolBox* self, int index);
void QToolBox_OnItemInserted(QToolBox* self, intptr_t slot);
void QToolBox_QBaseItemInserted(QToolBox* self, int index);
void QToolBox_ItemRemoved(QToolBox* self, int index);
void QToolBox_OnItemRemoved(QToolBox* self, intptr_t slot);
void QToolBox_QBaseItemRemoved(QToolBox* self, int index);
void QToolBox_ShowEvent(QToolBox* self, QShowEvent* e);
void QToolBox_OnShowEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseShowEvent(QToolBox* self, QShowEvent* e);
void QToolBox_ChangeEvent(QToolBox* self, QEvent* param1);
void QToolBox_OnChangeEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseChangeEvent(QToolBox* self, QEvent* param1);
libqt_string QToolBox_Tr2(const char* s, const char* c);
libqt_string QToolBox_Tr3(const char* s, const char* c, int n);
QSize* QToolBox_SizeHint(const QToolBox* self);
void QToolBox_OnSizeHint(const QToolBox* self, intptr_t slot);
QSize* QToolBox_QBaseSizeHint(const QToolBox* self);
void QToolBox_PaintEvent(QToolBox* self, QPaintEvent* param1);
void QToolBox_OnPaintEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBasePaintEvent(QToolBox* self, QPaintEvent* param1);
void QToolBox_InitStyleOption(const QToolBox* self, QStyleOptionFrame* option);
void QToolBox_OnInitStyleOption(const QToolBox* self, intptr_t slot);
void QToolBox_QBaseInitStyleOption(const QToolBox* self, QStyleOptionFrame* option);
int QToolBox_DevType(const QToolBox* self);
void QToolBox_OnDevType(const QToolBox* self, intptr_t slot);
int QToolBox_QBaseDevType(const QToolBox* self);
void QToolBox_SetVisible(QToolBox* self, bool visible);
void QToolBox_OnSetVisible(QToolBox* self, intptr_t slot);
void QToolBox_QBaseSetVisible(QToolBox* self, bool visible);
QSize* QToolBox_MinimumSizeHint(const QToolBox* self);
void QToolBox_OnMinimumSizeHint(const QToolBox* self, intptr_t slot);
QSize* QToolBox_QBaseMinimumSizeHint(const QToolBox* self);
int QToolBox_HeightForWidth(const QToolBox* self, int param1);
void QToolBox_OnHeightForWidth(const QToolBox* self, intptr_t slot);
int QToolBox_QBaseHeightForWidth(const QToolBox* self, int param1);
bool QToolBox_HasHeightForWidth(const QToolBox* self);
void QToolBox_OnHasHeightForWidth(const QToolBox* self, intptr_t slot);
bool QToolBox_QBaseHasHeightForWidth(const QToolBox* self);
QPaintEngine* QToolBox_PaintEngine(const QToolBox* self);
void QToolBox_OnPaintEngine(const QToolBox* self, intptr_t slot);
QPaintEngine* QToolBox_QBasePaintEngine(const QToolBox* self);
void QToolBox_MousePressEvent(QToolBox* self, QMouseEvent* event);
void QToolBox_OnMousePressEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseMousePressEvent(QToolBox* self, QMouseEvent* event);
void QToolBox_MouseReleaseEvent(QToolBox* self, QMouseEvent* event);
void QToolBox_OnMouseReleaseEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseMouseReleaseEvent(QToolBox* self, QMouseEvent* event);
void QToolBox_MouseDoubleClickEvent(QToolBox* self, QMouseEvent* event);
void QToolBox_OnMouseDoubleClickEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseMouseDoubleClickEvent(QToolBox* self, QMouseEvent* event);
void QToolBox_MouseMoveEvent(QToolBox* self, QMouseEvent* event);
void QToolBox_OnMouseMoveEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseMouseMoveEvent(QToolBox* self, QMouseEvent* event);
void QToolBox_WheelEvent(QToolBox* self, QWheelEvent* event);
void QToolBox_OnWheelEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseWheelEvent(QToolBox* self, QWheelEvent* event);
void QToolBox_KeyPressEvent(QToolBox* self, QKeyEvent* event);
void QToolBox_OnKeyPressEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseKeyPressEvent(QToolBox* self, QKeyEvent* event);
void QToolBox_KeyReleaseEvent(QToolBox* self, QKeyEvent* event);
void QToolBox_OnKeyReleaseEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseKeyReleaseEvent(QToolBox* self, QKeyEvent* event);
void QToolBox_FocusInEvent(QToolBox* self, QFocusEvent* event);
void QToolBox_OnFocusInEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseFocusInEvent(QToolBox* self, QFocusEvent* event);
void QToolBox_FocusOutEvent(QToolBox* self, QFocusEvent* event);
void QToolBox_OnFocusOutEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseFocusOutEvent(QToolBox* self, QFocusEvent* event);
void QToolBox_EnterEvent(QToolBox* self, QEnterEvent* event);
void QToolBox_OnEnterEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseEnterEvent(QToolBox* self, QEnterEvent* event);
void QToolBox_LeaveEvent(QToolBox* self, QEvent* event);
void QToolBox_OnLeaveEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseLeaveEvent(QToolBox* self, QEvent* event);
void QToolBox_MoveEvent(QToolBox* self, QMoveEvent* event);
void QToolBox_OnMoveEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseMoveEvent(QToolBox* self, QMoveEvent* event);
void QToolBox_ResizeEvent(QToolBox* self, QResizeEvent* event);
void QToolBox_OnResizeEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseResizeEvent(QToolBox* self, QResizeEvent* event);
void QToolBox_CloseEvent(QToolBox* self, QCloseEvent* event);
void QToolBox_OnCloseEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseCloseEvent(QToolBox* self, QCloseEvent* event);
void QToolBox_ContextMenuEvent(QToolBox* self, QContextMenuEvent* event);
void QToolBox_OnContextMenuEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseContextMenuEvent(QToolBox* self, QContextMenuEvent* event);
void QToolBox_TabletEvent(QToolBox* self, QTabletEvent* event);
void QToolBox_OnTabletEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseTabletEvent(QToolBox* self, QTabletEvent* event);
void QToolBox_ActionEvent(QToolBox* self, QActionEvent* event);
void QToolBox_OnActionEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseActionEvent(QToolBox* self, QActionEvent* event);
void QToolBox_DragEnterEvent(QToolBox* self, QDragEnterEvent* event);
void QToolBox_OnDragEnterEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseDragEnterEvent(QToolBox* self, QDragEnterEvent* event);
void QToolBox_DragMoveEvent(QToolBox* self, QDragMoveEvent* event);
void QToolBox_OnDragMoveEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseDragMoveEvent(QToolBox* self, QDragMoveEvent* event);
void QToolBox_DragLeaveEvent(QToolBox* self, QDragLeaveEvent* event);
void QToolBox_OnDragLeaveEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseDragLeaveEvent(QToolBox* self, QDragLeaveEvent* event);
void QToolBox_DropEvent(QToolBox* self, QDropEvent* event);
void QToolBox_OnDropEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseDropEvent(QToolBox* self, QDropEvent* event);
void QToolBox_HideEvent(QToolBox* self, QHideEvent* event);
void QToolBox_OnHideEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseHideEvent(QToolBox* self, QHideEvent* event);
bool QToolBox_NativeEvent(QToolBox* self, const libqt_string eventType, void* message, intptr_t* result);
void QToolBox_OnNativeEvent(QToolBox* self, intptr_t slot);
bool QToolBox_QBaseNativeEvent(QToolBox* self, const libqt_string eventType, void* message, intptr_t* result);
int QToolBox_Metric(const QToolBox* self, int param1);
void QToolBox_OnMetric(const QToolBox* self, intptr_t slot);
int QToolBox_QBaseMetric(const QToolBox* self, int param1);
void QToolBox_InitPainter(const QToolBox* self, QPainter* painter);
void QToolBox_OnInitPainter(const QToolBox* self, intptr_t slot);
void QToolBox_QBaseInitPainter(const QToolBox* self, QPainter* painter);
QPaintDevice* QToolBox_Redirected(const QToolBox* self, QPoint* offset);
void QToolBox_OnRedirected(const QToolBox* self, intptr_t slot);
QPaintDevice* QToolBox_QBaseRedirected(const QToolBox* self, QPoint* offset);
QPainter* QToolBox_SharedPainter(const QToolBox* self);
void QToolBox_OnSharedPainter(const QToolBox* self, intptr_t slot);
QPainter* QToolBox_QBaseSharedPainter(const QToolBox* self);
void QToolBox_InputMethodEvent(QToolBox* self, QInputMethodEvent* param1);
void QToolBox_OnInputMethodEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseInputMethodEvent(QToolBox* self, QInputMethodEvent* param1);
QVariant* QToolBox_InputMethodQuery(const QToolBox* self, int param1);
void QToolBox_OnInputMethodQuery(const QToolBox* self, intptr_t slot);
QVariant* QToolBox_QBaseInputMethodQuery(const QToolBox* self, int param1);
bool QToolBox_FocusNextPrevChild(QToolBox* self, bool next);
void QToolBox_OnFocusNextPrevChild(QToolBox* self, intptr_t slot);
bool QToolBox_QBaseFocusNextPrevChild(QToolBox* self, bool next);
bool QToolBox_EventFilter(QToolBox* self, QObject* watched, QEvent* event);
void QToolBox_OnEventFilter(QToolBox* self, intptr_t slot);
bool QToolBox_QBaseEventFilter(QToolBox* self, QObject* watched, QEvent* event);
void QToolBox_TimerEvent(QToolBox* self, QTimerEvent* event);
void QToolBox_OnTimerEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseTimerEvent(QToolBox* self, QTimerEvent* event);
void QToolBox_ChildEvent(QToolBox* self, QChildEvent* event);
void QToolBox_OnChildEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseChildEvent(QToolBox* self, QChildEvent* event);
void QToolBox_CustomEvent(QToolBox* self, QEvent* event);
void QToolBox_OnCustomEvent(QToolBox* self, intptr_t slot);
void QToolBox_QBaseCustomEvent(QToolBox* self, QEvent* event);
void QToolBox_ConnectNotify(QToolBox* self, const QMetaMethod* signal);
void QToolBox_OnConnectNotify(QToolBox* self, intptr_t slot);
void QToolBox_QBaseConnectNotify(QToolBox* self, const QMetaMethod* signal);
void QToolBox_DisconnectNotify(QToolBox* self, const QMetaMethod* signal);
void QToolBox_OnDisconnectNotify(QToolBox* self, intptr_t slot);
void QToolBox_QBaseDisconnectNotify(QToolBox* self, const QMetaMethod* signal);
void QToolBox_DrawFrame(QToolBox* self, QPainter* param1);
void QToolBox_OnDrawFrame(QToolBox* self, intptr_t slot);
void QToolBox_QBaseDrawFrame(QToolBox* self, QPainter* param1);
void QToolBox_UpdateMicroFocus(QToolBox* self);
void QToolBox_OnUpdateMicroFocus(QToolBox* self, intptr_t slot);
void QToolBox_QBaseUpdateMicroFocus(QToolBox* self);
void QToolBox_Create(QToolBox* self);
void QToolBox_OnCreate(QToolBox* self, intptr_t slot);
void QToolBox_QBaseCreate(QToolBox* self);
void QToolBox_Destroy(QToolBox* self);
void QToolBox_OnDestroy(QToolBox* self, intptr_t slot);
void QToolBox_QBaseDestroy(QToolBox* self);
bool QToolBox_FocusNextChild(QToolBox* self);
void QToolBox_OnFocusNextChild(QToolBox* self, intptr_t slot);
bool QToolBox_QBaseFocusNextChild(QToolBox* self);
bool QToolBox_FocusPreviousChild(QToolBox* self);
void QToolBox_OnFocusPreviousChild(QToolBox* self, intptr_t slot);
bool QToolBox_QBaseFocusPreviousChild(QToolBox* self);
QObject* QToolBox_Sender(const QToolBox* self);
void QToolBox_OnSender(const QToolBox* self, intptr_t slot);
QObject* QToolBox_QBaseSender(const QToolBox* self);
int QToolBox_SenderSignalIndex(const QToolBox* self);
void QToolBox_OnSenderSignalIndex(const QToolBox* self, intptr_t slot);
int QToolBox_QBaseSenderSignalIndex(const QToolBox* self);
int QToolBox_Receivers(const QToolBox* self, const char* signal);
void QToolBox_OnReceivers(const QToolBox* self, intptr_t slot);
int QToolBox_QBaseReceivers(const QToolBox* self, const char* signal);
bool QToolBox_IsSignalConnected(const QToolBox* self, const QMetaMethod* signal);
void QToolBox_OnIsSignalConnected(const QToolBox* self, intptr_t slot);
bool QToolBox_QBaseIsSignalConnected(const QToolBox* self, const QMetaMethod* signal);
double QToolBox_GetDecodedMetricF(const QToolBox* self, int metricA, int metricB);
void QToolBox_OnGetDecodedMetricF(const QToolBox* self, intptr_t slot);
double QToolBox_QBaseGetDecodedMetricF(const QToolBox* self, int metricA, int metricB);
void QToolBox_Delete(QToolBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
