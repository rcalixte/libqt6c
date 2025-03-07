#pragma once
#ifndef SRCC_LIBQCOLORDIALOG_HPP
#define SRCC_LIBQCOLORDIALOG_HPP

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
typedef struct QColor QColor;
typedef struct QColorDialog QColorDialog;
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
typedef QColorDialog::ColorDialogOption ColorDialogOption;   // C++ enum
typedef QColorDialog::ColorDialogOptions ColorDialogOptions; // C++ QFlags
#else
typedef int ColorDialogOption;  // C ABI enum
typedef int ColorDialogOptions; // C ABI QFlags
#endif

QColorDialog* QColorDialog_new(QWidget* parent);
QColorDialog* QColorDialog_new2();
QColorDialog* QColorDialog_new3(QColor* initial);
QColorDialog* QColorDialog_new4(QColor* initial, QWidget* parent);
QMetaObject* QColorDialog_MetaObject(const QColorDialog* self);
void* QColorDialog_Metacast(QColorDialog* self, const char* param1);
int QColorDialog_Metacall(QColorDialog* self, int param1, int param2, void** param3);
void QColorDialog_OnMetacall(QColorDialog* self, intptr_t slot);
int QColorDialog_QBaseMetacall(QColorDialog* self, int param1, int param2, void** param3);
libqt_string QColorDialog_Tr(const char* s);
void QColorDialog_SetCurrentColor(QColorDialog* self, QColor* color);
QColor* QColorDialog_CurrentColor(const QColorDialog* self);
QColor* QColorDialog_SelectedColor(const QColorDialog* self);
void QColorDialog_SetOption(QColorDialog* self, int option);
bool QColorDialog_TestOption(const QColorDialog* self, int option);
void QColorDialog_SetOptions(QColorDialog* self, int options);
int QColorDialog_Options(const QColorDialog* self);
void QColorDialog_SetVisible(QColorDialog* self, bool visible);
void QColorDialog_OnSetVisible(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseSetVisible(QColorDialog* self, bool visible);
QColor* QColorDialog_GetColor();
int QColorDialog_CustomCount();
QColor* QColorDialog_CustomColor(int index);
void QColorDialog_SetCustomColor(int index, QColor* color);
QColor* QColorDialog_StandardColor(int index);
void QColorDialog_SetStandardColor(int index, QColor* color);
void QColorDialog_CurrentColorChanged(QColorDialog* self, QColor* color);
void QColorDialog_Connect_CurrentColorChanged(QColorDialog* self, intptr_t slot);
void QColorDialog_ColorSelected(QColorDialog* self, QColor* color);
void QColorDialog_Connect_ColorSelected(QColorDialog* self, intptr_t slot);
void QColorDialog_ChangeEvent(QColorDialog* self, QEvent* event);
void QColorDialog_OnChangeEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseChangeEvent(QColorDialog* self, QEvent* event);
void QColorDialog_Done(QColorDialog* self, int result);
void QColorDialog_OnDone(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseDone(QColorDialog* self, int result);
libqt_string QColorDialog_Tr2(const char* s, const char* c);
libqt_string QColorDialog_Tr3(const char* s, const char* c, int n);
void QColorDialog_SetOption2(QColorDialog* self, int option, bool on);
QColor* QColorDialog_GetColor1(QColor* initial);
QColor* QColorDialog_GetColor2(QColor* initial, QWidget* parent);
QColor* QColorDialog_GetColor3(QColor* initial, QWidget* parent, libqt_string title);
QColor* QColorDialog_GetColor4(QColor* initial, QWidget* parent, libqt_string title, int options);
QSize* QColorDialog_SizeHint(const QColorDialog* self);
void QColorDialog_OnSizeHint(const QColorDialog* self, intptr_t slot);
QSize* QColorDialog_QBaseSizeHint(const QColorDialog* self);
QSize* QColorDialog_MinimumSizeHint(const QColorDialog* self);
void QColorDialog_OnMinimumSizeHint(const QColorDialog* self, intptr_t slot);
QSize* QColorDialog_QBaseMinimumSizeHint(const QColorDialog* self);
void QColorDialog_Open(QColorDialog* self);
void QColorDialog_OnOpen(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseOpen(QColorDialog* self);
int QColorDialog_Exec(QColorDialog* self);
void QColorDialog_OnExec(QColorDialog* self, intptr_t slot);
int QColorDialog_QBaseExec(QColorDialog* self);
void QColorDialog_Accept(QColorDialog* self);
void QColorDialog_OnAccept(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseAccept(QColorDialog* self);
void QColorDialog_Reject(QColorDialog* self);
void QColorDialog_OnReject(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseReject(QColorDialog* self);
void QColorDialog_KeyPressEvent(QColorDialog* self, QKeyEvent* param1);
void QColorDialog_OnKeyPressEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseKeyPressEvent(QColorDialog* self, QKeyEvent* param1);
void QColorDialog_CloseEvent(QColorDialog* self, QCloseEvent* param1);
void QColorDialog_OnCloseEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseCloseEvent(QColorDialog* self, QCloseEvent* param1);
void QColorDialog_ShowEvent(QColorDialog* self, QShowEvent* param1);
void QColorDialog_OnShowEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseShowEvent(QColorDialog* self, QShowEvent* param1);
void QColorDialog_ResizeEvent(QColorDialog* self, QResizeEvent* param1);
void QColorDialog_OnResizeEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseResizeEvent(QColorDialog* self, QResizeEvent* param1);
void QColorDialog_ContextMenuEvent(QColorDialog* self, QContextMenuEvent* param1);
void QColorDialog_OnContextMenuEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseContextMenuEvent(QColorDialog* self, QContextMenuEvent* param1);
bool QColorDialog_EventFilter(QColorDialog* self, QObject* param1, QEvent* param2);
void QColorDialog_OnEventFilter(QColorDialog* self, intptr_t slot);
bool QColorDialog_QBaseEventFilter(QColorDialog* self, QObject* param1, QEvent* param2);
int QColorDialog_DevType(const QColorDialog* self);
void QColorDialog_OnDevType(const QColorDialog* self, intptr_t slot);
int QColorDialog_QBaseDevType(const QColorDialog* self);
int QColorDialog_HeightForWidth(const QColorDialog* self, int param1);
void QColorDialog_OnHeightForWidth(const QColorDialog* self, intptr_t slot);
int QColorDialog_QBaseHeightForWidth(const QColorDialog* self, int param1);
bool QColorDialog_HasHeightForWidth(const QColorDialog* self);
void QColorDialog_OnHasHeightForWidth(const QColorDialog* self, intptr_t slot);
bool QColorDialog_QBaseHasHeightForWidth(const QColorDialog* self);
QPaintEngine* QColorDialog_PaintEngine(const QColorDialog* self);
void QColorDialog_OnPaintEngine(const QColorDialog* self, intptr_t slot);
QPaintEngine* QColorDialog_QBasePaintEngine(const QColorDialog* self);
bool QColorDialog_Event(QColorDialog* self, QEvent* event);
void QColorDialog_OnEvent(QColorDialog* self, intptr_t slot);
bool QColorDialog_QBaseEvent(QColorDialog* self, QEvent* event);
void QColorDialog_MousePressEvent(QColorDialog* self, QMouseEvent* event);
void QColorDialog_OnMousePressEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseMousePressEvent(QColorDialog* self, QMouseEvent* event);
void QColorDialog_MouseReleaseEvent(QColorDialog* self, QMouseEvent* event);
void QColorDialog_OnMouseReleaseEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseMouseReleaseEvent(QColorDialog* self, QMouseEvent* event);
void QColorDialog_MouseDoubleClickEvent(QColorDialog* self, QMouseEvent* event);
void QColorDialog_OnMouseDoubleClickEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseMouseDoubleClickEvent(QColorDialog* self, QMouseEvent* event);
void QColorDialog_MouseMoveEvent(QColorDialog* self, QMouseEvent* event);
void QColorDialog_OnMouseMoveEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseMouseMoveEvent(QColorDialog* self, QMouseEvent* event);
void QColorDialog_WheelEvent(QColorDialog* self, QWheelEvent* event);
void QColorDialog_OnWheelEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseWheelEvent(QColorDialog* self, QWheelEvent* event);
void QColorDialog_KeyReleaseEvent(QColorDialog* self, QKeyEvent* event);
void QColorDialog_OnKeyReleaseEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseKeyReleaseEvent(QColorDialog* self, QKeyEvent* event);
void QColorDialog_FocusInEvent(QColorDialog* self, QFocusEvent* event);
void QColorDialog_OnFocusInEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseFocusInEvent(QColorDialog* self, QFocusEvent* event);
void QColorDialog_FocusOutEvent(QColorDialog* self, QFocusEvent* event);
void QColorDialog_OnFocusOutEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseFocusOutEvent(QColorDialog* self, QFocusEvent* event);
void QColorDialog_EnterEvent(QColorDialog* self, QEnterEvent* event);
void QColorDialog_OnEnterEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseEnterEvent(QColorDialog* self, QEnterEvent* event);
void QColorDialog_LeaveEvent(QColorDialog* self, QEvent* event);
void QColorDialog_OnLeaveEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseLeaveEvent(QColorDialog* self, QEvent* event);
void QColorDialog_PaintEvent(QColorDialog* self, QPaintEvent* event);
void QColorDialog_OnPaintEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBasePaintEvent(QColorDialog* self, QPaintEvent* event);
void QColorDialog_MoveEvent(QColorDialog* self, QMoveEvent* event);
void QColorDialog_OnMoveEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseMoveEvent(QColorDialog* self, QMoveEvent* event);
void QColorDialog_TabletEvent(QColorDialog* self, QTabletEvent* event);
void QColorDialog_OnTabletEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseTabletEvent(QColorDialog* self, QTabletEvent* event);
void QColorDialog_ActionEvent(QColorDialog* self, QActionEvent* event);
void QColorDialog_OnActionEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseActionEvent(QColorDialog* self, QActionEvent* event);
void QColorDialog_DragEnterEvent(QColorDialog* self, QDragEnterEvent* event);
void QColorDialog_OnDragEnterEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseDragEnterEvent(QColorDialog* self, QDragEnterEvent* event);
void QColorDialog_DragMoveEvent(QColorDialog* self, QDragMoveEvent* event);
void QColorDialog_OnDragMoveEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseDragMoveEvent(QColorDialog* self, QDragMoveEvent* event);
void QColorDialog_DragLeaveEvent(QColorDialog* self, QDragLeaveEvent* event);
void QColorDialog_OnDragLeaveEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseDragLeaveEvent(QColorDialog* self, QDragLeaveEvent* event);
void QColorDialog_DropEvent(QColorDialog* self, QDropEvent* event);
void QColorDialog_OnDropEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseDropEvent(QColorDialog* self, QDropEvent* event);
void QColorDialog_HideEvent(QColorDialog* self, QHideEvent* event);
void QColorDialog_OnHideEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseHideEvent(QColorDialog* self, QHideEvent* event);
bool QColorDialog_NativeEvent(QColorDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QColorDialog_OnNativeEvent(QColorDialog* self, intptr_t slot);
bool QColorDialog_QBaseNativeEvent(QColorDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QColorDialog_InputMethodEvent(QColorDialog* self, QInputMethodEvent* param1);
void QColorDialog_OnInputMethodEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseInputMethodEvent(QColorDialog* self, QInputMethodEvent* param1);
QVariant* QColorDialog_InputMethodQuery(const QColorDialog* self, int param1);
void QColorDialog_OnInputMethodQuery(const QColorDialog* self, intptr_t slot);
QVariant* QColorDialog_QBaseInputMethodQuery(const QColorDialog* self, int param1);
bool QColorDialog_FocusNextPrevChild(QColorDialog* self, bool next);
void QColorDialog_OnFocusNextPrevChild(QColorDialog* self, intptr_t slot);
bool QColorDialog_QBaseFocusNextPrevChild(QColorDialog* self, bool next);
void QColorDialog_TimerEvent(QColorDialog* self, QTimerEvent* event);
void QColorDialog_OnTimerEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseTimerEvent(QColorDialog* self, QTimerEvent* event);
void QColorDialog_ChildEvent(QColorDialog* self, QChildEvent* event);
void QColorDialog_OnChildEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseChildEvent(QColorDialog* self, QChildEvent* event);
void QColorDialog_CustomEvent(QColorDialog* self, QEvent* event);
void QColorDialog_OnCustomEvent(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseCustomEvent(QColorDialog* self, QEvent* event);
void QColorDialog_ConnectNotify(QColorDialog* self, QMetaMethod* signal);
void QColorDialog_OnConnectNotify(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseConnectNotify(QColorDialog* self, QMetaMethod* signal);
void QColorDialog_DisconnectNotify(QColorDialog* self, QMetaMethod* signal);
void QColorDialog_OnDisconnectNotify(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseDisconnectNotify(QColorDialog* self, QMetaMethod* signal);
int QColorDialog_Metric(const QColorDialog* self, int param1);
void QColorDialog_OnMetric(const QColorDialog* self, intptr_t slot);
int QColorDialog_QBaseMetric(const QColorDialog* self, int param1);
void QColorDialog_InitPainter(const QColorDialog* self, QPainter* painter);
void QColorDialog_OnInitPainter(const QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseInitPainter(const QColorDialog* self, QPainter* painter);
QPaintDevice* QColorDialog_Redirected(const QColorDialog* self, QPoint* offset);
void QColorDialog_OnRedirected(const QColorDialog* self, intptr_t slot);
QPaintDevice* QColorDialog_QBaseRedirected(const QColorDialog* self, QPoint* offset);
QPainter* QColorDialog_SharedPainter(const QColorDialog* self);
void QColorDialog_OnSharedPainter(const QColorDialog* self, intptr_t slot);
QPainter* QColorDialog_QBaseSharedPainter(const QColorDialog* self);
void QColorDialog_AdjustPosition(QColorDialog* self, QWidget* param1);
void QColorDialog_OnAdjustPosition(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseAdjustPosition(QColorDialog* self, QWidget* param1);
void QColorDialog_UpdateMicroFocus(QColorDialog* self);
void QColorDialog_OnUpdateMicroFocus(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseUpdateMicroFocus(QColorDialog* self);
void QColorDialog_Create(QColorDialog* self);
void QColorDialog_OnCreate(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseCreate(QColorDialog* self);
void QColorDialog_Destroy(QColorDialog* self);
void QColorDialog_OnDestroy(QColorDialog* self, intptr_t slot);
void QColorDialog_QBaseDestroy(QColorDialog* self);
bool QColorDialog_FocusNextChild(QColorDialog* self);
void QColorDialog_OnFocusNextChild(QColorDialog* self, intptr_t slot);
bool QColorDialog_QBaseFocusNextChild(QColorDialog* self);
bool QColorDialog_FocusPreviousChild(QColorDialog* self);
void QColorDialog_OnFocusPreviousChild(QColorDialog* self, intptr_t slot);
bool QColorDialog_QBaseFocusPreviousChild(QColorDialog* self);
QObject* QColorDialog_Sender(const QColorDialog* self);
void QColorDialog_OnSender(const QColorDialog* self, intptr_t slot);
QObject* QColorDialog_QBaseSender(const QColorDialog* self);
int QColorDialog_SenderSignalIndex(const QColorDialog* self);
void QColorDialog_OnSenderSignalIndex(const QColorDialog* self, intptr_t slot);
int QColorDialog_QBaseSenderSignalIndex(const QColorDialog* self);
int QColorDialog_Receivers(const QColorDialog* self, const char* signal);
void QColorDialog_OnReceivers(const QColorDialog* self, intptr_t slot);
int QColorDialog_QBaseReceivers(const QColorDialog* self, const char* signal);
bool QColorDialog_IsSignalConnected(const QColorDialog* self, QMetaMethod* signal);
void QColorDialog_OnIsSignalConnected(const QColorDialog* self, intptr_t slot);
bool QColorDialog_QBaseIsSignalConnected(const QColorDialog* self, QMetaMethod* signal);
void QColorDialog_Delete(QColorDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
