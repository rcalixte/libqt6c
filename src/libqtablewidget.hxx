#pragma once
#ifndef SRCC_LIBVIRTUALQTABLEWIDGET_H
#define SRCC_LIBVIRTUALQTABLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTableWidgetItem so that we can call protected methods
class VirtualQTableWidgetItem : public QTableWidgetItem {

  public:
    // Virtual class public types (including callbacks)
    using QTableWidgetItem_Clone_Callback = QTableWidgetItem* (*)();
    using QTableWidgetItem_Data_Callback = QVariant (*)(const QTableWidgetItem*, int);
    using QTableWidgetItem_SetData_Callback = void (*)(QTableWidgetItem*, int, const QVariant&);
    using QTableWidgetItem_OperatorLesser_Callback = bool (*)(const QTableWidgetItem*, const QTableWidgetItem&);
    using QTableWidgetItem_Read_Callback = void (*)(QTableWidgetItem*, QDataStream&);
    using QTableWidgetItem_Write_Callback = void (*)(const QTableWidgetItem*, QDataStream&);

  protected:
    // Instance callback storage
    QTableWidgetItem_Clone_Callback qtablewidgetitem_clone_callback = nullptr;
    QTableWidgetItem_Data_Callback qtablewidgetitem_data_callback = nullptr;
    QTableWidgetItem_SetData_Callback qtablewidgetitem_setdata_callback = nullptr;
    QTableWidgetItem_OperatorLesser_Callback qtablewidgetitem_operatorlesser_callback = nullptr;
    QTableWidgetItem_Read_Callback qtablewidgetitem_read_callback = nullptr;
    QTableWidgetItem_Write_Callback qtablewidgetitem_write_callback = nullptr;

    // Instance base flags
    mutable bool qtablewidgetitem_clone_isbase = false;
    mutable bool qtablewidgetitem_data_isbase = false;
    mutable bool qtablewidgetitem_setdata_isbase = false;
    mutable bool qtablewidgetitem_operatorlesser_isbase = false;
    mutable bool qtablewidgetitem_read_isbase = false;
    mutable bool qtablewidgetitem_write_isbase = false;

  public:
    VirtualQTableWidgetItem() : QTableWidgetItem(){};
    VirtualQTableWidgetItem(const QString& text) : QTableWidgetItem(text){};
    VirtualQTableWidgetItem(const QIcon& icon, const QString& text) : QTableWidgetItem(icon, text){};
    VirtualQTableWidgetItem(const QTableWidgetItem& other) : QTableWidgetItem(other){};
    VirtualQTableWidgetItem(int typeVal) : QTableWidgetItem(typeVal){};
    VirtualQTableWidgetItem(const QString& text, int typeVal) : QTableWidgetItem(text, typeVal){};
    VirtualQTableWidgetItem(const QIcon& icon, const QString& text, int typeVal) : QTableWidgetItem(icon, text, typeVal){};

    ~VirtualQTableWidgetItem() {
        qtablewidgetitem_clone_callback = nullptr;
        qtablewidgetitem_data_callback = nullptr;
        qtablewidgetitem_setdata_callback = nullptr;
        qtablewidgetitem_operatorlesser_callback = nullptr;
        qtablewidgetitem_read_callback = nullptr;
        qtablewidgetitem_write_callback = nullptr;
    }

    // Callback setters
    void setQTableWidgetItem_Clone_Callback(QTableWidgetItem_Clone_Callback cb) { qtablewidgetitem_clone_callback = cb; }
    void setQTableWidgetItem_Data_Callback(QTableWidgetItem_Data_Callback cb) { qtablewidgetitem_data_callback = cb; }
    void setQTableWidgetItem_SetData_Callback(QTableWidgetItem_SetData_Callback cb) { qtablewidgetitem_setdata_callback = cb; }
    void setQTableWidgetItem_OperatorLesser_Callback(QTableWidgetItem_OperatorLesser_Callback cb) { qtablewidgetitem_operatorlesser_callback = cb; }
    void setQTableWidgetItem_Read_Callback(QTableWidgetItem_Read_Callback cb) { qtablewidgetitem_read_callback = cb; }
    void setQTableWidgetItem_Write_Callback(QTableWidgetItem_Write_Callback cb) { qtablewidgetitem_write_callback = cb; }

    // Base flag setters
    void setQTableWidgetItem_Clone_IsBase(bool value) const { qtablewidgetitem_clone_isbase = value; }
    void setQTableWidgetItem_Data_IsBase(bool value) const { qtablewidgetitem_data_isbase = value; }
    void setQTableWidgetItem_SetData_IsBase(bool value) const { qtablewidgetitem_setdata_isbase = value; }
    void setQTableWidgetItem_OperatorLesser_IsBase(bool value) const { qtablewidgetitem_operatorlesser_isbase = value; }
    void setQTableWidgetItem_Read_IsBase(bool value) const { qtablewidgetitem_read_isbase = value; }
    void setQTableWidgetItem_Write_IsBase(bool value) const { qtablewidgetitem_write_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QTableWidgetItem* clone() const override {
        if (qtablewidgetitem_clone_isbase) {
            qtablewidgetitem_clone_isbase = false;
            return QTableWidgetItem::clone();
        } else if (qtablewidgetitem_clone_callback != nullptr) {
            return qtablewidgetitem_clone_callback();
        } else {
            return QTableWidgetItem::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(int role) const override {
        if (qtablewidgetitem_data_isbase) {
            qtablewidgetitem_data_isbase = false;
            return QTableWidgetItem::data(role);
        } else if (qtablewidgetitem_data_callback != nullptr) {
            return qtablewidgetitem_data_callback(this, role);
        } else {
            return QTableWidgetItem::data(role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(int role, const QVariant& value) override {
        if (qtablewidgetitem_setdata_isbase) {
            qtablewidgetitem_setdata_isbase = false;
            QTableWidgetItem::setData(role, value);
        } else if (qtablewidgetitem_setdata_callback != nullptr) {
            qtablewidgetitem_setdata_callback(this, role, value);
        } else {
            QTableWidgetItem::setData(role, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool operator<(const QTableWidgetItem& other) const override {
        if (qtablewidgetitem_operatorlesser_isbase) {
            qtablewidgetitem_operatorlesser_isbase = false;
            return QTableWidgetItem::operator<(other);
        } else if (qtablewidgetitem_operatorlesser_callback != nullptr) {
            return qtablewidgetitem_operatorlesser_callback(this, other);
        } else {
            return QTableWidgetItem::operator<(other);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void read(QDataStream& in) override {
        if (qtablewidgetitem_read_isbase) {
            qtablewidgetitem_read_isbase = false;
            QTableWidgetItem::read(in);
        } else if (qtablewidgetitem_read_callback != nullptr) {
            qtablewidgetitem_read_callback(this, in);
        } else {
            QTableWidgetItem::read(in);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(QDataStream& out) const override {
        if (qtablewidgetitem_write_isbase) {
            qtablewidgetitem_write_isbase = false;
            QTableWidgetItem::write(out);
        } else if (qtablewidgetitem_write_callback != nullptr) {
            qtablewidgetitem_write_callback(this, out);
        } else {
            QTableWidgetItem::write(out);
        }
    }
};

// This class is a subclass of QTableWidget so that we can call protected methods
class VirtualQTableWidget : public QTableWidget {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTableWidget_Metacall_Callback = int (*)(QTableWidget*, QMetaObject::Call, int, void**);
    using QTableWidget_Event_Callback = bool (*)(QTableWidget*, QEvent*);
    using QTableWidget_MimeTypes_Callback = QStringList (*)();
    using QTableWidget_MimeData_Callback = QMimeData* (*)(const QTableWidget*, const QList<QTableWidgetItem*>&);
    using QTableWidget_DropMimeData_Callback = bool (*)(QTableWidget*, int, int, const QMimeData*, Qt::DropAction);
    using QTableWidget_SupportedDropActions_Callback = Qt::DropActions (*)();
    using QTableWidget_DropEvent_Callback = void (*)(QTableWidget*, QDropEvent*);
    using QTableWidget_SetRootIndex_Callback = void (*)(QTableWidget*, const QModelIndex&);
    using QTableWidget_SetSelectionModel_Callback = void (*)(QTableWidget*, QItemSelectionModel*);
    using QTableWidget_DoItemsLayout_Callback = void (*)();
    using QTableWidget_VisualRect_Callback = QRect (*)(const QTableWidget*, const QModelIndex&);
    using QTableWidget_ScrollTo_Callback = void (*)(QTableWidget*, const QModelIndex&, QAbstractItemView::ScrollHint);
    using QTableWidget_IndexAt_Callback = QModelIndex (*)(const QTableWidget*, const QPoint&);
    using QTableWidget_ScrollContentsBy_Callback = void (*)(QTableWidget*, int, int);
    using QTableWidget_InitViewItemOption_Callback = void (*)(const QTableWidget*, QStyleOptionViewItem*);
    using QTableWidget_PaintEvent_Callback = void (*)(QTableWidget*, QPaintEvent*);
    using QTableWidget_TimerEvent_Callback = void (*)(QTableWidget*, QTimerEvent*);
    using QTableWidget_HorizontalOffset_Callback = int (*)();
    using QTableWidget_VerticalOffset_Callback = int (*)();
    using QTableWidget_MoveCursor_Callback = QModelIndex (*)(QTableWidget*, int, Qt::KeyboardModifiers);
    using QTableWidget_SetSelection_Callback = void (*)(QTableWidget*, const QRect&, QItemSelectionModel::SelectionFlags);
    using QTableWidget_VisualRegionForSelection_Callback = QRegion (*)(const QTableWidget*, const QItemSelection&);
    using QTableWidget_SelectedIndexes_Callback = QModelIndexList (*)();
    using QTableWidget_UpdateGeometries_Callback = void (*)();
    using QTableWidget_ViewportSizeHint_Callback = QSize (*)();
    using QTableWidget_SizeHintForRow_Callback = int (*)(const QTableWidget*, int);
    using QTableWidget_SizeHintForColumn_Callback = int (*)(const QTableWidget*, int);
    using QTableWidget_VerticalScrollbarAction_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_HorizontalScrollbarAction_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_IsIndexHidden_Callback = bool (*)(const QTableWidget*, const QModelIndex&);
    using QTableWidget_SelectionChanged_Callback = void (*)(QTableWidget*, const QItemSelection&, const QItemSelection&);
    using QTableWidget_CurrentChanged_Callback = void (*)(QTableWidget*, const QModelIndex&, const QModelIndex&);
    using QTableWidget_KeyboardSearch_Callback = void (*)(QTableWidget*, const QString&);
    using QTableWidget_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTableWidget*, const QModelIndex&);
    using QTableWidget_InputMethodQuery_Callback = QVariant (*)(const QTableWidget*, Qt::InputMethodQuery);
    using QTableWidget_Reset_Callback = void (*)();
    using QTableWidget_SelectAll_Callback = void (*)();
    using QTableWidget_DataChanged_Callback = void (*)(QTableWidget*, const QModelIndex&, const QModelIndex&, const QList<int>&);
    using QTableWidget_RowsInserted_Callback = void (*)(QTableWidget*, const QModelIndex&, int, int);
    using QTableWidget_RowsAboutToBeRemoved_Callback = void (*)(QTableWidget*, const QModelIndex&, int, int);
    using QTableWidget_UpdateEditorData_Callback = void (*)();
    using QTableWidget_UpdateEditorGeometries_Callback = void (*)();
    using QTableWidget_VerticalScrollbarValueChanged_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_HorizontalScrollbarValueChanged_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_CloseEditor_Callback = void (*)(QTableWidget*, QWidget*, QAbstractItemDelegate::EndEditHint);
    using QTableWidget_CommitData_Callback = void (*)(QTableWidget*, QWidget*);
    using QTableWidget_EditorDestroyed_Callback = void (*)(QTableWidget*, QObject*);
    using QTableWidget_Edit2_Callback = bool (*)(QTableWidget*, const QModelIndex&, QAbstractItemView::EditTrigger, QEvent*);
    using QTableWidget_SelectionCommand_Callback = QItemSelectionModel::SelectionFlags (*)(const QTableWidget*, const QModelIndex&, const QEvent*);
    using QTableWidget_StartDrag_Callback = void (*)(QTableWidget*, Qt::DropActions);
    using QTableWidget_FocusNextPrevChild_Callback = bool (*)(QTableWidget*, bool);
    using QTableWidget_ViewportEvent_Callback = bool (*)(QTableWidget*, QEvent*);
    using QTableWidget_MousePressEvent_Callback = void (*)(QTableWidget*, QMouseEvent*);
    using QTableWidget_MouseMoveEvent_Callback = void (*)(QTableWidget*, QMouseEvent*);
    using QTableWidget_MouseReleaseEvent_Callback = void (*)(QTableWidget*, QMouseEvent*);
    using QTableWidget_MouseDoubleClickEvent_Callback = void (*)(QTableWidget*, QMouseEvent*);
    using QTableWidget_DragEnterEvent_Callback = void (*)(QTableWidget*, QDragEnterEvent*);
    using QTableWidget_DragMoveEvent_Callback = void (*)(QTableWidget*, QDragMoveEvent*);
    using QTableWidget_DragLeaveEvent_Callback = void (*)(QTableWidget*, QDragLeaveEvent*);
    using QTableWidget_FocusInEvent_Callback = void (*)(QTableWidget*, QFocusEvent*);
    using QTableWidget_FocusOutEvent_Callback = void (*)(QTableWidget*, QFocusEvent*);
    using QTableWidget_KeyPressEvent_Callback = void (*)(QTableWidget*, QKeyEvent*);
    using QTableWidget_ResizeEvent_Callback = void (*)(QTableWidget*, QResizeEvent*);
    using QTableWidget_InputMethodEvent_Callback = void (*)(QTableWidget*, QInputMethodEvent*);
    using QTableWidget_EventFilter_Callback = bool (*)(QTableWidget*, QObject*, QEvent*);
    using QTableWidget_MinimumSizeHint_Callback = QSize (*)();
    using QTableWidget_SizeHint_Callback = QSize (*)();
    using QTableWidget_SetupViewport_Callback = void (*)(QTableWidget*, QWidget*);
    using QTableWidget_WheelEvent_Callback = void (*)(QTableWidget*, QWheelEvent*);
    using QTableWidget_ContextMenuEvent_Callback = void (*)(QTableWidget*, QContextMenuEvent*);
    using QTableWidget_ChangeEvent_Callback = void (*)(QTableWidget*, QEvent*);
    using QTableWidget_InitStyleOption_Callback = void (*)(const QTableWidget*, QStyleOptionFrame*);
    using QTableWidget_DevType_Callback = int (*)();
    using QTableWidget_SetVisible_Callback = void (*)(QTableWidget*, bool);
    using QTableWidget_HeightForWidth_Callback = int (*)(const QTableWidget*, int);
    using QTableWidget_HasHeightForWidth_Callback = bool (*)();
    using QTableWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QTableWidget_KeyReleaseEvent_Callback = void (*)(QTableWidget*, QKeyEvent*);
    using QTableWidget_EnterEvent_Callback = void (*)(QTableWidget*, QEnterEvent*);
    using QTableWidget_LeaveEvent_Callback = void (*)(QTableWidget*, QEvent*);
    using QTableWidget_MoveEvent_Callback = void (*)(QTableWidget*, QMoveEvent*);
    using QTableWidget_CloseEvent_Callback = void (*)(QTableWidget*, QCloseEvent*);
    using QTableWidget_TabletEvent_Callback = void (*)(QTableWidget*, QTabletEvent*);
    using QTableWidget_ActionEvent_Callback = void (*)(QTableWidget*, QActionEvent*);
    using QTableWidget_ShowEvent_Callback = void (*)(QTableWidget*, QShowEvent*);
    using QTableWidget_HideEvent_Callback = void (*)(QTableWidget*, QHideEvent*);
    using QTableWidget_NativeEvent_Callback = bool (*)(QTableWidget*, const QByteArray&, void*, qintptr*);
    using QTableWidget_Metric_Callback = int (*)(const QTableWidget*, QPaintDevice::PaintDeviceMetric);
    using QTableWidget_InitPainter_Callback = void (*)(const QTableWidget*, QPainter*);
    using QTableWidget_Redirected_Callback = QPaintDevice* (*)(const QTableWidget*, QPoint*);
    using QTableWidget_SharedPainter_Callback = QPainter* (*)();
    using QTableWidget_ChildEvent_Callback = void (*)(QTableWidget*, QChildEvent*);
    using QTableWidget_CustomEvent_Callback = void (*)(QTableWidget*, QEvent*);
    using QTableWidget_ConnectNotify_Callback = void (*)(QTableWidget*, const QMetaMethod&);
    using QTableWidget_DisconnectNotify_Callback = void (*)(QTableWidget*, const QMetaMethod&);
    using QTableWidget_RowMoved_Callback = void (*)(QTableWidget*, int, int, int);
    using QTableWidget_ColumnMoved_Callback = void (*)(QTableWidget*, int, int, int);
    using QTableWidget_RowResized_Callback = void (*)(QTableWidget*, int, int, int);
    using QTableWidget_ColumnResized_Callback = void (*)(QTableWidget*, int, int, int);
    using QTableWidget_RowCountChanged_Callback = void (*)(QTableWidget*, int, int);
    using QTableWidget_ColumnCountChanged_Callback = void (*)(QTableWidget*, int, int);
    using QTableWidget_State_Callback = QAbstractItemView::State (*)();
    using QTableWidget_SetState_Callback = void (*)(QTableWidget*, int);
    using QTableWidget_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QTableWidget_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QTableWidget_SetDirtyRegion_Callback = void (*)(QTableWidget*, const QRegion&);
    using QTableWidget_ScrollDirtyRegion_Callback = void (*)(QTableWidget*, int, int);
    using QTableWidget_DirtyRegionOffset_Callback = QPoint (*)();
    using QTableWidget_StartAutoScroll_Callback = void (*)();
    using QTableWidget_StopAutoScroll_Callback = void (*)();
    using QTableWidget_DoAutoScroll_Callback = void (*)();
    using QTableWidget_DropIndicatorPosition_Callback = QAbstractItemView::DropIndicatorPosition (*)();
    using QTableWidget_SetViewportMargins_Callback = void (*)(QTableWidget*, int, int, int, int);
    using QTableWidget_ViewportMargins_Callback = QMargins (*)();
    using QTableWidget_DrawFrame_Callback = void (*)(QTableWidget*, QPainter*);
    using QTableWidget_UpdateMicroFocus_Callback = void (*)();
    using QTableWidget_Create_Callback = void (*)();
    using QTableWidget_Destroy_Callback = void (*)();
    using QTableWidget_FocusNextChild_Callback = bool (*)();
    using QTableWidget_FocusPreviousChild_Callback = bool (*)();
    using QTableWidget_Sender_Callback = QObject* (*)();
    using QTableWidget_SenderSignalIndex_Callback = int (*)();
    using QTableWidget_Receivers_Callback = int (*)(const QTableWidget*, const char*);
    using QTableWidget_IsSignalConnected_Callback = bool (*)(const QTableWidget*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTableWidget_Metacall_Callback qtablewidget_metacall_callback = nullptr;
    QTableWidget_Event_Callback qtablewidget_event_callback = nullptr;
    QTableWidget_MimeTypes_Callback qtablewidget_mimetypes_callback = nullptr;
    QTableWidget_MimeData_Callback qtablewidget_mimedata_callback = nullptr;
    QTableWidget_DropMimeData_Callback qtablewidget_dropmimedata_callback = nullptr;
    QTableWidget_SupportedDropActions_Callback qtablewidget_supporteddropactions_callback = nullptr;
    QTableWidget_DropEvent_Callback qtablewidget_dropevent_callback = nullptr;
    QTableWidget_SetRootIndex_Callback qtablewidget_setrootindex_callback = nullptr;
    QTableWidget_SetSelectionModel_Callback qtablewidget_setselectionmodel_callback = nullptr;
    QTableWidget_DoItemsLayout_Callback qtablewidget_doitemslayout_callback = nullptr;
    QTableWidget_VisualRect_Callback qtablewidget_visualrect_callback = nullptr;
    QTableWidget_ScrollTo_Callback qtablewidget_scrollto_callback = nullptr;
    QTableWidget_IndexAt_Callback qtablewidget_indexat_callback = nullptr;
    QTableWidget_ScrollContentsBy_Callback qtablewidget_scrollcontentsby_callback = nullptr;
    QTableWidget_InitViewItemOption_Callback qtablewidget_initviewitemoption_callback = nullptr;
    QTableWidget_PaintEvent_Callback qtablewidget_paintevent_callback = nullptr;
    QTableWidget_TimerEvent_Callback qtablewidget_timerevent_callback = nullptr;
    QTableWidget_HorizontalOffset_Callback qtablewidget_horizontaloffset_callback = nullptr;
    QTableWidget_VerticalOffset_Callback qtablewidget_verticaloffset_callback = nullptr;
    QTableWidget_MoveCursor_Callback qtablewidget_movecursor_callback = nullptr;
    QTableWidget_SetSelection_Callback qtablewidget_setselection_callback = nullptr;
    QTableWidget_VisualRegionForSelection_Callback qtablewidget_visualregionforselection_callback = nullptr;
    QTableWidget_SelectedIndexes_Callback qtablewidget_selectedindexes_callback = nullptr;
    QTableWidget_UpdateGeometries_Callback qtablewidget_updategeometries_callback = nullptr;
    QTableWidget_ViewportSizeHint_Callback qtablewidget_viewportsizehint_callback = nullptr;
    QTableWidget_SizeHintForRow_Callback qtablewidget_sizehintforrow_callback = nullptr;
    QTableWidget_SizeHintForColumn_Callback qtablewidget_sizehintforcolumn_callback = nullptr;
    QTableWidget_VerticalScrollbarAction_Callback qtablewidget_verticalscrollbaraction_callback = nullptr;
    QTableWidget_HorizontalScrollbarAction_Callback qtablewidget_horizontalscrollbaraction_callback = nullptr;
    QTableWidget_IsIndexHidden_Callback qtablewidget_isindexhidden_callback = nullptr;
    QTableWidget_SelectionChanged_Callback qtablewidget_selectionchanged_callback = nullptr;
    QTableWidget_CurrentChanged_Callback qtablewidget_currentchanged_callback = nullptr;
    QTableWidget_KeyboardSearch_Callback qtablewidget_keyboardsearch_callback = nullptr;
    QTableWidget_ItemDelegateForIndex_Callback qtablewidget_itemdelegateforindex_callback = nullptr;
    QTableWidget_InputMethodQuery_Callback qtablewidget_inputmethodquery_callback = nullptr;
    QTableWidget_Reset_Callback qtablewidget_reset_callback = nullptr;
    QTableWidget_SelectAll_Callback qtablewidget_selectall_callback = nullptr;
    QTableWidget_DataChanged_Callback qtablewidget_datachanged_callback = nullptr;
    QTableWidget_RowsInserted_Callback qtablewidget_rowsinserted_callback = nullptr;
    QTableWidget_RowsAboutToBeRemoved_Callback qtablewidget_rowsabouttoberemoved_callback = nullptr;
    QTableWidget_UpdateEditorData_Callback qtablewidget_updateeditordata_callback = nullptr;
    QTableWidget_UpdateEditorGeometries_Callback qtablewidget_updateeditorgeometries_callback = nullptr;
    QTableWidget_VerticalScrollbarValueChanged_Callback qtablewidget_verticalscrollbarvaluechanged_callback = nullptr;
    QTableWidget_HorizontalScrollbarValueChanged_Callback qtablewidget_horizontalscrollbarvaluechanged_callback = nullptr;
    QTableWidget_CloseEditor_Callback qtablewidget_closeeditor_callback = nullptr;
    QTableWidget_CommitData_Callback qtablewidget_commitdata_callback = nullptr;
    QTableWidget_EditorDestroyed_Callback qtablewidget_editordestroyed_callback = nullptr;
    QTableWidget_Edit2_Callback qtablewidget_edit2_callback = nullptr;
    QTableWidget_SelectionCommand_Callback qtablewidget_selectioncommand_callback = nullptr;
    QTableWidget_StartDrag_Callback qtablewidget_startdrag_callback = nullptr;
    QTableWidget_FocusNextPrevChild_Callback qtablewidget_focusnextprevchild_callback = nullptr;
    QTableWidget_ViewportEvent_Callback qtablewidget_viewportevent_callback = nullptr;
    QTableWidget_MousePressEvent_Callback qtablewidget_mousepressevent_callback = nullptr;
    QTableWidget_MouseMoveEvent_Callback qtablewidget_mousemoveevent_callback = nullptr;
    QTableWidget_MouseReleaseEvent_Callback qtablewidget_mousereleaseevent_callback = nullptr;
    QTableWidget_MouseDoubleClickEvent_Callback qtablewidget_mousedoubleclickevent_callback = nullptr;
    QTableWidget_DragEnterEvent_Callback qtablewidget_dragenterevent_callback = nullptr;
    QTableWidget_DragMoveEvent_Callback qtablewidget_dragmoveevent_callback = nullptr;
    QTableWidget_DragLeaveEvent_Callback qtablewidget_dragleaveevent_callback = nullptr;
    QTableWidget_FocusInEvent_Callback qtablewidget_focusinevent_callback = nullptr;
    QTableWidget_FocusOutEvent_Callback qtablewidget_focusoutevent_callback = nullptr;
    QTableWidget_KeyPressEvent_Callback qtablewidget_keypressevent_callback = nullptr;
    QTableWidget_ResizeEvent_Callback qtablewidget_resizeevent_callback = nullptr;
    QTableWidget_InputMethodEvent_Callback qtablewidget_inputmethodevent_callback = nullptr;
    QTableWidget_EventFilter_Callback qtablewidget_eventfilter_callback = nullptr;
    QTableWidget_MinimumSizeHint_Callback qtablewidget_minimumsizehint_callback = nullptr;
    QTableWidget_SizeHint_Callback qtablewidget_sizehint_callback = nullptr;
    QTableWidget_SetupViewport_Callback qtablewidget_setupviewport_callback = nullptr;
    QTableWidget_WheelEvent_Callback qtablewidget_wheelevent_callback = nullptr;
    QTableWidget_ContextMenuEvent_Callback qtablewidget_contextmenuevent_callback = nullptr;
    QTableWidget_ChangeEvent_Callback qtablewidget_changeevent_callback = nullptr;
    QTableWidget_InitStyleOption_Callback qtablewidget_initstyleoption_callback = nullptr;
    QTableWidget_DevType_Callback qtablewidget_devtype_callback = nullptr;
    QTableWidget_SetVisible_Callback qtablewidget_setvisible_callback = nullptr;
    QTableWidget_HeightForWidth_Callback qtablewidget_heightforwidth_callback = nullptr;
    QTableWidget_HasHeightForWidth_Callback qtablewidget_hasheightforwidth_callback = nullptr;
    QTableWidget_PaintEngine_Callback qtablewidget_paintengine_callback = nullptr;
    QTableWidget_KeyReleaseEvent_Callback qtablewidget_keyreleaseevent_callback = nullptr;
    QTableWidget_EnterEvent_Callback qtablewidget_enterevent_callback = nullptr;
    QTableWidget_LeaveEvent_Callback qtablewidget_leaveevent_callback = nullptr;
    QTableWidget_MoveEvent_Callback qtablewidget_moveevent_callback = nullptr;
    QTableWidget_CloseEvent_Callback qtablewidget_closeevent_callback = nullptr;
    QTableWidget_TabletEvent_Callback qtablewidget_tabletevent_callback = nullptr;
    QTableWidget_ActionEvent_Callback qtablewidget_actionevent_callback = nullptr;
    QTableWidget_ShowEvent_Callback qtablewidget_showevent_callback = nullptr;
    QTableWidget_HideEvent_Callback qtablewidget_hideevent_callback = nullptr;
    QTableWidget_NativeEvent_Callback qtablewidget_nativeevent_callback = nullptr;
    QTableWidget_Metric_Callback qtablewidget_metric_callback = nullptr;
    QTableWidget_InitPainter_Callback qtablewidget_initpainter_callback = nullptr;
    QTableWidget_Redirected_Callback qtablewidget_redirected_callback = nullptr;
    QTableWidget_SharedPainter_Callback qtablewidget_sharedpainter_callback = nullptr;
    QTableWidget_ChildEvent_Callback qtablewidget_childevent_callback = nullptr;
    QTableWidget_CustomEvent_Callback qtablewidget_customevent_callback = nullptr;
    QTableWidget_ConnectNotify_Callback qtablewidget_connectnotify_callback = nullptr;
    QTableWidget_DisconnectNotify_Callback qtablewidget_disconnectnotify_callback = nullptr;
    QTableWidget_RowMoved_Callback qtablewidget_rowmoved_callback = nullptr;
    QTableWidget_ColumnMoved_Callback qtablewidget_columnmoved_callback = nullptr;
    QTableWidget_RowResized_Callback qtablewidget_rowresized_callback = nullptr;
    QTableWidget_ColumnResized_Callback qtablewidget_columnresized_callback = nullptr;
    QTableWidget_RowCountChanged_Callback qtablewidget_rowcountchanged_callback = nullptr;
    QTableWidget_ColumnCountChanged_Callback qtablewidget_columncountchanged_callback = nullptr;
    QTableWidget_State_Callback qtablewidget_state_callback = nullptr;
    QTableWidget_SetState_Callback qtablewidget_setstate_callback = nullptr;
    QTableWidget_ScheduleDelayedItemsLayout_Callback qtablewidget_scheduledelayeditemslayout_callback = nullptr;
    QTableWidget_ExecuteDelayedItemsLayout_Callback qtablewidget_executedelayeditemslayout_callback = nullptr;
    QTableWidget_SetDirtyRegion_Callback qtablewidget_setdirtyregion_callback = nullptr;
    QTableWidget_ScrollDirtyRegion_Callback qtablewidget_scrolldirtyregion_callback = nullptr;
    QTableWidget_DirtyRegionOffset_Callback qtablewidget_dirtyregionoffset_callback = nullptr;
    QTableWidget_StartAutoScroll_Callback qtablewidget_startautoscroll_callback = nullptr;
    QTableWidget_StopAutoScroll_Callback qtablewidget_stopautoscroll_callback = nullptr;
    QTableWidget_DoAutoScroll_Callback qtablewidget_doautoscroll_callback = nullptr;
    QTableWidget_DropIndicatorPosition_Callback qtablewidget_dropindicatorposition_callback = nullptr;
    QTableWidget_SetViewportMargins_Callback qtablewidget_setviewportmargins_callback = nullptr;
    QTableWidget_ViewportMargins_Callback qtablewidget_viewportmargins_callback = nullptr;
    QTableWidget_DrawFrame_Callback qtablewidget_drawframe_callback = nullptr;
    QTableWidget_UpdateMicroFocus_Callback qtablewidget_updatemicrofocus_callback = nullptr;
    QTableWidget_Create_Callback qtablewidget_create_callback = nullptr;
    QTableWidget_Destroy_Callback qtablewidget_destroy_callback = nullptr;
    QTableWidget_FocusNextChild_Callback qtablewidget_focusnextchild_callback = nullptr;
    QTableWidget_FocusPreviousChild_Callback qtablewidget_focuspreviouschild_callback = nullptr;
    QTableWidget_Sender_Callback qtablewidget_sender_callback = nullptr;
    QTableWidget_SenderSignalIndex_Callback qtablewidget_sendersignalindex_callback = nullptr;
    QTableWidget_Receivers_Callback qtablewidget_receivers_callback = nullptr;
    QTableWidget_IsSignalConnected_Callback qtablewidget_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtablewidget_metacall_isbase = false;
    mutable bool qtablewidget_event_isbase = false;
    mutable bool qtablewidget_mimetypes_isbase = false;
    mutable bool qtablewidget_mimedata_isbase = false;
    mutable bool qtablewidget_dropmimedata_isbase = false;
    mutable bool qtablewidget_supporteddropactions_isbase = false;
    mutable bool qtablewidget_dropevent_isbase = false;
    mutable bool qtablewidget_setrootindex_isbase = false;
    mutable bool qtablewidget_setselectionmodel_isbase = false;
    mutable bool qtablewidget_doitemslayout_isbase = false;
    mutable bool qtablewidget_visualrect_isbase = false;
    mutable bool qtablewidget_scrollto_isbase = false;
    mutable bool qtablewidget_indexat_isbase = false;
    mutable bool qtablewidget_scrollcontentsby_isbase = false;
    mutable bool qtablewidget_initviewitemoption_isbase = false;
    mutable bool qtablewidget_paintevent_isbase = false;
    mutable bool qtablewidget_timerevent_isbase = false;
    mutable bool qtablewidget_horizontaloffset_isbase = false;
    mutable bool qtablewidget_verticaloffset_isbase = false;
    mutable bool qtablewidget_movecursor_isbase = false;
    mutable bool qtablewidget_setselection_isbase = false;
    mutable bool qtablewidget_visualregionforselection_isbase = false;
    mutable bool qtablewidget_selectedindexes_isbase = false;
    mutable bool qtablewidget_updategeometries_isbase = false;
    mutable bool qtablewidget_viewportsizehint_isbase = false;
    mutable bool qtablewidget_sizehintforrow_isbase = false;
    mutable bool qtablewidget_sizehintforcolumn_isbase = false;
    mutable bool qtablewidget_verticalscrollbaraction_isbase = false;
    mutable bool qtablewidget_horizontalscrollbaraction_isbase = false;
    mutable bool qtablewidget_isindexhidden_isbase = false;
    mutable bool qtablewidget_selectionchanged_isbase = false;
    mutable bool qtablewidget_currentchanged_isbase = false;
    mutable bool qtablewidget_keyboardsearch_isbase = false;
    mutable bool qtablewidget_itemdelegateforindex_isbase = false;
    mutable bool qtablewidget_inputmethodquery_isbase = false;
    mutable bool qtablewidget_reset_isbase = false;
    mutable bool qtablewidget_selectall_isbase = false;
    mutable bool qtablewidget_datachanged_isbase = false;
    mutable bool qtablewidget_rowsinserted_isbase = false;
    mutable bool qtablewidget_rowsabouttoberemoved_isbase = false;
    mutable bool qtablewidget_updateeditordata_isbase = false;
    mutable bool qtablewidget_updateeditorgeometries_isbase = false;
    mutable bool qtablewidget_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qtablewidget_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qtablewidget_closeeditor_isbase = false;
    mutable bool qtablewidget_commitdata_isbase = false;
    mutable bool qtablewidget_editordestroyed_isbase = false;
    mutable bool qtablewidget_edit2_isbase = false;
    mutable bool qtablewidget_selectioncommand_isbase = false;
    mutable bool qtablewidget_startdrag_isbase = false;
    mutable bool qtablewidget_focusnextprevchild_isbase = false;
    mutable bool qtablewidget_viewportevent_isbase = false;
    mutable bool qtablewidget_mousepressevent_isbase = false;
    mutable bool qtablewidget_mousemoveevent_isbase = false;
    mutable bool qtablewidget_mousereleaseevent_isbase = false;
    mutable bool qtablewidget_mousedoubleclickevent_isbase = false;
    mutable bool qtablewidget_dragenterevent_isbase = false;
    mutable bool qtablewidget_dragmoveevent_isbase = false;
    mutable bool qtablewidget_dragleaveevent_isbase = false;
    mutable bool qtablewidget_focusinevent_isbase = false;
    mutable bool qtablewidget_focusoutevent_isbase = false;
    mutable bool qtablewidget_keypressevent_isbase = false;
    mutable bool qtablewidget_resizeevent_isbase = false;
    mutable bool qtablewidget_inputmethodevent_isbase = false;
    mutable bool qtablewidget_eventfilter_isbase = false;
    mutable bool qtablewidget_minimumsizehint_isbase = false;
    mutable bool qtablewidget_sizehint_isbase = false;
    mutable bool qtablewidget_setupviewport_isbase = false;
    mutable bool qtablewidget_wheelevent_isbase = false;
    mutable bool qtablewidget_contextmenuevent_isbase = false;
    mutable bool qtablewidget_changeevent_isbase = false;
    mutable bool qtablewidget_initstyleoption_isbase = false;
    mutable bool qtablewidget_devtype_isbase = false;
    mutable bool qtablewidget_setvisible_isbase = false;
    mutable bool qtablewidget_heightforwidth_isbase = false;
    mutable bool qtablewidget_hasheightforwidth_isbase = false;
    mutable bool qtablewidget_paintengine_isbase = false;
    mutable bool qtablewidget_keyreleaseevent_isbase = false;
    mutable bool qtablewidget_enterevent_isbase = false;
    mutable bool qtablewidget_leaveevent_isbase = false;
    mutable bool qtablewidget_moveevent_isbase = false;
    mutable bool qtablewidget_closeevent_isbase = false;
    mutable bool qtablewidget_tabletevent_isbase = false;
    mutable bool qtablewidget_actionevent_isbase = false;
    mutable bool qtablewidget_showevent_isbase = false;
    mutable bool qtablewidget_hideevent_isbase = false;
    mutable bool qtablewidget_nativeevent_isbase = false;
    mutable bool qtablewidget_metric_isbase = false;
    mutable bool qtablewidget_initpainter_isbase = false;
    mutable bool qtablewidget_redirected_isbase = false;
    mutable bool qtablewidget_sharedpainter_isbase = false;
    mutable bool qtablewidget_childevent_isbase = false;
    mutable bool qtablewidget_customevent_isbase = false;
    mutable bool qtablewidget_connectnotify_isbase = false;
    mutable bool qtablewidget_disconnectnotify_isbase = false;
    mutable bool qtablewidget_rowmoved_isbase = false;
    mutable bool qtablewidget_columnmoved_isbase = false;
    mutable bool qtablewidget_rowresized_isbase = false;
    mutable bool qtablewidget_columnresized_isbase = false;
    mutable bool qtablewidget_rowcountchanged_isbase = false;
    mutable bool qtablewidget_columncountchanged_isbase = false;
    mutable bool qtablewidget_state_isbase = false;
    mutable bool qtablewidget_setstate_isbase = false;
    mutable bool qtablewidget_scheduledelayeditemslayout_isbase = false;
    mutable bool qtablewidget_executedelayeditemslayout_isbase = false;
    mutable bool qtablewidget_setdirtyregion_isbase = false;
    mutable bool qtablewidget_scrolldirtyregion_isbase = false;
    mutable bool qtablewidget_dirtyregionoffset_isbase = false;
    mutable bool qtablewidget_startautoscroll_isbase = false;
    mutable bool qtablewidget_stopautoscroll_isbase = false;
    mutable bool qtablewidget_doautoscroll_isbase = false;
    mutable bool qtablewidget_dropindicatorposition_isbase = false;
    mutable bool qtablewidget_setviewportmargins_isbase = false;
    mutable bool qtablewidget_viewportmargins_isbase = false;
    mutable bool qtablewidget_drawframe_isbase = false;
    mutable bool qtablewidget_updatemicrofocus_isbase = false;
    mutable bool qtablewidget_create_isbase = false;
    mutable bool qtablewidget_destroy_isbase = false;
    mutable bool qtablewidget_focusnextchild_isbase = false;
    mutable bool qtablewidget_focuspreviouschild_isbase = false;
    mutable bool qtablewidget_sender_isbase = false;
    mutable bool qtablewidget_sendersignalindex_isbase = false;
    mutable bool qtablewidget_receivers_isbase = false;
    mutable bool qtablewidget_issignalconnected_isbase = false;

  public:
    VirtualQTableWidget(QWidget* parent) : QTableWidget(parent){};
    VirtualQTableWidget() : QTableWidget(){};
    VirtualQTableWidget(int rows, int columns) : QTableWidget(rows, columns){};
    VirtualQTableWidget(int rows, int columns, QWidget* parent) : QTableWidget(rows, columns, parent){};

    ~VirtualQTableWidget() {
        qtablewidget_metacall_callback = nullptr;
        qtablewidget_event_callback = nullptr;
        qtablewidget_mimetypes_callback = nullptr;
        qtablewidget_mimedata_callback = nullptr;
        qtablewidget_dropmimedata_callback = nullptr;
        qtablewidget_supporteddropactions_callback = nullptr;
        qtablewidget_dropevent_callback = nullptr;
        qtablewidget_setrootindex_callback = nullptr;
        qtablewidget_setselectionmodel_callback = nullptr;
        qtablewidget_doitemslayout_callback = nullptr;
        qtablewidget_visualrect_callback = nullptr;
        qtablewidget_scrollto_callback = nullptr;
        qtablewidget_indexat_callback = nullptr;
        qtablewidget_scrollcontentsby_callback = nullptr;
        qtablewidget_initviewitemoption_callback = nullptr;
        qtablewidget_paintevent_callback = nullptr;
        qtablewidget_timerevent_callback = nullptr;
        qtablewidget_horizontaloffset_callback = nullptr;
        qtablewidget_verticaloffset_callback = nullptr;
        qtablewidget_movecursor_callback = nullptr;
        qtablewidget_setselection_callback = nullptr;
        qtablewidget_visualregionforselection_callback = nullptr;
        qtablewidget_selectedindexes_callback = nullptr;
        qtablewidget_updategeometries_callback = nullptr;
        qtablewidget_viewportsizehint_callback = nullptr;
        qtablewidget_sizehintforrow_callback = nullptr;
        qtablewidget_sizehintforcolumn_callback = nullptr;
        qtablewidget_verticalscrollbaraction_callback = nullptr;
        qtablewidget_horizontalscrollbaraction_callback = nullptr;
        qtablewidget_isindexhidden_callback = nullptr;
        qtablewidget_selectionchanged_callback = nullptr;
        qtablewidget_currentchanged_callback = nullptr;
        qtablewidget_keyboardsearch_callback = nullptr;
        qtablewidget_itemdelegateforindex_callback = nullptr;
        qtablewidget_inputmethodquery_callback = nullptr;
        qtablewidget_reset_callback = nullptr;
        qtablewidget_selectall_callback = nullptr;
        qtablewidget_datachanged_callback = nullptr;
        qtablewidget_rowsinserted_callback = nullptr;
        qtablewidget_rowsabouttoberemoved_callback = nullptr;
        qtablewidget_updateeditordata_callback = nullptr;
        qtablewidget_updateeditorgeometries_callback = nullptr;
        qtablewidget_verticalscrollbarvaluechanged_callback = nullptr;
        qtablewidget_horizontalscrollbarvaluechanged_callback = nullptr;
        qtablewidget_closeeditor_callback = nullptr;
        qtablewidget_commitdata_callback = nullptr;
        qtablewidget_editordestroyed_callback = nullptr;
        qtablewidget_edit2_callback = nullptr;
        qtablewidget_selectioncommand_callback = nullptr;
        qtablewidget_startdrag_callback = nullptr;
        qtablewidget_focusnextprevchild_callback = nullptr;
        qtablewidget_viewportevent_callback = nullptr;
        qtablewidget_mousepressevent_callback = nullptr;
        qtablewidget_mousemoveevent_callback = nullptr;
        qtablewidget_mousereleaseevent_callback = nullptr;
        qtablewidget_mousedoubleclickevent_callback = nullptr;
        qtablewidget_dragenterevent_callback = nullptr;
        qtablewidget_dragmoveevent_callback = nullptr;
        qtablewidget_dragleaveevent_callback = nullptr;
        qtablewidget_focusinevent_callback = nullptr;
        qtablewidget_focusoutevent_callback = nullptr;
        qtablewidget_keypressevent_callback = nullptr;
        qtablewidget_resizeevent_callback = nullptr;
        qtablewidget_inputmethodevent_callback = nullptr;
        qtablewidget_eventfilter_callback = nullptr;
        qtablewidget_minimumsizehint_callback = nullptr;
        qtablewidget_sizehint_callback = nullptr;
        qtablewidget_setupviewport_callback = nullptr;
        qtablewidget_wheelevent_callback = nullptr;
        qtablewidget_contextmenuevent_callback = nullptr;
        qtablewidget_changeevent_callback = nullptr;
        qtablewidget_initstyleoption_callback = nullptr;
        qtablewidget_devtype_callback = nullptr;
        qtablewidget_setvisible_callback = nullptr;
        qtablewidget_heightforwidth_callback = nullptr;
        qtablewidget_hasheightforwidth_callback = nullptr;
        qtablewidget_paintengine_callback = nullptr;
        qtablewidget_keyreleaseevent_callback = nullptr;
        qtablewidget_enterevent_callback = nullptr;
        qtablewidget_leaveevent_callback = nullptr;
        qtablewidget_moveevent_callback = nullptr;
        qtablewidget_closeevent_callback = nullptr;
        qtablewidget_tabletevent_callback = nullptr;
        qtablewidget_actionevent_callback = nullptr;
        qtablewidget_showevent_callback = nullptr;
        qtablewidget_hideevent_callback = nullptr;
        qtablewidget_nativeevent_callback = nullptr;
        qtablewidget_metric_callback = nullptr;
        qtablewidget_initpainter_callback = nullptr;
        qtablewidget_redirected_callback = nullptr;
        qtablewidget_sharedpainter_callback = nullptr;
        qtablewidget_childevent_callback = nullptr;
        qtablewidget_customevent_callback = nullptr;
        qtablewidget_connectnotify_callback = nullptr;
        qtablewidget_disconnectnotify_callback = nullptr;
        qtablewidget_rowmoved_callback = nullptr;
        qtablewidget_columnmoved_callback = nullptr;
        qtablewidget_rowresized_callback = nullptr;
        qtablewidget_columnresized_callback = nullptr;
        qtablewidget_rowcountchanged_callback = nullptr;
        qtablewidget_columncountchanged_callback = nullptr;
        qtablewidget_state_callback = nullptr;
        qtablewidget_setstate_callback = nullptr;
        qtablewidget_scheduledelayeditemslayout_callback = nullptr;
        qtablewidget_executedelayeditemslayout_callback = nullptr;
        qtablewidget_setdirtyregion_callback = nullptr;
        qtablewidget_scrolldirtyregion_callback = nullptr;
        qtablewidget_dirtyregionoffset_callback = nullptr;
        qtablewidget_startautoscroll_callback = nullptr;
        qtablewidget_stopautoscroll_callback = nullptr;
        qtablewidget_doautoscroll_callback = nullptr;
        qtablewidget_dropindicatorposition_callback = nullptr;
        qtablewidget_setviewportmargins_callback = nullptr;
        qtablewidget_viewportmargins_callback = nullptr;
        qtablewidget_drawframe_callback = nullptr;
        qtablewidget_updatemicrofocus_callback = nullptr;
        qtablewidget_create_callback = nullptr;
        qtablewidget_destroy_callback = nullptr;
        qtablewidget_focusnextchild_callback = nullptr;
        qtablewidget_focuspreviouschild_callback = nullptr;
        qtablewidget_sender_callback = nullptr;
        qtablewidget_sendersignalindex_callback = nullptr;
        qtablewidget_receivers_callback = nullptr;
        qtablewidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTableWidget_Metacall_Callback(QTableWidget_Metacall_Callback cb) { qtablewidget_metacall_callback = cb; }
    void setQTableWidget_Event_Callback(QTableWidget_Event_Callback cb) { qtablewidget_event_callback = cb; }
    void setQTableWidget_MimeTypes_Callback(QTableWidget_MimeTypes_Callback cb) { qtablewidget_mimetypes_callback = cb; }
    void setQTableWidget_MimeData_Callback(QTableWidget_MimeData_Callback cb) { qtablewidget_mimedata_callback = cb; }
    void setQTableWidget_DropMimeData_Callback(QTableWidget_DropMimeData_Callback cb) { qtablewidget_dropmimedata_callback = cb; }
    void setQTableWidget_SupportedDropActions_Callback(QTableWidget_SupportedDropActions_Callback cb) { qtablewidget_supporteddropactions_callback = cb; }
    void setQTableWidget_DropEvent_Callback(QTableWidget_DropEvent_Callback cb) { qtablewidget_dropevent_callback = cb; }
    void setQTableWidget_SetRootIndex_Callback(QTableWidget_SetRootIndex_Callback cb) { qtablewidget_setrootindex_callback = cb; }
    void setQTableWidget_SetSelectionModel_Callback(QTableWidget_SetSelectionModel_Callback cb) { qtablewidget_setselectionmodel_callback = cb; }
    void setQTableWidget_DoItemsLayout_Callback(QTableWidget_DoItemsLayout_Callback cb) { qtablewidget_doitemslayout_callback = cb; }
    void setQTableWidget_VisualRect_Callback(QTableWidget_VisualRect_Callback cb) { qtablewidget_visualrect_callback = cb; }
    void setQTableWidget_ScrollTo_Callback(QTableWidget_ScrollTo_Callback cb) { qtablewidget_scrollto_callback = cb; }
    void setQTableWidget_IndexAt_Callback(QTableWidget_IndexAt_Callback cb) { qtablewidget_indexat_callback = cb; }
    void setQTableWidget_ScrollContentsBy_Callback(QTableWidget_ScrollContentsBy_Callback cb) { qtablewidget_scrollcontentsby_callback = cb; }
    void setQTableWidget_InitViewItemOption_Callback(QTableWidget_InitViewItemOption_Callback cb) { qtablewidget_initviewitemoption_callback = cb; }
    void setQTableWidget_PaintEvent_Callback(QTableWidget_PaintEvent_Callback cb) { qtablewidget_paintevent_callback = cb; }
    void setQTableWidget_TimerEvent_Callback(QTableWidget_TimerEvent_Callback cb) { qtablewidget_timerevent_callback = cb; }
    void setQTableWidget_HorizontalOffset_Callback(QTableWidget_HorizontalOffset_Callback cb) { qtablewidget_horizontaloffset_callback = cb; }
    void setQTableWidget_VerticalOffset_Callback(QTableWidget_VerticalOffset_Callback cb) { qtablewidget_verticaloffset_callback = cb; }
    void setQTableWidget_MoveCursor_Callback(QTableWidget_MoveCursor_Callback cb) { qtablewidget_movecursor_callback = cb; }
    void setQTableWidget_SetSelection_Callback(QTableWidget_SetSelection_Callback cb) { qtablewidget_setselection_callback = cb; }
    void setQTableWidget_VisualRegionForSelection_Callback(QTableWidget_VisualRegionForSelection_Callback cb) { qtablewidget_visualregionforselection_callback = cb; }
    void setQTableWidget_SelectedIndexes_Callback(QTableWidget_SelectedIndexes_Callback cb) { qtablewidget_selectedindexes_callback = cb; }
    void setQTableWidget_UpdateGeometries_Callback(QTableWidget_UpdateGeometries_Callback cb) { qtablewidget_updategeometries_callback = cb; }
    void setQTableWidget_ViewportSizeHint_Callback(QTableWidget_ViewportSizeHint_Callback cb) { qtablewidget_viewportsizehint_callback = cb; }
    void setQTableWidget_SizeHintForRow_Callback(QTableWidget_SizeHintForRow_Callback cb) { qtablewidget_sizehintforrow_callback = cb; }
    void setQTableWidget_SizeHintForColumn_Callback(QTableWidget_SizeHintForColumn_Callback cb) { qtablewidget_sizehintforcolumn_callback = cb; }
    void setQTableWidget_VerticalScrollbarAction_Callback(QTableWidget_VerticalScrollbarAction_Callback cb) { qtablewidget_verticalscrollbaraction_callback = cb; }
    void setQTableWidget_HorizontalScrollbarAction_Callback(QTableWidget_HorizontalScrollbarAction_Callback cb) { qtablewidget_horizontalscrollbaraction_callback = cb; }
    void setQTableWidget_IsIndexHidden_Callback(QTableWidget_IsIndexHidden_Callback cb) { qtablewidget_isindexhidden_callback = cb; }
    void setQTableWidget_SelectionChanged_Callback(QTableWidget_SelectionChanged_Callback cb) { qtablewidget_selectionchanged_callback = cb; }
    void setQTableWidget_CurrentChanged_Callback(QTableWidget_CurrentChanged_Callback cb) { qtablewidget_currentchanged_callback = cb; }
    void setQTableWidget_KeyboardSearch_Callback(QTableWidget_KeyboardSearch_Callback cb) { qtablewidget_keyboardsearch_callback = cb; }
    void setQTableWidget_ItemDelegateForIndex_Callback(QTableWidget_ItemDelegateForIndex_Callback cb) { qtablewidget_itemdelegateforindex_callback = cb; }
    void setQTableWidget_InputMethodQuery_Callback(QTableWidget_InputMethodQuery_Callback cb) { qtablewidget_inputmethodquery_callback = cb; }
    void setQTableWidget_Reset_Callback(QTableWidget_Reset_Callback cb) { qtablewidget_reset_callback = cb; }
    void setQTableWidget_SelectAll_Callback(QTableWidget_SelectAll_Callback cb) { qtablewidget_selectall_callback = cb; }
    void setQTableWidget_DataChanged_Callback(QTableWidget_DataChanged_Callback cb) { qtablewidget_datachanged_callback = cb; }
    void setQTableWidget_RowsInserted_Callback(QTableWidget_RowsInserted_Callback cb) { qtablewidget_rowsinserted_callback = cb; }
    void setQTableWidget_RowsAboutToBeRemoved_Callback(QTableWidget_RowsAboutToBeRemoved_Callback cb) { qtablewidget_rowsabouttoberemoved_callback = cb; }
    void setQTableWidget_UpdateEditorData_Callback(QTableWidget_UpdateEditorData_Callback cb) { qtablewidget_updateeditordata_callback = cb; }
    void setQTableWidget_UpdateEditorGeometries_Callback(QTableWidget_UpdateEditorGeometries_Callback cb) { qtablewidget_updateeditorgeometries_callback = cb; }
    void setQTableWidget_VerticalScrollbarValueChanged_Callback(QTableWidget_VerticalScrollbarValueChanged_Callback cb) { qtablewidget_verticalscrollbarvaluechanged_callback = cb; }
    void setQTableWidget_HorizontalScrollbarValueChanged_Callback(QTableWidget_HorizontalScrollbarValueChanged_Callback cb) { qtablewidget_horizontalscrollbarvaluechanged_callback = cb; }
    void setQTableWidget_CloseEditor_Callback(QTableWidget_CloseEditor_Callback cb) { qtablewidget_closeeditor_callback = cb; }
    void setQTableWidget_CommitData_Callback(QTableWidget_CommitData_Callback cb) { qtablewidget_commitdata_callback = cb; }
    void setQTableWidget_EditorDestroyed_Callback(QTableWidget_EditorDestroyed_Callback cb) { qtablewidget_editordestroyed_callback = cb; }
    void setQTableWidget_Edit2_Callback(QTableWidget_Edit2_Callback cb) { qtablewidget_edit2_callback = cb; }
    void setQTableWidget_SelectionCommand_Callback(QTableWidget_SelectionCommand_Callback cb) { qtablewidget_selectioncommand_callback = cb; }
    void setQTableWidget_StartDrag_Callback(QTableWidget_StartDrag_Callback cb) { qtablewidget_startdrag_callback = cb; }
    void setQTableWidget_FocusNextPrevChild_Callback(QTableWidget_FocusNextPrevChild_Callback cb) { qtablewidget_focusnextprevchild_callback = cb; }
    void setQTableWidget_ViewportEvent_Callback(QTableWidget_ViewportEvent_Callback cb) { qtablewidget_viewportevent_callback = cb; }
    void setQTableWidget_MousePressEvent_Callback(QTableWidget_MousePressEvent_Callback cb) { qtablewidget_mousepressevent_callback = cb; }
    void setQTableWidget_MouseMoveEvent_Callback(QTableWidget_MouseMoveEvent_Callback cb) { qtablewidget_mousemoveevent_callback = cb; }
    void setQTableWidget_MouseReleaseEvent_Callback(QTableWidget_MouseReleaseEvent_Callback cb) { qtablewidget_mousereleaseevent_callback = cb; }
    void setQTableWidget_MouseDoubleClickEvent_Callback(QTableWidget_MouseDoubleClickEvent_Callback cb) { qtablewidget_mousedoubleclickevent_callback = cb; }
    void setQTableWidget_DragEnterEvent_Callback(QTableWidget_DragEnterEvent_Callback cb) { qtablewidget_dragenterevent_callback = cb; }
    void setQTableWidget_DragMoveEvent_Callback(QTableWidget_DragMoveEvent_Callback cb) { qtablewidget_dragmoveevent_callback = cb; }
    void setQTableWidget_DragLeaveEvent_Callback(QTableWidget_DragLeaveEvent_Callback cb) { qtablewidget_dragleaveevent_callback = cb; }
    void setQTableWidget_FocusInEvent_Callback(QTableWidget_FocusInEvent_Callback cb) { qtablewidget_focusinevent_callback = cb; }
    void setQTableWidget_FocusOutEvent_Callback(QTableWidget_FocusOutEvent_Callback cb) { qtablewidget_focusoutevent_callback = cb; }
    void setQTableWidget_KeyPressEvent_Callback(QTableWidget_KeyPressEvent_Callback cb) { qtablewidget_keypressevent_callback = cb; }
    void setQTableWidget_ResizeEvent_Callback(QTableWidget_ResizeEvent_Callback cb) { qtablewidget_resizeevent_callback = cb; }
    void setQTableWidget_InputMethodEvent_Callback(QTableWidget_InputMethodEvent_Callback cb) { qtablewidget_inputmethodevent_callback = cb; }
    void setQTableWidget_EventFilter_Callback(QTableWidget_EventFilter_Callback cb) { qtablewidget_eventfilter_callback = cb; }
    void setQTableWidget_MinimumSizeHint_Callback(QTableWidget_MinimumSizeHint_Callback cb) { qtablewidget_minimumsizehint_callback = cb; }
    void setQTableWidget_SizeHint_Callback(QTableWidget_SizeHint_Callback cb) { qtablewidget_sizehint_callback = cb; }
    void setQTableWidget_SetupViewport_Callback(QTableWidget_SetupViewport_Callback cb) { qtablewidget_setupviewport_callback = cb; }
    void setQTableWidget_WheelEvent_Callback(QTableWidget_WheelEvent_Callback cb) { qtablewidget_wheelevent_callback = cb; }
    void setQTableWidget_ContextMenuEvent_Callback(QTableWidget_ContextMenuEvent_Callback cb) { qtablewidget_contextmenuevent_callback = cb; }
    void setQTableWidget_ChangeEvent_Callback(QTableWidget_ChangeEvent_Callback cb) { qtablewidget_changeevent_callback = cb; }
    void setQTableWidget_InitStyleOption_Callback(QTableWidget_InitStyleOption_Callback cb) { qtablewidget_initstyleoption_callback = cb; }
    void setQTableWidget_DevType_Callback(QTableWidget_DevType_Callback cb) { qtablewidget_devtype_callback = cb; }
    void setQTableWidget_SetVisible_Callback(QTableWidget_SetVisible_Callback cb) { qtablewidget_setvisible_callback = cb; }
    void setQTableWidget_HeightForWidth_Callback(QTableWidget_HeightForWidth_Callback cb) { qtablewidget_heightforwidth_callback = cb; }
    void setQTableWidget_HasHeightForWidth_Callback(QTableWidget_HasHeightForWidth_Callback cb) { qtablewidget_hasheightforwidth_callback = cb; }
    void setQTableWidget_PaintEngine_Callback(QTableWidget_PaintEngine_Callback cb) { qtablewidget_paintengine_callback = cb; }
    void setQTableWidget_KeyReleaseEvent_Callback(QTableWidget_KeyReleaseEvent_Callback cb) { qtablewidget_keyreleaseevent_callback = cb; }
    void setQTableWidget_EnterEvent_Callback(QTableWidget_EnterEvent_Callback cb) { qtablewidget_enterevent_callback = cb; }
    void setQTableWidget_LeaveEvent_Callback(QTableWidget_LeaveEvent_Callback cb) { qtablewidget_leaveevent_callback = cb; }
    void setQTableWidget_MoveEvent_Callback(QTableWidget_MoveEvent_Callback cb) { qtablewidget_moveevent_callback = cb; }
    void setQTableWidget_CloseEvent_Callback(QTableWidget_CloseEvent_Callback cb) { qtablewidget_closeevent_callback = cb; }
    void setQTableWidget_TabletEvent_Callback(QTableWidget_TabletEvent_Callback cb) { qtablewidget_tabletevent_callback = cb; }
    void setQTableWidget_ActionEvent_Callback(QTableWidget_ActionEvent_Callback cb) { qtablewidget_actionevent_callback = cb; }
    void setQTableWidget_ShowEvent_Callback(QTableWidget_ShowEvent_Callback cb) { qtablewidget_showevent_callback = cb; }
    void setQTableWidget_HideEvent_Callback(QTableWidget_HideEvent_Callback cb) { qtablewidget_hideevent_callback = cb; }
    void setQTableWidget_NativeEvent_Callback(QTableWidget_NativeEvent_Callback cb) { qtablewidget_nativeevent_callback = cb; }
    void setQTableWidget_Metric_Callback(QTableWidget_Metric_Callback cb) { qtablewidget_metric_callback = cb; }
    void setQTableWidget_InitPainter_Callback(QTableWidget_InitPainter_Callback cb) { qtablewidget_initpainter_callback = cb; }
    void setQTableWidget_Redirected_Callback(QTableWidget_Redirected_Callback cb) { qtablewidget_redirected_callback = cb; }
    void setQTableWidget_SharedPainter_Callback(QTableWidget_SharedPainter_Callback cb) { qtablewidget_sharedpainter_callback = cb; }
    void setQTableWidget_ChildEvent_Callback(QTableWidget_ChildEvent_Callback cb) { qtablewidget_childevent_callback = cb; }
    void setQTableWidget_CustomEvent_Callback(QTableWidget_CustomEvent_Callback cb) { qtablewidget_customevent_callback = cb; }
    void setQTableWidget_ConnectNotify_Callback(QTableWidget_ConnectNotify_Callback cb) { qtablewidget_connectnotify_callback = cb; }
    void setQTableWidget_DisconnectNotify_Callback(QTableWidget_DisconnectNotify_Callback cb) { qtablewidget_disconnectnotify_callback = cb; }
    void setQTableWidget_RowMoved_Callback(QTableWidget_RowMoved_Callback cb) { qtablewidget_rowmoved_callback = cb; }
    void setQTableWidget_ColumnMoved_Callback(QTableWidget_ColumnMoved_Callback cb) { qtablewidget_columnmoved_callback = cb; }
    void setQTableWidget_RowResized_Callback(QTableWidget_RowResized_Callback cb) { qtablewidget_rowresized_callback = cb; }
    void setQTableWidget_ColumnResized_Callback(QTableWidget_ColumnResized_Callback cb) { qtablewidget_columnresized_callback = cb; }
    void setQTableWidget_RowCountChanged_Callback(QTableWidget_RowCountChanged_Callback cb) { qtablewidget_rowcountchanged_callback = cb; }
    void setQTableWidget_ColumnCountChanged_Callback(QTableWidget_ColumnCountChanged_Callback cb) { qtablewidget_columncountchanged_callback = cb; }
    void setQTableWidget_State_Callback(QTableWidget_State_Callback cb) { qtablewidget_state_callback = cb; }
    void setQTableWidget_SetState_Callback(QTableWidget_SetState_Callback cb) { qtablewidget_setstate_callback = cb; }
    void setQTableWidget_ScheduleDelayedItemsLayout_Callback(QTableWidget_ScheduleDelayedItemsLayout_Callback cb) { qtablewidget_scheduledelayeditemslayout_callback = cb; }
    void setQTableWidget_ExecuteDelayedItemsLayout_Callback(QTableWidget_ExecuteDelayedItemsLayout_Callback cb) { qtablewidget_executedelayeditemslayout_callback = cb; }
    void setQTableWidget_SetDirtyRegion_Callback(QTableWidget_SetDirtyRegion_Callback cb) { qtablewidget_setdirtyregion_callback = cb; }
    void setQTableWidget_ScrollDirtyRegion_Callback(QTableWidget_ScrollDirtyRegion_Callback cb) { qtablewidget_scrolldirtyregion_callback = cb; }
    void setQTableWidget_DirtyRegionOffset_Callback(QTableWidget_DirtyRegionOffset_Callback cb) { qtablewidget_dirtyregionoffset_callback = cb; }
    void setQTableWidget_StartAutoScroll_Callback(QTableWidget_StartAutoScroll_Callback cb) { qtablewidget_startautoscroll_callback = cb; }
    void setQTableWidget_StopAutoScroll_Callback(QTableWidget_StopAutoScroll_Callback cb) { qtablewidget_stopautoscroll_callback = cb; }
    void setQTableWidget_DoAutoScroll_Callback(QTableWidget_DoAutoScroll_Callback cb) { qtablewidget_doautoscroll_callback = cb; }
    void setQTableWidget_DropIndicatorPosition_Callback(QTableWidget_DropIndicatorPosition_Callback cb) { qtablewidget_dropindicatorposition_callback = cb; }
    void setQTableWidget_SetViewportMargins_Callback(QTableWidget_SetViewportMargins_Callback cb) { qtablewidget_setviewportmargins_callback = cb; }
    void setQTableWidget_ViewportMargins_Callback(QTableWidget_ViewportMargins_Callback cb) { qtablewidget_viewportmargins_callback = cb; }
    void setQTableWidget_DrawFrame_Callback(QTableWidget_DrawFrame_Callback cb) { qtablewidget_drawframe_callback = cb; }
    void setQTableWidget_UpdateMicroFocus_Callback(QTableWidget_UpdateMicroFocus_Callback cb) { qtablewidget_updatemicrofocus_callback = cb; }
    void setQTableWidget_Create_Callback(QTableWidget_Create_Callback cb) { qtablewidget_create_callback = cb; }
    void setQTableWidget_Destroy_Callback(QTableWidget_Destroy_Callback cb) { qtablewidget_destroy_callback = cb; }
    void setQTableWidget_FocusNextChild_Callback(QTableWidget_FocusNextChild_Callback cb) { qtablewidget_focusnextchild_callback = cb; }
    void setQTableWidget_FocusPreviousChild_Callback(QTableWidget_FocusPreviousChild_Callback cb) { qtablewidget_focuspreviouschild_callback = cb; }
    void setQTableWidget_Sender_Callback(QTableWidget_Sender_Callback cb) { qtablewidget_sender_callback = cb; }
    void setQTableWidget_SenderSignalIndex_Callback(QTableWidget_SenderSignalIndex_Callback cb) { qtablewidget_sendersignalindex_callback = cb; }
    void setQTableWidget_Receivers_Callback(QTableWidget_Receivers_Callback cb) { qtablewidget_receivers_callback = cb; }
    void setQTableWidget_IsSignalConnected_Callback(QTableWidget_IsSignalConnected_Callback cb) { qtablewidget_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTableWidget_Metacall_IsBase(bool value) const { qtablewidget_metacall_isbase = value; }
    void setQTableWidget_Event_IsBase(bool value) const { qtablewidget_event_isbase = value; }
    void setQTableWidget_MimeTypes_IsBase(bool value) const { qtablewidget_mimetypes_isbase = value; }
    void setQTableWidget_MimeData_IsBase(bool value) const { qtablewidget_mimedata_isbase = value; }
    void setQTableWidget_DropMimeData_IsBase(bool value) const { qtablewidget_dropmimedata_isbase = value; }
    void setQTableWidget_SupportedDropActions_IsBase(bool value) const { qtablewidget_supporteddropactions_isbase = value; }
    void setQTableWidget_DropEvent_IsBase(bool value) const { qtablewidget_dropevent_isbase = value; }
    void setQTableWidget_SetRootIndex_IsBase(bool value) const { qtablewidget_setrootindex_isbase = value; }
    void setQTableWidget_SetSelectionModel_IsBase(bool value) const { qtablewidget_setselectionmodel_isbase = value; }
    void setQTableWidget_DoItemsLayout_IsBase(bool value) const { qtablewidget_doitemslayout_isbase = value; }
    void setQTableWidget_VisualRect_IsBase(bool value) const { qtablewidget_visualrect_isbase = value; }
    void setQTableWidget_ScrollTo_IsBase(bool value) const { qtablewidget_scrollto_isbase = value; }
    void setQTableWidget_IndexAt_IsBase(bool value) const { qtablewidget_indexat_isbase = value; }
    void setQTableWidget_ScrollContentsBy_IsBase(bool value) const { qtablewidget_scrollcontentsby_isbase = value; }
    void setQTableWidget_InitViewItemOption_IsBase(bool value) const { qtablewidget_initviewitemoption_isbase = value; }
    void setQTableWidget_PaintEvent_IsBase(bool value) const { qtablewidget_paintevent_isbase = value; }
    void setQTableWidget_TimerEvent_IsBase(bool value) const { qtablewidget_timerevent_isbase = value; }
    void setQTableWidget_HorizontalOffset_IsBase(bool value) const { qtablewidget_horizontaloffset_isbase = value; }
    void setQTableWidget_VerticalOffset_IsBase(bool value) const { qtablewidget_verticaloffset_isbase = value; }
    void setQTableWidget_MoveCursor_IsBase(bool value) const { qtablewidget_movecursor_isbase = value; }
    void setQTableWidget_SetSelection_IsBase(bool value) const { qtablewidget_setselection_isbase = value; }
    void setQTableWidget_VisualRegionForSelection_IsBase(bool value) const { qtablewidget_visualregionforselection_isbase = value; }
    void setQTableWidget_SelectedIndexes_IsBase(bool value) const { qtablewidget_selectedindexes_isbase = value; }
    void setQTableWidget_UpdateGeometries_IsBase(bool value) const { qtablewidget_updategeometries_isbase = value; }
    void setQTableWidget_ViewportSizeHint_IsBase(bool value) const { qtablewidget_viewportsizehint_isbase = value; }
    void setQTableWidget_SizeHintForRow_IsBase(bool value) const { qtablewidget_sizehintforrow_isbase = value; }
    void setQTableWidget_SizeHintForColumn_IsBase(bool value) const { qtablewidget_sizehintforcolumn_isbase = value; }
    void setQTableWidget_VerticalScrollbarAction_IsBase(bool value) const { qtablewidget_verticalscrollbaraction_isbase = value; }
    void setQTableWidget_HorizontalScrollbarAction_IsBase(bool value) const { qtablewidget_horizontalscrollbaraction_isbase = value; }
    void setQTableWidget_IsIndexHidden_IsBase(bool value) const { qtablewidget_isindexhidden_isbase = value; }
    void setQTableWidget_SelectionChanged_IsBase(bool value) const { qtablewidget_selectionchanged_isbase = value; }
    void setQTableWidget_CurrentChanged_IsBase(bool value) const { qtablewidget_currentchanged_isbase = value; }
    void setQTableWidget_KeyboardSearch_IsBase(bool value) const { qtablewidget_keyboardsearch_isbase = value; }
    void setQTableWidget_ItemDelegateForIndex_IsBase(bool value) const { qtablewidget_itemdelegateforindex_isbase = value; }
    void setQTableWidget_InputMethodQuery_IsBase(bool value) const { qtablewidget_inputmethodquery_isbase = value; }
    void setQTableWidget_Reset_IsBase(bool value) const { qtablewidget_reset_isbase = value; }
    void setQTableWidget_SelectAll_IsBase(bool value) const { qtablewidget_selectall_isbase = value; }
    void setQTableWidget_DataChanged_IsBase(bool value) const { qtablewidget_datachanged_isbase = value; }
    void setQTableWidget_RowsInserted_IsBase(bool value) const { qtablewidget_rowsinserted_isbase = value; }
    void setQTableWidget_RowsAboutToBeRemoved_IsBase(bool value) const { qtablewidget_rowsabouttoberemoved_isbase = value; }
    void setQTableWidget_UpdateEditorData_IsBase(bool value) const { qtablewidget_updateeditordata_isbase = value; }
    void setQTableWidget_UpdateEditorGeometries_IsBase(bool value) const { qtablewidget_updateeditorgeometries_isbase = value; }
    void setQTableWidget_VerticalScrollbarValueChanged_IsBase(bool value) const { qtablewidget_verticalscrollbarvaluechanged_isbase = value; }
    void setQTableWidget_HorizontalScrollbarValueChanged_IsBase(bool value) const { qtablewidget_horizontalscrollbarvaluechanged_isbase = value; }
    void setQTableWidget_CloseEditor_IsBase(bool value) const { qtablewidget_closeeditor_isbase = value; }
    void setQTableWidget_CommitData_IsBase(bool value) const { qtablewidget_commitdata_isbase = value; }
    void setQTableWidget_EditorDestroyed_IsBase(bool value) const { qtablewidget_editordestroyed_isbase = value; }
    void setQTableWidget_Edit2_IsBase(bool value) const { qtablewidget_edit2_isbase = value; }
    void setQTableWidget_SelectionCommand_IsBase(bool value) const { qtablewidget_selectioncommand_isbase = value; }
    void setQTableWidget_StartDrag_IsBase(bool value) const { qtablewidget_startdrag_isbase = value; }
    void setQTableWidget_FocusNextPrevChild_IsBase(bool value) const { qtablewidget_focusnextprevchild_isbase = value; }
    void setQTableWidget_ViewportEvent_IsBase(bool value) const { qtablewidget_viewportevent_isbase = value; }
    void setQTableWidget_MousePressEvent_IsBase(bool value) const { qtablewidget_mousepressevent_isbase = value; }
    void setQTableWidget_MouseMoveEvent_IsBase(bool value) const { qtablewidget_mousemoveevent_isbase = value; }
    void setQTableWidget_MouseReleaseEvent_IsBase(bool value) const { qtablewidget_mousereleaseevent_isbase = value; }
    void setQTableWidget_MouseDoubleClickEvent_IsBase(bool value) const { qtablewidget_mousedoubleclickevent_isbase = value; }
    void setQTableWidget_DragEnterEvent_IsBase(bool value) const { qtablewidget_dragenterevent_isbase = value; }
    void setQTableWidget_DragMoveEvent_IsBase(bool value) const { qtablewidget_dragmoveevent_isbase = value; }
    void setQTableWidget_DragLeaveEvent_IsBase(bool value) const { qtablewidget_dragleaveevent_isbase = value; }
    void setQTableWidget_FocusInEvent_IsBase(bool value) const { qtablewidget_focusinevent_isbase = value; }
    void setQTableWidget_FocusOutEvent_IsBase(bool value) const { qtablewidget_focusoutevent_isbase = value; }
    void setQTableWidget_KeyPressEvent_IsBase(bool value) const { qtablewidget_keypressevent_isbase = value; }
    void setQTableWidget_ResizeEvent_IsBase(bool value) const { qtablewidget_resizeevent_isbase = value; }
    void setQTableWidget_InputMethodEvent_IsBase(bool value) const { qtablewidget_inputmethodevent_isbase = value; }
    void setQTableWidget_EventFilter_IsBase(bool value) const { qtablewidget_eventfilter_isbase = value; }
    void setQTableWidget_MinimumSizeHint_IsBase(bool value) const { qtablewidget_minimumsizehint_isbase = value; }
    void setQTableWidget_SizeHint_IsBase(bool value) const { qtablewidget_sizehint_isbase = value; }
    void setQTableWidget_SetupViewport_IsBase(bool value) const { qtablewidget_setupviewport_isbase = value; }
    void setQTableWidget_WheelEvent_IsBase(bool value) const { qtablewidget_wheelevent_isbase = value; }
    void setQTableWidget_ContextMenuEvent_IsBase(bool value) const { qtablewidget_contextmenuevent_isbase = value; }
    void setQTableWidget_ChangeEvent_IsBase(bool value) const { qtablewidget_changeevent_isbase = value; }
    void setQTableWidget_InitStyleOption_IsBase(bool value) const { qtablewidget_initstyleoption_isbase = value; }
    void setQTableWidget_DevType_IsBase(bool value) const { qtablewidget_devtype_isbase = value; }
    void setQTableWidget_SetVisible_IsBase(bool value) const { qtablewidget_setvisible_isbase = value; }
    void setQTableWidget_HeightForWidth_IsBase(bool value) const { qtablewidget_heightforwidth_isbase = value; }
    void setQTableWidget_HasHeightForWidth_IsBase(bool value) const { qtablewidget_hasheightforwidth_isbase = value; }
    void setQTableWidget_PaintEngine_IsBase(bool value) const { qtablewidget_paintengine_isbase = value; }
    void setQTableWidget_KeyReleaseEvent_IsBase(bool value) const { qtablewidget_keyreleaseevent_isbase = value; }
    void setQTableWidget_EnterEvent_IsBase(bool value) const { qtablewidget_enterevent_isbase = value; }
    void setQTableWidget_LeaveEvent_IsBase(bool value) const { qtablewidget_leaveevent_isbase = value; }
    void setQTableWidget_MoveEvent_IsBase(bool value) const { qtablewidget_moveevent_isbase = value; }
    void setQTableWidget_CloseEvent_IsBase(bool value) const { qtablewidget_closeevent_isbase = value; }
    void setQTableWidget_TabletEvent_IsBase(bool value) const { qtablewidget_tabletevent_isbase = value; }
    void setQTableWidget_ActionEvent_IsBase(bool value) const { qtablewidget_actionevent_isbase = value; }
    void setQTableWidget_ShowEvent_IsBase(bool value) const { qtablewidget_showevent_isbase = value; }
    void setQTableWidget_HideEvent_IsBase(bool value) const { qtablewidget_hideevent_isbase = value; }
    void setQTableWidget_NativeEvent_IsBase(bool value) const { qtablewidget_nativeevent_isbase = value; }
    void setQTableWidget_Metric_IsBase(bool value) const { qtablewidget_metric_isbase = value; }
    void setQTableWidget_InitPainter_IsBase(bool value) const { qtablewidget_initpainter_isbase = value; }
    void setQTableWidget_Redirected_IsBase(bool value) const { qtablewidget_redirected_isbase = value; }
    void setQTableWidget_SharedPainter_IsBase(bool value) const { qtablewidget_sharedpainter_isbase = value; }
    void setQTableWidget_ChildEvent_IsBase(bool value) const { qtablewidget_childevent_isbase = value; }
    void setQTableWidget_CustomEvent_IsBase(bool value) const { qtablewidget_customevent_isbase = value; }
    void setQTableWidget_ConnectNotify_IsBase(bool value) const { qtablewidget_connectnotify_isbase = value; }
    void setQTableWidget_DisconnectNotify_IsBase(bool value) const { qtablewidget_disconnectnotify_isbase = value; }
    void setQTableWidget_RowMoved_IsBase(bool value) const { qtablewidget_rowmoved_isbase = value; }
    void setQTableWidget_ColumnMoved_IsBase(bool value) const { qtablewidget_columnmoved_isbase = value; }
    void setQTableWidget_RowResized_IsBase(bool value) const { qtablewidget_rowresized_isbase = value; }
    void setQTableWidget_ColumnResized_IsBase(bool value) const { qtablewidget_columnresized_isbase = value; }
    void setQTableWidget_RowCountChanged_IsBase(bool value) const { qtablewidget_rowcountchanged_isbase = value; }
    void setQTableWidget_ColumnCountChanged_IsBase(bool value) const { qtablewidget_columncountchanged_isbase = value; }
    void setQTableWidget_State_IsBase(bool value) const { qtablewidget_state_isbase = value; }
    void setQTableWidget_SetState_IsBase(bool value) const { qtablewidget_setstate_isbase = value; }
    void setQTableWidget_ScheduleDelayedItemsLayout_IsBase(bool value) const { qtablewidget_scheduledelayeditemslayout_isbase = value; }
    void setQTableWidget_ExecuteDelayedItemsLayout_IsBase(bool value) const { qtablewidget_executedelayeditemslayout_isbase = value; }
    void setQTableWidget_SetDirtyRegion_IsBase(bool value) const { qtablewidget_setdirtyregion_isbase = value; }
    void setQTableWidget_ScrollDirtyRegion_IsBase(bool value) const { qtablewidget_scrolldirtyregion_isbase = value; }
    void setQTableWidget_DirtyRegionOffset_IsBase(bool value) const { qtablewidget_dirtyregionoffset_isbase = value; }
    void setQTableWidget_StartAutoScroll_IsBase(bool value) const { qtablewidget_startautoscroll_isbase = value; }
    void setQTableWidget_StopAutoScroll_IsBase(bool value) const { qtablewidget_stopautoscroll_isbase = value; }
    void setQTableWidget_DoAutoScroll_IsBase(bool value) const { qtablewidget_doautoscroll_isbase = value; }
    void setQTableWidget_DropIndicatorPosition_IsBase(bool value) const { qtablewidget_dropindicatorposition_isbase = value; }
    void setQTableWidget_SetViewportMargins_IsBase(bool value) const { qtablewidget_setviewportmargins_isbase = value; }
    void setQTableWidget_ViewportMargins_IsBase(bool value) const { qtablewidget_viewportmargins_isbase = value; }
    void setQTableWidget_DrawFrame_IsBase(bool value) const { qtablewidget_drawframe_isbase = value; }
    void setQTableWidget_UpdateMicroFocus_IsBase(bool value) const { qtablewidget_updatemicrofocus_isbase = value; }
    void setQTableWidget_Create_IsBase(bool value) const { qtablewidget_create_isbase = value; }
    void setQTableWidget_Destroy_IsBase(bool value) const { qtablewidget_destroy_isbase = value; }
    void setQTableWidget_FocusNextChild_IsBase(bool value) const { qtablewidget_focusnextchild_isbase = value; }
    void setQTableWidget_FocusPreviousChild_IsBase(bool value) const { qtablewidget_focuspreviouschild_isbase = value; }
    void setQTableWidget_Sender_IsBase(bool value) const { qtablewidget_sender_isbase = value; }
    void setQTableWidget_SenderSignalIndex_IsBase(bool value) const { qtablewidget_sendersignalindex_isbase = value; }
    void setQTableWidget_Receivers_IsBase(bool value) const { qtablewidget_receivers_isbase = value; }
    void setQTableWidget_IsSignalConnected_IsBase(bool value) const { qtablewidget_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtablewidget_metacall_isbase) {
            qtablewidget_metacall_isbase = false;
            return QTableWidget::qt_metacall(param1, param2, param3);
        } else if (qtablewidget_metacall_callback != nullptr) {
            return qtablewidget_metacall_callback(this, param1, param2, param3);
        } else {
            return QTableWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtablewidget_event_isbase) {
            qtablewidget_event_isbase = false;
            return QTableWidget::event(e);
        } else if (qtablewidget_event_callback != nullptr) {
            return qtablewidget_event_callback(this, e);
        } else {
            return QTableWidget::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qtablewidget_mimetypes_isbase) {
            qtablewidget_mimetypes_isbase = false;
            return QTableWidget::mimeTypes();
        } else if (qtablewidget_mimetypes_callback != nullptr) {
            return qtablewidget_mimetypes_callback();
        } else {
            return QTableWidget::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QTableWidgetItem*>& items) const override {
        if (qtablewidget_mimedata_isbase) {
            qtablewidget_mimedata_isbase = false;
            return QTableWidget::mimeData(items);
        } else if (qtablewidget_mimedata_callback != nullptr) {
            return qtablewidget_mimedata_callback(this, items);
        } else {
            return QTableWidget::mimeData(items);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(int row, int column, const QMimeData* data, Qt::DropAction action) override {
        if (qtablewidget_dropmimedata_isbase) {
            qtablewidget_dropmimedata_isbase = false;
            return QTableWidget::dropMimeData(row, column, data, action);
        } else if (qtablewidget_dropmimedata_callback != nullptr) {
            return qtablewidget_dropmimedata_callback(this, row, column, data, action);
        } else {
            return QTableWidget::dropMimeData(row, column, data, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qtablewidget_supporteddropactions_isbase) {
            qtablewidget_supporteddropactions_isbase = false;
            return QTableWidget::supportedDropActions();
        } else if (qtablewidget_supporteddropactions_callback != nullptr) {
            return qtablewidget_supporteddropactions_callback();
        } else {
            return QTableWidget::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtablewidget_dropevent_isbase) {
            qtablewidget_dropevent_isbase = false;
            QTableWidget::dropEvent(event);
        } else if (qtablewidget_dropevent_callback != nullptr) {
            qtablewidget_dropevent_callback(this, event);
        } else {
            QTableWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtablewidget_setrootindex_isbase) {
            qtablewidget_setrootindex_isbase = false;
            QTableWidget::setRootIndex(index);
        } else if (qtablewidget_setrootindex_callback != nullptr) {
            qtablewidget_setrootindex_callback(this, index);
        } else {
            QTableWidget::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtablewidget_setselectionmodel_isbase) {
            qtablewidget_setselectionmodel_isbase = false;
            QTableWidget::setSelectionModel(selectionModel);
        } else if (qtablewidget_setselectionmodel_callback != nullptr) {
            qtablewidget_setselectionmodel_callback(this, selectionModel);
        } else {
            QTableWidget::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtablewidget_doitemslayout_isbase) {
            qtablewidget_doitemslayout_isbase = false;
            QTableWidget::doItemsLayout();
        } else if (qtablewidget_doitemslayout_callback != nullptr) {
            qtablewidget_doitemslayout_callback();
        } else {
            QTableWidget::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtablewidget_visualrect_isbase) {
            qtablewidget_visualrect_isbase = false;
            return QTableWidget::visualRect(index);
        } else if (qtablewidget_visualrect_callback != nullptr) {
            return qtablewidget_visualrect_callback(this, index);
        } else {
            return QTableWidget::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtablewidget_scrollto_isbase) {
            qtablewidget_scrollto_isbase = false;
            QTableWidget::scrollTo(index, hint);
        } else if (qtablewidget_scrollto_callback != nullptr) {
            qtablewidget_scrollto_callback(this, index, hint);
        } else {
            QTableWidget::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtablewidget_indexat_isbase) {
            qtablewidget_indexat_isbase = false;
            return QTableWidget::indexAt(p);
        } else if (qtablewidget_indexat_callback != nullptr) {
            return qtablewidget_indexat_callback(this, p);
        } else {
            return QTableWidget::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtablewidget_scrollcontentsby_isbase) {
            qtablewidget_scrollcontentsby_isbase = false;
            QTableWidget::scrollContentsBy(dx, dy);
        } else if (qtablewidget_scrollcontentsby_callback != nullptr) {
            qtablewidget_scrollcontentsby_callback(this, dx, dy);
        } else {
            QTableWidget::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtablewidget_initviewitemoption_isbase) {
            qtablewidget_initviewitemoption_isbase = false;
            QTableWidget::initViewItemOption(option);
        } else if (qtablewidget_initviewitemoption_callback != nullptr) {
            qtablewidget_initviewitemoption_callback(this, option);
        } else {
            QTableWidget::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtablewidget_paintevent_isbase) {
            qtablewidget_paintevent_isbase = false;
            QTableWidget::paintEvent(e);
        } else if (qtablewidget_paintevent_callback != nullptr) {
            qtablewidget_paintevent_callback(this, e);
        } else {
            QTableWidget::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtablewidget_timerevent_isbase) {
            qtablewidget_timerevent_isbase = false;
            QTableWidget::timerEvent(event);
        } else if (qtablewidget_timerevent_callback != nullptr) {
            qtablewidget_timerevent_callback(this, event);
        } else {
            QTableWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtablewidget_horizontaloffset_isbase) {
            qtablewidget_horizontaloffset_isbase = false;
            return QTableWidget::horizontalOffset();
        } else if (qtablewidget_horizontaloffset_callback != nullptr) {
            return qtablewidget_horizontaloffset_callback();
        } else {
            return QTableWidget::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtablewidget_verticaloffset_isbase) {
            qtablewidget_verticaloffset_isbase = false;
            return QTableWidget::verticalOffset();
        } else if (qtablewidget_verticaloffset_callback != nullptr) {
            return qtablewidget_verticaloffset_callback();
        } else {
            return QTableWidget::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtablewidget_movecursor_isbase) {
            qtablewidget_movecursor_isbase = false;
            return QTableWidget::moveCursor(cursorAction, modifiers);
        } else if (qtablewidget_movecursor_callback != nullptr) {
            return qtablewidget_movecursor_callback(this, cursorAction, modifiers);
        } else {
            return QTableWidget::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtablewidget_setselection_isbase) {
            qtablewidget_setselection_isbase = false;
            QTableWidget::setSelection(rect, command);
        } else if (qtablewidget_setselection_callback != nullptr) {
            qtablewidget_setselection_callback(this, rect, command);
        } else {
            QTableWidget::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtablewidget_visualregionforselection_isbase) {
            qtablewidget_visualregionforselection_isbase = false;
            return QTableWidget::visualRegionForSelection(selection);
        } else if (qtablewidget_visualregionforselection_callback != nullptr) {
            return qtablewidget_visualregionforselection_callback(this, selection);
        } else {
            return QTableWidget::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList selectedIndexes() const override {
        if (qtablewidget_selectedindexes_isbase) {
            qtablewidget_selectedindexes_isbase = false;
            return QTableWidget::selectedIndexes();
        } else if (qtablewidget_selectedindexes_callback != nullptr) {
            return qtablewidget_selectedindexes_callback();
        } else {
            return QTableWidget::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtablewidget_updategeometries_isbase) {
            qtablewidget_updategeometries_isbase = false;
            QTableWidget::updateGeometries();
        } else if (qtablewidget_updategeometries_callback != nullptr) {
            qtablewidget_updategeometries_callback();
        } else {
            QTableWidget::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtablewidget_viewportsizehint_isbase) {
            qtablewidget_viewportsizehint_isbase = false;
            return QTableWidget::viewportSizeHint();
        } else if (qtablewidget_viewportsizehint_callback != nullptr) {
            return qtablewidget_viewportsizehint_callback();
        } else {
            return QTableWidget::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtablewidget_sizehintforrow_isbase) {
            qtablewidget_sizehintforrow_isbase = false;
            return QTableWidget::sizeHintForRow(row);
        } else if (qtablewidget_sizehintforrow_callback != nullptr) {
            return qtablewidget_sizehintforrow_callback(this, row);
        } else {
            return QTableWidget::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtablewidget_sizehintforcolumn_isbase) {
            qtablewidget_sizehintforcolumn_isbase = false;
            return QTableWidget::sizeHintForColumn(column);
        } else if (qtablewidget_sizehintforcolumn_callback != nullptr) {
            return qtablewidget_sizehintforcolumn_callback(this, column);
        } else {
            return QTableWidget::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtablewidget_verticalscrollbaraction_isbase) {
            qtablewidget_verticalscrollbaraction_isbase = false;
            QTableWidget::verticalScrollbarAction(action);
        } else if (qtablewidget_verticalscrollbaraction_callback != nullptr) {
            qtablewidget_verticalscrollbaraction_callback(this, action);
        } else {
            QTableWidget::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtablewidget_horizontalscrollbaraction_isbase) {
            qtablewidget_horizontalscrollbaraction_isbase = false;
            QTableWidget::horizontalScrollbarAction(action);
        } else if (qtablewidget_horizontalscrollbaraction_callback != nullptr) {
            qtablewidget_horizontalscrollbaraction_callback(this, action);
        } else {
            QTableWidget::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtablewidget_isindexhidden_isbase) {
            qtablewidget_isindexhidden_isbase = false;
            return QTableWidget::isIndexHidden(index);
        } else if (qtablewidget_isindexhidden_callback != nullptr) {
            return qtablewidget_isindexhidden_callback(this, index);
        } else {
            return QTableWidget::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtablewidget_selectionchanged_isbase) {
            qtablewidget_selectionchanged_isbase = false;
            QTableWidget::selectionChanged(selected, deselected);
        } else if (qtablewidget_selectionchanged_callback != nullptr) {
            qtablewidget_selectionchanged_callback(this, selected, deselected);
        } else {
            QTableWidget::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtablewidget_currentchanged_isbase) {
            qtablewidget_currentchanged_isbase = false;
            QTableWidget::currentChanged(current, previous);
        } else if (qtablewidget_currentchanged_callback != nullptr) {
            qtablewidget_currentchanged_callback(this, current, previous);
        } else {
            QTableWidget::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtablewidget_keyboardsearch_isbase) {
            qtablewidget_keyboardsearch_isbase = false;
            QTableWidget::keyboardSearch(search);
        } else if (qtablewidget_keyboardsearch_callback != nullptr) {
            qtablewidget_keyboardsearch_callback(this, search);
        } else {
            QTableWidget::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtablewidget_itemdelegateforindex_isbase) {
            qtablewidget_itemdelegateforindex_isbase = false;
            return QTableWidget::itemDelegateForIndex(index);
        } else if (qtablewidget_itemdelegateforindex_callback != nullptr) {
            return qtablewidget_itemdelegateforindex_callback(this, index);
        } else {
            return QTableWidget::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtablewidget_inputmethodquery_isbase) {
            qtablewidget_inputmethodquery_isbase = false;
            return QTableWidget::inputMethodQuery(query);
        } else if (qtablewidget_inputmethodquery_callback != nullptr) {
            return qtablewidget_inputmethodquery_callback(this, query);
        } else {
            return QTableWidget::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtablewidget_reset_isbase) {
            qtablewidget_reset_isbase = false;
            QTableWidget::reset();
        } else if (qtablewidget_reset_callback != nullptr) {
            qtablewidget_reset_callback();
        } else {
            QTableWidget::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtablewidget_selectall_isbase) {
            qtablewidget_selectall_isbase = false;
            QTableWidget::selectAll();
        } else if (qtablewidget_selectall_callback != nullptr) {
            qtablewidget_selectall_callback();
        } else {
            QTableWidget::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtablewidget_datachanged_isbase) {
            qtablewidget_datachanged_isbase = false;
            QTableWidget::dataChanged(topLeft, bottomRight, roles);
        } else if (qtablewidget_datachanged_callback != nullptr) {
            qtablewidget_datachanged_callback(this, topLeft, bottomRight, roles);
        } else {
            QTableWidget::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtablewidget_rowsinserted_isbase) {
            qtablewidget_rowsinserted_isbase = false;
            QTableWidget::rowsInserted(parent, start, end);
        } else if (qtablewidget_rowsinserted_callback != nullptr) {
            qtablewidget_rowsinserted_callback(this, parent, start, end);
        } else {
            QTableWidget::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtablewidget_rowsabouttoberemoved_isbase) {
            qtablewidget_rowsabouttoberemoved_isbase = false;
            QTableWidget::rowsAboutToBeRemoved(parent, start, end);
        } else if (qtablewidget_rowsabouttoberemoved_callback != nullptr) {
            qtablewidget_rowsabouttoberemoved_callback(this, parent, start, end);
        } else {
            QTableWidget::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtablewidget_updateeditordata_isbase) {
            qtablewidget_updateeditordata_isbase = false;
            QTableWidget::updateEditorData();
        } else if (qtablewidget_updateeditordata_callback != nullptr) {
            qtablewidget_updateeditordata_callback();
        } else {
            QTableWidget::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtablewidget_updateeditorgeometries_isbase) {
            qtablewidget_updateeditorgeometries_isbase = false;
            QTableWidget::updateEditorGeometries();
        } else if (qtablewidget_updateeditorgeometries_callback != nullptr) {
            qtablewidget_updateeditorgeometries_callback();
        } else {
            QTableWidget::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtablewidget_verticalscrollbarvaluechanged_isbase) {
            qtablewidget_verticalscrollbarvaluechanged_isbase = false;
            QTableWidget::verticalScrollbarValueChanged(value);
        } else if (qtablewidget_verticalscrollbarvaluechanged_callback != nullptr) {
            qtablewidget_verticalscrollbarvaluechanged_callback(this, value);
        } else {
            QTableWidget::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtablewidget_horizontalscrollbarvaluechanged_isbase) {
            qtablewidget_horizontalscrollbarvaluechanged_isbase = false;
            QTableWidget::horizontalScrollbarValueChanged(value);
        } else if (qtablewidget_horizontalscrollbarvaluechanged_callback != nullptr) {
            qtablewidget_horizontalscrollbarvaluechanged_callback(this, value);
        } else {
            QTableWidget::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtablewidget_closeeditor_isbase) {
            qtablewidget_closeeditor_isbase = false;
            QTableWidget::closeEditor(editor, hint);
        } else if (qtablewidget_closeeditor_callback != nullptr) {
            qtablewidget_closeeditor_callback(this, editor, hint);
        } else {
            QTableWidget::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtablewidget_commitdata_isbase) {
            qtablewidget_commitdata_isbase = false;
            QTableWidget::commitData(editor);
        } else if (qtablewidget_commitdata_callback != nullptr) {
            qtablewidget_commitdata_callback(this, editor);
        } else {
            QTableWidget::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtablewidget_editordestroyed_isbase) {
            qtablewidget_editordestroyed_isbase = false;
            QTableWidget::editorDestroyed(editor);
        } else if (qtablewidget_editordestroyed_callback != nullptr) {
            qtablewidget_editordestroyed_callback(this, editor);
        } else {
            QTableWidget::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtablewidget_edit2_isbase) {
            qtablewidget_edit2_isbase = false;
            return QTableWidget::edit(index, trigger, event);
        } else if (qtablewidget_edit2_callback != nullptr) {
            return qtablewidget_edit2_callback(this, index, trigger, event);
        } else {
            return QTableWidget::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtablewidget_selectioncommand_isbase) {
            qtablewidget_selectioncommand_isbase = false;
            return QTableWidget::selectionCommand(index, event);
        } else if (qtablewidget_selectioncommand_callback != nullptr) {
            return qtablewidget_selectioncommand_callback(this, index, event);
        } else {
            return QTableWidget::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtablewidget_startdrag_isbase) {
            qtablewidget_startdrag_isbase = false;
            QTableWidget::startDrag(supportedActions);
        } else if (qtablewidget_startdrag_callback != nullptr) {
            qtablewidget_startdrag_callback(this, supportedActions);
        } else {
            QTableWidget::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtablewidget_focusnextprevchild_isbase) {
            qtablewidget_focusnextprevchild_isbase = false;
            return QTableWidget::focusNextPrevChild(next);
        } else if (qtablewidget_focusnextprevchild_callback != nullptr) {
            return qtablewidget_focusnextprevchild_callback(this, next);
        } else {
            return QTableWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtablewidget_viewportevent_isbase) {
            qtablewidget_viewportevent_isbase = false;
            return QTableWidget::viewportEvent(event);
        } else if (qtablewidget_viewportevent_callback != nullptr) {
            return qtablewidget_viewportevent_callback(this, event);
        } else {
            return QTableWidget::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtablewidget_mousepressevent_isbase) {
            qtablewidget_mousepressevent_isbase = false;
            QTableWidget::mousePressEvent(event);
        } else if (qtablewidget_mousepressevent_callback != nullptr) {
            qtablewidget_mousepressevent_callback(this, event);
        } else {
            QTableWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtablewidget_mousemoveevent_isbase) {
            qtablewidget_mousemoveevent_isbase = false;
            QTableWidget::mouseMoveEvent(event);
        } else if (qtablewidget_mousemoveevent_callback != nullptr) {
            qtablewidget_mousemoveevent_callback(this, event);
        } else {
            QTableWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtablewidget_mousereleaseevent_isbase) {
            qtablewidget_mousereleaseevent_isbase = false;
            QTableWidget::mouseReleaseEvent(event);
        } else if (qtablewidget_mousereleaseevent_callback != nullptr) {
            qtablewidget_mousereleaseevent_callback(this, event);
        } else {
            QTableWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtablewidget_mousedoubleclickevent_isbase) {
            qtablewidget_mousedoubleclickevent_isbase = false;
            QTableWidget::mouseDoubleClickEvent(event);
        } else if (qtablewidget_mousedoubleclickevent_callback != nullptr) {
            qtablewidget_mousedoubleclickevent_callback(this, event);
        } else {
            QTableWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtablewidget_dragenterevent_isbase) {
            qtablewidget_dragenterevent_isbase = false;
            QTableWidget::dragEnterEvent(event);
        } else if (qtablewidget_dragenterevent_callback != nullptr) {
            qtablewidget_dragenterevent_callback(this, event);
        } else {
            QTableWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtablewidget_dragmoveevent_isbase) {
            qtablewidget_dragmoveevent_isbase = false;
            QTableWidget::dragMoveEvent(event);
        } else if (qtablewidget_dragmoveevent_callback != nullptr) {
            qtablewidget_dragmoveevent_callback(this, event);
        } else {
            QTableWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtablewidget_dragleaveevent_isbase) {
            qtablewidget_dragleaveevent_isbase = false;
            QTableWidget::dragLeaveEvent(event);
        } else if (qtablewidget_dragleaveevent_callback != nullptr) {
            qtablewidget_dragleaveevent_callback(this, event);
        } else {
            QTableWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtablewidget_focusinevent_isbase) {
            qtablewidget_focusinevent_isbase = false;
            QTableWidget::focusInEvent(event);
        } else if (qtablewidget_focusinevent_callback != nullptr) {
            qtablewidget_focusinevent_callback(this, event);
        } else {
            QTableWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtablewidget_focusoutevent_isbase) {
            qtablewidget_focusoutevent_isbase = false;
            QTableWidget::focusOutEvent(event);
        } else if (qtablewidget_focusoutevent_callback != nullptr) {
            qtablewidget_focusoutevent_callback(this, event);
        } else {
            QTableWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtablewidget_keypressevent_isbase) {
            qtablewidget_keypressevent_isbase = false;
            QTableWidget::keyPressEvent(event);
        } else if (qtablewidget_keypressevent_callback != nullptr) {
            qtablewidget_keypressevent_callback(this, event);
        } else {
            QTableWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtablewidget_resizeevent_isbase) {
            qtablewidget_resizeevent_isbase = false;
            QTableWidget::resizeEvent(event);
        } else if (qtablewidget_resizeevent_callback != nullptr) {
            qtablewidget_resizeevent_callback(this, event);
        } else {
            QTableWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtablewidget_inputmethodevent_isbase) {
            qtablewidget_inputmethodevent_isbase = false;
            QTableWidget::inputMethodEvent(event);
        } else if (qtablewidget_inputmethodevent_callback != nullptr) {
            qtablewidget_inputmethodevent_callback(this, event);
        } else {
            QTableWidget::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtablewidget_eventfilter_isbase) {
            qtablewidget_eventfilter_isbase = false;
            return QTableWidget::eventFilter(object, event);
        } else if (qtablewidget_eventfilter_callback != nullptr) {
            return qtablewidget_eventfilter_callback(this, object, event);
        } else {
            return QTableWidget::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtablewidget_minimumsizehint_isbase) {
            qtablewidget_minimumsizehint_isbase = false;
            return QTableWidget::minimumSizeHint();
        } else if (qtablewidget_minimumsizehint_callback != nullptr) {
            return qtablewidget_minimumsizehint_callback();
        } else {
            return QTableWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtablewidget_sizehint_isbase) {
            qtablewidget_sizehint_isbase = false;
            return QTableWidget::sizeHint();
        } else if (qtablewidget_sizehint_callback != nullptr) {
            return qtablewidget_sizehint_callback();
        } else {
            return QTableWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtablewidget_setupviewport_isbase) {
            qtablewidget_setupviewport_isbase = false;
            QTableWidget::setupViewport(viewport);
        } else if (qtablewidget_setupviewport_callback != nullptr) {
            qtablewidget_setupviewport_callback(this, viewport);
        } else {
            QTableWidget::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtablewidget_wheelevent_isbase) {
            qtablewidget_wheelevent_isbase = false;
            QTableWidget::wheelEvent(param1);
        } else if (qtablewidget_wheelevent_callback != nullptr) {
            qtablewidget_wheelevent_callback(this, param1);
        } else {
            QTableWidget::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtablewidget_contextmenuevent_isbase) {
            qtablewidget_contextmenuevent_isbase = false;
            QTableWidget::contextMenuEvent(param1);
        } else if (qtablewidget_contextmenuevent_callback != nullptr) {
            qtablewidget_contextmenuevent_callback(this, param1);
        } else {
            QTableWidget::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtablewidget_changeevent_isbase) {
            qtablewidget_changeevent_isbase = false;
            QTableWidget::changeEvent(param1);
        } else if (qtablewidget_changeevent_callback != nullptr) {
            qtablewidget_changeevent_callback(this, param1);
        } else {
            QTableWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtablewidget_initstyleoption_isbase) {
            qtablewidget_initstyleoption_isbase = false;
            QTableWidget::initStyleOption(option);
        } else if (qtablewidget_initstyleoption_callback != nullptr) {
            qtablewidget_initstyleoption_callback(this, option);
        } else {
            QTableWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtablewidget_devtype_isbase) {
            qtablewidget_devtype_isbase = false;
            return QTableWidget::devType();
        } else if (qtablewidget_devtype_callback != nullptr) {
            return qtablewidget_devtype_callback();
        } else {
            return QTableWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtablewidget_setvisible_isbase) {
            qtablewidget_setvisible_isbase = false;
            QTableWidget::setVisible(visible);
        } else if (qtablewidget_setvisible_callback != nullptr) {
            qtablewidget_setvisible_callback(this, visible);
        } else {
            QTableWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtablewidget_heightforwidth_isbase) {
            qtablewidget_heightforwidth_isbase = false;
            return QTableWidget::heightForWidth(param1);
        } else if (qtablewidget_heightforwidth_callback != nullptr) {
            return qtablewidget_heightforwidth_callback(this, param1);
        } else {
            return QTableWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtablewidget_hasheightforwidth_isbase) {
            qtablewidget_hasheightforwidth_isbase = false;
            return QTableWidget::hasHeightForWidth();
        } else if (qtablewidget_hasheightforwidth_callback != nullptr) {
            return qtablewidget_hasheightforwidth_callback();
        } else {
            return QTableWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtablewidget_paintengine_isbase) {
            qtablewidget_paintengine_isbase = false;
            return QTableWidget::paintEngine();
        } else if (qtablewidget_paintengine_callback != nullptr) {
            return qtablewidget_paintengine_callback();
        } else {
            return QTableWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtablewidget_keyreleaseevent_isbase) {
            qtablewidget_keyreleaseevent_isbase = false;
            QTableWidget::keyReleaseEvent(event);
        } else if (qtablewidget_keyreleaseevent_callback != nullptr) {
            qtablewidget_keyreleaseevent_callback(this, event);
        } else {
            QTableWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtablewidget_enterevent_isbase) {
            qtablewidget_enterevent_isbase = false;
            QTableWidget::enterEvent(event);
        } else if (qtablewidget_enterevent_callback != nullptr) {
            qtablewidget_enterevent_callback(this, event);
        } else {
            QTableWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtablewidget_leaveevent_isbase) {
            qtablewidget_leaveevent_isbase = false;
            QTableWidget::leaveEvent(event);
        } else if (qtablewidget_leaveevent_callback != nullptr) {
            qtablewidget_leaveevent_callback(this, event);
        } else {
            QTableWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtablewidget_moveevent_isbase) {
            qtablewidget_moveevent_isbase = false;
            QTableWidget::moveEvent(event);
        } else if (qtablewidget_moveevent_callback != nullptr) {
            qtablewidget_moveevent_callback(this, event);
        } else {
            QTableWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtablewidget_closeevent_isbase) {
            qtablewidget_closeevent_isbase = false;
            QTableWidget::closeEvent(event);
        } else if (qtablewidget_closeevent_callback != nullptr) {
            qtablewidget_closeevent_callback(this, event);
        } else {
            QTableWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtablewidget_tabletevent_isbase) {
            qtablewidget_tabletevent_isbase = false;
            QTableWidget::tabletEvent(event);
        } else if (qtablewidget_tabletevent_callback != nullptr) {
            qtablewidget_tabletevent_callback(this, event);
        } else {
            QTableWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtablewidget_actionevent_isbase) {
            qtablewidget_actionevent_isbase = false;
            QTableWidget::actionEvent(event);
        } else if (qtablewidget_actionevent_callback != nullptr) {
            qtablewidget_actionevent_callback(this, event);
        } else {
            QTableWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtablewidget_showevent_isbase) {
            qtablewidget_showevent_isbase = false;
            QTableWidget::showEvent(event);
        } else if (qtablewidget_showevent_callback != nullptr) {
            qtablewidget_showevent_callback(this, event);
        } else {
            QTableWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtablewidget_hideevent_isbase) {
            qtablewidget_hideevent_isbase = false;
            QTableWidget::hideEvent(event);
        } else if (qtablewidget_hideevent_callback != nullptr) {
            qtablewidget_hideevent_callback(this, event);
        } else {
            QTableWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtablewidget_nativeevent_isbase) {
            qtablewidget_nativeevent_isbase = false;
            return QTableWidget::nativeEvent(eventType, message, result);
        } else if (qtablewidget_nativeevent_callback != nullptr) {
            return qtablewidget_nativeevent_callback(this, eventType, message, result);
        } else {
            return QTableWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtablewidget_metric_isbase) {
            qtablewidget_metric_isbase = false;
            return QTableWidget::metric(param1);
        } else if (qtablewidget_metric_callback != nullptr) {
            return qtablewidget_metric_callback(this, param1);
        } else {
            return QTableWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtablewidget_initpainter_isbase) {
            qtablewidget_initpainter_isbase = false;
            QTableWidget::initPainter(painter);
        } else if (qtablewidget_initpainter_callback != nullptr) {
            qtablewidget_initpainter_callback(this, painter);
        } else {
            QTableWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtablewidget_redirected_isbase) {
            qtablewidget_redirected_isbase = false;
            return QTableWidget::redirected(offset);
        } else if (qtablewidget_redirected_callback != nullptr) {
            return qtablewidget_redirected_callback(this, offset);
        } else {
            return QTableWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtablewidget_sharedpainter_isbase) {
            qtablewidget_sharedpainter_isbase = false;
            return QTableWidget::sharedPainter();
        } else if (qtablewidget_sharedpainter_callback != nullptr) {
            return qtablewidget_sharedpainter_callback();
        } else {
            return QTableWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtablewidget_childevent_isbase) {
            qtablewidget_childevent_isbase = false;
            QTableWidget::childEvent(event);
        } else if (qtablewidget_childevent_callback != nullptr) {
            qtablewidget_childevent_callback(this, event);
        } else {
            QTableWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtablewidget_customevent_isbase) {
            qtablewidget_customevent_isbase = false;
            QTableWidget::customEvent(event);
        } else if (qtablewidget_customevent_callback != nullptr) {
            qtablewidget_customevent_callback(this, event);
        } else {
            QTableWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtablewidget_connectnotify_isbase) {
            qtablewidget_connectnotify_isbase = false;
            QTableWidget::connectNotify(signal);
        } else if (qtablewidget_connectnotify_callback != nullptr) {
            qtablewidget_connectnotify_callback(this, signal);
        } else {
            QTableWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtablewidget_disconnectnotify_isbase) {
            qtablewidget_disconnectnotify_isbase = false;
            QTableWidget::disconnectNotify(signal);
        } else if (qtablewidget_disconnectnotify_callback != nullptr) {
            qtablewidget_disconnectnotify_callback(this, signal);
        } else {
            QTableWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowMoved(int row, int oldIndex, int newIndex) {
        if (qtablewidget_rowmoved_isbase) {
            qtablewidget_rowmoved_isbase = false;
            QTableWidget::rowMoved(row, oldIndex, newIndex);
        } else if (qtablewidget_rowmoved_callback != nullptr) {
            qtablewidget_rowmoved_callback(this, row, oldIndex, newIndex);
        } else {
            QTableWidget::rowMoved(row, oldIndex, newIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnMoved(int column, int oldIndex, int newIndex) {
        if (qtablewidget_columnmoved_isbase) {
            qtablewidget_columnmoved_isbase = false;
            QTableWidget::columnMoved(column, oldIndex, newIndex);
        } else if (qtablewidget_columnmoved_callback != nullptr) {
            qtablewidget_columnmoved_callback(this, column, oldIndex, newIndex);
        } else {
            QTableWidget::columnMoved(column, oldIndex, newIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowResized(int row, int oldHeight, int newHeight) {
        if (qtablewidget_rowresized_isbase) {
            qtablewidget_rowresized_isbase = false;
            QTableWidget::rowResized(row, oldHeight, newHeight);
        } else if (qtablewidget_rowresized_callback != nullptr) {
            qtablewidget_rowresized_callback(this, row, oldHeight, newHeight);
        } else {
            QTableWidget::rowResized(row, oldHeight, newHeight);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnResized(int column, int oldWidth, int newWidth) {
        if (qtablewidget_columnresized_isbase) {
            qtablewidget_columnresized_isbase = false;
            QTableWidget::columnResized(column, oldWidth, newWidth);
        } else if (qtablewidget_columnresized_callback != nullptr) {
            qtablewidget_columnresized_callback(this, column, oldWidth, newWidth);
        } else {
            QTableWidget::columnResized(column, oldWidth, newWidth);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowCountChanged(int oldCount, int newCount) {
        if (qtablewidget_rowcountchanged_isbase) {
            qtablewidget_rowcountchanged_isbase = false;
            QTableWidget::rowCountChanged(oldCount, newCount);
        } else if (qtablewidget_rowcountchanged_callback != nullptr) {
            qtablewidget_rowcountchanged_callback(this, oldCount, newCount);
        } else {
            QTableWidget::rowCountChanged(oldCount, newCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnCountChanged(int oldCount, int newCount) {
        if (qtablewidget_columncountchanged_isbase) {
            qtablewidget_columncountchanged_isbase = false;
            QTableWidget::columnCountChanged(oldCount, newCount);
        } else if (qtablewidget_columncountchanged_callback != nullptr) {
            qtablewidget_columncountchanged_callback(this, oldCount, newCount);
        } else {
            QTableWidget::columnCountChanged(oldCount, newCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qtablewidget_state_isbase) {
            qtablewidget_state_isbase = false;
            return QTableWidget::state();
        } else if (qtablewidget_state_callback != nullptr) {
            return qtablewidget_state_callback();
        } else {
            return QTableWidget::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qtablewidget_setstate_isbase) {
            qtablewidget_setstate_isbase = false;
            QTableWidget::setState(state);
        } else if (qtablewidget_setstate_callback != nullptr) {
            qtablewidget_setstate_callback(this, state);
        } else {
            QTableWidget::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qtablewidget_scheduledelayeditemslayout_isbase) {
            qtablewidget_scheduledelayeditemslayout_isbase = false;
            QTableWidget::scheduleDelayedItemsLayout();
        } else if (qtablewidget_scheduledelayeditemslayout_callback != nullptr) {
            qtablewidget_scheduledelayeditemslayout_callback();
        } else {
            QTableWidget::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qtablewidget_executedelayeditemslayout_isbase) {
            qtablewidget_executedelayeditemslayout_isbase = false;
            QTableWidget::executeDelayedItemsLayout();
        } else if (qtablewidget_executedelayeditemslayout_callback != nullptr) {
            qtablewidget_executedelayeditemslayout_callback();
        } else {
            QTableWidget::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qtablewidget_setdirtyregion_isbase) {
            qtablewidget_setdirtyregion_isbase = false;
            QTableWidget::setDirtyRegion(region);
        } else if (qtablewidget_setdirtyregion_callback != nullptr) {
            qtablewidget_setdirtyregion_callback(this, region);
        } else {
            QTableWidget::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qtablewidget_scrolldirtyregion_isbase) {
            qtablewidget_scrolldirtyregion_isbase = false;
            QTableWidget::scrollDirtyRegion(dx, dy);
        } else if (qtablewidget_scrolldirtyregion_callback != nullptr) {
            qtablewidget_scrolldirtyregion_callback(this, dx, dy);
        } else {
            QTableWidget::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qtablewidget_dirtyregionoffset_isbase) {
            qtablewidget_dirtyregionoffset_isbase = false;
            return QTableWidget::dirtyRegionOffset();
        } else if (qtablewidget_dirtyregionoffset_callback != nullptr) {
            return qtablewidget_dirtyregionoffset_callback();
        } else {
            return QTableWidget::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qtablewidget_startautoscroll_isbase) {
            qtablewidget_startautoscroll_isbase = false;
            QTableWidget::startAutoScroll();
        } else if (qtablewidget_startautoscroll_callback != nullptr) {
            qtablewidget_startautoscroll_callback();
        } else {
            QTableWidget::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qtablewidget_stopautoscroll_isbase) {
            qtablewidget_stopautoscroll_isbase = false;
            QTableWidget::stopAutoScroll();
        } else if (qtablewidget_stopautoscroll_callback != nullptr) {
            qtablewidget_stopautoscroll_callback();
        } else {
            QTableWidget::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qtablewidget_doautoscroll_isbase) {
            qtablewidget_doautoscroll_isbase = false;
            QTableWidget::doAutoScroll();
        } else if (qtablewidget_doautoscroll_callback != nullptr) {
            qtablewidget_doautoscroll_callback();
        } else {
            QTableWidget::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qtablewidget_dropindicatorposition_isbase) {
            qtablewidget_dropindicatorposition_isbase = false;
            return QTableWidget::dropIndicatorPosition();
        } else if (qtablewidget_dropindicatorposition_callback != nullptr) {
            return qtablewidget_dropindicatorposition_callback();
        } else {
            return QTableWidget::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtablewidget_setviewportmargins_isbase) {
            qtablewidget_setviewportmargins_isbase = false;
            QTableWidget::setViewportMargins(left, top, right, bottom);
        } else if (qtablewidget_setviewportmargins_callback != nullptr) {
            qtablewidget_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QTableWidget::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtablewidget_viewportmargins_isbase) {
            qtablewidget_viewportmargins_isbase = false;
            return QTableWidget::viewportMargins();
        } else if (qtablewidget_viewportmargins_callback != nullptr) {
            return qtablewidget_viewportmargins_callback();
        } else {
            return QTableWidget::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtablewidget_drawframe_isbase) {
            qtablewidget_drawframe_isbase = false;
            QTableWidget::drawFrame(param1);
        } else if (qtablewidget_drawframe_callback != nullptr) {
            qtablewidget_drawframe_callback(this, param1);
        } else {
            QTableWidget::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtablewidget_updatemicrofocus_isbase) {
            qtablewidget_updatemicrofocus_isbase = false;
            QTableWidget::updateMicroFocus();
        } else if (qtablewidget_updatemicrofocus_callback != nullptr) {
            qtablewidget_updatemicrofocus_callback();
        } else {
            QTableWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtablewidget_create_isbase) {
            qtablewidget_create_isbase = false;
            QTableWidget::create();
        } else if (qtablewidget_create_callback != nullptr) {
            qtablewidget_create_callback();
        } else {
            QTableWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtablewidget_destroy_isbase) {
            qtablewidget_destroy_isbase = false;
            QTableWidget::destroy();
        } else if (qtablewidget_destroy_callback != nullptr) {
            qtablewidget_destroy_callback();
        } else {
            QTableWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtablewidget_focusnextchild_isbase) {
            qtablewidget_focusnextchild_isbase = false;
            return QTableWidget::focusNextChild();
        } else if (qtablewidget_focusnextchild_callback != nullptr) {
            return qtablewidget_focusnextchild_callback();
        } else {
            return QTableWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtablewidget_focuspreviouschild_isbase) {
            qtablewidget_focuspreviouschild_isbase = false;
            return QTableWidget::focusPreviousChild();
        } else if (qtablewidget_focuspreviouschild_callback != nullptr) {
            return qtablewidget_focuspreviouschild_callback();
        } else {
            return QTableWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtablewidget_sender_isbase) {
            qtablewidget_sender_isbase = false;
            return QTableWidget::sender();
        } else if (qtablewidget_sender_callback != nullptr) {
            return qtablewidget_sender_callback();
        } else {
            return QTableWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtablewidget_sendersignalindex_isbase) {
            qtablewidget_sendersignalindex_isbase = false;
            return QTableWidget::senderSignalIndex();
        } else if (qtablewidget_sendersignalindex_callback != nullptr) {
            return qtablewidget_sendersignalindex_callback();
        } else {
            return QTableWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtablewidget_receivers_isbase) {
            qtablewidget_receivers_isbase = false;
            return QTableWidget::receivers(signal);
        } else if (qtablewidget_receivers_callback != nullptr) {
            return qtablewidget_receivers_callback(this, signal);
        } else {
            return QTableWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtablewidget_issignalconnected_isbase) {
            qtablewidget_issignalconnected_isbase = false;
            return QTableWidget::isSignalConnected(signal);
        } else if (qtablewidget_issignalconnected_callback != nullptr) {
            return qtablewidget_issignalconnected_callback(this, signal);
        } else {
            return QTableWidget::isSignalConnected(signal);
        }
    }
};

#endif
