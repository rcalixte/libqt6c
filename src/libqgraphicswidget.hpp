#pragma once
#ifndef SRCC_LIBQGRAPHICSWIDGET_HPP
#define SRCC_LIBQGRAPHICSWIDGET_HPP

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
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QCursor QCursor;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemGroup QGraphicsItemGroup;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneMoveEvent QGraphicsSceneMoveEvent;
typedef struct QGraphicsSceneResizeEvent QGraphicsSceneResizeEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QGraphicsTransform QGraphicsTransform;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMarginsF QMarginsF;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QGraphicsWidget* QGraphicsWidget_new();
QGraphicsWidget* QGraphicsWidget_new2(QGraphicsItem* parent);
QGraphicsWidget* QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags);
QMetaObject* QGraphicsWidget_MetaObject(const QGraphicsWidget* self);
void* QGraphicsWidget_Metacast(QGraphicsWidget* self, const char* param1);
int QGraphicsWidget_Metacall(QGraphicsWidget* self, int param1, int param2, void** param3);
void QGraphicsWidget_OnMetacall(QGraphicsWidget* self, intptr_t slot);
int QGraphicsWidget_QBaseMetacall(QGraphicsWidget* self, int param1, int param2, void** param3);
libqt_string QGraphicsWidget_Tr(const char* s);
QGraphicsLayout* QGraphicsWidget_Layout(const QGraphicsWidget* self);
void QGraphicsWidget_SetLayout(QGraphicsWidget* self, QGraphicsLayout* layout);
void QGraphicsWidget_AdjustSize(QGraphicsWidget* self);
int QGraphicsWidget_LayoutDirection(const QGraphicsWidget* self);
void QGraphicsWidget_SetLayoutDirection(QGraphicsWidget* self, int direction);
void QGraphicsWidget_UnsetLayoutDirection(QGraphicsWidget* self);
QStyle* QGraphicsWidget_Style(const QGraphicsWidget* self);
void QGraphicsWidget_SetStyle(QGraphicsWidget* self, QStyle* style);
QFont* QGraphicsWidget_Font(const QGraphicsWidget* self);
void QGraphicsWidget_SetFont(QGraphicsWidget* self, QFont* font);
QPalette* QGraphicsWidget_Palette(const QGraphicsWidget* self);
void QGraphicsWidget_SetPalette(QGraphicsWidget* self, QPalette* palette);
bool QGraphicsWidget_AutoFillBackground(const QGraphicsWidget* self);
void QGraphicsWidget_SetAutoFillBackground(QGraphicsWidget* self, bool enabled);
void QGraphicsWidget_Resize(QGraphicsWidget* self, QSizeF* size);
void QGraphicsWidget_Resize2(QGraphicsWidget* self, double w, double h);
QSizeF* QGraphicsWidget_Size(const QGraphicsWidget* self);
void QGraphicsWidget_SetGeometry(QGraphicsWidget* self, QRectF* rect);
void QGraphicsWidget_OnSetGeometry(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseSetGeometry(QGraphicsWidget* self, QRectF* rect);
void QGraphicsWidget_SetGeometry2(QGraphicsWidget* self, double x, double y, double w, double h);
QRectF* QGraphicsWidget_Rect(const QGraphicsWidget* self);
void QGraphicsWidget_SetContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom);
void QGraphicsWidget_SetContentsMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins);
void QGraphicsWidget_GetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_OnGetContentsMargins(const QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseGetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_SetWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom);
void QGraphicsWidget_SetWindowFrameMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins);
void QGraphicsWidget_GetWindowFrameMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_UnsetWindowFrameMargins(QGraphicsWidget* self);
QRectF* QGraphicsWidget_WindowFrameGeometry(const QGraphicsWidget* self);
QRectF* QGraphicsWidget_WindowFrameRect(const QGraphicsWidget* self);
int QGraphicsWidget_WindowFlags(const QGraphicsWidget* self);
int QGraphicsWidget_WindowType(const QGraphicsWidget* self);
void QGraphicsWidget_SetWindowFlags(QGraphicsWidget* self, int wFlags);
bool QGraphicsWidget_IsActiveWindow(const QGraphicsWidget* self);
void QGraphicsWidget_SetWindowTitle(QGraphicsWidget* self, libqt_string title);
libqt_string QGraphicsWidget_WindowTitle(const QGraphicsWidget* self);
int QGraphicsWidget_FocusPolicy(const QGraphicsWidget* self);
void QGraphicsWidget_SetFocusPolicy(QGraphicsWidget* self, int policy);
void QGraphicsWidget_SetTabOrder(QGraphicsWidget* first, QGraphicsWidget* second);
QGraphicsWidget* QGraphicsWidget_FocusWidget(const QGraphicsWidget* self);
int QGraphicsWidget_GrabShortcut(QGraphicsWidget* self, QKeySequence* sequence);
void QGraphicsWidget_ReleaseShortcut(QGraphicsWidget* self, int id);
void QGraphicsWidget_SetShortcutEnabled(QGraphicsWidget* self, int id);
void QGraphicsWidget_SetShortcutAutoRepeat(QGraphicsWidget* self, int id);
void QGraphicsWidget_AddAction(QGraphicsWidget* self, QAction* action);
void QGraphicsWidget_AddActions(QGraphicsWidget* self, libqt_list /* of QAction* */ actions);
void QGraphicsWidget_InsertActions(QGraphicsWidget* self, QAction* before, libqt_list /* of QAction* */ actions);
void QGraphicsWidget_InsertAction(QGraphicsWidget* self, QAction* before, QAction* action);
void QGraphicsWidget_RemoveAction(QGraphicsWidget* self, QAction* action);
libqt_list /* of QAction* */ QGraphicsWidget_Actions(const QGraphicsWidget* self);
void QGraphicsWidget_SetAttribute(QGraphicsWidget* self, int attribute);
bool QGraphicsWidget_TestAttribute(const QGraphicsWidget* self, int attribute);
int QGraphicsWidget_Type(const QGraphicsWidget* self);
void QGraphicsWidget_OnType(const QGraphicsWidget* self, intptr_t slot);
int QGraphicsWidget_QBaseType(const QGraphicsWidget* self);
void QGraphicsWidget_Paint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_OnPaint(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBasePaint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_PaintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_OnPaintWindowFrame(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBasePaintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
QRectF* QGraphicsWidget_BoundingRect(const QGraphicsWidget* self);
void QGraphicsWidget_OnBoundingRect(const QGraphicsWidget* self, intptr_t slot);
QRectF* QGraphicsWidget_QBaseBoundingRect(const QGraphicsWidget* self);
QPainterPath* QGraphicsWidget_Shape(const QGraphicsWidget* self);
void QGraphicsWidget_OnShape(const QGraphicsWidget* self, intptr_t slot);
QPainterPath* QGraphicsWidget_QBaseShape(const QGraphicsWidget* self);
void QGraphicsWidget_GeometryChanged(QGraphicsWidget* self);
void QGraphicsWidget_Connect_GeometryChanged(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_LayoutChanged(QGraphicsWidget* self);
void QGraphicsWidget_Connect_LayoutChanged(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_Close(QGraphicsWidget* self);
void QGraphicsWidget_InitStyleOption(const QGraphicsWidget* self, QStyleOption* option);
void QGraphicsWidget_OnInitStyleOption(const QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseInitStyleOption(const QGraphicsWidget* self, QStyleOption* option);
QSizeF* QGraphicsWidget_SizeHint(const QGraphicsWidget* self, int which, QSizeF* constraint);
void QGraphicsWidget_OnSizeHint(const QGraphicsWidget* self, intptr_t slot);
QSizeF* QGraphicsWidget_QBaseSizeHint(const QGraphicsWidget* self, int which, QSizeF* constraint);
void QGraphicsWidget_UpdateGeometry(QGraphicsWidget* self);
void QGraphicsWidget_OnUpdateGeometry(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseUpdateGeometry(QGraphicsWidget* self);
QVariant* QGraphicsWidget_ItemChange(QGraphicsWidget* self, int change, QVariant* value);
void QGraphicsWidget_OnItemChange(QGraphicsWidget* self, intptr_t slot);
QVariant* QGraphicsWidget_QBaseItemChange(QGraphicsWidget* self, int change, QVariant* value);
QVariant* QGraphicsWidget_PropertyChange(QGraphicsWidget* self, libqt_string propertyName, QVariant* value);
void QGraphicsWidget_OnPropertyChange(QGraphicsWidget* self, intptr_t slot);
QVariant* QGraphicsWidget_QBasePropertyChange(QGraphicsWidget* self, libqt_string propertyName, QVariant* value);
bool QGraphicsWidget_SceneEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnSceneEvent(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseSceneEvent(QGraphicsWidget* self, QEvent* event);
bool QGraphicsWidget_WindowFrameEvent(QGraphicsWidget* self, QEvent* e);
void QGraphicsWidget_OnWindowFrameEvent(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseWindowFrameEvent(QGraphicsWidget* self, QEvent* e);
int QGraphicsWidget_WindowFrameSectionAt(const QGraphicsWidget* self, QPointF* pos);
void QGraphicsWidget_OnWindowFrameSectionAt(const QGraphicsWidget* self, intptr_t slot);
int QGraphicsWidget_QBaseWindowFrameSectionAt(const QGraphicsWidget* self, QPointF* pos);
bool QGraphicsWidget_Event(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnEvent(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_ChangeEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnChangeEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseChangeEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_CloseEvent(QGraphicsWidget* self, QCloseEvent* event);
void QGraphicsWidget_OnCloseEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseCloseEvent(QGraphicsWidget* self, QCloseEvent* event);
void QGraphicsWidget_FocusInEvent(QGraphicsWidget* self, QFocusEvent* event);
void QGraphicsWidget_OnFocusInEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseFocusInEvent(QGraphicsWidget* self, QFocusEvent* event);
bool QGraphicsWidget_FocusNextPrevChild(QGraphicsWidget* self, bool next);
void QGraphicsWidget_OnFocusNextPrevChild(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseFocusNextPrevChild(QGraphicsWidget* self, bool next);
void QGraphicsWidget_FocusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
void QGraphicsWidget_OnFocusOutEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseFocusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
void QGraphicsWidget_HideEvent(QGraphicsWidget* self, QHideEvent* event);
void QGraphicsWidget_OnHideEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseHideEvent(QGraphicsWidget* self, QHideEvent* event);
void QGraphicsWidget_MoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
void QGraphicsWidget_OnMoveEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
void QGraphicsWidget_PolishEvent(QGraphicsWidget* self);
void QGraphicsWidget_OnPolishEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBasePolishEvent(QGraphicsWidget* self);
void QGraphicsWidget_ResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
void QGraphicsWidget_OnResizeEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
void QGraphicsWidget_ShowEvent(QGraphicsWidget* self, QShowEvent* event);
void QGraphicsWidget_OnShowEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseShowEvent(QGraphicsWidget* self, QShowEvent* event);
void QGraphicsWidget_HoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_OnHoverMoveEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseHoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_HoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_OnHoverLeaveEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseHoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_GrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnGrabMouseEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseGrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_UngrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnUngrabMouseEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseUngrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_GrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnGrabKeyboardEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseGrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_UngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnUngrabKeyboardEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseUngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
libqt_string QGraphicsWidget_Tr2(const char* s, const char* c);
libqt_string QGraphicsWidget_Tr3(const char* s, const char* c, int n);
int QGraphicsWidget_GrabShortcut2(QGraphicsWidget* self, QKeySequence* sequence, int context);
void QGraphicsWidget_SetShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled);
void QGraphicsWidget_SetShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled);
void QGraphicsWidget_SetAttribute2(QGraphicsWidget* self, int attribute, bool on);
bool QGraphicsWidget_EventFilter(QGraphicsWidget* self, QObject* watched, QEvent* event);
void QGraphicsWidget_OnEventFilter(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseEventFilter(QGraphicsWidget* self, QObject* watched, QEvent* event);
void QGraphicsWidget_TimerEvent(QGraphicsWidget* self, QTimerEvent* event);
void QGraphicsWidget_OnTimerEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseTimerEvent(QGraphicsWidget* self, QTimerEvent* event);
void QGraphicsWidget_ChildEvent(QGraphicsWidget* self, QChildEvent* event);
void QGraphicsWidget_OnChildEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseChildEvent(QGraphicsWidget* self, QChildEvent* event);
void QGraphicsWidget_CustomEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnCustomEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseCustomEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_ConnectNotify(QGraphicsWidget* self, QMetaMethod* signal);
void QGraphicsWidget_OnConnectNotify(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseConnectNotify(QGraphicsWidget* self, QMetaMethod* signal);
void QGraphicsWidget_DisconnectNotify(QGraphicsWidget* self, QMetaMethod* signal);
void QGraphicsWidget_OnDisconnectNotify(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseDisconnectNotify(QGraphicsWidget* self, QMetaMethod* signal);
void QGraphicsWidget_Advance(QGraphicsWidget* self, int phase);
void QGraphicsWidget_OnAdvance(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseAdvance(QGraphicsWidget* self, int phase);
bool QGraphicsWidget_Contains(const QGraphicsWidget* self, QPointF* point);
void QGraphicsWidget_OnContains(const QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseContains(const QGraphicsWidget* self, QPointF* point);
bool QGraphicsWidget_CollidesWithItem(const QGraphicsWidget* self, QGraphicsItem* other, int mode);
void QGraphicsWidget_OnCollidesWithItem(const QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseCollidesWithItem(const QGraphicsWidget* self, QGraphicsItem* other, int mode);
bool QGraphicsWidget_CollidesWithPath(const QGraphicsWidget* self, QPainterPath* path, int mode);
void QGraphicsWidget_OnCollidesWithPath(const QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseCollidesWithPath(const QGraphicsWidget* self, QPainterPath* path, int mode);
bool QGraphicsWidget_IsObscuredBy(const QGraphicsWidget* self, QGraphicsItem* item);
void QGraphicsWidget_OnIsObscuredBy(const QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseIsObscuredBy(const QGraphicsWidget* self, QGraphicsItem* item);
QPainterPath* QGraphicsWidget_OpaqueArea(const QGraphicsWidget* self);
void QGraphicsWidget_OnOpaqueArea(const QGraphicsWidget* self, intptr_t slot);
QPainterPath* QGraphicsWidget_QBaseOpaqueArea(const QGraphicsWidget* self);
bool QGraphicsWidget_SceneEventFilter(QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event);
void QGraphicsWidget_OnSceneEventFilter(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseSceneEventFilter(QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event);
void QGraphicsWidget_ContextMenuEvent(QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsWidget_OnContextMenuEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseContextMenuEvent(QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsWidget_DragEnterEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsWidget_OnDragEnterEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseDragEnterEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsWidget_DragLeaveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsWidget_OnDragLeaveEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseDragLeaveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsWidget_DragMoveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsWidget_OnDragMoveEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseDragMoveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsWidget_DropEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsWidget_OnDropEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseDropEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsWidget_HoverEnterEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_OnHoverEnterEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseHoverEnterEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_KeyPressEvent(QGraphicsWidget* self, QKeyEvent* event);
void QGraphicsWidget_OnKeyPressEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseKeyPressEvent(QGraphicsWidget* self, QKeyEvent* event);
void QGraphicsWidget_KeyReleaseEvent(QGraphicsWidget* self, QKeyEvent* event);
void QGraphicsWidget_OnKeyReleaseEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseKeyReleaseEvent(QGraphicsWidget* self, QKeyEvent* event);
void QGraphicsWidget_MousePressEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsWidget_OnMousePressEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseMousePressEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsWidget_MouseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsWidget_OnMouseMoveEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseMouseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsWidget_MouseReleaseEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsWidget_OnMouseReleaseEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseMouseReleaseEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsWidget_MouseDoubleClickEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsWidget_OnMouseDoubleClickEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseMouseDoubleClickEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsWidget_WheelEvent(QGraphicsWidget* self, QGraphicsSceneWheelEvent* event);
void QGraphicsWidget_OnWheelEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseWheelEvent(QGraphicsWidget* self, QGraphicsSceneWheelEvent* event);
void QGraphicsWidget_InputMethodEvent(QGraphicsWidget* self, QInputMethodEvent* event);
void QGraphicsWidget_OnInputMethodEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseInputMethodEvent(QGraphicsWidget* self, QInputMethodEvent* event);
void QGraphicsWidget_SetExtension(QGraphicsWidget* self, int extension, QVariant* variant);
void QGraphicsWidget_OnSetExtension(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseSetExtension(QGraphicsWidget* self, int extension, QVariant* variant);
bool QGraphicsWidget_IsEmpty(const QGraphicsWidget* self);
void QGraphicsWidget_OnIsEmpty(const QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseIsEmpty(const QGraphicsWidget* self);
QVariant* QGraphicsWidget_InputMethodQuery(const QGraphicsWidget* self, int query);
void QGraphicsWidget_OnInputMethodQuery(const QGraphicsWidget* self, intptr_t slot);
QVariant* QGraphicsWidget_QBaseInputMethodQuery(const QGraphicsWidget* self, int query);
bool QGraphicsWidget_SupportsExtension(const QGraphicsWidget* self, int extension);
void QGraphicsWidget_OnSupportsExtension(const QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseSupportsExtension(const QGraphicsWidget* self, int extension);
QVariant* QGraphicsWidget_Extension(const QGraphicsWidget* self, QVariant* variant);
void QGraphicsWidget_OnExtension(const QGraphicsWidget* self, intptr_t slot);
QVariant* QGraphicsWidget_QBaseExtension(const QGraphicsWidget* self, QVariant* variant);
void QGraphicsWidget_UpdateMicroFocus(QGraphicsWidget* self);
void QGraphicsWidget_OnUpdateMicroFocus(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseUpdateMicroFocus(QGraphicsWidget* self);
QObject* QGraphicsWidget_Sender(const QGraphicsWidget* self);
void QGraphicsWidget_OnSender(const QGraphicsWidget* self, intptr_t slot);
QObject* QGraphicsWidget_QBaseSender(const QGraphicsWidget* self);
int QGraphicsWidget_SenderSignalIndex(const QGraphicsWidget* self);
void QGraphicsWidget_OnSenderSignalIndex(const QGraphicsWidget* self, intptr_t slot);
int QGraphicsWidget_QBaseSenderSignalIndex(const QGraphicsWidget* self);
int QGraphicsWidget_Receivers(const QGraphicsWidget* self, const char* signal);
void QGraphicsWidget_OnReceivers(const QGraphicsWidget* self, intptr_t slot);
int QGraphicsWidget_QBaseReceivers(const QGraphicsWidget* self, const char* signal);
bool QGraphicsWidget_IsSignalConnected(const QGraphicsWidget* self, QMetaMethod* signal);
void QGraphicsWidget_OnIsSignalConnected(const QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseIsSignalConnected(const QGraphicsWidget* self, QMetaMethod* signal);
void QGraphicsWidget_AddToIndex(QGraphicsWidget* self);
void QGraphicsWidget_OnAddToIndex(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseAddToIndex(QGraphicsWidget* self);
void QGraphicsWidget_RemoveFromIndex(QGraphicsWidget* self);
void QGraphicsWidget_OnRemoveFromIndex(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseRemoveFromIndex(QGraphicsWidget* self);
void QGraphicsWidget_PrepareGeometryChange(QGraphicsWidget* self);
void QGraphicsWidget_OnPrepareGeometryChange(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBasePrepareGeometryChange(QGraphicsWidget* self);
void QGraphicsWidget_SetGraphicsItem(QGraphicsWidget* self, QGraphicsItem* item);
void QGraphicsWidget_OnSetGraphicsItem(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseSetGraphicsItem(QGraphicsWidget* self, QGraphicsItem* item);
void QGraphicsWidget_SetOwnedByLayout(QGraphicsWidget* self, bool ownedByLayout);
void QGraphicsWidget_OnSetOwnedByLayout(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseSetOwnedByLayout(QGraphicsWidget* self, bool ownedByLayout);
void QGraphicsWidget_Delete(QGraphicsWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
