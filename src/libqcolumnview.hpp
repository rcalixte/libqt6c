#pragma once
#ifndef SRCC_LIBQCOLUMNVIEW_HPP
#define SRCC_LIBQCOLUMNVIEW_HPP

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
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColumnView QColumnView;
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
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QColumnView* QColumnView_new(QWidget* parent);
QColumnView* QColumnView_new2();
QMetaObject* QColumnView_MetaObject(const QColumnView* self);
void* QColumnView_Metacast(QColumnView* self, const char* param1);
int QColumnView_Metacall(QColumnView* self, int param1, int param2, void** param3);
void QColumnView_OnMetacall(QColumnView* self, intptr_t slot);
int QColumnView_QBaseMetacall(QColumnView* self, int param1, int param2, void** param3);
libqt_string QColumnView_Tr(const char* s);
void QColumnView_UpdatePreviewWidget(QColumnView* self, const QModelIndex* index);
void QColumnView_Connect_UpdatePreviewWidget(QColumnView* self, intptr_t slot);
QModelIndex* QColumnView_IndexAt(const QColumnView* self, const QPoint* point);
void QColumnView_OnIndexAt(const QColumnView* self, intptr_t slot);
QModelIndex* QColumnView_QBaseIndexAt(const QColumnView* self, const QPoint* point);
void QColumnView_ScrollTo(QColumnView* self, const QModelIndex* index, int hint);
void QColumnView_OnScrollTo(QColumnView* self, intptr_t slot);
void QColumnView_QBaseScrollTo(QColumnView* self, const QModelIndex* index, int hint);
QSize* QColumnView_SizeHint(const QColumnView* self);
void QColumnView_OnSizeHint(const QColumnView* self, intptr_t slot);
QSize* QColumnView_QBaseSizeHint(const QColumnView* self);
QRect* QColumnView_VisualRect(const QColumnView* self, const QModelIndex* index);
void QColumnView_OnVisualRect(const QColumnView* self, intptr_t slot);
QRect* QColumnView_QBaseVisualRect(const QColumnView* self, const QModelIndex* index);
void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model);
void QColumnView_OnSetModel(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetModel(QColumnView* self, QAbstractItemModel* model);
void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel);
void QColumnView_OnSetSelectionModel(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel);
void QColumnView_SetRootIndex(QColumnView* self, const QModelIndex* index);
void QColumnView_OnSetRootIndex(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetRootIndex(QColumnView* self, const QModelIndex* index);
void QColumnView_SelectAll(QColumnView* self);
void QColumnView_OnSelectAll(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSelectAll(QColumnView* self);
void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible);
bool QColumnView_ResizeGripsVisible(const QColumnView* self);
QWidget* QColumnView_PreviewWidget(const QColumnView* self);
void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget);
void QColumnView_SetColumnWidths(QColumnView* self, const libqt_list /* of int */ list);
libqt_list /* of int */ QColumnView_ColumnWidths(const QColumnView* self);
bool QColumnView_IsIndexHidden(const QColumnView* self, const QModelIndex* index);
void QColumnView_OnIsIndexHidden(const QColumnView* self, intptr_t slot);
bool QColumnView_QBaseIsIndexHidden(const QColumnView* self, const QModelIndex* index);
QModelIndex* QColumnView_MoveCursor(QColumnView* self, int cursorAction, int modifiers);
void QColumnView_OnMoveCursor(QColumnView* self, intptr_t slot);
QModelIndex* QColumnView_QBaseMoveCursor(QColumnView* self, int cursorAction, int modifiers);
void QColumnView_ResizeEvent(QColumnView* self, QResizeEvent* event);
void QColumnView_OnResizeEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseResizeEvent(QColumnView* self, QResizeEvent* event);
void QColumnView_SetSelection(QColumnView* self, const QRect* rect, int command);
void QColumnView_OnSetSelection(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetSelection(QColumnView* self, const QRect* rect, int command);
QRegion* QColumnView_VisualRegionForSelection(const QColumnView* self, const QItemSelection* selection);
void QColumnView_OnVisualRegionForSelection(const QColumnView* self, intptr_t slot);
QRegion* QColumnView_QBaseVisualRegionForSelection(const QColumnView* self, const QItemSelection* selection);
int QColumnView_HorizontalOffset(const QColumnView* self);
void QColumnView_OnHorizontalOffset(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseHorizontalOffset(const QColumnView* self);
int QColumnView_VerticalOffset(const QColumnView* self);
void QColumnView_OnVerticalOffset(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseVerticalOffset(const QColumnView* self);
void QColumnView_RowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end);
void QColumnView_OnRowsInserted(QColumnView* self, intptr_t slot);
void QColumnView_QBaseRowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end);
void QColumnView_CurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous);
void QColumnView_OnCurrentChanged(QColumnView* self, intptr_t slot);
void QColumnView_QBaseCurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous);
void QColumnView_ScrollContentsBy(QColumnView* self, int dx, int dy);
void QColumnView_OnScrollContentsBy(QColumnView* self, intptr_t slot);
void QColumnView_QBaseScrollContentsBy(QColumnView* self, int dx, int dy);
QAbstractItemView* QColumnView_CreateColumn(QColumnView* self, const QModelIndex* rootIndex);
void QColumnView_OnCreateColumn(QColumnView* self, intptr_t slot);
QAbstractItemView* QColumnView_QBaseCreateColumn(QColumnView* self, const QModelIndex* rootIndex);
libqt_string QColumnView_Tr2(const char* s, const char* c);
libqt_string QColumnView_Tr3(const char* s, const char* c, int n);
void QColumnView_KeyboardSearch(QColumnView* self, const libqt_string search);
void QColumnView_OnKeyboardSearch(QColumnView* self, intptr_t slot);
void QColumnView_QBaseKeyboardSearch(QColumnView* self, const libqt_string search);
int QColumnView_SizeHintForRow(const QColumnView* self, int row);
void QColumnView_OnSizeHintForRow(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseSizeHintForRow(const QColumnView* self, int row);
int QColumnView_SizeHintForColumn(const QColumnView* self, int column);
void QColumnView_OnSizeHintForColumn(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseSizeHintForColumn(const QColumnView* self, int column);
QAbstractItemDelegate* QColumnView_ItemDelegateForIndex(const QColumnView* self, const QModelIndex* index);
void QColumnView_OnItemDelegateForIndex(const QColumnView* self, intptr_t slot);
QAbstractItemDelegate* QColumnView_QBaseItemDelegateForIndex(const QColumnView* self, const QModelIndex* index);
QVariant* QColumnView_InputMethodQuery(const QColumnView* self, int query);
void QColumnView_OnInputMethodQuery(const QColumnView* self, intptr_t slot);
QVariant* QColumnView_QBaseInputMethodQuery(const QColumnView* self, int query);
void QColumnView_Reset(QColumnView* self);
void QColumnView_OnReset(QColumnView* self, intptr_t slot);
void QColumnView_QBaseReset(QColumnView* self);
void QColumnView_DoItemsLayout(QColumnView* self);
void QColumnView_OnDoItemsLayout(QColumnView* self, intptr_t slot);
void QColumnView_QBaseDoItemsLayout(QColumnView* self);
void QColumnView_DataChanged(QColumnView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
void QColumnView_OnDataChanged(QColumnView* self, intptr_t slot);
void QColumnView_QBaseDataChanged(QColumnView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles);
void QColumnView_RowsAboutToBeRemoved(QColumnView* self, const QModelIndex* parent, int start, int end);
void QColumnView_OnRowsAboutToBeRemoved(QColumnView* self, intptr_t slot);
void QColumnView_QBaseRowsAboutToBeRemoved(QColumnView* self, const QModelIndex* parent, int start, int end);
void QColumnView_SelectionChanged(QColumnView* self, const QItemSelection* selected, const QItemSelection* deselected);
void QColumnView_OnSelectionChanged(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSelectionChanged(QColumnView* self, const QItemSelection* selected, const QItemSelection* deselected);
void QColumnView_UpdateEditorData(QColumnView* self);
void QColumnView_OnUpdateEditorData(QColumnView* self, intptr_t slot);
void QColumnView_QBaseUpdateEditorData(QColumnView* self);
void QColumnView_UpdateEditorGeometries(QColumnView* self);
void QColumnView_OnUpdateEditorGeometries(QColumnView* self, intptr_t slot);
void QColumnView_QBaseUpdateEditorGeometries(QColumnView* self);
void QColumnView_UpdateGeometries(QColumnView* self);
void QColumnView_OnUpdateGeometries(QColumnView* self, intptr_t slot);
void QColumnView_QBaseUpdateGeometries(QColumnView* self);
void QColumnView_VerticalScrollbarAction(QColumnView* self, int action);
void QColumnView_OnVerticalScrollbarAction(QColumnView* self, intptr_t slot);
void QColumnView_QBaseVerticalScrollbarAction(QColumnView* self, int action);
void QColumnView_HorizontalScrollbarAction(QColumnView* self, int action);
void QColumnView_OnHorizontalScrollbarAction(QColumnView* self, intptr_t slot);
void QColumnView_QBaseHorizontalScrollbarAction(QColumnView* self, int action);
void QColumnView_VerticalScrollbarValueChanged(QColumnView* self, int value);
void QColumnView_OnVerticalScrollbarValueChanged(QColumnView* self, intptr_t slot);
void QColumnView_QBaseVerticalScrollbarValueChanged(QColumnView* self, int value);
void QColumnView_HorizontalScrollbarValueChanged(QColumnView* self, int value);
void QColumnView_OnHorizontalScrollbarValueChanged(QColumnView* self, intptr_t slot);
void QColumnView_QBaseHorizontalScrollbarValueChanged(QColumnView* self, int value);
void QColumnView_CloseEditor(QColumnView* self, QWidget* editor, int hint);
void QColumnView_OnCloseEditor(QColumnView* self, intptr_t slot);
void QColumnView_QBaseCloseEditor(QColumnView* self, QWidget* editor, int hint);
void QColumnView_CommitData(QColumnView* self, QWidget* editor);
void QColumnView_OnCommitData(QColumnView* self, intptr_t slot);
void QColumnView_QBaseCommitData(QColumnView* self, QWidget* editor);
void QColumnView_EditorDestroyed(QColumnView* self, QObject* editor);
void QColumnView_OnEditorDestroyed(QColumnView* self, intptr_t slot);
void QColumnView_QBaseEditorDestroyed(QColumnView* self, QObject* editor);
libqt_list /* of QModelIndex* */ QColumnView_SelectedIndexes(const QColumnView* self);
void QColumnView_OnSelectedIndexes(const QColumnView* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QColumnView_QBaseSelectedIndexes(const QColumnView* self);
bool QColumnView_Edit2(QColumnView* self, const QModelIndex* index, int trigger, QEvent* event);
void QColumnView_OnEdit2(QColumnView* self, intptr_t slot);
bool QColumnView_QBaseEdit2(QColumnView* self, const QModelIndex* index, int trigger, QEvent* event);
int QColumnView_SelectionCommand(const QColumnView* self, const QModelIndex* index, const QEvent* event);
void QColumnView_OnSelectionCommand(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseSelectionCommand(const QColumnView* self, const QModelIndex* index, const QEvent* event);
void QColumnView_StartDrag(QColumnView* self, int supportedActions);
void QColumnView_OnStartDrag(QColumnView* self, intptr_t slot);
void QColumnView_QBaseStartDrag(QColumnView* self, int supportedActions);
void QColumnView_InitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option);
void QColumnView_OnInitViewItemOption(const QColumnView* self, intptr_t slot);
void QColumnView_QBaseInitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option);
bool QColumnView_FocusNextPrevChild(QColumnView* self, bool next);
void QColumnView_OnFocusNextPrevChild(QColumnView* self, intptr_t slot);
bool QColumnView_QBaseFocusNextPrevChild(QColumnView* self, bool next);
bool QColumnView_Event(QColumnView* self, QEvent* event);
void QColumnView_OnEvent(QColumnView* self, intptr_t slot);
bool QColumnView_QBaseEvent(QColumnView* self, QEvent* event);
bool QColumnView_ViewportEvent(QColumnView* self, QEvent* event);
void QColumnView_OnViewportEvent(QColumnView* self, intptr_t slot);
bool QColumnView_QBaseViewportEvent(QColumnView* self, QEvent* event);
void QColumnView_MousePressEvent(QColumnView* self, QMouseEvent* event);
void QColumnView_OnMousePressEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseMousePressEvent(QColumnView* self, QMouseEvent* event);
void QColumnView_MouseMoveEvent(QColumnView* self, QMouseEvent* event);
void QColumnView_OnMouseMoveEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseMouseMoveEvent(QColumnView* self, QMouseEvent* event);
void QColumnView_MouseReleaseEvent(QColumnView* self, QMouseEvent* event);
void QColumnView_OnMouseReleaseEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseMouseReleaseEvent(QColumnView* self, QMouseEvent* event);
void QColumnView_MouseDoubleClickEvent(QColumnView* self, QMouseEvent* event);
void QColumnView_OnMouseDoubleClickEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseMouseDoubleClickEvent(QColumnView* self, QMouseEvent* event);
void QColumnView_DragEnterEvent(QColumnView* self, QDragEnterEvent* event);
void QColumnView_OnDragEnterEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseDragEnterEvent(QColumnView* self, QDragEnterEvent* event);
void QColumnView_DragMoveEvent(QColumnView* self, QDragMoveEvent* event);
void QColumnView_OnDragMoveEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseDragMoveEvent(QColumnView* self, QDragMoveEvent* event);
void QColumnView_DragLeaveEvent(QColumnView* self, QDragLeaveEvent* event);
void QColumnView_OnDragLeaveEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseDragLeaveEvent(QColumnView* self, QDragLeaveEvent* event);
void QColumnView_DropEvent(QColumnView* self, QDropEvent* event);
void QColumnView_OnDropEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseDropEvent(QColumnView* self, QDropEvent* event);
void QColumnView_FocusInEvent(QColumnView* self, QFocusEvent* event);
void QColumnView_OnFocusInEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseFocusInEvent(QColumnView* self, QFocusEvent* event);
void QColumnView_FocusOutEvent(QColumnView* self, QFocusEvent* event);
void QColumnView_OnFocusOutEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseFocusOutEvent(QColumnView* self, QFocusEvent* event);
void QColumnView_KeyPressEvent(QColumnView* self, QKeyEvent* event);
void QColumnView_OnKeyPressEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseKeyPressEvent(QColumnView* self, QKeyEvent* event);
void QColumnView_TimerEvent(QColumnView* self, QTimerEvent* event);
void QColumnView_OnTimerEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseTimerEvent(QColumnView* self, QTimerEvent* event);
void QColumnView_InputMethodEvent(QColumnView* self, QInputMethodEvent* event);
void QColumnView_OnInputMethodEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseInputMethodEvent(QColumnView* self, QInputMethodEvent* event);
bool QColumnView_EventFilter(QColumnView* self, QObject* object, QEvent* event);
void QColumnView_OnEventFilter(QColumnView* self, intptr_t slot);
bool QColumnView_QBaseEventFilter(QColumnView* self, QObject* object, QEvent* event);
QSize* QColumnView_ViewportSizeHint(const QColumnView* self);
void QColumnView_OnViewportSizeHint(const QColumnView* self, intptr_t slot);
QSize* QColumnView_QBaseViewportSizeHint(const QColumnView* self);
QSize* QColumnView_MinimumSizeHint(const QColumnView* self);
void QColumnView_OnMinimumSizeHint(const QColumnView* self, intptr_t slot);
QSize* QColumnView_QBaseMinimumSizeHint(const QColumnView* self);
void QColumnView_SetupViewport(QColumnView* self, QWidget* viewport);
void QColumnView_OnSetupViewport(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetupViewport(QColumnView* self, QWidget* viewport);
void QColumnView_PaintEvent(QColumnView* self, QPaintEvent* param1);
void QColumnView_OnPaintEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBasePaintEvent(QColumnView* self, QPaintEvent* param1);
void QColumnView_WheelEvent(QColumnView* self, QWheelEvent* param1);
void QColumnView_OnWheelEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseWheelEvent(QColumnView* self, QWheelEvent* param1);
void QColumnView_ContextMenuEvent(QColumnView* self, QContextMenuEvent* param1);
void QColumnView_OnContextMenuEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseContextMenuEvent(QColumnView* self, QContextMenuEvent* param1);
void QColumnView_ChangeEvent(QColumnView* self, QEvent* param1);
void QColumnView_OnChangeEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseChangeEvent(QColumnView* self, QEvent* param1);
void QColumnView_InitStyleOption(const QColumnView* self, QStyleOptionFrame* option);
void QColumnView_OnInitStyleOption(const QColumnView* self, intptr_t slot);
void QColumnView_QBaseInitStyleOption(const QColumnView* self, QStyleOptionFrame* option);
int QColumnView_DevType(const QColumnView* self);
void QColumnView_OnDevType(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseDevType(const QColumnView* self);
void QColumnView_SetVisible(QColumnView* self, bool visible);
void QColumnView_OnSetVisible(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetVisible(QColumnView* self, bool visible);
int QColumnView_HeightForWidth(const QColumnView* self, int param1);
void QColumnView_OnHeightForWidth(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseHeightForWidth(const QColumnView* self, int param1);
bool QColumnView_HasHeightForWidth(const QColumnView* self);
void QColumnView_OnHasHeightForWidth(const QColumnView* self, intptr_t slot);
bool QColumnView_QBaseHasHeightForWidth(const QColumnView* self);
QPaintEngine* QColumnView_PaintEngine(const QColumnView* self);
void QColumnView_OnPaintEngine(const QColumnView* self, intptr_t slot);
QPaintEngine* QColumnView_QBasePaintEngine(const QColumnView* self);
void QColumnView_KeyReleaseEvent(QColumnView* self, QKeyEvent* event);
void QColumnView_OnKeyReleaseEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseKeyReleaseEvent(QColumnView* self, QKeyEvent* event);
void QColumnView_EnterEvent(QColumnView* self, QEnterEvent* event);
void QColumnView_OnEnterEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseEnterEvent(QColumnView* self, QEnterEvent* event);
void QColumnView_LeaveEvent(QColumnView* self, QEvent* event);
void QColumnView_OnLeaveEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseLeaveEvent(QColumnView* self, QEvent* event);
void QColumnView_MoveEvent(QColumnView* self, QMoveEvent* event);
void QColumnView_OnMoveEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseMoveEvent(QColumnView* self, QMoveEvent* event);
void QColumnView_CloseEvent(QColumnView* self, QCloseEvent* event);
void QColumnView_OnCloseEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseCloseEvent(QColumnView* self, QCloseEvent* event);
void QColumnView_TabletEvent(QColumnView* self, QTabletEvent* event);
void QColumnView_OnTabletEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseTabletEvent(QColumnView* self, QTabletEvent* event);
void QColumnView_ActionEvent(QColumnView* self, QActionEvent* event);
void QColumnView_OnActionEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseActionEvent(QColumnView* self, QActionEvent* event);
void QColumnView_ShowEvent(QColumnView* self, QShowEvent* event);
void QColumnView_OnShowEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseShowEvent(QColumnView* self, QShowEvent* event);
void QColumnView_HideEvent(QColumnView* self, QHideEvent* event);
void QColumnView_OnHideEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseHideEvent(QColumnView* self, QHideEvent* event);
bool QColumnView_NativeEvent(QColumnView* self, const libqt_string eventType, void* message, intptr_t* result);
void QColumnView_OnNativeEvent(QColumnView* self, intptr_t slot);
bool QColumnView_QBaseNativeEvent(QColumnView* self, const libqt_string eventType, void* message, intptr_t* result);
int QColumnView_Metric(const QColumnView* self, int param1);
void QColumnView_OnMetric(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseMetric(const QColumnView* self, int param1);
void QColumnView_InitPainter(const QColumnView* self, QPainter* painter);
void QColumnView_OnInitPainter(const QColumnView* self, intptr_t slot);
void QColumnView_QBaseInitPainter(const QColumnView* self, QPainter* painter);
QPaintDevice* QColumnView_Redirected(const QColumnView* self, QPoint* offset);
void QColumnView_OnRedirected(const QColumnView* self, intptr_t slot);
QPaintDevice* QColumnView_QBaseRedirected(const QColumnView* self, QPoint* offset);
QPainter* QColumnView_SharedPainter(const QColumnView* self);
void QColumnView_OnSharedPainter(const QColumnView* self, intptr_t slot);
QPainter* QColumnView_QBaseSharedPainter(const QColumnView* self);
void QColumnView_ChildEvent(QColumnView* self, QChildEvent* event);
void QColumnView_OnChildEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseChildEvent(QColumnView* self, QChildEvent* event);
void QColumnView_CustomEvent(QColumnView* self, QEvent* event);
void QColumnView_OnCustomEvent(QColumnView* self, intptr_t slot);
void QColumnView_QBaseCustomEvent(QColumnView* self, QEvent* event);
void QColumnView_ConnectNotify(QColumnView* self, const QMetaMethod* signal);
void QColumnView_OnConnectNotify(QColumnView* self, intptr_t slot);
void QColumnView_QBaseConnectNotify(QColumnView* self, const QMetaMethod* signal);
void QColumnView_DisconnectNotify(QColumnView* self, const QMetaMethod* signal);
void QColumnView_OnDisconnectNotify(QColumnView* self, intptr_t slot);
void QColumnView_QBaseDisconnectNotify(QColumnView* self, const QMetaMethod* signal);
void QColumnView_InitializeColumn(const QColumnView* self, QAbstractItemView* column);
void QColumnView_OnInitializeColumn(const QColumnView* self, intptr_t slot);
void QColumnView_QBaseInitializeColumn(const QColumnView* self, QAbstractItemView* column);
int QColumnView_State(const QColumnView* self);
void QColumnView_OnState(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseState(const QColumnView* self);
void QColumnView_SetState(QColumnView* self, int state);
void QColumnView_OnSetState(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetState(QColumnView* self, int state);
void QColumnView_ScheduleDelayedItemsLayout(QColumnView* self);
void QColumnView_OnScheduleDelayedItemsLayout(QColumnView* self, intptr_t slot);
void QColumnView_QBaseScheduleDelayedItemsLayout(QColumnView* self);
void QColumnView_ExecuteDelayedItemsLayout(QColumnView* self);
void QColumnView_OnExecuteDelayedItemsLayout(QColumnView* self, intptr_t slot);
void QColumnView_QBaseExecuteDelayedItemsLayout(QColumnView* self);
void QColumnView_SetDirtyRegion(QColumnView* self, const QRegion* region);
void QColumnView_OnSetDirtyRegion(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetDirtyRegion(QColumnView* self, const QRegion* region);
void QColumnView_ScrollDirtyRegion(QColumnView* self, int dx, int dy);
void QColumnView_OnScrollDirtyRegion(QColumnView* self, intptr_t slot);
void QColumnView_QBaseScrollDirtyRegion(QColumnView* self, int dx, int dy);
QPoint* QColumnView_DirtyRegionOffset(const QColumnView* self);
void QColumnView_OnDirtyRegionOffset(const QColumnView* self, intptr_t slot);
QPoint* QColumnView_QBaseDirtyRegionOffset(const QColumnView* self);
void QColumnView_StartAutoScroll(QColumnView* self);
void QColumnView_OnStartAutoScroll(QColumnView* self, intptr_t slot);
void QColumnView_QBaseStartAutoScroll(QColumnView* self);
void QColumnView_StopAutoScroll(QColumnView* self);
void QColumnView_OnStopAutoScroll(QColumnView* self, intptr_t slot);
void QColumnView_QBaseStopAutoScroll(QColumnView* self);
void QColumnView_DoAutoScroll(QColumnView* self);
void QColumnView_OnDoAutoScroll(QColumnView* self, intptr_t slot);
void QColumnView_QBaseDoAutoScroll(QColumnView* self);
int QColumnView_DropIndicatorPosition(const QColumnView* self);
void QColumnView_OnDropIndicatorPosition(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseDropIndicatorPosition(const QColumnView* self);
void QColumnView_SetViewportMargins(QColumnView* self, int left, int top, int right, int bottom);
void QColumnView_OnSetViewportMargins(QColumnView* self, intptr_t slot);
void QColumnView_QBaseSetViewportMargins(QColumnView* self, int left, int top, int right, int bottom);
QMargins* QColumnView_ViewportMargins(const QColumnView* self);
void QColumnView_OnViewportMargins(const QColumnView* self, intptr_t slot);
QMargins* QColumnView_QBaseViewportMargins(const QColumnView* self);
void QColumnView_DrawFrame(QColumnView* self, QPainter* param1);
void QColumnView_OnDrawFrame(QColumnView* self, intptr_t slot);
void QColumnView_QBaseDrawFrame(QColumnView* self, QPainter* param1);
void QColumnView_UpdateMicroFocus(QColumnView* self);
void QColumnView_OnUpdateMicroFocus(QColumnView* self, intptr_t slot);
void QColumnView_QBaseUpdateMicroFocus(QColumnView* self);
void QColumnView_Create(QColumnView* self);
void QColumnView_OnCreate(QColumnView* self, intptr_t slot);
void QColumnView_QBaseCreate(QColumnView* self);
void QColumnView_Destroy(QColumnView* self);
void QColumnView_OnDestroy(QColumnView* self, intptr_t slot);
void QColumnView_QBaseDestroy(QColumnView* self);
bool QColumnView_FocusNextChild(QColumnView* self);
void QColumnView_OnFocusNextChild(QColumnView* self, intptr_t slot);
bool QColumnView_QBaseFocusNextChild(QColumnView* self);
bool QColumnView_FocusPreviousChild(QColumnView* self);
void QColumnView_OnFocusPreviousChild(QColumnView* self, intptr_t slot);
bool QColumnView_QBaseFocusPreviousChild(QColumnView* self);
QObject* QColumnView_Sender(const QColumnView* self);
void QColumnView_OnSender(const QColumnView* self, intptr_t slot);
QObject* QColumnView_QBaseSender(const QColumnView* self);
int QColumnView_SenderSignalIndex(const QColumnView* self);
void QColumnView_OnSenderSignalIndex(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseSenderSignalIndex(const QColumnView* self);
int QColumnView_Receivers(const QColumnView* self, const char* signal);
void QColumnView_OnReceivers(const QColumnView* self, intptr_t slot);
int QColumnView_QBaseReceivers(const QColumnView* self, const char* signal);
bool QColumnView_IsSignalConnected(const QColumnView* self, const QMetaMethod* signal);
void QColumnView_OnIsSignalConnected(const QColumnView* self, intptr_t slot);
bool QColumnView_QBaseIsSignalConnected(const QColumnView* self, const QMetaMethod* signal);
double QColumnView_GetDecodedMetricF(const QColumnView* self, int metricA, int metricB);
void QColumnView_OnGetDecodedMetricF(const QColumnView* self, intptr_t slot);
double QColumnView_QBaseGetDecodedMetricF(const QColumnView* self, int metricA, int metricB);
void QColumnView_Delete(QColumnView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
