#pragma once
#ifndef SRCC_LIBVIRTUALQTABLEVIEW_H
#define SRCC_LIBVIRTUALQTABLEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTableView so that we can call protected methods
class VirtualQTableView : public QTableView {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTableView_Metacall_Callback = int (*)(QTableView*, QMetaObject::Call, int, void**);
    using QTableView_SetModel_Callback = void (*)(QTableView*, QAbstractItemModel*);
    using QTableView_SetRootIndex_Callback = void (*)(QTableView*, const QModelIndex&);
    using QTableView_SetSelectionModel_Callback = void (*)(QTableView*, QItemSelectionModel*);
    using QTableView_DoItemsLayout_Callback = void (*)();
    using QTableView_VisualRect_Callback = QRect (*)(const QTableView*, const QModelIndex&);
    using QTableView_ScrollTo_Callback = void (*)(QTableView*, const QModelIndex&, QAbstractItemView::ScrollHint);
    using QTableView_IndexAt_Callback = QModelIndex (*)(const QTableView*, const QPoint&);
    using QTableView_ScrollContentsBy_Callback = void (*)(QTableView*, int, int);
    using QTableView_InitViewItemOption_Callback = void (*)(const QTableView*, QStyleOptionViewItem*);
    using QTableView_PaintEvent_Callback = void (*)(QTableView*, QPaintEvent*);
    using QTableView_TimerEvent_Callback = void (*)(QTableView*, QTimerEvent*);
    using QTableView_HorizontalOffset_Callback = int (*)();
    using QTableView_VerticalOffset_Callback = int (*)();
    using QTableView_MoveCursor_Callback = QModelIndex (*)(QTableView*, int, Qt::KeyboardModifiers);
    using QTableView_SetSelection_Callback = void (*)(QTableView*, const QRect&, QItemSelectionModel::SelectionFlags);
    using QTableView_VisualRegionForSelection_Callback = QRegion (*)(const QTableView*, const QItemSelection&);
    using QTableView_SelectedIndexes_Callback = QModelIndexList (*)();
    using QTableView_UpdateGeometries_Callback = void (*)();
    using QTableView_ViewportSizeHint_Callback = QSize (*)();
    using QTableView_SizeHintForRow_Callback = int (*)(const QTableView*, int);
    using QTableView_SizeHintForColumn_Callback = int (*)(const QTableView*, int);
    using QTableView_VerticalScrollbarAction_Callback = void (*)(QTableView*, int);
    using QTableView_HorizontalScrollbarAction_Callback = void (*)(QTableView*, int);
    using QTableView_IsIndexHidden_Callback = bool (*)(const QTableView*, const QModelIndex&);
    using QTableView_SelectionChanged_Callback = void (*)(QTableView*, const QItemSelection&, const QItemSelection&);
    using QTableView_CurrentChanged_Callback = void (*)(QTableView*, const QModelIndex&, const QModelIndex&);
    using QTableView_KeyboardSearch_Callback = void (*)(QTableView*, const QString&);
    using QTableView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTableView*, const QModelIndex&);
    using QTableView_InputMethodQuery_Callback = QVariant (*)(const QTableView*, Qt::InputMethodQuery);
    using QTableView_Reset_Callback = void (*)();
    using QTableView_SelectAll_Callback = void (*)();
    using QTableView_DataChanged_Callback = void (*)(QTableView*, const QModelIndex&, const QModelIndex&, const QList<int>&);
    using QTableView_RowsInserted_Callback = void (*)(QTableView*, const QModelIndex&, int, int);
    using QTableView_RowsAboutToBeRemoved_Callback = void (*)(QTableView*, const QModelIndex&, int, int);
    using QTableView_UpdateEditorData_Callback = void (*)();
    using QTableView_UpdateEditorGeometries_Callback = void (*)();
    using QTableView_VerticalScrollbarValueChanged_Callback = void (*)(QTableView*, int);
    using QTableView_HorizontalScrollbarValueChanged_Callback = void (*)(QTableView*, int);
    using QTableView_CloseEditor_Callback = void (*)(QTableView*, QWidget*, QAbstractItemDelegate::EndEditHint);
    using QTableView_CommitData_Callback = void (*)(QTableView*, QWidget*);
    using QTableView_EditorDestroyed_Callback = void (*)(QTableView*, QObject*);
    using QTableView_Edit2_Callback = bool (*)(QTableView*, const QModelIndex&, QAbstractItemView::EditTrigger, QEvent*);
    using QTableView_SelectionCommand_Callback = QItemSelectionModel::SelectionFlags (*)(const QTableView*, const QModelIndex&, const QEvent*);
    using QTableView_StartDrag_Callback = void (*)(QTableView*, Qt::DropActions);
    using QTableView_FocusNextPrevChild_Callback = bool (*)(QTableView*, bool);
    using QTableView_Event_Callback = bool (*)(QTableView*, QEvent*);
    using QTableView_ViewportEvent_Callback = bool (*)(QTableView*, QEvent*);
    using QTableView_MousePressEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_MouseMoveEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_MouseReleaseEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_MouseDoubleClickEvent_Callback = void (*)(QTableView*, QMouseEvent*);
    using QTableView_DragEnterEvent_Callback = void (*)(QTableView*, QDragEnterEvent*);
    using QTableView_DragMoveEvent_Callback = void (*)(QTableView*, QDragMoveEvent*);
    using QTableView_DragLeaveEvent_Callback = void (*)(QTableView*, QDragLeaveEvent*);
    using QTableView_DropEvent_Callback = void (*)(QTableView*, QDropEvent*);
    using QTableView_FocusInEvent_Callback = void (*)(QTableView*, QFocusEvent*);
    using QTableView_FocusOutEvent_Callback = void (*)(QTableView*, QFocusEvent*);
    using QTableView_KeyPressEvent_Callback = void (*)(QTableView*, QKeyEvent*);
    using QTableView_ResizeEvent_Callback = void (*)(QTableView*, QResizeEvent*);
    using QTableView_InputMethodEvent_Callback = void (*)(QTableView*, QInputMethodEvent*);
    using QTableView_EventFilter_Callback = bool (*)(QTableView*, QObject*, QEvent*);
    using QTableView_MinimumSizeHint_Callback = QSize (*)();
    using QTableView_SizeHint_Callback = QSize (*)();
    using QTableView_SetupViewport_Callback = void (*)(QTableView*, QWidget*);
    using QTableView_WheelEvent_Callback = void (*)(QTableView*, QWheelEvent*);
    using QTableView_ContextMenuEvent_Callback = void (*)(QTableView*, QContextMenuEvent*);
    using QTableView_ChangeEvent_Callback = void (*)(QTableView*, QEvent*);
    using QTableView_InitStyleOption_Callback = void (*)(const QTableView*, QStyleOptionFrame*);
    using QTableView_DevType_Callback = int (*)();
    using QTableView_SetVisible_Callback = void (*)(QTableView*, bool);
    using QTableView_HeightForWidth_Callback = int (*)(const QTableView*, int);
    using QTableView_HasHeightForWidth_Callback = bool (*)();
    using QTableView_PaintEngine_Callback = QPaintEngine* (*)();
    using QTableView_KeyReleaseEvent_Callback = void (*)(QTableView*, QKeyEvent*);
    using QTableView_EnterEvent_Callback = void (*)(QTableView*, QEnterEvent*);
    using QTableView_LeaveEvent_Callback = void (*)(QTableView*, QEvent*);
    using QTableView_MoveEvent_Callback = void (*)(QTableView*, QMoveEvent*);
    using QTableView_CloseEvent_Callback = void (*)(QTableView*, QCloseEvent*);
    using QTableView_TabletEvent_Callback = void (*)(QTableView*, QTabletEvent*);
    using QTableView_ActionEvent_Callback = void (*)(QTableView*, QActionEvent*);
    using QTableView_ShowEvent_Callback = void (*)(QTableView*, QShowEvent*);
    using QTableView_HideEvent_Callback = void (*)(QTableView*, QHideEvent*);
    using QTableView_NativeEvent_Callback = bool (*)(QTableView*, const QByteArray&, void*, qintptr*);
    using QTableView_Metric_Callback = int (*)(const QTableView*, QPaintDevice::PaintDeviceMetric);
    using QTableView_InitPainter_Callback = void (*)(const QTableView*, QPainter*);
    using QTableView_Redirected_Callback = QPaintDevice* (*)(const QTableView*, QPoint*);
    using QTableView_SharedPainter_Callback = QPainter* (*)();
    using QTableView_ChildEvent_Callback = void (*)(QTableView*, QChildEvent*);
    using QTableView_CustomEvent_Callback = void (*)(QTableView*, QEvent*);
    using QTableView_ConnectNotify_Callback = void (*)(QTableView*, const QMetaMethod&);
    using QTableView_DisconnectNotify_Callback = void (*)(QTableView*, const QMetaMethod&);
    using QTableView_RowMoved_Callback = void (*)(QTableView*, int, int, int);
    using QTableView_ColumnMoved_Callback = void (*)(QTableView*, int, int, int);
    using QTableView_RowResized_Callback = void (*)(QTableView*, int, int, int);
    using QTableView_ColumnResized_Callback = void (*)(QTableView*, int, int, int);
    using QTableView_RowCountChanged_Callback = void (*)(QTableView*, int, int);
    using QTableView_ColumnCountChanged_Callback = void (*)(QTableView*, int, int);
    using QTableView_State_Callback = QAbstractItemView::State (*)();
    using QTableView_SetState_Callback = void (*)(QTableView*, int);
    using QTableView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QTableView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QTableView_SetDirtyRegion_Callback = void (*)(QTableView*, const QRegion&);
    using QTableView_ScrollDirtyRegion_Callback = void (*)(QTableView*, int, int);
    using QTableView_DirtyRegionOffset_Callback = QPoint (*)();
    using QTableView_StartAutoScroll_Callback = void (*)();
    using QTableView_StopAutoScroll_Callback = void (*)();
    using QTableView_DoAutoScroll_Callback = void (*)();
    using QTableView_DropIndicatorPosition_Callback = QAbstractItemView::DropIndicatorPosition (*)();
    using QTableView_SetViewportMargins_Callback = void (*)(QTableView*, int, int, int, int);
    using QTableView_ViewportMargins_Callback = QMargins (*)();
    using QTableView_DrawFrame_Callback = void (*)(QTableView*, QPainter*);
    using QTableView_UpdateMicroFocus_Callback = void (*)();
    using QTableView_Create_Callback = void (*)();
    using QTableView_Destroy_Callback = void (*)();
    using QTableView_FocusNextChild_Callback = bool (*)();
    using QTableView_FocusPreviousChild_Callback = bool (*)();
    using QTableView_Sender_Callback = QObject* (*)();
    using QTableView_SenderSignalIndex_Callback = int (*)();
    using QTableView_Receivers_Callback = int (*)(const QTableView*, const char*);
    using QTableView_IsSignalConnected_Callback = bool (*)(const QTableView*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTableView_Metacall_Callback qtableview_metacall_callback = nullptr;
    QTableView_SetModel_Callback qtableview_setmodel_callback = nullptr;
    QTableView_SetRootIndex_Callback qtableview_setrootindex_callback = nullptr;
    QTableView_SetSelectionModel_Callback qtableview_setselectionmodel_callback = nullptr;
    QTableView_DoItemsLayout_Callback qtableview_doitemslayout_callback = nullptr;
    QTableView_VisualRect_Callback qtableview_visualrect_callback = nullptr;
    QTableView_ScrollTo_Callback qtableview_scrollto_callback = nullptr;
    QTableView_IndexAt_Callback qtableview_indexat_callback = nullptr;
    QTableView_ScrollContentsBy_Callback qtableview_scrollcontentsby_callback = nullptr;
    QTableView_InitViewItemOption_Callback qtableview_initviewitemoption_callback = nullptr;
    QTableView_PaintEvent_Callback qtableview_paintevent_callback = nullptr;
    QTableView_TimerEvent_Callback qtableview_timerevent_callback = nullptr;
    QTableView_HorizontalOffset_Callback qtableview_horizontaloffset_callback = nullptr;
    QTableView_VerticalOffset_Callback qtableview_verticaloffset_callback = nullptr;
    QTableView_MoveCursor_Callback qtableview_movecursor_callback = nullptr;
    QTableView_SetSelection_Callback qtableview_setselection_callback = nullptr;
    QTableView_VisualRegionForSelection_Callback qtableview_visualregionforselection_callback = nullptr;
    QTableView_SelectedIndexes_Callback qtableview_selectedindexes_callback = nullptr;
    QTableView_UpdateGeometries_Callback qtableview_updategeometries_callback = nullptr;
    QTableView_ViewportSizeHint_Callback qtableview_viewportsizehint_callback = nullptr;
    QTableView_SizeHintForRow_Callback qtableview_sizehintforrow_callback = nullptr;
    QTableView_SizeHintForColumn_Callback qtableview_sizehintforcolumn_callback = nullptr;
    QTableView_VerticalScrollbarAction_Callback qtableview_verticalscrollbaraction_callback = nullptr;
    QTableView_HorizontalScrollbarAction_Callback qtableview_horizontalscrollbaraction_callback = nullptr;
    QTableView_IsIndexHidden_Callback qtableview_isindexhidden_callback = nullptr;
    QTableView_SelectionChanged_Callback qtableview_selectionchanged_callback = nullptr;
    QTableView_CurrentChanged_Callback qtableview_currentchanged_callback = nullptr;
    QTableView_KeyboardSearch_Callback qtableview_keyboardsearch_callback = nullptr;
    QTableView_ItemDelegateForIndex_Callback qtableview_itemdelegateforindex_callback = nullptr;
    QTableView_InputMethodQuery_Callback qtableview_inputmethodquery_callback = nullptr;
    QTableView_Reset_Callback qtableview_reset_callback = nullptr;
    QTableView_SelectAll_Callback qtableview_selectall_callback = nullptr;
    QTableView_DataChanged_Callback qtableview_datachanged_callback = nullptr;
    QTableView_RowsInserted_Callback qtableview_rowsinserted_callback = nullptr;
    QTableView_RowsAboutToBeRemoved_Callback qtableview_rowsabouttoberemoved_callback = nullptr;
    QTableView_UpdateEditorData_Callback qtableview_updateeditordata_callback = nullptr;
    QTableView_UpdateEditorGeometries_Callback qtableview_updateeditorgeometries_callback = nullptr;
    QTableView_VerticalScrollbarValueChanged_Callback qtableview_verticalscrollbarvaluechanged_callback = nullptr;
    QTableView_HorizontalScrollbarValueChanged_Callback qtableview_horizontalscrollbarvaluechanged_callback = nullptr;
    QTableView_CloseEditor_Callback qtableview_closeeditor_callback = nullptr;
    QTableView_CommitData_Callback qtableview_commitdata_callback = nullptr;
    QTableView_EditorDestroyed_Callback qtableview_editordestroyed_callback = nullptr;
    QTableView_Edit2_Callback qtableview_edit2_callback = nullptr;
    QTableView_SelectionCommand_Callback qtableview_selectioncommand_callback = nullptr;
    QTableView_StartDrag_Callback qtableview_startdrag_callback = nullptr;
    QTableView_FocusNextPrevChild_Callback qtableview_focusnextprevchild_callback = nullptr;
    QTableView_Event_Callback qtableview_event_callback = nullptr;
    QTableView_ViewportEvent_Callback qtableview_viewportevent_callback = nullptr;
    QTableView_MousePressEvent_Callback qtableview_mousepressevent_callback = nullptr;
    QTableView_MouseMoveEvent_Callback qtableview_mousemoveevent_callback = nullptr;
    QTableView_MouseReleaseEvent_Callback qtableview_mousereleaseevent_callback = nullptr;
    QTableView_MouseDoubleClickEvent_Callback qtableview_mousedoubleclickevent_callback = nullptr;
    QTableView_DragEnterEvent_Callback qtableview_dragenterevent_callback = nullptr;
    QTableView_DragMoveEvent_Callback qtableview_dragmoveevent_callback = nullptr;
    QTableView_DragLeaveEvent_Callback qtableview_dragleaveevent_callback = nullptr;
    QTableView_DropEvent_Callback qtableview_dropevent_callback = nullptr;
    QTableView_FocusInEvent_Callback qtableview_focusinevent_callback = nullptr;
    QTableView_FocusOutEvent_Callback qtableview_focusoutevent_callback = nullptr;
    QTableView_KeyPressEvent_Callback qtableview_keypressevent_callback = nullptr;
    QTableView_ResizeEvent_Callback qtableview_resizeevent_callback = nullptr;
    QTableView_InputMethodEvent_Callback qtableview_inputmethodevent_callback = nullptr;
    QTableView_EventFilter_Callback qtableview_eventfilter_callback = nullptr;
    QTableView_MinimumSizeHint_Callback qtableview_minimumsizehint_callback = nullptr;
    QTableView_SizeHint_Callback qtableview_sizehint_callback = nullptr;
    QTableView_SetupViewport_Callback qtableview_setupviewport_callback = nullptr;
    QTableView_WheelEvent_Callback qtableview_wheelevent_callback = nullptr;
    QTableView_ContextMenuEvent_Callback qtableview_contextmenuevent_callback = nullptr;
    QTableView_ChangeEvent_Callback qtableview_changeevent_callback = nullptr;
    QTableView_InitStyleOption_Callback qtableview_initstyleoption_callback = nullptr;
    QTableView_DevType_Callback qtableview_devtype_callback = nullptr;
    QTableView_SetVisible_Callback qtableview_setvisible_callback = nullptr;
    QTableView_HeightForWidth_Callback qtableview_heightforwidth_callback = nullptr;
    QTableView_HasHeightForWidth_Callback qtableview_hasheightforwidth_callback = nullptr;
    QTableView_PaintEngine_Callback qtableview_paintengine_callback = nullptr;
    QTableView_KeyReleaseEvent_Callback qtableview_keyreleaseevent_callback = nullptr;
    QTableView_EnterEvent_Callback qtableview_enterevent_callback = nullptr;
    QTableView_LeaveEvent_Callback qtableview_leaveevent_callback = nullptr;
    QTableView_MoveEvent_Callback qtableview_moveevent_callback = nullptr;
    QTableView_CloseEvent_Callback qtableview_closeevent_callback = nullptr;
    QTableView_TabletEvent_Callback qtableview_tabletevent_callback = nullptr;
    QTableView_ActionEvent_Callback qtableview_actionevent_callback = nullptr;
    QTableView_ShowEvent_Callback qtableview_showevent_callback = nullptr;
    QTableView_HideEvent_Callback qtableview_hideevent_callback = nullptr;
    QTableView_NativeEvent_Callback qtableview_nativeevent_callback = nullptr;
    QTableView_Metric_Callback qtableview_metric_callback = nullptr;
    QTableView_InitPainter_Callback qtableview_initpainter_callback = nullptr;
    QTableView_Redirected_Callback qtableview_redirected_callback = nullptr;
    QTableView_SharedPainter_Callback qtableview_sharedpainter_callback = nullptr;
    QTableView_ChildEvent_Callback qtableview_childevent_callback = nullptr;
    QTableView_CustomEvent_Callback qtableview_customevent_callback = nullptr;
    QTableView_ConnectNotify_Callback qtableview_connectnotify_callback = nullptr;
    QTableView_DisconnectNotify_Callback qtableview_disconnectnotify_callback = nullptr;
    QTableView_RowMoved_Callback qtableview_rowmoved_callback = nullptr;
    QTableView_ColumnMoved_Callback qtableview_columnmoved_callback = nullptr;
    QTableView_RowResized_Callback qtableview_rowresized_callback = nullptr;
    QTableView_ColumnResized_Callback qtableview_columnresized_callback = nullptr;
    QTableView_RowCountChanged_Callback qtableview_rowcountchanged_callback = nullptr;
    QTableView_ColumnCountChanged_Callback qtableview_columncountchanged_callback = nullptr;
    QTableView_State_Callback qtableview_state_callback = nullptr;
    QTableView_SetState_Callback qtableview_setstate_callback = nullptr;
    QTableView_ScheduleDelayedItemsLayout_Callback qtableview_scheduledelayeditemslayout_callback = nullptr;
    QTableView_ExecuteDelayedItemsLayout_Callback qtableview_executedelayeditemslayout_callback = nullptr;
    QTableView_SetDirtyRegion_Callback qtableview_setdirtyregion_callback = nullptr;
    QTableView_ScrollDirtyRegion_Callback qtableview_scrolldirtyregion_callback = nullptr;
    QTableView_DirtyRegionOffset_Callback qtableview_dirtyregionoffset_callback = nullptr;
    QTableView_StartAutoScroll_Callback qtableview_startautoscroll_callback = nullptr;
    QTableView_StopAutoScroll_Callback qtableview_stopautoscroll_callback = nullptr;
    QTableView_DoAutoScroll_Callback qtableview_doautoscroll_callback = nullptr;
    QTableView_DropIndicatorPosition_Callback qtableview_dropindicatorposition_callback = nullptr;
    QTableView_SetViewportMargins_Callback qtableview_setviewportmargins_callback = nullptr;
    QTableView_ViewportMargins_Callback qtableview_viewportmargins_callback = nullptr;
    QTableView_DrawFrame_Callback qtableview_drawframe_callback = nullptr;
    QTableView_UpdateMicroFocus_Callback qtableview_updatemicrofocus_callback = nullptr;
    QTableView_Create_Callback qtableview_create_callback = nullptr;
    QTableView_Destroy_Callback qtableview_destroy_callback = nullptr;
    QTableView_FocusNextChild_Callback qtableview_focusnextchild_callback = nullptr;
    QTableView_FocusPreviousChild_Callback qtableview_focuspreviouschild_callback = nullptr;
    QTableView_Sender_Callback qtableview_sender_callback = nullptr;
    QTableView_SenderSignalIndex_Callback qtableview_sendersignalindex_callback = nullptr;
    QTableView_Receivers_Callback qtableview_receivers_callback = nullptr;
    QTableView_IsSignalConnected_Callback qtableview_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtableview_metacall_isbase = false;
    mutable bool qtableview_setmodel_isbase = false;
    mutable bool qtableview_setrootindex_isbase = false;
    mutable bool qtableview_setselectionmodel_isbase = false;
    mutable bool qtableview_doitemslayout_isbase = false;
    mutable bool qtableview_visualrect_isbase = false;
    mutable bool qtableview_scrollto_isbase = false;
    mutable bool qtableview_indexat_isbase = false;
    mutable bool qtableview_scrollcontentsby_isbase = false;
    mutable bool qtableview_initviewitemoption_isbase = false;
    mutable bool qtableview_paintevent_isbase = false;
    mutable bool qtableview_timerevent_isbase = false;
    mutable bool qtableview_horizontaloffset_isbase = false;
    mutable bool qtableview_verticaloffset_isbase = false;
    mutable bool qtableview_movecursor_isbase = false;
    mutable bool qtableview_setselection_isbase = false;
    mutable bool qtableview_visualregionforselection_isbase = false;
    mutable bool qtableview_selectedindexes_isbase = false;
    mutable bool qtableview_updategeometries_isbase = false;
    mutable bool qtableview_viewportsizehint_isbase = false;
    mutable bool qtableview_sizehintforrow_isbase = false;
    mutable bool qtableview_sizehintforcolumn_isbase = false;
    mutable bool qtableview_verticalscrollbaraction_isbase = false;
    mutable bool qtableview_horizontalscrollbaraction_isbase = false;
    mutable bool qtableview_isindexhidden_isbase = false;
    mutable bool qtableview_selectionchanged_isbase = false;
    mutable bool qtableview_currentchanged_isbase = false;
    mutable bool qtableview_keyboardsearch_isbase = false;
    mutable bool qtableview_itemdelegateforindex_isbase = false;
    mutable bool qtableview_inputmethodquery_isbase = false;
    mutable bool qtableview_reset_isbase = false;
    mutable bool qtableview_selectall_isbase = false;
    mutable bool qtableview_datachanged_isbase = false;
    mutable bool qtableview_rowsinserted_isbase = false;
    mutable bool qtableview_rowsabouttoberemoved_isbase = false;
    mutable bool qtableview_updateeditordata_isbase = false;
    mutable bool qtableview_updateeditorgeometries_isbase = false;
    mutable bool qtableview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qtableview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qtableview_closeeditor_isbase = false;
    mutable bool qtableview_commitdata_isbase = false;
    mutable bool qtableview_editordestroyed_isbase = false;
    mutable bool qtableview_edit2_isbase = false;
    mutable bool qtableview_selectioncommand_isbase = false;
    mutable bool qtableview_startdrag_isbase = false;
    mutable bool qtableview_focusnextprevchild_isbase = false;
    mutable bool qtableview_event_isbase = false;
    mutable bool qtableview_viewportevent_isbase = false;
    mutable bool qtableview_mousepressevent_isbase = false;
    mutable bool qtableview_mousemoveevent_isbase = false;
    mutable bool qtableview_mousereleaseevent_isbase = false;
    mutable bool qtableview_mousedoubleclickevent_isbase = false;
    mutable bool qtableview_dragenterevent_isbase = false;
    mutable bool qtableview_dragmoveevent_isbase = false;
    mutable bool qtableview_dragleaveevent_isbase = false;
    mutable bool qtableview_dropevent_isbase = false;
    mutable bool qtableview_focusinevent_isbase = false;
    mutable bool qtableview_focusoutevent_isbase = false;
    mutable bool qtableview_keypressevent_isbase = false;
    mutable bool qtableview_resizeevent_isbase = false;
    mutable bool qtableview_inputmethodevent_isbase = false;
    mutable bool qtableview_eventfilter_isbase = false;
    mutable bool qtableview_minimumsizehint_isbase = false;
    mutable bool qtableview_sizehint_isbase = false;
    mutable bool qtableview_setupviewport_isbase = false;
    mutable bool qtableview_wheelevent_isbase = false;
    mutable bool qtableview_contextmenuevent_isbase = false;
    mutable bool qtableview_changeevent_isbase = false;
    mutable bool qtableview_initstyleoption_isbase = false;
    mutable bool qtableview_devtype_isbase = false;
    mutable bool qtableview_setvisible_isbase = false;
    mutable bool qtableview_heightforwidth_isbase = false;
    mutable bool qtableview_hasheightforwidth_isbase = false;
    mutable bool qtableview_paintengine_isbase = false;
    mutable bool qtableview_keyreleaseevent_isbase = false;
    mutable bool qtableview_enterevent_isbase = false;
    mutable bool qtableview_leaveevent_isbase = false;
    mutable bool qtableview_moveevent_isbase = false;
    mutable bool qtableview_closeevent_isbase = false;
    mutable bool qtableview_tabletevent_isbase = false;
    mutable bool qtableview_actionevent_isbase = false;
    mutable bool qtableview_showevent_isbase = false;
    mutable bool qtableview_hideevent_isbase = false;
    mutable bool qtableview_nativeevent_isbase = false;
    mutable bool qtableview_metric_isbase = false;
    mutable bool qtableview_initpainter_isbase = false;
    mutable bool qtableview_redirected_isbase = false;
    mutable bool qtableview_sharedpainter_isbase = false;
    mutable bool qtableview_childevent_isbase = false;
    mutable bool qtableview_customevent_isbase = false;
    mutable bool qtableview_connectnotify_isbase = false;
    mutable bool qtableview_disconnectnotify_isbase = false;
    mutable bool qtableview_rowmoved_isbase = false;
    mutable bool qtableview_columnmoved_isbase = false;
    mutable bool qtableview_rowresized_isbase = false;
    mutable bool qtableview_columnresized_isbase = false;
    mutable bool qtableview_rowcountchanged_isbase = false;
    mutable bool qtableview_columncountchanged_isbase = false;
    mutable bool qtableview_state_isbase = false;
    mutable bool qtableview_setstate_isbase = false;
    mutable bool qtableview_scheduledelayeditemslayout_isbase = false;
    mutable bool qtableview_executedelayeditemslayout_isbase = false;
    mutable bool qtableview_setdirtyregion_isbase = false;
    mutable bool qtableview_scrolldirtyregion_isbase = false;
    mutable bool qtableview_dirtyregionoffset_isbase = false;
    mutable bool qtableview_startautoscroll_isbase = false;
    mutable bool qtableview_stopautoscroll_isbase = false;
    mutable bool qtableview_doautoscroll_isbase = false;
    mutable bool qtableview_dropindicatorposition_isbase = false;
    mutable bool qtableview_setviewportmargins_isbase = false;
    mutable bool qtableview_viewportmargins_isbase = false;
    mutable bool qtableview_drawframe_isbase = false;
    mutable bool qtableview_updatemicrofocus_isbase = false;
    mutable bool qtableview_create_isbase = false;
    mutable bool qtableview_destroy_isbase = false;
    mutable bool qtableview_focusnextchild_isbase = false;
    mutable bool qtableview_focuspreviouschild_isbase = false;
    mutable bool qtableview_sender_isbase = false;
    mutable bool qtableview_sendersignalindex_isbase = false;
    mutable bool qtableview_receivers_isbase = false;
    mutable bool qtableview_issignalconnected_isbase = false;

  public:
    VirtualQTableView(QWidget* parent) : QTableView(parent){};
    VirtualQTableView() : QTableView(){};

    ~VirtualQTableView() {
        qtableview_metacall_callback = nullptr;
        qtableview_setmodel_callback = nullptr;
        qtableview_setrootindex_callback = nullptr;
        qtableview_setselectionmodel_callback = nullptr;
        qtableview_doitemslayout_callback = nullptr;
        qtableview_visualrect_callback = nullptr;
        qtableview_scrollto_callback = nullptr;
        qtableview_indexat_callback = nullptr;
        qtableview_scrollcontentsby_callback = nullptr;
        qtableview_initviewitemoption_callback = nullptr;
        qtableview_paintevent_callback = nullptr;
        qtableview_timerevent_callback = nullptr;
        qtableview_horizontaloffset_callback = nullptr;
        qtableview_verticaloffset_callback = nullptr;
        qtableview_movecursor_callback = nullptr;
        qtableview_setselection_callback = nullptr;
        qtableview_visualregionforselection_callback = nullptr;
        qtableview_selectedindexes_callback = nullptr;
        qtableview_updategeometries_callback = nullptr;
        qtableview_viewportsizehint_callback = nullptr;
        qtableview_sizehintforrow_callback = nullptr;
        qtableview_sizehintforcolumn_callback = nullptr;
        qtableview_verticalscrollbaraction_callback = nullptr;
        qtableview_horizontalscrollbaraction_callback = nullptr;
        qtableview_isindexhidden_callback = nullptr;
        qtableview_selectionchanged_callback = nullptr;
        qtableview_currentchanged_callback = nullptr;
        qtableview_keyboardsearch_callback = nullptr;
        qtableview_itemdelegateforindex_callback = nullptr;
        qtableview_inputmethodquery_callback = nullptr;
        qtableview_reset_callback = nullptr;
        qtableview_selectall_callback = nullptr;
        qtableview_datachanged_callback = nullptr;
        qtableview_rowsinserted_callback = nullptr;
        qtableview_rowsabouttoberemoved_callback = nullptr;
        qtableview_updateeditordata_callback = nullptr;
        qtableview_updateeditorgeometries_callback = nullptr;
        qtableview_verticalscrollbarvaluechanged_callback = nullptr;
        qtableview_horizontalscrollbarvaluechanged_callback = nullptr;
        qtableview_closeeditor_callback = nullptr;
        qtableview_commitdata_callback = nullptr;
        qtableview_editordestroyed_callback = nullptr;
        qtableview_edit2_callback = nullptr;
        qtableview_selectioncommand_callback = nullptr;
        qtableview_startdrag_callback = nullptr;
        qtableview_focusnextprevchild_callback = nullptr;
        qtableview_event_callback = nullptr;
        qtableview_viewportevent_callback = nullptr;
        qtableview_mousepressevent_callback = nullptr;
        qtableview_mousemoveevent_callback = nullptr;
        qtableview_mousereleaseevent_callback = nullptr;
        qtableview_mousedoubleclickevent_callback = nullptr;
        qtableview_dragenterevent_callback = nullptr;
        qtableview_dragmoveevent_callback = nullptr;
        qtableview_dragleaveevent_callback = nullptr;
        qtableview_dropevent_callback = nullptr;
        qtableview_focusinevent_callback = nullptr;
        qtableview_focusoutevent_callback = nullptr;
        qtableview_keypressevent_callback = nullptr;
        qtableview_resizeevent_callback = nullptr;
        qtableview_inputmethodevent_callback = nullptr;
        qtableview_eventfilter_callback = nullptr;
        qtableview_minimumsizehint_callback = nullptr;
        qtableview_sizehint_callback = nullptr;
        qtableview_setupviewport_callback = nullptr;
        qtableview_wheelevent_callback = nullptr;
        qtableview_contextmenuevent_callback = nullptr;
        qtableview_changeevent_callback = nullptr;
        qtableview_initstyleoption_callback = nullptr;
        qtableview_devtype_callback = nullptr;
        qtableview_setvisible_callback = nullptr;
        qtableview_heightforwidth_callback = nullptr;
        qtableview_hasheightforwidth_callback = nullptr;
        qtableview_paintengine_callback = nullptr;
        qtableview_keyreleaseevent_callback = nullptr;
        qtableview_enterevent_callback = nullptr;
        qtableview_leaveevent_callback = nullptr;
        qtableview_moveevent_callback = nullptr;
        qtableview_closeevent_callback = nullptr;
        qtableview_tabletevent_callback = nullptr;
        qtableview_actionevent_callback = nullptr;
        qtableview_showevent_callback = nullptr;
        qtableview_hideevent_callback = nullptr;
        qtableview_nativeevent_callback = nullptr;
        qtableview_metric_callback = nullptr;
        qtableview_initpainter_callback = nullptr;
        qtableview_redirected_callback = nullptr;
        qtableview_sharedpainter_callback = nullptr;
        qtableview_childevent_callback = nullptr;
        qtableview_customevent_callback = nullptr;
        qtableview_connectnotify_callback = nullptr;
        qtableview_disconnectnotify_callback = nullptr;
        qtableview_rowmoved_callback = nullptr;
        qtableview_columnmoved_callback = nullptr;
        qtableview_rowresized_callback = nullptr;
        qtableview_columnresized_callback = nullptr;
        qtableview_rowcountchanged_callback = nullptr;
        qtableview_columncountchanged_callback = nullptr;
        qtableview_state_callback = nullptr;
        qtableview_setstate_callback = nullptr;
        qtableview_scheduledelayeditemslayout_callback = nullptr;
        qtableview_executedelayeditemslayout_callback = nullptr;
        qtableview_setdirtyregion_callback = nullptr;
        qtableview_scrolldirtyregion_callback = nullptr;
        qtableview_dirtyregionoffset_callback = nullptr;
        qtableview_startautoscroll_callback = nullptr;
        qtableview_stopautoscroll_callback = nullptr;
        qtableview_doautoscroll_callback = nullptr;
        qtableview_dropindicatorposition_callback = nullptr;
        qtableview_setviewportmargins_callback = nullptr;
        qtableview_viewportmargins_callback = nullptr;
        qtableview_drawframe_callback = nullptr;
        qtableview_updatemicrofocus_callback = nullptr;
        qtableview_create_callback = nullptr;
        qtableview_destroy_callback = nullptr;
        qtableview_focusnextchild_callback = nullptr;
        qtableview_focuspreviouschild_callback = nullptr;
        qtableview_sender_callback = nullptr;
        qtableview_sendersignalindex_callback = nullptr;
        qtableview_receivers_callback = nullptr;
        qtableview_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTableView_Metacall_Callback(QTableView_Metacall_Callback cb) { qtableview_metacall_callback = cb; }
    void setQTableView_SetModel_Callback(QTableView_SetModel_Callback cb) { qtableview_setmodel_callback = cb; }
    void setQTableView_SetRootIndex_Callback(QTableView_SetRootIndex_Callback cb) { qtableview_setrootindex_callback = cb; }
    void setQTableView_SetSelectionModel_Callback(QTableView_SetSelectionModel_Callback cb) { qtableview_setselectionmodel_callback = cb; }
    void setQTableView_DoItemsLayout_Callback(QTableView_DoItemsLayout_Callback cb) { qtableview_doitemslayout_callback = cb; }
    void setQTableView_VisualRect_Callback(QTableView_VisualRect_Callback cb) { qtableview_visualrect_callback = cb; }
    void setQTableView_ScrollTo_Callback(QTableView_ScrollTo_Callback cb) { qtableview_scrollto_callback = cb; }
    void setQTableView_IndexAt_Callback(QTableView_IndexAt_Callback cb) { qtableview_indexat_callback = cb; }
    void setQTableView_ScrollContentsBy_Callback(QTableView_ScrollContentsBy_Callback cb) { qtableview_scrollcontentsby_callback = cb; }
    void setQTableView_InitViewItemOption_Callback(QTableView_InitViewItemOption_Callback cb) { qtableview_initviewitemoption_callback = cb; }
    void setQTableView_PaintEvent_Callback(QTableView_PaintEvent_Callback cb) { qtableview_paintevent_callback = cb; }
    void setQTableView_TimerEvent_Callback(QTableView_TimerEvent_Callback cb) { qtableview_timerevent_callback = cb; }
    void setQTableView_HorizontalOffset_Callback(QTableView_HorizontalOffset_Callback cb) { qtableview_horizontaloffset_callback = cb; }
    void setQTableView_VerticalOffset_Callback(QTableView_VerticalOffset_Callback cb) { qtableview_verticaloffset_callback = cb; }
    void setQTableView_MoveCursor_Callback(QTableView_MoveCursor_Callback cb) { qtableview_movecursor_callback = cb; }
    void setQTableView_SetSelection_Callback(QTableView_SetSelection_Callback cb) { qtableview_setselection_callback = cb; }
    void setQTableView_VisualRegionForSelection_Callback(QTableView_VisualRegionForSelection_Callback cb) { qtableview_visualregionforselection_callback = cb; }
    void setQTableView_SelectedIndexes_Callback(QTableView_SelectedIndexes_Callback cb) { qtableview_selectedindexes_callback = cb; }
    void setQTableView_UpdateGeometries_Callback(QTableView_UpdateGeometries_Callback cb) { qtableview_updategeometries_callback = cb; }
    void setQTableView_ViewportSizeHint_Callback(QTableView_ViewportSizeHint_Callback cb) { qtableview_viewportsizehint_callback = cb; }
    void setQTableView_SizeHintForRow_Callback(QTableView_SizeHintForRow_Callback cb) { qtableview_sizehintforrow_callback = cb; }
    void setQTableView_SizeHintForColumn_Callback(QTableView_SizeHintForColumn_Callback cb) { qtableview_sizehintforcolumn_callback = cb; }
    void setQTableView_VerticalScrollbarAction_Callback(QTableView_VerticalScrollbarAction_Callback cb) { qtableview_verticalscrollbaraction_callback = cb; }
    void setQTableView_HorizontalScrollbarAction_Callback(QTableView_HorizontalScrollbarAction_Callback cb) { qtableview_horizontalscrollbaraction_callback = cb; }
    void setQTableView_IsIndexHidden_Callback(QTableView_IsIndexHidden_Callback cb) { qtableview_isindexhidden_callback = cb; }
    void setQTableView_SelectionChanged_Callback(QTableView_SelectionChanged_Callback cb) { qtableview_selectionchanged_callback = cb; }
    void setQTableView_CurrentChanged_Callback(QTableView_CurrentChanged_Callback cb) { qtableview_currentchanged_callback = cb; }
    void setQTableView_KeyboardSearch_Callback(QTableView_KeyboardSearch_Callback cb) { qtableview_keyboardsearch_callback = cb; }
    void setQTableView_ItemDelegateForIndex_Callback(QTableView_ItemDelegateForIndex_Callback cb) { qtableview_itemdelegateforindex_callback = cb; }
    void setQTableView_InputMethodQuery_Callback(QTableView_InputMethodQuery_Callback cb) { qtableview_inputmethodquery_callback = cb; }
    void setQTableView_Reset_Callback(QTableView_Reset_Callback cb) { qtableview_reset_callback = cb; }
    void setQTableView_SelectAll_Callback(QTableView_SelectAll_Callback cb) { qtableview_selectall_callback = cb; }
    void setQTableView_DataChanged_Callback(QTableView_DataChanged_Callback cb) { qtableview_datachanged_callback = cb; }
    void setQTableView_RowsInserted_Callback(QTableView_RowsInserted_Callback cb) { qtableview_rowsinserted_callback = cb; }
    void setQTableView_RowsAboutToBeRemoved_Callback(QTableView_RowsAboutToBeRemoved_Callback cb) { qtableview_rowsabouttoberemoved_callback = cb; }
    void setQTableView_UpdateEditorData_Callback(QTableView_UpdateEditorData_Callback cb) { qtableview_updateeditordata_callback = cb; }
    void setQTableView_UpdateEditorGeometries_Callback(QTableView_UpdateEditorGeometries_Callback cb) { qtableview_updateeditorgeometries_callback = cb; }
    void setQTableView_VerticalScrollbarValueChanged_Callback(QTableView_VerticalScrollbarValueChanged_Callback cb) { qtableview_verticalscrollbarvaluechanged_callback = cb; }
    void setQTableView_HorizontalScrollbarValueChanged_Callback(QTableView_HorizontalScrollbarValueChanged_Callback cb) { qtableview_horizontalscrollbarvaluechanged_callback = cb; }
    void setQTableView_CloseEditor_Callback(QTableView_CloseEditor_Callback cb) { qtableview_closeeditor_callback = cb; }
    void setQTableView_CommitData_Callback(QTableView_CommitData_Callback cb) { qtableview_commitdata_callback = cb; }
    void setQTableView_EditorDestroyed_Callback(QTableView_EditorDestroyed_Callback cb) { qtableview_editordestroyed_callback = cb; }
    void setQTableView_Edit2_Callback(QTableView_Edit2_Callback cb) { qtableview_edit2_callback = cb; }
    void setQTableView_SelectionCommand_Callback(QTableView_SelectionCommand_Callback cb) { qtableview_selectioncommand_callback = cb; }
    void setQTableView_StartDrag_Callback(QTableView_StartDrag_Callback cb) { qtableview_startdrag_callback = cb; }
    void setQTableView_FocusNextPrevChild_Callback(QTableView_FocusNextPrevChild_Callback cb) { qtableview_focusnextprevchild_callback = cb; }
    void setQTableView_Event_Callback(QTableView_Event_Callback cb) { qtableview_event_callback = cb; }
    void setQTableView_ViewportEvent_Callback(QTableView_ViewportEvent_Callback cb) { qtableview_viewportevent_callback = cb; }
    void setQTableView_MousePressEvent_Callback(QTableView_MousePressEvent_Callback cb) { qtableview_mousepressevent_callback = cb; }
    void setQTableView_MouseMoveEvent_Callback(QTableView_MouseMoveEvent_Callback cb) { qtableview_mousemoveevent_callback = cb; }
    void setQTableView_MouseReleaseEvent_Callback(QTableView_MouseReleaseEvent_Callback cb) { qtableview_mousereleaseevent_callback = cb; }
    void setQTableView_MouseDoubleClickEvent_Callback(QTableView_MouseDoubleClickEvent_Callback cb) { qtableview_mousedoubleclickevent_callback = cb; }
    void setQTableView_DragEnterEvent_Callback(QTableView_DragEnterEvent_Callback cb) { qtableview_dragenterevent_callback = cb; }
    void setQTableView_DragMoveEvent_Callback(QTableView_DragMoveEvent_Callback cb) { qtableview_dragmoveevent_callback = cb; }
    void setQTableView_DragLeaveEvent_Callback(QTableView_DragLeaveEvent_Callback cb) { qtableview_dragleaveevent_callback = cb; }
    void setQTableView_DropEvent_Callback(QTableView_DropEvent_Callback cb) { qtableview_dropevent_callback = cb; }
    void setQTableView_FocusInEvent_Callback(QTableView_FocusInEvent_Callback cb) { qtableview_focusinevent_callback = cb; }
    void setQTableView_FocusOutEvent_Callback(QTableView_FocusOutEvent_Callback cb) { qtableview_focusoutevent_callback = cb; }
    void setQTableView_KeyPressEvent_Callback(QTableView_KeyPressEvent_Callback cb) { qtableview_keypressevent_callback = cb; }
    void setQTableView_ResizeEvent_Callback(QTableView_ResizeEvent_Callback cb) { qtableview_resizeevent_callback = cb; }
    void setQTableView_InputMethodEvent_Callback(QTableView_InputMethodEvent_Callback cb) { qtableview_inputmethodevent_callback = cb; }
    void setQTableView_EventFilter_Callback(QTableView_EventFilter_Callback cb) { qtableview_eventfilter_callback = cb; }
    void setQTableView_MinimumSizeHint_Callback(QTableView_MinimumSizeHint_Callback cb) { qtableview_minimumsizehint_callback = cb; }
    void setQTableView_SizeHint_Callback(QTableView_SizeHint_Callback cb) { qtableview_sizehint_callback = cb; }
    void setQTableView_SetupViewport_Callback(QTableView_SetupViewport_Callback cb) { qtableview_setupviewport_callback = cb; }
    void setQTableView_WheelEvent_Callback(QTableView_WheelEvent_Callback cb) { qtableview_wheelevent_callback = cb; }
    void setQTableView_ContextMenuEvent_Callback(QTableView_ContextMenuEvent_Callback cb) { qtableview_contextmenuevent_callback = cb; }
    void setQTableView_ChangeEvent_Callback(QTableView_ChangeEvent_Callback cb) { qtableview_changeevent_callback = cb; }
    void setQTableView_InitStyleOption_Callback(QTableView_InitStyleOption_Callback cb) { qtableview_initstyleoption_callback = cb; }
    void setQTableView_DevType_Callback(QTableView_DevType_Callback cb) { qtableview_devtype_callback = cb; }
    void setQTableView_SetVisible_Callback(QTableView_SetVisible_Callback cb) { qtableview_setvisible_callback = cb; }
    void setQTableView_HeightForWidth_Callback(QTableView_HeightForWidth_Callback cb) { qtableview_heightforwidth_callback = cb; }
    void setQTableView_HasHeightForWidth_Callback(QTableView_HasHeightForWidth_Callback cb) { qtableview_hasheightforwidth_callback = cb; }
    void setQTableView_PaintEngine_Callback(QTableView_PaintEngine_Callback cb) { qtableview_paintengine_callback = cb; }
    void setQTableView_KeyReleaseEvent_Callback(QTableView_KeyReleaseEvent_Callback cb) { qtableview_keyreleaseevent_callback = cb; }
    void setQTableView_EnterEvent_Callback(QTableView_EnterEvent_Callback cb) { qtableview_enterevent_callback = cb; }
    void setQTableView_LeaveEvent_Callback(QTableView_LeaveEvent_Callback cb) { qtableview_leaveevent_callback = cb; }
    void setQTableView_MoveEvent_Callback(QTableView_MoveEvent_Callback cb) { qtableview_moveevent_callback = cb; }
    void setQTableView_CloseEvent_Callback(QTableView_CloseEvent_Callback cb) { qtableview_closeevent_callback = cb; }
    void setQTableView_TabletEvent_Callback(QTableView_TabletEvent_Callback cb) { qtableview_tabletevent_callback = cb; }
    void setQTableView_ActionEvent_Callback(QTableView_ActionEvent_Callback cb) { qtableview_actionevent_callback = cb; }
    void setQTableView_ShowEvent_Callback(QTableView_ShowEvent_Callback cb) { qtableview_showevent_callback = cb; }
    void setQTableView_HideEvent_Callback(QTableView_HideEvent_Callback cb) { qtableview_hideevent_callback = cb; }
    void setQTableView_NativeEvent_Callback(QTableView_NativeEvent_Callback cb) { qtableview_nativeevent_callback = cb; }
    void setQTableView_Metric_Callback(QTableView_Metric_Callback cb) { qtableview_metric_callback = cb; }
    void setQTableView_InitPainter_Callback(QTableView_InitPainter_Callback cb) { qtableview_initpainter_callback = cb; }
    void setQTableView_Redirected_Callback(QTableView_Redirected_Callback cb) { qtableview_redirected_callback = cb; }
    void setQTableView_SharedPainter_Callback(QTableView_SharedPainter_Callback cb) { qtableview_sharedpainter_callback = cb; }
    void setQTableView_ChildEvent_Callback(QTableView_ChildEvent_Callback cb) { qtableview_childevent_callback = cb; }
    void setQTableView_CustomEvent_Callback(QTableView_CustomEvent_Callback cb) { qtableview_customevent_callback = cb; }
    void setQTableView_ConnectNotify_Callback(QTableView_ConnectNotify_Callback cb) { qtableview_connectnotify_callback = cb; }
    void setQTableView_DisconnectNotify_Callback(QTableView_DisconnectNotify_Callback cb) { qtableview_disconnectnotify_callback = cb; }
    void setQTableView_RowMoved_Callback(QTableView_RowMoved_Callback cb) { qtableview_rowmoved_callback = cb; }
    void setQTableView_ColumnMoved_Callback(QTableView_ColumnMoved_Callback cb) { qtableview_columnmoved_callback = cb; }
    void setQTableView_RowResized_Callback(QTableView_RowResized_Callback cb) { qtableview_rowresized_callback = cb; }
    void setQTableView_ColumnResized_Callback(QTableView_ColumnResized_Callback cb) { qtableview_columnresized_callback = cb; }
    void setQTableView_RowCountChanged_Callback(QTableView_RowCountChanged_Callback cb) { qtableview_rowcountchanged_callback = cb; }
    void setQTableView_ColumnCountChanged_Callback(QTableView_ColumnCountChanged_Callback cb) { qtableview_columncountchanged_callback = cb; }
    void setQTableView_State_Callback(QTableView_State_Callback cb) { qtableview_state_callback = cb; }
    void setQTableView_SetState_Callback(QTableView_SetState_Callback cb) { qtableview_setstate_callback = cb; }
    void setQTableView_ScheduleDelayedItemsLayout_Callback(QTableView_ScheduleDelayedItemsLayout_Callback cb) { qtableview_scheduledelayeditemslayout_callback = cb; }
    void setQTableView_ExecuteDelayedItemsLayout_Callback(QTableView_ExecuteDelayedItemsLayout_Callback cb) { qtableview_executedelayeditemslayout_callback = cb; }
    void setQTableView_SetDirtyRegion_Callback(QTableView_SetDirtyRegion_Callback cb) { qtableview_setdirtyregion_callback = cb; }
    void setQTableView_ScrollDirtyRegion_Callback(QTableView_ScrollDirtyRegion_Callback cb) { qtableview_scrolldirtyregion_callback = cb; }
    void setQTableView_DirtyRegionOffset_Callback(QTableView_DirtyRegionOffset_Callback cb) { qtableview_dirtyregionoffset_callback = cb; }
    void setQTableView_StartAutoScroll_Callback(QTableView_StartAutoScroll_Callback cb) { qtableview_startautoscroll_callback = cb; }
    void setQTableView_StopAutoScroll_Callback(QTableView_StopAutoScroll_Callback cb) { qtableview_stopautoscroll_callback = cb; }
    void setQTableView_DoAutoScroll_Callback(QTableView_DoAutoScroll_Callback cb) { qtableview_doautoscroll_callback = cb; }
    void setQTableView_DropIndicatorPosition_Callback(QTableView_DropIndicatorPosition_Callback cb) { qtableview_dropindicatorposition_callback = cb; }
    void setQTableView_SetViewportMargins_Callback(QTableView_SetViewportMargins_Callback cb) { qtableview_setviewportmargins_callback = cb; }
    void setQTableView_ViewportMargins_Callback(QTableView_ViewportMargins_Callback cb) { qtableview_viewportmargins_callback = cb; }
    void setQTableView_DrawFrame_Callback(QTableView_DrawFrame_Callback cb) { qtableview_drawframe_callback = cb; }
    void setQTableView_UpdateMicroFocus_Callback(QTableView_UpdateMicroFocus_Callback cb) { qtableview_updatemicrofocus_callback = cb; }
    void setQTableView_Create_Callback(QTableView_Create_Callback cb) { qtableview_create_callback = cb; }
    void setQTableView_Destroy_Callback(QTableView_Destroy_Callback cb) { qtableview_destroy_callback = cb; }
    void setQTableView_FocusNextChild_Callback(QTableView_FocusNextChild_Callback cb) { qtableview_focusnextchild_callback = cb; }
    void setQTableView_FocusPreviousChild_Callback(QTableView_FocusPreviousChild_Callback cb) { qtableview_focuspreviouschild_callback = cb; }
    void setQTableView_Sender_Callback(QTableView_Sender_Callback cb) { qtableview_sender_callback = cb; }
    void setQTableView_SenderSignalIndex_Callback(QTableView_SenderSignalIndex_Callback cb) { qtableview_sendersignalindex_callback = cb; }
    void setQTableView_Receivers_Callback(QTableView_Receivers_Callback cb) { qtableview_receivers_callback = cb; }
    void setQTableView_IsSignalConnected_Callback(QTableView_IsSignalConnected_Callback cb) { qtableview_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTableView_Metacall_IsBase(bool value) const { qtableview_metacall_isbase = value; }
    void setQTableView_SetModel_IsBase(bool value) const { qtableview_setmodel_isbase = value; }
    void setQTableView_SetRootIndex_IsBase(bool value) const { qtableview_setrootindex_isbase = value; }
    void setQTableView_SetSelectionModel_IsBase(bool value) const { qtableview_setselectionmodel_isbase = value; }
    void setQTableView_DoItemsLayout_IsBase(bool value) const { qtableview_doitemslayout_isbase = value; }
    void setQTableView_VisualRect_IsBase(bool value) const { qtableview_visualrect_isbase = value; }
    void setQTableView_ScrollTo_IsBase(bool value) const { qtableview_scrollto_isbase = value; }
    void setQTableView_IndexAt_IsBase(bool value) const { qtableview_indexat_isbase = value; }
    void setQTableView_ScrollContentsBy_IsBase(bool value) const { qtableview_scrollcontentsby_isbase = value; }
    void setQTableView_InitViewItemOption_IsBase(bool value) const { qtableview_initviewitemoption_isbase = value; }
    void setQTableView_PaintEvent_IsBase(bool value) const { qtableview_paintevent_isbase = value; }
    void setQTableView_TimerEvent_IsBase(bool value) const { qtableview_timerevent_isbase = value; }
    void setQTableView_HorizontalOffset_IsBase(bool value) const { qtableview_horizontaloffset_isbase = value; }
    void setQTableView_VerticalOffset_IsBase(bool value) const { qtableview_verticaloffset_isbase = value; }
    void setQTableView_MoveCursor_IsBase(bool value) const { qtableview_movecursor_isbase = value; }
    void setQTableView_SetSelection_IsBase(bool value) const { qtableview_setselection_isbase = value; }
    void setQTableView_VisualRegionForSelection_IsBase(bool value) const { qtableview_visualregionforselection_isbase = value; }
    void setQTableView_SelectedIndexes_IsBase(bool value) const { qtableview_selectedindexes_isbase = value; }
    void setQTableView_UpdateGeometries_IsBase(bool value) const { qtableview_updategeometries_isbase = value; }
    void setQTableView_ViewportSizeHint_IsBase(bool value) const { qtableview_viewportsizehint_isbase = value; }
    void setQTableView_SizeHintForRow_IsBase(bool value) const { qtableview_sizehintforrow_isbase = value; }
    void setQTableView_SizeHintForColumn_IsBase(bool value) const { qtableview_sizehintforcolumn_isbase = value; }
    void setQTableView_VerticalScrollbarAction_IsBase(bool value) const { qtableview_verticalscrollbaraction_isbase = value; }
    void setQTableView_HorizontalScrollbarAction_IsBase(bool value) const { qtableview_horizontalscrollbaraction_isbase = value; }
    void setQTableView_IsIndexHidden_IsBase(bool value) const { qtableview_isindexhidden_isbase = value; }
    void setQTableView_SelectionChanged_IsBase(bool value) const { qtableview_selectionchanged_isbase = value; }
    void setQTableView_CurrentChanged_IsBase(bool value) const { qtableview_currentchanged_isbase = value; }
    void setQTableView_KeyboardSearch_IsBase(bool value) const { qtableview_keyboardsearch_isbase = value; }
    void setQTableView_ItemDelegateForIndex_IsBase(bool value) const { qtableview_itemdelegateforindex_isbase = value; }
    void setQTableView_InputMethodQuery_IsBase(bool value) const { qtableview_inputmethodquery_isbase = value; }
    void setQTableView_Reset_IsBase(bool value) const { qtableview_reset_isbase = value; }
    void setQTableView_SelectAll_IsBase(bool value) const { qtableview_selectall_isbase = value; }
    void setQTableView_DataChanged_IsBase(bool value) const { qtableview_datachanged_isbase = value; }
    void setQTableView_RowsInserted_IsBase(bool value) const { qtableview_rowsinserted_isbase = value; }
    void setQTableView_RowsAboutToBeRemoved_IsBase(bool value) const { qtableview_rowsabouttoberemoved_isbase = value; }
    void setQTableView_UpdateEditorData_IsBase(bool value) const { qtableview_updateeditordata_isbase = value; }
    void setQTableView_UpdateEditorGeometries_IsBase(bool value) const { qtableview_updateeditorgeometries_isbase = value; }
    void setQTableView_VerticalScrollbarValueChanged_IsBase(bool value) const { qtableview_verticalscrollbarvaluechanged_isbase = value; }
    void setQTableView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qtableview_horizontalscrollbarvaluechanged_isbase = value; }
    void setQTableView_CloseEditor_IsBase(bool value) const { qtableview_closeeditor_isbase = value; }
    void setQTableView_CommitData_IsBase(bool value) const { qtableview_commitdata_isbase = value; }
    void setQTableView_EditorDestroyed_IsBase(bool value) const { qtableview_editordestroyed_isbase = value; }
    void setQTableView_Edit2_IsBase(bool value) const { qtableview_edit2_isbase = value; }
    void setQTableView_SelectionCommand_IsBase(bool value) const { qtableview_selectioncommand_isbase = value; }
    void setQTableView_StartDrag_IsBase(bool value) const { qtableview_startdrag_isbase = value; }
    void setQTableView_FocusNextPrevChild_IsBase(bool value) const { qtableview_focusnextprevchild_isbase = value; }
    void setQTableView_Event_IsBase(bool value) const { qtableview_event_isbase = value; }
    void setQTableView_ViewportEvent_IsBase(bool value) const { qtableview_viewportevent_isbase = value; }
    void setQTableView_MousePressEvent_IsBase(bool value) const { qtableview_mousepressevent_isbase = value; }
    void setQTableView_MouseMoveEvent_IsBase(bool value) const { qtableview_mousemoveevent_isbase = value; }
    void setQTableView_MouseReleaseEvent_IsBase(bool value) const { qtableview_mousereleaseevent_isbase = value; }
    void setQTableView_MouseDoubleClickEvent_IsBase(bool value) const { qtableview_mousedoubleclickevent_isbase = value; }
    void setQTableView_DragEnterEvent_IsBase(bool value) const { qtableview_dragenterevent_isbase = value; }
    void setQTableView_DragMoveEvent_IsBase(bool value) const { qtableview_dragmoveevent_isbase = value; }
    void setQTableView_DragLeaveEvent_IsBase(bool value) const { qtableview_dragleaveevent_isbase = value; }
    void setQTableView_DropEvent_IsBase(bool value) const { qtableview_dropevent_isbase = value; }
    void setQTableView_FocusInEvent_IsBase(bool value) const { qtableview_focusinevent_isbase = value; }
    void setQTableView_FocusOutEvent_IsBase(bool value) const { qtableview_focusoutevent_isbase = value; }
    void setQTableView_KeyPressEvent_IsBase(bool value) const { qtableview_keypressevent_isbase = value; }
    void setQTableView_ResizeEvent_IsBase(bool value) const { qtableview_resizeevent_isbase = value; }
    void setQTableView_InputMethodEvent_IsBase(bool value) const { qtableview_inputmethodevent_isbase = value; }
    void setQTableView_EventFilter_IsBase(bool value) const { qtableview_eventfilter_isbase = value; }
    void setQTableView_MinimumSizeHint_IsBase(bool value) const { qtableview_minimumsizehint_isbase = value; }
    void setQTableView_SizeHint_IsBase(bool value) const { qtableview_sizehint_isbase = value; }
    void setQTableView_SetupViewport_IsBase(bool value) const { qtableview_setupviewport_isbase = value; }
    void setQTableView_WheelEvent_IsBase(bool value) const { qtableview_wheelevent_isbase = value; }
    void setQTableView_ContextMenuEvent_IsBase(bool value) const { qtableview_contextmenuevent_isbase = value; }
    void setQTableView_ChangeEvent_IsBase(bool value) const { qtableview_changeevent_isbase = value; }
    void setQTableView_InitStyleOption_IsBase(bool value) const { qtableview_initstyleoption_isbase = value; }
    void setQTableView_DevType_IsBase(bool value) const { qtableview_devtype_isbase = value; }
    void setQTableView_SetVisible_IsBase(bool value) const { qtableview_setvisible_isbase = value; }
    void setQTableView_HeightForWidth_IsBase(bool value) const { qtableview_heightforwidth_isbase = value; }
    void setQTableView_HasHeightForWidth_IsBase(bool value) const { qtableview_hasheightforwidth_isbase = value; }
    void setQTableView_PaintEngine_IsBase(bool value) const { qtableview_paintengine_isbase = value; }
    void setQTableView_KeyReleaseEvent_IsBase(bool value) const { qtableview_keyreleaseevent_isbase = value; }
    void setQTableView_EnterEvent_IsBase(bool value) const { qtableview_enterevent_isbase = value; }
    void setQTableView_LeaveEvent_IsBase(bool value) const { qtableview_leaveevent_isbase = value; }
    void setQTableView_MoveEvent_IsBase(bool value) const { qtableview_moveevent_isbase = value; }
    void setQTableView_CloseEvent_IsBase(bool value) const { qtableview_closeevent_isbase = value; }
    void setQTableView_TabletEvent_IsBase(bool value) const { qtableview_tabletevent_isbase = value; }
    void setQTableView_ActionEvent_IsBase(bool value) const { qtableview_actionevent_isbase = value; }
    void setQTableView_ShowEvent_IsBase(bool value) const { qtableview_showevent_isbase = value; }
    void setQTableView_HideEvent_IsBase(bool value) const { qtableview_hideevent_isbase = value; }
    void setQTableView_NativeEvent_IsBase(bool value) const { qtableview_nativeevent_isbase = value; }
    void setQTableView_Metric_IsBase(bool value) const { qtableview_metric_isbase = value; }
    void setQTableView_InitPainter_IsBase(bool value) const { qtableview_initpainter_isbase = value; }
    void setQTableView_Redirected_IsBase(bool value) const { qtableview_redirected_isbase = value; }
    void setQTableView_SharedPainter_IsBase(bool value) const { qtableview_sharedpainter_isbase = value; }
    void setQTableView_ChildEvent_IsBase(bool value) const { qtableview_childevent_isbase = value; }
    void setQTableView_CustomEvent_IsBase(bool value) const { qtableview_customevent_isbase = value; }
    void setQTableView_ConnectNotify_IsBase(bool value) const { qtableview_connectnotify_isbase = value; }
    void setQTableView_DisconnectNotify_IsBase(bool value) const { qtableview_disconnectnotify_isbase = value; }
    void setQTableView_RowMoved_IsBase(bool value) const { qtableview_rowmoved_isbase = value; }
    void setQTableView_ColumnMoved_IsBase(bool value) const { qtableview_columnmoved_isbase = value; }
    void setQTableView_RowResized_IsBase(bool value) const { qtableview_rowresized_isbase = value; }
    void setQTableView_ColumnResized_IsBase(bool value) const { qtableview_columnresized_isbase = value; }
    void setQTableView_RowCountChanged_IsBase(bool value) const { qtableview_rowcountchanged_isbase = value; }
    void setQTableView_ColumnCountChanged_IsBase(bool value) const { qtableview_columncountchanged_isbase = value; }
    void setQTableView_State_IsBase(bool value) const { qtableview_state_isbase = value; }
    void setQTableView_SetState_IsBase(bool value) const { qtableview_setstate_isbase = value; }
    void setQTableView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qtableview_scheduledelayeditemslayout_isbase = value; }
    void setQTableView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qtableview_executedelayeditemslayout_isbase = value; }
    void setQTableView_SetDirtyRegion_IsBase(bool value) const { qtableview_setdirtyregion_isbase = value; }
    void setQTableView_ScrollDirtyRegion_IsBase(bool value) const { qtableview_scrolldirtyregion_isbase = value; }
    void setQTableView_DirtyRegionOffset_IsBase(bool value) const { qtableview_dirtyregionoffset_isbase = value; }
    void setQTableView_StartAutoScroll_IsBase(bool value) const { qtableview_startautoscroll_isbase = value; }
    void setQTableView_StopAutoScroll_IsBase(bool value) const { qtableview_stopautoscroll_isbase = value; }
    void setQTableView_DoAutoScroll_IsBase(bool value) const { qtableview_doautoscroll_isbase = value; }
    void setQTableView_DropIndicatorPosition_IsBase(bool value) const { qtableview_dropindicatorposition_isbase = value; }
    void setQTableView_SetViewportMargins_IsBase(bool value) const { qtableview_setviewportmargins_isbase = value; }
    void setQTableView_ViewportMargins_IsBase(bool value) const { qtableview_viewportmargins_isbase = value; }
    void setQTableView_DrawFrame_IsBase(bool value) const { qtableview_drawframe_isbase = value; }
    void setQTableView_UpdateMicroFocus_IsBase(bool value) const { qtableview_updatemicrofocus_isbase = value; }
    void setQTableView_Create_IsBase(bool value) const { qtableview_create_isbase = value; }
    void setQTableView_Destroy_IsBase(bool value) const { qtableview_destroy_isbase = value; }
    void setQTableView_FocusNextChild_IsBase(bool value) const { qtableview_focusnextchild_isbase = value; }
    void setQTableView_FocusPreviousChild_IsBase(bool value) const { qtableview_focuspreviouschild_isbase = value; }
    void setQTableView_Sender_IsBase(bool value) const { qtableview_sender_isbase = value; }
    void setQTableView_SenderSignalIndex_IsBase(bool value) const { qtableview_sendersignalindex_isbase = value; }
    void setQTableView_Receivers_IsBase(bool value) const { qtableview_receivers_isbase = value; }
    void setQTableView_IsSignalConnected_IsBase(bool value) const { qtableview_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtableview_metacall_isbase) {
            qtableview_metacall_isbase = false;
            return QTableView::qt_metacall(param1, param2, param3);
        } else if (qtableview_metacall_callback != nullptr) {
            return qtableview_metacall_callback(this, param1, param2, param3);
        } else {
            return QTableView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qtableview_setmodel_isbase) {
            qtableview_setmodel_isbase = false;
            QTableView::setModel(model);
        } else if (qtableview_setmodel_callback != nullptr) {
            qtableview_setmodel_callback(this, model);
        } else {
            QTableView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtableview_setrootindex_isbase) {
            qtableview_setrootindex_isbase = false;
            QTableView::setRootIndex(index);
        } else if (qtableview_setrootindex_callback != nullptr) {
            qtableview_setrootindex_callback(this, index);
        } else {
            QTableView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtableview_setselectionmodel_isbase) {
            qtableview_setselectionmodel_isbase = false;
            QTableView::setSelectionModel(selectionModel);
        } else if (qtableview_setselectionmodel_callback != nullptr) {
            qtableview_setselectionmodel_callback(this, selectionModel);
        } else {
            QTableView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtableview_doitemslayout_isbase) {
            qtableview_doitemslayout_isbase = false;
            QTableView::doItemsLayout();
        } else if (qtableview_doitemslayout_callback != nullptr) {
            qtableview_doitemslayout_callback();
        } else {
            QTableView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtableview_visualrect_isbase) {
            qtableview_visualrect_isbase = false;
            return QTableView::visualRect(index);
        } else if (qtableview_visualrect_callback != nullptr) {
            return qtableview_visualrect_callback(this, index);
        } else {
            return QTableView::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtableview_scrollto_isbase) {
            qtableview_scrollto_isbase = false;
            QTableView::scrollTo(index, hint);
        } else if (qtableview_scrollto_callback != nullptr) {
            qtableview_scrollto_callback(this, index, hint);
        } else {
            QTableView::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtableview_indexat_isbase) {
            qtableview_indexat_isbase = false;
            return QTableView::indexAt(p);
        } else if (qtableview_indexat_callback != nullptr) {
            return qtableview_indexat_callback(this, p);
        } else {
            return QTableView::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtableview_scrollcontentsby_isbase) {
            qtableview_scrollcontentsby_isbase = false;
            QTableView::scrollContentsBy(dx, dy);
        } else if (qtableview_scrollcontentsby_callback != nullptr) {
            qtableview_scrollcontentsby_callback(this, dx, dy);
        } else {
            QTableView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtableview_initviewitemoption_isbase) {
            qtableview_initviewitemoption_isbase = false;
            QTableView::initViewItemOption(option);
        } else if (qtableview_initviewitemoption_callback != nullptr) {
            qtableview_initviewitemoption_callback(this, option);
        } else {
            QTableView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtableview_paintevent_isbase) {
            qtableview_paintevent_isbase = false;
            QTableView::paintEvent(e);
        } else if (qtableview_paintevent_callback != nullptr) {
            qtableview_paintevent_callback(this, e);
        } else {
            QTableView::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtableview_timerevent_isbase) {
            qtableview_timerevent_isbase = false;
            QTableView::timerEvent(event);
        } else if (qtableview_timerevent_callback != nullptr) {
            qtableview_timerevent_callback(this, event);
        } else {
            QTableView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtableview_horizontaloffset_isbase) {
            qtableview_horizontaloffset_isbase = false;
            return QTableView::horizontalOffset();
        } else if (qtableview_horizontaloffset_callback != nullptr) {
            return qtableview_horizontaloffset_callback();
        } else {
            return QTableView::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtableview_verticaloffset_isbase) {
            qtableview_verticaloffset_isbase = false;
            return QTableView::verticalOffset();
        } else if (qtableview_verticaloffset_callback != nullptr) {
            return qtableview_verticaloffset_callback();
        } else {
            return QTableView::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtableview_movecursor_isbase) {
            qtableview_movecursor_isbase = false;
            return QTableView::moveCursor(cursorAction, modifiers);
        } else if (qtableview_movecursor_callback != nullptr) {
            return qtableview_movecursor_callback(this, cursorAction, modifiers);
        } else {
            return QTableView::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtableview_setselection_isbase) {
            qtableview_setselection_isbase = false;
            QTableView::setSelection(rect, command);
        } else if (qtableview_setselection_callback != nullptr) {
            qtableview_setselection_callback(this, rect, command);
        } else {
            QTableView::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtableview_visualregionforselection_isbase) {
            qtableview_visualregionforselection_isbase = false;
            return QTableView::visualRegionForSelection(selection);
        } else if (qtableview_visualregionforselection_callback != nullptr) {
            return qtableview_visualregionforselection_callback(this, selection);
        } else {
            return QTableView::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList selectedIndexes() const override {
        if (qtableview_selectedindexes_isbase) {
            qtableview_selectedindexes_isbase = false;
            return QTableView::selectedIndexes();
        } else if (qtableview_selectedindexes_callback != nullptr) {
            return qtableview_selectedindexes_callback();
        } else {
            return QTableView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtableview_updategeometries_isbase) {
            qtableview_updategeometries_isbase = false;
            QTableView::updateGeometries();
        } else if (qtableview_updategeometries_callback != nullptr) {
            qtableview_updategeometries_callback();
        } else {
            QTableView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtableview_viewportsizehint_isbase) {
            qtableview_viewportsizehint_isbase = false;
            return QTableView::viewportSizeHint();
        } else if (qtableview_viewportsizehint_callback != nullptr) {
            return qtableview_viewportsizehint_callback();
        } else {
            return QTableView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtableview_sizehintforrow_isbase) {
            qtableview_sizehintforrow_isbase = false;
            return QTableView::sizeHintForRow(row);
        } else if (qtableview_sizehintforrow_callback != nullptr) {
            return qtableview_sizehintforrow_callback(this, row);
        } else {
            return QTableView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtableview_sizehintforcolumn_isbase) {
            qtableview_sizehintforcolumn_isbase = false;
            return QTableView::sizeHintForColumn(column);
        } else if (qtableview_sizehintforcolumn_callback != nullptr) {
            return qtableview_sizehintforcolumn_callback(this, column);
        } else {
            return QTableView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtableview_verticalscrollbaraction_isbase) {
            qtableview_verticalscrollbaraction_isbase = false;
            QTableView::verticalScrollbarAction(action);
        } else if (qtableview_verticalscrollbaraction_callback != nullptr) {
            qtableview_verticalscrollbaraction_callback(this, action);
        } else {
            QTableView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtableview_horizontalscrollbaraction_isbase) {
            qtableview_horizontalscrollbaraction_isbase = false;
            QTableView::horizontalScrollbarAction(action);
        } else if (qtableview_horizontalscrollbaraction_callback != nullptr) {
            qtableview_horizontalscrollbaraction_callback(this, action);
        } else {
            QTableView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtableview_isindexhidden_isbase) {
            qtableview_isindexhidden_isbase = false;
            return QTableView::isIndexHidden(index);
        } else if (qtableview_isindexhidden_callback != nullptr) {
            return qtableview_isindexhidden_callback(this, index);
        } else {
            return QTableView::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtableview_selectionchanged_isbase) {
            qtableview_selectionchanged_isbase = false;
            QTableView::selectionChanged(selected, deselected);
        } else if (qtableview_selectionchanged_callback != nullptr) {
            qtableview_selectionchanged_callback(this, selected, deselected);
        } else {
            QTableView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtableview_currentchanged_isbase) {
            qtableview_currentchanged_isbase = false;
            QTableView::currentChanged(current, previous);
        } else if (qtableview_currentchanged_callback != nullptr) {
            qtableview_currentchanged_callback(this, current, previous);
        } else {
            QTableView::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtableview_keyboardsearch_isbase) {
            qtableview_keyboardsearch_isbase = false;
            QTableView::keyboardSearch(search);
        } else if (qtableview_keyboardsearch_callback != nullptr) {
            qtableview_keyboardsearch_callback(this, search);
        } else {
            QTableView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtableview_itemdelegateforindex_isbase) {
            qtableview_itemdelegateforindex_isbase = false;
            return QTableView::itemDelegateForIndex(index);
        } else if (qtableview_itemdelegateforindex_callback != nullptr) {
            return qtableview_itemdelegateforindex_callback(this, index);
        } else {
            return QTableView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtableview_inputmethodquery_isbase) {
            qtableview_inputmethodquery_isbase = false;
            return QTableView::inputMethodQuery(query);
        } else if (qtableview_inputmethodquery_callback != nullptr) {
            return qtableview_inputmethodquery_callback(this, query);
        } else {
            return QTableView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtableview_reset_isbase) {
            qtableview_reset_isbase = false;
            QTableView::reset();
        } else if (qtableview_reset_callback != nullptr) {
            qtableview_reset_callback();
        } else {
            QTableView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtableview_selectall_isbase) {
            qtableview_selectall_isbase = false;
            QTableView::selectAll();
        } else if (qtableview_selectall_callback != nullptr) {
            qtableview_selectall_callback();
        } else {
            QTableView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtableview_datachanged_isbase) {
            qtableview_datachanged_isbase = false;
            QTableView::dataChanged(topLeft, bottomRight, roles);
        } else if (qtableview_datachanged_callback != nullptr) {
            qtableview_datachanged_callback(this, topLeft, bottomRight, roles);
        } else {
            QTableView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtableview_rowsinserted_isbase) {
            qtableview_rowsinserted_isbase = false;
            QTableView::rowsInserted(parent, start, end);
        } else if (qtableview_rowsinserted_callback != nullptr) {
            qtableview_rowsinserted_callback(this, parent, start, end);
        } else {
            QTableView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtableview_rowsabouttoberemoved_isbase) {
            qtableview_rowsabouttoberemoved_isbase = false;
            QTableView::rowsAboutToBeRemoved(parent, start, end);
        } else if (qtableview_rowsabouttoberemoved_callback != nullptr) {
            qtableview_rowsabouttoberemoved_callback(this, parent, start, end);
        } else {
            QTableView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtableview_updateeditordata_isbase) {
            qtableview_updateeditordata_isbase = false;
            QTableView::updateEditorData();
        } else if (qtableview_updateeditordata_callback != nullptr) {
            qtableview_updateeditordata_callback();
        } else {
            QTableView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtableview_updateeditorgeometries_isbase) {
            qtableview_updateeditorgeometries_isbase = false;
            QTableView::updateEditorGeometries();
        } else if (qtableview_updateeditorgeometries_callback != nullptr) {
            qtableview_updateeditorgeometries_callback();
        } else {
            QTableView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtableview_verticalscrollbarvaluechanged_isbase) {
            qtableview_verticalscrollbarvaluechanged_isbase = false;
            QTableView::verticalScrollbarValueChanged(value);
        } else if (qtableview_verticalscrollbarvaluechanged_callback != nullptr) {
            qtableview_verticalscrollbarvaluechanged_callback(this, value);
        } else {
            QTableView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtableview_horizontalscrollbarvaluechanged_isbase) {
            qtableview_horizontalscrollbarvaluechanged_isbase = false;
            QTableView::horizontalScrollbarValueChanged(value);
        } else if (qtableview_horizontalscrollbarvaluechanged_callback != nullptr) {
            qtableview_horizontalscrollbarvaluechanged_callback(this, value);
        } else {
            QTableView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtableview_closeeditor_isbase) {
            qtableview_closeeditor_isbase = false;
            QTableView::closeEditor(editor, hint);
        } else if (qtableview_closeeditor_callback != nullptr) {
            qtableview_closeeditor_callback(this, editor, hint);
        } else {
            QTableView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtableview_commitdata_isbase) {
            qtableview_commitdata_isbase = false;
            QTableView::commitData(editor);
        } else if (qtableview_commitdata_callback != nullptr) {
            qtableview_commitdata_callback(this, editor);
        } else {
            QTableView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtableview_editordestroyed_isbase) {
            qtableview_editordestroyed_isbase = false;
            QTableView::editorDestroyed(editor);
        } else if (qtableview_editordestroyed_callback != nullptr) {
            qtableview_editordestroyed_callback(this, editor);
        } else {
            QTableView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtableview_edit2_isbase) {
            qtableview_edit2_isbase = false;
            return QTableView::edit(index, trigger, event);
        } else if (qtableview_edit2_callback != nullptr) {
            return qtableview_edit2_callback(this, index, trigger, event);
        } else {
            return QTableView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtableview_selectioncommand_isbase) {
            qtableview_selectioncommand_isbase = false;
            return QTableView::selectionCommand(index, event);
        } else if (qtableview_selectioncommand_callback != nullptr) {
            return qtableview_selectioncommand_callback(this, index, event);
        } else {
            return QTableView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtableview_startdrag_isbase) {
            qtableview_startdrag_isbase = false;
            QTableView::startDrag(supportedActions);
        } else if (qtableview_startdrag_callback != nullptr) {
            qtableview_startdrag_callback(this, supportedActions);
        } else {
            QTableView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtableview_focusnextprevchild_isbase) {
            qtableview_focusnextprevchild_isbase = false;
            return QTableView::focusNextPrevChild(next);
        } else if (qtableview_focusnextprevchild_callback != nullptr) {
            return qtableview_focusnextprevchild_callback(this, next);
        } else {
            return QTableView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtableview_event_isbase) {
            qtableview_event_isbase = false;
            return QTableView::event(event);
        } else if (qtableview_event_callback != nullptr) {
            return qtableview_event_callback(this, event);
        } else {
            return QTableView::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtableview_viewportevent_isbase) {
            qtableview_viewportevent_isbase = false;
            return QTableView::viewportEvent(event);
        } else if (qtableview_viewportevent_callback != nullptr) {
            return qtableview_viewportevent_callback(this, event);
        } else {
            return QTableView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtableview_mousepressevent_isbase) {
            qtableview_mousepressevent_isbase = false;
            QTableView::mousePressEvent(event);
        } else if (qtableview_mousepressevent_callback != nullptr) {
            qtableview_mousepressevent_callback(this, event);
        } else {
            QTableView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtableview_mousemoveevent_isbase) {
            qtableview_mousemoveevent_isbase = false;
            QTableView::mouseMoveEvent(event);
        } else if (qtableview_mousemoveevent_callback != nullptr) {
            qtableview_mousemoveevent_callback(this, event);
        } else {
            QTableView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtableview_mousereleaseevent_isbase) {
            qtableview_mousereleaseevent_isbase = false;
            QTableView::mouseReleaseEvent(event);
        } else if (qtableview_mousereleaseevent_callback != nullptr) {
            qtableview_mousereleaseevent_callback(this, event);
        } else {
            QTableView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtableview_mousedoubleclickevent_isbase) {
            qtableview_mousedoubleclickevent_isbase = false;
            QTableView::mouseDoubleClickEvent(event);
        } else if (qtableview_mousedoubleclickevent_callback != nullptr) {
            qtableview_mousedoubleclickevent_callback(this, event);
        } else {
            QTableView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtableview_dragenterevent_isbase) {
            qtableview_dragenterevent_isbase = false;
            QTableView::dragEnterEvent(event);
        } else if (qtableview_dragenterevent_callback != nullptr) {
            qtableview_dragenterevent_callback(this, event);
        } else {
            QTableView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtableview_dragmoveevent_isbase) {
            qtableview_dragmoveevent_isbase = false;
            QTableView::dragMoveEvent(event);
        } else if (qtableview_dragmoveevent_callback != nullptr) {
            qtableview_dragmoveevent_callback(this, event);
        } else {
            QTableView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtableview_dragleaveevent_isbase) {
            qtableview_dragleaveevent_isbase = false;
            QTableView::dragLeaveEvent(event);
        } else if (qtableview_dragleaveevent_callback != nullptr) {
            qtableview_dragleaveevent_callback(this, event);
        } else {
            QTableView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtableview_dropevent_isbase) {
            qtableview_dropevent_isbase = false;
            QTableView::dropEvent(event);
        } else if (qtableview_dropevent_callback != nullptr) {
            qtableview_dropevent_callback(this, event);
        } else {
            QTableView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtableview_focusinevent_isbase) {
            qtableview_focusinevent_isbase = false;
            QTableView::focusInEvent(event);
        } else if (qtableview_focusinevent_callback != nullptr) {
            qtableview_focusinevent_callback(this, event);
        } else {
            QTableView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtableview_focusoutevent_isbase) {
            qtableview_focusoutevent_isbase = false;
            QTableView::focusOutEvent(event);
        } else if (qtableview_focusoutevent_callback != nullptr) {
            qtableview_focusoutevent_callback(this, event);
        } else {
            QTableView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtableview_keypressevent_isbase) {
            qtableview_keypressevent_isbase = false;
            QTableView::keyPressEvent(event);
        } else if (qtableview_keypressevent_callback != nullptr) {
            qtableview_keypressevent_callback(this, event);
        } else {
            QTableView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtableview_resizeevent_isbase) {
            qtableview_resizeevent_isbase = false;
            QTableView::resizeEvent(event);
        } else if (qtableview_resizeevent_callback != nullptr) {
            qtableview_resizeevent_callback(this, event);
        } else {
            QTableView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtableview_inputmethodevent_isbase) {
            qtableview_inputmethodevent_isbase = false;
            QTableView::inputMethodEvent(event);
        } else if (qtableview_inputmethodevent_callback != nullptr) {
            qtableview_inputmethodevent_callback(this, event);
        } else {
            QTableView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtableview_eventfilter_isbase) {
            qtableview_eventfilter_isbase = false;
            return QTableView::eventFilter(object, event);
        } else if (qtableview_eventfilter_callback != nullptr) {
            return qtableview_eventfilter_callback(this, object, event);
        } else {
            return QTableView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtableview_minimumsizehint_isbase) {
            qtableview_minimumsizehint_isbase = false;
            return QTableView::minimumSizeHint();
        } else if (qtableview_minimumsizehint_callback != nullptr) {
            return qtableview_minimumsizehint_callback();
        } else {
            return QTableView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtableview_sizehint_isbase) {
            qtableview_sizehint_isbase = false;
            return QTableView::sizeHint();
        } else if (qtableview_sizehint_callback != nullptr) {
            return qtableview_sizehint_callback();
        } else {
            return QTableView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtableview_setupviewport_isbase) {
            qtableview_setupviewport_isbase = false;
            QTableView::setupViewport(viewport);
        } else if (qtableview_setupviewport_callback != nullptr) {
            qtableview_setupviewport_callback(this, viewport);
        } else {
            QTableView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtableview_wheelevent_isbase) {
            qtableview_wheelevent_isbase = false;
            QTableView::wheelEvent(param1);
        } else if (qtableview_wheelevent_callback != nullptr) {
            qtableview_wheelevent_callback(this, param1);
        } else {
            QTableView::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtableview_contextmenuevent_isbase) {
            qtableview_contextmenuevent_isbase = false;
            QTableView::contextMenuEvent(param1);
        } else if (qtableview_contextmenuevent_callback != nullptr) {
            qtableview_contextmenuevent_callback(this, param1);
        } else {
            QTableView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtableview_changeevent_isbase) {
            qtableview_changeevent_isbase = false;
            QTableView::changeEvent(param1);
        } else if (qtableview_changeevent_callback != nullptr) {
            qtableview_changeevent_callback(this, param1);
        } else {
            QTableView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtableview_initstyleoption_isbase) {
            qtableview_initstyleoption_isbase = false;
            QTableView::initStyleOption(option);
        } else if (qtableview_initstyleoption_callback != nullptr) {
            qtableview_initstyleoption_callback(this, option);
        } else {
            QTableView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtableview_devtype_isbase) {
            qtableview_devtype_isbase = false;
            return QTableView::devType();
        } else if (qtableview_devtype_callback != nullptr) {
            return qtableview_devtype_callback();
        } else {
            return QTableView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtableview_setvisible_isbase) {
            qtableview_setvisible_isbase = false;
            QTableView::setVisible(visible);
        } else if (qtableview_setvisible_callback != nullptr) {
            qtableview_setvisible_callback(this, visible);
        } else {
            QTableView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtableview_heightforwidth_isbase) {
            qtableview_heightforwidth_isbase = false;
            return QTableView::heightForWidth(param1);
        } else if (qtableview_heightforwidth_callback != nullptr) {
            return qtableview_heightforwidth_callback(this, param1);
        } else {
            return QTableView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtableview_hasheightforwidth_isbase) {
            qtableview_hasheightforwidth_isbase = false;
            return QTableView::hasHeightForWidth();
        } else if (qtableview_hasheightforwidth_callback != nullptr) {
            return qtableview_hasheightforwidth_callback();
        } else {
            return QTableView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtableview_paintengine_isbase) {
            qtableview_paintengine_isbase = false;
            return QTableView::paintEngine();
        } else if (qtableview_paintengine_callback != nullptr) {
            return qtableview_paintengine_callback();
        } else {
            return QTableView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtableview_keyreleaseevent_isbase) {
            qtableview_keyreleaseevent_isbase = false;
            QTableView::keyReleaseEvent(event);
        } else if (qtableview_keyreleaseevent_callback != nullptr) {
            qtableview_keyreleaseevent_callback(this, event);
        } else {
            QTableView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtableview_enterevent_isbase) {
            qtableview_enterevent_isbase = false;
            QTableView::enterEvent(event);
        } else if (qtableview_enterevent_callback != nullptr) {
            qtableview_enterevent_callback(this, event);
        } else {
            QTableView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtableview_leaveevent_isbase) {
            qtableview_leaveevent_isbase = false;
            QTableView::leaveEvent(event);
        } else if (qtableview_leaveevent_callback != nullptr) {
            qtableview_leaveevent_callback(this, event);
        } else {
            QTableView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtableview_moveevent_isbase) {
            qtableview_moveevent_isbase = false;
            QTableView::moveEvent(event);
        } else if (qtableview_moveevent_callback != nullptr) {
            qtableview_moveevent_callback(this, event);
        } else {
            QTableView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtableview_closeevent_isbase) {
            qtableview_closeevent_isbase = false;
            QTableView::closeEvent(event);
        } else if (qtableview_closeevent_callback != nullptr) {
            qtableview_closeevent_callback(this, event);
        } else {
            QTableView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtableview_tabletevent_isbase) {
            qtableview_tabletevent_isbase = false;
            QTableView::tabletEvent(event);
        } else if (qtableview_tabletevent_callback != nullptr) {
            qtableview_tabletevent_callback(this, event);
        } else {
            QTableView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtableview_actionevent_isbase) {
            qtableview_actionevent_isbase = false;
            QTableView::actionEvent(event);
        } else if (qtableview_actionevent_callback != nullptr) {
            qtableview_actionevent_callback(this, event);
        } else {
            QTableView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtableview_showevent_isbase) {
            qtableview_showevent_isbase = false;
            QTableView::showEvent(event);
        } else if (qtableview_showevent_callback != nullptr) {
            qtableview_showevent_callback(this, event);
        } else {
            QTableView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtableview_hideevent_isbase) {
            qtableview_hideevent_isbase = false;
            QTableView::hideEvent(event);
        } else if (qtableview_hideevent_callback != nullptr) {
            qtableview_hideevent_callback(this, event);
        } else {
            QTableView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtableview_nativeevent_isbase) {
            qtableview_nativeevent_isbase = false;
            return QTableView::nativeEvent(eventType, message, result);
        } else if (qtableview_nativeevent_callback != nullptr) {
            return qtableview_nativeevent_callback(this, eventType, message, result);
        } else {
            return QTableView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtableview_metric_isbase) {
            qtableview_metric_isbase = false;
            return QTableView::metric(param1);
        } else if (qtableview_metric_callback != nullptr) {
            return qtableview_metric_callback(this, param1);
        } else {
            return QTableView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtableview_initpainter_isbase) {
            qtableview_initpainter_isbase = false;
            QTableView::initPainter(painter);
        } else if (qtableview_initpainter_callback != nullptr) {
            qtableview_initpainter_callback(this, painter);
        } else {
            QTableView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtableview_redirected_isbase) {
            qtableview_redirected_isbase = false;
            return QTableView::redirected(offset);
        } else if (qtableview_redirected_callback != nullptr) {
            return qtableview_redirected_callback(this, offset);
        } else {
            return QTableView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtableview_sharedpainter_isbase) {
            qtableview_sharedpainter_isbase = false;
            return QTableView::sharedPainter();
        } else if (qtableview_sharedpainter_callback != nullptr) {
            return qtableview_sharedpainter_callback();
        } else {
            return QTableView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtableview_childevent_isbase) {
            qtableview_childevent_isbase = false;
            QTableView::childEvent(event);
        } else if (qtableview_childevent_callback != nullptr) {
            qtableview_childevent_callback(this, event);
        } else {
            QTableView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtableview_customevent_isbase) {
            qtableview_customevent_isbase = false;
            QTableView::customEvent(event);
        } else if (qtableview_customevent_callback != nullptr) {
            qtableview_customevent_callback(this, event);
        } else {
            QTableView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtableview_connectnotify_isbase) {
            qtableview_connectnotify_isbase = false;
            QTableView::connectNotify(signal);
        } else if (qtableview_connectnotify_callback != nullptr) {
            qtableview_connectnotify_callback(this, signal);
        } else {
            QTableView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtableview_disconnectnotify_isbase) {
            qtableview_disconnectnotify_isbase = false;
            QTableView::disconnectNotify(signal);
        } else if (qtableview_disconnectnotify_callback != nullptr) {
            qtableview_disconnectnotify_callback(this, signal);
        } else {
            QTableView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowMoved(int row, int oldIndex, int newIndex) {
        if (qtableview_rowmoved_isbase) {
            qtableview_rowmoved_isbase = false;
            QTableView::rowMoved(row, oldIndex, newIndex);
        } else if (qtableview_rowmoved_callback != nullptr) {
            qtableview_rowmoved_callback(this, row, oldIndex, newIndex);
        } else {
            QTableView::rowMoved(row, oldIndex, newIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnMoved(int column, int oldIndex, int newIndex) {
        if (qtableview_columnmoved_isbase) {
            qtableview_columnmoved_isbase = false;
            QTableView::columnMoved(column, oldIndex, newIndex);
        } else if (qtableview_columnmoved_callback != nullptr) {
            qtableview_columnmoved_callback(this, column, oldIndex, newIndex);
        } else {
            QTableView::columnMoved(column, oldIndex, newIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowResized(int row, int oldHeight, int newHeight) {
        if (qtableview_rowresized_isbase) {
            qtableview_rowresized_isbase = false;
            QTableView::rowResized(row, oldHeight, newHeight);
        } else if (qtableview_rowresized_callback != nullptr) {
            qtableview_rowresized_callback(this, row, oldHeight, newHeight);
        } else {
            QTableView::rowResized(row, oldHeight, newHeight);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnResized(int column, int oldWidth, int newWidth) {
        if (qtableview_columnresized_isbase) {
            qtableview_columnresized_isbase = false;
            QTableView::columnResized(column, oldWidth, newWidth);
        } else if (qtableview_columnresized_callback != nullptr) {
            qtableview_columnresized_callback(this, column, oldWidth, newWidth);
        } else {
            QTableView::columnResized(column, oldWidth, newWidth);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowCountChanged(int oldCount, int newCount) {
        if (qtableview_rowcountchanged_isbase) {
            qtableview_rowcountchanged_isbase = false;
            QTableView::rowCountChanged(oldCount, newCount);
        } else if (qtableview_rowcountchanged_callback != nullptr) {
            qtableview_rowcountchanged_callback(this, oldCount, newCount);
        } else {
            QTableView::rowCountChanged(oldCount, newCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnCountChanged(int oldCount, int newCount) {
        if (qtableview_columncountchanged_isbase) {
            qtableview_columncountchanged_isbase = false;
            QTableView::columnCountChanged(oldCount, newCount);
        } else if (qtableview_columncountchanged_callback != nullptr) {
            qtableview_columncountchanged_callback(this, oldCount, newCount);
        } else {
            QTableView::columnCountChanged(oldCount, newCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qtableview_state_isbase) {
            qtableview_state_isbase = false;
            return QTableView::state();
        } else if (qtableview_state_callback != nullptr) {
            return qtableview_state_callback();
        } else {
            return QTableView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qtableview_setstate_isbase) {
            qtableview_setstate_isbase = false;
            QTableView::setState(state);
        } else if (qtableview_setstate_callback != nullptr) {
            qtableview_setstate_callback(this, state);
        } else {
            QTableView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qtableview_scheduledelayeditemslayout_isbase) {
            qtableview_scheduledelayeditemslayout_isbase = false;
            QTableView::scheduleDelayedItemsLayout();
        } else if (qtableview_scheduledelayeditemslayout_callback != nullptr) {
            qtableview_scheduledelayeditemslayout_callback();
        } else {
            QTableView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qtableview_executedelayeditemslayout_isbase) {
            qtableview_executedelayeditemslayout_isbase = false;
            QTableView::executeDelayedItemsLayout();
        } else if (qtableview_executedelayeditemslayout_callback != nullptr) {
            qtableview_executedelayeditemslayout_callback();
        } else {
            QTableView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qtableview_setdirtyregion_isbase) {
            qtableview_setdirtyregion_isbase = false;
            QTableView::setDirtyRegion(region);
        } else if (qtableview_setdirtyregion_callback != nullptr) {
            qtableview_setdirtyregion_callback(this, region);
        } else {
            QTableView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qtableview_scrolldirtyregion_isbase) {
            qtableview_scrolldirtyregion_isbase = false;
            QTableView::scrollDirtyRegion(dx, dy);
        } else if (qtableview_scrolldirtyregion_callback != nullptr) {
            qtableview_scrolldirtyregion_callback(this, dx, dy);
        } else {
            QTableView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qtableview_dirtyregionoffset_isbase) {
            qtableview_dirtyregionoffset_isbase = false;
            return QTableView::dirtyRegionOffset();
        } else if (qtableview_dirtyregionoffset_callback != nullptr) {
            return qtableview_dirtyregionoffset_callback();
        } else {
            return QTableView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qtableview_startautoscroll_isbase) {
            qtableview_startautoscroll_isbase = false;
            QTableView::startAutoScroll();
        } else if (qtableview_startautoscroll_callback != nullptr) {
            qtableview_startautoscroll_callback();
        } else {
            QTableView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qtableview_stopautoscroll_isbase) {
            qtableview_stopautoscroll_isbase = false;
            QTableView::stopAutoScroll();
        } else if (qtableview_stopautoscroll_callback != nullptr) {
            qtableview_stopautoscroll_callback();
        } else {
            QTableView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qtableview_doautoscroll_isbase) {
            qtableview_doautoscroll_isbase = false;
            QTableView::doAutoScroll();
        } else if (qtableview_doautoscroll_callback != nullptr) {
            qtableview_doautoscroll_callback();
        } else {
            QTableView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qtableview_dropindicatorposition_isbase) {
            qtableview_dropindicatorposition_isbase = false;
            return QTableView::dropIndicatorPosition();
        } else if (qtableview_dropindicatorposition_callback != nullptr) {
            return qtableview_dropindicatorposition_callback();
        } else {
            return QTableView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtableview_setviewportmargins_isbase) {
            qtableview_setviewportmargins_isbase = false;
            QTableView::setViewportMargins(left, top, right, bottom);
        } else if (qtableview_setviewportmargins_callback != nullptr) {
            qtableview_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QTableView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtableview_viewportmargins_isbase) {
            qtableview_viewportmargins_isbase = false;
            return QTableView::viewportMargins();
        } else if (qtableview_viewportmargins_callback != nullptr) {
            return qtableview_viewportmargins_callback();
        } else {
            return QTableView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtableview_drawframe_isbase) {
            qtableview_drawframe_isbase = false;
            QTableView::drawFrame(param1);
        } else if (qtableview_drawframe_callback != nullptr) {
            qtableview_drawframe_callback(this, param1);
        } else {
            QTableView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtableview_updatemicrofocus_isbase) {
            qtableview_updatemicrofocus_isbase = false;
            QTableView::updateMicroFocus();
        } else if (qtableview_updatemicrofocus_callback != nullptr) {
            qtableview_updatemicrofocus_callback();
        } else {
            QTableView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtableview_create_isbase) {
            qtableview_create_isbase = false;
            QTableView::create();
        } else if (qtableview_create_callback != nullptr) {
            qtableview_create_callback();
        } else {
            QTableView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtableview_destroy_isbase) {
            qtableview_destroy_isbase = false;
            QTableView::destroy();
        } else if (qtableview_destroy_callback != nullptr) {
            qtableview_destroy_callback();
        } else {
            QTableView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtableview_focusnextchild_isbase) {
            qtableview_focusnextchild_isbase = false;
            return QTableView::focusNextChild();
        } else if (qtableview_focusnextchild_callback != nullptr) {
            return qtableview_focusnextchild_callback();
        } else {
            return QTableView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtableview_focuspreviouschild_isbase) {
            qtableview_focuspreviouschild_isbase = false;
            return QTableView::focusPreviousChild();
        } else if (qtableview_focuspreviouschild_callback != nullptr) {
            return qtableview_focuspreviouschild_callback();
        } else {
            return QTableView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtableview_sender_isbase) {
            qtableview_sender_isbase = false;
            return QTableView::sender();
        } else if (qtableview_sender_callback != nullptr) {
            return qtableview_sender_callback();
        } else {
            return QTableView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtableview_sendersignalindex_isbase) {
            qtableview_sendersignalindex_isbase = false;
            return QTableView::senderSignalIndex();
        } else if (qtableview_sendersignalindex_callback != nullptr) {
            return qtableview_sendersignalindex_callback();
        } else {
            return QTableView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtableview_receivers_isbase) {
            qtableview_receivers_isbase = false;
            return QTableView::receivers(signal);
        } else if (qtableview_receivers_callback != nullptr) {
            return qtableview_receivers_callback(this, signal);
        } else {
            return QTableView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtableview_issignalconnected_isbase) {
            qtableview_issignalconnected_isbase = false;
            return QTableView::isSignalConnected(signal);
        } else if (qtableview_issignalconnected_callback != nullptr) {
            return qtableview_issignalconnected_callback(this, signal);
        } else {
            return QTableView::isSignalConnected(signal);
        }
    }
};

#endif
