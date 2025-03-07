#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBQABSTRACTPRINTDIALOG_HPP
#define SRC_PRINTSUPPORTC_LIBQABSTRACTPRINTDIALOG_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractPrintDialog QAbstractPrintDialog;
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
typedef struct QPrinter QPrinter;
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
typedef QAbstractPrintDialog::PrintDialogOption PrintDialogOption;   // C++ enum
typedef QAbstractPrintDialog::PrintDialogOptions PrintDialogOptions; // C++ QFlags
typedef QAbstractPrintDialog::PrintRange PrintRange;                 // C++ enum
#else
typedef int PrintDialogOption;  // C ABI enum
typedef int PrintDialogOptions; // C ABI QFlags
typedef int PrintRange;         // C ABI enum
#endif

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer);
QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent);
QMetaObject* QAbstractPrintDialog_MetaObject(const QAbstractPrintDialog* self);
void* QAbstractPrintDialog_Metacast(QAbstractPrintDialog* self, const char* param1);
int QAbstractPrintDialog_Metacall(QAbstractPrintDialog* self, int param1, int param2, void** param3);
void QAbstractPrintDialog_OnMetacall(QAbstractPrintDialog* self, intptr_t slot);
int QAbstractPrintDialog_QBaseMetacall(QAbstractPrintDialog* self, int param1, int param2, void** param3);
libqt_string QAbstractPrintDialog_Tr(const char* s);
void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, libqt_list /* of QWidget* */ tabs);
void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int range);
int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max);
int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage);
int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self);
QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self);
libqt_string QAbstractPrintDialog_Tr2(const char* s, const char* c);
libqt_string QAbstractPrintDialog_Tr3(const char* s, const char* c, int n);
void QAbstractPrintDialog_SetVisible(QAbstractPrintDialog* self, bool visible);
void QAbstractPrintDialog_OnSetVisible(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseSetVisible(QAbstractPrintDialog* self, bool visible);
QSize* QAbstractPrintDialog_SizeHint(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnSizeHint(const QAbstractPrintDialog* self, intptr_t slot);
QSize* QAbstractPrintDialog_QBaseSizeHint(const QAbstractPrintDialog* self);
QSize* QAbstractPrintDialog_MinimumSizeHint(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnMinimumSizeHint(const QAbstractPrintDialog* self, intptr_t slot);
QSize* QAbstractPrintDialog_QBaseMinimumSizeHint(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_Open(QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnOpen(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseOpen(QAbstractPrintDialog* self);
int QAbstractPrintDialog_Exec(QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnExec(QAbstractPrintDialog* self, intptr_t slot);
int QAbstractPrintDialog_QBaseExec(QAbstractPrintDialog* self);
void QAbstractPrintDialog_Done(QAbstractPrintDialog* self, int param1);
void QAbstractPrintDialog_OnDone(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseDone(QAbstractPrintDialog* self, int param1);
void QAbstractPrintDialog_Accept(QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnAccept(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseAccept(QAbstractPrintDialog* self);
void QAbstractPrintDialog_Reject(QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnReject(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseReject(QAbstractPrintDialog* self);
void QAbstractPrintDialog_KeyPressEvent(QAbstractPrintDialog* self, QKeyEvent* param1);
void QAbstractPrintDialog_OnKeyPressEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseKeyPressEvent(QAbstractPrintDialog* self, QKeyEvent* param1);
void QAbstractPrintDialog_CloseEvent(QAbstractPrintDialog* self, QCloseEvent* param1);
void QAbstractPrintDialog_OnCloseEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseCloseEvent(QAbstractPrintDialog* self, QCloseEvent* param1);
void QAbstractPrintDialog_ShowEvent(QAbstractPrintDialog* self, QShowEvent* param1);
void QAbstractPrintDialog_OnShowEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseShowEvent(QAbstractPrintDialog* self, QShowEvent* param1);
void QAbstractPrintDialog_ResizeEvent(QAbstractPrintDialog* self, QResizeEvent* param1);
void QAbstractPrintDialog_OnResizeEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseResizeEvent(QAbstractPrintDialog* self, QResizeEvent* param1);
void QAbstractPrintDialog_ContextMenuEvent(QAbstractPrintDialog* self, QContextMenuEvent* param1);
void QAbstractPrintDialog_OnContextMenuEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseContextMenuEvent(QAbstractPrintDialog* self, QContextMenuEvent* param1);
bool QAbstractPrintDialog_EventFilter(QAbstractPrintDialog* self, QObject* param1, QEvent* param2);
void QAbstractPrintDialog_OnEventFilter(QAbstractPrintDialog* self, intptr_t slot);
bool QAbstractPrintDialog_QBaseEventFilter(QAbstractPrintDialog* self, QObject* param1, QEvent* param2);
int QAbstractPrintDialog_DevType(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnDevType(const QAbstractPrintDialog* self, intptr_t slot);
int QAbstractPrintDialog_QBaseDevType(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_HeightForWidth(const QAbstractPrintDialog* self, int param1);
void QAbstractPrintDialog_OnHeightForWidth(const QAbstractPrintDialog* self, intptr_t slot);
int QAbstractPrintDialog_QBaseHeightForWidth(const QAbstractPrintDialog* self, int param1);
bool QAbstractPrintDialog_HasHeightForWidth(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnHasHeightForWidth(const QAbstractPrintDialog* self, intptr_t slot);
bool QAbstractPrintDialog_QBaseHasHeightForWidth(const QAbstractPrintDialog* self);
QPaintEngine* QAbstractPrintDialog_PaintEngine(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnPaintEngine(const QAbstractPrintDialog* self, intptr_t slot);
QPaintEngine* QAbstractPrintDialog_QBasePaintEngine(const QAbstractPrintDialog* self);
bool QAbstractPrintDialog_Event(QAbstractPrintDialog* self, QEvent* event);
void QAbstractPrintDialog_OnEvent(QAbstractPrintDialog* self, intptr_t slot);
bool QAbstractPrintDialog_QBaseEvent(QAbstractPrintDialog* self, QEvent* event);
void QAbstractPrintDialog_MousePressEvent(QAbstractPrintDialog* self, QMouseEvent* event);
void QAbstractPrintDialog_OnMousePressEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseMousePressEvent(QAbstractPrintDialog* self, QMouseEvent* event);
void QAbstractPrintDialog_MouseReleaseEvent(QAbstractPrintDialog* self, QMouseEvent* event);
void QAbstractPrintDialog_OnMouseReleaseEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseMouseReleaseEvent(QAbstractPrintDialog* self, QMouseEvent* event);
void QAbstractPrintDialog_MouseDoubleClickEvent(QAbstractPrintDialog* self, QMouseEvent* event);
void QAbstractPrintDialog_OnMouseDoubleClickEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseMouseDoubleClickEvent(QAbstractPrintDialog* self, QMouseEvent* event);
void QAbstractPrintDialog_MouseMoveEvent(QAbstractPrintDialog* self, QMouseEvent* event);
void QAbstractPrintDialog_OnMouseMoveEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseMouseMoveEvent(QAbstractPrintDialog* self, QMouseEvent* event);
void QAbstractPrintDialog_WheelEvent(QAbstractPrintDialog* self, QWheelEvent* event);
void QAbstractPrintDialog_OnWheelEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseWheelEvent(QAbstractPrintDialog* self, QWheelEvent* event);
void QAbstractPrintDialog_KeyReleaseEvent(QAbstractPrintDialog* self, QKeyEvent* event);
void QAbstractPrintDialog_OnKeyReleaseEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseKeyReleaseEvent(QAbstractPrintDialog* self, QKeyEvent* event);
void QAbstractPrintDialog_FocusInEvent(QAbstractPrintDialog* self, QFocusEvent* event);
void QAbstractPrintDialog_OnFocusInEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseFocusInEvent(QAbstractPrintDialog* self, QFocusEvent* event);
void QAbstractPrintDialog_FocusOutEvent(QAbstractPrintDialog* self, QFocusEvent* event);
void QAbstractPrintDialog_OnFocusOutEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseFocusOutEvent(QAbstractPrintDialog* self, QFocusEvent* event);
void QAbstractPrintDialog_EnterEvent(QAbstractPrintDialog* self, QEnterEvent* event);
void QAbstractPrintDialog_OnEnterEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseEnterEvent(QAbstractPrintDialog* self, QEnterEvent* event);
void QAbstractPrintDialog_LeaveEvent(QAbstractPrintDialog* self, QEvent* event);
void QAbstractPrintDialog_OnLeaveEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseLeaveEvent(QAbstractPrintDialog* self, QEvent* event);
void QAbstractPrintDialog_PaintEvent(QAbstractPrintDialog* self, QPaintEvent* event);
void QAbstractPrintDialog_OnPaintEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBasePaintEvent(QAbstractPrintDialog* self, QPaintEvent* event);
void QAbstractPrintDialog_MoveEvent(QAbstractPrintDialog* self, QMoveEvent* event);
void QAbstractPrintDialog_OnMoveEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseMoveEvent(QAbstractPrintDialog* self, QMoveEvent* event);
void QAbstractPrintDialog_TabletEvent(QAbstractPrintDialog* self, QTabletEvent* event);
void QAbstractPrintDialog_OnTabletEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseTabletEvent(QAbstractPrintDialog* self, QTabletEvent* event);
void QAbstractPrintDialog_ActionEvent(QAbstractPrintDialog* self, QActionEvent* event);
void QAbstractPrintDialog_OnActionEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseActionEvent(QAbstractPrintDialog* self, QActionEvent* event);
void QAbstractPrintDialog_DragEnterEvent(QAbstractPrintDialog* self, QDragEnterEvent* event);
void QAbstractPrintDialog_OnDragEnterEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseDragEnterEvent(QAbstractPrintDialog* self, QDragEnterEvent* event);
void QAbstractPrintDialog_DragMoveEvent(QAbstractPrintDialog* self, QDragMoveEvent* event);
void QAbstractPrintDialog_OnDragMoveEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseDragMoveEvent(QAbstractPrintDialog* self, QDragMoveEvent* event);
void QAbstractPrintDialog_DragLeaveEvent(QAbstractPrintDialog* self, QDragLeaveEvent* event);
void QAbstractPrintDialog_OnDragLeaveEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseDragLeaveEvent(QAbstractPrintDialog* self, QDragLeaveEvent* event);
void QAbstractPrintDialog_DropEvent(QAbstractPrintDialog* self, QDropEvent* event);
void QAbstractPrintDialog_OnDropEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseDropEvent(QAbstractPrintDialog* self, QDropEvent* event);
void QAbstractPrintDialog_HideEvent(QAbstractPrintDialog* self, QHideEvent* event);
void QAbstractPrintDialog_OnHideEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseHideEvent(QAbstractPrintDialog* self, QHideEvent* event);
bool QAbstractPrintDialog_NativeEvent(QAbstractPrintDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QAbstractPrintDialog_OnNativeEvent(QAbstractPrintDialog* self, intptr_t slot);
bool QAbstractPrintDialog_QBaseNativeEvent(QAbstractPrintDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QAbstractPrintDialog_ChangeEvent(QAbstractPrintDialog* self, QEvent* param1);
void QAbstractPrintDialog_OnChangeEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseChangeEvent(QAbstractPrintDialog* self, QEvent* param1);
void QAbstractPrintDialog_InputMethodEvent(QAbstractPrintDialog* self, QInputMethodEvent* param1);
void QAbstractPrintDialog_OnInputMethodEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseInputMethodEvent(QAbstractPrintDialog* self, QInputMethodEvent* param1);
QVariant* QAbstractPrintDialog_InputMethodQuery(const QAbstractPrintDialog* self, int param1);
void QAbstractPrintDialog_OnInputMethodQuery(const QAbstractPrintDialog* self, intptr_t slot);
QVariant* QAbstractPrintDialog_QBaseInputMethodQuery(const QAbstractPrintDialog* self, int param1);
bool QAbstractPrintDialog_FocusNextPrevChild(QAbstractPrintDialog* self, bool next);
void QAbstractPrintDialog_OnFocusNextPrevChild(QAbstractPrintDialog* self, intptr_t slot);
bool QAbstractPrintDialog_QBaseFocusNextPrevChild(QAbstractPrintDialog* self, bool next);
void QAbstractPrintDialog_TimerEvent(QAbstractPrintDialog* self, QTimerEvent* event);
void QAbstractPrintDialog_OnTimerEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseTimerEvent(QAbstractPrintDialog* self, QTimerEvent* event);
void QAbstractPrintDialog_ChildEvent(QAbstractPrintDialog* self, QChildEvent* event);
void QAbstractPrintDialog_OnChildEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseChildEvent(QAbstractPrintDialog* self, QChildEvent* event);
void QAbstractPrintDialog_CustomEvent(QAbstractPrintDialog* self, QEvent* event);
void QAbstractPrintDialog_OnCustomEvent(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseCustomEvent(QAbstractPrintDialog* self, QEvent* event);
void QAbstractPrintDialog_ConnectNotify(QAbstractPrintDialog* self, QMetaMethod* signal);
void QAbstractPrintDialog_OnConnectNotify(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseConnectNotify(QAbstractPrintDialog* self, QMetaMethod* signal);
void QAbstractPrintDialog_DisconnectNotify(QAbstractPrintDialog* self, QMetaMethod* signal);
void QAbstractPrintDialog_OnDisconnectNotify(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseDisconnectNotify(QAbstractPrintDialog* self, QMetaMethod* signal);
int QAbstractPrintDialog_Metric(const QAbstractPrintDialog* self, int param1);
void QAbstractPrintDialog_OnMetric(const QAbstractPrintDialog* self, intptr_t slot);
int QAbstractPrintDialog_QBaseMetric(const QAbstractPrintDialog* self, int param1);
void QAbstractPrintDialog_InitPainter(const QAbstractPrintDialog* self, QPainter* painter);
void QAbstractPrintDialog_OnInitPainter(const QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseInitPainter(const QAbstractPrintDialog* self, QPainter* painter);
QPaintDevice* QAbstractPrintDialog_Redirected(const QAbstractPrintDialog* self, QPoint* offset);
void QAbstractPrintDialog_OnRedirected(const QAbstractPrintDialog* self, intptr_t slot);
QPaintDevice* QAbstractPrintDialog_QBaseRedirected(const QAbstractPrintDialog* self, QPoint* offset);
QPainter* QAbstractPrintDialog_SharedPainter(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnSharedPainter(const QAbstractPrintDialog* self, intptr_t slot);
QPainter* QAbstractPrintDialog_QBaseSharedPainter(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_AdjustPosition(QAbstractPrintDialog* self, QWidget* param1);
void QAbstractPrintDialog_OnAdjustPosition(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseAdjustPosition(QAbstractPrintDialog* self, QWidget* param1);
void QAbstractPrintDialog_UpdateMicroFocus(QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnUpdateMicroFocus(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseUpdateMicroFocus(QAbstractPrintDialog* self);
void QAbstractPrintDialog_Create(QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnCreate(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseCreate(QAbstractPrintDialog* self);
void QAbstractPrintDialog_Destroy(QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnDestroy(QAbstractPrintDialog* self, intptr_t slot);
void QAbstractPrintDialog_QBaseDestroy(QAbstractPrintDialog* self);
bool QAbstractPrintDialog_FocusNextChild(QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnFocusNextChild(QAbstractPrintDialog* self, intptr_t slot);
bool QAbstractPrintDialog_QBaseFocusNextChild(QAbstractPrintDialog* self);
bool QAbstractPrintDialog_FocusPreviousChild(QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnFocusPreviousChild(QAbstractPrintDialog* self, intptr_t slot);
bool QAbstractPrintDialog_QBaseFocusPreviousChild(QAbstractPrintDialog* self);
QObject* QAbstractPrintDialog_Sender(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnSender(const QAbstractPrintDialog* self, intptr_t slot);
QObject* QAbstractPrintDialog_QBaseSender(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_SenderSignalIndex(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_OnSenderSignalIndex(const QAbstractPrintDialog* self, intptr_t slot);
int QAbstractPrintDialog_QBaseSenderSignalIndex(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_Receivers(const QAbstractPrintDialog* self, const char* signal);
void QAbstractPrintDialog_OnReceivers(const QAbstractPrintDialog* self, intptr_t slot);
int QAbstractPrintDialog_QBaseReceivers(const QAbstractPrintDialog* self, const char* signal);
bool QAbstractPrintDialog_IsSignalConnected(const QAbstractPrintDialog* self, QMetaMethod* signal);
void QAbstractPrintDialog_OnIsSignalConnected(const QAbstractPrintDialog* self, intptr_t slot);
bool QAbstractPrintDialog_QBaseIsSignalConnected(const QAbstractPrintDialog* self, QMetaMethod* signal);
void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
