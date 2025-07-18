#pragma once
#ifndef SRCC_LIBQGROUPBOX_HPP
#define SRCC_LIBQGROUPBOX_HPP

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
typedef struct QGroupBox QGroupBox;
typedef struct QHideEvent QHideEvent;
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
typedef struct QStyleOptionGroupBox QStyleOptionGroupBox;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QGroupBox* QGroupBox_new(QWidget* parent);
QGroupBox* QGroupBox_new2();
QGroupBox* QGroupBox_new3(const libqt_string title);
QGroupBox* QGroupBox_new4(const libqt_string title, QWidget* parent);
QMetaObject* QGroupBox_MetaObject(const QGroupBox* self);
void* QGroupBox_Metacast(QGroupBox* self, const char* param1);
int QGroupBox_Metacall(QGroupBox* self, int param1, int param2, void** param3);
void QGroupBox_OnMetacall(QGroupBox* self, intptr_t slot);
int QGroupBox_QBaseMetacall(QGroupBox* self, int param1, int param2, void** param3);
libqt_string QGroupBox_Tr(const char* s);
libqt_string QGroupBox_Title(const QGroupBox* self);
void QGroupBox_SetTitle(QGroupBox* self, const libqt_string title);
int QGroupBox_Alignment(const QGroupBox* self);
void QGroupBox_SetAlignment(QGroupBox* self, int alignment);
QSize* QGroupBox_MinimumSizeHint(const QGroupBox* self);
void QGroupBox_OnMinimumSizeHint(const QGroupBox* self, intptr_t slot);
QSize* QGroupBox_QBaseMinimumSizeHint(const QGroupBox* self);
bool QGroupBox_IsFlat(const QGroupBox* self);
void QGroupBox_SetFlat(QGroupBox* self, bool flat);
bool QGroupBox_IsCheckable(const QGroupBox* self);
void QGroupBox_SetCheckable(QGroupBox* self, bool checkable);
bool QGroupBox_IsChecked(const QGroupBox* self);
void QGroupBox_SetChecked(QGroupBox* self, bool checked);
void QGroupBox_Clicked(QGroupBox* self);
void QGroupBox_Connect_Clicked(QGroupBox* self, intptr_t slot);
void QGroupBox_Toggled(QGroupBox* self, bool param1);
void QGroupBox_Connect_Toggled(QGroupBox* self, intptr_t slot);
bool QGroupBox_Event(QGroupBox* self, QEvent* event);
void QGroupBox_OnEvent(QGroupBox* self, intptr_t slot);
bool QGroupBox_QBaseEvent(QGroupBox* self, QEvent* event);
void QGroupBox_ChildEvent(QGroupBox* self, QChildEvent* event);
void QGroupBox_OnChildEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseChildEvent(QGroupBox* self, QChildEvent* event);
void QGroupBox_ResizeEvent(QGroupBox* self, QResizeEvent* event);
void QGroupBox_OnResizeEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseResizeEvent(QGroupBox* self, QResizeEvent* event);
void QGroupBox_PaintEvent(QGroupBox* self, QPaintEvent* event);
void QGroupBox_OnPaintEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBasePaintEvent(QGroupBox* self, QPaintEvent* event);
void QGroupBox_FocusInEvent(QGroupBox* self, QFocusEvent* event);
void QGroupBox_OnFocusInEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseFocusInEvent(QGroupBox* self, QFocusEvent* event);
void QGroupBox_ChangeEvent(QGroupBox* self, QEvent* event);
void QGroupBox_OnChangeEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseChangeEvent(QGroupBox* self, QEvent* event);
void QGroupBox_MousePressEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_OnMousePressEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseMousePressEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_MouseMoveEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_OnMouseMoveEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseMouseMoveEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_MouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_OnMouseReleaseEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseMouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_InitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option);
void QGroupBox_OnInitStyleOption(const QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseInitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option);
libqt_string QGroupBox_Tr2(const char* s, const char* c);
libqt_string QGroupBox_Tr3(const char* s, const char* c, int n);
void QGroupBox_Clicked1(QGroupBox* self, bool checked);
void QGroupBox_Connect_Clicked1(QGroupBox* self, intptr_t slot);
int QGroupBox_DevType(const QGroupBox* self);
void QGroupBox_OnDevType(const QGroupBox* self, intptr_t slot);
int QGroupBox_QBaseDevType(const QGroupBox* self);
void QGroupBox_SetVisible(QGroupBox* self, bool visible);
void QGroupBox_OnSetVisible(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseSetVisible(QGroupBox* self, bool visible);
QSize* QGroupBox_SizeHint(const QGroupBox* self);
void QGroupBox_OnSizeHint(const QGroupBox* self, intptr_t slot);
QSize* QGroupBox_QBaseSizeHint(const QGroupBox* self);
int QGroupBox_HeightForWidth(const QGroupBox* self, int param1);
void QGroupBox_OnHeightForWidth(const QGroupBox* self, intptr_t slot);
int QGroupBox_QBaseHeightForWidth(const QGroupBox* self, int param1);
bool QGroupBox_HasHeightForWidth(const QGroupBox* self);
void QGroupBox_OnHasHeightForWidth(const QGroupBox* self, intptr_t slot);
bool QGroupBox_QBaseHasHeightForWidth(const QGroupBox* self);
QPaintEngine* QGroupBox_PaintEngine(const QGroupBox* self);
void QGroupBox_OnPaintEngine(const QGroupBox* self, intptr_t slot);
QPaintEngine* QGroupBox_QBasePaintEngine(const QGroupBox* self);
void QGroupBox_MouseDoubleClickEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_OnMouseDoubleClickEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseMouseDoubleClickEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_WheelEvent(QGroupBox* self, QWheelEvent* event);
void QGroupBox_OnWheelEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseWheelEvent(QGroupBox* self, QWheelEvent* event);
void QGroupBox_KeyPressEvent(QGroupBox* self, QKeyEvent* event);
void QGroupBox_OnKeyPressEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseKeyPressEvent(QGroupBox* self, QKeyEvent* event);
void QGroupBox_KeyReleaseEvent(QGroupBox* self, QKeyEvent* event);
void QGroupBox_OnKeyReleaseEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseKeyReleaseEvent(QGroupBox* self, QKeyEvent* event);
void QGroupBox_FocusOutEvent(QGroupBox* self, QFocusEvent* event);
void QGroupBox_OnFocusOutEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseFocusOutEvent(QGroupBox* self, QFocusEvent* event);
void QGroupBox_EnterEvent(QGroupBox* self, QEnterEvent* event);
void QGroupBox_OnEnterEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseEnterEvent(QGroupBox* self, QEnterEvent* event);
void QGroupBox_LeaveEvent(QGroupBox* self, QEvent* event);
void QGroupBox_OnLeaveEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseLeaveEvent(QGroupBox* self, QEvent* event);
void QGroupBox_MoveEvent(QGroupBox* self, QMoveEvent* event);
void QGroupBox_OnMoveEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseMoveEvent(QGroupBox* self, QMoveEvent* event);
void QGroupBox_CloseEvent(QGroupBox* self, QCloseEvent* event);
void QGroupBox_OnCloseEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseCloseEvent(QGroupBox* self, QCloseEvent* event);
void QGroupBox_ContextMenuEvent(QGroupBox* self, QContextMenuEvent* event);
void QGroupBox_OnContextMenuEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseContextMenuEvent(QGroupBox* self, QContextMenuEvent* event);
void QGroupBox_TabletEvent(QGroupBox* self, QTabletEvent* event);
void QGroupBox_OnTabletEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseTabletEvent(QGroupBox* self, QTabletEvent* event);
void QGroupBox_ActionEvent(QGroupBox* self, QActionEvent* event);
void QGroupBox_OnActionEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseActionEvent(QGroupBox* self, QActionEvent* event);
void QGroupBox_DragEnterEvent(QGroupBox* self, QDragEnterEvent* event);
void QGroupBox_OnDragEnterEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseDragEnterEvent(QGroupBox* self, QDragEnterEvent* event);
void QGroupBox_DragMoveEvent(QGroupBox* self, QDragMoveEvent* event);
void QGroupBox_OnDragMoveEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseDragMoveEvent(QGroupBox* self, QDragMoveEvent* event);
void QGroupBox_DragLeaveEvent(QGroupBox* self, QDragLeaveEvent* event);
void QGroupBox_OnDragLeaveEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseDragLeaveEvent(QGroupBox* self, QDragLeaveEvent* event);
void QGroupBox_DropEvent(QGroupBox* self, QDropEvent* event);
void QGroupBox_OnDropEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseDropEvent(QGroupBox* self, QDropEvent* event);
void QGroupBox_ShowEvent(QGroupBox* self, QShowEvent* event);
void QGroupBox_OnShowEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseShowEvent(QGroupBox* self, QShowEvent* event);
void QGroupBox_HideEvent(QGroupBox* self, QHideEvent* event);
void QGroupBox_OnHideEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseHideEvent(QGroupBox* self, QHideEvent* event);
bool QGroupBox_NativeEvent(QGroupBox* self, const libqt_string eventType, void* message, intptr_t* result);
void QGroupBox_OnNativeEvent(QGroupBox* self, intptr_t slot);
bool QGroupBox_QBaseNativeEvent(QGroupBox* self, const libqt_string eventType, void* message, intptr_t* result);
int QGroupBox_Metric(const QGroupBox* self, int param1);
void QGroupBox_OnMetric(const QGroupBox* self, intptr_t slot);
int QGroupBox_QBaseMetric(const QGroupBox* self, int param1);
void QGroupBox_InitPainter(const QGroupBox* self, QPainter* painter);
void QGroupBox_OnInitPainter(const QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseInitPainter(const QGroupBox* self, QPainter* painter);
QPaintDevice* QGroupBox_Redirected(const QGroupBox* self, QPoint* offset);
void QGroupBox_OnRedirected(const QGroupBox* self, intptr_t slot);
QPaintDevice* QGroupBox_QBaseRedirected(const QGroupBox* self, QPoint* offset);
QPainter* QGroupBox_SharedPainter(const QGroupBox* self);
void QGroupBox_OnSharedPainter(const QGroupBox* self, intptr_t slot);
QPainter* QGroupBox_QBaseSharedPainter(const QGroupBox* self);
void QGroupBox_InputMethodEvent(QGroupBox* self, QInputMethodEvent* param1);
void QGroupBox_OnInputMethodEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseInputMethodEvent(QGroupBox* self, QInputMethodEvent* param1);
QVariant* QGroupBox_InputMethodQuery(const QGroupBox* self, int param1);
void QGroupBox_OnInputMethodQuery(const QGroupBox* self, intptr_t slot);
QVariant* QGroupBox_QBaseInputMethodQuery(const QGroupBox* self, int param1);
bool QGroupBox_FocusNextPrevChild(QGroupBox* self, bool next);
void QGroupBox_OnFocusNextPrevChild(QGroupBox* self, intptr_t slot);
bool QGroupBox_QBaseFocusNextPrevChild(QGroupBox* self, bool next);
bool QGroupBox_EventFilter(QGroupBox* self, QObject* watched, QEvent* event);
void QGroupBox_OnEventFilter(QGroupBox* self, intptr_t slot);
bool QGroupBox_QBaseEventFilter(QGroupBox* self, QObject* watched, QEvent* event);
void QGroupBox_TimerEvent(QGroupBox* self, QTimerEvent* event);
void QGroupBox_OnTimerEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseTimerEvent(QGroupBox* self, QTimerEvent* event);
void QGroupBox_CustomEvent(QGroupBox* self, QEvent* event);
void QGroupBox_OnCustomEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseCustomEvent(QGroupBox* self, QEvent* event);
void QGroupBox_ConnectNotify(QGroupBox* self, const QMetaMethod* signal);
void QGroupBox_OnConnectNotify(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseConnectNotify(QGroupBox* self, const QMetaMethod* signal);
void QGroupBox_DisconnectNotify(QGroupBox* self, const QMetaMethod* signal);
void QGroupBox_OnDisconnectNotify(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseDisconnectNotify(QGroupBox* self, const QMetaMethod* signal);
void QGroupBox_UpdateMicroFocus(QGroupBox* self);
void QGroupBox_OnUpdateMicroFocus(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseUpdateMicroFocus(QGroupBox* self);
void QGroupBox_Create(QGroupBox* self);
void QGroupBox_OnCreate(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseCreate(QGroupBox* self);
void QGroupBox_Destroy(QGroupBox* self);
void QGroupBox_OnDestroy(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseDestroy(QGroupBox* self);
bool QGroupBox_FocusNextChild(QGroupBox* self);
void QGroupBox_OnFocusNextChild(QGroupBox* self, intptr_t slot);
bool QGroupBox_QBaseFocusNextChild(QGroupBox* self);
bool QGroupBox_FocusPreviousChild(QGroupBox* self);
void QGroupBox_OnFocusPreviousChild(QGroupBox* self, intptr_t slot);
bool QGroupBox_QBaseFocusPreviousChild(QGroupBox* self);
QObject* QGroupBox_Sender(const QGroupBox* self);
void QGroupBox_OnSender(const QGroupBox* self, intptr_t slot);
QObject* QGroupBox_QBaseSender(const QGroupBox* self);
int QGroupBox_SenderSignalIndex(const QGroupBox* self);
void QGroupBox_OnSenderSignalIndex(const QGroupBox* self, intptr_t slot);
int QGroupBox_QBaseSenderSignalIndex(const QGroupBox* self);
int QGroupBox_Receivers(const QGroupBox* self, const char* signal);
void QGroupBox_OnReceivers(const QGroupBox* self, intptr_t slot);
int QGroupBox_QBaseReceivers(const QGroupBox* self, const char* signal);
bool QGroupBox_IsSignalConnected(const QGroupBox* self, const QMetaMethod* signal);
void QGroupBox_OnIsSignalConnected(const QGroupBox* self, intptr_t slot);
bool QGroupBox_QBaseIsSignalConnected(const QGroupBox* self, const QMetaMethod* signal);
double QGroupBox_GetDecodedMetricF(const QGroupBox* self, int metricA, int metricB);
void QGroupBox_OnGetDecodedMetricF(const QGroupBox* self, intptr_t slot);
double QGroupBox_QBaseGetDecodedMetricF(const QGroupBox* self, int metricA, int metricB);
void QGroupBox_Delete(QGroupBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
