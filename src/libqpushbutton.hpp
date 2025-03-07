#pragma once
#ifndef SRCC_LIBQPUSHBUTTON_HPP
#define SRCC_LIBQPUSHBUTTON_HPP

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
typedef struct QMenu QMenu;
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
typedef struct QPushButton QPushButton;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

QPushButton* QPushButton_new(QWidget* parent);
QPushButton* QPushButton_new2();
QPushButton* QPushButton_new3(libqt_string text);
QPushButton* QPushButton_new4(QIcon* icon, libqt_string text);
QPushButton* QPushButton_new5(libqt_string text, QWidget* parent);
QPushButton* QPushButton_new6(QIcon* icon, libqt_string text, QWidget* parent);
QMetaObject* QPushButton_MetaObject(const QPushButton* self);
void* QPushButton_Metacast(QPushButton* self, const char* param1);
int QPushButton_Metacall(QPushButton* self, int param1, int param2, void** param3);
void QPushButton_OnMetacall(QPushButton* self, intptr_t slot);
int QPushButton_QBaseMetacall(QPushButton* self, int param1, int param2, void** param3);
libqt_string QPushButton_Tr(const char* s);
QSize* QPushButton_SizeHint(const QPushButton* self);
void QPushButton_OnSizeHint(const QPushButton* self, intptr_t slot);
QSize* QPushButton_QBaseSizeHint(const QPushButton* self);
QSize* QPushButton_MinimumSizeHint(const QPushButton* self);
void QPushButton_OnMinimumSizeHint(const QPushButton* self, intptr_t slot);
QSize* QPushButton_QBaseMinimumSizeHint(const QPushButton* self);
bool QPushButton_AutoDefault(const QPushButton* self);
void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault);
bool QPushButton_IsDefault(const QPushButton* self);
void QPushButton_SetDefault(QPushButton* self, bool defaultVal);
void QPushButton_SetMenu(QPushButton* self, QMenu* menu);
QMenu* QPushButton_Menu(const QPushButton* self);
void QPushButton_SetFlat(QPushButton* self, bool flat);
bool QPushButton_IsFlat(const QPushButton* self);
void QPushButton_ShowMenu(QPushButton* self);
bool QPushButton_Event(QPushButton* self, QEvent* e);
void QPushButton_OnEvent(QPushButton* self, intptr_t slot);
bool QPushButton_QBaseEvent(QPushButton* self, QEvent* e);
void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1);
void QPushButton_OnPaintEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBasePaintEvent(QPushButton* self, QPaintEvent* param1);
void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1);
void QPushButton_OnKeyPressEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseKeyPressEvent(QPushButton* self, QKeyEvent* param1);
void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_OnFocusInEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseFocusInEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_OnFocusOutEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseFocusOutEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_MouseMoveEvent(QPushButton* self, QMouseEvent* param1);
void QPushButton_OnMouseMoveEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseMouseMoveEvent(QPushButton* self, QMouseEvent* param1);
void QPushButton_InitStyleOption(const QPushButton* self, QStyleOptionButton* option);
void QPushButton_OnInitStyleOption(const QPushButton* self, intptr_t slot);
void QPushButton_QBaseInitStyleOption(const QPushButton* self, QStyleOptionButton* option);
bool QPushButton_HitButton(const QPushButton* self, QPoint* pos);
void QPushButton_OnHitButton(const QPushButton* self, intptr_t slot);
bool QPushButton_QBaseHitButton(const QPushButton* self, QPoint* pos);
libqt_string QPushButton_Tr2(const char* s, const char* c);
libqt_string QPushButton_Tr3(const char* s, const char* c, int n);
void QPushButton_CheckStateSet(QPushButton* self);
void QPushButton_OnCheckStateSet(QPushButton* self, intptr_t slot);
void QPushButton_QBaseCheckStateSet(QPushButton* self);
void QPushButton_NextCheckState(QPushButton* self);
void QPushButton_OnNextCheckState(QPushButton* self, intptr_t slot);
void QPushButton_QBaseNextCheckState(QPushButton* self);
void QPushButton_KeyReleaseEvent(QPushButton* self, QKeyEvent* e);
void QPushButton_OnKeyReleaseEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseKeyReleaseEvent(QPushButton* self, QKeyEvent* e);
void QPushButton_MousePressEvent(QPushButton* self, QMouseEvent* e);
void QPushButton_OnMousePressEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseMousePressEvent(QPushButton* self, QMouseEvent* e);
void QPushButton_MouseReleaseEvent(QPushButton* self, QMouseEvent* e);
void QPushButton_OnMouseReleaseEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseMouseReleaseEvent(QPushButton* self, QMouseEvent* e);
void QPushButton_ChangeEvent(QPushButton* self, QEvent* e);
void QPushButton_OnChangeEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseChangeEvent(QPushButton* self, QEvent* e);
void QPushButton_TimerEvent(QPushButton* self, QTimerEvent* e);
void QPushButton_OnTimerEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseTimerEvent(QPushButton* self, QTimerEvent* e);
int QPushButton_DevType(const QPushButton* self);
void QPushButton_OnDevType(const QPushButton* self, intptr_t slot);
int QPushButton_QBaseDevType(const QPushButton* self);
void QPushButton_SetVisible(QPushButton* self, bool visible);
void QPushButton_OnSetVisible(QPushButton* self, intptr_t slot);
void QPushButton_QBaseSetVisible(QPushButton* self, bool visible);
int QPushButton_HeightForWidth(const QPushButton* self, int param1);
void QPushButton_OnHeightForWidth(const QPushButton* self, intptr_t slot);
int QPushButton_QBaseHeightForWidth(const QPushButton* self, int param1);
bool QPushButton_HasHeightForWidth(const QPushButton* self);
void QPushButton_OnHasHeightForWidth(const QPushButton* self, intptr_t slot);
bool QPushButton_QBaseHasHeightForWidth(const QPushButton* self);
QPaintEngine* QPushButton_PaintEngine(const QPushButton* self);
void QPushButton_OnPaintEngine(const QPushButton* self, intptr_t slot);
QPaintEngine* QPushButton_QBasePaintEngine(const QPushButton* self);
void QPushButton_MouseDoubleClickEvent(QPushButton* self, QMouseEvent* event);
void QPushButton_OnMouseDoubleClickEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseMouseDoubleClickEvent(QPushButton* self, QMouseEvent* event);
void QPushButton_WheelEvent(QPushButton* self, QWheelEvent* event);
void QPushButton_OnWheelEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseWheelEvent(QPushButton* self, QWheelEvent* event);
void QPushButton_EnterEvent(QPushButton* self, QEnterEvent* event);
void QPushButton_OnEnterEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseEnterEvent(QPushButton* self, QEnterEvent* event);
void QPushButton_LeaveEvent(QPushButton* self, QEvent* event);
void QPushButton_OnLeaveEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseLeaveEvent(QPushButton* self, QEvent* event);
void QPushButton_MoveEvent(QPushButton* self, QMoveEvent* event);
void QPushButton_OnMoveEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseMoveEvent(QPushButton* self, QMoveEvent* event);
void QPushButton_ResizeEvent(QPushButton* self, QResizeEvent* event);
void QPushButton_OnResizeEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseResizeEvent(QPushButton* self, QResizeEvent* event);
void QPushButton_CloseEvent(QPushButton* self, QCloseEvent* event);
void QPushButton_OnCloseEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseCloseEvent(QPushButton* self, QCloseEvent* event);
void QPushButton_ContextMenuEvent(QPushButton* self, QContextMenuEvent* event);
void QPushButton_OnContextMenuEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseContextMenuEvent(QPushButton* self, QContextMenuEvent* event);
void QPushButton_TabletEvent(QPushButton* self, QTabletEvent* event);
void QPushButton_OnTabletEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseTabletEvent(QPushButton* self, QTabletEvent* event);
void QPushButton_ActionEvent(QPushButton* self, QActionEvent* event);
void QPushButton_OnActionEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseActionEvent(QPushButton* self, QActionEvent* event);
void QPushButton_DragEnterEvent(QPushButton* self, QDragEnterEvent* event);
void QPushButton_OnDragEnterEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseDragEnterEvent(QPushButton* self, QDragEnterEvent* event);
void QPushButton_DragMoveEvent(QPushButton* self, QDragMoveEvent* event);
void QPushButton_OnDragMoveEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseDragMoveEvent(QPushButton* self, QDragMoveEvent* event);
void QPushButton_DragLeaveEvent(QPushButton* self, QDragLeaveEvent* event);
void QPushButton_OnDragLeaveEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseDragLeaveEvent(QPushButton* self, QDragLeaveEvent* event);
void QPushButton_DropEvent(QPushButton* self, QDropEvent* event);
void QPushButton_OnDropEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseDropEvent(QPushButton* self, QDropEvent* event);
void QPushButton_ShowEvent(QPushButton* self, QShowEvent* event);
void QPushButton_OnShowEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseShowEvent(QPushButton* self, QShowEvent* event);
void QPushButton_HideEvent(QPushButton* self, QHideEvent* event);
void QPushButton_OnHideEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseHideEvent(QPushButton* self, QHideEvent* event);
bool QPushButton_NativeEvent(QPushButton* self, libqt_string eventType, void* message, intptr_t* result);
void QPushButton_OnNativeEvent(QPushButton* self, intptr_t slot);
bool QPushButton_QBaseNativeEvent(QPushButton* self, libqt_string eventType, void* message, intptr_t* result);
void QPushButton_InputMethodEvent(QPushButton* self, QInputMethodEvent* param1);
void QPushButton_OnInputMethodEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseInputMethodEvent(QPushButton* self, QInputMethodEvent* param1);
QVariant* QPushButton_InputMethodQuery(const QPushButton* self, int param1);
void QPushButton_OnInputMethodQuery(const QPushButton* self, intptr_t slot);
QVariant* QPushButton_QBaseInputMethodQuery(const QPushButton* self, int param1);
bool QPushButton_FocusNextPrevChild(QPushButton* self, bool next);
void QPushButton_OnFocusNextPrevChild(QPushButton* self, intptr_t slot);
bool QPushButton_QBaseFocusNextPrevChild(QPushButton* self, bool next);
bool QPushButton_EventFilter(QPushButton* self, QObject* watched, QEvent* event);
void QPushButton_OnEventFilter(QPushButton* self, intptr_t slot);
bool QPushButton_QBaseEventFilter(QPushButton* self, QObject* watched, QEvent* event);
void QPushButton_ChildEvent(QPushButton* self, QChildEvent* event);
void QPushButton_OnChildEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseChildEvent(QPushButton* self, QChildEvent* event);
void QPushButton_CustomEvent(QPushButton* self, QEvent* event);
void QPushButton_OnCustomEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseCustomEvent(QPushButton* self, QEvent* event);
void QPushButton_ConnectNotify(QPushButton* self, QMetaMethod* signal);
void QPushButton_OnConnectNotify(QPushButton* self, intptr_t slot);
void QPushButton_QBaseConnectNotify(QPushButton* self, QMetaMethod* signal);
void QPushButton_DisconnectNotify(QPushButton* self, QMetaMethod* signal);
void QPushButton_OnDisconnectNotify(QPushButton* self, intptr_t slot);
void QPushButton_QBaseDisconnectNotify(QPushButton* self, QMetaMethod* signal);
int QPushButton_Metric(const QPushButton* self, int param1);
void QPushButton_OnMetric(const QPushButton* self, intptr_t slot);
int QPushButton_QBaseMetric(const QPushButton* self, int param1);
void QPushButton_InitPainter(const QPushButton* self, QPainter* painter);
void QPushButton_OnInitPainter(const QPushButton* self, intptr_t slot);
void QPushButton_QBaseInitPainter(const QPushButton* self, QPainter* painter);
QPaintDevice* QPushButton_Redirected(const QPushButton* self, QPoint* offset);
void QPushButton_OnRedirected(const QPushButton* self, intptr_t slot);
QPaintDevice* QPushButton_QBaseRedirected(const QPushButton* self, QPoint* offset);
QPainter* QPushButton_SharedPainter(const QPushButton* self);
void QPushButton_OnSharedPainter(const QPushButton* self, intptr_t slot);
QPainter* QPushButton_QBaseSharedPainter(const QPushButton* self);
void QPushButton_UpdateMicroFocus(QPushButton* self);
void QPushButton_OnUpdateMicroFocus(QPushButton* self, intptr_t slot);
void QPushButton_QBaseUpdateMicroFocus(QPushButton* self);
void QPushButton_Create(QPushButton* self);
void QPushButton_OnCreate(QPushButton* self, intptr_t slot);
void QPushButton_QBaseCreate(QPushButton* self);
void QPushButton_Destroy(QPushButton* self);
void QPushButton_OnDestroy(QPushButton* self, intptr_t slot);
void QPushButton_QBaseDestroy(QPushButton* self);
bool QPushButton_FocusNextChild(QPushButton* self);
void QPushButton_OnFocusNextChild(QPushButton* self, intptr_t slot);
bool QPushButton_QBaseFocusNextChild(QPushButton* self);
bool QPushButton_FocusPreviousChild(QPushButton* self);
void QPushButton_OnFocusPreviousChild(QPushButton* self, intptr_t slot);
bool QPushButton_QBaseFocusPreviousChild(QPushButton* self);
QObject* QPushButton_Sender(const QPushButton* self);
void QPushButton_OnSender(const QPushButton* self, intptr_t slot);
QObject* QPushButton_QBaseSender(const QPushButton* self);
int QPushButton_SenderSignalIndex(const QPushButton* self);
void QPushButton_OnSenderSignalIndex(const QPushButton* self, intptr_t slot);
int QPushButton_QBaseSenderSignalIndex(const QPushButton* self);
int QPushButton_Receivers(const QPushButton* self, const char* signal);
void QPushButton_OnReceivers(const QPushButton* self, intptr_t slot);
int QPushButton_QBaseReceivers(const QPushButton* self, const char* signal);
bool QPushButton_IsSignalConnected(const QPushButton* self, QMetaMethod* signal);
void QPushButton_OnIsSignalConnected(const QPushButton* self, intptr_t slot);
bool QPushButton_QBaseIsSignalConnected(const QPushButton* self, QMetaMethod* signal);
void QPushButton_Delete(QPushButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
