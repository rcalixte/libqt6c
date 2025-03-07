#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTITEMVIEW_H
#define SRCC_LIBVIRTUALQABSTRACTITEMVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractItemView so that we can call protected methods
class VirtualQAbstractItemView : public QAbstractItemView {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QAbstractItemView_Metacall_Callback = int (*)(QAbstractItemView*, QMetaObject::Call, int, void**);
    using QAbstractItemView_SetModel_Callback = void (*)(QAbstractItemView*, QAbstractItemModel*);
    using QAbstractItemView_SetSelectionModel_Callback = void (*)(QAbstractItemView*, QItemSelectionModel*);
    using QAbstractItemView_KeyboardSearch_Callback = void (*)(QAbstractItemView*, const QString&);
    using QAbstractItemView_VisualRect_Callback = QRect (*)(const QAbstractItemView*, const QModelIndex&);
    using QAbstractItemView_ScrollTo_Callback = void (*)(QAbstractItemView*, const QModelIndex&, QAbstractItemView::ScrollHint);
    using QAbstractItemView_IndexAt_Callback = QModelIndex (*)(const QAbstractItemView*, const QPoint&);
    using QAbstractItemView_SizeHintForRow_Callback = int (*)(const QAbstractItemView*, int);
    using QAbstractItemView_SizeHintForColumn_Callback = int (*)(const QAbstractItemView*, int);
    using QAbstractItemView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QAbstractItemView*, const QModelIndex&);
    using QAbstractItemView_InputMethodQuery_Callback = QVariant (*)(const QAbstractItemView*, Qt::InputMethodQuery);
    using QAbstractItemView_Reset_Callback = void (*)();
    using QAbstractItemView_SetRootIndex_Callback = void (*)(QAbstractItemView*, const QModelIndex&);
    using QAbstractItemView_DoItemsLayout_Callback = void (*)();
    using QAbstractItemView_SelectAll_Callback = void (*)();
    using QAbstractItemView_DataChanged_Callback = void (*)(QAbstractItemView*, const QModelIndex&, const QModelIndex&, const QList<int>&);
    using QAbstractItemView_RowsInserted_Callback = void (*)(QAbstractItemView*, const QModelIndex&, int, int);
    using QAbstractItemView_RowsAboutToBeRemoved_Callback = void (*)(QAbstractItemView*, const QModelIndex&, int, int);
    using QAbstractItemView_SelectionChanged_Callback = void (*)(QAbstractItemView*, const QItemSelection&, const QItemSelection&);
    using QAbstractItemView_CurrentChanged_Callback = void (*)(QAbstractItemView*, const QModelIndex&, const QModelIndex&);
    using QAbstractItemView_UpdateEditorData_Callback = void (*)();
    using QAbstractItemView_UpdateEditorGeometries_Callback = void (*)();
    using QAbstractItemView_UpdateGeometries_Callback = void (*)();
    using QAbstractItemView_VerticalScrollbarAction_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_HorizontalScrollbarAction_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_VerticalScrollbarValueChanged_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_HorizontalScrollbarValueChanged_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_CloseEditor_Callback = void (*)(QAbstractItemView*, QWidget*, QAbstractItemDelegate::EndEditHint);
    using QAbstractItemView_CommitData_Callback = void (*)(QAbstractItemView*, QWidget*);
    using QAbstractItemView_EditorDestroyed_Callback = void (*)(QAbstractItemView*, QObject*);
    using QAbstractItemView_MoveCursor_Callback = QModelIndex (*)(QAbstractItemView*, int, Qt::KeyboardModifiers);
    using QAbstractItemView_HorizontalOffset_Callback = int (*)();
    using QAbstractItemView_VerticalOffset_Callback = int (*)();
    using QAbstractItemView_IsIndexHidden_Callback = bool (*)(const QAbstractItemView*, const QModelIndex&);
    using QAbstractItemView_SetSelection_Callback = void (*)(QAbstractItemView*, const QRect&, QItemSelectionModel::SelectionFlags);
    using QAbstractItemView_VisualRegionForSelection_Callback = QRegion (*)(const QAbstractItemView*, const QItemSelection&);
    using QAbstractItemView_SelectedIndexes_Callback = QModelIndexList (*)();
    using QAbstractItemView_Edit2_Callback = bool (*)(QAbstractItemView*, const QModelIndex&, QAbstractItemView::EditTrigger, QEvent*);
    using QAbstractItemView_SelectionCommand_Callback = QItemSelectionModel::SelectionFlags (*)(const QAbstractItemView*, const QModelIndex&, const QEvent*);
    using QAbstractItemView_StartDrag_Callback = void (*)(QAbstractItemView*, Qt::DropActions);
    using QAbstractItemView_InitViewItemOption_Callback = void (*)(const QAbstractItemView*, QStyleOptionViewItem*);
    using QAbstractItemView_FocusNextPrevChild_Callback = bool (*)(QAbstractItemView*, bool);
    using QAbstractItemView_Event_Callback = bool (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_ViewportEvent_Callback = bool (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_MousePressEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
    using QAbstractItemView_MouseMoveEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
    using QAbstractItemView_MouseReleaseEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
    using QAbstractItemView_MouseDoubleClickEvent_Callback = void (*)(QAbstractItemView*, QMouseEvent*);
    using QAbstractItemView_DragEnterEvent_Callback = void (*)(QAbstractItemView*, QDragEnterEvent*);
    using QAbstractItemView_DragMoveEvent_Callback = void (*)(QAbstractItemView*, QDragMoveEvent*);
    using QAbstractItemView_DragLeaveEvent_Callback = void (*)(QAbstractItemView*, QDragLeaveEvent*);
    using QAbstractItemView_DropEvent_Callback = void (*)(QAbstractItemView*, QDropEvent*);
    using QAbstractItemView_FocusInEvent_Callback = void (*)(QAbstractItemView*, QFocusEvent*);
    using QAbstractItemView_FocusOutEvent_Callback = void (*)(QAbstractItemView*, QFocusEvent*);
    using QAbstractItemView_KeyPressEvent_Callback = void (*)(QAbstractItemView*, QKeyEvent*);
    using QAbstractItemView_ResizeEvent_Callback = void (*)(QAbstractItemView*, QResizeEvent*);
    using QAbstractItemView_TimerEvent_Callback = void (*)(QAbstractItemView*, QTimerEvent*);
    using QAbstractItemView_InputMethodEvent_Callback = void (*)(QAbstractItemView*, QInputMethodEvent*);
    using QAbstractItemView_EventFilter_Callback = bool (*)(QAbstractItemView*, QObject*, QEvent*);
    using QAbstractItemView_ViewportSizeHint_Callback = QSize (*)();
    using QAbstractItemView_MinimumSizeHint_Callback = QSize (*)();
    using QAbstractItemView_SizeHint_Callback = QSize (*)();
    using QAbstractItemView_SetupViewport_Callback = void (*)(QAbstractItemView*, QWidget*);
    using QAbstractItemView_PaintEvent_Callback = void (*)(QAbstractItemView*, QPaintEvent*);
    using QAbstractItemView_WheelEvent_Callback = void (*)(QAbstractItemView*, QWheelEvent*);
    using QAbstractItemView_ContextMenuEvent_Callback = void (*)(QAbstractItemView*, QContextMenuEvent*);
    using QAbstractItemView_ScrollContentsBy_Callback = void (*)(QAbstractItemView*, int, int);
    using QAbstractItemView_ChangeEvent_Callback = void (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_InitStyleOption_Callback = void (*)(const QAbstractItemView*, QStyleOptionFrame*);
    using QAbstractItemView_DevType_Callback = int (*)();
    using QAbstractItemView_SetVisible_Callback = void (*)(QAbstractItemView*, bool);
    using QAbstractItemView_HeightForWidth_Callback = int (*)(const QAbstractItemView*, int);
    using QAbstractItemView_HasHeightForWidth_Callback = bool (*)();
    using QAbstractItemView_PaintEngine_Callback = QPaintEngine* (*)();
    using QAbstractItemView_KeyReleaseEvent_Callback = void (*)(QAbstractItemView*, QKeyEvent*);
    using QAbstractItemView_EnterEvent_Callback = void (*)(QAbstractItemView*, QEnterEvent*);
    using QAbstractItemView_LeaveEvent_Callback = void (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_MoveEvent_Callback = void (*)(QAbstractItemView*, QMoveEvent*);
    using QAbstractItemView_CloseEvent_Callback = void (*)(QAbstractItemView*, QCloseEvent*);
    using QAbstractItemView_TabletEvent_Callback = void (*)(QAbstractItemView*, QTabletEvent*);
    using QAbstractItemView_ActionEvent_Callback = void (*)(QAbstractItemView*, QActionEvent*);
    using QAbstractItemView_ShowEvent_Callback = void (*)(QAbstractItemView*, QShowEvent*);
    using QAbstractItemView_HideEvent_Callback = void (*)(QAbstractItemView*, QHideEvent*);
    using QAbstractItemView_NativeEvent_Callback = bool (*)(QAbstractItemView*, const QByteArray&, void*, qintptr*);
    using QAbstractItemView_Metric_Callback = int (*)(const QAbstractItemView*, QPaintDevice::PaintDeviceMetric);
    using QAbstractItemView_InitPainter_Callback = void (*)(const QAbstractItemView*, QPainter*);
    using QAbstractItemView_Redirected_Callback = QPaintDevice* (*)(const QAbstractItemView*, QPoint*);
    using QAbstractItemView_SharedPainter_Callback = QPainter* (*)();
    using QAbstractItemView_ChildEvent_Callback = void (*)(QAbstractItemView*, QChildEvent*);
    using QAbstractItemView_CustomEvent_Callback = void (*)(QAbstractItemView*, QEvent*);
    using QAbstractItemView_ConnectNotify_Callback = void (*)(QAbstractItemView*, const QMetaMethod&);
    using QAbstractItemView_DisconnectNotify_Callback = void (*)(QAbstractItemView*, const QMetaMethod&);
    using QAbstractItemView_State_Callback = QAbstractItemView::State (*)();
    using QAbstractItemView_SetState_Callback = void (*)(QAbstractItemView*, int);
    using QAbstractItemView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QAbstractItemView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QAbstractItemView_SetDirtyRegion_Callback = void (*)(QAbstractItemView*, const QRegion&);
    using QAbstractItemView_ScrollDirtyRegion_Callback = void (*)(QAbstractItemView*, int, int);
    using QAbstractItemView_DirtyRegionOffset_Callback = QPoint (*)();
    using QAbstractItemView_StartAutoScroll_Callback = void (*)();
    using QAbstractItemView_StopAutoScroll_Callback = void (*)();
    using QAbstractItemView_DoAutoScroll_Callback = void (*)();
    using QAbstractItemView_DropIndicatorPosition_Callback = QAbstractItemView::DropIndicatorPosition (*)();
    using QAbstractItemView_SetViewportMargins_Callback = void (*)(QAbstractItemView*, int, int, int, int);
    using QAbstractItemView_ViewportMargins_Callback = QMargins (*)();
    using QAbstractItemView_DrawFrame_Callback = void (*)(QAbstractItemView*, QPainter*);
    using QAbstractItemView_UpdateMicroFocus_Callback = void (*)();
    using QAbstractItemView_Create_Callback = void (*)();
    using QAbstractItemView_Destroy_Callback = void (*)();
    using QAbstractItemView_FocusNextChild_Callback = bool (*)();
    using QAbstractItemView_FocusPreviousChild_Callback = bool (*)();
    using QAbstractItemView_Sender_Callback = QObject* (*)();
    using QAbstractItemView_SenderSignalIndex_Callback = int (*)();
    using QAbstractItemView_Receivers_Callback = int (*)(const QAbstractItemView*, const char*);
    using QAbstractItemView_IsSignalConnected_Callback = bool (*)(const QAbstractItemView*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAbstractItemView_Metacall_Callback qabstractitemview_metacall_callback = nullptr;
    QAbstractItemView_SetModel_Callback qabstractitemview_setmodel_callback = nullptr;
    QAbstractItemView_SetSelectionModel_Callback qabstractitemview_setselectionmodel_callback = nullptr;
    QAbstractItemView_KeyboardSearch_Callback qabstractitemview_keyboardsearch_callback = nullptr;
    QAbstractItemView_VisualRect_Callback qabstractitemview_visualrect_callback = nullptr;
    QAbstractItemView_ScrollTo_Callback qabstractitemview_scrollto_callback = nullptr;
    QAbstractItemView_IndexAt_Callback qabstractitemview_indexat_callback = nullptr;
    QAbstractItemView_SizeHintForRow_Callback qabstractitemview_sizehintforrow_callback = nullptr;
    QAbstractItemView_SizeHintForColumn_Callback qabstractitemview_sizehintforcolumn_callback = nullptr;
    QAbstractItemView_ItemDelegateForIndex_Callback qabstractitemview_itemdelegateforindex_callback = nullptr;
    QAbstractItemView_InputMethodQuery_Callback qabstractitemview_inputmethodquery_callback = nullptr;
    QAbstractItemView_Reset_Callback qabstractitemview_reset_callback = nullptr;
    QAbstractItemView_SetRootIndex_Callback qabstractitemview_setrootindex_callback = nullptr;
    QAbstractItemView_DoItemsLayout_Callback qabstractitemview_doitemslayout_callback = nullptr;
    QAbstractItemView_SelectAll_Callback qabstractitemview_selectall_callback = nullptr;
    QAbstractItemView_DataChanged_Callback qabstractitemview_datachanged_callback = nullptr;
    QAbstractItemView_RowsInserted_Callback qabstractitemview_rowsinserted_callback = nullptr;
    QAbstractItemView_RowsAboutToBeRemoved_Callback qabstractitemview_rowsabouttoberemoved_callback = nullptr;
    QAbstractItemView_SelectionChanged_Callback qabstractitemview_selectionchanged_callback = nullptr;
    QAbstractItemView_CurrentChanged_Callback qabstractitemview_currentchanged_callback = nullptr;
    QAbstractItemView_UpdateEditorData_Callback qabstractitemview_updateeditordata_callback = nullptr;
    QAbstractItemView_UpdateEditorGeometries_Callback qabstractitemview_updateeditorgeometries_callback = nullptr;
    QAbstractItemView_UpdateGeometries_Callback qabstractitemview_updategeometries_callback = nullptr;
    QAbstractItemView_VerticalScrollbarAction_Callback qabstractitemview_verticalscrollbaraction_callback = nullptr;
    QAbstractItemView_HorizontalScrollbarAction_Callback qabstractitemview_horizontalscrollbaraction_callback = nullptr;
    QAbstractItemView_VerticalScrollbarValueChanged_Callback qabstractitemview_verticalscrollbarvaluechanged_callback = nullptr;
    QAbstractItemView_HorizontalScrollbarValueChanged_Callback qabstractitemview_horizontalscrollbarvaluechanged_callback = nullptr;
    QAbstractItemView_CloseEditor_Callback qabstractitemview_closeeditor_callback = nullptr;
    QAbstractItemView_CommitData_Callback qabstractitemview_commitdata_callback = nullptr;
    QAbstractItemView_EditorDestroyed_Callback qabstractitemview_editordestroyed_callback = nullptr;
    QAbstractItemView_MoveCursor_Callback qabstractitemview_movecursor_callback = nullptr;
    QAbstractItemView_HorizontalOffset_Callback qabstractitemview_horizontaloffset_callback = nullptr;
    QAbstractItemView_VerticalOffset_Callback qabstractitemview_verticaloffset_callback = nullptr;
    QAbstractItemView_IsIndexHidden_Callback qabstractitemview_isindexhidden_callback = nullptr;
    QAbstractItemView_SetSelection_Callback qabstractitemview_setselection_callback = nullptr;
    QAbstractItemView_VisualRegionForSelection_Callback qabstractitemview_visualregionforselection_callback = nullptr;
    QAbstractItemView_SelectedIndexes_Callback qabstractitemview_selectedindexes_callback = nullptr;
    QAbstractItemView_Edit2_Callback qabstractitemview_edit2_callback = nullptr;
    QAbstractItemView_SelectionCommand_Callback qabstractitemview_selectioncommand_callback = nullptr;
    QAbstractItemView_StartDrag_Callback qabstractitemview_startdrag_callback = nullptr;
    QAbstractItemView_InitViewItemOption_Callback qabstractitemview_initviewitemoption_callback = nullptr;
    QAbstractItemView_FocusNextPrevChild_Callback qabstractitemview_focusnextprevchild_callback = nullptr;
    QAbstractItemView_Event_Callback qabstractitemview_event_callback = nullptr;
    QAbstractItemView_ViewportEvent_Callback qabstractitemview_viewportevent_callback = nullptr;
    QAbstractItemView_MousePressEvent_Callback qabstractitemview_mousepressevent_callback = nullptr;
    QAbstractItemView_MouseMoveEvent_Callback qabstractitemview_mousemoveevent_callback = nullptr;
    QAbstractItemView_MouseReleaseEvent_Callback qabstractitemview_mousereleaseevent_callback = nullptr;
    QAbstractItemView_MouseDoubleClickEvent_Callback qabstractitemview_mousedoubleclickevent_callback = nullptr;
    QAbstractItemView_DragEnterEvent_Callback qabstractitemview_dragenterevent_callback = nullptr;
    QAbstractItemView_DragMoveEvent_Callback qabstractitemview_dragmoveevent_callback = nullptr;
    QAbstractItemView_DragLeaveEvent_Callback qabstractitemview_dragleaveevent_callback = nullptr;
    QAbstractItemView_DropEvent_Callback qabstractitemview_dropevent_callback = nullptr;
    QAbstractItemView_FocusInEvent_Callback qabstractitemview_focusinevent_callback = nullptr;
    QAbstractItemView_FocusOutEvent_Callback qabstractitemview_focusoutevent_callback = nullptr;
    QAbstractItemView_KeyPressEvent_Callback qabstractitemview_keypressevent_callback = nullptr;
    QAbstractItemView_ResizeEvent_Callback qabstractitemview_resizeevent_callback = nullptr;
    QAbstractItemView_TimerEvent_Callback qabstractitemview_timerevent_callback = nullptr;
    QAbstractItemView_InputMethodEvent_Callback qabstractitemview_inputmethodevent_callback = nullptr;
    QAbstractItemView_EventFilter_Callback qabstractitemview_eventfilter_callback = nullptr;
    QAbstractItemView_ViewportSizeHint_Callback qabstractitemview_viewportsizehint_callback = nullptr;
    QAbstractItemView_MinimumSizeHint_Callback qabstractitemview_minimumsizehint_callback = nullptr;
    QAbstractItemView_SizeHint_Callback qabstractitemview_sizehint_callback = nullptr;
    QAbstractItemView_SetupViewport_Callback qabstractitemview_setupviewport_callback = nullptr;
    QAbstractItemView_PaintEvent_Callback qabstractitemview_paintevent_callback = nullptr;
    QAbstractItemView_WheelEvent_Callback qabstractitemview_wheelevent_callback = nullptr;
    QAbstractItemView_ContextMenuEvent_Callback qabstractitemview_contextmenuevent_callback = nullptr;
    QAbstractItemView_ScrollContentsBy_Callback qabstractitemview_scrollcontentsby_callback = nullptr;
    QAbstractItemView_ChangeEvent_Callback qabstractitemview_changeevent_callback = nullptr;
    QAbstractItemView_InitStyleOption_Callback qabstractitemview_initstyleoption_callback = nullptr;
    QAbstractItemView_DevType_Callback qabstractitemview_devtype_callback = nullptr;
    QAbstractItemView_SetVisible_Callback qabstractitemview_setvisible_callback = nullptr;
    QAbstractItemView_HeightForWidth_Callback qabstractitemview_heightforwidth_callback = nullptr;
    QAbstractItemView_HasHeightForWidth_Callback qabstractitemview_hasheightforwidth_callback = nullptr;
    QAbstractItemView_PaintEngine_Callback qabstractitemview_paintengine_callback = nullptr;
    QAbstractItemView_KeyReleaseEvent_Callback qabstractitemview_keyreleaseevent_callback = nullptr;
    QAbstractItemView_EnterEvent_Callback qabstractitemview_enterevent_callback = nullptr;
    QAbstractItemView_LeaveEvent_Callback qabstractitemview_leaveevent_callback = nullptr;
    QAbstractItemView_MoveEvent_Callback qabstractitemview_moveevent_callback = nullptr;
    QAbstractItemView_CloseEvent_Callback qabstractitemview_closeevent_callback = nullptr;
    QAbstractItemView_TabletEvent_Callback qabstractitemview_tabletevent_callback = nullptr;
    QAbstractItemView_ActionEvent_Callback qabstractitemview_actionevent_callback = nullptr;
    QAbstractItemView_ShowEvent_Callback qabstractitemview_showevent_callback = nullptr;
    QAbstractItemView_HideEvent_Callback qabstractitemview_hideevent_callback = nullptr;
    QAbstractItemView_NativeEvent_Callback qabstractitemview_nativeevent_callback = nullptr;
    QAbstractItemView_Metric_Callback qabstractitemview_metric_callback = nullptr;
    QAbstractItemView_InitPainter_Callback qabstractitemview_initpainter_callback = nullptr;
    QAbstractItemView_Redirected_Callback qabstractitemview_redirected_callback = nullptr;
    QAbstractItemView_SharedPainter_Callback qabstractitemview_sharedpainter_callback = nullptr;
    QAbstractItemView_ChildEvent_Callback qabstractitemview_childevent_callback = nullptr;
    QAbstractItemView_CustomEvent_Callback qabstractitemview_customevent_callback = nullptr;
    QAbstractItemView_ConnectNotify_Callback qabstractitemview_connectnotify_callback = nullptr;
    QAbstractItemView_DisconnectNotify_Callback qabstractitemview_disconnectnotify_callback = nullptr;
    QAbstractItemView_State_Callback qabstractitemview_state_callback = nullptr;
    QAbstractItemView_SetState_Callback qabstractitemview_setstate_callback = nullptr;
    QAbstractItemView_ScheduleDelayedItemsLayout_Callback qabstractitemview_scheduledelayeditemslayout_callback = nullptr;
    QAbstractItemView_ExecuteDelayedItemsLayout_Callback qabstractitemview_executedelayeditemslayout_callback = nullptr;
    QAbstractItemView_SetDirtyRegion_Callback qabstractitemview_setdirtyregion_callback = nullptr;
    QAbstractItemView_ScrollDirtyRegion_Callback qabstractitemview_scrolldirtyregion_callback = nullptr;
    QAbstractItemView_DirtyRegionOffset_Callback qabstractitemview_dirtyregionoffset_callback = nullptr;
    QAbstractItemView_StartAutoScroll_Callback qabstractitemview_startautoscroll_callback = nullptr;
    QAbstractItemView_StopAutoScroll_Callback qabstractitemview_stopautoscroll_callback = nullptr;
    QAbstractItemView_DoAutoScroll_Callback qabstractitemview_doautoscroll_callback = nullptr;
    QAbstractItemView_DropIndicatorPosition_Callback qabstractitemview_dropindicatorposition_callback = nullptr;
    QAbstractItemView_SetViewportMargins_Callback qabstractitemview_setviewportmargins_callback = nullptr;
    QAbstractItemView_ViewportMargins_Callback qabstractitemview_viewportmargins_callback = nullptr;
    QAbstractItemView_DrawFrame_Callback qabstractitemview_drawframe_callback = nullptr;
    QAbstractItemView_UpdateMicroFocus_Callback qabstractitemview_updatemicrofocus_callback = nullptr;
    QAbstractItemView_Create_Callback qabstractitemview_create_callback = nullptr;
    QAbstractItemView_Destroy_Callback qabstractitemview_destroy_callback = nullptr;
    QAbstractItemView_FocusNextChild_Callback qabstractitemview_focusnextchild_callback = nullptr;
    QAbstractItemView_FocusPreviousChild_Callback qabstractitemview_focuspreviouschild_callback = nullptr;
    QAbstractItemView_Sender_Callback qabstractitemview_sender_callback = nullptr;
    QAbstractItemView_SenderSignalIndex_Callback qabstractitemview_sendersignalindex_callback = nullptr;
    QAbstractItemView_Receivers_Callback qabstractitemview_receivers_callback = nullptr;
    QAbstractItemView_IsSignalConnected_Callback qabstractitemview_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractitemview_metacall_isbase = false;
    mutable bool qabstractitemview_setmodel_isbase = false;
    mutable bool qabstractitemview_setselectionmodel_isbase = false;
    mutable bool qabstractitemview_keyboardsearch_isbase = false;
    mutable bool qabstractitemview_visualrect_isbase = false;
    mutable bool qabstractitemview_scrollto_isbase = false;
    mutable bool qabstractitemview_indexat_isbase = false;
    mutable bool qabstractitemview_sizehintforrow_isbase = false;
    mutable bool qabstractitemview_sizehintforcolumn_isbase = false;
    mutable bool qabstractitemview_itemdelegateforindex_isbase = false;
    mutable bool qabstractitemview_inputmethodquery_isbase = false;
    mutable bool qabstractitemview_reset_isbase = false;
    mutable bool qabstractitemview_setrootindex_isbase = false;
    mutable bool qabstractitemview_doitemslayout_isbase = false;
    mutable bool qabstractitemview_selectall_isbase = false;
    mutable bool qabstractitemview_datachanged_isbase = false;
    mutable bool qabstractitemview_rowsinserted_isbase = false;
    mutable bool qabstractitemview_rowsabouttoberemoved_isbase = false;
    mutable bool qabstractitemview_selectionchanged_isbase = false;
    mutable bool qabstractitemview_currentchanged_isbase = false;
    mutable bool qabstractitemview_updateeditordata_isbase = false;
    mutable bool qabstractitemview_updateeditorgeometries_isbase = false;
    mutable bool qabstractitemview_updategeometries_isbase = false;
    mutable bool qabstractitemview_verticalscrollbaraction_isbase = false;
    mutable bool qabstractitemview_horizontalscrollbaraction_isbase = false;
    mutable bool qabstractitemview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qabstractitemview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qabstractitemview_closeeditor_isbase = false;
    mutable bool qabstractitemview_commitdata_isbase = false;
    mutable bool qabstractitemview_editordestroyed_isbase = false;
    mutable bool qabstractitemview_movecursor_isbase = false;
    mutable bool qabstractitemview_horizontaloffset_isbase = false;
    mutable bool qabstractitemview_verticaloffset_isbase = false;
    mutable bool qabstractitemview_isindexhidden_isbase = false;
    mutable bool qabstractitemview_setselection_isbase = false;
    mutable bool qabstractitemview_visualregionforselection_isbase = false;
    mutable bool qabstractitemview_selectedindexes_isbase = false;
    mutable bool qabstractitemview_edit2_isbase = false;
    mutable bool qabstractitemview_selectioncommand_isbase = false;
    mutable bool qabstractitemview_startdrag_isbase = false;
    mutable bool qabstractitemview_initviewitemoption_isbase = false;
    mutable bool qabstractitemview_focusnextprevchild_isbase = false;
    mutable bool qabstractitemview_event_isbase = false;
    mutable bool qabstractitemview_viewportevent_isbase = false;
    mutable bool qabstractitemview_mousepressevent_isbase = false;
    mutable bool qabstractitemview_mousemoveevent_isbase = false;
    mutable bool qabstractitemview_mousereleaseevent_isbase = false;
    mutable bool qabstractitemview_mousedoubleclickevent_isbase = false;
    mutable bool qabstractitemview_dragenterevent_isbase = false;
    mutable bool qabstractitemview_dragmoveevent_isbase = false;
    mutable bool qabstractitemview_dragleaveevent_isbase = false;
    mutable bool qabstractitemview_dropevent_isbase = false;
    mutable bool qabstractitemview_focusinevent_isbase = false;
    mutable bool qabstractitemview_focusoutevent_isbase = false;
    mutable bool qabstractitemview_keypressevent_isbase = false;
    mutable bool qabstractitemview_resizeevent_isbase = false;
    mutable bool qabstractitemview_timerevent_isbase = false;
    mutable bool qabstractitemview_inputmethodevent_isbase = false;
    mutable bool qabstractitemview_eventfilter_isbase = false;
    mutable bool qabstractitemview_viewportsizehint_isbase = false;
    mutable bool qabstractitemview_minimumsizehint_isbase = false;
    mutable bool qabstractitemview_sizehint_isbase = false;
    mutable bool qabstractitemview_setupviewport_isbase = false;
    mutable bool qabstractitemview_paintevent_isbase = false;
    mutable bool qabstractitemview_wheelevent_isbase = false;
    mutable bool qabstractitemview_contextmenuevent_isbase = false;
    mutable bool qabstractitemview_scrollcontentsby_isbase = false;
    mutable bool qabstractitemview_changeevent_isbase = false;
    mutable bool qabstractitemview_initstyleoption_isbase = false;
    mutable bool qabstractitemview_devtype_isbase = false;
    mutable bool qabstractitemview_setvisible_isbase = false;
    mutable bool qabstractitemview_heightforwidth_isbase = false;
    mutable bool qabstractitemview_hasheightforwidth_isbase = false;
    mutable bool qabstractitemview_paintengine_isbase = false;
    mutable bool qabstractitemview_keyreleaseevent_isbase = false;
    mutable bool qabstractitemview_enterevent_isbase = false;
    mutable bool qabstractitemview_leaveevent_isbase = false;
    mutable bool qabstractitemview_moveevent_isbase = false;
    mutable bool qabstractitemview_closeevent_isbase = false;
    mutable bool qabstractitemview_tabletevent_isbase = false;
    mutable bool qabstractitemview_actionevent_isbase = false;
    mutable bool qabstractitemview_showevent_isbase = false;
    mutable bool qabstractitemview_hideevent_isbase = false;
    mutable bool qabstractitemview_nativeevent_isbase = false;
    mutable bool qabstractitemview_metric_isbase = false;
    mutable bool qabstractitemview_initpainter_isbase = false;
    mutable bool qabstractitemview_redirected_isbase = false;
    mutable bool qabstractitemview_sharedpainter_isbase = false;
    mutable bool qabstractitemview_childevent_isbase = false;
    mutable bool qabstractitemview_customevent_isbase = false;
    mutable bool qabstractitemview_connectnotify_isbase = false;
    mutable bool qabstractitemview_disconnectnotify_isbase = false;
    mutable bool qabstractitemview_state_isbase = false;
    mutable bool qabstractitemview_setstate_isbase = false;
    mutable bool qabstractitemview_scheduledelayeditemslayout_isbase = false;
    mutable bool qabstractitemview_executedelayeditemslayout_isbase = false;
    mutable bool qabstractitemview_setdirtyregion_isbase = false;
    mutable bool qabstractitemview_scrolldirtyregion_isbase = false;
    mutable bool qabstractitemview_dirtyregionoffset_isbase = false;
    mutable bool qabstractitemview_startautoscroll_isbase = false;
    mutable bool qabstractitemview_stopautoscroll_isbase = false;
    mutable bool qabstractitemview_doautoscroll_isbase = false;
    mutable bool qabstractitemview_dropindicatorposition_isbase = false;
    mutable bool qabstractitemview_setviewportmargins_isbase = false;
    mutable bool qabstractitemview_viewportmargins_isbase = false;
    mutable bool qabstractitemview_drawframe_isbase = false;
    mutable bool qabstractitemview_updatemicrofocus_isbase = false;
    mutable bool qabstractitemview_create_isbase = false;
    mutable bool qabstractitemview_destroy_isbase = false;
    mutable bool qabstractitemview_focusnextchild_isbase = false;
    mutable bool qabstractitemview_focuspreviouschild_isbase = false;
    mutable bool qabstractitemview_sender_isbase = false;
    mutable bool qabstractitemview_sendersignalindex_isbase = false;
    mutable bool qabstractitemview_receivers_isbase = false;
    mutable bool qabstractitemview_issignalconnected_isbase = false;

  public:
    VirtualQAbstractItemView(QWidget* parent) : QAbstractItemView(parent){};
    VirtualQAbstractItemView() : QAbstractItemView(){};

    ~VirtualQAbstractItemView() {
        qabstractitemview_metacall_callback = nullptr;
        qabstractitemview_setmodel_callback = nullptr;
        qabstractitemview_setselectionmodel_callback = nullptr;
        qabstractitemview_keyboardsearch_callback = nullptr;
        qabstractitemview_visualrect_callback = nullptr;
        qabstractitemview_scrollto_callback = nullptr;
        qabstractitemview_indexat_callback = nullptr;
        qabstractitemview_sizehintforrow_callback = nullptr;
        qabstractitemview_sizehintforcolumn_callback = nullptr;
        qabstractitemview_itemdelegateforindex_callback = nullptr;
        qabstractitemview_inputmethodquery_callback = nullptr;
        qabstractitemview_reset_callback = nullptr;
        qabstractitemview_setrootindex_callback = nullptr;
        qabstractitemview_doitemslayout_callback = nullptr;
        qabstractitemview_selectall_callback = nullptr;
        qabstractitemview_datachanged_callback = nullptr;
        qabstractitemview_rowsinserted_callback = nullptr;
        qabstractitemview_rowsabouttoberemoved_callback = nullptr;
        qabstractitemview_selectionchanged_callback = nullptr;
        qabstractitemview_currentchanged_callback = nullptr;
        qabstractitemview_updateeditordata_callback = nullptr;
        qabstractitemview_updateeditorgeometries_callback = nullptr;
        qabstractitemview_updategeometries_callback = nullptr;
        qabstractitemview_verticalscrollbaraction_callback = nullptr;
        qabstractitemview_horizontalscrollbaraction_callback = nullptr;
        qabstractitemview_verticalscrollbarvaluechanged_callback = nullptr;
        qabstractitemview_horizontalscrollbarvaluechanged_callback = nullptr;
        qabstractitemview_closeeditor_callback = nullptr;
        qabstractitemview_commitdata_callback = nullptr;
        qabstractitemview_editordestroyed_callback = nullptr;
        qabstractitemview_movecursor_callback = nullptr;
        qabstractitemview_horizontaloffset_callback = nullptr;
        qabstractitemview_verticaloffset_callback = nullptr;
        qabstractitemview_isindexhidden_callback = nullptr;
        qabstractitemview_setselection_callback = nullptr;
        qabstractitemview_visualregionforselection_callback = nullptr;
        qabstractitemview_selectedindexes_callback = nullptr;
        qabstractitemview_edit2_callback = nullptr;
        qabstractitemview_selectioncommand_callback = nullptr;
        qabstractitemview_startdrag_callback = nullptr;
        qabstractitemview_initviewitemoption_callback = nullptr;
        qabstractitemview_focusnextprevchild_callback = nullptr;
        qabstractitemview_event_callback = nullptr;
        qabstractitemview_viewportevent_callback = nullptr;
        qabstractitemview_mousepressevent_callback = nullptr;
        qabstractitemview_mousemoveevent_callback = nullptr;
        qabstractitemview_mousereleaseevent_callback = nullptr;
        qabstractitemview_mousedoubleclickevent_callback = nullptr;
        qabstractitemview_dragenterevent_callback = nullptr;
        qabstractitemview_dragmoveevent_callback = nullptr;
        qabstractitemview_dragleaveevent_callback = nullptr;
        qabstractitemview_dropevent_callback = nullptr;
        qabstractitemview_focusinevent_callback = nullptr;
        qabstractitemview_focusoutevent_callback = nullptr;
        qabstractitemview_keypressevent_callback = nullptr;
        qabstractitemview_resizeevent_callback = nullptr;
        qabstractitemview_timerevent_callback = nullptr;
        qabstractitemview_inputmethodevent_callback = nullptr;
        qabstractitemview_eventfilter_callback = nullptr;
        qabstractitemview_viewportsizehint_callback = nullptr;
        qabstractitemview_minimumsizehint_callback = nullptr;
        qabstractitemview_sizehint_callback = nullptr;
        qabstractitemview_setupviewport_callback = nullptr;
        qabstractitemview_paintevent_callback = nullptr;
        qabstractitemview_wheelevent_callback = nullptr;
        qabstractitemview_contextmenuevent_callback = nullptr;
        qabstractitemview_scrollcontentsby_callback = nullptr;
        qabstractitemview_changeevent_callback = nullptr;
        qabstractitemview_initstyleoption_callback = nullptr;
        qabstractitemview_devtype_callback = nullptr;
        qabstractitemview_setvisible_callback = nullptr;
        qabstractitemview_heightforwidth_callback = nullptr;
        qabstractitemview_hasheightforwidth_callback = nullptr;
        qabstractitemview_paintengine_callback = nullptr;
        qabstractitemview_keyreleaseevent_callback = nullptr;
        qabstractitemview_enterevent_callback = nullptr;
        qabstractitemview_leaveevent_callback = nullptr;
        qabstractitemview_moveevent_callback = nullptr;
        qabstractitemview_closeevent_callback = nullptr;
        qabstractitemview_tabletevent_callback = nullptr;
        qabstractitemview_actionevent_callback = nullptr;
        qabstractitemview_showevent_callback = nullptr;
        qabstractitemview_hideevent_callback = nullptr;
        qabstractitemview_nativeevent_callback = nullptr;
        qabstractitemview_metric_callback = nullptr;
        qabstractitemview_initpainter_callback = nullptr;
        qabstractitemview_redirected_callback = nullptr;
        qabstractitemview_sharedpainter_callback = nullptr;
        qabstractitemview_childevent_callback = nullptr;
        qabstractitemview_customevent_callback = nullptr;
        qabstractitemview_connectnotify_callback = nullptr;
        qabstractitemview_disconnectnotify_callback = nullptr;
        qabstractitemview_state_callback = nullptr;
        qabstractitemview_setstate_callback = nullptr;
        qabstractitemview_scheduledelayeditemslayout_callback = nullptr;
        qabstractitemview_executedelayeditemslayout_callback = nullptr;
        qabstractitemview_setdirtyregion_callback = nullptr;
        qabstractitemview_scrolldirtyregion_callback = nullptr;
        qabstractitemview_dirtyregionoffset_callback = nullptr;
        qabstractitemview_startautoscroll_callback = nullptr;
        qabstractitemview_stopautoscroll_callback = nullptr;
        qabstractitemview_doautoscroll_callback = nullptr;
        qabstractitemview_dropindicatorposition_callback = nullptr;
        qabstractitemview_setviewportmargins_callback = nullptr;
        qabstractitemview_viewportmargins_callback = nullptr;
        qabstractitemview_drawframe_callback = nullptr;
        qabstractitemview_updatemicrofocus_callback = nullptr;
        qabstractitemview_create_callback = nullptr;
        qabstractitemview_destroy_callback = nullptr;
        qabstractitemview_focusnextchild_callback = nullptr;
        qabstractitemview_focuspreviouschild_callback = nullptr;
        qabstractitemview_sender_callback = nullptr;
        qabstractitemview_sendersignalindex_callback = nullptr;
        qabstractitemview_receivers_callback = nullptr;
        qabstractitemview_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAbstractItemView_Metacall_Callback(QAbstractItemView_Metacall_Callback cb) { qabstractitemview_metacall_callback = cb; }
    void setQAbstractItemView_SetModel_Callback(QAbstractItemView_SetModel_Callback cb) { qabstractitemview_setmodel_callback = cb; }
    void setQAbstractItemView_SetSelectionModel_Callback(QAbstractItemView_SetSelectionModel_Callback cb) { qabstractitemview_setselectionmodel_callback = cb; }
    void setQAbstractItemView_KeyboardSearch_Callback(QAbstractItemView_KeyboardSearch_Callback cb) { qabstractitemview_keyboardsearch_callback = cb; }
    void setQAbstractItemView_VisualRect_Callback(QAbstractItemView_VisualRect_Callback cb) { qabstractitemview_visualrect_callback = cb; }
    void setQAbstractItemView_ScrollTo_Callback(QAbstractItemView_ScrollTo_Callback cb) { qabstractitemview_scrollto_callback = cb; }
    void setQAbstractItemView_IndexAt_Callback(QAbstractItemView_IndexAt_Callback cb) { qabstractitemview_indexat_callback = cb; }
    void setQAbstractItemView_SizeHintForRow_Callback(QAbstractItemView_SizeHintForRow_Callback cb) { qabstractitemview_sizehintforrow_callback = cb; }
    void setQAbstractItemView_SizeHintForColumn_Callback(QAbstractItemView_SizeHintForColumn_Callback cb) { qabstractitemview_sizehintforcolumn_callback = cb; }
    void setQAbstractItemView_ItemDelegateForIndex_Callback(QAbstractItemView_ItemDelegateForIndex_Callback cb) { qabstractitemview_itemdelegateforindex_callback = cb; }
    void setQAbstractItemView_InputMethodQuery_Callback(QAbstractItemView_InputMethodQuery_Callback cb) { qabstractitemview_inputmethodquery_callback = cb; }
    void setQAbstractItemView_Reset_Callback(QAbstractItemView_Reset_Callback cb) { qabstractitemview_reset_callback = cb; }
    void setQAbstractItemView_SetRootIndex_Callback(QAbstractItemView_SetRootIndex_Callback cb) { qabstractitemview_setrootindex_callback = cb; }
    void setQAbstractItemView_DoItemsLayout_Callback(QAbstractItemView_DoItemsLayout_Callback cb) { qabstractitemview_doitemslayout_callback = cb; }
    void setQAbstractItemView_SelectAll_Callback(QAbstractItemView_SelectAll_Callback cb) { qabstractitemview_selectall_callback = cb; }
    void setQAbstractItemView_DataChanged_Callback(QAbstractItemView_DataChanged_Callback cb) { qabstractitemview_datachanged_callback = cb; }
    void setQAbstractItemView_RowsInserted_Callback(QAbstractItemView_RowsInserted_Callback cb) { qabstractitemview_rowsinserted_callback = cb; }
    void setQAbstractItemView_RowsAboutToBeRemoved_Callback(QAbstractItemView_RowsAboutToBeRemoved_Callback cb) { qabstractitemview_rowsabouttoberemoved_callback = cb; }
    void setQAbstractItemView_SelectionChanged_Callback(QAbstractItemView_SelectionChanged_Callback cb) { qabstractitemview_selectionchanged_callback = cb; }
    void setQAbstractItemView_CurrentChanged_Callback(QAbstractItemView_CurrentChanged_Callback cb) { qabstractitemview_currentchanged_callback = cb; }
    void setQAbstractItemView_UpdateEditorData_Callback(QAbstractItemView_UpdateEditorData_Callback cb) { qabstractitemview_updateeditordata_callback = cb; }
    void setQAbstractItemView_UpdateEditorGeometries_Callback(QAbstractItemView_UpdateEditorGeometries_Callback cb) { qabstractitemview_updateeditorgeometries_callback = cb; }
    void setQAbstractItemView_UpdateGeometries_Callback(QAbstractItemView_UpdateGeometries_Callback cb) { qabstractitemview_updategeometries_callback = cb; }
    void setQAbstractItemView_VerticalScrollbarAction_Callback(QAbstractItemView_VerticalScrollbarAction_Callback cb) { qabstractitemview_verticalscrollbaraction_callback = cb; }
    void setQAbstractItemView_HorizontalScrollbarAction_Callback(QAbstractItemView_HorizontalScrollbarAction_Callback cb) { qabstractitemview_horizontalscrollbaraction_callback = cb; }
    void setQAbstractItemView_VerticalScrollbarValueChanged_Callback(QAbstractItemView_VerticalScrollbarValueChanged_Callback cb) { qabstractitemview_verticalscrollbarvaluechanged_callback = cb; }
    void setQAbstractItemView_HorizontalScrollbarValueChanged_Callback(QAbstractItemView_HorizontalScrollbarValueChanged_Callback cb) { qabstractitemview_horizontalscrollbarvaluechanged_callback = cb; }
    void setQAbstractItemView_CloseEditor_Callback(QAbstractItemView_CloseEditor_Callback cb) { qabstractitemview_closeeditor_callback = cb; }
    void setQAbstractItemView_CommitData_Callback(QAbstractItemView_CommitData_Callback cb) { qabstractitemview_commitdata_callback = cb; }
    void setQAbstractItemView_EditorDestroyed_Callback(QAbstractItemView_EditorDestroyed_Callback cb) { qabstractitemview_editordestroyed_callback = cb; }
    void setQAbstractItemView_MoveCursor_Callback(QAbstractItemView_MoveCursor_Callback cb) { qabstractitemview_movecursor_callback = cb; }
    void setQAbstractItemView_HorizontalOffset_Callback(QAbstractItemView_HorizontalOffset_Callback cb) { qabstractitemview_horizontaloffset_callback = cb; }
    void setQAbstractItemView_VerticalOffset_Callback(QAbstractItemView_VerticalOffset_Callback cb) { qabstractitemview_verticaloffset_callback = cb; }
    void setQAbstractItemView_IsIndexHidden_Callback(QAbstractItemView_IsIndexHidden_Callback cb) { qabstractitemview_isindexhidden_callback = cb; }
    void setQAbstractItemView_SetSelection_Callback(QAbstractItemView_SetSelection_Callback cb) { qabstractitemview_setselection_callback = cb; }
    void setQAbstractItemView_VisualRegionForSelection_Callback(QAbstractItemView_VisualRegionForSelection_Callback cb) { qabstractitemview_visualregionforselection_callback = cb; }
    void setQAbstractItemView_SelectedIndexes_Callback(QAbstractItemView_SelectedIndexes_Callback cb) { qabstractitemview_selectedindexes_callback = cb; }
    void setQAbstractItemView_Edit2_Callback(QAbstractItemView_Edit2_Callback cb) { qabstractitemview_edit2_callback = cb; }
    void setQAbstractItemView_SelectionCommand_Callback(QAbstractItemView_SelectionCommand_Callback cb) { qabstractitemview_selectioncommand_callback = cb; }
    void setQAbstractItemView_StartDrag_Callback(QAbstractItemView_StartDrag_Callback cb) { qabstractitemview_startdrag_callback = cb; }
    void setQAbstractItemView_InitViewItemOption_Callback(QAbstractItemView_InitViewItemOption_Callback cb) { qabstractitemview_initviewitemoption_callback = cb; }
    void setQAbstractItemView_FocusNextPrevChild_Callback(QAbstractItemView_FocusNextPrevChild_Callback cb) { qabstractitemview_focusnextprevchild_callback = cb; }
    void setQAbstractItemView_Event_Callback(QAbstractItemView_Event_Callback cb) { qabstractitemview_event_callback = cb; }
    void setQAbstractItemView_ViewportEvent_Callback(QAbstractItemView_ViewportEvent_Callback cb) { qabstractitemview_viewportevent_callback = cb; }
    void setQAbstractItemView_MousePressEvent_Callback(QAbstractItemView_MousePressEvent_Callback cb) { qabstractitemview_mousepressevent_callback = cb; }
    void setQAbstractItemView_MouseMoveEvent_Callback(QAbstractItemView_MouseMoveEvent_Callback cb) { qabstractitemview_mousemoveevent_callback = cb; }
    void setQAbstractItemView_MouseReleaseEvent_Callback(QAbstractItemView_MouseReleaseEvent_Callback cb) { qabstractitemview_mousereleaseevent_callback = cb; }
    void setQAbstractItemView_MouseDoubleClickEvent_Callback(QAbstractItemView_MouseDoubleClickEvent_Callback cb) { qabstractitemview_mousedoubleclickevent_callback = cb; }
    void setQAbstractItemView_DragEnterEvent_Callback(QAbstractItemView_DragEnterEvent_Callback cb) { qabstractitemview_dragenterevent_callback = cb; }
    void setQAbstractItemView_DragMoveEvent_Callback(QAbstractItemView_DragMoveEvent_Callback cb) { qabstractitemview_dragmoveevent_callback = cb; }
    void setQAbstractItemView_DragLeaveEvent_Callback(QAbstractItemView_DragLeaveEvent_Callback cb) { qabstractitemview_dragleaveevent_callback = cb; }
    void setQAbstractItemView_DropEvent_Callback(QAbstractItemView_DropEvent_Callback cb) { qabstractitemview_dropevent_callback = cb; }
    void setQAbstractItemView_FocusInEvent_Callback(QAbstractItemView_FocusInEvent_Callback cb) { qabstractitemview_focusinevent_callback = cb; }
    void setQAbstractItemView_FocusOutEvent_Callback(QAbstractItemView_FocusOutEvent_Callback cb) { qabstractitemview_focusoutevent_callback = cb; }
    void setQAbstractItemView_KeyPressEvent_Callback(QAbstractItemView_KeyPressEvent_Callback cb) { qabstractitemview_keypressevent_callback = cb; }
    void setQAbstractItemView_ResizeEvent_Callback(QAbstractItemView_ResizeEvent_Callback cb) { qabstractitemview_resizeevent_callback = cb; }
    void setQAbstractItemView_TimerEvent_Callback(QAbstractItemView_TimerEvent_Callback cb) { qabstractitemview_timerevent_callback = cb; }
    void setQAbstractItemView_InputMethodEvent_Callback(QAbstractItemView_InputMethodEvent_Callback cb) { qabstractitemview_inputmethodevent_callback = cb; }
    void setQAbstractItemView_EventFilter_Callback(QAbstractItemView_EventFilter_Callback cb) { qabstractitemview_eventfilter_callback = cb; }
    void setQAbstractItemView_ViewportSizeHint_Callback(QAbstractItemView_ViewportSizeHint_Callback cb) { qabstractitemview_viewportsizehint_callback = cb; }
    void setQAbstractItemView_MinimumSizeHint_Callback(QAbstractItemView_MinimumSizeHint_Callback cb) { qabstractitemview_minimumsizehint_callback = cb; }
    void setQAbstractItemView_SizeHint_Callback(QAbstractItemView_SizeHint_Callback cb) { qabstractitemview_sizehint_callback = cb; }
    void setQAbstractItemView_SetupViewport_Callback(QAbstractItemView_SetupViewport_Callback cb) { qabstractitemview_setupviewport_callback = cb; }
    void setQAbstractItemView_PaintEvent_Callback(QAbstractItemView_PaintEvent_Callback cb) { qabstractitemview_paintevent_callback = cb; }
    void setQAbstractItemView_WheelEvent_Callback(QAbstractItemView_WheelEvent_Callback cb) { qabstractitemview_wheelevent_callback = cb; }
    void setQAbstractItemView_ContextMenuEvent_Callback(QAbstractItemView_ContextMenuEvent_Callback cb) { qabstractitemview_contextmenuevent_callback = cb; }
    void setQAbstractItemView_ScrollContentsBy_Callback(QAbstractItemView_ScrollContentsBy_Callback cb) { qabstractitemview_scrollcontentsby_callback = cb; }
    void setQAbstractItemView_ChangeEvent_Callback(QAbstractItemView_ChangeEvent_Callback cb) { qabstractitemview_changeevent_callback = cb; }
    void setQAbstractItemView_InitStyleOption_Callback(QAbstractItemView_InitStyleOption_Callback cb) { qabstractitemview_initstyleoption_callback = cb; }
    void setQAbstractItemView_DevType_Callback(QAbstractItemView_DevType_Callback cb) { qabstractitemview_devtype_callback = cb; }
    void setQAbstractItemView_SetVisible_Callback(QAbstractItemView_SetVisible_Callback cb) { qabstractitemview_setvisible_callback = cb; }
    void setQAbstractItemView_HeightForWidth_Callback(QAbstractItemView_HeightForWidth_Callback cb) { qabstractitemview_heightforwidth_callback = cb; }
    void setQAbstractItemView_HasHeightForWidth_Callback(QAbstractItemView_HasHeightForWidth_Callback cb) { qabstractitemview_hasheightforwidth_callback = cb; }
    void setQAbstractItemView_PaintEngine_Callback(QAbstractItemView_PaintEngine_Callback cb) { qabstractitemview_paintengine_callback = cb; }
    void setQAbstractItemView_KeyReleaseEvent_Callback(QAbstractItemView_KeyReleaseEvent_Callback cb) { qabstractitemview_keyreleaseevent_callback = cb; }
    void setQAbstractItemView_EnterEvent_Callback(QAbstractItemView_EnterEvent_Callback cb) { qabstractitemview_enterevent_callback = cb; }
    void setQAbstractItemView_LeaveEvent_Callback(QAbstractItemView_LeaveEvent_Callback cb) { qabstractitemview_leaveevent_callback = cb; }
    void setQAbstractItemView_MoveEvent_Callback(QAbstractItemView_MoveEvent_Callback cb) { qabstractitemview_moveevent_callback = cb; }
    void setQAbstractItemView_CloseEvent_Callback(QAbstractItemView_CloseEvent_Callback cb) { qabstractitemview_closeevent_callback = cb; }
    void setQAbstractItemView_TabletEvent_Callback(QAbstractItemView_TabletEvent_Callback cb) { qabstractitemview_tabletevent_callback = cb; }
    void setQAbstractItemView_ActionEvent_Callback(QAbstractItemView_ActionEvent_Callback cb) { qabstractitemview_actionevent_callback = cb; }
    void setQAbstractItemView_ShowEvent_Callback(QAbstractItemView_ShowEvent_Callback cb) { qabstractitemview_showevent_callback = cb; }
    void setQAbstractItemView_HideEvent_Callback(QAbstractItemView_HideEvent_Callback cb) { qabstractitemview_hideevent_callback = cb; }
    void setQAbstractItemView_NativeEvent_Callback(QAbstractItemView_NativeEvent_Callback cb) { qabstractitemview_nativeevent_callback = cb; }
    void setQAbstractItemView_Metric_Callback(QAbstractItemView_Metric_Callback cb) { qabstractitemview_metric_callback = cb; }
    void setQAbstractItemView_InitPainter_Callback(QAbstractItemView_InitPainter_Callback cb) { qabstractitemview_initpainter_callback = cb; }
    void setQAbstractItemView_Redirected_Callback(QAbstractItemView_Redirected_Callback cb) { qabstractitemview_redirected_callback = cb; }
    void setQAbstractItemView_SharedPainter_Callback(QAbstractItemView_SharedPainter_Callback cb) { qabstractitemview_sharedpainter_callback = cb; }
    void setQAbstractItemView_ChildEvent_Callback(QAbstractItemView_ChildEvent_Callback cb) { qabstractitemview_childevent_callback = cb; }
    void setQAbstractItemView_CustomEvent_Callback(QAbstractItemView_CustomEvent_Callback cb) { qabstractitemview_customevent_callback = cb; }
    void setQAbstractItemView_ConnectNotify_Callback(QAbstractItemView_ConnectNotify_Callback cb) { qabstractitemview_connectnotify_callback = cb; }
    void setQAbstractItemView_DisconnectNotify_Callback(QAbstractItemView_DisconnectNotify_Callback cb) { qabstractitemview_disconnectnotify_callback = cb; }
    void setQAbstractItemView_State_Callback(QAbstractItemView_State_Callback cb) { qabstractitemview_state_callback = cb; }
    void setQAbstractItemView_SetState_Callback(QAbstractItemView_SetState_Callback cb) { qabstractitemview_setstate_callback = cb; }
    void setQAbstractItemView_ScheduleDelayedItemsLayout_Callback(QAbstractItemView_ScheduleDelayedItemsLayout_Callback cb) { qabstractitemview_scheduledelayeditemslayout_callback = cb; }
    void setQAbstractItemView_ExecuteDelayedItemsLayout_Callback(QAbstractItemView_ExecuteDelayedItemsLayout_Callback cb) { qabstractitemview_executedelayeditemslayout_callback = cb; }
    void setQAbstractItemView_SetDirtyRegion_Callback(QAbstractItemView_SetDirtyRegion_Callback cb) { qabstractitemview_setdirtyregion_callback = cb; }
    void setQAbstractItemView_ScrollDirtyRegion_Callback(QAbstractItemView_ScrollDirtyRegion_Callback cb) { qabstractitemview_scrolldirtyregion_callback = cb; }
    void setQAbstractItemView_DirtyRegionOffset_Callback(QAbstractItemView_DirtyRegionOffset_Callback cb) { qabstractitemview_dirtyregionoffset_callback = cb; }
    void setQAbstractItemView_StartAutoScroll_Callback(QAbstractItemView_StartAutoScroll_Callback cb) { qabstractitemview_startautoscroll_callback = cb; }
    void setQAbstractItemView_StopAutoScroll_Callback(QAbstractItemView_StopAutoScroll_Callback cb) { qabstractitemview_stopautoscroll_callback = cb; }
    void setQAbstractItemView_DoAutoScroll_Callback(QAbstractItemView_DoAutoScroll_Callback cb) { qabstractitemview_doautoscroll_callback = cb; }
    void setQAbstractItemView_DropIndicatorPosition_Callback(QAbstractItemView_DropIndicatorPosition_Callback cb) { qabstractitemview_dropindicatorposition_callback = cb; }
    void setQAbstractItemView_SetViewportMargins_Callback(QAbstractItemView_SetViewportMargins_Callback cb) { qabstractitemview_setviewportmargins_callback = cb; }
    void setQAbstractItemView_ViewportMargins_Callback(QAbstractItemView_ViewportMargins_Callback cb) { qabstractitemview_viewportmargins_callback = cb; }
    void setQAbstractItemView_DrawFrame_Callback(QAbstractItemView_DrawFrame_Callback cb) { qabstractitemview_drawframe_callback = cb; }
    void setQAbstractItemView_UpdateMicroFocus_Callback(QAbstractItemView_UpdateMicroFocus_Callback cb) { qabstractitemview_updatemicrofocus_callback = cb; }
    void setQAbstractItemView_Create_Callback(QAbstractItemView_Create_Callback cb) { qabstractitemview_create_callback = cb; }
    void setQAbstractItemView_Destroy_Callback(QAbstractItemView_Destroy_Callback cb) { qabstractitemview_destroy_callback = cb; }
    void setQAbstractItemView_FocusNextChild_Callback(QAbstractItemView_FocusNextChild_Callback cb) { qabstractitemview_focusnextchild_callback = cb; }
    void setQAbstractItemView_FocusPreviousChild_Callback(QAbstractItemView_FocusPreviousChild_Callback cb) { qabstractitemview_focuspreviouschild_callback = cb; }
    void setQAbstractItemView_Sender_Callback(QAbstractItemView_Sender_Callback cb) { qabstractitemview_sender_callback = cb; }
    void setQAbstractItemView_SenderSignalIndex_Callback(QAbstractItemView_SenderSignalIndex_Callback cb) { qabstractitemview_sendersignalindex_callback = cb; }
    void setQAbstractItemView_Receivers_Callback(QAbstractItemView_Receivers_Callback cb) { qabstractitemview_receivers_callback = cb; }
    void setQAbstractItemView_IsSignalConnected_Callback(QAbstractItemView_IsSignalConnected_Callback cb) { qabstractitemview_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAbstractItemView_Metacall_IsBase(bool value) const { qabstractitemview_metacall_isbase = value; }
    void setQAbstractItemView_SetModel_IsBase(bool value) const { qabstractitemview_setmodel_isbase = value; }
    void setQAbstractItemView_SetSelectionModel_IsBase(bool value) const { qabstractitemview_setselectionmodel_isbase = value; }
    void setQAbstractItemView_KeyboardSearch_IsBase(bool value) const { qabstractitemview_keyboardsearch_isbase = value; }
    void setQAbstractItemView_VisualRect_IsBase(bool value) const { qabstractitemview_visualrect_isbase = value; }
    void setQAbstractItemView_ScrollTo_IsBase(bool value) const { qabstractitemview_scrollto_isbase = value; }
    void setQAbstractItemView_IndexAt_IsBase(bool value) const { qabstractitemview_indexat_isbase = value; }
    void setQAbstractItemView_SizeHintForRow_IsBase(bool value) const { qabstractitemview_sizehintforrow_isbase = value; }
    void setQAbstractItemView_SizeHintForColumn_IsBase(bool value) const { qabstractitemview_sizehintforcolumn_isbase = value; }
    void setQAbstractItemView_ItemDelegateForIndex_IsBase(bool value) const { qabstractitemview_itemdelegateforindex_isbase = value; }
    void setQAbstractItemView_InputMethodQuery_IsBase(bool value) const { qabstractitemview_inputmethodquery_isbase = value; }
    void setQAbstractItemView_Reset_IsBase(bool value) const { qabstractitemview_reset_isbase = value; }
    void setQAbstractItemView_SetRootIndex_IsBase(bool value) const { qabstractitemview_setrootindex_isbase = value; }
    void setQAbstractItemView_DoItemsLayout_IsBase(bool value) const { qabstractitemview_doitemslayout_isbase = value; }
    void setQAbstractItemView_SelectAll_IsBase(bool value) const { qabstractitemview_selectall_isbase = value; }
    void setQAbstractItemView_DataChanged_IsBase(bool value) const { qabstractitemview_datachanged_isbase = value; }
    void setQAbstractItemView_RowsInserted_IsBase(bool value) const { qabstractitemview_rowsinserted_isbase = value; }
    void setQAbstractItemView_RowsAboutToBeRemoved_IsBase(bool value) const { qabstractitemview_rowsabouttoberemoved_isbase = value; }
    void setQAbstractItemView_SelectionChanged_IsBase(bool value) const { qabstractitemview_selectionchanged_isbase = value; }
    void setQAbstractItemView_CurrentChanged_IsBase(bool value) const { qabstractitemview_currentchanged_isbase = value; }
    void setQAbstractItemView_UpdateEditorData_IsBase(bool value) const { qabstractitemview_updateeditordata_isbase = value; }
    void setQAbstractItemView_UpdateEditorGeometries_IsBase(bool value) const { qabstractitemview_updateeditorgeometries_isbase = value; }
    void setQAbstractItemView_UpdateGeometries_IsBase(bool value) const { qabstractitemview_updategeometries_isbase = value; }
    void setQAbstractItemView_VerticalScrollbarAction_IsBase(bool value) const { qabstractitemview_verticalscrollbaraction_isbase = value; }
    void setQAbstractItemView_HorizontalScrollbarAction_IsBase(bool value) const { qabstractitemview_horizontalscrollbaraction_isbase = value; }
    void setQAbstractItemView_VerticalScrollbarValueChanged_IsBase(bool value) const { qabstractitemview_verticalscrollbarvaluechanged_isbase = value; }
    void setQAbstractItemView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qabstractitemview_horizontalscrollbarvaluechanged_isbase = value; }
    void setQAbstractItemView_CloseEditor_IsBase(bool value) const { qabstractitemview_closeeditor_isbase = value; }
    void setQAbstractItemView_CommitData_IsBase(bool value) const { qabstractitemview_commitdata_isbase = value; }
    void setQAbstractItemView_EditorDestroyed_IsBase(bool value) const { qabstractitemview_editordestroyed_isbase = value; }
    void setQAbstractItemView_MoveCursor_IsBase(bool value) const { qabstractitemview_movecursor_isbase = value; }
    void setQAbstractItemView_HorizontalOffset_IsBase(bool value) const { qabstractitemview_horizontaloffset_isbase = value; }
    void setQAbstractItemView_VerticalOffset_IsBase(bool value) const { qabstractitemview_verticaloffset_isbase = value; }
    void setQAbstractItemView_IsIndexHidden_IsBase(bool value) const { qabstractitemview_isindexhidden_isbase = value; }
    void setQAbstractItemView_SetSelection_IsBase(bool value) const { qabstractitemview_setselection_isbase = value; }
    void setQAbstractItemView_VisualRegionForSelection_IsBase(bool value) const { qabstractitemview_visualregionforselection_isbase = value; }
    void setQAbstractItemView_SelectedIndexes_IsBase(bool value) const { qabstractitemview_selectedindexes_isbase = value; }
    void setQAbstractItemView_Edit2_IsBase(bool value) const { qabstractitemview_edit2_isbase = value; }
    void setQAbstractItemView_SelectionCommand_IsBase(bool value) const { qabstractitemview_selectioncommand_isbase = value; }
    void setQAbstractItemView_StartDrag_IsBase(bool value) const { qabstractitemview_startdrag_isbase = value; }
    void setQAbstractItemView_InitViewItemOption_IsBase(bool value) const { qabstractitemview_initviewitemoption_isbase = value; }
    void setQAbstractItemView_FocusNextPrevChild_IsBase(bool value) const { qabstractitemview_focusnextprevchild_isbase = value; }
    void setQAbstractItemView_Event_IsBase(bool value) const { qabstractitemview_event_isbase = value; }
    void setQAbstractItemView_ViewportEvent_IsBase(bool value) const { qabstractitemview_viewportevent_isbase = value; }
    void setQAbstractItemView_MousePressEvent_IsBase(bool value) const { qabstractitemview_mousepressevent_isbase = value; }
    void setQAbstractItemView_MouseMoveEvent_IsBase(bool value) const { qabstractitemview_mousemoveevent_isbase = value; }
    void setQAbstractItemView_MouseReleaseEvent_IsBase(bool value) const { qabstractitemview_mousereleaseevent_isbase = value; }
    void setQAbstractItemView_MouseDoubleClickEvent_IsBase(bool value) const { qabstractitemview_mousedoubleclickevent_isbase = value; }
    void setQAbstractItemView_DragEnterEvent_IsBase(bool value) const { qabstractitemview_dragenterevent_isbase = value; }
    void setQAbstractItemView_DragMoveEvent_IsBase(bool value) const { qabstractitemview_dragmoveevent_isbase = value; }
    void setQAbstractItemView_DragLeaveEvent_IsBase(bool value) const { qabstractitemview_dragleaveevent_isbase = value; }
    void setQAbstractItemView_DropEvent_IsBase(bool value) const { qabstractitemview_dropevent_isbase = value; }
    void setQAbstractItemView_FocusInEvent_IsBase(bool value) const { qabstractitemview_focusinevent_isbase = value; }
    void setQAbstractItemView_FocusOutEvent_IsBase(bool value) const { qabstractitemview_focusoutevent_isbase = value; }
    void setQAbstractItemView_KeyPressEvent_IsBase(bool value) const { qabstractitemview_keypressevent_isbase = value; }
    void setQAbstractItemView_ResizeEvent_IsBase(bool value) const { qabstractitemview_resizeevent_isbase = value; }
    void setQAbstractItemView_TimerEvent_IsBase(bool value) const { qabstractitemview_timerevent_isbase = value; }
    void setQAbstractItemView_InputMethodEvent_IsBase(bool value) const { qabstractitemview_inputmethodevent_isbase = value; }
    void setQAbstractItemView_EventFilter_IsBase(bool value) const { qabstractitemview_eventfilter_isbase = value; }
    void setQAbstractItemView_ViewportSizeHint_IsBase(bool value) const { qabstractitemview_viewportsizehint_isbase = value; }
    void setQAbstractItemView_MinimumSizeHint_IsBase(bool value) const { qabstractitemview_minimumsizehint_isbase = value; }
    void setQAbstractItemView_SizeHint_IsBase(bool value) const { qabstractitemview_sizehint_isbase = value; }
    void setQAbstractItemView_SetupViewport_IsBase(bool value) const { qabstractitemview_setupviewport_isbase = value; }
    void setQAbstractItemView_PaintEvent_IsBase(bool value) const { qabstractitemview_paintevent_isbase = value; }
    void setQAbstractItemView_WheelEvent_IsBase(bool value) const { qabstractitemview_wheelevent_isbase = value; }
    void setQAbstractItemView_ContextMenuEvent_IsBase(bool value) const { qabstractitemview_contextmenuevent_isbase = value; }
    void setQAbstractItemView_ScrollContentsBy_IsBase(bool value) const { qabstractitemview_scrollcontentsby_isbase = value; }
    void setQAbstractItemView_ChangeEvent_IsBase(bool value) const { qabstractitemview_changeevent_isbase = value; }
    void setQAbstractItemView_InitStyleOption_IsBase(bool value) const { qabstractitemview_initstyleoption_isbase = value; }
    void setQAbstractItemView_DevType_IsBase(bool value) const { qabstractitemview_devtype_isbase = value; }
    void setQAbstractItemView_SetVisible_IsBase(bool value) const { qabstractitemview_setvisible_isbase = value; }
    void setQAbstractItemView_HeightForWidth_IsBase(bool value) const { qabstractitemview_heightforwidth_isbase = value; }
    void setQAbstractItemView_HasHeightForWidth_IsBase(bool value) const { qabstractitemview_hasheightforwidth_isbase = value; }
    void setQAbstractItemView_PaintEngine_IsBase(bool value) const { qabstractitemview_paintengine_isbase = value; }
    void setQAbstractItemView_KeyReleaseEvent_IsBase(bool value) const { qabstractitemview_keyreleaseevent_isbase = value; }
    void setQAbstractItemView_EnterEvent_IsBase(bool value) const { qabstractitemview_enterevent_isbase = value; }
    void setQAbstractItemView_LeaveEvent_IsBase(bool value) const { qabstractitemview_leaveevent_isbase = value; }
    void setQAbstractItemView_MoveEvent_IsBase(bool value) const { qabstractitemview_moveevent_isbase = value; }
    void setQAbstractItemView_CloseEvent_IsBase(bool value) const { qabstractitemview_closeevent_isbase = value; }
    void setQAbstractItemView_TabletEvent_IsBase(bool value) const { qabstractitemview_tabletevent_isbase = value; }
    void setQAbstractItemView_ActionEvent_IsBase(bool value) const { qabstractitemview_actionevent_isbase = value; }
    void setQAbstractItemView_ShowEvent_IsBase(bool value) const { qabstractitemview_showevent_isbase = value; }
    void setQAbstractItemView_HideEvent_IsBase(bool value) const { qabstractitemview_hideevent_isbase = value; }
    void setQAbstractItemView_NativeEvent_IsBase(bool value) const { qabstractitemview_nativeevent_isbase = value; }
    void setQAbstractItemView_Metric_IsBase(bool value) const { qabstractitemview_metric_isbase = value; }
    void setQAbstractItemView_InitPainter_IsBase(bool value) const { qabstractitemview_initpainter_isbase = value; }
    void setQAbstractItemView_Redirected_IsBase(bool value) const { qabstractitemview_redirected_isbase = value; }
    void setQAbstractItemView_SharedPainter_IsBase(bool value) const { qabstractitemview_sharedpainter_isbase = value; }
    void setQAbstractItemView_ChildEvent_IsBase(bool value) const { qabstractitemview_childevent_isbase = value; }
    void setQAbstractItemView_CustomEvent_IsBase(bool value) const { qabstractitemview_customevent_isbase = value; }
    void setQAbstractItemView_ConnectNotify_IsBase(bool value) const { qabstractitemview_connectnotify_isbase = value; }
    void setQAbstractItemView_DisconnectNotify_IsBase(bool value) const { qabstractitemview_disconnectnotify_isbase = value; }
    void setQAbstractItemView_State_IsBase(bool value) const { qabstractitemview_state_isbase = value; }
    void setQAbstractItemView_SetState_IsBase(bool value) const { qabstractitemview_setstate_isbase = value; }
    void setQAbstractItemView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qabstractitemview_scheduledelayeditemslayout_isbase = value; }
    void setQAbstractItemView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qabstractitemview_executedelayeditemslayout_isbase = value; }
    void setQAbstractItemView_SetDirtyRegion_IsBase(bool value) const { qabstractitemview_setdirtyregion_isbase = value; }
    void setQAbstractItemView_ScrollDirtyRegion_IsBase(bool value) const { qabstractitemview_scrolldirtyregion_isbase = value; }
    void setQAbstractItemView_DirtyRegionOffset_IsBase(bool value) const { qabstractitemview_dirtyregionoffset_isbase = value; }
    void setQAbstractItemView_StartAutoScroll_IsBase(bool value) const { qabstractitemview_startautoscroll_isbase = value; }
    void setQAbstractItemView_StopAutoScroll_IsBase(bool value) const { qabstractitemview_stopautoscroll_isbase = value; }
    void setQAbstractItemView_DoAutoScroll_IsBase(bool value) const { qabstractitemview_doautoscroll_isbase = value; }
    void setQAbstractItemView_DropIndicatorPosition_IsBase(bool value) const { qabstractitemview_dropindicatorposition_isbase = value; }
    void setQAbstractItemView_SetViewportMargins_IsBase(bool value) const { qabstractitemview_setviewportmargins_isbase = value; }
    void setQAbstractItemView_ViewportMargins_IsBase(bool value) const { qabstractitemview_viewportmargins_isbase = value; }
    void setQAbstractItemView_DrawFrame_IsBase(bool value) const { qabstractitemview_drawframe_isbase = value; }
    void setQAbstractItemView_UpdateMicroFocus_IsBase(bool value) const { qabstractitemview_updatemicrofocus_isbase = value; }
    void setQAbstractItemView_Create_IsBase(bool value) const { qabstractitemview_create_isbase = value; }
    void setQAbstractItemView_Destroy_IsBase(bool value) const { qabstractitemview_destroy_isbase = value; }
    void setQAbstractItemView_FocusNextChild_IsBase(bool value) const { qabstractitemview_focusnextchild_isbase = value; }
    void setQAbstractItemView_FocusPreviousChild_IsBase(bool value) const { qabstractitemview_focuspreviouschild_isbase = value; }
    void setQAbstractItemView_Sender_IsBase(bool value) const { qabstractitemview_sender_isbase = value; }
    void setQAbstractItemView_SenderSignalIndex_IsBase(bool value) const { qabstractitemview_sendersignalindex_isbase = value; }
    void setQAbstractItemView_Receivers_IsBase(bool value) const { qabstractitemview_receivers_isbase = value; }
    void setQAbstractItemView_IsSignalConnected_IsBase(bool value) const { qabstractitemview_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractitemview_metacall_isbase) {
            qabstractitemview_metacall_isbase = false;
            return QAbstractItemView::qt_metacall(param1, param2, param3);
        } else if (qabstractitemview_metacall_callback != nullptr) {
            return qabstractitemview_metacall_callback(this, param1, param2, param3);
        } else {
            return QAbstractItemView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qabstractitemview_setmodel_isbase) {
            qabstractitemview_setmodel_isbase = false;
            QAbstractItemView::setModel(model);
        } else if (qabstractitemview_setmodel_callback != nullptr) {
            qabstractitemview_setmodel_callback(this, model);
        } else {
            QAbstractItemView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qabstractitemview_setselectionmodel_isbase) {
            qabstractitemview_setselectionmodel_isbase = false;
            QAbstractItemView::setSelectionModel(selectionModel);
        } else if (qabstractitemview_setselectionmodel_callback != nullptr) {
            qabstractitemview_setselectionmodel_callback(this, selectionModel);
        } else {
            QAbstractItemView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qabstractitemview_keyboardsearch_isbase) {
            qabstractitemview_keyboardsearch_isbase = false;
            QAbstractItemView::keyboardSearch(search);
        } else if (qabstractitemview_keyboardsearch_callback != nullptr) {
            qabstractitemview_keyboardsearch_callback(this, search);
        } else {
            QAbstractItemView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        return qabstractitemview_visualrect_callback(this, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        qabstractitemview_scrollto_callback(this, index, hint);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& point) const override {
        return qabstractitemview_indexat_callback(this, point);
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qabstractitemview_sizehintforrow_isbase) {
            qabstractitemview_sizehintforrow_isbase = false;
            return QAbstractItemView::sizeHintForRow(row);
        } else if (qabstractitemview_sizehintforrow_callback != nullptr) {
            return qabstractitemview_sizehintforrow_callback(this, row);
        } else {
            return QAbstractItemView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qabstractitemview_sizehintforcolumn_isbase) {
            qabstractitemview_sizehintforcolumn_isbase = false;
            return QAbstractItemView::sizeHintForColumn(column);
        } else if (qabstractitemview_sizehintforcolumn_callback != nullptr) {
            return qabstractitemview_sizehintforcolumn_callback(this, column);
        } else {
            return QAbstractItemView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qabstractitemview_itemdelegateforindex_isbase) {
            qabstractitemview_itemdelegateforindex_isbase = false;
            return QAbstractItemView::itemDelegateForIndex(index);
        } else if (qabstractitemview_itemdelegateforindex_callback != nullptr) {
            return qabstractitemview_itemdelegateforindex_callback(this, index);
        } else {
            return QAbstractItemView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qabstractitemview_inputmethodquery_isbase) {
            qabstractitemview_inputmethodquery_isbase = false;
            return QAbstractItemView::inputMethodQuery(query);
        } else if (qabstractitemview_inputmethodquery_callback != nullptr) {
            return qabstractitemview_inputmethodquery_callback(this, query);
        } else {
            return QAbstractItemView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qabstractitemview_reset_isbase) {
            qabstractitemview_reset_isbase = false;
            QAbstractItemView::reset();
        } else if (qabstractitemview_reset_callback != nullptr) {
            qabstractitemview_reset_callback();
        } else {
            QAbstractItemView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qabstractitemview_setrootindex_isbase) {
            qabstractitemview_setrootindex_isbase = false;
            QAbstractItemView::setRootIndex(index);
        } else if (qabstractitemview_setrootindex_callback != nullptr) {
            qabstractitemview_setrootindex_callback(this, index);
        } else {
            QAbstractItemView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qabstractitemview_doitemslayout_isbase) {
            qabstractitemview_doitemslayout_isbase = false;
            QAbstractItemView::doItemsLayout();
        } else if (qabstractitemview_doitemslayout_callback != nullptr) {
            qabstractitemview_doitemslayout_callback();
        } else {
            QAbstractItemView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qabstractitemview_selectall_isbase) {
            qabstractitemview_selectall_isbase = false;
            QAbstractItemView::selectAll();
        } else if (qabstractitemview_selectall_callback != nullptr) {
            qabstractitemview_selectall_callback();
        } else {
            QAbstractItemView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qabstractitemview_datachanged_isbase) {
            qabstractitemview_datachanged_isbase = false;
            QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
        } else if (qabstractitemview_datachanged_callback != nullptr) {
            qabstractitemview_datachanged_callback(this, topLeft, bottomRight, roles);
        } else {
            QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qabstractitemview_rowsinserted_isbase) {
            qabstractitemview_rowsinserted_isbase = false;
            QAbstractItemView::rowsInserted(parent, start, end);
        } else if (qabstractitemview_rowsinserted_callback != nullptr) {
            qabstractitemview_rowsinserted_callback(this, parent, start, end);
        } else {
            QAbstractItemView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qabstractitemview_rowsabouttoberemoved_isbase) {
            qabstractitemview_rowsabouttoberemoved_isbase = false;
            QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
        } else if (qabstractitemview_rowsabouttoberemoved_callback != nullptr) {
            qabstractitemview_rowsabouttoberemoved_callback(this, parent, start, end);
        } else {
            QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qabstractitemview_selectionchanged_isbase) {
            qabstractitemview_selectionchanged_isbase = false;
            QAbstractItemView::selectionChanged(selected, deselected);
        } else if (qabstractitemview_selectionchanged_callback != nullptr) {
            qabstractitemview_selectionchanged_callback(this, selected, deselected);
        } else {
            QAbstractItemView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qabstractitemview_currentchanged_isbase) {
            qabstractitemview_currentchanged_isbase = false;
            QAbstractItemView::currentChanged(current, previous);
        } else if (qabstractitemview_currentchanged_callback != nullptr) {
            qabstractitemview_currentchanged_callback(this, current, previous);
        } else {
            QAbstractItemView::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qabstractitemview_updateeditordata_isbase) {
            qabstractitemview_updateeditordata_isbase = false;
            QAbstractItemView::updateEditorData();
        } else if (qabstractitemview_updateeditordata_callback != nullptr) {
            qabstractitemview_updateeditordata_callback();
        } else {
            QAbstractItemView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qabstractitemview_updateeditorgeometries_isbase) {
            qabstractitemview_updateeditorgeometries_isbase = false;
            QAbstractItemView::updateEditorGeometries();
        } else if (qabstractitemview_updateeditorgeometries_callback != nullptr) {
            qabstractitemview_updateeditorgeometries_callback();
        } else {
            QAbstractItemView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qabstractitemview_updategeometries_isbase) {
            qabstractitemview_updategeometries_isbase = false;
            QAbstractItemView::updateGeometries();
        } else if (qabstractitemview_updategeometries_callback != nullptr) {
            qabstractitemview_updategeometries_callback();
        } else {
            QAbstractItemView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qabstractitemview_verticalscrollbaraction_isbase) {
            qabstractitemview_verticalscrollbaraction_isbase = false;
            QAbstractItemView::verticalScrollbarAction(action);
        } else if (qabstractitemview_verticalscrollbaraction_callback != nullptr) {
            qabstractitemview_verticalscrollbaraction_callback(this, action);
        } else {
            QAbstractItemView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qabstractitemview_horizontalscrollbaraction_isbase) {
            qabstractitemview_horizontalscrollbaraction_isbase = false;
            QAbstractItemView::horizontalScrollbarAction(action);
        } else if (qabstractitemview_horizontalscrollbaraction_callback != nullptr) {
            qabstractitemview_horizontalscrollbaraction_callback(this, action);
        } else {
            QAbstractItemView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qabstractitemview_verticalscrollbarvaluechanged_isbase) {
            qabstractitemview_verticalscrollbarvaluechanged_isbase = false;
            QAbstractItemView::verticalScrollbarValueChanged(value);
        } else if (qabstractitemview_verticalscrollbarvaluechanged_callback != nullptr) {
            qabstractitemview_verticalscrollbarvaluechanged_callback(this, value);
        } else {
            QAbstractItemView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qabstractitemview_horizontalscrollbarvaluechanged_isbase) {
            qabstractitemview_horizontalscrollbarvaluechanged_isbase = false;
            QAbstractItemView::horizontalScrollbarValueChanged(value);
        } else if (qabstractitemview_horizontalscrollbarvaluechanged_callback != nullptr) {
            qabstractitemview_horizontalscrollbarvaluechanged_callback(this, value);
        } else {
            QAbstractItemView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qabstractitemview_closeeditor_isbase) {
            qabstractitemview_closeeditor_isbase = false;
            QAbstractItemView::closeEditor(editor, hint);
        } else if (qabstractitemview_closeeditor_callback != nullptr) {
            qabstractitemview_closeeditor_callback(this, editor, hint);
        } else {
            QAbstractItemView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qabstractitemview_commitdata_isbase) {
            qabstractitemview_commitdata_isbase = false;
            QAbstractItemView::commitData(editor);
        } else if (qabstractitemview_commitdata_callback != nullptr) {
            qabstractitemview_commitdata_callback(this, editor);
        } else {
            QAbstractItemView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qabstractitemview_editordestroyed_isbase) {
            qabstractitemview_editordestroyed_isbase = false;
            QAbstractItemView::editorDestroyed(editor);
        } else if (qabstractitemview_editordestroyed_callback != nullptr) {
            qabstractitemview_editordestroyed_callback(this, editor);
        } else {
            QAbstractItemView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        return qabstractitemview_movecursor_callback(this, cursorAction, modifiers);
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        return qabstractitemview_horizontaloffset_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        return qabstractitemview_verticaloffset_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        return qabstractitemview_isindexhidden_callback(this, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        qabstractitemview_setselection_callback(this, rect, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        return qabstractitemview_visualregionforselection_callback(this, selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList selectedIndexes() const override {
        if (qabstractitemview_selectedindexes_isbase) {
            qabstractitemview_selectedindexes_isbase = false;
            return QAbstractItemView::selectedIndexes();
        } else if (qabstractitemview_selectedindexes_callback != nullptr) {
            return qabstractitemview_selectedindexes_callback();
        } else {
            return QAbstractItemView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qabstractitemview_edit2_isbase) {
            qabstractitemview_edit2_isbase = false;
            return QAbstractItemView::edit(index, trigger, event);
        } else if (qabstractitemview_edit2_callback != nullptr) {
            return qabstractitemview_edit2_callback(this, index, trigger, event);
        } else {
            return QAbstractItemView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qabstractitemview_selectioncommand_isbase) {
            qabstractitemview_selectioncommand_isbase = false;
            return QAbstractItemView::selectionCommand(index, event);
        } else if (qabstractitemview_selectioncommand_callback != nullptr) {
            return qabstractitemview_selectioncommand_callback(this, index, event);
        } else {
            return QAbstractItemView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qabstractitemview_startdrag_isbase) {
            qabstractitemview_startdrag_isbase = false;
            QAbstractItemView::startDrag(supportedActions);
        } else if (qabstractitemview_startdrag_callback != nullptr) {
            qabstractitemview_startdrag_callback(this, supportedActions);
        } else {
            QAbstractItemView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qabstractitemview_initviewitemoption_isbase) {
            qabstractitemview_initviewitemoption_isbase = false;
            QAbstractItemView::initViewItemOption(option);
        } else if (qabstractitemview_initviewitemoption_callback != nullptr) {
            qabstractitemview_initviewitemoption_callback(this, option);
        } else {
            QAbstractItemView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractitemview_focusnextprevchild_isbase) {
            qabstractitemview_focusnextprevchild_isbase = false;
            return QAbstractItemView::focusNextPrevChild(next);
        } else if (qabstractitemview_focusnextprevchild_callback != nullptr) {
            return qabstractitemview_focusnextprevchild_callback(this, next);
        } else {
            return QAbstractItemView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractitemview_event_isbase) {
            qabstractitemview_event_isbase = false;
            return QAbstractItemView::event(event);
        } else if (qabstractitemview_event_callback != nullptr) {
            return qabstractitemview_event_callback(this, event);
        } else {
            return QAbstractItemView::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qabstractitemview_viewportevent_isbase) {
            qabstractitemview_viewportevent_isbase = false;
            return QAbstractItemView::viewportEvent(event);
        } else if (qabstractitemview_viewportevent_callback != nullptr) {
            return qabstractitemview_viewportevent_callback(this, event);
        } else {
            return QAbstractItemView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousepressevent_isbase) {
            qabstractitemview_mousepressevent_isbase = false;
            QAbstractItemView::mousePressEvent(event);
        } else if (qabstractitemview_mousepressevent_callback != nullptr) {
            qabstractitemview_mousepressevent_callback(this, event);
        } else {
            QAbstractItemView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousemoveevent_isbase) {
            qabstractitemview_mousemoveevent_isbase = false;
            QAbstractItemView::mouseMoveEvent(event);
        } else if (qabstractitemview_mousemoveevent_callback != nullptr) {
            qabstractitemview_mousemoveevent_callback(this, event);
        } else {
            QAbstractItemView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousereleaseevent_isbase) {
            qabstractitemview_mousereleaseevent_isbase = false;
            QAbstractItemView::mouseReleaseEvent(event);
        } else if (qabstractitemview_mousereleaseevent_callback != nullptr) {
            qabstractitemview_mousereleaseevent_callback(this, event);
        } else {
            QAbstractItemView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractitemview_mousedoubleclickevent_isbase) {
            qabstractitemview_mousedoubleclickevent_isbase = false;
            QAbstractItemView::mouseDoubleClickEvent(event);
        } else if (qabstractitemview_mousedoubleclickevent_callback != nullptr) {
            qabstractitemview_mousedoubleclickevent_callback(this, event);
        } else {
            QAbstractItemView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractitemview_dragenterevent_isbase) {
            qabstractitemview_dragenterevent_isbase = false;
            QAbstractItemView::dragEnterEvent(event);
        } else if (qabstractitemview_dragenterevent_callback != nullptr) {
            qabstractitemview_dragenterevent_callback(this, event);
        } else {
            QAbstractItemView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractitemview_dragmoveevent_isbase) {
            qabstractitemview_dragmoveevent_isbase = false;
            QAbstractItemView::dragMoveEvent(event);
        } else if (qabstractitemview_dragmoveevent_callback != nullptr) {
            qabstractitemview_dragmoveevent_callback(this, event);
        } else {
            QAbstractItemView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractitemview_dragleaveevent_isbase) {
            qabstractitemview_dragleaveevent_isbase = false;
            QAbstractItemView::dragLeaveEvent(event);
        } else if (qabstractitemview_dragleaveevent_callback != nullptr) {
            qabstractitemview_dragleaveevent_callback(this, event);
        } else {
            QAbstractItemView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractitemview_dropevent_isbase) {
            qabstractitemview_dropevent_isbase = false;
            QAbstractItemView::dropEvent(event);
        } else if (qabstractitemview_dropevent_callback != nullptr) {
            qabstractitemview_dropevent_callback(this, event);
        } else {
            QAbstractItemView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractitemview_focusinevent_isbase) {
            qabstractitemview_focusinevent_isbase = false;
            QAbstractItemView::focusInEvent(event);
        } else if (qabstractitemview_focusinevent_callback != nullptr) {
            qabstractitemview_focusinevent_callback(this, event);
        } else {
            QAbstractItemView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractitemview_focusoutevent_isbase) {
            qabstractitemview_focusoutevent_isbase = false;
            QAbstractItemView::focusOutEvent(event);
        } else if (qabstractitemview_focusoutevent_callback != nullptr) {
            qabstractitemview_focusoutevent_callback(this, event);
        } else {
            QAbstractItemView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qabstractitemview_keypressevent_isbase) {
            qabstractitemview_keypressevent_isbase = false;
            QAbstractItemView::keyPressEvent(event);
        } else if (qabstractitemview_keypressevent_callback != nullptr) {
            qabstractitemview_keypressevent_callback(this, event);
        } else {
            QAbstractItemView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractitemview_resizeevent_isbase) {
            qabstractitemview_resizeevent_isbase = false;
            QAbstractItemView::resizeEvent(event);
        } else if (qabstractitemview_resizeevent_callback != nullptr) {
            qabstractitemview_resizeevent_callback(this, event);
        } else {
            QAbstractItemView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractitemview_timerevent_isbase) {
            qabstractitemview_timerevent_isbase = false;
            QAbstractItemView::timerEvent(event);
        } else if (qabstractitemview_timerevent_callback != nullptr) {
            qabstractitemview_timerevent_callback(this, event);
        } else {
            QAbstractItemView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qabstractitemview_inputmethodevent_isbase) {
            qabstractitemview_inputmethodevent_isbase = false;
            QAbstractItemView::inputMethodEvent(event);
        } else if (qabstractitemview_inputmethodevent_callback != nullptr) {
            qabstractitemview_inputmethodevent_callback(this, event);
        } else {
            QAbstractItemView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qabstractitemview_eventfilter_isbase) {
            qabstractitemview_eventfilter_isbase = false;
            return QAbstractItemView::eventFilter(object, event);
        } else if (qabstractitemview_eventfilter_callback != nullptr) {
            return qabstractitemview_eventfilter_callback(this, object, event);
        } else {
            return QAbstractItemView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qabstractitemview_viewportsizehint_isbase) {
            qabstractitemview_viewportsizehint_isbase = false;
            return QAbstractItemView::viewportSizeHint();
        } else if (qabstractitemview_viewportsizehint_callback != nullptr) {
            return qabstractitemview_viewportsizehint_callback();
        } else {
            return QAbstractItemView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractitemview_minimumsizehint_isbase) {
            qabstractitemview_minimumsizehint_isbase = false;
            return QAbstractItemView::minimumSizeHint();
        } else if (qabstractitemview_minimumsizehint_callback != nullptr) {
            return qabstractitemview_minimumsizehint_callback();
        } else {
            return QAbstractItemView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractitemview_sizehint_isbase) {
            qabstractitemview_sizehint_isbase = false;
            return QAbstractItemView::sizeHint();
        } else if (qabstractitemview_sizehint_callback != nullptr) {
            return qabstractitemview_sizehint_callback();
        } else {
            return QAbstractItemView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qabstractitemview_setupviewport_isbase) {
            qabstractitemview_setupviewport_isbase = false;
            QAbstractItemView::setupViewport(viewport);
        } else if (qabstractitemview_setupviewport_callback != nullptr) {
            qabstractitemview_setupviewport_callback(this, viewport);
        } else {
            QAbstractItemView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qabstractitemview_paintevent_isbase) {
            qabstractitemview_paintevent_isbase = false;
            QAbstractItemView::paintEvent(param1);
        } else if (qabstractitemview_paintevent_callback != nullptr) {
            qabstractitemview_paintevent_callback(this, param1);
        } else {
            QAbstractItemView::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qabstractitemview_wheelevent_isbase) {
            qabstractitemview_wheelevent_isbase = false;
            QAbstractItemView::wheelEvent(param1);
        } else if (qabstractitemview_wheelevent_callback != nullptr) {
            qabstractitemview_wheelevent_callback(this, param1);
        } else {
            QAbstractItemView::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qabstractitemview_contextmenuevent_isbase) {
            qabstractitemview_contextmenuevent_isbase = false;
            QAbstractItemView::contextMenuEvent(param1);
        } else if (qabstractitemview_contextmenuevent_callback != nullptr) {
            qabstractitemview_contextmenuevent_callback(this, param1);
        } else {
            QAbstractItemView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qabstractitemview_scrollcontentsby_isbase) {
            qabstractitemview_scrollcontentsby_isbase = false;
            QAbstractItemView::scrollContentsBy(dx, dy);
        } else if (qabstractitemview_scrollcontentsby_callback != nullptr) {
            qabstractitemview_scrollcontentsby_callback(this, dx, dy);
        } else {
            QAbstractItemView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qabstractitemview_changeevent_isbase) {
            qabstractitemview_changeevent_isbase = false;
            QAbstractItemView::changeEvent(param1);
        } else if (qabstractitemview_changeevent_callback != nullptr) {
            qabstractitemview_changeevent_callback(this, param1);
        } else {
            QAbstractItemView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qabstractitemview_initstyleoption_isbase) {
            qabstractitemview_initstyleoption_isbase = false;
            QAbstractItemView::initStyleOption(option);
        } else if (qabstractitemview_initstyleoption_callback != nullptr) {
            qabstractitemview_initstyleoption_callback(this, option);
        } else {
            QAbstractItemView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractitemview_devtype_isbase) {
            qabstractitemview_devtype_isbase = false;
            return QAbstractItemView::devType();
        } else if (qabstractitemview_devtype_callback != nullptr) {
            return qabstractitemview_devtype_callback();
        } else {
            return QAbstractItemView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractitemview_setvisible_isbase) {
            qabstractitemview_setvisible_isbase = false;
            QAbstractItemView::setVisible(visible);
        } else if (qabstractitemview_setvisible_callback != nullptr) {
            qabstractitemview_setvisible_callback(this, visible);
        } else {
            QAbstractItemView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractitemview_heightforwidth_isbase) {
            qabstractitemview_heightforwidth_isbase = false;
            return QAbstractItemView::heightForWidth(param1);
        } else if (qabstractitemview_heightforwidth_callback != nullptr) {
            return qabstractitemview_heightforwidth_callback(this, param1);
        } else {
            return QAbstractItemView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractitemview_hasheightforwidth_isbase) {
            qabstractitemview_hasheightforwidth_isbase = false;
            return QAbstractItemView::hasHeightForWidth();
        } else if (qabstractitemview_hasheightforwidth_callback != nullptr) {
            return qabstractitemview_hasheightforwidth_callback();
        } else {
            return QAbstractItemView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractitemview_paintengine_isbase) {
            qabstractitemview_paintengine_isbase = false;
            return QAbstractItemView::paintEngine();
        } else if (qabstractitemview_paintengine_callback != nullptr) {
            return qabstractitemview_paintengine_callback();
        } else {
            return QAbstractItemView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractitemview_keyreleaseevent_isbase) {
            qabstractitemview_keyreleaseevent_isbase = false;
            QAbstractItemView::keyReleaseEvent(event);
        } else if (qabstractitemview_keyreleaseevent_callback != nullptr) {
            qabstractitemview_keyreleaseevent_callback(this, event);
        } else {
            QAbstractItemView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractitemview_enterevent_isbase) {
            qabstractitemview_enterevent_isbase = false;
            QAbstractItemView::enterEvent(event);
        } else if (qabstractitemview_enterevent_callback != nullptr) {
            qabstractitemview_enterevent_callback(this, event);
        } else {
            QAbstractItemView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractitemview_leaveevent_isbase) {
            qabstractitemview_leaveevent_isbase = false;
            QAbstractItemView::leaveEvent(event);
        } else if (qabstractitemview_leaveevent_callback != nullptr) {
            qabstractitemview_leaveevent_callback(this, event);
        } else {
            QAbstractItemView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractitemview_moveevent_isbase) {
            qabstractitemview_moveevent_isbase = false;
            QAbstractItemView::moveEvent(event);
        } else if (qabstractitemview_moveevent_callback != nullptr) {
            qabstractitemview_moveevent_callback(this, event);
        } else {
            QAbstractItemView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractitemview_closeevent_isbase) {
            qabstractitemview_closeevent_isbase = false;
            QAbstractItemView::closeEvent(event);
        } else if (qabstractitemview_closeevent_callback != nullptr) {
            qabstractitemview_closeevent_callback(this, event);
        } else {
            QAbstractItemView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractitemview_tabletevent_isbase) {
            qabstractitemview_tabletevent_isbase = false;
            QAbstractItemView::tabletEvent(event);
        } else if (qabstractitemview_tabletevent_callback != nullptr) {
            qabstractitemview_tabletevent_callback(this, event);
        } else {
            QAbstractItemView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractitemview_actionevent_isbase) {
            qabstractitemview_actionevent_isbase = false;
            QAbstractItemView::actionEvent(event);
        } else if (qabstractitemview_actionevent_callback != nullptr) {
            qabstractitemview_actionevent_callback(this, event);
        } else {
            QAbstractItemView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractitemview_showevent_isbase) {
            qabstractitemview_showevent_isbase = false;
            QAbstractItemView::showEvent(event);
        } else if (qabstractitemview_showevent_callback != nullptr) {
            qabstractitemview_showevent_callback(this, event);
        } else {
            QAbstractItemView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractitemview_hideevent_isbase) {
            qabstractitemview_hideevent_isbase = false;
            QAbstractItemView::hideEvent(event);
        } else if (qabstractitemview_hideevent_callback != nullptr) {
            qabstractitemview_hideevent_callback(this, event);
        } else {
            QAbstractItemView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractitemview_nativeevent_isbase) {
            qabstractitemview_nativeevent_isbase = false;
            return QAbstractItemView::nativeEvent(eventType, message, result);
        } else if (qabstractitemview_nativeevent_callback != nullptr) {
            return qabstractitemview_nativeevent_callback(this, eventType, message, result);
        } else {
            return QAbstractItemView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractitemview_metric_isbase) {
            qabstractitemview_metric_isbase = false;
            return QAbstractItemView::metric(param1);
        } else if (qabstractitemview_metric_callback != nullptr) {
            return qabstractitemview_metric_callback(this, param1);
        } else {
            return QAbstractItemView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractitemview_initpainter_isbase) {
            qabstractitemview_initpainter_isbase = false;
            QAbstractItemView::initPainter(painter);
        } else if (qabstractitemview_initpainter_callback != nullptr) {
            qabstractitemview_initpainter_callback(this, painter);
        } else {
            QAbstractItemView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractitemview_redirected_isbase) {
            qabstractitemview_redirected_isbase = false;
            return QAbstractItemView::redirected(offset);
        } else if (qabstractitemview_redirected_callback != nullptr) {
            return qabstractitemview_redirected_callback(this, offset);
        } else {
            return QAbstractItemView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractitemview_sharedpainter_isbase) {
            qabstractitemview_sharedpainter_isbase = false;
            return QAbstractItemView::sharedPainter();
        } else if (qabstractitemview_sharedpainter_callback != nullptr) {
            return qabstractitemview_sharedpainter_callback();
        } else {
            return QAbstractItemView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractitemview_childevent_isbase) {
            qabstractitemview_childevent_isbase = false;
            QAbstractItemView::childEvent(event);
        } else if (qabstractitemview_childevent_callback != nullptr) {
            qabstractitemview_childevent_callback(this, event);
        } else {
            QAbstractItemView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractitemview_customevent_isbase) {
            qabstractitemview_customevent_isbase = false;
            QAbstractItemView::customEvent(event);
        } else if (qabstractitemview_customevent_callback != nullptr) {
            qabstractitemview_customevent_callback(this, event);
        } else {
            QAbstractItemView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractitemview_connectnotify_isbase) {
            qabstractitemview_connectnotify_isbase = false;
            QAbstractItemView::connectNotify(signal);
        } else if (qabstractitemview_connectnotify_callback != nullptr) {
            qabstractitemview_connectnotify_callback(this, signal);
        } else {
            QAbstractItemView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractitemview_disconnectnotify_isbase) {
            qabstractitemview_disconnectnotify_isbase = false;
            QAbstractItemView::disconnectNotify(signal);
        } else if (qabstractitemview_disconnectnotify_callback != nullptr) {
            qabstractitemview_disconnectnotify_callback(this, signal);
        } else {
            QAbstractItemView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qabstractitemview_state_isbase) {
            qabstractitemview_state_isbase = false;
            return QAbstractItemView::state();
        } else if (qabstractitemview_state_callback != nullptr) {
            return qabstractitemview_state_callback();
        } else {
            return QAbstractItemView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qabstractitemview_setstate_isbase) {
            qabstractitemview_setstate_isbase = false;
            QAbstractItemView::setState(state);
        } else if (qabstractitemview_setstate_callback != nullptr) {
            qabstractitemview_setstate_callback(this, state);
        } else {
            QAbstractItemView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qabstractitemview_scheduledelayeditemslayout_isbase) {
            qabstractitemview_scheduledelayeditemslayout_isbase = false;
            QAbstractItemView::scheduleDelayedItemsLayout();
        } else if (qabstractitemview_scheduledelayeditemslayout_callback != nullptr) {
            qabstractitemview_scheduledelayeditemslayout_callback();
        } else {
            QAbstractItemView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qabstractitemview_executedelayeditemslayout_isbase) {
            qabstractitemview_executedelayeditemslayout_isbase = false;
            QAbstractItemView::executeDelayedItemsLayout();
        } else if (qabstractitemview_executedelayeditemslayout_callback != nullptr) {
            qabstractitemview_executedelayeditemslayout_callback();
        } else {
            QAbstractItemView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qabstractitemview_setdirtyregion_isbase) {
            qabstractitemview_setdirtyregion_isbase = false;
            QAbstractItemView::setDirtyRegion(region);
        } else if (qabstractitemview_setdirtyregion_callback != nullptr) {
            qabstractitemview_setdirtyregion_callback(this, region);
        } else {
            QAbstractItemView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qabstractitemview_scrolldirtyregion_isbase) {
            qabstractitemview_scrolldirtyregion_isbase = false;
            QAbstractItemView::scrollDirtyRegion(dx, dy);
        } else if (qabstractitemview_scrolldirtyregion_callback != nullptr) {
            qabstractitemview_scrolldirtyregion_callback(this, dx, dy);
        } else {
            QAbstractItemView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qabstractitemview_dirtyregionoffset_isbase) {
            qabstractitemview_dirtyregionoffset_isbase = false;
            return QAbstractItemView::dirtyRegionOffset();
        } else if (qabstractitemview_dirtyregionoffset_callback != nullptr) {
            return qabstractitemview_dirtyregionoffset_callback();
        } else {
            return QAbstractItemView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qabstractitemview_startautoscroll_isbase) {
            qabstractitemview_startautoscroll_isbase = false;
            QAbstractItemView::startAutoScroll();
        } else if (qabstractitemview_startautoscroll_callback != nullptr) {
            qabstractitemview_startautoscroll_callback();
        } else {
            QAbstractItemView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qabstractitemview_stopautoscroll_isbase) {
            qabstractitemview_stopautoscroll_isbase = false;
            QAbstractItemView::stopAutoScroll();
        } else if (qabstractitemview_stopautoscroll_callback != nullptr) {
            qabstractitemview_stopautoscroll_callback();
        } else {
            QAbstractItemView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qabstractitemview_doautoscroll_isbase) {
            qabstractitemview_doautoscroll_isbase = false;
            QAbstractItemView::doAutoScroll();
        } else if (qabstractitemview_doautoscroll_callback != nullptr) {
            qabstractitemview_doautoscroll_callback();
        } else {
            QAbstractItemView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qabstractitemview_dropindicatorposition_isbase) {
            qabstractitemview_dropindicatorposition_isbase = false;
            return QAbstractItemView::dropIndicatorPosition();
        } else if (qabstractitemview_dropindicatorposition_callback != nullptr) {
            return qabstractitemview_dropindicatorposition_callback();
        } else {
            return QAbstractItemView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qabstractitemview_setviewportmargins_isbase) {
            qabstractitemview_setviewportmargins_isbase = false;
            QAbstractItemView::setViewportMargins(left, top, right, bottom);
        } else if (qabstractitemview_setviewportmargins_callback != nullptr) {
            qabstractitemview_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QAbstractItemView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qabstractitemview_viewportmargins_isbase) {
            qabstractitemview_viewportmargins_isbase = false;
            return QAbstractItemView::viewportMargins();
        } else if (qabstractitemview_viewportmargins_callback != nullptr) {
            return qabstractitemview_viewportmargins_callback();
        } else {
            return QAbstractItemView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qabstractitemview_drawframe_isbase) {
            qabstractitemview_drawframe_isbase = false;
            QAbstractItemView::drawFrame(param1);
        } else if (qabstractitemview_drawframe_callback != nullptr) {
            qabstractitemview_drawframe_callback(this, param1);
        } else {
            QAbstractItemView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractitemview_updatemicrofocus_isbase) {
            qabstractitemview_updatemicrofocus_isbase = false;
            QAbstractItemView::updateMicroFocus();
        } else if (qabstractitemview_updatemicrofocus_callback != nullptr) {
            qabstractitemview_updatemicrofocus_callback();
        } else {
            QAbstractItemView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qabstractitemview_create_isbase) {
            qabstractitemview_create_isbase = false;
            QAbstractItemView::create();
        } else if (qabstractitemview_create_callback != nullptr) {
            qabstractitemview_create_callback();
        } else {
            QAbstractItemView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qabstractitemview_destroy_isbase) {
            qabstractitemview_destroy_isbase = false;
            QAbstractItemView::destroy();
        } else if (qabstractitemview_destroy_callback != nullptr) {
            qabstractitemview_destroy_callback();
        } else {
            QAbstractItemView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qabstractitemview_focusnextchild_isbase) {
            qabstractitemview_focusnextchild_isbase = false;
            return QAbstractItemView::focusNextChild();
        } else if (qabstractitemview_focusnextchild_callback != nullptr) {
            return qabstractitemview_focusnextchild_callback();
        } else {
            return QAbstractItemView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qabstractitemview_focuspreviouschild_isbase) {
            qabstractitemview_focuspreviouschild_isbase = false;
            return QAbstractItemView::focusPreviousChild();
        } else if (qabstractitemview_focuspreviouschild_callback != nullptr) {
            return qabstractitemview_focuspreviouschild_callback();
        } else {
            return QAbstractItemView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractitemview_sender_isbase) {
            qabstractitemview_sender_isbase = false;
            return QAbstractItemView::sender();
        } else if (qabstractitemview_sender_callback != nullptr) {
            return qabstractitemview_sender_callback();
        } else {
            return QAbstractItemView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractitemview_sendersignalindex_isbase) {
            qabstractitemview_sendersignalindex_isbase = false;
            return QAbstractItemView::senderSignalIndex();
        } else if (qabstractitemview_sendersignalindex_callback != nullptr) {
            return qabstractitemview_sendersignalindex_callback();
        } else {
            return QAbstractItemView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractitemview_receivers_isbase) {
            qabstractitemview_receivers_isbase = false;
            return QAbstractItemView::receivers(signal);
        } else if (qabstractitemview_receivers_callback != nullptr) {
            return qabstractitemview_receivers_callback(this, signal);
        } else {
            return QAbstractItemView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractitemview_issignalconnected_isbase) {
            qabstractitemview_issignalconnected_isbase = false;
            return QAbstractItemView::isSignalConnected(signal);
        } else if (qabstractitemview_issignalconnected_callback != nullptr) {
            return qabstractitemview_issignalconnected_callback(this, signal);
        } else {
            return QAbstractItemView::isSignalConnected(signal);
        }
    }
};

#endif
