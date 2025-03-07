#pragma once
#ifndef SRCC_LIBQPROGRESSDIALOG_HPP
#define SRCC_LIBQPROGRESSDIALOG_HPP

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
typedef struct QLabel QLabel;
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
typedef struct QProgressBar QProgressBar;
typedef struct QProgressDialog QProgressDialog;
typedef struct QPushButton QPushButton;
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

QProgressDialog* QProgressDialog_new(QWidget* parent);
QProgressDialog* QProgressDialog_new2();
QProgressDialog* QProgressDialog_new3(libqt_string labelText, libqt_string cancelButtonText, int minimum, int maximum);
QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags);
QProgressDialog* QProgressDialog_new5(libqt_string labelText, libqt_string cancelButtonText, int minimum, int maximum, QWidget* parent);
QProgressDialog* QProgressDialog_new6(libqt_string labelText, libqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags);
QMetaObject* QProgressDialog_MetaObject(const QProgressDialog* self);
void* QProgressDialog_Metacast(QProgressDialog* self, const char* param1);
int QProgressDialog_Metacall(QProgressDialog* self, int param1, int param2, void** param3);
void QProgressDialog_OnMetacall(QProgressDialog* self, intptr_t slot);
int QProgressDialog_QBaseMetacall(QProgressDialog* self, int param1, int param2, void** param3);
libqt_string QProgressDialog_Tr(const char* s);
void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label);
void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button);
void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar);
bool QProgressDialog_WasCanceled(const QProgressDialog* self);
int QProgressDialog_Minimum(const QProgressDialog* self);
int QProgressDialog_Maximum(const QProgressDialog* self);
int QProgressDialog_Value(const QProgressDialog* self);
QSize* QProgressDialog_SizeHint(const QProgressDialog* self);
void QProgressDialog_OnSizeHint(const QProgressDialog* self, intptr_t slot);
QSize* QProgressDialog_QBaseSizeHint(const QProgressDialog* self);
libqt_string QProgressDialog_LabelText(const QProgressDialog* self);
int QProgressDialog_MinimumDuration(const QProgressDialog* self);
void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset);
bool QProgressDialog_AutoReset(const QProgressDialog* self);
void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close);
bool QProgressDialog_AutoClose(const QProgressDialog* self);
void QProgressDialog_Cancel(QProgressDialog* self);
void QProgressDialog_Reset(QProgressDialog* self);
void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum);
void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum);
void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum);
void QProgressDialog_SetValue(QProgressDialog* self, int progress);
void QProgressDialog_SetLabelText(QProgressDialog* self, libqt_string text);
void QProgressDialog_SetCancelButtonText(QProgressDialog* self, libqt_string text);
void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms);
void QProgressDialog_Canceled(QProgressDialog* self);
void QProgressDialog_Connect_Canceled(QProgressDialog* self, intptr_t slot);
void QProgressDialog_ResizeEvent(QProgressDialog* self, QResizeEvent* event);
void QProgressDialog_OnResizeEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseResizeEvent(QProgressDialog* self, QResizeEvent* event);
void QProgressDialog_CloseEvent(QProgressDialog* self, QCloseEvent* event);
void QProgressDialog_OnCloseEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseCloseEvent(QProgressDialog* self, QCloseEvent* event);
void QProgressDialog_ChangeEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_OnChangeEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseChangeEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_ShowEvent(QProgressDialog* self, QShowEvent* event);
void QProgressDialog_OnShowEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseShowEvent(QProgressDialog* self, QShowEvent* event);
libqt_string QProgressDialog_Tr2(const char* s, const char* c);
libqt_string QProgressDialog_Tr3(const char* s, const char* c, int n);
void QProgressDialog_SetVisible(QProgressDialog* self, bool visible);
void QProgressDialog_OnSetVisible(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseSetVisible(QProgressDialog* self, bool visible);
QSize* QProgressDialog_MinimumSizeHint(const QProgressDialog* self);
void QProgressDialog_OnMinimumSizeHint(const QProgressDialog* self, intptr_t slot);
QSize* QProgressDialog_QBaseMinimumSizeHint(const QProgressDialog* self);
void QProgressDialog_Open(QProgressDialog* self);
void QProgressDialog_OnOpen(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseOpen(QProgressDialog* self);
int QProgressDialog_Exec(QProgressDialog* self);
void QProgressDialog_OnExec(QProgressDialog* self, intptr_t slot);
int QProgressDialog_QBaseExec(QProgressDialog* self);
void QProgressDialog_Done(QProgressDialog* self, int param1);
void QProgressDialog_OnDone(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseDone(QProgressDialog* self, int param1);
void QProgressDialog_Accept(QProgressDialog* self);
void QProgressDialog_OnAccept(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseAccept(QProgressDialog* self);
void QProgressDialog_Reject(QProgressDialog* self);
void QProgressDialog_OnReject(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseReject(QProgressDialog* self);
void QProgressDialog_KeyPressEvent(QProgressDialog* self, QKeyEvent* param1);
void QProgressDialog_OnKeyPressEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseKeyPressEvent(QProgressDialog* self, QKeyEvent* param1);
void QProgressDialog_ContextMenuEvent(QProgressDialog* self, QContextMenuEvent* param1);
void QProgressDialog_OnContextMenuEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseContextMenuEvent(QProgressDialog* self, QContextMenuEvent* param1);
bool QProgressDialog_EventFilter(QProgressDialog* self, QObject* param1, QEvent* param2);
void QProgressDialog_OnEventFilter(QProgressDialog* self, intptr_t slot);
bool QProgressDialog_QBaseEventFilter(QProgressDialog* self, QObject* param1, QEvent* param2);
int QProgressDialog_DevType(const QProgressDialog* self);
void QProgressDialog_OnDevType(const QProgressDialog* self, intptr_t slot);
int QProgressDialog_QBaseDevType(const QProgressDialog* self);
int QProgressDialog_HeightForWidth(const QProgressDialog* self, int param1);
void QProgressDialog_OnHeightForWidth(const QProgressDialog* self, intptr_t slot);
int QProgressDialog_QBaseHeightForWidth(const QProgressDialog* self, int param1);
bool QProgressDialog_HasHeightForWidth(const QProgressDialog* self);
void QProgressDialog_OnHasHeightForWidth(const QProgressDialog* self, intptr_t slot);
bool QProgressDialog_QBaseHasHeightForWidth(const QProgressDialog* self);
QPaintEngine* QProgressDialog_PaintEngine(const QProgressDialog* self);
void QProgressDialog_OnPaintEngine(const QProgressDialog* self, intptr_t slot);
QPaintEngine* QProgressDialog_QBasePaintEngine(const QProgressDialog* self);
bool QProgressDialog_Event(QProgressDialog* self, QEvent* event);
void QProgressDialog_OnEvent(QProgressDialog* self, intptr_t slot);
bool QProgressDialog_QBaseEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_MousePressEvent(QProgressDialog* self, QMouseEvent* event);
void QProgressDialog_OnMousePressEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseMousePressEvent(QProgressDialog* self, QMouseEvent* event);
void QProgressDialog_MouseReleaseEvent(QProgressDialog* self, QMouseEvent* event);
void QProgressDialog_OnMouseReleaseEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseMouseReleaseEvent(QProgressDialog* self, QMouseEvent* event);
void QProgressDialog_MouseDoubleClickEvent(QProgressDialog* self, QMouseEvent* event);
void QProgressDialog_OnMouseDoubleClickEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseMouseDoubleClickEvent(QProgressDialog* self, QMouseEvent* event);
void QProgressDialog_MouseMoveEvent(QProgressDialog* self, QMouseEvent* event);
void QProgressDialog_OnMouseMoveEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseMouseMoveEvent(QProgressDialog* self, QMouseEvent* event);
void QProgressDialog_WheelEvent(QProgressDialog* self, QWheelEvent* event);
void QProgressDialog_OnWheelEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseWheelEvent(QProgressDialog* self, QWheelEvent* event);
void QProgressDialog_KeyReleaseEvent(QProgressDialog* self, QKeyEvent* event);
void QProgressDialog_OnKeyReleaseEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseKeyReleaseEvent(QProgressDialog* self, QKeyEvent* event);
void QProgressDialog_FocusInEvent(QProgressDialog* self, QFocusEvent* event);
void QProgressDialog_OnFocusInEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseFocusInEvent(QProgressDialog* self, QFocusEvent* event);
void QProgressDialog_FocusOutEvent(QProgressDialog* self, QFocusEvent* event);
void QProgressDialog_OnFocusOutEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseFocusOutEvent(QProgressDialog* self, QFocusEvent* event);
void QProgressDialog_EnterEvent(QProgressDialog* self, QEnterEvent* event);
void QProgressDialog_OnEnterEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseEnterEvent(QProgressDialog* self, QEnterEvent* event);
void QProgressDialog_LeaveEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_OnLeaveEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseLeaveEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_PaintEvent(QProgressDialog* self, QPaintEvent* event);
void QProgressDialog_OnPaintEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBasePaintEvent(QProgressDialog* self, QPaintEvent* event);
void QProgressDialog_MoveEvent(QProgressDialog* self, QMoveEvent* event);
void QProgressDialog_OnMoveEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseMoveEvent(QProgressDialog* self, QMoveEvent* event);
void QProgressDialog_TabletEvent(QProgressDialog* self, QTabletEvent* event);
void QProgressDialog_OnTabletEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseTabletEvent(QProgressDialog* self, QTabletEvent* event);
void QProgressDialog_ActionEvent(QProgressDialog* self, QActionEvent* event);
void QProgressDialog_OnActionEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseActionEvent(QProgressDialog* self, QActionEvent* event);
void QProgressDialog_DragEnterEvent(QProgressDialog* self, QDragEnterEvent* event);
void QProgressDialog_OnDragEnterEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseDragEnterEvent(QProgressDialog* self, QDragEnterEvent* event);
void QProgressDialog_DragMoveEvent(QProgressDialog* self, QDragMoveEvent* event);
void QProgressDialog_OnDragMoveEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseDragMoveEvent(QProgressDialog* self, QDragMoveEvent* event);
void QProgressDialog_DragLeaveEvent(QProgressDialog* self, QDragLeaveEvent* event);
void QProgressDialog_OnDragLeaveEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseDragLeaveEvent(QProgressDialog* self, QDragLeaveEvent* event);
void QProgressDialog_DropEvent(QProgressDialog* self, QDropEvent* event);
void QProgressDialog_OnDropEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseDropEvent(QProgressDialog* self, QDropEvent* event);
void QProgressDialog_HideEvent(QProgressDialog* self, QHideEvent* event);
void QProgressDialog_OnHideEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseHideEvent(QProgressDialog* self, QHideEvent* event);
bool QProgressDialog_NativeEvent(QProgressDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QProgressDialog_OnNativeEvent(QProgressDialog* self, intptr_t slot);
bool QProgressDialog_QBaseNativeEvent(QProgressDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QProgressDialog_InputMethodEvent(QProgressDialog* self, QInputMethodEvent* param1);
void QProgressDialog_OnInputMethodEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseInputMethodEvent(QProgressDialog* self, QInputMethodEvent* param1);
QVariant* QProgressDialog_InputMethodQuery(const QProgressDialog* self, int param1);
void QProgressDialog_OnInputMethodQuery(const QProgressDialog* self, intptr_t slot);
QVariant* QProgressDialog_QBaseInputMethodQuery(const QProgressDialog* self, int param1);
bool QProgressDialog_FocusNextPrevChild(QProgressDialog* self, bool next);
void QProgressDialog_OnFocusNextPrevChild(QProgressDialog* self, intptr_t slot);
bool QProgressDialog_QBaseFocusNextPrevChild(QProgressDialog* self, bool next);
void QProgressDialog_TimerEvent(QProgressDialog* self, QTimerEvent* event);
void QProgressDialog_OnTimerEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseTimerEvent(QProgressDialog* self, QTimerEvent* event);
void QProgressDialog_ChildEvent(QProgressDialog* self, QChildEvent* event);
void QProgressDialog_OnChildEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseChildEvent(QProgressDialog* self, QChildEvent* event);
void QProgressDialog_CustomEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_OnCustomEvent(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseCustomEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_ConnectNotify(QProgressDialog* self, QMetaMethod* signal);
void QProgressDialog_OnConnectNotify(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseConnectNotify(QProgressDialog* self, QMetaMethod* signal);
void QProgressDialog_DisconnectNotify(QProgressDialog* self, QMetaMethod* signal);
void QProgressDialog_OnDisconnectNotify(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseDisconnectNotify(QProgressDialog* self, QMetaMethod* signal);
int QProgressDialog_Metric(const QProgressDialog* self, int param1);
void QProgressDialog_OnMetric(const QProgressDialog* self, intptr_t slot);
int QProgressDialog_QBaseMetric(const QProgressDialog* self, int param1);
void QProgressDialog_InitPainter(const QProgressDialog* self, QPainter* painter);
void QProgressDialog_OnInitPainter(const QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseInitPainter(const QProgressDialog* self, QPainter* painter);
QPaintDevice* QProgressDialog_Redirected(const QProgressDialog* self, QPoint* offset);
void QProgressDialog_OnRedirected(const QProgressDialog* self, intptr_t slot);
QPaintDevice* QProgressDialog_QBaseRedirected(const QProgressDialog* self, QPoint* offset);
QPainter* QProgressDialog_SharedPainter(const QProgressDialog* self);
void QProgressDialog_OnSharedPainter(const QProgressDialog* self, intptr_t slot);
QPainter* QProgressDialog_QBaseSharedPainter(const QProgressDialog* self);
void QProgressDialog_ForceShow(QProgressDialog* self);
void QProgressDialog_OnForceShow(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseForceShow(QProgressDialog* self);
void QProgressDialog_AdjustPosition(QProgressDialog* self, QWidget* param1);
void QProgressDialog_OnAdjustPosition(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseAdjustPosition(QProgressDialog* self, QWidget* param1);
void QProgressDialog_UpdateMicroFocus(QProgressDialog* self);
void QProgressDialog_OnUpdateMicroFocus(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseUpdateMicroFocus(QProgressDialog* self);
void QProgressDialog_Create(QProgressDialog* self);
void QProgressDialog_OnCreate(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseCreate(QProgressDialog* self);
void QProgressDialog_Destroy(QProgressDialog* self);
void QProgressDialog_OnDestroy(QProgressDialog* self, intptr_t slot);
void QProgressDialog_QBaseDestroy(QProgressDialog* self);
bool QProgressDialog_FocusNextChild(QProgressDialog* self);
void QProgressDialog_OnFocusNextChild(QProgressDialog* self, intptr_t slot);
bool QProgressDialog_QBaseFocusNextChild(QProgressDialog* self);
bool QProgressDialog_FocusPreviousChild(QProgressDialog* self);
void QProgressDialog_OnFocusPreviousChild(QProgressDialog* self, intptr_t slot);
bool QProgressDialog_QBaseFocusPreviousChild(QProgressDialog* self);
QObject* QProgressDialog_Sender(const QProgressDialog* self);
void QProgressDialog_OnSender(const QProgressDialog* self, intptr_t slot);
QObject* QProgressDialog_QBaseSender(const QProgressDialog* self);
int QProgressDialog_SenderSignalIndex(const QProgressDialog* self);
void QProgressDialog_OnSenderSignalIndex(const QProgressDialog* self, intptr_t slot);
int QProgressDialog_QBaseSenderSignalIndex(const QProgressDialog* self);
int QProgressDialog_Receivers(const QProgressDialog* self, const char* signal);
void QProgressDialog_OnReceivers(const QProgressDialog* self, intptr_t slot);
int QProgressDialog_QBaseReceivers(const QProgressDialog* self, const char* signal);
bool QProgressDialog_IsSignalConnected(const QProgressDialog* self, QMetaMethod* signal);
void QProgressDialog_OnIsSignalConnected(const QProgressDialog* self, intptr_t slot);
bool QProgressDialog_QBaseIsSignalConnected(const QProgressDialog* self, QMetaMethod* signal);
void QProgressDialog_Delete(QProgressDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
