#pragma once
#ifndef SRCC_LIBQDIALOG_HPP
#define SRCC_LIBQDIALOG_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
typedef struct QDialog QDialog;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLayout QLayout;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QDialog::DialogCode DialogCode; // C++ enum
#else
typedef int DialogCode; // C ABI enum
#endif

QDialog* QDialog_new(QWidget* parent);
QDialog* QDialog_new2();
QDialog* QDialog_new3(QWidget* parent, int f);
QMetaObject* QDialog_MetaObject(const QDialog* self);
void* QDialog_Metacast(QDialog* self, const char* param1);
int QDialog_Metacall(QDialog* self, int param1, int param2, void** param3);
void QDialog_OnMetacall(QDialog* self, intptr_t slot);
int QDialog_QBaseMetacall(QDialog* self, int param1, int param2, void** param3);
libqt_string QDialog_Tr(const char* s);
int QDialog_Result(const QDialog* self);
void QDialog_SetVisible(QDialog* self, bool visible);
void QDialog_OnSetVisible(QDialog* self, intptr_t slot);
void QDialog_QBaseSetVisible(QDialog* self, bool visible);
QSize* QDialog_SizeHint(const QDialog* self);
void QDialog_OnSizeHint(const QDialog* self, intptr_t slot);
QSize* QDialog_QBaseSizeHint(const QDialog* self);
QSize* QDialog_MinimumSizeHint(const QDialog* self);
void QDialog_OnMinimumSizeHint(const QDialog* self, intptr_t slot);
QSize* QDialog_QBaseMinimumSizeHint(const QDialog* self);
void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled);
bool QDialog_IsSizeGripEnabled(const QDialog* self);
void QDialog_SetModal(QDialog* self, bool modal);
void QDialog_SetResult(QDialog* self, int r);
void QDialog_Finished(QDialog* self, int result);
void QDialog_Connect_Finished(QDialog* self, intptr_t slot);
void QDialog_Accepted(QDialog* self);
void QDialog_Connect_Accepted(QDialog* self, intptr_t slot);
void QDialog_Rejected(QDialog* self);
void QDialog_Connect_Rejected(QDialog* self, intptr_t slot);
void QDialog_Open(QDialog* self);
void QDialog_OnOpen(QDialog* self, intptr_t slot);
void QDialog_QBaseOpen(QDialog* self);
int QDialog_Exec(QDialog* self);
void QDialog_OnExec(QDialog* self, intptr_t slot);
int QDialog_QBaseExec(QDialog* self);
void QDialog_Done(QDialog* self, int param1);
void QDialog_OnDone(QDialog* self, intptr_t slot);
void QDialog_QBaseDone(QDialog* self, int param1);
void QDialog_Accept(QDialog* self);
void QDialog_OnAccept(QDialog* self, intptr_t slot);
void QDialog_QBaseAccept(QDialog* self);
void QDialog_Reject(QDialog* self);
void QDialog_OnReject(QDialog* self, intptr_t slot);
void QDialog_QBaseReject(QDialog* self);
void QDialog_KeyPressEvent(QDialog* self, QKeyEvent* param1);
void QDialog_OnKeyPressEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseKeyPressEvent(QDialog* self, QKeyEvent* param1);
void QDialog_CloseEvent(QDialog* self, QCloseEvent* param1);
void QDialog_OnCloseEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseCloseEvent(QDialog* self, QCloseEvent* param1);
void QDialog_ShowEvent(QDialog* self, QShowEvent* param1);
void QDialog_OnShowEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseShowEvent(QDialog* self, QShowEvent* param1);
void QDialog_ResizeEvent(QDialog* self, QResizeEvent* param1);
void QDialog_OnResizeEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseResizeEvent(QDialog* self, QResizeEvent* param1);
void QDialog_ContextMenuEvent(QDialog* self, QContextMenuEvent* param1);
void QDialog_OnContextMenuEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseContextMenuEvent(QDialog* self, QContextMenuEvent* param1);
bool QDialog_EventFilter(QDialog* self, QObject* param1, QEvent* param2);
void QDialog_OnEventFilter(QDialog* self, intptr_t slot);
bool QDialog_QBaseEventFilter(QDialog* self, QObject* param1, QEvent* param2);
libqt_string QDialog_Tr2(const char* s, const char* c);
libqt_string QDialog_Tr3(const char* s, const char* c, int n);
int QDialog_DevType(const QDialog* self);
void QDialog_OnDevType(const QDialog* self, intptr_t slot);
int QDialog_QBaseDevType(const QDialog* self);
int QDialog_HeightForWidth(const QDialog* self, int param1);
void QDialog_OnHeightForWidth(const QDialog* self, intptr_t slot);
int QDialog_QBaseHeightForWidth(const QDialog* self, int param1);
bool QDialog_HasHeightForWidth(const QDialog* self);
void QDialog_OnHasHeightForWidth(const QDialog* self, intptr_t slot);
bool QDialog_QBaseHasHeightForWidth(const QDialog* self);
QPaintEngine* QDialog_PaintEngine(const QDialog* self);
void QDialog_OnPaintEngine(const QDialog* self, intptr_t slot);
QPaintEngine* QDialog_QBasePaintEngine(const QDialog* self);
bool QDialog_Event(QDialog* self, QEvent* event);
void QDialog_OnEvent(QDialog* self, intptr_t slot);
bool QDialog_QBaseEvent(QDialog* self, QEvent* event);
void QDialog_MousePressEvent(QDialog* self, QMouseEvent* event);
void QDialog_OnMousePressEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseMousePressEvent(QDialog* self, QMouseEvent* event);
void QDialog_MouseReleaseEvent(QDialog* self, QMouseEvent* event);
void QDialog_OnMouseReleaseEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseMouseReleaseEvent(QDialog* self, QMouseEvent* event);
void QDialog_MouseDoubleClickEvent(QDialog* self, QMouseEvent* event);
void QDialog_OnMouseDoubleClickEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseMouseDoubleClickEvent(QDialog* self, QMouseEvent* event);
void QDialog_MouseMoveEvent(QDialog* self, QMouseEvent* event);
void QDialog_OnMouseMoveEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseMouseMoveEvent(QDialog* self, QMouseEvent* event);
void QDialog_WheelEvent(QDialog* self, QWheelEvent* event);
void QDialog_OnWheelEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseWheelEvent(QDialog* self, QWheelEvent* event);
void QDialog_KeyReleaseEvent(QDialog* self, QKeyEvent* event);
void QDialog_OnKeyReleaseEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseKeyReleaseEvent(QDialog* self, QKeyEvent* event);
void QDialog_FocusInEvent(QDialog* self, QFocusEvent* event);
void QDialog_OnFocusInEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseFocusInEvent(QDialog* self, QFocusEvent* event);
void QDialog_FocusOutEvent(QDialog* self, QFocusEvent* event);
void QDialog_OnFocusOutEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseFocusOutEvent(QDialog* self, QFocusEvent* event);
void QDialog_EnterEvent(QDialog* self, QEnterEvent* event);
void QDialog_OnEnterEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseEnterEvent(QDialog* self, QEnterEvent* event);
void QDialog_LeaveEvent(QDialog* self, QEvent* event);
void QDialog_OnLeaveEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseLeaveEvent(QDialog* self, QEvent* event);
void QDialog_PaintEvent(QDialog* self, QPaintEvent* event);
void QDialog_OnPaintEvent(QDialog* self, intptr_t slot);
void QDialog_QBasePaintEvent(QDialog* self, QPaintEvent* event);
void QDialog_MoveEvent(QDialog* self, QMoveEvent* event);
void QDialog_OnMoveEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseMoveEvent(QDialog* self, QMoveEvent* event);
void QDialog_TabletEvent(QDialog* self, QTabletEvent* event);
void QDialog_OnTabletEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseTabletEvent(QDialog* self, QTabletEvent* event);
void QDialog_ActionEvent(QDialog* self, QActionEvent* event);
void QDialog_OnActionEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseActionEvent(QDialog* self, QActionEvent* event);
void QDialog_DragEnterEvent(QDialog* self, QDragEnterEvent* event);
void QDialog_OnDragEnterEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseDragEnterEvent(QDialog* self, QDragEnterEvent* event);
void QDialog_DragMoveEvent(QDialog* self, QDragMoveEvent* event);
void QDialog_OnDragMoveEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseDragMoveEvent(QDialog* self, QDragMoveEvent* event);
void QDialog_DragLeaveEvent(QDialog* self, QDragLeaveEvent* event);
void QDialog_OnDragLeaveEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseDragLeaveEvent(QDialog* self, QDragLeaveEvent* event);
void QDialog_DropEvent(QDialog* self, QDropEvent* event);
void QDialog_OnDropEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseDropEvent(QDialog* self, QDropEvent* event);
void QDialog_HideEvent(QDialog* self, QHideEvent* event);
void QDialog_OnHideEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseHideEvent(QDialog* self, QHideEvent* event);
bool QDialog_NativeEvent(QDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QDialog_OnNativeEvent(QDialog* self, intptr_t slot);
bool QDialog_QBaseNativeEvent(QDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QDialog_ChangeEvent(QDialog* self, QEvent* param1);
void QDialog_OnChangeEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseChangeEvent(QDialog* self, QEvent* param1);
void QDialog_InputMethodEvent(QDialog* self, QInputMethodEvent* param1);
void QDialog_OnInputMethodEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseInputMethodEvent(QDialog* self, QInputMethodEvent* param1);
QVariant* QDialog_InputMethodQuery(const QDialog* self, int param1);
void QDialog_OnInputMethodQuery(const QDialog* self, intptr_t slot);
QVariant* QDialog_QBaseInputMethodQuery(const QDialog* self, int param1);
bool QDialog_FocusNextPrevChild(QDialog* self, bool next);
void QDialog_OnFocusNextPrevChild(QDialog* self, intptr_t slot);
bool QDialog_QBaseFocusNextPrevChild(QDialog* self, bool next);
void QDialog_TimerEvent(QDialog* self, QTimerEvent* event);
void QDialog_OnTimerEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseTimerEvent(QDialog* self, QTimerEvent* event);
void QDialog_ChildEvent(QDialog* self, QChildEvent* event);
void QDialog_OnChildEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseChildEvent(QDialog* self, QChildEvent* event);
void QDialog_CustomEvent(QDialog* self, QEvent* event);
void QDialog_OnCustomEvent(QDialog* self, intptr_t slot);
void QDialog_QBaseCustomEvent(QDialog* self, QEvent* event);
void QDialog_ConnectNotify(QDialog* self, QMetaMethod* signal);
void QDialog_OnConnectNotify(QDialog* self, intptr_t slot);
void QDialog_QBaseConnectNotify(QDialog* self, QMetaMethod* signal);
void QDialog_DisconnectNotify(QDialog* self, QMetaMethod* signal);
void QDialog_OnDisconnectNotify(QDialog* self, intptr_t slot);
void QDialog_QBaseDisconnectNotify(QDialog* self, QMetaMethod* signal);
int QDialog_Metric(const QDialog* self, int param1);
void QDialog_OnMetric(const QDialog* self, intptr_t slot);
int QDialog_QBaseMetric(const QDialog* self, int param1);
void QDialog_InitPainter(const QDialog* self, QPainter* painter);
void QDialog_OnInitPainter(const QDialog* self, intptr_t slot);
void QDialog_QBaseInitPainter(const QDialog* self, QPainter* painter);
QPaintDevice* QDialog_Redirected(const QDialog* self, QPoint* offset);
void QDialog_OnRedirected(const QDialog* self, intptr_t slot);
QPaintDevice* QDialog_QBaseRedirected(const QDialog* self, QPoint* offset);
QPainter* QDialog_SharedPainter(const QDialog* self);
void QDialog_OnSharedPainter(const QDialog* self, intptr_t slot);
QPainter* QDialog_QBaseSharedPainter(const QDialog* self);
void QDialog_AdjustPosition(QDialog* self, QWidget* param1);
void QDialog_OnAdjustPosition(QDialog* self, intptr_t slot);
void QDialog_QBaseAdjustPosition(QDialog* self, QWidget* param1);
void QDialog_UpdateMicroFocus(QDialog* self);
void QDialog_OnUpdateMicroFocus(QDialog* self, intptr_t slot);
void QDialog_QBaseUpdateMicroFocus(QDialog* self);
void QDialog_Create(QDialog* self);
void QDialog_OnCreate(QDialog* self, intptr_t slot);
void QDialog_QBaseCreate(QDialog* self);
void QDialog_Destroy(QDialog* self);
void QDialog_OnDestroy(QDialog* self, intptr_t slot);
void QDialog_QBaseDestroy(QDialog* self);
bool QDialog_FocusNextChild(QDialog* self);
void QDialog_OnFocusNextChild(QDialog* self, intptr_t slot);
bool QDialog_QBaseFocusNextChild(QDialog* self);
bool QDialog_FocusPreviousChild(QDialog* self);
void QDialog_OnFocusPreviousChild(QDialog* self, intptr_t slot);
bool QDialog_QBaseFocusPreviousChild(QDialog* self);
QObject* QDialog_Sender(const QDialog* self);
void QDialog_OnSender(const QDialog* self, intptr_t slot);
QObject* QDialog_QBaseSender(const QDialog* self);
int QDialog_SenderSignalIndex(const QDialog* self);
void QDialog_OnSenderSignalIndex(const QDialog* self, intptr_t slot);
int QDialog_QBaseSenderSignalIndex(const QDialog* self);
int QDialog_Receivers(const QDialog* self, const char* signal);
void QDialog_OnReceivers(const QDialog* self, intptr_t slot);
int QDialog_QBaseReceivers(const QDialog* self, const char* signal);
bool QDialog_IsSignalConnected(const QDialog* self, QMetaMethod* signal);
void QDialog_OnIsSignalConnected(const QDialog* self, intptr_t slot);
bool QDialog_QBaseIsSignalConnected(const QDialog* self, QMetaMethod* signal);
void QDialog_Delete(QDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
