#pragma once
#ifndef SRCC_LIBQTREEVIEW_HPP
#define SRCC_LIBQTREEVIEW_HPP

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
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractScrollArea QAbstractScrollArea;
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
typedef struct QFrame QFrame;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHeaderView QHeaderView;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLayout QLayout;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QModelIndex QModelIndex;
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
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTreeView QTreeView;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

QTreeView* QTreeView_new(QWidget* parent);
QTreeView* QTreeView_new2();
QMetaObject* QTreeView_MetaObject(const QTreeView* self);
void* QTreeView_Metacast(QTreeView* self, const char* param1);
int QTreeView_Metacall(QTreeView* self, int param1, int param2, void** param3);
void QTreeView_OnMetacall(QTreeView* self, intptr_t slot);
int QTreeView_QBaseMetacall(QTreeView* self, int param1, int param2, void** param3);
libqt_string QTreeView_Tr(const char* s);
void QTreeView_SetModel(QTreeView* self, QAbstractItemModel* model);
void QTreeView_OnSetModel(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetModel(QTreeView* self, QAbstractItemModel* model);
void QTreeView_SetRootIndex(QTreeView* self, QModelIndex* index);
void QTreeView_OnSetRootIndex(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetRootIndex(QTreeView* self, QModelIndex* index);
void QTreeView_SetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel);
void QTreeView_OnSetSelectionModel(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel);
QHeaderView* QTreeView_Header(const QTreeView* self);
void QTreeView_SetHeader(QTreeView* self, QHeaderView* header);
int QTreeView_AutoExpandDelay(const QTreeView* self);
void QTreeView_SetAutoExpandDelay(QTreeView* self, int delay);
int QTreeView_Indentation(const QTreeView* self);
void QTreeView_SetIndentation(QTreeView* self, int i);
void QTreeView_ResetIndentation(QTreeView* self);
bool QTreeView_RootIsDecorated(const QTreeView* self);
void QTreeView_SetRootIsDecorated(QTreeView* self, bool show);
bool QTreeView_UniformRowHeights(const QTreeView* self);
void QTreeView_SetUniformRowHeights(QTreeView* self, bool uniform);
bool QTreeView_ItemsExpandable(const QTreeView* self);
void QTreeView_SetItemsExpandable(QTreeView* self, bool enable);
bool QTreeView_ExpandsOnDoubleClick(const QTreeView* self);
void QTreeView_SetExpandsOnDoubleClick(QTreeView* self, bool enable);
int QTreeView_ColumnViewportPosition(const QTreeView* self, int column);
int QTreeView_ColumnWidth(const QTreeView* self, int column);
void QTreeView_SetColumnWidth(QTreeView* self, int column, int width);
int QTreeView_ColumnAt(const QTreeView* self, int x);
bool QTreeView_IsColumnHidden(const QTreeView* self, int column);
void QTreeView_SetColumnHidden(QTreeView* self, int column, bool hide);
bool QTreeView_IsHeaderHidden(const QTreeView* self);
void QTreeView_SetHeaderHidden(QTreeView* self, bool hide);
bool QTreeView_IsRowHidden(const QTreeView* self, int row, QModelIndex* parent);
void QTreeView_SetRowHidden(QTreeView* self, int row, QModelIndex* parent, bool hide);
bool QTreeView_IsFirstColumnSpanned(const QTreeView* self, int row, QModelIndex* parent);
void QTreeView_SetFirstColumnSpanned(QTreeView* self, int row, QModelIndex* parent, bool span);
bool QTreeView_IsExpanded(const QTreeView* self, QModelIndex* index);
void QTreeView_SetExpanded(QTreeView* self, QModelIndex* index, bool expand);
void QTreeView_SetSortingEnabled(QTreeView* self, bool enable);
bool QTreeView_IsSortingEnabled(const QTreeView* self);
void QTreeView_SetAnimated(QTreeView* self, bool enable);
bool QTreeView_IsAnimated(const QTreeView* self);
void QTreeView_SetAllColumnsShowFocus(QTreeView* self, bool enable);
bool QTreeView_AllColumnsShowFocus(const QTreeView* self);
void QTreeView_SetWordWrap(QTreeView* self, bool on);
bool QTreeView_WordWrap(const QTreeView* self);
void QTreeView_SetTreePosition(QTreeView* self, int logicalIndex);
int QTreeView_TreePosition(const QTreeView* self);
void QTreeView_KeyboardSearch(QTreeView* self, libqt_string search);
void QTreeView_OnKeyboardSearch(QTreeView* self, intptr_t slot);
void QTreeView_QBaseKeyboardSearch(QTreeView* self, libqt_string search);
QRect* QTreeView_VisualRect(const QTreeView* self, QModelIndex* index);
void QTreeView_OnVisualRect(const QTreeView* self, intptr_t slot);
QRect* QTreeView_QBaseVisualRect(const QTreeView* self, QModelIndex* index);
void QTreeView_ScrollTo(QTreeView* self, QModelIndex* index, int hint);
void QTreeView_OnScrollTo(QTreeView* self, intptr_t slot);
void QTreeView_QBaseScrollTo(QTreeView* self, QModelIndex* index, int hint);
QModelIndex* QTreeView_IndexAt(const QTreeView* self, QPoint* p);
void QTreeView_OnIndexAt(const QTreeView* self, intptr_t slot);
QModelIndex* QTreeView_QBaseIndexAt(const QTreeView* self, QPoint* p);
QModelIndex* QTreeView_IndexAbove(const QTreeView* self, QModelIndex* index);
QModelIndex* QTreeView_IndexBelow(const QTreeView* self, QModelIndex* index);
void QTreeView_DoItemsLayout(QTreeView* self);
void QTreeView_OnDoItemsLayout(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDoItemsLayout(QTreeView* self);
void QTreeView_Reset(QTreeView* self);
void QTreeView_OnReset(QTreeView* self, intptr_t slot);
void QTreeView_QBaseReset(QTreeView* self);
void QTreeView_DataChanged(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles);
void QTreeView_OnDataChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDataChanged(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles);
void QTreeView_SelectAll(QTreeView* self);
void QTreeView_OnSelectAll(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSelectAll(QTreeView* self);
void QTreeView_Expanded(QTreeView* self, QModelIndex* index);
void QTreeView_Connect_Expanded(QTreeView* self, intptr_t slot);
void QTreeView_Collapsed(QTreeView* self, QModelIndex* index);
void QTreeView_Connect_Collapsed(QTreeView* self, intptr_t slot);
void QTreeView_HideColumn(QTreeView* self, int column);
void QTreeView_ShowColumn(QTreeView* self, int column);
void QTreeView_Expand(QTreeView* self, QModelIndex* index);
void QTreeView_Collapse(QTreeView* self, QModelIndex* index);
void QTreeView_ResizeColumnToContents(QTreeView* self, int column);
void QTreeView_SortByColumn(QTreeView* self, int column, int order);
void QTreeView_ExpandAll(QTreeView* self);
void QTreeView_ExpandRecursively(QTreeView* self, QModelIndex* index);
void QTreeView_CollapseAll(QTreeView* self);
void QTreeView_ExpandToDepth(QTreeView* self, int depth);
void QTreeView_VerticalScrollbarValueChanged(QTreeView* self, int value);
void QTreeView_OnVerticalScrollbarValueChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseVerticalScrollbarValueChanged(QTreeView* self, int value);
void QTreeView_ScrollContentsBy(QTreeView* self, int dx, int dy);
void QTreeView_OnScrollContentsBy(QTreeView* self, intptr_t slot);
void QTreeView_QBaseScrollContentsBy(QTreeView* self, int dx, int dy);
void QTreeView_RowsInserted(QTreeView* self, QModelIndex* parent, int start, int end);
void QTreeView_OnRowsInserted(QTreeView* self, intptr_t slot);
void QTreeView_QBaseRowsInserted(QTreeView* self, QModelIndex* parent, int start, int end);
void QTreeView_RowsAboutToBeRemoved(QTreeView* self, QModelIndex* parent, int start, int end);
void QTreeView_OnRowsAboutToBeRemoved(QTreeView* self, intptr_t slot);
void QTreeView_QBaseRowsAboutToBeRemoved(QTreeView* self, QModelIndex* parent, int start, int end);
QModelIndex* QTreeView_MoveCursor(QTreeView* self, int cursorAction, int modifiers);
void QTreeView_OnMoveCursor(QTreeView* self, intptr_t slot);
QModelIndex* QTreeView_QBaseMoveCursor(QTreeView* self, int cursorAction, int modifiers);
int QTreeView_HorizontalOffset(const QTreeView* self);
void QTreeView_OnHorizontalOffset(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseHorizontalOffset(const QTreeView* self);
int QTreeView_VerticalOffset(const QTreeView* self);
void QTreeView_OnVerticalOffset(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseVerticalOffset(const QTreeView* self);
void QTreeView_SetSelection(QTreeView* self, QRect* rect, int command);
void QTreeView_OnSetSelection(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetSelection(QTreeView* self, QRect* rect, int command);
QRegion* QTreeView_VisualRegionForSelection(const QTreeView* self, QItemSelection* selection);
void QTreeView_OnVisualRegionForSelection(const QTreeView* self, intptr_t slot);
QRegion* QTreeView_QBaseVisualRegionForSelection(const QTreeView* self, QItemSelection* selection);
libqt_list /* of QModelIndex* */ QTreeView_SelectedIndexes(const QTreeView* self);
void QTreeView_OnSelectedIndexes(const QTreeView* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QTreeView_QBaseSelectedIndexes(const QTreeView* self);
void QTreeView_ChangeEvent(QTreeView* self, QEvent* event);
void QTreeView_OnChangeEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseChangeEvent(QTreeView* self, QEvent* event);
void QTreeView_TimerEvent(QTreeView* self, QTimerEvent* event);
void QTreeView_OnTimerEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseTimerEvent(QTreeView* self, QTimerEvent* event);
void QTreeView_PaintEvent(QTreeView* self, QPaintEvent* event);
void QTreeView_OnPaintEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBasePaintEvent(QTreeView* self, QPaintEvent* event);
void QTreeView_DrawRow(const QTreeView* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index);
void QTreeView_OnDrawRow(const QTreeView* self, intptr_t slot);
void QTreeView_QBaseDrawRow(const QTreeView* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index);
void QTreeView_DrawBranches(const QTreeView* self, QPainter* painter, QRect* rect, QModelIndex* index);
void QTreeView_OnDrawBranches(const QTreeView* self, intptr_t slot);
void QTreeView_QBaseDrawBranches(const QTreeView* self, QPainter* painter, QRect* rect, QModelIndex* index);
void QTreeView_MousePressEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_OnMousePressEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseMousePressEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_MouseReleaseEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_OnMouseReleaseEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseMouseReleaseEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_MouseDoubleClickEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_OnMouseDoubleClickEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseMouseDoubleClickEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_MouseMoveEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_OnMouseMoveEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseMouseMoveEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_KeyPressEvent(QTreeView* self, QKeyEvent* event);
void QTreeView_OnKeyPressEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseKeyPressEvent(QTreeView* self, QKeyEvent* event);
void QTreeView_DragMoveEvent(QTreeView* self, QDragMoveEvent* event);
void QTreeView_OnDragMoveEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDragMoveEvent(QTreeView* self, QDragMoveEvent* event);
bool QTreeView_ViewportEvent(QTreeView* self, QEvent* event);
void QTreeView_OnViewportEvent(QTreeView* self, intptr_t slot);
bool QTreeView_QBaseViewportEvent(QTreeView* self, QEvent* event);
void QTreeView_UpdateGeometries(QTreeView* self);
void QTreeView_OnUpdateGeometries(QTreeView* self, intptr_t slot);
void QTreeView_QBaseUpdateGeometries(QTreeView* self);
QSize* QTreeView_ViewportSizeHint(const QTreeView* self);
void QTreeView_OnViewportSizeHint(const QTreeView* self, intptr_t slot);
QSize* QTreeView_QBaseViewportSizeHint(const QTreeView* self);
int QTreeView_SizeHintForColumn(const QTreeView* self, int column);
void QTreeView_OnSizeHintForColumn(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseSizeHintForColumn(const QTreeView* self, int column);
void QTreeView_HorizontalScrollbarAction(QTreeView* self, int action);
void QTreeView_OnHorizontalScrollbarAction(QTreeView* self, intptr_t slot);
void QTreeView_QBaseHorizontalScrollbarAction(QTreeView* self, int action);
bool QTreeView_IsIndexHidden(const QTreeView* self, QModelIndex* index);
void QTreeView_OnIsIndexHidden(const QTreeView* self, intptr_t slot);
bool QTreeView_QBaseIsIndexHidden(const QTreeView* self, QModelIndex* index);
void QTreeView_SelectionChanged(QTreeView* self, QItemSelection* selected, QItemSelection* deselected);
void QTreeView_OnSelectionChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSelectionChanged(QTreeView* self, QItemSelection* selected, QItemSelection* deselected);
void QTreeView_CurrentChanged(QTreeView* self, QModelIndex* current, QModelIndex* previous);
void QTreeView_OnCurrentChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseCurrentChanged(QTreeView* self, QModelIndex* current, QModelIndex* previous);
libqt_string QTreeView_Tr2(const char* s, const char* c);
libqt_string QTreeView_Tr3(const char* s, const char* c, int n);
void QTreeView_ExpandRecursively2(QTreeView* self, QModelIndex* index, int depth);
int QTreeView_SizeHintForRow(const QTreeView* self, int row);
void QTreeView_OnSizeHintForRow(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseSizeHintForRow(const QTreeView* self, int row);
QAbstractItemDelegate* QTreeView_ItemDelegateForIndex(const QTreeView* self, QModelIndex* index);
void QTreeView_OnItemDelegateForIndex(const QTreeView* self, intptr_t slot);
QAbstractItemDelegate* QTreeView_QBaseItemDelegateForIndex(const QTreeView* self, QModelIndex* index);
QVariant* QTreeView_InputMethodQuery(const QTreeView* self, int query);
void QTreeView_OnInputMethodQuery(const QTreeView* self, intptr_t slot);
QVariant* QTreeView_QBaseInputMethodQuery(const QTreeView* self, int query);
void QTreeView_UpdateEditorData(QTreeView* self);
void QTreeView_OnUpdateEditorData(QTreeView* self, intptr_t slot);
void QTreeView_QBaseUpdateEditorData(QTreeView* self);
void QTreeView_UpdateEditorGeometries(QTreeView* self);
void QTreeView_OnUpdateEditorGeometries(QTreeView* self, intptr_t slot);
void QTreeView_QBaseUpdateEditorGeometries(QTreeView* self);
void QTreeView_VerticalScrollbarAction(QTreeView* self, int action);
void QTreeView_OnVerticalScrollbarAction(QTreeView* self, intptr_t slot);
void QTreeView_QBaseVerticalScrollbarAction(QTreeView* self, int action);
void QTreeView_HorizontalScrollbarValueChanged(QTreeView* self, int value);
void QTreeView_OnHorizontalScrollbarValueChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseHorizontalScrollbarValueChanged(QTreeView* self, int value);
void QTreeView_CloseEditor(QTreeView* self, QWidget* editor, int hint);
void QTreeView_OnCloseEditor(QTreeView* self, intptr_t slot);
void QTreeView_QBaseCloseEditor(QTreeView* self, QWidget* editor, int hint);
void QTreeView_CommitData(QTreeView* self, QWidget* editor);
void QTreeView_OnCommitData(QTreeView* self, intptr_t slot);
void QTreeView_QBaseCommitData(QTreeView* self, QWidget* editor);
void QTreeView_EditorDestroyed(QTreeView* self, QObject* editor);
void QTreeView_OnEditorDestroyed(QTreeView* self, intptr_t slot);
void QTreeView_QBaseEditorDestroyed(QTreeView* self, QObject* editor);
bool QTreeView_Edit2(QTreeView* self, QModelIndex* index, int trigger, QEvent* event);
void QTreeView_OnEdit2(QTreeView* self, intptr_t slot);
bool QTreeView_QBaseEdit2(QTreeView* self, QModelIndex* index, int trigger, QEvent* event);
void QTreeView_StartDrag(QTreeView* self, int supportedActions);
void QTreeView_OnStartDrag(QTreeView* self, intptr_t slot);
void QTreeView_QBaseStartDrag(QTreeView* self, int supportedActions);
bool QTreeView_FocusNextPrevChild(QTreeView* self, bool next);
void QTreeView_OnFocusNextPrevChild(QTreeView* self, intptr_t slot);
bool QTreeView_QBaseFocusNextPrevChild(QTreeView* self, bool next);
bool QTreeView_Event(QTreeView* self, QEvent* event);
void QTreeView_OnEvent(QTreeView* self, intptr_t slot);
bool QTreeView_QBaseEvent(QTreeView* self, QEvent* event);
void QTreeView_DragEnterEvent(QTreeView* self, QDragEnterEvent* event);
void QTreeView_OnDragEnterEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDragEnterEvent(QTreeView* self, QDragEnterEvent* event);
void QTreeView_DragLeaveEvent(QTreeView* self, QDragLeaveEvent* event);
void QTreeView_OnDragLeaveEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDragLeaveEvent(QTreeView* self, QDragLeaveEvent* event);
void QTreeView_DropEvent(QTreeView* self, QDropEvent* event);
void QTreeView_OnDropEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDropEvent(QTreeView* self, QDropEvent* event);
void QTreeView_FocusInEvent(QTreeView* self, QFocusEvent* event);
void QTreeView_OnFocusInEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseFocusInEvent(QTreeView* self, QFocusEvent* event);
void QTreeView_FocusOutEvent(QTreeView* self, QFocusEvent* event);
void QTreeView_OnFocusOutEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseFocusOutEvent(QTreeView* self, QFocusEvent* event);
void QTreeView_ResizeEvent(QTreeView* self, QResizeEvent* event);
void QTreeView_OnResizeEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseResizeEvent(QTreeView* self, QResizeEvent* event);
void QTreeView_InputMethodEvent(QTreeView* self, QInputMethodEvent* event);
void QTreeView_OnInputMethodEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseInputMethodEvent(QTreeView* self, QInputMethodEvent* event);
bool QTreeView_EventFilter(QTreeView* self, QObject* object, QEvent* event);
void QTreeView_OnEventFilter(QTreeView* self, intptr_t slot);
bool QTreeView_QBaseEventFilter(QTreeView* self, QObject* object, QEvent* event);
QSize* QTreeView_MinimumSizeHint(const QTreeView* self);
void QTreeView_OnMinimumSizeHint(const QTreeView* self, intptr_t slot);
QSize* QTreeView_QBaseMinimumSizeHint(const QTreeView* self);
QSize* QTreeView_SizeHint(const QTreeView* self);
void QTreeView_OnSizeHint(const QTreeView* self, intptr_t slot);
QSize* QTreeView_QBaseSizeHint(const QTreeView* self);
void QTreeView_SetupViewport(QTreeView* self, QWidget* viewport);
void QTreeView_OnSetupViewport(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetupViewport(QTreeView* self, QWidget* viewport);
void QTreeView_WheelEvent(QTreeView* self, QWheelEvent* param1);
void QTreeView_OnWheelEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseWheelEvent(QTreeView* self, QWheelEvent* param1);
void QTreeView_ContextMenuEvent(QTreeView* self, QContextMenuEvent* param1);
void QTreeView_OnContextMenuEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseContextMenuEvent(QTreeView* self, QContextMenuEvent* param1);
int QTreeView_DevType(const QTreeView* self);
void QTreeView_OnDevType(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseDevType(const QTreeView* self);
void QTreeView_SetVisible(QTreeView* self, bool visible);
void QTreeView_OnSetVisible(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetVisible(QTreeView* self, bool visible);
int QTreeView_HeightForWidth(const QTreeView* self, int param1);
void QTreeView_OnHeightForWidth(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseHeightForWidth(const QTreeView* self, int param1);
bool QTreeView_HasHeightForWidth(const QTreeView* self);
void QTreeView_OnHasHeightForWidth(const QTreeView* self, intptr_t slot);
bool QTreeView_QBaseHasHeightForWidth(const QTreeView* self);
QPaintEngine* QTreeView_PaintEngine(const QTreeView* self);
void QTreeView_OnPaintEngine(const QTreeView* self, intptr_t slot);
QPaintEngine* QTreeView_QBasePaintEngine(const QTreeView* self);
void QTreeView_KeyReleaseEvent(QTreeView* self, QKeyEvent* event);
void QTreeView_OnKeyReleaseEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseKeyReleaseEvent(QTreeView* self, QKeyEvent* event);
void QTreeView_EnterEvent(QTreeView* self, QEnterEvent* event);
void QTreeView_OnEnterEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseEnterEvent(QTreeView* self, QEnterEvent* event);
void QTreeView_LeaveEvent(QTreeView* self, QEvent* event);
void QTreeView_OnLeaveEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseLeaveEvent(QTreeView* self, QEvent* event);
void QTreeView_MoveEvent(QTreeView* self, QMoveEvent* event);
void QTreeView_OnMoveEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseMoveEvent(QTreeView* self, QMoveEvent* event);
void QTreeView_CloseEvent(QTreeView* self, QCloseEvent* event);
void QTreeView_OnCloseEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseCloseEvent(QTreeView* self, QCloseEvent* event);
void QTreeView_TabletEvent(QTreeView* self, QTabletEvent* event);
void QTreeView_OnTabletEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseTabletEvent(QTreeView* self, QTabletEvent* event);
void QTreeView_ActionEvent(QTreeView* self, QActionEvent* event);
void QTreeView_OnActionEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseActionEvent(QTreeView* self, QActionEvent* event);
void QTreeView_ShowEvent(QTreeView* self, QShowEvent* event);
void QTreeView_OnShowEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseShowEvent(QTreeView* self, QShowEvent* event);
void QTreeView_HideEvent(QTreeView* self, QHideEvent* event);
void QTreeView_OnHideEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseHideEvent(QTreeView* self, QHideEvent* event);
bool QTreeView_NativeEvent(QTreeView* self, libqt_string eventType, void* message, intptr_t* result);
void QTreeView_OnNativeEvent(QTreeView* self, intptr_t slot);
bool QTreeView_QBaseNativeEvent(QTreeView* self, libqt_string eventType, void* message, intptr_t* result);
void QTreeView_ChildEvent(QTreeView* self, QChildEvent* event);
void QTreeView_OnChildEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseChildEvent(QTreeView* self, QChildEvent* event);
void QTreeView_CustomEvent(QTreeView* self, QEvent* event);
void QTreeView_OnCustomEvent(QTreeView* self, intptr_t slot);
void QTreeView_QBaseCustomEvent(QTreeView* self, QEvent* event);
void QTreeView_ConnectNotify(QTreeView* self, QMetaMethod* signal);
void QTreeView_OnConnectNotify(QTreeView* self, intptr_t slot);
void QTreeView_QBaseConnectNotify(QTreeView* self, QMetaMethod* signal);
void QTreeView_DisconnectNotify(QTreeView* self, QMetaMethod* signal);
void QTreeView_OnDisconnectNotify(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDisconnectNotify(QTreeView* self, QMetaMethod* signal);
int QTreeView_SelectionCommand(const QTreeView* self, QModelIndex* index, QEvent* event);
void QTreeView_OnSelectionCommand(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseSelectionCommand(const QTreeView* self, QModelIndex* index, QEvent* event);
void QTreeView_InitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option);
void QTreeView_OnInitViewItemOption(const QTreeView* self, intptr_t slot);
void QTreeView_QBaseInitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option);
void QTreeView_InitStyleOption(const QTreeView* self, QStyleOptionFrame* option);
void QTreeView_OnInitStyleOption(const QTreeView* self, intptr_t slot);
void QTreeView_QBaseInitStyleOption(const QTreeView* self, QStyleOptionFrame* option);
int QTreeView_Metric(const QTreeView* self, int param1);
void QTreeView_OnMetric(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseMetric(const QTreeView* self, int param1);
void QTreeView_InitPainter(const QTreeView* self, QPainter* painter);
void QTreeView_OnInitPainter(const QTreeView* self, intptr_t slot);
void QTreeView_QBaseInitPainter(const QTreeView* self, QPainter* painter);
QPaintDevice* QTreeView_Redirected(const QTreeView* self, QPoint* offset);
void QTreeView_OnRedirected(const QTreeView* self, intptr_t slot);
QPaintDevice* QTreeView_QBaseRedirected(const QTreeView* self, QPoint* offset);
QPainter* QTreeView_SharedPainter(const QTreeView* self);
void QTreeView_OnSharedPainter(const QTreeView* self, intptr_t slot);
QPainter* QTreeView_QBaseSharedPainter(const QTreeView* self);
void QTreeView_ColumnResized(QTreeView* self, int column, int oldSize, int newSize);
void QTreeView_OnColumnResized(QTreeView* self, intptr_t slot);
void QTreeView_QBaseColumnResized(QTreeView* self, int column, int oldSize, int newSize);
void QTreeView_ColumnCountChanged(QTreeView* self, int oldCount, int newCount);
void QTreeView_OnColumnCountChanged(QTreeView* self, intptr_t slot);
void QTreeView_QBaseColumnCountChanged(QTreeView* self, int oldCount, int newCount);
void QTreeView_ColumnMoved(QTreeView* self);
void QTreeView_OnColumnMoved(QTreeView* self, intptr_t slot);
void QTreeView_QBaseColumnMoved(QTreeView* self);
void QTreeView_Reexpand(QTreeView* self);
void QTreeView_OnReexpand(QTreeView* self, intptr_t slot);
void QTreeView_QBaseReexpand(QTreeView* self);
void QTreeView_RowsRemoved(QTreeView* self, QModelIndex* parent, int first, int last);
void QTreeView_OnRowsRemoved(QTreeView* self, intptr_t slot);
void QTreeView_QBaseRowsRemoved(QTreeView* self, QModelIndex* parent, int first, int last);
void QTreeView_DrawTree(const QTreeView* self, QPainter* painter, QRegion* region);
void QTreeView_OnDrawTree(const QTreeView* self, intptr_t slot);
void QTreeView_QBaseDrawTree(const QTreeView* self, QPainter* painter, QRegion* region);
int QTreeView_IndexRowSizeHint(const QTreeView* self, QModelIndex* index);
void QTreeView_OnIndexRowSizeHint(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseIndexRowSizeHint(const QTreeView* self, QModelIndex* index);
int QTreeView_RowHeight(const QTreeView* self, QModelIndex* index);
void QTreeView_OnRowHeight(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseRowHeight(const QTreeView* self, QModelIndex* index);
int QTreeView_State(const QTreeView* self);
void QTreeView_OnState(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseState(const QTreeView* self);
void QTreeView_SetState(QTreeView* self, int state);
void QTreeView_OnSetState(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetState(QTreeView* self, int state);
void QTreeView_ScheduleDelayedItemsLayout(QTreeView* self);
void QTreeView_OnScheduleDelayedItemsLayout(QTreeView* self, intptr_t slot);
void QTreeView_QBaseScheduleDelayedItemsLayout(QTreeView* self);
void QTreeView_ExecuteDelayedItemsLayout(QTreeView* self);
void QTreeView_OnExecuteDelayedItemsLayout(QTreeView* self, intptr_t slot);
void QTreeView_QBaseExecuteDelayedItemsLayout(QTreeView* self);
void QTreeView_SetDirtyRegion(QTreeView* self, QRegion* region);
void QTreeView_OnSetDirtyRegion(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetDirtyRegion(QTreeView* self, QRegion* region);
void QTreeView_ScrollDirtyRegion(QTreeView* self, int dx, int dy);
void QTreeView_OnScrollDirtyRegion(QTreeView* self, intptr_t slot);
void QTreeView_QBaseScrollDirtyRegion(QTreeView* self, int dx, int dy);
QPoint* QTreeView_DirtyRegionOffset(const QTreeView* self);
void QTreeView_OnDirtyRegionOffset(const QTreeView* self, intptr_t slot);
QPoint* QTreeView_QBaseDirtyRegionOffset(const QTreeView* self);
void QTreeView_StartAutoScroll(QTreeView* self);
void QTreeView_OnStartAutoScroll(QTreeView* self, intptr_t slot);
void QTreeView_QBaseStartAutoScroll(QTreeView* self);
void QTreeView_StopAutoScroll(QTreeView* self);
void QTreeView_OnStopAutoScroll(QTreeView* self, intptr_t slot);
void QTreeView_QBaseStopAutoScroll(QTreeView* self);
void QTreeView_DoAutoScroll(QTreeView* self);
void QTreeView_OnDoAutoScroll(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDoAutoScroll(QTreeView* self);
int QTreeView_DropIndicatorPosition(const QTreeView* self);
void QTreeView_OnDropIndicatorPosition(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseDropIndicatorPosition(const QTreeView* self);
void QTreeView_SetViewportMargins(QTreeView* self, int left, int top, int right, int bottom);
void QTreeView_OnSetViewportMargins(QTreeView* self, intptr_t slot);
void QTreeView_QBaseSetViewportMargins(QTreeView* self, int left, int top, int right, int bottom);
QMargins* QTreeView_ViewportMargins(const QTreeView* self);
void QTreeView_OnViewportMargins(const QTreeView* self, intptr_t slot);
QMargins* QTreeView_QBaseViewportMargins(const QTreeView* self);
void QTreeView_DrawFrame(QTreeView* self, QPainter* param1);
void QTreeView_OnDrawFrame(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDrawFrame(QTreeView* self, QPainter* param1);
void QTreeView_UpdateMicroFocus(QTreeView* self);
void QTreeView_OnUpdateMicroFocus(QTreeView* self, intptr_t slot);
void QTreeView_QBaseUpdateMicroFocus(QTreeView* self);
void QTreeView_Create(QTreeView* self);
void QTreeView_OnCreate(QTreeView* self, intptr_t slot);
void QTreeView_QBaseCreate(QTreeView* self);
void QTreeView_Destroy(QTreeView* self);
void QTreeView_OnDestroy(QTreeView* self, intptr_t slot);
void QTreeView_QBaseDestroy(QTreeView* self);
bool QTreeView_FocusNextChild(QTreeView* self);
void QTreeView_OnFocusNextChild(QTreeView* self, intptr_t slot);
bool QTreeView_QBaseFocusNextChild(QTreeView* self);
bool QTreeView_FocusPreviousChild(QTreeView* self);
void QTreeView_OnFocusPreviousChild(QTreeView* self, intptr_t slot);
bool QTreeView_QBaseFocusPreviousChild(QTreeView* self);
QObject* QTreeView_Sender(const QTreeView* self);
void QTreeView_OnSender(const QTreeView* self, intptr_t slot);
QObject* QTreeView_QBaseSender(const QTreeView* self);
int QTreeView_SenderSignalIndex(const QTreeView* self);
void QTreeView_OnSenderSignalIndex(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseSenderSignalIndex(const QTreeView* self);
int QTreeView_Receivers(const QTreeView* self, const char* signal);
void QTreeView_OnReceivers(const QTreeView* self, intptr_t slot);
int QTreeView_QBaseReceivers(const QTreeView* self, const char* signal);
bool QTreeView_IsSignalConnected(const QTreeView* self, QMetaMethod* signal);
void QTreeView_OnIsSignalConnected(const QTreeView* self, intptr_t slot);
bool QTreeView_QBaseIsSignalConnected(const QTreeView* self, QMetaMethod* signal);
void QTreeView_Delete(QTreeView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
