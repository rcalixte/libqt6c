#pragma once
#ifndef SRCC_LIBVIRTUALQTREEVIEW_H
#define SRCC_LIBVIRTUALQTREEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTreeView so that we can call protected methods
class VirtualQTreeView : public QTreeView {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTreeView_Metacall_Callback = int (*)(QTreeView*, QMetaObject::Call, int, void**);
    using QTreeView_SetModel_Callback = void (*)(QTreeView*, QAbstractItemModel*);
    using QTreeView_SetRootIndex_Callback = void (*)(QTreeView*, const QModelIndex&);
    using QTreeView_SetSelectionModel_Callback = void (*)(QTreeView*, QItemSelectionModel*);
    using QTreeView_KeyboardSearch_Callback = void (*)(QTreeView*, const QString&);
    using QTreeView_VisualRect_Callback = QRect (*)(const QTreeView*, const QModelIndex&);
    using QTreeView_ScrollTo_Callback = void (*)(QTreeView*, const QModelIndex&, QAbstractItemView::ScrollHint);
    using QTreeView_IndexAt_Callback = QModelIndex (*)(const QTreeView*, const QPoint&);
    using QTreeView_DoItemsLayout_Callback = void (*)();
    using QTreeView_Reset_Callback = void (*)();
    using QTreeView_DataChanged_Callback = void (*)(QTreeView*, const QModelIndex&, const QModelIndex&, const QList<int>&);
    using QTreeView_SelectAll_Callback = void (*)();
    using QTreeView_VerticalScrollbarValueChanged_Callback = void (*)(QTreeView*, int);
    using QTreeView_ScrollContentsBy_Callback = void (*)(QTreeView*, int, int);
    using QTreeView_RowsInserted_Callback = void (*)(QTreeView*, const QModelIndex&, int, int);
    using QTreeView_RowsAboutToBeRemoved_Callback = void (*)(QTreeView*, const QModelIndex&, int, int);
    using QTreeView_MoveCursor_Callback = QModelIndex (*)(QTreeView*, int, Qt::KeyboardModifiers);
    using QTreeView_HorizontalOffset_Callback = int (*)();
    using QTreeView_VerticalOffset_Callback = int (*)();
    using QTreeView_SetSelection_Callback = void (*)(QTreeView*, const QRect&, QItemSelectionModel::SelectionFlags);
    using QTreeView_VisualRegionForSelection_Callback = QRegion (*)(const QTreeView*, const QItemSelection&);
    using QTreeView_SelectedIndexes_Callback = QModelIndexList (*)();
    using QTreeView_ChangeEvent_Callback = void (*)(QTreeView*, QEvent*);
    using QTreeView_TimerEvent_Callback = void (*)(QTreeView*, QTimerEvent*);
    using QTreeView_PaintEvent_Callback = void (*)(QTreeView*, QPaintEvent*);
    using QTreeView_DrawRow_Callback = void (*)(const QTreeView*, QPainter*, const QStyleOptionViewItem&, const QModelIndex&);
    using QTreeView_DrawBranches_Callback = void (*)(const QTreeView*, QPainter*, const QRect&, const QModelIndex&);
    using QTreeView_MousePressEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_MouseReleaseEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_MouseDoubleClickEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_MouseMoveEvent_Callback = void (*)(QTreeView*, QMouseEvent*);
    using QTreeView_KeyPressEvent_Callback = void (*)(QTreeView*, QKeyEvent*);
    using QTreeView_DragMoveEvent_Callback = void (*)(QTreeView*, QDragMoveEvent*);
    using QTreeView_ViewportEvent_Callback = bool (*)(QTreeView*, QEvent*);
    using QTreeView_UpdateGeometries_Callback = void (*)();
    using QTreeView_ViewportSizeHint_Callback = QSize (*)();
    using QTreeView_SizeHintForColumn_Callback = int (*)(const QTreeView*, int);
    using QTreeView_HorizontalScrollbarAction_Callback = void (*)(QTreeView*, int);
    using QTreeView_IsIndexHidden_Callback = bool (*)(const QTreeView*, const QModelIndex&);
    using QTreeView_SelectionChanged_Callback = void (*)(QTreeView*, const QItemSelection&, const QItemSelection&);
    using QTreeView_CurrentChanged_Callback = void (*)(QTreeView*, const QModelIndex&, const QModelIndex&);
    using QTreeView_SizeHintForRow_Callback = int (*)(const QTreeView*, int);
    using QTreeView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTreeView*, const QModelIndex&);
    using QTreeView_InputMethodQuery_Callback = QVariant (*)(const QTreeView*, Qt::InputMethodQuery);
    using QTreeView_UpdateEditorData_Callback = void (*)();
    using QTreeView_UpdateEditorGeometries_Callback = void (*)();
    using QTreeView_VerticalScrollbarAction_Callback = void (*)(QTreeView*, int);
    using QTreeView_HorizontalScrollbarValueChanged_Callback = void (*)(QTreeView*, int);
    using QTreeView_CloseEditor_Callback = void (*)(QTreeView*, QWidget*, QAbstractItemDelegate::EndEditHint);
    using QTreeView_CommitData_Callback = void (*)(QTreeView*, QWidget*);
    using QTreeView_EditorDestroyed_Callback = void (*)(QTreeView*, QObject*);
    using QTreeView_Edit2_Callback = bool (*)(QTreeView*, const QModelIndex&, QAbstractItemView::EditTrigger, QEvent*);
    using QTreeView_SelectionCommand_Callback = QItemSelectionModel::SelectionFlags (*)(const QTreeView*, const QModelIndex&, const QEvent*);
    using QTreeView_StartDrag_Callback = void (*)(QTreeView*, Qt::DropActions);
    using QTreeView_InitViewItemOption_Callback = void (*)(const QTreeView*, QStyleOptionViewItem*);
    using QTreeView_FocusNextPrevChild_Callback = bool (*)(QTreeView*, bool);
    using QTreeView_Event_Callback = bool (*)(QTreeView*, QEvent*);
    using QTreeView_DragEnterEvent_Callback = void (*)(QTreeView*, QDragEnterEvent*);
    using QTreeView_DragLeaveEvent_Callback = void (*)(QTreeView*, QDragLeaveEvent*);
    using QTreeView_DropEvent_Callback = void (*)(QTreeView*, QDropEvent*);
    using QTreeView_FocusInEvent_Callback = void (*)(QTreeView*, QFocusEvent*);
    using QTreeView_FocusOutEvent_Callback = void (*)(QTreeView*, QFocusEvent*);
    using QTreeView_ResizeEvent_Callback = void (*)(QTreeView*, QResizeEvent*);
    using QTreeView_InputMethodEvent_Callback = void (*)(QTreeView*, QInputMethodEvent*);
    using QTreeView_EventFilter_Callback = bool (*)(QTreeView*, QObject*, QEvent*);
    using QTreeView_MinimumSizeHint_Callback = QSize (*)();
    using QTreeView_SizeHint_Callback = QSize (*)();
    using QTreeView_SetupViewport_Callback = void (*)(QTreeView*, QWidget*);
    using QTreeView_WheelEvent_Callback = void (*)(QTreeView*, QWheelEvent*);
    using QTreeView_ContextMenuEvent_Callback = void (*)(QTreeView*, QContextMenuEvent*);
    using QTreeView_InitStyleOption_Callback = void (*)(const QTreeView*, QStyleOptionFrame*);
    using QTreeView_DevType_Callback = int (*)();
    using QTreeView_SetVisible_Callback = void (*)(QTreeView*, bool);
    using QTreeView_HeightForWidth_Callback = int (*)(const QTreeView*, int);
    using QTreeView_HasHeightForWidth_Callback = bool (*)();
    using QTreeView_PaintEngine_Callback = QPaintEngine* (*)();
    using QTreeView_KeyReleaseEvent_Callback = void (*)(QTreeView*, QKeyEvent*);
    using QTreeView_EnterEvent_Callback = void (*)(QTreeView*, QEnterEvent*);
    using QTreeView_LeaveEvent_Callback = void (*)(QTreeView*, QEvent*);
    using QTreeView_MoveEvent_Callback = void (*)(QTreeView*, QMoveEvent*);
    using QTreeView_CloseEvent_Callback = void (*)(QTreeView*, QCloseEvent*);
    using QTreeView_TabletEvent_Callback = void (*)(QTreeView*, QTabletEvent*);
    using QTreeView_ActionEvent_Callback = void (*)(QTreeView*, QActionEvent*);
    using QTreeView_ShowEvent_Callback = void (*)(QTreeView*, QShowEvent*);
    using QTreeView_HideEvent_Callback = void (*)(QTreeView*, QHideEvent*);
    using QTreeView_NativeEvent_Callback = bool (*)(QTreeView*, const QByteArray&, void*, qintptr*);
    using QTreeView_Metric_Callback = int (*)(const QTreeView*, QPaintDevice::PaintDeviceMetric);
    using QTreeView_InitPainter_Callback = void (*)(const QTreeView*, QPainter*);
    using QTreeView_Redirected_Callback = QPaintDevice* (*)(const QTreeView*, QPoint*);
    using QTreeView_SharedPainter_Callback = QPainter* (*)();
    using QTreeView_ChildEvent_Callback = void (*)(QTreeView*, QChildEvent*);
    using QTreeView_CustomEvent_Callback = void (*)(QTreeView*, QEvent*);
    using QTreeView_ConnectNotify_Callback = void (*)(QTreeView*, const QMetaMethod&);
    using QTreeView_DisconnectNotify_Callback = void (*)(QTreeView*, const QMetaMethod&);
    using QTreeView_ColumnResized_Callback = void (*)(QTreeView*, int, int, int);
    using QTreeView_ColumnCountChanged_Callback = void (*)(QTreeView*, int, int);
    using QTreeView_ColumnMoved_Callback = void (*)();
    using QTreeView_Reexpand_Callback = void (*)();
    using QTreeView_RowsRemoved_Callback = void (*)(QTreeView*, const QModelIndex&, int, int);
    using QTreeView_DrawTree_Callback = void (*)(const QTreeView*, QPainter*, const QRegion&);
    using QTreeView_IndexRowSizeHint_Callback = int (*)(const QTreeView*, const QModelIndex&);
    using QTreeView_RowHeight_Callback = int (*)(const QTreeView*, const QModelIndex&);
    using QTreeView_State_Callback = QAbstractItemView::State (*)();
    using QTreeView_SetState_Callback = void (*)(QTreeView*, int);
    using QTreeView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QTreeView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QTreeView_SetDirtyRegion_Callback = void (*)(QTreeView*, const QRegion&);
    using QTreeView_ScrollDirtyRegion_Callback = void (*)(QTreeView*, int, int);
    using QTreeView_DirtyRegionOffset_Callback = QPoint (*)();
    using QTreeView_StartAutoScroll_Callback = void (*)();
    using QTreeView_StopAutoScroll_Callback = void (*)();
    using QTreeView_DoAutoScroll_Callback = void (*)();
    using QTreeView_DropIndicatorPosition_Callback = QAbstractItemView::DropIndicatorPosition (*)();
    using QTreeView_SetViewportMargins_Callback = void (*)(QTreeView*, int, int, int, int);
    using QTreeView_ViewportMargins_Callback = QMargins (*)();
    using QTreeView_DrawFrame_Callback = void (*)(QTreeView*, QPainter*);
    using QTreeView_UpdateMicroFocus_Callback = void (*)();
    using QTreeView_Create_Callback = void (*)();
    using QTreeView_Destroy_Callback = void (*)();
    using QTreeView_FocusNextChild_Callback = bool (*)();
    using QTreeView_FocusPreviousChild_Callback = bool (*)();
    using QTreeView_Sender_Callback = QObject* (*)();
    using QTreeView_SenderSignalIndex_Callback = int (*)();
    using QTreeView_Receivers_Callback = int (*)(const QTreeView*, const char*);
    using QTreeView_IsSignalConnected_Callback = bool (*)(const QTreeView*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTreeView_Metacall_Callback qtreeview_metacall_callback = nullptr;
    QTreeView_SetModel_Callback qtreeview_setmodel_callback = nullptr;
    QTreeView_SetRootIndex_Callback qtreeview_setrootindex_callback = nullptr;
    QTreeView_SetSelectionModel_Callback qtreeview_setselectionmodel_callback = nullptr;
    QTreeView_KeyboardSearch_Callback qtreeview_keyboardsearch_callback = nullptr;
    QTreeView_VisualRect_Callback qtreeview_visualrect_callback = nullptr;
    QTreeView_ScrollTo_Callback qtreeview_scrollto_callback = nullptr;
    QTreeView_IndexAt_Callback qtreeview_indexat_callback = nullptr;
    QTreeView_DoItemsLayout_Callback qtreeview_doitemslayout_callback = nullptr;
    QTreeView_Reset_Callback qtreeview_reset_callback = nullptr;
    QTreeView_DataChanged_Callback qtreeview_datachanged_callback = nullptr;
    QTreeView_SelectAll_Callback qtreeview_selectall_callback = nullptr;
    QTreeView_VerticalScrollbarValueChanged_Callback qtreeview_verticalscrollbarvaluechanged_callback = nullptr;
    QTreeView_ScrollContentsBy_Callback qtreeview_scrollcontentsby_callback = nullptr;
    QTreeView_RowsInserted_Callback qtreeview_rowsinserted_callback = nullptr;
    QTreeView_RowsAboutToBeRemoved_Callback qtreeview_rowsabouttoberemoved_callback = nullptr;
    QTreeView_MoveCursor_Callback qtreeview_movecursor_callback = nullptr;
    QTreeView_HorizontalOffset_Callback qtreeview_horizontaloffset_callback = nullptr;
    QTreeView_VerticalOffset_Callback qtreeview_verticaloffset_callback = nullptr;
    QTreeView_SetSelection_Callback qtreeview_setselection_callback = nullptr;
    QTreeView_VisualRegionForSelection_Callback qtreeview_visualregionforselection_callback = nullptr;
    QTreeView_SelectedIndexes_Callback qtreeview_selectedindexes_callback = nullptr;
    QTreeView_ChangeEvent_Callback qtreeview_changeevent_callback = nullptr;
    QTreeView_TimerEvent_Callback qtreeview_timerevent_callback = nullptr;
    QTreeView_PaintEvent_Callback qtreeview_paintevent_callback = nullptr;
    QTreeView_DrawRow_Callback qtreeview_drawrow_callback = nullptr;
    QTreeView_DrawBranches_Callback qtreeview_drawbranches_callback = nullptr;
    QTreeView_MousePressEvent_Callback qtreeview_mousepressevent_callback = nullptr;
    QTreeView_MouseReleaseEvent_Callback qtreeview_mousereleaseevent_callback = nullptr;
    QTreeView_MouseDoubleClickEvent_Callback qtreeview_mousedoubleclickevent_callback = nullptr;
    QTreeView_MouseMoveEvent_Callback qtreeview_mousemoveevent_callback = nullptr;
    QTreeView_KeyPressEvent_Callback qtreeview_keypressevent_callback = nullptr;
    QTreeView_DragMoveEvent_Callback qtreeview_dragmoveevent_callback = nullptr;
    QTreeView_ViewportEvent_Callback qtreeview_viewportevent_callback = nullptr;
    QTreeView_UpdateGeometries_Callback qtreeview_updategeometries_callback = nullptr;
    QTreeView_ViewportSizeHint_Callback qtreeview_viewportsizehint_callback = nullptr;
    QTreeView_SizeHintForColumn_Callback qtreeview_sizehintforcolumn_callback = nullptr;
    QTreeView_HorizontalScrollbarAction_Callback qtreeview_horizontalscrollbaraction_callback = nullptr;
    QTreeView_IsIndexHidden_Callback qtreeview_isindexhidden_callback = nullptr;
    QTreeView_SelectionChanged_Callback qtreeview_selectionchanged_callback = nullptr;
    QTreeView_CurrentChanged_Callback qtreeview_currentchanged_callback = nullptr;
    QTreeView_SizeHintForRow_Callback qtreeview_sizehintforrow_callback = nullptr;
    QTreeView_ItemDelegateForIndex_Callback qtreeview_itemdelegateforindex_callback = nullptr;
    QTreeView_InputMethodQuery_Callback qtreeview_inputmethodquery_callback = nullptr;
    QTreeView_UpdateEditorData_Callback qtreeview_updateeditordata_callback = nullptr;
    QTreeView_UpdateEditorGeometries_Callback qtreeview_updateeditorgeometries_callback = nullptr;
    QTreeView_VerticalScrollbarAction_Callback qtreeview_verticalscrollbaraction_callback = nullptr;
    QTreeView_HorizontalScrollbarValueChanged_Callback qtreeview_horizontalscrollbarvaluechanged_callback = nullptr;
    QTreeView_CloseEditor_Callback qtreeview_closeeditor_callback = nullptr;
    QTreeView_CommitData_Callback qtreeview_commitdata_callback = nullptr;
    QTreeView_EditorDestroyed_Callback qtreeview_editordestroyed_callback = nullptr;
    QTreeView_Edit2_Callback qtreeview_edit2_callback = nullptr;
    QTreeView_SelectionCommand_Callback qtreeview_selectioncommand_callback = nullptr;
    QTreeView_StartDrag_Callback qtreeview_startdrag_callback = nullptr;
    QTreeView_InitViewItemOption_Callback qtreeview_initviewitemoption_callback = nullptr;
    QTreeView_FocusNextPrevChild_Callback qtreeview_focusnextprevchild_callback = nullptr;
    QTreeView_Event_Callback qtreeview_event_callback = nullptr;
    QTreeView_DragEnterEvent_Callback qtreeview_dragenterevent_callback = nullptr;
    QTreeView_DragLeaveEvent_Callback qtreeview_dragleaveevent_callback = nullptr;
    QTreeView_DropEvent_Callback qtreeview_dropevent_callback = nullptr;
    QTreeView_FocusInEvent_Callback qtreeview_focusinevent_callback = nullptr;
    QTreeView_FocusOutEvent_Callback qtreeview_focusoutevent_callback = nullptr;
    QTreeView_ResizeEvent_Callback qtreeview_resizeevent_callback = nullptr;
    QTreeView_InputMethodEvent_Callback qtreeview_inputmethodevent_callback = nullptr;
    QTreeView_EventFilter_Callback qtreeview_eventfilter_callback = nullptr;
    QTreeView_MinimumSizeHint_Callback qtreeview_minimumsizehint_callback = nullptr;
    QTreeView_SizeHint_Callback qtreeview_sizehint_callback = nullptr;
    QTreeView_SetupViewport_Callback qtreeview_setupviewport_callback = nullptr;
    QTreeView_WheelEvent_Callback qtreeview_wheelevent_callback = nullptr;
    QTreeView_ContextMenuEvent_Callback qtreeview_contextmenuevent_callback = nullptr;
    QTreeView_InitStyleOption_Callback qtreeview_initstyleoption_callback = nullptr;
    QTreeView_DevType_Callback qtreeview_devtype_callback = nullptr;
    QTreeView_SetVisible_Callback qtreeview_setvisible_callback = nullptr;
    QTreeView_HeightForWidth_Callback qtreeview_heightforwidth_callback = nullptr;
    QTreeView_HasHeightForWidth_Callback qtreeview_hasheightforwidth_callback = nullptr;
    QTreeView_PaintEngine_Callback qtreeview_paintengine_callback = nullptr;
    QTreeView_KeyReleaseEvent_Callback qtreeview_keyreleaseevent_callback = nullptr;
    QTreeView_EnterEvent_Callback qtreeview_enterevent_callback = nullptr;
    QTreeView_LeaveEvent_Callback qtreeview_leaveevent_callback = nullptr;
    QTreeView_MoveEvent_Callback qtreeview_moveevent_callback = nullptr;
    QTreeView_CloseEvent_Callback qtreeview_closeevent_callback = nullptr;
    QTreeView_TabletEvent_Callback qtreeview_tabletevent_callback = nullptr;
    QTreeView_ActionEvent_Callback qtreeview_actionevent_callback = nullptr;
    QTreeView_ShowEvent_Callback qtreeview_showevent_callback = nullptr;
    QTreeView_HideEvent_Callback qtreeview_hideevent_callback = nullptr;
    QTreeView_NativeEvent_Callback qtreeview_nativeevent_callback = nullptr;
    QTreeView_Metric_Callback qtreeview_metric_callback = nullptr;
    QTreeView_InitPainter_Callback qtreeview_initpainter_callback = nullptr;
    QTreeView_Redirected_Callback qtreeview_redirected_callback = nullptr;
    QTreeView_SharedPainter_Callback qtreeview_sharedpainter_callback = nullptr;
    QTreeView_ChildEvent_Callback qtreeview_childevent_callback = nullptr;
    QTreeView_CustomEvent_Callback qtreeview_customevent_callback = nullptr;
    QTreeView_ConnectNotify_Callback qtreeview_connectnotify_callback = nullptr;
    QTreeView_DisconnectNotify_Callback qtreeview_disconnectnotify_callback = nullptr;
    QTreeView_ColumnResized_Callback qtreeview_columnresized_callback = nullptr;
    QTreeView_ColumnCountChanged_Callback qtreeview_columncountchanged_callback = nullptr;
    QTreeView_ColumnMoved_Callback qtreeview_columnmoved_callback = nullptr;
    QTreeView_Reexpand_Callback qtreeview_reexpand_callback = nullptr;
    QTreeView_RowsRemoved_Callback qtreeview_rowsremoved_callback = nullptr;
    QTreeView_DrawTree_Callback qtreeview_drawtree_callback = nullptr;
    QTreeView_IndexRowSizeHint_Callback qtreeview_indexrowsizehint_callback = nullptr;
    QTreeView_RowHeight_Callback qtreeview_rowheight_callback = nullptr;
    QTreeView_State_Callback qtreeview_state_callback = nullptr;
    QTreeView_SetState_Callback qtreeview_setstate_callback = nullptr;
    QTreeView_ScheduleDelayedItemsLayout_Callback qtreeview_scheduledelayeditemslayout_callback = nullptr;
    QTreeView_ExecuteDelayedItemsLayout_Callback qtreeview_executedelayeditemslayout_callback = nullptr;
    QTreeView_SetDirtyRegion_Callback qtreeview_setdirtyregion_callback = nullptr;
    QTreeView_ScrollDirtyRegion_Callback qtreeview_scrolldirtyregion_callback = nullptr;
    QTreeView_DirtyRegionOffset_Callback qtreeview_dirtyregionoffset_callback = nullptr;
    QTreeView_StartAutoScroll_Callback qtreeview_startautoscroll_callback = nullptr;
    QTreeView_StopAutoScroll_Callback qtreeview_stopautoscroll_callback = nullptr;
    QTreeView_DoAutoScroll_Callback qtreeview_doautoscroll_callback = nullptr;
    QTreeView_DropIndicatorPosition_Callback qtreeview_dropindicatorposition_callback = nullptr;
    QTreeView_SetViewportMargins_Callback qtreeview_setviewportmargins_callback = nullptr;
    QTreeView_ViewportMargins_Callback qtreeview_viewportmargins_callback = nullptr;
    QTreeView_DrawFrame_Callback qtreeview_drawframe_callback = nullptr;
    QTreeView_UpdateMicroFocus_Callback qtreeview_updatemicrofocus_callback = nullptr;
    QTreeView_Create_Callback qtreeview_create_callback = nullptr;
    QTreeView_Destroy_Callback qtreeview_destroy_callback = nullptr;
    QTreeView_FocusNextChild_Callback qtreeview_focusnextchild_callback = nullptr;
    QTreeView_FocusPreviousChild_Callback qtreeview_focuspreviouschild_callback = nullptr;
    QTreeView_Sender_Callback qtreeview_sender_callback = nullptr;
    QTreeView_SenderSignalIndex_Callback qtreeview_sendersignalindex_callback = nullptr;
    QTreeView_Receivers_Callback qtreeview_receivers_callback = nullptr;
    QTreeView_IsSignalConnected_Callback qtreeview_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtreeview_metacall_isbase = false;
    mutable bool qtreeview_setmodel_isbase = false;
    mutable bool qtreeview_setrootindex_isbase = false;
    mutable bool qtreeview_setselectionmodel_isbase = false;
    mutable bool qtreeview_keyboardsearch_isbase = false;
    mutable bool qtreeview_visualrect_isbase = false;
    mutable bool qtreeview_scrollto_isbase = false;
    mutable bool qtreeview_indexat_isbase = false;
    mutable bool qtreeview_doitemslayout_isbase = false;
    mutable bool qtreeview_reset_isbase = false;
    mutable bool qtreeview_datachanged_isbase = false;
    mutable bool qtreeview_selectall_isbase = false;
    mutable bool qtreeview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qtreeview_scrollcontentsby_isbase = false;
    mutable bool qtreeview_rowsinserted_isbase = false;
    mutable bool qtreeview_rowsabouttoberemoved_isbase = false;
    mutable bool qtreeview_movecursor_isbase = false;
    mutable bool qtreeview_horizontaloffset_isbase = false;
    mutable bool qtreeview_verticaloffset_isbase = false;
    mutable bool qtreeview_setselection_isbase = false;
    mutable bool qtreeview_visualregionforselection_isbase = false;
    mutable bool qtreeview_selectedindexes_isbase = false;
    mutable bool qtreeview_changeevent_isbase = false;
    mutable bool qtreeview_timerevent_isbase = false;
    mutable bool qtreeview_paintevent_isbase = false;
    mutable bool qtreeview_drawrow_isbase = false;
    mutable bool qtreeview_drawbranches_isbase = false;
    mutable bool qtreeview_mousepressevent_isbase = false;
    mutable bool qtreeview_mousereleaseevent_isbase = false;
    mutable bool qtreeview_mousedoubleclickevent_isbase = false;
    mutable bool qtreeview_mousemoveevent_isbase = false;
    mutable bool qtreeview_keypressevent_isbase = false;
    mutable bool qtreeview_dragmoveevent_isbase = false;
    mutable bool qtreeview_viewportevent_isbase = false;
    mutable bool qtreeview_updategeometries_isbase = false;
    mutable bool qtreeview_viewportsizehint_isbase = false;
    mutable bool qtreeview_sizehintforcolumn_isbase = false;
    mutable bool qtreeview_horizontalscrollbaraction_isbase = false;
    mutable bool qtreeview_isindexhidden_isbase = false;
    mutable bool qtreeview_selectionchanged_isbase = false;
    mutable bool qtreeview_currentchanged_isbase = false;
    mutable bool qtreeview_sizehintforrow_isbase = false;
    mutable bool qtreeview_itemdelegateforindex_isbase = false;
    mutable bool qtreeview_inputmethodquery_isbase = false;
    mutable bool qtreeview_updateeditordata_isbase = false;
    mutable bool qtreeview_updateeditorgeometries_isbase = false;
    mutable bool qtreeview_verticalscrollbaraction_isbase = false;
    mutable bool qtreeview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qtreeview_closeeditor_isbase = false;
    mutable bool qtreeview_commitdata_isbase = false;
    mutable bool qtreeview_editordestroyed_isbase = false;
    mutable bool qtreeview_edit2_isbase = false;
    mutable bool qtreeview_selectioncommand_isbase = false;
    mutable bool qtreeview_startdrag_isbase = false;
    mutable bool qtreeview_initviewitemoption_isbase = false;
    mutable bool qtreeview_focusnextprevchild_isbase = false;
    mutable bool qtreeview_event_isbase = false;
    mutable bool qtreeview_dragenterevent_isbase = false;
    mutable bool qtreeview_dragleaveevent_isbase = false;
    mutable bool qtreeview_dropevent_isbase = false;
    mutable bool qtreeview_focusinevent_isbase = false;
    mutable bool qtreeview_focusoutevent_isbase = false;
    mutable bool qtreeview_resizeevent_isbase = false;
    mutable bool qtreeview_inputmethodevent_isbase = false;
    mutable bool qtreeview_eventfilter_isbase = false;
    mutable bool qtreeview_minimumsizehint_isbase = false;
    mutable bool qtreeview_sizehint_isbase = false;
    mutable bool qtreeview_setupviewport_isbase = false;
    mutable bool qtreeview_wheelevent_isbase = false;
    mutable bool qtreeview_contextmenuevent_isbase = false;
    mutable bool qtreeview_initstyleoption_isbase = false;
    mutable bool qtreeview_devtype_isbase = false;
    mutable bool qtreeview_setvisible_isbase = false;
    mutable bool qtreeview_heightforwidth_isbase = false;
    mutable bool qtreeview_hasheightforwidth_isbase = false;
    mutable bool qtreeview_paintengine_isbase = false;
    mutable bool qtreeview_keyreleaseevent_isbase = false;
    mutable bool qtreeview_enterevent_isbase = false;
    mutable bool qtreeview_leaveevent_isbase = false;
    mutable bool qtreeview_moveevent_isbase = false;
    mutable bool qtreeview_closeevent_isbase = false;
    mutable bool qtreeview_tabletevent_isbase = false;
    mutable bool qtreeview_actionevent_isbase = false;
    mutable bool qtreeview_showevent_isbase = false;
    mutable bool qtreeview_hideevent_isbase = false;
    mutable bool qtreeview_nativeevent_isbase = false;
    mutable bool qtreeview_metric_isbase = false;
    mutable bool qtreeview_initpainter_isbase = false;
    mutable bool qtreeview_redirected_isbase = false;
    mutable bool qtreeview_sharedpainter_isbase = false;
    mutable bool qtreeview_childevent_isbase = false;
    mutable bool qtreeview_customevent_isbase = false;
    mutable bool qtreeview_connectnotify_isbase = false;
    mutable bool qtreeview_disconnectnotify_isbase = false;
    mutable bool qtreeview_columnresized_isbase = false;
    mutable bool qtreeview_columncountchanged_isbase = false;
    mutable bool qtreeview_columnmoved_isbase = false;
    mutable bool qtreeview_reexpand_isbase = false;
    mutable bool qtreeview_rowsremoved_isbase = false;
    mutable bool qtreeview_drawtree_isbase = false;
    mutable bool qtreeview_indexrowsizehint_isbase = false;
    mutable bool qtreeview_rowheight_isbase = false;
    mutable bool qtreeview_state_isbase = false;
    mutable bool qtreeview_setstate_isbase = false;
    mutable bool qtreeview_scheduledelayeditemslayout_isbase = false;
    mutable bool qtreeview_executedelayeditemslayout_isbase = false;
    mutable bool qtreeview_setdirtyregion_isbase = false;
    mutable bool qtreeview_scrolldirtyregion_isbase = false;
    mutable bool qtreeview_dirtyregionoffset_isbase = false;
    mutable bool qtreeview_startautoscroll_isbase = false;
    mutable bool qtreeview_stopautoscroll_isbase = false;
    mutable bool qtreeview_doautoscroll_isbase = false;
    mutable bool qtreeview_dropindicatorposition_isbase = false;
    mutable bool qtreeview_setviewportmargins_isbase = false;
    mutable bool qtreeview_viewportmargins_isbase = false;
    mutable bool qtreeview_drawframe_isbase = false;
    mutable bool qtreeview_updatemicrofocus_isbase = false;
    mutable bool qtreeview_create_isbase = false;
    mutable bool qtreeview_destroy_isbase = false;
    mutable bool qtreeview_focusnextchild_isbase = false;
    mutable bool qtreeview_focuspreviouschild_isbase = false;
    mutable bool qtreeview_sender_isbase = false;
    mutable bool qtreeview_sendersignalindex_isbase = false;
    mutable bool qtreeview_receivers_isbase = false;
    mutable bool qtreeview_issignalconnected_isbase = false;

  public:
    VirtualQTreeView(QWidget* parent) : QTreeView(parent){};
    VirtualQTreeView() : QTreeView(){};

    ~VirtualQTreeView() {
        qtreeview_metacall_callback = nullptr;
        qtreeview_setmodel_callback = nullptr;
        qtreeview_setrootindex_callback = nullptr;
        qtreeview_setselectionmodel_callback = nullptr;
        qtreeview_keyboardsearch_callback = nullptr;
        qtreeview_visualrect_callback = nullptr;
        qtreeview_scrollto_callback = nullptr;
        qtreeview_indexat_callback = nullptr;
        qtreeview_doitemslayout_callback = nullptr;
        qtreeview_reset_callback = nullptr;
        qtreeview_datachanged_callback = nullptr;
        qtreeview_selectall_callback = nullptr;
        qtreeview_verticalscrollbarvaluechanged_callback = nullptr;
        qtreeview_scrollcontentsby_callback = nullptr;
        qtreeview_rowsinserted_callback = nullptr;
        qtreeview_rowsabouttoberemoved_callback = nullptr;
        qtreeview_movecursor_callback = nullptr;
        qtreeview_horizontaloffset_callback = nullptr;
        qtreeview_verticaloffset_callback = nullptr;
        qtreeview_setselection_callback = nullptr;
        qtreeview_visualregionforselection_callback = nullptr;
        qtreeview_selectedindexes_callback = nullptr;
        qtreeview_changeevent_callback = nullptr;
        qtreeview_timerevent_callback = nullptr;
        qtreeview_paintevent_callback = nullptr;
        qtreeview_drawrow_callback = nullptr;
        qtreeview_drawbranches_callback = nullptr;
        qtreeview_mousepressevent_callback = nullptr;
        qtreeview_mousereleaseevent_callback = nullptr;
        qtreeview_mousedoubleclickevent_callback = nullptr;
        qtreeview_mousemoveevent_callback = nullptr;
        qtreeview_keypressevent_callback = nullptr;
        qtreeview_dragmoveevent_callback = nullptr;
        qtreeview_viewportevent_callback = nullptr;
        qtreeview_updategeometries_callback = nullptr;
        qtreeview_viewportsizehint_callback = nullptr;
        qtreeview_sizehintforcolumn_callback = nullptr;
        qtreeview_horizontalscrollbaraction_callback = nullptr;
        qtreeview_isindexhidden_callback = nullptr;
        qtreeview_selectionchanged_callback = nullptr;
        qtreeview_currentchanged_callback = nullptr;
        qtreeview_sizehintforrow_callback = nullptr;
        qtreeview_itemdelegateforindex_callback = nullptr;
        qtreeview_inputmethodquery_callback = nullptr;
        qtreeview_updateeditordata_callback = nullptr;
        qtreeview_updateeditorgeometries_callback = nullptr;
        qtreeview_verticalscrollbaraction_callback = nullptr;
        qtreeview_horizontalscrollbarvaluechanged_callback = nullptr;
        qtreeview_closeeditor_callback = nullptr;
        qtreeview_commitdata_callback = nullptr;
        qtreeview_editordestroyed_callback = nullptr;
        qtreeview_edit2_callback = nullptr;
        qtreeview_selectioncommand_callback = nullptr;
        qtreeview_startdrag_callback = nullptr;
        qtreeview_initviewitemoption_callback = nullptr;
        qtreeview_focusnextprevchild_callback = nullptr;
        qtreeview_event_callback = nullptr;
        qtreeview_dragenterevent_callback = nullptr;
        qtreeview_dragleaveevent_callback = nullptr;
        qtreeview_dropevent_callback = nullptr;
        qtreeview_focusinevent_callback = nullptr;
        qtreeview_focusoutevent_callback = nullptr;
        qtreeview_resizeevent_callback = nullptr;
        qtreeview_inputmethodevent_callback = nullptr;
        qtreeview_eventfilter_callback = nullptr;
        qtreeview_minimumsizehint_callback = nullptr;
        qtreeview_sizehint_callback = nullptr;
        qtreeview_setupviewport_callback = nullptr;
        qtreeview_wheelevent_callback = nullptr;
        qtreeview_contextmenuevent_callback = nullptr;
        qtreeview_initstyleoption_callback = nullptr;
        qtreeview_devtype_callback = nullptr;
        qtreeview_setvisible_callback = nullptr;
        qtreeview_heightforwidth_callback = nullptr;
        qtreeview_hasheightforwidth_callback = nullptr;
        qtreeview_paintengine_callback = nullptr;
        qtreeview_keyreleaseevent_callback = nullptr;
        qtreeview_enterevent_callback = nullptr;
        qtreeview_leaveevent_callback = nullptr;
        qtreeview_moveevent_callback = nullptr;
        qtreeview_closeevent_callback = nullptr;
        qtreeview_tabletevent_callback = nullptr;
        qtreeview_actionevent_callback = nullptr;
        qtreeview_showevent_callback = nullptr;
        qtreeview_hideevent_callback = nullptr;
        qtreeview_nativeevent_callback = nullptr;
        qtreeview_metric_callback = nullptr;
        qtreeview_initpainter_callback = nullptr;
        qtreeview_redirected_callback = nullptr;
        qtreeview_sharedpainter_callback = nullptr;
        qtreeview_childevent_callback = nullptr;
        qtreeview_customevent_callback = nullptr;
        qtreeview_connectnotify_callback = nullptr;
        qtreeview_disconnectnotify_callback = nullptr;
        qtreeview_columnresized_callback = nullptr;
        qtreeview_columncountchanged_callback = nullptr;
        qtreeview_columnmoved_callback = nullptr;
        qtreeview_reexpand_callback = nullptr;
        qtreeview_rowsremoved_callback = nullptr;
        qtreeview_drawtree_callback = nullptr;
        qtreeview_indexrowsizehint_callback = nullptr;
        qtreeview_rowheight_callback = nullptr;
        qtreeview_state_callback = nullptr;
        qtreeview_setstate_callback = nullptr;
        qtreeview_scheduledelayeditemslayout_callback = nullptr;
        qtreeview_executedelayeditemslayout_callback = nullptr;
        qtreeview_setdirtyregion_callback = nullptr;
        qtreeview_scrolldirtyregion_callback = nullptr;
        qtreeview_dirtyregionoffset_callback = nullptr;
        qtreeview_startautoscroll_callback = nullptr;
        qtreeview_stopautoscroll_callback = nullptr;
        qtreeview_doautoscroll_callback = nullptr;
        qtreeview_dropindicatorposition_callback = nullptr;
        qtreeview_setviewportmargins_callback = nullptr;
        qtreeview_viewportmargins_callback = nullptr;
        qtreeview_drawframe_callback = nullptr;
        qtreeview_updatemicrofocus_callback = nullptr;
        qtreeview_create_callback = nullptr;
        qtreeview_destroy_callback = nullptr;
        qtreeview_focusnextchild_callback = nullptr;
        qtreeview_focuspreviouschild_callback = nullptr;
        qtreeview_sender_callback = nullptr;
        qtreeview_sendersignalindex_callback = nullptr;
        qtreeview_receivers_callback = nullptr;
        qtreeview_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTreeView_Metacall_Callback(QTreeView_Metacall_Callback cb) { qtreeview_metacall_callback = cb; }
    void setQTreeView_SetModel_Callback(QTreeView_SetModel_Callback cb) { qtreeview_setmodel_callback = cb; }
    void setQTreeView_SetRootIndex_Callback(QTreeView_SetRootIndex_Callback cb) { qtreeview_setrootindex_callback = cb; }
    void setQTreeView_SetSelectionModel_Callback(QTreeView_SetSelectionModel_Callback cb) { qtreeview_setselectionmodel_callback = cb; }
    void setQTreeView_KeyboardSearch_Callback(QTreeView_KeyboardSearch_Callback cb) { qtreeview_keyboardsearch_callback = cb; }
    void setQTreeView_VisualRect_Callback(QTreeView_VisualRect_Callback cb) { qtreeview_visualrect_callback = cb; }
    void setQTreeView_ScrollTo_Callback(QTreeView_ScrollTo_Callback cb) { qtreeview_scrollto_callback = cb; }
    void setQTreeView_IndexAt_Callback(QTreeView_IndexAt_Callback cb) { qtreeview_indexat_callback = cb; }
    void setQTreeView_DoItemsLayout_Callback(QTreeView_DoItemsLayout_Callback cb) { qtreeview_doitemslayout_callback = cb; }
    void setQTreeView_Reset_Callback(QTreeView_Reset_Callback cb) { qtreeview_reset_callback = cb; }
    void setQTreeView_DataChanged_Callback(QTreeView_DataChanged_Callback cb) { qtreeview_datachanged_callback = cb; }
    void setQTreeView_SelectAll_Callback(QTreeView_SelectAll_Callback cb) { qtreeview_selectall_callback = cb; }
    void setQTreeView_VerticalScrollbarValueChanged_Callback(QTreeView_VerticalScrollbarValueChanged_Callback cb) { qtreeview_verticalscrollbarvaluechanged_callback = cb; }
    void setQTreeView_ScrollContentsBy_Callback(QTreeView_ScrollContentsBy_Callback cb) { qtreeview_scrollcontentsby_callback = cb; }
    void setQTreeView_RowsInserted_Callback(QTreeView_RowsInserted_Callback cb) { qtreeview_rowsinserted_callback = cb; }
    void setQTreeView_RowsAboutToBeRemoved_Callback(QTreeView_RowsAboutToBeRemoved_Callback cb) { qtreeview_rowsabouttoberemoved_callback = cb; }
    void setQTreeView_MoveCursor_Callback(QTreeView_MoveCursor_Callback cb) { qtreeview_movecursor_callback = cb; }
    void setQTreeView_HorizontalOffset_Callback(QTreeView_HorizontalOffset_Callback cb) { qtreeview_horizontaloffset_callback = cb; }
    void setQTreeView_VerticalOffset_Callback(QTreeView_VerticalOffset_Callback cb) { qtreeview_verticaloffset_callback = cb; }
    void setQTreeView_SetSelection_Callback(QTreeView_SetSelection_Callback cb) { qtreeview_setselection_callback = cb; }
    void setQTreeView_VisualRegionForSelection_Callback(QTreeView_VisualRegionForSelection_Callback cb) { qtreeview_visualregionforselection_callback = cb; }
    void setQTreeView_SelectedIndexes_Callback(QTreeView_SelectedIndexes_Callback cb) { qtreeview_selectedindexes_callback = cb; }
    void setQTreeView_ChangeEvent_Callback(QTreeView_ChangeEvent_Callback cb) { qtreeview_changeevent_callback = cb; }
    void setQTreeView_TimerEvent_Callback(QTreeView_TimerEvent_Callback cb) { qtreeview_timerevent_callback = cb; }
    void setQTreeView_PaintEvent_Callback(QTreeView_PaintEvent_Callback cb) { qtreeview_paintevent_callback = cb; }
    void setQTreeView_DrawRow_Callback(QTreeView_DrawRow_Callback cb) { qtreeview_drawrow_callback = cb; }
    void setQTreeView_DrawBranches_Callback(QTreeView_DrawBranches_Callback cb) { qtreeview_drawbranches_callback = cb; }
    void setQTreeView_MousePressEvent_Callback(QTreeView_MousePressEvent_Callback cb) { qtreeview_mousepressevent_callback = cb; }
    void setQTreeView_MouseReleaseEvent_Callback(QTreeView_MouseReleaseEvent_Callback cb) { qtreeview_mousereleaseevent_callback = cb; }
    void setQTreeView_MouseDoubleClickEvent_Callback(QTreeView_MouseDoubleClickEvent_Callback cb) { qtreeview_mousedoubleclickevent_callback = cb; }
    void setQTreeView_MouseMoveEvent_Callback(QTreeView_MouseMoveEvent_Callback cb) { qtreeview_mousemoveevent_callback = cb; }
    void setQTreeView_KeyPressEvent_Callback(QTreeView_KeyPressEvent_Callback cb) { qtreeview_keypressevent_callback = cb; }
    void setQTreeView_DragMoveEvent_Callback(QTreeView_DragMoveEvent_Callback cb) { qtreeview_dragmoveevent_callback = cb; }
    void setQTreeView_ViewportEvent_Callback(QTreeView_ViewportEvent_Callback cb) { qtreeview_viewportevent_callback = cb; }
    void setQTreeView_UpdateGeometries_Callback(QTreeView_UpdateGeometries_Callback cb) { qtreeview_updategeometries_callback = cb; }
    void setQTreeView_ViewportSizeHint_Callback(QTreeView_ViewportSizeHint_Callback cb) { qtreeview_viewportsizehint_callback = cb; }
    void setQTreeView_SizeHintForColumn_Callback(QTreeView_SizeHintForColumn_Callback cb) { qtreeview_sizehintforcolumn_callback = cb; }
    void setQTreeView_HorizontalScrollbarAction_Callback(QTreeView_HorizontalScrollbarAction_Callback cb) { qtreeview_horizontalscrollbaraction_callback = cb; }
    void setQTreeView_IsIndexHidden_Callback(QTreeView_IsIndexHidden_Callback cb) { qtreeview_isindexhidden_callback = cb; }
    void setQTreeView_SelectionChanged_Callback(QTreeView_SelectionChanged_Callback cb) { qtreeview_selectionchanged_callback = cb; }
    void setQTreeView_CurrentChanged_Callback(QTreeView_CurrentChanged_Callback cb) { qtreeview_currentchanged_callback = cb; }
    void setQTreeView_SizeHintForRow_Callback(QTreeView_SizeHintForRow_Callback cb) { qtreeview_sizehintforrow_callback = cb; }
    void setQTreeView_ItemDelegateForIndex_Callback(QTreeView_ItemDelegateForIndex_Callback cb) { qtreeview_itemdelegateforindex_callback = cb; }
    void setQTreeView_InputMethodQuery_Callback(QTreeView_InputMethodQuery_Callback cb) { qtreeview_inputmethodquery_callback = cb; }
    void setQTreeView_UpdateEditorData_Callback(QTreeView_UpdateEditorData_Callback cb) { qtreeview_updateeditordata_callback = cb; }
    void setQTreeView_UpdateEditorGeometries_Callback(QTreeView_UpdateEditorGeometries_Callback cb) { qtreeview_updateeditorgeometries_callback = cb; }
    void setQTreeView_VerticalScrollbarAction_Callback(QTreeView_VerticalScrollbarAction_Callback cb) { qtreeview_verticalscrollbaraction_callback = cb; }
    void setQTreeView_HorizontalScrollbarValueChanged_Callback(QTreeView_HorizontalScrollbarValueChanged_Callback cb) { qtreeview_horizontalscrollbarvaluechanged_callback = cb; }
    void setQTreeView_CloseEditor_Callback(QTreeView_CloseEditor_Callback cb) { qtreeview_closeeditor_callback = cb; }
    void setQTreeView_CommitData_Callback(QTreeView_CommitData_Callback cb) { qtreeview_commitdata_callback = cb; }
    void setQTreeView_EditorDestroyed_Callback(QTreeView_EditorDestroyed_Callback cb) { qtreeview_editordestroyed_callback = cb; }
    void setQTreeView_Edit2_Callback(QTreeView_Edit2_Callback cb) { qtreeview_edit2_callback = cb; }
    void setQTreeView_SelectionCommand_Callback(QTreeView_SelectionCommand_Callback cb) { qtreeview_selectioncommand_callback = cb; }
    void setQTreeView_StartDrag_Callback(QTreeView_StartDrag_Callback cb) { qtreeview_startdrag_callback = cb; }
    void setQTreeView_InitViewItemOption_Callback(QTreeView_InitViewItemOption_Callback cb) { qtreeview_initviewitemoption_callback = cb; }
    void setQTreeView_FocusNextPrevChild_Callback(QTreeView_FocusNextPrevChild_Callback cb) { qtreeview_focusnextprevchild_callback = cb; }
    void setQTreeView_Event_Callback(QTreeView_Event_Callback cb) { qtreeview_event_callback = cb; }
    void setQTreeView_DragEnterEvent_Callback(QTreeView_DragEnterEvent_Callback cb) { qtreeview_dragenterevent_callback = cb; }
    void setQTreeView_DragLeaveEvent_Callback(QTreeView_DragLeaveEvent_Callback cb) { qtreeview_dragleaveevent_callback = cb; }
    void setQTreeView_DropEvent_Callback(QTreeView_DropEvent_Callback cb) { qtreeview_dropevent_callback = cb; }
    void setQTreeView_FocusInEvent_Callback(QTreeView_FocusInEvent_Callback cb) { qtreeview_focusinevent_callback = cb; }
    void setQTreeView_FocusOutEvent_Callback(QTreeView_FocusOutEvent_Callback cb) { qtreeview_focusoutevent_callback = cb; }
    void setQTreeView_ResizeEvent_Callback(QTreeView_ResizeEvent_Callback cb) { qtreeview_resizeevent_callback = cb; }
    void setQTreeView_InputMethodEvent_Callback(QTreeView_InputMethodEvent_Callback cb) { qtreeview_inputmethodevent_callback = cb; }
    void setQTreeView_EventFilter_Callback(QTreeView_EventFilter_Callback cb) { qtreeview_eventfilter_callback = cb; }
    void setQTreeView_MinimumSizeHint_Callback(QTreeView_MinimumSizeHint_Callback cb) { qtreeview_minimumsizehint_callback = cb; }
    void setQTreeView_SizeHint_Callback(QTreeView_SizeHint_Callback cb) { qtreeview_sizehint_callback = cb; }
    void setQTreeView_SetupViewport_Callback(QTreeView_SetupViewport_Callback cb) { qtreeview_setupviewport_callback = cb; }
    void setQTreeView_WheelEvent_Callback(QTreeView_WheelEvent_Callback cb) { qtreeview_wheelevent_callback = cb; }
    void setQTreeView_ContextMenuEvent_Callback(QTreeView_ContextMenuEvent_Callback cb) { qtreeview_contextmenuevent_callback = cb; }
    void setQTreeView_InitStyleOption_Callback(QTreeView_InitStyleOption_Callback cb) { qtreeview_initstyleoption_callback = cb; }
    void setQTreeView_DevType_Callback(QTreeView_DevType_Callback cb) { qtreeview_devtype_callback = cb; }
    void setQTreeView_SetVisible_Callback(QTreeView_SetVisible_Callback cb) { qtreeview_setvisible_callback = cb; }
    void setQTreeView_HeightForWidth_Callback(QTreeView_HeightForWidth_Callback cb) { qtreeview_heightforwidth_callback = cb; }
    void setQTreeView_HasHeightForWidth_Callback(QTreeView_HasHeightForWidth_Callback cb) { qtreeview_hasheightforwidth_callback = cb; }
    void setQTreeView_PaintEngine_Callback(QTreeView_PaintEngine_Callback cb) { qtreeview_paintengine_callback = cb; }
    void setQTreeView_KeyReleaseEvent_Callback(QTreeView_KeyReleaseEvent_Callback cb) { qtreeview_keyreleaseevent_callback = cb; }
    void setQTreeView_EnterEvent_Callback(QTreeView_EnterEvent_Callback cb) { qtreeview_enterevent_callback = cb; }
    void setQTreeView_LeaveEvent_Callback(QTreeView_LeaveEvent_Callback cb) { qtreeview_leaveevent_callback = cb; }
    void setQTreeView_MoveEvent_Callback(QTreeView_MoveEvent_Callback cb) { qtreeview_moveevent_callback = cb; }
    void setQTreeView_CloseEvent_Callback(QTreeView_CloseEvent_Callback cb) { qtreeview_closeevent_callback = cb; }
    void setQTreeView_TabletEvent_Callback(QTreeView_TabletEvent_Callback cb) { qtreeview_tabletevent_callback = cb; }
    void setQTreeView_ActionEvent_Callback(QTreeView_ActionEvent_Callback cb) { qtreeview_actionevent_callback = cb; }
    void setQTreeView_ShowEvent_Callback(QTreeView_ShowEvent_Callback cb) { qtreeview_showevent_callback = cb; }
    void setQTreeView_HideEvent_Callback(QTreeView_HideEvent_Callback cb) { qtreeview_hideevent_callback = cb; }
    void setQTreeView_NativeEvent_Callback(QTreeView_NativeEvent_Callback cb) { qtreeview_nativeevent_callback = cb; }
    void setQTreeView_Metric_Callback(QTreeView_Metric_Callback cb) { qtreeview_metric_callback = cb; }
    void setQTreeView_InitPainter_Callback(QTreeView_InitPainter_Callback cb) { qtreeview_initpainter_callback = cb; }
    void setQTreeView_Redirected_Callback(QTreeView_Redirected_Callback cb) { qtreeview_redirected_callback = cb; }
    void setQTreeView_SharedPainter_Callback(QTreeView_SharedPainter_Callback cb) { qtreeview_sharedpainter_callback = cb; }
    void setQTreeView_ChildEvent_Callback(QTreeView_ChildEvent_Callback cb) { qtreeview_childevent_callback = cb; }
    void setQTreeView_CustomEvent_Callback(QTreeView_CustomEvent_Callback cb) { qtreeview_customevent_callback = cb; }
    void setQTreeView_ConnectNotify_Callback(QTreeView_ConnectNotify_Callback cb) { qtreeview_connectnotify_callback = cb; }
    void setQTreeView_DisconnectNotify_Callback(QTreeView_DisconnectNotify_Callback cb) { qtreeview_disconnectnotify_callback = cb; }
    void setQTreeView_ColumnResized_Callback(QTreeView_ColumnResized_Callback cb) { qtreeview_columnresized_callback = cb; }
    void setQTreeView_ColumnCountChanged_Callback(QTreeView_ColumnCountChanged_Callback cb) { qtreeview_columncountchanged_callback = cb; }
    void setQTreeView_ColumnMoved_Callback(QTreeView_ColumnMoved_Callback cb) { qtreeview_columnmoved_callback = cb; }
    void setQTreeView_Reexpand_Callback(QTreeView_Reexpand_Callback cb) { qtreeview_reexpand_callback = cb; }
    void setQTreeView_RowsRemoved_Callback(QTreeView_RowsRemoved_Callback cb) { qtreeview_rowsremoved_callback = cb; }
    void setQTreeView_DrawTree_Callback(QTreeView_DrawTree_Callback cb) { qtreeview_drawtree_callback = cb; }
    void setQTreeView_IndexRowSizeHint_Callback(QTreeView_IndexRowSizeHint_Callback cb) { qtreeview_indexrowsizehint_callback = cb; }
    void setQTreeView_RowHeight_Callback(QTreeView_RowHeight_Callback cb) { qtreeview_rowheight_callback = cb; }
    void setQTreeView_State_Callback(QTreeView_State_Callback cb) { qtreeview_state_callback = cb; }
    void setQTreeView_SetState_Callback(QTreeView_SetState_Callback cb) { qtreeview_setstate_callback = cb; }
    void setQTreeView_ScheduleDelayedItemsLayout_Callback(QTreeView_ScheduleDelayedItemsLayout_Callback cb) { qtreeview_scheduledelayeditemslayout_callback = cb; }
    void setQTreeView_ExecuteDelayedItemsLayout_Callback(QTreeView_ExecuteDelayedItemsLayout_Callback cb) { qtreeview_executedelayeditemslayout_callback = cb; }
    void setQTreeView_SetDirtyRegion_Callback(QTreeView_SetDirtyRegion_Callback cb) { qtreeview_setdirtyregion_callback = cb; }
    void setQTreeView_ScrollDirtyRegion_Callback(QTreeView_ScrollDirtyRegion_Callback cb) { qtreeview_scrolldirtyregion_callback = cb; }
    void setQTreeView_DirtyRegionOffset_Callback(QTreeView_DirtyRegionOffset_Callback cb) { qtreeview_dirtyregionoffset_callback = cb; }
    void setQTreeView_StartAutoScroll_Callback(QTreeView_StartAutoScroll_Callback cb) { qtreeview_startautoscroll_callback = cb; }
    void setQTreeView_StopAutoScroll_Callback(QTreeView_StopAutoScroll_Callback cb) { qtreeview_stopautoscroll_callback = cb; }
    void setQTreeView_DoAutoScroll_Callback(QTreeView_DoAutoScroll_Callback cb) { qtreeview_doautoscroll_callback = cb; }
    void setQTreeView_DropIndicatorPosition_Callback(QTreeView_DropIndicatorPosition_Callback cb) { qtreeview_dropindicatorposition_callback = cb; }
    void setQTreeView_SetViewportMargins_Callback(QTreeView_SetViewportMargins_Callback cb) { qtreeview_setviewportmargins_callback = cb; }
    void setQTreeView_ViewportMargins_Callback(QTreeView_ViewportMargins_Callback cb) { qtreeview_viewportmargins_callback = cb; }
    void setQTreeView_DrawFrame_Callback(QTreeView_DrawFrame_Callback cb) { qtreeview_drawframe_callback = cb; }
    void setQTreeView_UpdateMicroFocus_Callback(QTreeView_UpdateMicroFocus_Callback cb) { qtreeview_updatemicrofocus_callback = cb; }
    void setQTreeView_Create_Callback(QTreeView_Create_Callback cb) { qtreeview_create_callback = cb; }
    void setQTreeView_Destroy_Callback(QTreeView_Destroy_Callback cb) { qtreeview_destroy_callback = cb; }
    void setQTreeView_FocusNextChild_Callback(QTreeView_FocusNextChild_Callback cb) { qtreeview_focusnextchild_callback = cb; }
    void setQTreeView_FocusPreviousChild_Callback(QTreeView_FocusPreviousChild_Callback cb) { qtreeview_focuspreviouschild_callback = cb; }
    void setQTreeView_Sender_Callback(QTreeView_Sender_Callback cb) { qtreeview_sender_callback = cb; }
    void setQTreeView_SenderSignalIndex_Callback(QTreeView_SenderSignalIndex_Callback cb) { qtreeview_sendersignalindex_callback = cb; }
    void setQTreeView_Receivers_Callback(QTreeView_Receivers_Callback cb) { qtreeview_receivers_callback = cb; }
    void setQTreeView_IsSignalConnected_Callback(QTreeView_IsSignalConnected_Callback cb) { qtreeview_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTreeView_Metacall_IsBase(bool value) const { qtreeview_metacall_isbase = value; }
    void setQTreeView_SetModel_IsBase(bool value) const { qtreeview_setmodel_isbase = value; }
    void setQTreeView_SetRootIndex_IsBase(bool value) const { qtreeview_setrootindex_isbase = value; }
    void setQTreeView_SetSelectionModel_IsBase(bool value) const { qtreeview_setselectionmodel_isbase = value; }
    void setQTreeView_KeyboardSearch_IsBase(bool value) const { qtreeview_keyboardsearch_isbase = value; }
    void setQTreeView_VisualRect_IsBase(bool value) const { qtreeview_visualrect_isbase = value; }
    void setQTreeView_ScrollTo_IsBase(bool value) const { qtreeview_scrollto_isbase = value; }
    void setQTreeView_IndexAt_IsBase(bool value) const { qtreeview_indexat_isbase = value; }
    void setQTreeView_DoItemsLayout_IsBase(bool value) const { qtreeview_doitemslayout_isbase = value; }
    void setQTreeView_Reset_IsBase(bool value) const { qtreeview_reset_isbase = value; }
    void setQTreeView_DataChanged_IsBase(bool value) const { qtreeview_datachanged_isbase = value; }
    void setQTreeView_SelectAll_IsBase(bool value) const { qtreeview_selectall_isbase = value; }
    void setQTreeView_VerticalScrollbarValueChanged_IsBase(bool value) const { qtreeview_verticalscrollbarvaluechanged_isbase = value; }
    void setQTreeView_ScrollContentsBy_IsBase(bool value) const { qtreeview_scrollcontentsby_isbase = value; }
    void setQTreeView_RowsInserted_IsBase(bool value) const { qtreeview_rowsinserted_isbase = value; }
    void setQTreeView_RowsAboutToBeRemoved_IsBase(bool value) const { qtreeview_rowsabouttoberemoved_isbase = value; }
    void setQTreeView_MoveCursor_IsBase(bool value) const { qtreeview_movecursor_isbase = value; }
    void setQTreeView_HorizontalOffset_IsBase(bool value) const { qtreeview_horizontaloffset_isbase = value; }
    void setQTreeView_VerticalOffset_IsBase(bool value) const { qtreeview_verticaloffset_isbase = value; }
    void setQTreeView_SetSelection_IsBase(bool value) const { qtreeview_setselection_isbase = value; }
    void setQTreeView_VisualRegionForSelection_IsBase(bool value) const { qtreeview_visualregionforselection_isbase = value; }
    void setQTreeView_SelectedIndexes_IsBase(bool value) const { qtreeview_selectedindexes_isbase = value; }
    void setQTreeView_ChangeEvent_IsBase(bool value) const { qtreeview_changeevent_isbase = value; }
    void setQTreeView_TimerEvent_IsBase(bool value) const { qtreeview_timerevent_isbase = value; }
    void setQTreeView_PaintEvent_IsBase(bool value) const { qtreeview_paintevent_isbase = value; }
    void setQTreeView_DrawRow_IsBase(bool value) const { qtreeview_drawrow_isbase = value; }
    void setQTreeView_DrawBranches_IsBase(bool value) const { qtreeview_drawbranches_isbase = value; }
    void setQTreeView_MousePressEvent_IsBase(bool value) const { qtreeview_mousepressevent_isbase = value; }
    void setQTreeView_MouseReleaseEvent_IsBase(bool value) const { qtreeview_mousereleaseevent_isbase = value; }
    void setQTreeView_MouseDoubleClickEvent_IsBase(bool value) const { qtreeview_mousedoubleclickevent_isbase = value; }
    void setQTreeView_MouseMoveEvent_IsBase(bool value) const { qtreeview_mousemoveevent_isbase = value; }
    void setQTreeView_KeyPressEvent_IsBase(bool value) const { qtreeview_keypressevent_isbase = value; }
    void setQTreeView_DragMoveEvent_IsBase(bool value) const { qtreeview_dragmoveevent_isbase = value; }
    void setQTreeView_ViewportEvent_IsBase(bool value) const { qtreeview_viewportevent_isbase = value; }
    void setQTreeView_UpdateGeometries_IsBase(bool value) const { qtreeview_updategeometries_isbase = value; }
    void setQTreeView_ViewportSizeHint_IsBase(bool value) const { qtreeview_viewportsizehint_isbase = value; }
    void setQTreeView_SizeHintForColumn_IsBase(bool value) const { qtreeview_sizehintforcolumn_isbase = value; }
    void setQTreeView_HorizontalScrollbarAction_IsBase(bool value) const { qtreeview_horizontalscrollbaraction_isbase = value; }
    void setQTreeView_IsIndexHidden_IsBase(bool value) const { qtreeview_isindexhidden_isbase = value; }
    void setQTreeView_SelectionChanged_IsBase(bool value) const { qtreeview_selectionchanged_isbase = value; }
    void setQTreeView_CurrentChanged_IsBase(bool value) const { qtreeview_currentchanged_isbase = value; }
    void setQTreeView_SizeHintForRow_IsBase(bool value) const { qtreeview_sizehintforrow_isbase = value; }
    void setQTreeView_ItemDelegateForIndex_IsBase(bool value) const { qtreeview_itemdelegateforindex_isbase = value; }
    void setQTreeView_InputMethodQuery_IsBase(bool value) const { qtreeview_inputmethodquery_isbase = value; }
    void setQTreeView_UpdateEditorData_IsBase(bool value) const { qtreeview_updateeditordata_isbase = value; }
    void setQTreeView_UpdateEditorGeometries_IsBase(bool value) const { qtreeview_updateeditorgeometries_isbase = value; }
    void setQTreeView_VerticalScrollbarAction_IsBase(bool value) const { qtreeview_verticalscrollbaraction_isbase = value; }
    void setQTreeView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qtreeview_horizontalscrollbarvaluechanged_isbase = value; }
    void setQTreeView_CloseEditor_IsBase(bool value) const { qtreeview_closeeditor_isbase = value; }
    void setQTreeView_CommitData_IsBase(bool value) const { qtreeview_commitdata_isbase = value; }
    void setQTreeView_EditorDestroyed_IsBase(bool value) const { qtreeview_editordestroyed_isbase = value; }
    void setQTreeView_Edit2_IsBase(bool value) const { qtreeview_edit2_isbase = value; }
    void setQTreeView_SelectionCommand_IsBase(bool value) const { qtreeview_selectioncommand_isbase = value; }
    void setQTreeView_StartDrag_IsBase(bool value) const { qtreeview_startdrag_isbase = value; }
    void setQTreeView_InitViewItemOption_IsBase(bool value) const { qtreeview_initviewitemoption_isbase = value; }
    void setQTreeView_FocusNextPrevChild_IsBase(bool value) const { qtreeview_focusnextprevchild_isbase = value; }
    void setQTreeView_Event_IsBase(bool value) const { qtreeview_event_isbase = value; }
    void setQTreeView_DragEnterEvent_IsBase(bool value) const { qtreeview_dragenterevent_isbase = value; }
    void setQTreeView_DragLeaveEvent_IsBase(bool value) const { qtreeview_dragleaveevent_isbase = value; }
    void setQTreeView_DropEvent_IsBase(bool value) const { qtreeview_dropevent_isbase = value; }
    void setQTreeView_FocusInEvent_IsBase(bool value) const { qtreeview_focusinevent_isbase = value; }
    void setQTreeView_FocusOutEvent_IsBase(bool value) const { qtreeview_focusoutevent_isbase = value; }
    void setQTreeView_ResizeEvent_IsBase(bool value) const { qtreeview_resizeevent_isbase = value; }
    void setQTreeView_InputMethodEvent_IsBase(bool value) const { qtreeview_inputmethodevent_isbase = value; }
    void setQTreeView_EventFilter_IsBase(bool value) const { qtreeview_eventfilter_isbase = value; }
    void setQTreeView_MinimumSizeHint_IsBase(bool value) const { qtreeview_minimumsizehint_isbase = value; }
    void setQTreeView_SizeHint_IsBase(bool value) const { qtreeview_sizehint_isbase = value; }
    void setQTreeView_SetupViewport_IsBase(bool value) const { qtreeview_setupviewport_isbase = value; }
    void setQTreeView_WheelEvent_IsBase(bool value) const { qtreeview_wheelevent_isbase = value; }
    void setQTreeView_ContextMenuEvent_IsBase(bool value) const { qtreeview_contextmenuevent_isbase = value; }
    void setQTreeView_InitStyleOption_IsBase(bool value) const { qtreeview_initstyleoption_isbase = value; }
    void setQTreeView_DevType_IsBase(bool value) const { qtreeview_devtype_isbase = value; }
    void setQTreeView_SetVisible_IsBase(bool value) const { qtreeview_setvisible_isbase = value; }
    void setQTreeView_HeightForWidth_IsBase(bool value) const { qtreeview_heightforwidth_isbase = value; }
    void setQTreeView_HasHeightForWidth_IsBase(bool value) const { qtreeview_hasheightforwidth_isbase = value; }
    void setQTreeView_PaintEngine_IsBase(bool value) const { qtreeview_paintengine_isbase = value; }
    void setQTreeView_KeyReleaseEvent_IsBase(bool value) const { qtreeview_keyreleaseevent_isbase = value; }
    void setQTreeView_EnterEvent_IsBase(bool value) const { qtreeview_enterevent_isbase = value; }
    void setQTreeView_LeaveEvent_IsBase(bool value) const { qtreeview_leaveevent_isbase = value; }
    void setQTreeView_MoveEvent_IsBase(bool value) const { qtreeview_moveevent_isbase = value; }
    void setQTreeView_CloseEvent_IsBase(bool value) const { qtreeview_closeevent_isbase = value; }
    void setQTreeView_TabletEvent_IsBase(bool value) const { qtreeview_tabletevent_isbase = value; }
    void setQTreeView_ActionEvent_IsBase(bool value) const { qtreeview_actionevent_isbase = value; }
    void setQTreeView_ShowEvent_IsBase(bool value) const { qtreeview_showevent_isbase = value; }
    void setQTreeView_HideEvent_IsBase(bool value) const { qtreeview_hideevent_isbase = value; }
    void setQTreeView_NativeEvent_IsBase(bool value) const { qtreeview_nativeevent_isbase = value; }
    void setQTreeView_Metric_IsBase(bool value) const { qtreeview_metric_isbase = value; }
    void setQTreeView_InitPainter_IsBase(bool value) const { qtreeview_initpainter_isbase = value; }
    void setQTreeView_Redirected_IsBase(bool value) const { qtreeview_redirected_isbase = value; }
    void setQTreeView_SharedPainter_IsBase(bool value) const { qtreeview_sharedpainter_isbase = value; }
    void setQTreeView_ChildEvent_IsBase(bool value) const { qtreeview_childevent_isbase = value; }
    void setQTreeView_CustomEvent_IsBase(bool value) const { qtreeview_customevent_isbase = value; }
    void setQTreeView_ConnectNotify_IsBase(bool value) const { qtreeview_connectnotify_isbase = value; }
    void setQTreeView_DisconnectNotify_IsBase(bool value) const { qtreeview_disconnectnotify_isbase = value; }
    void setQTreeView_ColumnResized_IsBase(bool value) const { qtreeview_columnresized_isbase = value; }
    void setQTreeView_ColumnCountChanged_IsBase(bool value) const { qtreeview_columncountchanged_isbase = value; }
    void setQTreeView_ColumnMoved_IsBase(bool value) const { qtreeview_columnmoved_isbase = value; }
    void setQTreeView_Reexpand_IsBase(bool value) const { qtreeview_reexpand_isbase = value; }
    void setQTreeView_RowsRemoved_IsBase(bool value) const { qtreeview_rowsremoved_isbase = value; }
    void setQTreeView_DrawTree_IsBase(bool value) const { qtreeview_drawtree_isbase = value; }
    void setQTreeView_IndexRowSizeHint_IsBase(bool value) const { qtreeview_indexrowsizehint_isbase = value; }
    void setQTreeView_RowHeight_IsBase(bool value) const { qtreeview_rowheight_isbase = value; }
    void setQTreeView_State_IsBase(bool value) const { qtreeview_state_isbase = value; }
    void setQTreeView_SetState_IsBase(bool value) const { qtreeview_setstate_isbase = value; }
    void setQTreeView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qtreeview_scheduledelayeditemslayout_isbase = value; }
    void setQTreeView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qtreeview_executedelayeditemslayout_isbase = value; }
    void setQTreeView_SetDirtyRegion_IsBase(bool value) const { qtreeview_setdirtyregion_isbase = value; }
    void setQTreeView_ScrollDirtyRegion_IsBase(bool value) const { qtreeview_scrolldirtyregion_isbase = value; }
    void setQTreeView_DirtyRegionOffset_IsBase(bool value) const { qtreeview_dirtyregionoffset_isbase = value; }
    void setQTreeView_StartAutoScroll_IsBase(bool value) const { qtreeview_startautoscroll_isbase = value; }
    void setQTreeView_StopAutoScroll_IsBase(bool value) const { qtreeview_stopautoscroll_isbase = value; }
    void setQTreeView_DoAutoScroll_IsBase(bool value) const { qtreeview_doautoscroll_isbase = value; }
    void setQTreeView_DropIndicatorPosition_IsBase(bool value) const { qtreeview_dropindicatorposition_isbase = value; }
    void setQTreeView_SetViewportMargins_IsBase(bool value) const { qtreeview_setviewportmargins_isbase = value; }
    void setQTreeView_ViewportMargins_IsBase(bool value) const { qtreeview_viewportmargins_isbase = value; }
    void setQTreeView_DrawFrame_IsBase(bool value) const { qtreeview_drawframe_isbase = value; }
    void setQTreeView_UpdateMicroFocus_IsBase(bool value) const { qtreeview_updatemicrofocus_isbase = value; }
    void setQTreeView_Create_IsBase(bool value) const { qtreeview_create_isbase = value; }
    void setQTreeView_Destroy_IsBase(bool value) const { qtreeview_destroy_isbase = value; }
    void setQTreeView_FocusNextChild_IsBase(bool value) const { qtreeview_focusnextchild_isbase = value; }
    void setQTreeView_FocusPreviousChild_IsBase(bool value) const { qtreeview_focuspreviouschild_isbase = value; }
    void setQTreeView_Sender_IsBase(bool value) const { qtreeview_sender_isbase = value; }
    void setQTreeView_SenderSignalIndex_IsBase(bool value) const { qtreeview_sendersignalindex_isbase = value; }
    void setQTreeView_Receivers_IsBase(bool value) const { qtreeview_receivers_isbase = value; }
    void setQTreeView_IsSignalConnected_IsBase(bool value) const { qtreeview_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtreeview_metacall_isbase) {
            qtreeview_metacall_isbase = false;
            return QTreeView::qt_metacall(param1, param2, param3);
        } else if (qtreeview_metacall_callback != nullptr) {
            return qtreeview_metacall_callback(this, param1, param2, param3);
        } else {
            return QTreeView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qtreeview_setmodel_isbase) {
            qtreeview_setmodel_isbase = false;
            QTreeView::setModel(model);
        } else if (qtreeview_setmodel_callback != nullptr) {
            qtreeview_setmodel_callback(this, model);
        } else {
            QTreeView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtreeview_setrootindex_isbase) {
            qtreeview_setrootindex_isbase = false;
            QTreeView::setRootIndex(index);
        } else if (qtreeview_setrootindex_callback != nullptr) {
            qtreeview_setrootindex_callback(this, index);
        } else {
            QTreeView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtreeview_setselectionmodel_isbase) {
            qtreeview_setselectionmodel_isbase = false;
            QTreeView::setSelectionModel(selectionModel);
        } else if (qtreeview_setselectionmodel_callback != nullptr) {
            qtreeview_setselectionmodel_callback(this, selectionModel);
        } else {
            QTreeView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtreeview_keyboardsearch_isbase) {
            qtreeview_keyboardsearch_isbase = false;
            QTreeView::keyboardSearch(search);
        } else if (qtreeview_keyboardsearch_callback != nullptr) {
            qtreeview_keyboardsearch_callback(this, search);
        } else {
            QTreeView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtreeview_visualrect_isbase) {
            qtreeview_visualrect_isbase = false;
            return QTreeView::visualRect(index);
        } else if (qtreeview_visualrect_callback != nullptr) {
            return qtreeview_visualrect_callback(this, index);
        } else {
            return QTreeView::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtreeview_scrollto_isbase) {
            qtreeview_scrollto_isbase = false;
            QTreeView::scrollTo(index, hint);
        } else if (qtreeview_scrollto_callback != nullptr) {
            qtreeview_scrollto_callback(this, index, hint);
        } else {
            QTreeView::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtreeview_indexat_isbase) {
            qtreeview_indexat_isbase = false;
            return QTreeView::indexAt(p);
        } else if (qtreeview_indexat_callback != nullptr) {
            return qtreeview_indexat_callback(this, p);
        } else {
            return QTreeView::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtreeview_doitemslayout_isbase) {
            qtreeview_doitemslayout_isbase = false;
            QTreeView::doItemsLayout();
        } else if (qtreeview_doitemslayout_callback != nullptr) {
            qtreeview_doitemslayout_callback();
        } else {
            QTreeView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtreeview_reset_isbase) {
            qtreeview_reset_isbase = false;
            QTreeView::reset();
        } else if (qtreeview_reset_callback != nullptr) {
            qtreeview_reset_callback();
        } else {
            QTreeView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtreeview_datachanged_isbase) {
            qtreeview_datachanged_isbase = false;
            QTreeView::dataChanged(topLeft, bottomRight, roles);
        } else if (qtreeview_datachanged_callback != nullptr) {
            qtreeview_datachanged_callback(this, topLeft, bottomRight, roles);
        } else {
            QTreeView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtreeview_selectall_isbase) {
            qtreeview_selectall_isbase = false;
            QTreeView::selectAll();
        } else if (qtreeview_selectall_callback != nullptr) {
            qtreeview_selectall_callback();
        } else {
            QTreeView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtreeview_verticalscrollbarvaluechanged_isbase) {
            qtreeview_verticalscrollbarvaluechanged_isbase = false;
            QTreeView::verticalScrollbarValueChanged(value);
        } else if (qtreeview_verticalscrollbarvaluechanged_callback != nullptr) {
            qtreeview_verticalscrollbarvaluechanged_callback(this, value);
        } else {
            QTreeView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtreeview_scrollcontentsby_isbase) {
            qtreeview_scrollcontentsby_isbase = false;
            QTreeView::scrollContentsBy(dx, dy);
        } else if (qtreeview_scrollcontentsby_callback != nullptr) {
            qtreeview_scrollcontentsby_callback(this, dx, dy);
        } else {
            QTreeView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtreeview_rowsinserted_isbase) {
            qtreeview_rowsinserted_isbase = false;
            QTreeView::rowsInserted(parent, start, end);
        } else if (qtreeview_rowsinserted_callback != nullptr) {
            qtreeview_rowsinserted_callback(this, parent, start, end);
        } else {
            QTreeView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtreeview_rowsabouttoberemoved_isbase) {
            qtreeview_rowsabouttoberemoved_isbase = false;
            QTreeView::rowsAboutToBeRemoved(parent, start, end);
        } else if (qtreeview_rowsabouttoberemoved_callback != nullptr) {
            qtreeview_rowsabouttoberemoved_callback(this, parent, start, end);
        } else {
            QTreeView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtreeview_movecursor_isbase) {
            qtreeview_movecursor_isbase = false;
            return QTreeView::moveCursor(cursorAction, modifiers);
        } else if (qtreeview_movecursor_callback != nullptr) {
            return qtreeview_movecursor_callback(this, cursorAction, modifiers);
        } else {
            return QTreeView::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtreeview_horizontaloffset_isbase) {
            qtreeview_horizontaloffset_isbase = false;
            return QTreeView::horizontalOffset();
        } else if (qtreeview_horizontaloffset_callback != nullptr) {
            return qtreeview_horizontaloffset_callback();
        } else {
            return QTreeView::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtreeview_verticaloffset_isbase) {
            qtreeview_verticaloffset_isbase = false;
            return QTreeView::verticalOffset();
        } else if (qtreeview_verticaloffset_callback != nullptr) {
            return qtreeview_verticaloffset_callback();
        } else {
            return QTreeView::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtreeview_setselection_isbase) {
            qtreeview_setselection_isbase = false;
            QTreeView::setSelection(rect, command);
        } else if (qtreeview_setselection_callback != nullptr) {
            qtreeview_setselection_callback(this, rect, command);
        } else {
            QTreeView::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtreeview_visualregionforselection_isbase) {
            qtreeview_visualregionforselection_isbase = false;
            return QTreeView::visualRegionForSelection(selection);
        } else if (qtreeview_visualregionforselection_callback != nullptr) {
            return qtreeview_visualregionforselection_callback(this, selection);
        } else {
            return QTreeView::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList selectedIndexes() const override {
        if (qtreeview_selectedindexes_isbase) {
            qtreeview_selectedindexes_isbase = false;
            return QTreeView::selectedIndexes();
        } else if (qtreeview_selectedindexes_callback != nullptr) {
            return qtreeview_selectedindexes_callback();
        } else {
            return QTreeView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtreeview_changeevent_isbase) {
            qtreeview_changeevent_isbase = false;
            QTreeView::changeEvent(event);
        } else if (qtreeview_changeevent_callback != nullptr) {
            qtreeview_changeevent_callback(this, event);
        } else {
            QTreeView::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtreeview_timerevent_isbase) {
            qtreeview_timerevent_isbase = false;
            QTreeView::timerEvent(event);
        } else if (qtreeview_timerevent_callback != nullptr) {
            qtreeview_timerevent_callback(this, event);
        } else {
            QTreeView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtreeview_paintevent_isbase) {
            qtreeview_paintevent_isbase = false;
            QTreeView::paintEvent(event);
        } else if (qtreeview_paintevent_callback != nullptr) {
            qtreeview_paintevent_callback(this, event);
        } else {
            QTreeView::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRow(QPainter* painter, const QStyleOptionViewItem& options, const QModelIndex& index) const override {
        if (qtreeview_drawrow_isbase) {
            qtreeview_drawrow_isbase = false;
            QTreeView::drawRow(painter, options, index);
        } else if (qtreeview_drawrow_callback != nullptr) {
            qtreeview_drawrow_callback(this, painter, options, index);
        } else {
            QTreeView::drawRow(painter, options, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBranches(QPainter* painter, const QRect& rect, const QModelIndex& index) const override {
        if (qtreeview_drawbranches_isbase) {
            qtreeview_drawbranches_isbase = false;
            QTreeView::drawBranches(painter, rect, index);
        } else if (qtreeview_drawbranches_callback != nullptr) {
            qtreeview_drawbranches_callback(this, painter, rect, index);
        } else {
            QTreeView::drawBranches(painter, rect, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtreeview_mousepressevent_isbase) {
            qtreeview_mousepressevent_isbase = false;
            QTreeView::mousePressEvent(event);
        } else if (qtreeview_mousepressevent_callback != nullptr) {
            qtreeview_mousepressevent_callback(this, event);
        } else {
            QTreeView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtreeview_mousereleaseevent_isbase) {
            qtreeview_mousereleaseevent_isbase = false;
            QTreeView::mouseReleaseEvent(event);
        } else if (qtreeview_mousereleaseevent_callback != nullptr) {
            qtreeview_mousereleaseevent_callback(this, event);
        } else {
            QTreeView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtreeview_mousedoubleclickevent_isbase) {
            qtreeview_mousedoubleclickevent_isbase = false;
            QTreeView::mouseDoubleClickEvent(event);
        } else if (qtreeview_mousedoubleclickevent_callback != nullptr) {
            qtreeview_mousedoubleclickevent_callback(this, event);
        } else {
            QTreeView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtreeview_mousemoveevent_isbase) {
            qtreeview_mousemoveevent_isbase = false;
            QTreeView::mouseMoveEvent(event);
        } else if (qtreeview_mousemoveevent_callback != nullptr) {
            qtreeview_mousemoveevent_callback(this, event);
        } else {
            QTreeView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtreeview_keypressevent_isbase) {
            qtreeview_keypressevent_isbase = false;
            QTreeView::keyPressEvent(event);
        } else if (qtreeview_keypressevent_callback != nullptr) {
            qtreeview_keypressevent_callback(this, event);
        } else {
            QTreeView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtreeview_dragmoveevent_isbase) {
            qtreeview_dragmoveevent_isbase = false;
            QTreeView::dragMoveEvent(event);
        } else if (qtreeview_dragmoveevent_callback != nullptr) {
            qtreeview_dragmoveevent_callback(this, event);
        } else {
            QTreeView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtreeview_viewportevent_isbase) {
            qtreeview_viewportevent_isbase = false;
            return QTreeView::viewportEvent(event);
        } else if (qtreeview_viewportevent_callback != nullptr) {
            return qtreeview_viewportevent_callback(this, event);
        } else {
            return QTreeView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtreeview_updategeometries_isbase) {
            qtreeview_updategeometries_isbase = false;
            QTreeView::updateGeometries();
        } else if (qtreeview_updategeometries_callback != nullptr) {
            qtreeview_updategeometries_callback();
        } else {
            QTreeView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtreeview_viewportsizehint_isbase) {
            qtreeview_viewportsizehint_isbase = false;
            return QTreeView::viewportSizeHint();
        } else if (qtreeview_viewportsizehint_callback != nullptr) {
            return qtreeview_viewportsizehint_callback();
        } else {
            return QTreeView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtreeview_sizehintforcolumn_isbase) {
            qtreeview_sizehintforcolumn_isbase = false;
            return QTreeView::sizeHintForColumn(column);
        } else if (qtreeview_sizehintforcolumn_callback != nullptr) {
            return qtreeview_sizehintforcolumn_callback(this, column);
        } else {
            return QTreeView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtreeview_horizontalscrollbaraction_isbase) {
            qtreeview_horizontalscrollbaraction_isbase = false;
            QTreeView::horizontalScrollbarAction(action);
        } else if (qtreeview_horizontalscrollbaraction_callback != nullptr) {
            qtreeview_horizontalscrollbaraction_callback(this, action);
        } else {
            QTreeView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtreeview_isindexhidden_isbase) {
            qtreeview_isindexhidden_isbase = false;
            return QTreeView::isIndexHidden(index);
        } else if (qtreeview_isindexhidden_callback != nullptr) {
            return qtreeview_isindexhidden_callback(this, index);
        } else {
            return QTreeView::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtreeview_selectionchanged_isbase) {
            qtreeview_selectionchanged_isbase = false;
            QTreeView::selectionChanged(selected, deselected);
        } else if (qtreeview_selectionchanged_callback != nullptr) {
            qtreeview_selectionchanged_callback(this, selected, deselected);
        } else {
            QTreeView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtreeview_currentchanged_isbase) {
            qtreeview_currentchanged_isbase = false;
            QTreeView::currentChanged(current, previous);
        } else if (qtreeview_currentchanged_callback != nullptr) {
            qtreeview_currentchanged_callback(this, current, previous);
        } else {
            QTreeView::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtreeview_sizehintforrow_isbase) {
            qtreeview_sizehintforrow_isbase = false;
            return QTreeView::sizeHintForRow(row);
        } else if (qtreeview_sizehintforrow_callback != nullptr) {
            return qtreeview_sizehintforrow_callback(this, row);
        } else {
            return QTreeView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtreeview_itemdelegateforindex_isbase) {
            qtreeview_itemdelegateforindex_isbase = false;
            return QTreeView::itemDelegateForIndex(index);
        } else if (qtreeview_itemdelegateforindex_callback != nullptr) {
            return qtreeview_itemdelegateforindex_callback(this, index);
        } else {
            return QTreeView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtreeview_inputmethodquery_isbase) {
            qtreeview_inputmethodquery_isbase = false;
            return QTreeView::inputMethodQuery(query);
        } else if (qtreeview_inputmethodquery_callback != nullptr) {
            return qtreeview_inputmethodquery_callback(this, query);
        } else {
            return QTreeView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtreeview_updateeditordata_isbase) {
            qtreeview_updateeditordata_isbase = false;
            QTreeView::updateEditorData();
        } else if (qtreeview_updateeditordata_callback != nullptr) {
            qtreeview_updateeditordata_callback();
        } else {
            QTreeView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtreeview_updateeditorgeometries_isbase) {
            qtreeview_updateeditorgeometries_isbase = false;
            QTreeView::updateEditorGeometries();
        } else if (qtreeview_updateeditorgeometries_callback != nullptr) {
            qtreeview_updateeditorgeometries_callback();
        } else {
            QTreeView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtreeview_verticalscrollbaraction_isbase) {
            qtreeview_verticalscrollbaraction_isbase = false;
            QTreeView::verticalScrollbarAction(action);
        } else if (qtreeview_verticalscrollbaraction_callback != nullptr) {
            qtreeview_verticalscrollbaraction_callback(this, action);
        } else {
            QTreeView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtreeview_horizontalscrollbarvaluechanged_isbase) {
            qtreeview_horizontalscrollbarvaluechanged_isbase = false;
            QTreeView::horizontalScrollbarValueChanged(value);
        } else if (qtreeview_horizontalscrollbarvaluechanged_callback != nullptr) {
            qtreeview_horizontalscrollbarvaluechanged_callback(this, value);
        } else {
            QTreeView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtreeview_closeeditor_isbase) {
            qtreeview_closeeditor_isbase = false;
            QTreeView::closeEditor(editor, hint);
        } else if (qtreeview_closeeditor_callback != nullptr) {
            qtreeview_closeeditor_callback(this, editor, hint);
        } else {
            QTreeView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtreeview_commitdata_isbase) {
            qtreeview_commitdata_isbase = false;
            QTreeView::commitData(editor);
        } else if (qtreeview_commitdata_callback != nullptr) {
            qtreeview_commitdata_callback(this, editor);
        } else {
            QTreeView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtreeview_editordestroyed_isbase) {
            qtreeview_editordestroyed_isbase = false;
            QTreeView::editorDestroyed(editor);
        } else if (qtreeview_editordestroyed_callback != nullptr) {
            qtreeview_editordestroyed_callback(this, editor);
        } else {
            QTreeView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtreeview_edit2_isbase) {
            qtreeview_edit2_isbase = false;
            return QTreeView::edit(index, trigger, event);
        } else if (qtreeview_edit2_callback != nullptr) {
            return qtreeview_edit2_callback(this, index, trigger, event);
        } else {
            return QTreeView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtreeview_selectioncommand_isbase) {
            qtreeview_selectioncommand_isbase = false;
            return QTreeView::selectionCommand(index, event);
        } else if (qtreeview_selectioncommand_callback != nullptr) {
            return qtreeview_selectioncommand_callback(this, index, event);
        } else {
            return QTreeView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtreeview_startdrag_isbase) {
            qtreeview_startdrag_isbase = false;
            QTreeView::startDrag(supportedActions);
        } else if (qtreeview_startdrag_callback != nullptr) {
            qtreeview_startdrag_callback(this, supportedActions);
        } else {
            QTreeView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtreeview_initviewitemoption_isbase) {
            qtreeview_initviewitemoption_isbase = false;
            QTreeView::initViewItemOption(option);
        } else if (qtreeview_initviewitemoption_callback != nullptr) {
            qtreeview_initviewitemoption_callback(this, option);
        } else {
            QTreeView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtreeview_focusnextprevchild_isbase) {
            qtreeview_focusnextprevchild_isbase = false;
            return QTreeView::focusNextPrevChild(next);
        } else if (qtreeview_focusnextprevchild_callback != nullptr) {
            return qtreeview_focusnextprevchild_callback(this, next);
        } else {
            return QTreeView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtreeview_event_isbase) {
            qtreeview_event_isbase = false;
            return QTreeView::event(event);
        } else if (qtreeview_event_callback != nullptr) {
            return qtreeview_event_callback(this, event);
        } else {
            return QTreeView::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtreeview_dragenterevent_isbase) {
            qtreeview_dragenterevent_isbase = false;
            QTreeView::dragEnterEvent(event);
        } else if (qtreeview_dragenterevent_callback != nullptr) {
            qtreeview_dragenterevent_callback(this, event);
        } else {
            QTreeView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtreeview_dragleaveevent_isbase) {
            qtreeview_dragleaveevent_isbase = false;
            QTreeView::dragLeaveEvent(event);
        } else if (qtreeview_dragleaveevent_callback != nullptr) {
            qtreeview_dragleaveevent_callback(this, event);
        } else {
            QTreeView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtreeview_dropevent_isbase) {
            qtreeview_dropevent_isbase = false;
            QTreeView::dropEvent(event);
        } else if (qtreeview_dropevent_callback != nullptr) {
            qtreeview_dropevent_callback(this, event);
        } else {
            QTreeView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtreeview_focusinevent_isbase) {
            qtreeview_focusinevent_isbase = false;
            QTreeView::focusInEvent(event);
        } else if (qtreeview_focusinevent_callback != nullptr) {
            qtreeview_focusinevent_callback(this, event);
        } else {
            QTreeView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtreeview_focusoutevent_isbase) {
            qtreeview_focusoutevent_isbase = false;
            QTreeView::focusOutEvent(event);
        } else if (qtreeview_focusoutevent_callback != nullptr) {
            qtreeview_focusoutevent_callback(this, event);
        } else {
            QTreeView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtreeview_resizeevent_isbase) {
            qtreeview_resizeevent_isbase = false;
            QTreeView::resizeEvent(event);
        } else if (qtreeview_resizeevent_callback != nullptr) {
            qtreeview_resizeevent_callback(this, event);
        } else {
            QTreeView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtreeview_inputmethodevent_isbase) {
            qtreeview_inputmethodevent_isbase = false;
            QTreeView::inputMethodEvent(event);
        } else if (qtreeview_inputmethodevent_callback != nullptr) {
            qtreeview_inputmethodevent_callback(this, event);
        } else {
            QTreeView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtreeview_eventfilter_isbase) {
            qtreeview_eventfilter_isbase = false;
            return QTreeView::eventFilter(object, event);
        } else if (qtreeview_eventfilter_callback != nullptr) {
            return qtreeview_eventfilter_callback(this, object, event);
        } else {
            return QTreeView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtreeview_minimumsizehint_isbase) {
            qtreeview_minimumsizehint_isbase = false;
            return QTreeView::minimumSizeHint();
        } else if (qtreeview_minimumsizehint_callback != nullptr) {
            return qtreeview_minimumsizehint_callback();
        } else {
            return QTreeView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtreeview_sizehint_isbase) {
            qtreeview_sizehint_isbase = false;
            return QTreeView::sizeHint();
        } else if (qtreeview_sizehint_callback != nullptr) {
            return qtreeview_sizehint_callback();
        } else {
            return QTreeView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtreeview_setupviewport_isbase) {
            qtreeview_setupviewport_isbase = false;
            QTreeView::setupViewport(viewport);
        } else if (qtreeview_setupviewport_callback != nullptr) {
            qtreeview_setupviewport_callback(this, viewport);
        } else {
            QTreeView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtreeview_wheelevent_isbase) {
            qtreeview_wheelevent_isbase = false;
            QTreeView::wheelEvent(param1);
        } else if (qtreeview_wheelevent_callback != nullptr) {
            qtreeview_wheelevent_callback(this, param1);
        } else {
            QTreeView::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtreeview_contextmenuevent_isbase) {
            qtreeview_contextmenuevent_isbase = false;
            QTreeView::contextMenuEvent(param1);
        } else if (qtreeview_contextmenuevent_callback != nullptr) {
            qtreeview_contextmenuevent_callback(this, param1);
        } else {
            QTreeView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtreeview_initstyleoption_isbase) {
            qtreeview_initstyleoption_isbase = false;
            QTreeView::initStyleOption(option);
        } else if (qtreeview_initstyleoption_callback != nullptr) {
            qtreeview_initstyleoption_callback(this, option);
        } else {
            QTreeView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtreeview_devtype_isbase) {
            qtreeview_devtype_isbase = false;
            return QTreeView::devType();
        } else if (qtreeview_devtype_callback != nullptr) {
            return qtreeview_devtype_callback();
        } else {
            return QTreeView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtreeview_setvisible_isbase) {
            qtreeview_setvisible_isbase = false;
            QTreeView::setVisible(visible);
        } else if (qtreeview_setvisible_callback != nullptr) {
            qtreeview_setvisible_callback(this, visible);
        } else {
            QTreeView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtreeview_heightforwidth_isbase) {
            qtreeview_heightforwidth_isbase = false;
            return QTreeView::heightForWidth(param1);
        } else if (qtreeview_heightforwidth_callback != nullptr) {
            return qtreeview_heightforwidth_callback(this, param1);
        } else {
            return QTreeView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtreeview_hasheightforwidth_isbase) {
            qtreeview_hasheightforwidth_isbase = false;
            return QTreeView::hasHeightForWidth();
        } else if (qtreeview_hasheightforwidth_callback != nullptr) {
            return qtreeview_hasheightforwidth_callback();
        } else {
            return QTreeView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtreeview_paintengine_isbase) {
            qtreeview_paintengine_isbase = false;
            return QTreeView::paintEngine();
        } else if (qtreeview_paintengine_callback != nullptr) {
            return qtreeview_paintengine_callback();
        } else {
            return QTreeView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtreeview_keyreleaseevent_isbase) {
            qtreeview_keyreleaseevent_isbase = false;
            QTreeView::keyReleaseEvent(event);
        } else if (qtreeview_keyreleaseevent_callback != nullptr) {
            qtreeview_keyreleaseevent_callback(this, event);
        } else {
            QTreeView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtreeview_enterevent_isbase) {
            qtreeview_enterevent_isbase = false;
            QTreeView::enterEvent(event);
        } else if (qtreeview_enterevent_callback != nullptr) {
            qtreeview_enterevent_callback(this, event);
        } else {
            QTreeView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtreeview_leaveevent_isbase) {
            qtreeview_leaveevent_isbase = false;
            QTreeView::leaveEvent(event);
        } else if (qtreeview_leaveevent_callback != nullptr) {
            qtreeview_leaveevent_callback(this, event);
        } else {
            QTreeView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtreeview_moveevent_isbase) {
            qtreeview_moveevent_isbase = false;
            QTreeView::moveEvent(event);
        } else if (qtreeview_moveevent_callback != nullptr) {
            qtreeview_moveevent_callback(this, event);
        } else {
            QTreeView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtreeview_closeevent_isbase) {
            qtreeview_closeevent_isbase = false;
            QTreeView::closeEvent(event);
        } else if (qtreeview_closeevent_callback != nullptr) {
            qtreeview_closeevent_callback(this, event);
        } else {
            QTreeView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtreeview_tabletevent_isbase) {
            qtreeview_tabletevent_isbase = false;
            QTreeView::tabletEvent(event);
        } else if (qtreeview_tabletevent_callback != nullptr) {
            qtreeview_tabletevent_callback(this, event);
        } else {
            QTreeView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtreeview_actionevent_isbase) {
            qtreeview_actionevent_isbase = false;
            QTreeView::actionEvent(event);
        } else if (qtreeview_actionevent_callback != nullptr) {
            qtreeview_actionevent_callback(this, event);
        } else {
            QTreeView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtreeview_showevent_isbase) {
            qtreeview_showevent_isbase = false;
            QTreeView::showEvent(event);
        } else if (qtreeview_showevent_callback != nullptr) {
            qtreeview_showevent_callback(this, event);
        } else {
            QTreeView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtreeview_hideevent_isbase) {
            qtreeview_hideevent_isbase = false;
            QTreeView::hideEvent(event);
        } else if (qtreeview_hideevent_callback != nullptr) {
            qtreeview_hideevent_callback(this, event);
        } else {
            QTreeView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtreeview_nativeevent_isbase) {
            qtreeview_nativeevent_isbase = false;
            return QTreeView::nativeEvent(eventType, message, result);
        } else if (qtreeview_nativeevent_callback != nullptr) {
            return qtreeview_nativeevent_callback(this, eventType, message, result);
        } else {
            return QTreeView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtreeview_metric_isbase) {
            qtreeview_metric_isbase = false;
            return QTreeView::metric(param1);
        } else if (qtreeview_metric_callback != nullptr) {
            return qtreeview_metric_callback(this, param1);
        } else {
            return QTreeView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtreeview_initpainter_isbase) {
            qtreeview_initpainter_isbase = false;
            QTreeView::initPainter(painter);
        } else if (qtreeview_initpainter_callback != nullptr) {
            qtreeview_initpainter_callback(this, painter);
        } else {
            QTreeView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtreeview_redirected_isbase) {
            qtreeview_redirected_isbase = false;
            return QTreeView::redirected(offset);
        } else if (qtreeview_redirected_callback != nullptr) {
            return qtreeview_redirected_callback(this, offset);
        } else {
            return QTreeView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtreeview_sharedpainter_isbase) {
            qtreeview_sharedpainter_isbase = false;
            return QTreeView::sharedPainter();
        } else if (qtreeview_sharedpainter_callback != nullptr) {
            return qtreeview_sharedpainter_callback();
        } else {
            return QTreeView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtreeview_childevent_isbase) {
            qtreeview_childevent_isbase = false;
            QTreeView::childEvent(event);
        } else if (qtreeview_childevent_callback != nullptr) {
            qtreeview_childevent_callback(this, event);
        } else {
            QTreeView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtreeview_customevent_isbase) {
            qtreeview_customevent_isbase = false;
            QTreeView::customEvent(event);
        } else if (qtreeview_customevent_callback != nullptr) {
            qtreeview_customevent_callback(this, event);
        } else {
            QTreeView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtreeview_connectnotify_isbase) {
            qtreeview_connectnotify_isbase = false;
            QTreeView::connectNotify(signal);
        } else if (qtreeview_connectnotify_callback != nullptr) {
            qtreeview_connectnotify_callback(this, signal);
        } else {
            QTreeView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtreeview_disconnectnotify_isbase) {
            qtreeview_disconnectnotify_isbase = false;
            QTreeView::disconnectNotify(signal);
        } else if (qtreeview_disconnectnotify_callback != nullptr) {
            qtreeview_disconnectnotify_callback(this, signal);
        } else {
            QTreeView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnResized(int column, int oldSize, int newSize) {
        if (qtreeview_columnresized_isbase) {
            qtreeview_columnresized_isbase = false;
            QTreeView::columnResized(column, oldSize, newSize);
        } else if (qtreeview_columnresized_callback != nullptr) {
            qtreeview_columnresized_callback(this, column, oldSize, newSize);
        } else {
            QTreeView::columnResized(column, oldSize, newSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnCountChanged(int oldCount, int newCount) {
        if (qtreeview_columncountchanged_isbase) {
            qtreeview_columncountchanged_isbase = false;
            QTreeView::columnCountChanged(oldCount, newCount);
        } else if (qtreeview_columncountchanged_callback != nullptr) {
            qtreeview_columncountchanged_callback(this, oldCount, newCount);
        } else {
            QTreeView::columnCountChanged(oldCount, newCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnMoved() {
        if (qtreeview_columnmoved_isbase) {
            qtreeview_columnmoved_isbase = false;
            QTreeView::columnMoved();
        } else if (qtreeview_columnmoved_callback != nullptr) {
            qtreeview_columnmoved_callback();
        } else {
            QTreeView::columnMoved();
        }
    }

    // Virtual method for C ABI access and custom callback
    void reexpand() {
        if (qtreeview_reexpand_isbase) {
            qtreeview_reexpand_isbase = false;
            QTreeView::reexpand();
        } else if (qtreeview_reexpand_callback != nullptr) {
            qtreeview_reexpand_callback();
        } else {
            QTreeView::reexpand();
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowsRemoved(const QModelIndex& parent, int first, int last) {
        if (qtreeview_rowsremoved_isbase) {
            qtreeview_rowsremoved_isbase = false;
            QTreeView::rowsRemoved(parent, first, last);
        } else if (qtreeview_rowsremoved_callback != nullptr) {
            qtreeview_rowsremoved_callback(this, parent, first, last);
        } else {
            QTreeView::rowsRemoved(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawTree(QPainter* painter, const QRegion& region) const {
        if (qtreeview_drawtree_isbase) {
            qtreeview_drawtree_isbase = false;
            QTreeView::drawTree(painter, region);
        } else if (qtreeview_drawtree_callback != nullptr) {
            qtreeview_drawtree_callback(this, painter, region);
        } else {
            QTreeView::drawTree(painter, region);
        }
    }

    // Virtual method for C ABI access and custom callback
    int indexRowSizeHint(const QModelIndex& index) const {
        if (qtreeview_indexrowsizehint_isbase) {
            qtreeview_indexrowsizehint_isbase = false;
            return QTreeView::indexRowSizeHint(index);
        } else if (qtreeview_indexrowsizehint_callback != nullptr) {
            return qtreeview_indexrowsizehint_callback(this, index);
        } else {
            return QTreeView::indexRowSizeHint(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    int rowHeight(const QModelIndex& index) const {
        if (qtreeview_rowheight_isbase) {
            qtreeview_rowheight_isbase = false;
            return QTreeView::rowHeight(index);
        } else if (qtreeview_rowheight_callback != nullptr) {
            return qtreeview_rowheight_callback(this, index);
        } else {
            return QTreeView::rowHeight(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qtreeview_state_isbase) {
            qtreeview_state_isbase = false;
            return QTreeView::state();
        } else if (qtreeview_state_callback != nullptr) {
            return qtreeview_state_callback();
        } else {
            return QTreeView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qtreeview_setstate_isbase) {
            qtreeview_setstate_isbase = false;
            QTreeView::setState(state);
        } else if (qtreeview_setstate_callback != nullptr) {
            qtreeview_setstate_callback(this, state);
        } else {
            QTreeView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qtreeview_scheduledelayeditemslayout_isbase) {
            qtreeview_scheduledelayeditemslayout_isbase = false;
            QTreeView::scheduleDelayedItemsLayout();
        } else if (qtreeview_scheduledelayeditemslayout_callback != nullptr) {
            qtreeview_scheduledelayeditemslayout_callback();
        } else {
            QTreeView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qtreeview_executedelayeditemslayout_isbase) {
            qtreeview_executedelayeditemslayout_isbase = false;
            QTreeView::executeDelayedItemsLayout();
        } else if (qtreeview_executedelayeditemslayout_callback != nullptr) {
            qtreeview_executedelayeditemslayout_callback();
        } else {
            QTreeView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qtreeview_setdirtyregion_isbase) {
            qtreeview_setdirtyregion_isbase = false;
            QTreeView::setDirtyRegion(region);
        } else if (qtreeview_setdirtyregion_callback != nullptr) {
            qtreeview_setdirtyregion_callback(this, region);
        } else {
            QTreeView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qtreeview_scrolldirtyregion_isbase) {
            qtreeview_scrolldirtyregion_isbase = false;
            QTreeView::scrollDirtyRegion(dx, dy);
        } else if (qtreeview_scrolldirtyregion_callback != nullptr) {
            qtreeview_scrolldirtyregion_callback(this, dx, dy);
        } else {
            QTreeView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qtreeview_dirtyregionoffset_isbase) {
            qtreeview_dirtyregionoffset_isbase = false;
            return QTreeView::dirtyRegionOffset();
        } else if (qtreeview_dirtyregionoffset_callback != nullptr) {
            return qtreeview_dirtyregionoffset_callback();
        } else {
            return QTreeView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qtreeview_startautoscroll_isbase) {
            qtreeview_startautoscroll_isbase = false;
            QTreeView::startAutoScroll();
        } else if (qtreeview_startautoscroll_callback != nullptr) {
            qtreeview_startautoscroll_callback();
        } else {
            QTreeView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qtreeview_stopautoscroll_isbase) {
            qtreeview_stopautoscroll_isbase = false;
            QTreeView::stopAutoScroll();
        } else if (qtreeview_stopautoscroll_callback != nullptr) {
            qtreeview_stopautoscroll_callback();
        } else {
            QTreeView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qtreeview_doautoscroll_isbase) {
            qtreeview_doautoscroll_isbase = false;
            QTreeView::doAutoScroll();
        } else if (qtreeview_doautoscroll_callback != nullptr) {
            qtreeview_doautoscroll_callback();
        } else {
            QTreeView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qtreeview_dropindicatorposition_isbase) {
            qtreeview_dropindicatorposition_isbase = false;
            return QTreeView::dropIndicatorPosition();
        } else if (qtreeview_dropindicatorposition_callback != nullptr) {
            return qtreeview_dropindicatorposition_callback();
        } else {
            return QTreeView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtreeview_setviewportmargins_isbase) {
            qtreeview_setviewportmargins_isbase = false;
            QTreeView::setViewportMargins(left, top, right, bottom);
        } else if (qtreeview_setviewportmargins_callback != nullptr) {
            qtreeview_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QTreeView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtreeview_viewportmargins_isbase) {
            qtreeview_viewportmargins_isbase = false;
            return QTreeView::viewportMargins();
        } else if (qtreeview_viewportmargins_callback != nullptr) {
            return qtreeview_viewportmargins_callback();
        } else {
            return QTreeView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtreeview_drawframe_isbase) {
            qtreeview_drawframe_isbase = false;
            QTreeView::drawFrame(param1);
        } else if (qtreeview_drawframe_callback != nullptr) {
            qtreeview_drawframe_callback(this, param1);
        } else {
            QTreeView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtreeview_updatemicrofocus_isbase) {
            qtreeview_updatemicrofocus_isbase = false;
            QTreeView::updateMicroFocus();
        } else if (qtreeview_updatemicrofocus_callback != nullptr) {
            qtreeview_updatemicrofocus_callback();
        } else {
            QTreeView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtreeview_create_isbase) {
            qtreeview_create_isbase = false;
            QTreeView::create();
        } else if (qtreeview_create_callback != nullptr) {
            qtreeview_create_callback();
        } else {
            QTreeView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtreeview_destroy_isbase) {
            qtreeview_destroy_isbase = false;
            QTreeView::destroy();
        } else if (qtreeview_destroy_callback != nullptr) {
            qtreeview_destroy_callback();
        } else {
            QTreeView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtreeview_focusnextchild_isbase) {
            qtreeview_focusnextchild_isbase = false;
            return QTreeView::focusNextChild();
        } else if (qtreeview_focusnextchild_callback != nullptr) {
            return qtreeview_focusnextchild_callback();
        } else {
            return QTreeView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtreeview_focuspreviouschild_isbase) {
            qtreeview_focuspreviouschild_isbase = false;
            return QTreeView::focusPreviousChild();
        } else if (qtreeview_focuspreviouschild_callback != nullptr) {
            return qtreeview_focuspreviouschild_callback();
        } else {
            return QTreeView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtreeview_sender_isbase) {
            qtreeview_sender_isbase = false;
            return QTreeView::sender();
        } else if (qtreeview_sender_callback != nullptr) {
            return qtreeview_sender_callback();
        } else {
            return QTreeView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtreeview_sendersignalindex_isbase) {
            qtreeview_sendersignalindex_isbase = false;
            return QTreeView::senderSignalIndex();
        } else if (qtreeview_sendersignalindex_callback != nullptr) {
            return qtreeview_sendersignalindex_callback();
        } else {
            return QTreeView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtreeview_receivers_isbase) {
            qtreeview_receivers_isbase = false;
            return QTreeView::receivers(signal);
        } else if (qtreeview_receivers_callback != nullptr) {
            return qtreeview_receivers_callback(this, signal);
        } else {
            return QTreeView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtreeview_issignalconnected_isbase) {
            qtreeview_issignalconnected_isbase = false;
            return QTreeView::isSignalConnected(signal);
        } else if (qtreeview_issignalconnected_callback != nullptr) {
            return qtreeview_issignalconnected_callback(this, signal);
        } else {
            return QTreeView::isSignalConnected(signal);
        }
    }
};

#endif
