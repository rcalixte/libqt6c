#pragma once
#ifndef SRCC_LIBQABSTRACTBUTTON_HPP
#define SRCC_LIBQABSTRACTBUTTON_HPP

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
typedef struct QAbstractButton QAbstractButton;
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QButtonGroup QButtonGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
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

QAbstractButton* QAbstractButton_new(QWidget* parent);
QAbstractButton* QAbstractButton_new2();
QMetaObject* QAbstractButton_MetaObject(const QAbstractButton* self);
void* QAbstractButton_Metacast(QAbstractButton* self, const char* param1);
int QAbstractButton_Metacall(QAbstractButton* self, int param1, int param2, void** param3);
void QAbstractButton_OnMetacall(QAbstractButton* self, intptr_t slot);
int QAbstractButton_QBaseMetacall(QAbstractButton* self, int param1, int param2, void** param3);
libqt_string QAbstractButton_Tr(const char* s);
void QAbstractButton_SetText(QAbstractButton* self, libqt_string text);
libqt_string QAbstractButton_Text(const QAbstractButton* self);
void QAbstractButton_SetIcon(QAbstractButton* self, QIcon* icon);
QIcon* QAbstractButton_Icon(const QAbstractButton* self);
QSize* QAbstractButton_IconSize(const QAbstractButton* self);
void QAbstractButton_SetShortcut(QAbstractButton* self, QKeySequence* key);
QKeySequence* QAbstractButton_Shortcut(const QAbstractButton* self);
void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable);
bool QAbstractButton_IsCheckable(const QAbstractButton* self);
bool QAbstractButton_IsChecked(const QAbstractButton* self);
void QAbstractButton_SetDown(QAbstractButton* self, bool down);
bool QAbstractButton_IsDown(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat);
bool QAbstractButton_AutoRepeat(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay);
int QAbstractButton_AutoRepeatDelay(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval);
int QAbstractButton_AutoRepeatInterval(const QAbstractButton* self);
void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive);
bool QAbstractButton_AutoExclusive(const QAbstractButton* self);
QButtonGroup* QAbstractButton_Group(const QAbstractButton* self);
void QAbstractButton_SetIconSize(QAbstractButton* self, QSize* size);
void QAbstractButton_AnimateClick(QAbstractButton* self);
void QAbstractButton_Click(QAbstractButton* self);
void QAbstractButton_Toggle(QAbstractButton* self);
void QAbstractButton_SetChecked(QAbstractButton* self, bool checked);
void QAbstractButton_Pressed(QAbstractButton* self);
void QAbstractButton_Connect_Pressed(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Released(QAbstractButton* self);
void QAbstractButton_Connect_Released(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Clicked(QAbstractButton* self);
void QAbstractButton_Connect_Clicked(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Toggled(QAbstractButton* self, bool checked);
void QAbstractButton_Connect_Toggled(QAbstractButton* self, intptr_t slot);
void QAbstractButton_PaintEvent(QAbstractButton* self, QPaintEvent* e);
void QAbstractButton_OnPaintEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBasePaintEvent(QAbstractButton* self, QPaintEvent* e);
bool QAbstractButton_HitButton(const QAbstractButton* self, QPoint* pos);
void QAbstractButton_OnHitButton(const QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseHitButton(const QAbstractButton* self, QPoint* pos);
void QAbstractButton_CheckStateSet(QAbstractButton* self);
void QAbstractButton_OnCheckStateSet(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseCheckStateSet(QAbstractButton* self);
void QAbstractButton_NextCheckState(QAbstractButton* self);
void QAbstractButton_OnNextCheckState(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseNextCheckState(QAbstractButton* self);
bool QAbstractButton_Event(QAbstractButton* self, QEvent* e);
void QAbstractButton_OnEvent(QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseEvent(QAbstractButton* self, QEvent* e);
void QAbstractButton_KeyPressEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_OnKeyPressEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseKeyPressEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_KeyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_OnKeyReleaseEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseKeyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_MousePressEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_OnMousePressEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseMousePressEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_MouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_OnMouseReleaseEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseMouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_MouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_OnMouseMoveEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseMouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_FocusInEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_OnFocusInEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseFocusInEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_FocusOutEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_OnFocusOutEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseFocusOutEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_ChangeEvent(QAbstractButton* self, QEvent* e);
void QAbstractButton_OnChangeEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseChangeEvent(QAbstractButton* self, QEvent* e);
void QAbstractButton_TimerEvent(QAbstractButton* self, QTimerEvent* e);
void QAbstractButton_OnTimerEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseTimerEvent(QAbstractButton* self, QTimerEvent* e);
libqt_string QAbstractButton_Tr2(const char* s, const char* c);
libqt_string QAbstractButton_Tr3(const char* s, const char* c, int n);
void QAbstractButton_Clicked1(QAbstractButton* self, bool checked);
void QAbstractButton_Connect_Clicked1(QAbstractButton* self, intptr_t slot);
int QAbstractButton_DevType(const QAbstractButton* self);
void QAbstractButton_OnDevType(const QAbstractButton* self, intptr_t slot);
int QAbstractButton_QBaseDevType(const QAbstractButton* self);
void QAbstractButton_SetVisible(QAbstractButton* self, bool visible);
void QAbstractButton_OnSetVisible(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseSetVisible(QAbstractButton* self, bool visible);
QSize* QAbstractButton_SizeHint(const QAbstractButton* self);
void QAbstractButton_OnSizeHint(const QAbstractButton* self, intptr_t slot);
QSize* QAbstractButton_QBaseSizeHint(const QAbstractButton* self);
QSize* QAbstractButton_MinimumSizeHint(const QAbstractButton* self);
void QAbstractButton_OnMinimumSizeHint(const QAbstractButton* self, intptr_t slot);
QSize* QAbstractButton_QBaseMinimumSizeHint(const QAbstractButton* self);
int QAbstractButton_HeightForWidth(const QAbstractButton* self, int param1);
void QAbstractButton_OnHeightForWidth(const QAbstractButton* self, intptr_t slot);
int QAbstractButton_QBaseHeightForWidth(const QAbstractButton* self, int param1);
bool QAbstractButton_HasHeightForWidth(const QAbstractButton* self);
void QAbstractButton_OnHasHeightForWidth(const QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseHasHeightForWidth(const QAbstractButton* self);
QPaintEngine* QAbstractButton_PaintEngine(const QAbstractButton* self);
void QAbstractButton_OnPaintEngine(const QAbstractButton* self, intptr_t slot);
QPaintEngine* QAbstractButton_QBasePaintEngine(const QAbstractButton* self);
void QAbstractButton_MouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event);
void QAbstractButton_OnMouseDoubleClickEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseMouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event);
void QAbstractButton_WheelEvent(QAbstractButton* self, QWheelEvent* event);
void QAbstractButton_OnWheelEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseWheelEvent(QAbstractButton* self, QWheelEvent* event);
void QAbstractButton_EnterEvent(QAbstractButton* self, QEnterEvent* event);
void QAbstractButton_OnEnterEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseEnterEvent(QAbstractButton* self, QEnterEvent* event);
void QAbstractButton_LeaveEvent(QAbstractButton* self, QEvent* event);
void QAbstractButton_OnLeaveEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseLeaveEvent(QAbstractButton* self, QEvent* event);
void QAbstractButton_MoveEvent(QAbstractButton* self, QMoveEvent* event);
void QAbstractButton_OnMoveEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseMoveEvent(QAbstractButton* self, QMoveEvent* event);
void QAbstractButton_ResizeEvent(QAbstractButton* self, QResizeEvent* event);
void QAbstractButton_OnResizeEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseResizeEvent(QAbstractButton* self, QResizeEvent* event);
void QAbstractButton_CloseEvent(QAbstractButton* self, QCloseEvent* event);
void QAbstractButton_OnCloseEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseCloseEvent(QAbstractButton* self, QCloseEvent* event);
void QAbstractButton_ContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event);
void QAbstractButton_OnContextMenuEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event);
void QAbstractButton_TabletEvent(QAbstractButton* self, QTabletEvent* event);
void QAbstractButton_OnTabletEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseTabletEvent(QAbstractButton* self, QTabletEvent* event);
void QAbstractButton_ActionEvent(QAbstractButton* self, QActionEvent* event);
void QAbstractButton_OnActionEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseActionEvent(QAbstractButton* self, QActionEvent* event);
void QAbstractButton_DragEnterEvent(QAbstractButton* self, QDragEnterEvent* event);
void QAbstractButton_OnDragEnterEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseDragEnterEvent(QAbstractButton* self, QDragEnterEvent* event);
void QAbstractButton_DragMoveEvent(QAbstractButton* self, QDragMoveEvent* event);
void QAbstractButton_OnDragMoveEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseDragMoveEvent(QAbstractButton* self, QDragMoveEvent* event);
void QAbstractButton_DragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event);
void QAbstractButton_OnDragLeaveEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseDragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event);
void QAbstractButton_DropEvent(QAbstractButton* self, QDropEvent* event);
void QAbstractButton_OnDropEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseDropEvent(QAbstractButton* self, QDropEvent* event);
void QAbstractButton_ShowEvent(QAbstractButton* self, QShowEvent* event);
void QAbstractButton_OnShowEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseShowEvent(QAbstractButton* self, QShowEvent* event);
void QAbstractButton_HideEvent(QAbstractButton* self, QHideEvent* event);
void QAbstractButton_OnHideEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseHideEvent(QAbstractButton* self, QHideEvent* event);
bool QAbstractButton_NativeEvent(QAbstractButton* self, libqt_string eventType, void* message, intptr_t* result);
void QAbstractButton_OnNativeEvent(QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseNativeEvent(QAbstractButton* self, libqt_string eventType, void* message, intptr_t* result);
void QAbstractButton_InputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1);
void QAbstractButton_OnInputMethodEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseInputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1);
QVariant* QAbstractButton_InputMethodQuery(const QAbstractButton* self, int param1);
void QAbstractButton_OnInputMethodQuery(const QAbstractButton* self, intptr_t slot);
QVariant* QAbstractButton_QBaseInputMethodQuery(const QAbstractButton* self, int param1);
bool QAbstractButton_FocusNextPrevChild(QAbstractButton* self, bool next);
void QAbstractButton_OnFocusNextPrevChild(QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseFocusNextPrevChild(QAbstractButton* self, bool next);
bool QAbstractButton_EventFilter(QAbstractButton* self, QObject* watched, QEvent* event);
void QAbstractButton_OnEventFilter(QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseEventFilter(QAbstractButton* self, QObject* watched, QEvent* event);
void QAbstractButton_ChildEvent(QAbstractButton* self, QChildEvent* event);
void QAbstractButton_OnChildEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseChildEvent(QAbstractButton* self, QChildEvent* event);
void QAbstractButton_CustomEvent(QAbstractButton* self, QEvent* event);
void QAbstractButton_OnCustomEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseCustomEvent(QAbstractButton* self, QEvent* event);
void QAbstractButton_ConnectNotify(QAbstractButton* self, QMetaMethod* signal);
void QAbstractButton_OnConnectNotify(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseConnectNotify(QAbstractButton* self, QMetaMethod* signal);
void QAbstractButton_DisconnectNotify(QAbstractButton* self, QMetaMethod* signal);
void QAbstractButton_OnDisconnectNotify(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseDisconnectNotify(QAbstractButton* self, QMetaMethod* signal);
int QAbstractButton_Metric(const QAbstractButton* self, int param1);
void QAbstractButton_OnMetric(const QAbstractButton* self, intptr_t slot);
int QAbstractButton_QBaseMetric(const QAbstractButton* self, int param1);
void QAbstractButton_InitPainter(const QAbstractButton* self, QPainter* painter);
void QAbstractButton_OnInitPainter(const QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseInitPainter(const QAbstractButton* self, QPainter* painter);
QPaintDevice* QAbstractButton_Redirected(const QAbstractButton* self, QPoint* offset);
void QAbstractButton_OnRedirected(const QAbstractButton* self, intptr_t slot);
QPaintDevice* QAbstractButton_QBaseRedirected(const QAbstractButton* self, QPoint* offset);
QPainter* QAbstractButton_SharedPainter(const QAbstractButton* self);
void QAbstractButton_OnSharedPainter(const QAbstractButton* self, intptr_t slot);
QPainter* QAbstractButton_QBaseSharedPainter(const QAbstractButton* self);
void QAbstractButton_UpdateMicroFocus(QAbstractButton* self);
void QAbstractButton_OnUpdateMicroFocus(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseUpdateMicroFocus(QAbstractButton* self);
void QAbstractButton_Create(QAbstractButton* self);
void QAbstractButton_OnCreate(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseCreate(QAbstractButton* self);
void QAbstractButton_Destroy(QAbstractButton* self);
void QAbstractButton_OnDestroy(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseDestroy(QAbstractButton* self);
bool QAbstractButton_FocusNextChild(QAbstractButton* self);
void QAbstractButton_OnFocusNextChild(QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseFocusNextChild(QAbstractButton* self);
bool QAbstractButton_FocusPreviousChild(QAbstractButton* self);
void QAbstractButton_OnFocusPreviousChild(QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseFocusPreviousChild(QAbstractButton* self);
QObject* QAbstractButton_Sender(const QAbstractButton* self);
void QAbstractButton_OnSender(const QAbstractButton* self, intptr_t slot);
QObject* QAbstractButton_QBaseSender(const QAbstractButton* self);
int QAbstractButton_SenderSignalIndex(const QAbstractButton* self);
void QAbstractButton_OnSenderSignalIndex(const QAbstractButton* self, intptr_t slot);
int QAbstractButton_QBaseSenderSignalIndex(const QAbstractButton* self);
int QAbstractButton_Receivers(const QAbstractButton* self, const char* signal);
void QAbstractButton_OnReceivers(const QAbstractButton* self, intptr_t slot);
int QAbstractButton_QBaseReceivers(const QAbstractButton* self, const char* signal);
bool QAbstractButton_IsSignalConnected(const QAbstractButton* self, QMetaMethod* signal);
void QAbstractButton_OnIsSignalConnected(const QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseIsSignalConnected(const QAbstractButton* self, QMetaMethod* signal);
void QAbstractButton_Delete(QAbstractButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
