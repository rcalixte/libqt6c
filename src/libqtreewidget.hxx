#pragma once
#ifndef SRCC_LIBVIRTUALQTREEWIDGET_H
#define SRCC_LIBVIRTUALQTREEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTreeWidgetItem so that we can call protected methods
class VirtualQTreeWidgetItem : public QTreeWidgetItem {

  public:
    // Virtual class public types (including callbacks)
    using QTreeWidgetItem_Clone_Callback = QTreeWidgetItem* (*)();
    using QTreeWidgetItem_Data_Callback = QVariant (*)(const QTreeWidgetItem*, int, int);
    using QTreeWidgetItem_SetData_Callback = void (*)(QTreeWidgetItem*, int, int, const QVariant&);
    using QTreeWidgetItem_OperatorLesser_Callback = bool (*)(const QTreeWidgetItem*, const QTreeWidgetItem&);
    using QTreeWidgetItem_Read_Callback = void (*)(QTreeWidgetItem*, QDataStream&);
    using QTreeWidgetItem_Write_Callback = void (*)(const QTreeWidgetItem*, QDataStream&);
    using QTreeWidgetItem_EmitDataChanged_Callback = void (*)();

  protected:
    // Instance callback storage
    QTreeWidgetItem_Clone_Callback qtreewidgetitem_clone_callback = nullptr;
    QTreeWidgetItem_Data_Callback qtreewidgetitem_data_callback = nullptr;
    QTreeWidgetItem_SetData_Callback qtreewidgetitem_setdata_callback = nullptr;
    QTreeWidgetItem_OperatorLesser_Callback qtreewidgetitem_operatorlesser_callback = nullptr;
    QTreeWidgetItem_Read_Callback qtreewidgetitem_read_callback = nullptr;
    QTreeWidgetItem_Write_Callback qtreewidgetitem_write_callback = nullptr;
    QTreeWidgetItem_EmitDataChanged_Callback qtreewidgetitem_emitdatachanged_callback = nullptr;

    // Instance base flags
    mutable bool qtreewidgetitem_clone_isbase = false;
    mutable bool qtreewidgetitem_data_isbase = false;
    mutable bool qtreewidgetitem_setdata_isbase = false;
    mutable bool qtreewidgetitem_operatorlesser_isbase = false;
    mutable bool qtreewidgetitem_read_isbase = false;
    mutable bool qtreewidgetitem_write_isbase = false;
    mutable bool qtreewidgetitem_emitdatachanged_isbase = false;

  public:
    VirtualQTreeWidgetItem() : QTreeWidgetItem(){};
    VirtualQTreeWidgetItem(const QStringList& strings) : QTreeWidgetItem(strings){};
    VirtualQTreeWidgetItem(QTreeWidget* treeview) : QTreeWidgetItem(treeview){};
    VirtualQTreeWidgetItem(QTreeWidget* treeview, const QStringList& strings) : QTreeWidgetItem(treeview, strings){};
    VirtualQTreeWidgetItem(QTreeWidget* treeview, QTreeWidgetItem* after) : QTreeWidgetItem(treeview, after){};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent) : QTreeWidgetItem(parent){};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent, const QStringList& strings) : QTreeWidgetItem(parent, strings){};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent, QTreeWidgetItem* after) : QTreeWidgetItem(parent, after){};
    VirtualQTreeWidgetItem(const QTreeWidgetItem& other) : QTreeWidgetItem(other){};
    VirtualQTreeWidgetItem(int typeVal) : QTreeWidgetItem(typeVal){};
    VirtualQTreeWidgetItem(const QStringList& strings, int typeVal) : QTreeWidgetItem(strings, typeVal){};
    VirtualQTreeWidgetItem(QTreeWidget* treeview, int typeVal) : QTreeWidgetItem(treeview, typeVal){};
    VirtualQTreeWidgetItem(QTreeWidget* treeview, const QStringList& strings, int typeVal) : QTreeWidgetItem(treeview, strings, typeVal){};
    VirtualQTreeWidgetItem(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal) : QTreeWidgetItem(treeview, after, typeVal){};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent, int typeVal) : QTreeWidgetItem(parent, typeVal){};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent, const QStringList& strings, int typeVal) : QTreeWidgetItem(parent, strings, typeVal){};
    VirtualQTreeWidgetItem(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal) : QTreeWidgetItem(parent, after, typeVal){};

    ~VirtualQTreeWidgetItem() {
        qtreewidgetitem_clone_callback = nullptr;
        qtreewidgetitem_data_callback = nullptr;
        qtreewidgetitem_setdata_callback = nullptr;
        qtreewidgetitem_operatorlesser_callback = nullptr;
        qtreewidgetitem_read_callback = nullptr;
        qtreewidgetitem_write_callback = nullptr;
        qtreewidgetitem_emitdatachanged_callback = nullptr;
    }

    // Callback setters
    void setQTreeWidgetItem_Clone_Callback(QTreeWidgetItem_Clone_Callback cb) { qtreewidgetitem_clone_callback = cb; }
    void setQTreeWidgetItem_Data_Callback(QTreeWidgetItem_Data_Callback cb) { qtreewidgetitem_data_callback = cb; }
    void setQTreeWidgetItem_SetData_Callback(QTreeWidgetItem_SetData_Callback cb) { qtreewidgetitem_setdata_callback = cb; }
    void setQTreeWidgetItem_OperatorLesser_Callback(QTreeWidgetItem_OperatorLesser_Callback cb) { qtreewidgetitem_operatorlesser_callback = cb; }
    void setQTreeWidgetItem_Read_Callback(QTreeWidgetItem_Read_Callback cb) { qtreewidgetitem_read_callback = cb; }
    void setQTreeWidgetItem_Write_Callback(QTreeWidgetItem_Write_Callback cb) { qtreewidgetitem_write_callback = cb; }
    void setQTreeWidgetItem_EmitDataChanged_Callback(QTreeWidgetItem_EmitDataChanged_Callback cb) { qtreewidgetitem_emitdatachanged_callback = cb; }

    // Base flag setters
    void setQTreeWidgetItem_Clone_IsBase(bool value) const { qtreewidgetitem_clone_isbase = value; }
    void setQTreeWidgetItem_Data_IsBase(bool value) const { qtreewidgetitem_data_isbase = value; }
    void setQTreeWidgetItem_SetData_IsBase(bool value) const { qtreewidgetitem_setdata_isbase = value; }
    void setQTreeWidgetItem_OperatorLesser_IsBase(bool value) const { qtreewidgetitem_operatorlesser_isbase = value; }
    void setQTreeWidgetItem_Read_IsBase(bool value) const { qtreewidgetitem_read_isbase = value; }
    void setQTreeWidgetItem_Write_IsBase(bool value) const { qtreewidgetitem_write_isbase = value; }
    void setQTreeWidgetItem_EmitDataChanged_IsBase(bool value) const { qtreewidgetitem_emitdatachanged_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QTreeWidgetItem* clone() const override {
        if (qtreewidgetitem_clone_isbase) {
            qtreewidgetitem_clone_isbase = false;
            return QTreeWidgetItem::clone();
        } else if (qtreewidgetitem_clone_callback != nullptr) {
            return qtreewidgetitem_clone_callback();
        } else {
            return QTreeWidgetItem::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(int column, int role) const override {
        if (qtreewidgetitem_data_isbase) {
            qtreewidgetitem_data_isbase = false;
            return QTreeWidgetItem::data(column, role);
        } else if (qtreewidgetitem_data_callback != nullptr) {
            return qtreewidgetitem_data_callback(this, column, role);
        } else {
            return QTreeWidgetItem::data(column, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(int column, int role, const QVariant& value) override {
        if (qtreewidgetitem_setdata_isbase) {
            qtreewidgetitem_setdata_isbase = false;
            QTreeWidgetItem::setData(column, role, value);
        } else if (qtreewidgetitem_setdata_callback != nullptr) {
            qtreewidgetitem_setdata_callback(this, column, role, value);
        } else {
            QTreeWidgetItem::setData(column, role, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool operator<(const QTreeWidgetItem& other) const override {
        if (qtreewidgetitem_operatorlesser_isbase) {
            qtreewidgetitem_operatorlesser_isbase = false;
            return QTreeWidgetItem::operator<(other);
        } else if (qtreewidgetitem_operatorlesser_callback != nullptr) {
            return qtreewidgetitem_operatorlesser_callback(this, other);
        } else {
            return QTreeWidgetItem::operator<(other);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void read(QDataStream& in) override {
        if (qtreewidgetitem_read_isbase) {
            qtreewidgetitem_read_isbase = false;
            QTreeWidgetItem::read(in);
        } else if (qtreewidgetitem_read_callback != nullptr) {
            qtreewidgetitem_read_callback(this, in);
        } else {
            QTreeWidgetItem::read(in);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(QDataStream& out) const override {
        if (qtreewidgetitem_write_isbase) {
            qtreewidgetitem_write_isbase = false;
            QTreeWidgetItem::write(out);
        } else if (qtreewidgetitem_write_callback != nullptr) {
            qtreewidgetitem_write_callback(this, out);
        } else {
            QTreeWidgetItem::write(out);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitDataChanged() {
        if (qtreewidgetitem_emitdatachanged_isbase) {
            qtreewidgetitem_emitdatachanged_isbase = false;
            QTreeWidgetItem::emitDataChanged();
        } else if (qtreewidgetitem_emitdatachanged_callback != nullptr) {
            qtreewidgetitem_emitdatachanged_callback();
        } else {
            QTreeWidgetItem::emitDataChanged();
        }
    }
};

// This class is a subclass of QTreeWidget so that we can call protected methods
class VirtualQTreeWidget : public QTreeWidget {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QTreeWidget_Metacall_Callback = int (*)(QTreeWidget*, QMetaObject::Call, int, void**);
    using QTreeWidget_SetSelectionModel_Callback = void (*)(QTreeWidget*, QItemSelectionModel*);
    using QTreeWidget_Event_Callback = bool (*)(QTreeWidget*, QEvent*);
    using QTreeWidget_MimeTypes_Callback = QStringList (*)();
    using QTreeWidget_MimeData_Callback = QMimeData* (*)(const QTreeWidget*, const QList<QTreeWidgetItem*>&);
    using QTreeWidget_DropMimeData_Callback = bool (*)(QTreeWidget*, QTreeWidgetItem*, int, const QMimeData*, Qt::DropAction);
    using QTreeWidget_SupportedDropActions_Callback = Qt::DropActions (*)();
    using QTreeWidget_DropEvent_Callback = void (*)(QTreeWidget*, QDropEvent*);
    using QTreeWidget_SetRootIndex_Callback = void (*)(QTreeWidget*, const QModelIndex&);
    using QTreeWidget_KeyboardSearch_Callback = void (*)(QTreeWidget*, const QString&);
    using QTreeWidget_VisualRect_Callback = QRect (*)(const QTreeWidget*, const QModelIndex&);
    using QTreeWidget_ScrollTo_Callback = void (*)(QTreeWidget*, const QModelIndex&, QAbstractItemView::ScrollHint);
    using QTreeWidget_IndexAt_Callback = QModelIndex (*)(const QTreeWidget*, const QPoint&);
    using QTreeWidget_DoItemsLayout_Callback = void (*)();
    using QTreeWidget_Reset_Callback = void (*)();
    using QTreeWidget_DataChanged_Callback = void (*)(QTreeWidget*, const QModelIndex&, const QModelIndex&, const QList<int>&);
    using QTreeWidget_SelectAll_Callback = void (*)();
    using QTreeWidget_VerticalScrollbarValueChanged_Callback = void (*)(QTreeWidget*, int);
    using QTreeWidget_ScrollContentsBy_Callback = void (*)(QTreeWidget*, int, int);
    using QTreeWidget_RowsInserted_Callback = void (*)(QTreeWidget*, const QModelIndex&, int, int);
    using QTreeWidget_RowsAboutToBeRemoved_Callback = void (*)(QTreeWidget*, const QModelIndex&, int, int);
    using QTreeWidget_MoveCursor_Callback = QModelIndex (*)(QTreeWidget*, int, Qt::KeyboardModifiers);
    using QTreeWidget_HorizontalOffset_Callback = int (*)();
    using QTreeWidget_VerticalOffset_Callback = int (*)();
    using QTreeWidget_SetSelection_Callback = void (*)(QTreeWidget*, const QRect&, QItemSelectionModel::SelectionFlags);
    using QTreeWidget_VisualRegionForSelection_Callback = QRegion (*)(const QTreeWidget*, const QItemSelection&);
    using QTreeWidget_SelectedIndexes_Callback = QModelIndexList (*)();
    using QTreeWidget_ChangeEvent_Callback = void (*)(QTreeWidget*, QEvent*);
    using QTreeWidget_TimerEvent_Callback = void (*)(QTreeWidget*, QTimerEvent*);
    using QTreeWidget_PaintEvent_Callback = void (*)(QTreeWidget*, QPaintEvent*);
    using QTreeWidget_DrawRow_Callback = void (*)(const QTreeWidget*, QPainter*, const QStyleOptionViewItem&, const QModelIndex&);
    using QTreeWidget_DrawBranches_Callback = void (*)(const QTreeWidget*, QPainter*, const QRect&, const QModelIndex&);
    using QTreeWidget_MousePressEvent_Callback = void (*)(QTreeWidget*, QMouseEvent*);
    using QTreeWidget_MouseReleaseEvent_Callback = void (*)(QTreeWidget*, QMouseEvent*);
    using QTreeWidget_MouseDoubleClickEvent_Callback = void (*)(QTreeWidget*, QMouseEvent*);
    using QTreeWidget_MouseMoveEvent_Callback = void (*)(QTreeWidget*, QMouseEvent*);
    using QTreeWidget_KeyPressEvent_Callback = void (*)(QTreeWidget*, QKeyEvent*);
    using QTreeWidget_DragMoveEvent_Callback = void (*)(QTreeWidget*, QDragMoveEvent*);
    using QTreeWidget_ViewportEvent_Callback = bool (*)(QTreeWidget*, QEvent*);
    using QTreeWidget_UpdateGeometries_Callback = void (*)();
    using QTreeWidget_ViewportSizeHint_Callback = QSize (*)();
    using QTreeWidget_SizeHintForColumn_Callback = int (*)(const QTreeWidget*, int);
    using QTreeWidget_HorizontalScrollbarAction_Callback = void (*)(QTreeWidget*, int);
    using QTreeWidget_IsIndexHidden_Callback = bool (*)(const QTreeWidget*, const QModelIndex&);
    using QTreeWidget_SelectionChanged_Callback = void (*)(QTreeWidget*, const QItemSelection&, const QItemSelection&);
    using QTreeWidget_CurrentChanged_Callback = void (*)(QTreeWidget*, const QModelIndex&, const QModelIndex&);
    using QTreeWidget_SizeHintForRow_Callback = int (*)(const QTreeWidget*, int);
    using QTreeWidget_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QTreeWidget*, const QModelIndex&);
    using QTreeWidget_InputMethodQuery_Callback = QVariant (*)(const QTreeWidget*, Qt::InputMethodQuery);
    using QTreeWidget_UpdateEditorData_Callback = void (*)();
    using QTreeWidget_UpdateEditorGeometries_Callback = void (*)();
    using QTreeWidget_VerticalScrollbarAction_Callback = void (*)(QTreeWidget*, int);
    using QTreeWidget_HorizontalScrollbarValueChanged_Callback = void (*)(QTreeWidget*, int);
    using QTreeWidget_CloseEditor_Callback = void (*)(QTreeWidget*, QWidget*, QAbstractItemDelegate::EndEditHint);
    using QTreeWidget_CommitData_Callback = void (*)(QTreeWidget*, QWidget*);
    using QTreeWidget_EditorDestroyed_Callback = void (*)(QTreeWidget*, QObject*);
    using QTreeWidget_Edit2_Callback = bool (*)(QTreeWidget*, const QModelIndex&, QAbstractItemView::EditTrigger, QEvent*);
    using QTreeWidget_SelectionCommand_Callback = QItemSelectionModel::SelectionFlags (*)(const QTreeWidget*, const QModelIndex&, const QEvent*);
    using QTreeWidget_StartDrag_Callback = void (*)(QTreeWidget*, Qt::DropActions);
    using QTreeWidget_InitViewItemOption_Callback = void (*)(const QTreeWidget*, QStyleOptionViewItem*);
    using QTreeWidget_FocusNextPrevChild_Callback = bool (*)(QTreeWidget*, bool);
    using QTreeWidget_DragEnterEvent_Callback = void (*)(QTreeWidget*, QDragEnterEvent*);
    using QTreeWidget_DragLeaveEvent_Callback = void (*)(QTreeWidget*, QDragLeaveEvent*);
    using QTreeWidget_FocusInEvent_Callback = void (*)(QTreeWidget*, QFocusEvent*);
    using QTreeWidget_FocusOutEvent_Callback = void (*)(QTreeWidget*, QFocusEvent*);
    using QTreeWidget_ResizeEvent_Callback = void (*)(QTreeWidget*, QResizeEvent*);
    using QTreeWidget_InputMethodEvent_Callback = void (*)(QTreeWidget*, QInputMethodEvent*);
    using QTreeWidget_EventFilter_Callback = bool (*)(QTreeWidget*, QObject*, QEvent*);
    using QTreeWidget_MinimumSizeHint_Callback = QSize (*)();
    using QTreeWidget_SizeHint_Callback = QSize (*)();
    using QTreeWidget_SetupViewport_Callback = void (*)(QTreeWidget*, QWidget*);
    using QTreeWidget_WheelEvent_Callback = void (*)(QTreeWidget*, QWheelEvent*);
    using QTreeWidget_ContextMenuEvent_Callback = void (*)(QTreeWidget*, QContextMenuEvent*);
    using QTreeWidget_InitStyleOption_Callback = void (*)(const QTreeWidget*, QStyleOptionFrame*);
    using QTreeWidget_DevType_Callback = int (*)();
    using QTreeWidget_SetVisible_Callback = void (*)(QTreeWidget*, bool);
    using QTreeWidget_HeightForWidth_Callback = int (*)(const QTreeWidget*, int);
    using QTreeWidget_HasHeightForWidth_Callback = bool (*)();
    using QTreeWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QTreeWidget_KeyReleaseEvent_Callback = void (*)(QTreeWidget*, QKeyEvent*);
    using QTreeWidget_EnterEvent_Callback = void (*)(QTreeWidget*, QEnterEvent*);
    using QTreeWidget_LeaveEvent_Callback = void (*)(QTreeWidget*, QEvent*);
    using QTreeWidget_MoveEvent_Callback = void (*)(QTreeWidget*, QMoveEvent*);
    using QTreeWidget_CloseEvent_Callback = void (*)(QTreeWidget*, QCloseEvent*);
    using QTreeWidget_TabletEvent_Callback = void (*)(QTreeWidget*, QTabletEvent*);
    using QTreeWidget_ActionEvent_Callback = void (*)(QTreeWidget*, QActionEvent*);
    using QTreeWidget_ShowEvent_Callback = void (*)(QTreeWidget*, QShowEvent*);
    using QTreeWidget_HideEvent_Callback = void (*)(QTreeWidget*, QHideEvent*);
    using QTreeWidget_NativeEvent_Callback = bool (*)(QTreeWidget*, const QByteArray&, void*, qintptr*);
    using QTreeWidget_Metric_Callback = int (*)(const QTreeWidget*, QPaintDevice::PaintDeviceMetric);
    using QTreeWidget_InitPainter_Callback = void (*)(const QTreeWidget*, QPainter*);
    using QTreeWidget_Redirected_Callback = QPaintDevice* (*)(const QTreeWidget*, QPoint*);
    using QTreeWidget_SharedPainter_Callback = QPainter* (*)();
    using QTreeWidget_ChildEvent_Callback = void (*)(QTreeWidget*, QChildEvent*);
    using QTreeWidget_CustomEvent_Callback = void (*)(QTreeWidget*, QEvent*);
    using QTreeWidget_ConnectNotify_Callback = void (*)(QTreeWidget*, const QMetaMethod&);
    using QTreeWidget_DisconnectNotify_Callback = void (*)(QTreeWidget*, const QMetaMethod&);
    using QTreeWidget_ColumnResized_Callback = void (*)(QTreeWidget*, int, int, int);
    using QTreeWidget_ColumnCountChanged_Callback = void (*)(QTreeWidget*, int, int);
    using QTreeWidget_ColumnMoved_Callback = void (*)();
    using QTreeWidget_Reexpand_Callback = void (*)();
    using QTreeWidget_RowsRemoved_Callback = void (*)(QTreeWidget*, const QModelIndex&, int, int);
    using QTreeWidget_DrawTree_Callback = void (*)(const QTreeWidget*, QPainter*, const QRegion&);
    using QTreeWidget_IndexRowSizeHint_Callback = int (*)(const QTreeWidget*, const QModelIndex&);
    using QTreeWidget_RowHeight_Callback = int (*)(const QTreeWidget*, const QModelIndex&);
    using QTreeWidget_State_Callback = QAbstractItemView::State (*)();
    using QTreeWidget_SetState_Callback = void (*)(QTreeWidget*, int);
    using QTreeWidget_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QTreeWidget_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QTreeWidget_SetDirtyRegion_Callback = void (*)(QTreeWidget*, const QRegion&);
    using QTreeWidget_ScrollDirtyRegion_Callback = void (*)(QTreeWidget*, int, int);
    using QTreeWidget_DirtyRegionOffset_Callback = QPoint (*)();
    using QTreeWidget_StartAutoScroll_Callback = void (*)();
    using QTreeWidget_StopAutoScroll_Callback = void (*)();
    using QTreeWidget_DoAutoScroll_Callback = void (*)();
    using QTreeWidget_DropIndicatorPosition_Callback = QAbstractItemView::DropIndicatorPosition (*)();
    using QTreeWidget_SetViewportMargins_Callback = void (*)(QTreeWidget*, int, int, int, int);
    using QTreeWidget_ViewportMargins_Callback = QMargins (*)();
    using QTreeWidget_DrawFrame_Callback = void (*)(QTreeWidget*, QPainter*);
    using QTreeWidget_UpdateMicroFocus_Callback = void (*)();
    using QTreeWidget_Create_Callback = void (*)();
    using QTreeWidget_Destroy_Callback = void (*)();
    using QTreeWidget_FocusNextChild_Callback = bool (*)();
    using QTreeWidget_FocusPreviousChild_Callback = bool (*)();
    using QTreeWidget_Sender_Callback = QObject* (*)();
    using QTreeWidget_SenderSignalIndex_Callback = int (*)();
    using QTreeWidget_Receivers_Callback = int (*)(const QTreeWidget*, const char*);
    using QTreeWidget_IsSignalConnected_Callback = bool (*)(const QTreeWidget*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTreeWidget_Metacall_Callback qtreewidget_metacall_callback = nullptr;
    QTreeWidget_SetSelectionModel_Callback qtreewidget_setselectionmodel_callback = nullptr;
    QTreeWidget_Event_Callback qtreewidget_event_callback = nullptr;
    QTreeWidget_MimeTypes_Callback qtreewidget_mimetypes_callback = nullptr;
    QTreeWidget_MimeData_Callback qtreewidget_mimedata_callback = nullptr;
    QTreeWidget_DropMimeData_Callback qtreewidget_dropmimedata_callback = nullptr;
    QTreeWidget_SupportedDropActions_Callback qtreewidget_supporteddropactions_callback = nullptr;
    QTreeWidget_DropEvent_Callback qtreewidget_dropevent_callback = nullptr;
    QTreeWidget_SetRootIndex_Callback qtreewidget_setrootindex_callback = nullptr;
    QTreeWidget_KeyboardSearch_Callback qtreewidget_keyboardsearch_callback = nullptr;
    QTreeWidget_VisualRect_Callback qtreewidget_visualrect_callback = nullptr;
    QTreeWidget_ScrollTo_Callback qtreewidget_scrollto_callback = nullptr;
    QTreeWidget_IndexAt_Callback qtreewidget_indexat_callback = nullptr;
    QTreeWidget_DoItemsLayout_Callback qtreewidget_doitemslayout_callback = nullptr;
    QTreeWidget_Reset_Callback qtreewidget_reset_callback = nullptr;
    QTreeWidget_DataChanged_Callback qtreewidget_datachanged_callback = nullptr;
    QTreeWidget_SelectAll_Callback qtreewidget_selectall_callback = nullptr;
    QTreeWidget_VerticalScrollbarValueChanged_Callback qtreewidget_verticalscrollbarvaluechanged_callback = nullptr;
    QTreeWidget_ScrollContentsBy_Callback qtreewidget_scrollcontentsby_callback = nullptr;
    QTreeWidget_RowsInserted_Callback qtreewidget_rowsinserted_callback = nullptr;
    QTreeWidget_RowsAboutToBeRemoved_Callback qtreewidget_rowsabouttoberemoved_callback = nullptr;
    QTreeWidget_MoveCursor_Callback qtreewidget_movecursor_callback = nullptr;
    QTreeWidget_HorizontalOffset_Callback qtreewidget_horizontaloffset_callback = nullptr;
    QTreeWidget_VerticalOffset_Callback qtreewidget_verticaloffset_callback = nullptr;
    QTreeWidget_SetSelection_Callback qtreewidget_setselection_callback = nullptr;
    QTreeWidget_VisualRegionForSelection_Callback qtreewidget_visualregionforselection_callback = nullptr;
    QTreeWidget_SelectedIndexes_Callback qtreewidget_selectedindexes_callback = nullptr;
    QTreeWidget_ChangeEvent_Callback qtreewidget_changeevent_callback = nullptr;
    QTreeWidget_TimerEvent_Callback qtreewidget_timerevent_callback = nullptr;
    QTreeWidget_PaintEvent_Callback qtreewidget_paintevent_callback = nullptr;
    QTreeWidget_DrawRow_Callback qtreewidget_drawrow_callback = nullptr;
    QTreeWidget_DrawBranches_Callback qtreewidget_drawbranches_callback = nullptr;
    QTreeWidget_MousePressEvent_Callback qtreewidget_mousepressevent_callback = nullptr;
    QTreeWidget_MouseReleaseEvent_Callback qtreewidget_mousereleaseevent_callback = nullptr;
    QTreeWidget_MouseDoubleClickEvent_Callback qtreewidget_mousedoubleclickevent_callback = nullptr;
    QTreeWidget_MouseMoveEvent_Callback qtreewidget_mousemoveevent_callback = nullptr;
    QTreeWidget_KeyPressEvent_Callback qtreewidget_keypressevent_callback = nullptr;
    QTreeWidget_DragMoveEvent_Callback qtreewidget_dragmoveevent_callback = nullptr;
    QTreeWidget_ViewportEvent_Callback qtreewidget_viewportevent_callback = nullptr;
    QTreeWidget_UpdateGeometries_Callback qtreewidget_updategeometries_callback = nullptr;
    QTreeWidget_ViewportSizeHint_Callback qtreewidget_viewportsizehint_callback = nullptr;
    QTreeWidget_SizeHintForColumn_Callback qtreewidget_sizehintforcolumn_callback = nullptr;
    QTreeWidget_HorizontalScrollbarAction_Callback qtreewidget_horizontalscrollbaraction_callback = nullptr;
    QTreeWidget_IsIndexHidden_Callback qtreewidget_isindexhidden_callback = nullptr;
    QTreeWidget_SelectionChanged_Callback qtreewidget_selectionchanged_callback = nullptr;
    QTreeWidget_CurrentChanged_Callback qtreewidget_currentchanged_callback = nullptr;
    QTreeWidget_SizeHintForRow_Callback qtreewidget_sizehintforrow_callback = nullptr;
    QTreeWidget_ItemDelegateForIndex_Callback qtreewidget_itemdelegateforindex_callback = nullptr;
    QTreeWidget_InputMethodQuery_Callback qtreewidget_inputmethodquery_callback = nullptr;
    QTreeWidget_UpdateEditorData_Callback qtreewidget_updateeditordata_callback = nullptr;
    QTreeWidget_UpdateEditorGeometries_Callback qtreewidget_updateeditorgeometries_callback = nullptr;
    QTreeWidget_VerticalScrollbarAction_Callback qtreewidget_verticalscrollbaraction_callback = nullptr;
    QTreeWidget_HorizontalScrollbarValueChanged_Callback qtreewidget_horizontalscrollbarvaluechanged_callback = nullptr;
    QTreeWidget_CloseEditor_Callback qtreewidget_closeeditor_callback = nullptr;
    QTreeWidget_CommitData_Callback qtreewidget_commitdata_callback = nullptr;
    QTreeWidget_EditorDestroyed_Callback qtreewidget_editordestroyed_callback = nullptr;
    QTreeWidget_Edit2_Callback qtreewidget_edit2_callback = nullptr;
    QTreeWidget_SelectionCommand_Callback qtreewidget_selectioncommand_callback = nullptr;
    QTreeWidget_StartDrag_Callback qtreewidget_startdrag_callback = nullptr;
    QTreeWidget_InitViewItemOption_Callback qtreewidget_initviewitemoption_callback = nullptr;
    QTreeWidget_FocusNextPrevChild_Callback qtreewidget_focusnextprevchild_callback = nullptr;
    QTreeWidget_DragEnterEvent_Callback qtreewidget_dragenterevent_callback = nullptr;
    QTreeWidget_DragLeaveEvent_Callback qtreewidget_dragleaveevent_callback = nullptr;
    QTreeWidget_FocusInEvent_Callback qtreewidget_focusinevent_callback = nullptr;
    QTreeWidget_FocusOutEvent_Callback qtreewidget_focusoutevent_callback = nullptr;
    QTreeWidget_ResizeEvent_Callback qtreewidget_resizeevent_callback = nullptr;
    QTreeWidget_InputMethodEvent_Callback qtreewidget_inputmethodevent_callback = nullptr;
    QTreeWidget_EventFilter_Callback qtreewidget_eventfilter_callback = nullptr;
    QTreeWidget_MinimumSizeHint_Callback qtreewidget_minimumsizehint_callback = nullptr;
    QTreeWidget_SizeHint_Callback qtreewidget_sizehint_callback = nullptr;
    QTreeWidget_SetupViewport_Callback qtreewidget_setupviewport_callback = nullptr;
    QTreeWidget_WheelEvent_Callback qtreewidget_wheelevent_callback = nullptr;
    QTreeWidget_ContextMenuEvent_Callback qtreewidget_contextmenuevent_callback = nullptr;
    QTreeWidget_InitStyleOption_Callback qtreewidget_initstyleoption_callback = nullptr;
    QTreeWidget_DevType_Callback qtreewidget_devtype_callback = nullptr;
    QTreeWidget_SetVisible_Callback qtreewidget_setvisible_callback = nullptr;
    QTreeWidget_HeightForWidth_Callback qtreewidget_heightforwidth_callback = nullptr;
    QTreeWidget_HasHeightForWidth_Callback qtreewidget_hasheightforwidth_callback = nullptr;
    QTreeWidget_PaintEngine_Callback qtreewidget_paintengine_callback = nullptr;
    QTreeWidget_KeyReleaseEvent_Callback qtreewidget_keyreleaseevent_callback = nullptr;
    QTreeWidget_EnterEvent_Callback qtreewidget_enterevent_callback = nullptr;
    QTreeWidget_LeaveEvent_Callback qtreewidget_leaveevent_callback = nullptr;
    QTreeWidget_MoveEvent_Callback qtreewidget_moveevent_callback = nullptr;
    QTreeWidget_CloseEvent_Callback qtreewidget_closeevent_callback = nullptr;
    QTreeWidget_TabletEvent_Callback qtreewidget_tabletevent_callback = nullptr;
    QTreeWidget_ActionEvent_Callback qtreewidget_actionevent_callback = nullptr;
    QTreeWidget_ShowEvent_Callback qtreewidget_showevent_callback = nullptr;
    QTreeWidget_HideEvent_Callback qtreewidget_hideevent_callback = nullptr;
    QTreeWidget_NativeEvent_Callback qtreewidget_nativeevent_callback = nullptr;
    QTreeWidget_Metric_Callback qtreewidget_metric_callback = nullptr;
    QTreeWidget_InitPainter_Callback qtreewidget_initpainter_callback = nullptr;
    QTreeWidget_Redirected_Callback qtreewidget_redirected_callback = nullptr;
    QTreeWidget_SharedPainter_Callback qtreewidget_sharedpainter_callback = nullptr;
    QTreeWidget_ChildEvent_Callback qtreewidget_childevent_callback = nullptr;
    QTreeWidget_CustomEvent_Callback qtreewidget_customevent_callback = nullptr;
    QTreeWidget_ConnectNotify_Callback qtreewidget_connectnotify_callback = nullptr;
    QTreeWidget_DisconnectNotify_Callback qtreewidget_disconnectnotify_callback = nullptr;
    QTreeWidget_ColumnResized_Callback qtreewidget_columnresized_callback = nullptr;
    QTreeWidget_ColumnCountChanged_Callback qtreewidget_columncountchanged_callback = nullptr;
    QTreeWidget_ColumnMoved_Callback qtreewidget_columnmoved_callback = nullptr;
    QTreeWidget_Reexpand_Callback qtreewidget_reexpand_callback = nullptr;
    QTreeWidget_RowsRemoved_Callback qtreewidget_rowsremoved_callback = nullptr;
    QTreeWidget_DrawTree_Callback qtreewidget_drawtree_callback = nullptr;
    QTreeWidget_IndexRowSizeHint_Callback qtreewidget_indexrowsizehint_callback = nullptr;
    QTreeWidget_RowHeight_Callback qtreewidget_rowheight_callback = nullptr;
    QTreeWidget_State_Callback qtreewidget_state_callback = nullptr;
    QTreeWidget_SetState_Callback qtreewidget_setstate_callback = nullptr;
    QTreeWidget_ScheduleDelayedItemsLayout_Callback qtreewidget_scheduledelayeditemslayout_callback = nullptr;
    QTreeWidget_ExecuteDelayedItemsLayout_Callback qtreewidget_executedelayeditemslayout_callback = nullptr;
    QTreeWidget_SetDirtyRegion_Callback qtreewidget_setdirtyregion_callback = nullptr;
    QTreeWidget_ScrollDirtyRegion_Callback qtreewidget_scrolldirtyregion_callback = nullptr;
    QTreeWidget_DirtyRegionOffset_Callback qtreewidget_dirtyregionoffset_callback = nullptr;
    QTreeWidget_StartAutoScroll_Callback qtreewidget_startautoscroll_callback = nullptr;
    QTreeWidget_StopAutoScroll_Callback qtreewidget_stopautoscroll_callback = nullptr;
    QTreeWidget_DoAutoScroll_Callback qtreewidget_doautoscroll_callback = nullptr;
    QTreeWidget_DropIndicatorPosition_Callback qtreewidget_dropindicatorposition_callback = nullptr;
    QTreeWidget_SetViewportMargins_Callback qtreewidget_setviewportmargins_callback = nullptr;
    QTreeWidget_ViewportMargins_Callback qtreewidget_viewportmargins_callback = nullptr;
    QTreeWidget_DrawFrame_Callback qtreewidget_drawframe_callback = nullptr;
    QTreeWidget_UpdateMicroFocus_Callback qtreewidget_updatemicrofocus_callback = nullptr;
    QTreeWidget_Create_Callback qtreewidget_create_callback = nullptr;
    QTreeWidget_Destroy_Callback qtreewidget_destroy_callback = nullptr;
    QTreeWidget_FocusNextChild_Callback qtreewidget_focusnextchild_callback = nullptr;
    QTreeWidget_FocusPreviousChild_Callback qtreewidget_focuspreviouschild_callback = nullptr;
    QTreeWidget_Sender_Callback qtreewidget_sender_callback = nullptr;
    QTreeWidget_SenderSignalIndex_Callback qtreewidget_sendersignalindex_callback = nullptr;
    QTreeWidget_Receivers_Callback qtreewidget_receivers_callback = nullptr;
    QTreeWidget_IsSignalConnected_Callback qtreewidget_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtreewidget_metacall_isbase = false;
    mutable bool qtreewidget_setselectionmodel_isbase = false;
    mutable bool qtreewidget_event_isbase = false;
    mutable bool qtreewidget_mimetypes_isbase = false;
    mutable bool qtreewidget_mimedata_isbase = false;
    mutable bool qtreewidget_dropmimedata_isbase = false;
    mutable bool qtreewidget_supporteddropactions_isbase = false;
    mutable bool qtreewidget_dropevent_isbase = false;
    mutable bool qtreewidget_setrootindex_isbase = false;
    mutable bool qtreewidget_keyboardsearch_isbase = false;
    mutable bool qtreewidget_visualrect_isbase = false;
    mutable bool qtreewidget_scrollto_isbase = false;
    mutable bool qtreewidget_indexat_isbase = false;
    mutable bool qtreewidget_doitemslayout_isbase = false;
    mutable bool qtreewidget_reset_isbase = false;
    mutable bool qtreewidget_datachanged_isbase = false;
    mutable bool qtreewidget_selectall_isbase = false;
    mutable bool qtreewidget_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qtreewidget_scrollcontentsby_isbase = false;
    mutable bool qtreewidget_rowsinserted_isbase = false;
    mutable bool qtreewidget_rowsabouttoberemoved_isbase = false;
    mutable bool qtreewidget_movecursor_isbase = false;
    mutable bool qtreewidget_horizontaloffset_isbase = false;
    mutable bool qtreewidget_verticaloffset_isbase = false;
    mutable bool qtreewidget_setselection_isbase = false;
    mutable bool qtreewidget_visualregionforselection_isbase = false;
    mutable bool qtreewidget_selectedindexes_isbase = false;
    mutable bool qtreewidget_changeevent_isbase = false;
    mutable bool qtreewidget_timerevent_isbase = false;
    mutable bool qtreewidget_paintevent_isbase = false;
    mutable bool qtreewidget_drawrow_isbase = false;
    mutable bool qtreewidget_drawbranches_isbase = false;
    mutable bool qtreewidget_mousepressevent_isbase = false;
    mutable bool qtreewidget_mousereleaseevent_isbase = false;
    mutable bool qtreewidget_mousedoubleclickevent_isbase = false;
    mutable bool qtreewidget_mousemoveevent_isbase = false;
    mutable bool qtreewidget_keypressevent_isbase = false;
    mutable bool qtreewidget_dragmoveevent_isbase = false;
    mutable bool qtreewidget_viewportevent_isbase = false;
    mutable bool qtreewidget_updategeometries_isbase = false;
    mutable bool qtreewidget_viewportsizehint_isbase = false;
    mutable bool qtreewidget_sizehintforcolumn_isbase = false;
    mutable bool qtreewidget_horizontalscrollbaraction_isbase = false;
    mutable bool qtreewidget_isindexhidden_isbase = false;
    mutable bool qtreewidget_selectionchanged_isbase = false;
    mutable bool qtreewidget_currentchanged_isbase = false;
    mutable bool qtreewidget_sizehintforrow_isbase = false;
    mutable bool qtreewidget_itemdelegateforindex_isbase = false;
    mutable bool qtreewidget_inputmethodquery_isbase = false;
    mutable bool qtreewidget_updateeditordata_isbase = false;
    mutable bool qtreewidget_updateeditorgeometries_isbase = false;
    mutable bool qtreewidget_verticalscrollbaraction_isbase = false;
    mutable bool qtreewidget_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qtreewidget_closeeditor_isbase = false;
    mutable bool qtreewidget_commitdata_isbase = false;
    mutable bool qtreewidget_editordestroyed_isbase = false;
    mutable bool qtreewidget_edit2_isbase = false;
    mutable bool qtreewidget_selectioncommand_isbase = false;
    mutable bool qtreewidget_startdrag_isbase = false;
    mutable bool qtreewidget_initviewitemoption_isbase = false;
    mutable bool qtreewidget_focusnextprevchild_isbase = false;
    mutable bool qtreewidget_dragenterevent_isbase = false;
    mutable bool qtreewidget_dragleaveevent_isbase = false;
    mutable bool qtreewidget_focusinevent_isbase = false;
    mutable bool qtreewidget_focusoutevent_isbase = false;
    mutable bool qtreewidget_resizeevent_isbase = false;
    mutable bool qtreewidget_inputmethodevent_isbase = false;
    mutable bool qtreewidget_eventfilter_isbase = false;
    mutable bool qtreewidget_minimumsizehint_isbase = false;
    mutable bool qtreewidget_sizehint_isbase = false;
    mutable bool qtreewidget_setupviewport_isbase = false;
    mutable bool qtreewidget_wheelevent_isbase = false;
    mutable bool qtreewidget_contextmenuevent_isbase = false;
    mutable bool qtreewidget_initstyleoption_isbase = false;
    mutable bool qtreewidget_devtype_isbase = false;
    mutable bool qtreewidget_setvisible_isbase = false;
    mutable bool qtreewidget_heightforwidth_isbase = false;
    mutable bool qtreewidget_hasheightforwidth_isbase = false;
    mutable bool qtreewidget_paintengine_isbase = false;
    mutable bool qtreewidget_keyreleaseevent_isbase = false;
    mutable bool qtreewidget_enterevent_isbase = false;
    mutable bool qtreewidget_leaveevent_isbase = false;
    mutable bool qtreewidget_moveevent_isbase = false;
    mutable bool qtreewidget_closeevent_isbase = false;
    mutable bool qtreewidget_tabletevent_isbase = false;
    mutable bool qtreewidget_actionevent_isbase = false;
    mutable bool qtreewidget_showevent_isbase = false;
    mutable bool qtreewidget_hideevent_isbase = false;
    mutable bool qtreewidget_nativeevent_isbase = false;
    mutable bool qtreewidget_metric_isbase = false;
    mutable bool qtreewidget_initpainter_isbase = false;
    mutable bool qtreewidget_redirected_isbase = false;
    mutable bool qtreewidget_sharedpainter_isbase = false;
    mutable bool qtreewidget_childevent_isbase = false;
    mutable bool qtreewidget_customevent_isbase = false;
    mutable bool qtreewidget_connectnotify_isbase = false;
    mutable bool qtreewidget_disconnectnotify_isbase = false;
    mutable bool qtreewidget_columnresized_isbase = false;
    mutable bool qtreewidget_columncountchanged_isbase = false;
    mutable bool qtreewidget_columnmoved_isbase = false;
    mutable bool qtreewidget_reexpand_isbase = false;
    mutable bool qtreewidget_rowsremoved_isbase = false;
    mutable bool qtreewidget_drawtree_isbase = false;
    mutable bool qtreewidget_indexrowsizehint_isbase = false;
    mutable bool qtreewidget_rowheight_isbase = false;
    mutable bool qtreewidget_state_isbase = false;
    mutable bool qtreewidget_setstate_isbase = false;
    mutable bool qtreewidget_scheduledelayeditemslayout_isbase = false;
    mutable bool qtreewidget_executedelayeditemslayout_isbase = false;
    mutable bool qtreewidget_setdirtyregion_isbase = false;
    mutable bool qtreewidget_scrolldirtyregion_isbase = false;
    mutable bool qtreewidget_dirtyregionoffset_isbase = false;
    mutable bool qtreewidget_startautoscroll_isbase = false;
    mutable bool qtreewidget_stopautoscroll_isbase = false;
    mutable bool qtreewidget_doautoscroll_isbase = false;
    mutable bool qtreewidget_dropindicatorposition_isbase = false;
    mutable bool qtreewidget_setviewportmargins_isbase = false;
    mutable bool qtreewidget_viewportmargins_isbase = false;
    mutable bool qtreewidget_drawframe_isbase = false;
    mutable bool qtreewidget_updatemicrofocus_isbase = false;
    mutable bool qtreewidget_create_isbase = false;
    mutable bool qtreewidget_destroy_isbase = false;
    mutable bool qtreewidget_focusnextchild_isbase = false;
    mutable bool qtreewidget_focuspreviouschild_isbase = false;
    mutable bool qtreewidget_sender_isbase = false;
    mutable bool qtreewidget_sendersignalindex_isbase = false;
    mutable bool qtreewidget_receivers_isbase = false;
    mutable bool qtreewidget_issignalconnected_isbase = false;

  public:
    VirtualQTreeWidget(QWidget* parent) : QTreeWidget(parent){};
    VirtualQTreeWidget() : QTreeWidget(){};

    ~VirtualQTreeWidget() {
        qtreewidget_metacall_callback = nullptr;
        qtreewidget_setselectionmodel_callback = nullptr;
        qtreewidget_event_callback = nullptr;
        qtreewidget_mimetypes_callback = nullptr;
        qtreewidget_mimedata_callback = nullptr;
        qtreewidget_dropmimedata_callback = nullptr;
        qtreewidget_supporteddropactions_callback = nullptr;
        qtreewidget_dropevent_callback = nullptr;
        qtreewidget_setrootindex_callback = nullptr;
        qtreewidget_keyboardsearch_callback = nullptr;
        qtreewidget_visualrect_callback = nullptr;
        qtreewidget_scrollto_callback = nullptr;
        qtreewidget_indexat_callback = nullptr;
        qtreewidget_doitemslayout_callback = nullptr;
        qtreewidget_reset_callback = nullptr;
        qtreewidget_datachanged_callback = nullptr;
        qtreewidget_selectall_callback = nullptr;
        qtreewidget_verticalscrollbarvaluechanged_callback = nullptr;
        qtreewidget_scrollcontentsby_callback = nullptr;
        qtreewidget_rowsinserted_callback = nullptr;
        qtreewidget_rowsabouttoberemoved_callback = nullptr;
        qtreewidget_movecursor_callback = nullptr;
        qtreewidget_horizontaloffset_callback = nullptr;
        qtreewidget_verticaloffset_callback = nullptr;
        qtreewidget_setselection_callback = nullptr;
        qtreewidget_visualregionforselection_callback = nullptr;
        qtreewidget_selectedindexes_callback = nullptr;
        qtreewidget_changeevent_callback = nullptr;
        qtreewidget_timerevent_callback = nullptr;
        qtreewidget_paintevent_callback = nullptr;
        qtreewidget_drawrow_callback = nullptr;
        qtreewidget_drawbranches_callback = nullptr;
        qtreewidget_mousepressevent_callback = nullptr;
        qtreewidget_mousereleaseevent_callback = nullptr;
        qtreewidget_mousedoubleclickevent_callback = nullptr;
        qtreewidget_mousemoveevent_callback = nullptr;
        qtreewidget_keypressevent_callback = nullptr;
        qtreewidget_dragmoveevent_callback = nullptr;
        qtreewidget_viewportevent_callback = nullptr;
        qtreewidget_updategeometries_callback = nullptr;
        qtreewidget_viewportsizehint_callback = nullptr;
        qtreewidget_sizehintforcolumn_callback = nullptr;
        qtreewidget_horizontalscrollbaraction_callback = nullptr;
        qtreewidget_isindexhidden_callback = nullptr;
        qtreewidget_selectionchanged_callback = nullptr;
        qtreewidget_currentchanged_callback = nullptr;
        qtreewidget_sizehintforrow_callback = nullptr;
        qtreewidget_itemdelegateforindex_callback = nullptr;
        qtreewidget_inputmethodquery_callback = nullptr;
        qtreewidget_updateeditordata_callback = nullptr;
        qtreewidget_updateeditorgeometries_callback = nullptr;
        qtreewidget_verticalscrollbaraction_callback = nullptr;
        qtreewidget_horizontalscrollbarvaluechanged_callback = nullptr;
        qtreewidget_closeeditor_callback = nullptr;
        qtreewidget_commitdata_callback = nullptr;
        qtreewidget_editordestroyed_callback = nullptr;
        qtreewidget_edit2_callback = nullptr;
        qtreewidget_selectioncommand_callback = nullptr;
        qtreewidget_startdrag_callback = nullptr;
        qtreewidget_initviewitemoption_callback = nullptr;
        qtreewidget_focusnextprevchild_callback = nullptr;
        qtreewidget_dragenterevent_callback = nullptr;
        qtreewidget_dragleaveevent_callback = nullptr;
        qtreewidget_focusinevent_callback = nullptr;
        qtreewidget_focusoutevent_callback = nullptr;
        qtreewidget_resizeevent_callback = nullptr;
        qtreewidget_inputmethodevent_callback = nullptr;
        qtreewidget_eventfilter_callback = nullptr;
        qtreewidget_minimumsizehint_callback = nullptr;
        qtreewidget_sizehint_callback = nullptr;
        qtreewidget_setupviewport_callback = nullptr;
        qtreewidget_wheelevent_callback = nullptr;
        qtreewidget_contextmenuevent_callback = nullptr;
        qtreewidget_initstyleoption_callback = nullptr;
        qtreewidget_devtype_callback = nullptr;
        qtreewidget_setvisible_callback = nullptr;
        qtreewidget_heightforwidth_callback = nullptr;
        qtreewidget_hasheightforwidth_callback = nullptr;
        qtreewidget_paintengine_callback = nullptr;
        qtreewidget_keyreleaseevent_callback = nullptr;
        qtreewidget_enterevent_callback = nullptr;
        qtreewidget_leaveevent_callback = nullptr;
        qtreewidget_moveevent_callback = nullptr;
        qtreewidget_closeevent_callback = nullptr;
        qtreewidget_tabletevent_callback = nullptr;
        qtreewidget_actionevent_callback = nullptr;
        qtreewidget_showevent_callback = nullptr;
        qtreewidget_hideevent_callback = nullptr;
        qtreewidget_nativeevent_callback = nullptr;
        qtreewidget_metric_callback = nullptr;
        qtreewidget_initpainter_callback = nullptr;
        qtreewidget_redirected_callback = nullptr;
        qtreewidget_sharedpainter_callback = nullptr;
        qtreewidget_childevent_callback = nullptr;
        qtreewidget_customevent_callback = nullptr;
        qtreewidget_connectnotify_callback = nullptr;
        qtreewidget_disconnectnotify_callback = nullptr;
        qtreewidget_columnresized_callback = nullptr;
        qtreewidget_columncountchanged_callback = nullptr;
        qtreewidget_columnmoved_callback = nullptr;
        qtreewidget_reexpand_callback = nullptr;
        qtreewidget_rowsremoved_callback = nullptr;
        qtreewidget_drawtree_callback = nullptr;
        qtreewidget_indexrowsizehint_callback = nullptr;
        qtreewidget_rowheight_callback = nullptr;
        qtreewidget_state_callback = nullptr;
        qtreewidget_setstate_callback = nullptr;
        qtreewidget_scheduledelayeditemslayout_callback = nullptr;
        qtreewidget_executedelayeditemslayout_callback = nullptr;
        qtreewidget_setdirtyregion_callback = nullptr;
        qtreewidget_scrolldirtyregion_callback = nullptr;
        qtreewidget_dirtyregionoffset_callback = nullptr;
        qtreewidget_startautoscroll_callback = nullptr;
        qtreewidget_stopautoscroll_callback = nullptr;
        qtreewidget_doautoscroll_callback = nullptr;
        qtreewidget_dropindicatorposition_callback = nullptr;
        qtreewidget_setviewportmargins_callback = nullptr;
        qtreewidget_viewportmargins_callback = nullptr;
        qtreewidget_drawframe_callback = nullptr;
        qtreewidget_updatemicrofocus_callback = nullptr;
        qtreewidget_create_callback = nullptr;
        qtreewidget_destroy_callback = nullptr;
        qtreewidget_focusnextchild_callback = nullptr;
        qtreewidget_focuspreviouschild_callback = nullptr;
        qtreewidget_sender_callback = nullptr;
        qtreewidget_sendersignalindex_callback = nullptr;
        qtreewidget_receivers_callback = nullptr;
        qtreewidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTreeWidget_Metacall_Callback(QTreeWidget_Metacall_Callback cb) { qtreewidget_metacall_callback = cb; }
    void setQTreeWidget_SetSelectionModel_Callback(QTreeWidget_SetSelectionModel_Callback cb) { qtreewidget_setselectionmodel_callback = cb; }
    void setQTreeWidget_Event_Callback(QTreeWidget_Event_Callback cb) { qtreewidget_event_callback = cb; }
    void setQTreeWidget_MimeTypes_Callback(QTreeWidget_MimeTypes_Callback cb) { qtreewidget_mimetypes_callback = cb; }
    void setQTreeWidget_MimeData_Callback(QTreeWidget_MimeData_Callback cb) { qtreewidget_mimedata_callback = cb; }
    void setQTreeWidget_DropMimeData_Callback(QTreeWidget_DropMimeData_Callback cb) { qtreewidget_dropmimedata_callback = cb; }
    void setQTreeWidget_SupportedDropActions_Callback(QTreeWidget_SupportedDropActions_Callback cb) { qtreewidget_supporteddropactions_callback = cb; }
    void setQTreeWidget_DropEvent_Callback(QTreeWidget_DropEvent_Callback cb) { qtreewidget_dropevent_callback = cb; }
    void setQTreeWidget_SetRootIndex_Callback(QTreeWidget_SetRootIndex_Callback cb) { qtreewidget_setrootindex_callback = cb; }
    void setQTreeWidget_KeyboardSearch_Callback(QTreeWidget_KeyboardSearch_Callback cb) { qtreewidget_keyboardsearch_callback = cb; }
    void setQTreeWidget_VisualRect_Callback(QTreeWidget_VisualRect_Callback cb) { qtreewidget_visualrect_callback = cb; }
    void setQTreeWidget_ScrollTo_Callback(QTreeWidget_ScrollTo_Callback cb) { qtreewidget_scrollto_callback = cb; }
    void setQTreeWidget_IndexAt_Callback(QTreeWidget_IndexAt_Callback cb) { qtreewidget_indexat_callback = cb; }
    void setQTreeWidget_DoItemsLayout_Callback(QTreeWidget_DoItemsLayout_Callback cb) { qtreewidget_doitemslayout_callback = cb; }
    void setQTreeWidget_Reset_Callback(QTreeWidget_Reset_Callback cb) { qtreewidget_reset_callback = cb; }
    void setQTreeWidget_DataChanged_Callback(QTreeWidget_DataChanged_Callback cb) { qtreewidget_datachanged_callback = cb; }
    void setQTreeWidget_SelectAll_Callback(QTreeWidget_SelectAll_Callback cb) { qtreewidget_selectall_callback = cb; }
    void setQTreeWidget_VerticalScrollbarValueChanged_Callback(QTreeWidget_VerticalScrollbarValueChanged_Callback cb) { qtreewidget_verticalscrollbarvaluechanged_callback = cb; }
    void setQTreeWidget_ScrollContentsBy_Callback(QTreeWidget_ScrollContentsBy_Callback cb) { qtreewidget_scrollcontentsby_callback = cb; }
    void setQTreeWidget_RowsInserted_Callback(QTreeWidget_RowsInserted_Callback cb) { qtreewidget_rowsinserted_callback = cb; }
    void setQTreeWidget_RowsAboutToBeRemoved_Callback(QTreeWidget_RowsAboutToBeRemoved_Callback cb) { qtreewidget_rowsabouttoberemoved_callback = cb; }
    void setQTreeWidget_MoveCursor_Callback(QTreeWidget_MoveCursor_Callback cb) { qtreewidget_movecursor_callback = cb; }
    void setQTreeWidget_HorizontalOffset_Callback(QTreeWidget_HorizontalOffset_Callback cb) { qtreewidget_horizontaloffset_callback = cb; }
    void setQTreeWidget_VerticalOffset_Callback(QTreeWidget_VerticalOffset_Callback cb) { qtreewidget_verticaloffset_callback = cb; }
    void setQTreeWidget_SetSelection_Callback(QTreeWidget_SetSelection_Callback cb) { qtreewidget_setselection_callback = cb; }
    void setQTreeWidget_VisualRegionForSelection_Callback(QTreeWidget_VisualRegionForSelection_Callback cb) { qtreewidget_visualregionforselection_callback = cb; }
    void setQTreeWidget_SelectedIndexes_Callback(QTreeWidget_SelectedIndexes_Callback cb) { qtreewidget_selectedindexes_callback = cb; }
    void setQTreeWidget_ChangeEvent_Callback(QTreeWidget_ChangeEvent_Callback cb) { qtreewidget_changeevent_callback = cb; }
    void setQTreeWidget_TimerEvent_Callback(QTreeWidget_TimerEvent_Callback cb) { qtreewidget_timerevent_callback = cb; }
    void setQTreeWidget_PaintEvent_Callback(QTreeWidget_PaintEvent_Callback cb) { qtreewidget_paintevent_callback = cb; }
    void setQTreeWidget_DrawRow_Callback(QTreeWidget_DrawRow_Callback cb) { qtreewidget_drawrow_callback = cb; }
    void setQTreeWidget_DrawBranches_Callback(QTreeWidget_DrawBranches_Callback cb) { qtreewidget_drawbranches_callback = cb; }
    void setQTreeWidget_MousePressEvent_Callback(QTreeWidget_MousePressEvent_Callback cb) { qtreewidget_mousepressevent_callback = cb; }
    void setQTreeWidget_MouseReleaseEvent_Callback(QTreeWidget_MouseReleaseEvent_Callback cb) { qtreewidget_mousereleaseevent_callback = cb; }
    void setQTreeWidget_MouseDoubleClickEvent_Callback(QTreeWidget_MouseDoubleClickEvent_Callback cb) { qtreewidget_mousedoubleclickevent_callback = cb; }
    void setQTreeWidget_MouseMoveEvent_Callback(QTreeWidget_MouseMoveEvent_Callback cb) { qtreewidget_mousemoveevent_callback = cb; }
    void setQTreeWidget_KeyPressEvent_Callback(QTreeWidget_KeyPressEvent_Callback cb) { qtreewidget_keypressevent_callback = cb; }
    void setQTreeWidget_DragMoveEvent_Callback(QTreeWidget_DragMoveEvent_Callback cb) { qtreewidget_dragmoveevent_callback = cb; }
    void setQTreeWidget_ViewportEvent_Callback(QTreeWidget_ViewportEvent_Callback cb) { qtreewidget_viewportevent_callback = cb; }
    void setQTreeWidget_UpdateGeometries_Callback(QTreeWidget_UpdateGeometries_Callback cb) { qtreewidget_updategeometries_callback = cb; }
    void setQTreeWidget_ViewportSizeHint_Callback(QTreeWidget_ViewportSizeHint_Callback cb) { qtreewidget_viewportsizehint_callback = cb; }
    void setQTreeWidget_SizeHintForColumn_Callback(QTreeWidget_SizeHintForColumn_Callback cb) { qtreewidget_sizehintforcolumn_callback = cb; }
    void setQTreeWidget_HorizontalScrollbarAction_Callback(QTreeWidget_HorizontalScrollbarAction_Callback cb) { qtreewidget_horizontalscrollbaraction_callback = cb; }
    void setQTreeWidget_IsIndexHidden_Callback(QTreeWidget_IsIndexHidden_Callback cb) { qtreewidget_isindexhidden_callback = cb; }
    void setQTreeWidget_SelectionChanged_Callback(QTreeWidget_SelectionChanged_Callback cb) { qtreewidget_selectionchanged_callback = cb; }
    void setQTreeWidget_CurrentChanged_Callback(QTreeWidget_CurrentChanged_Callback cb) { qtreewidget_currentchanged_callback = cb; }
    void setQTreeWidget_SizeHintForRow_Callback(QTreeWidget_SizeHintForRow_Callback cb) { qtreewidget_sizehintforrow_callback = cb; }
    void setQTreeWidget_ItemDelegateForIndex_Callback(QTreeWidget_ItemDelegateForIndex_Callback cb) { qtreewidget_itemdelegateforindex_callback = cb; }
    void setQTreeWidget_InputMethodQuery_Callback(QTreeWidget_InputMethodQuery_Callback cb) { qtreewidget_inputmethodquery_callback = cb; }
    void setQTreeWidget_UpdateEditorData_Callback(QTreeWidget_UpdateEditorData_Callback cb) { qtreewidget_updateeditordata_callback = cb; }
    void setQTreeWidget_UpdateEditorGeometries_Callback(QTreeWidget_UpdateEditorGeometries_Callback cb) { qtreewidget_updateeditorgeometries_callback = cb; }
    void setQTreeWidget_VerticalScrollbarAction_Callback(QTreeWidget_VerticalScrollbarAction_Callback cb) { qtreewidget_verticalscrollbaraction_callback = cb; }
    void setQTreeWidget_HorizontalScrollbarValueChanged_Callback(QTreeWidget_HorizontalScrollbarValueChanged_Callback cb) { qtreewidget_horizontalscrollbarvaluechanged_callback = cb; }
    void setQTreeWidget_CloseEditor_Callback(QTreeWidget_CloseEditor_Callback cb) { qtreewidget_closeeditor_callback = cb; }
    void setQTreeWidget_CommitData_Callback(QTreeWidget_CommitData_Callback cb) { qtreewidget_commitdata_callback = cb; }
    void setQTreeWidget_EditorDestroyed_Callback(QTreeWidget_EditorDestroyed_Callback cb) { qtreewidget_editordestroyed_callback = cb; }
    void setQTreeWidget_Edit2_Callback(QTreeWidget_Edit2_Callback cb) { qtreewidget_edit2_callback = cb; }
    void setQTreeWidget_SelectionCommand_Callback(QTreeWidget_SelectionCommand_Callback cb) { qtreewidget_selectioncommand_callback = cb; }
    void setQTreeWidget_StartDrag_Callback(QTreeWidget_StartDrag_Callback cb) { qtreewidget_startdrag_callback = cb; }
    void setQTreeWidget_InitViewItemOption_Callback(QTreeWidget_InitViewItemOption_Callback cb) { qtreewidget_initviewitemoption_callback = cb; }
    void setQTreeWidget_FocusNextPrevChild_Callback(QTreeWidget_FocusNextPrevChild_Callback cb) { qtreewidget_focusnextprevchild_callback = cb; }
    void setQTreeWidget_DragEnterEvent_Callback(QTreeWidget_DragEnterEvent_Callback cb) { qtreewidget_dragenterevent_callback = cb; }
    void setQTreeWidget_DragLeaveEvent_Callback(QTreeWidget_DragLeaveEvent_Callback cb) { qtreewidget_dragleaveevent_callback = cb; }
    void setQTreeWidget_FocusInEvent_Callback(QTreeWidget_FocusInEvent_Callback cb) { qtreewidget_focusinevent_callback = cb; }
    void setQTreeWidget_FocusOutEvent_Callback(QTreeWidget_FocusOutEvent_Callback cb) { qtreewidget_focusoutevent_callback = cb; }
    void setQTreeWidget_ResizeEvent_Callback(QTreeWidget_ResizeEvent_Callback cb) { qtreewidget_resizeevent_callback = cb; }
    void setQTreeWidget_InputMethodEvent_Callback(QTreeWidget_InputMethodEvent_Callback cb) { qtreewidget_inputmethodevent_callback = cb; }
    void setQTreeWidget_EventFilter_Callback(QTreeWidget_EventFilter_Callback cb) { qtreewidget_eventfilter_callback = cb; }
    void setQTreeWidget_MinimumSizeHint_Callback(QTreeWidget_MinimumSizeHint_Callback cb) { qtreewidget_minimumsizehint_callback = cb; }
    void setQTreeWidget_SizeHint_Callback(QTreeWidget_SizeHint_Callback cb) { qtreewidget_sizehint_callback = cb; }
    void setQTreeWidget_SetupViewport_Callback(QTreeWidget_SetupViewport_Callback cb) { qtreewidget_setupviewport_callback = cb; }
    void setQTreeWidget_WheelEvent_Callback(QTreeWidget_WheelEvent_Callback cb) { qtreewidget_wheelevent_callback = cb; }
    void setQTreeWidget_ContextMenuEvent_Callback(QTreeWidget_ContextMenuEvent_Callback cb) { qtreewidget_contextmenuevent_callback = cb; }
    void setQTreeWidget_InitStyleOption_Callback(QTreeWidget_InitStyleOption_Callback cb) { qtreewidget_initstyleoption_callback = cb; }
    void setQTreeWidget_DevType_Callback(QTreeWidget_DevType_Callback cb) { qtreewidget_devtype_callback = cb; }
    void setQTreeWidget_SetVisible_Callback(QTreeWidget_SetVisible_Callback cb) { qtreewidget_setvisible_callback = cb; }
    void setQTreeWidget_HeightForWidth_Callback(QTreeWidget_HeightForWidth_Callback cb) { qtreewidget_heightforwidth_callback = cb; }
    void setQTreeWidget_HasHeightForWidth_Callback(QTreeWidget_HasHeightForWidth_Callback cb) { qtreewidget_hasheightforwidth_callback = cb; }
    void setQTreeWidget_PaintEngine_Callback(QTreeWidget_PaintEngine_Callback cb) { qtreewidget_paintengine_callback = cb; }
    void setQTreeWidget_KeyReleaseEvent_Callback(QTreeWidget_KeyReleaseEvent_Callback cb) { qtreewidget_keyreleaseevent_callback = cb; }
    void setQTreeWidget_EnterEvent_Callback(QTreeWidget_EnterEvent_Callback cb) { qtreewidget_enterevent_callback = cb; }
    void setQTreeWidget_LeaveEvent_Callback(QTreeWidget_LeaveEvent_Callback cb) { qtreewidget_leaveevent_callback = cb; }
    void setQTreeWidget_MoveEvent_Callback(QTreeWidget_MoveEvent_Callback cb) { qtreewidget_moveevent_callback = cb; }
    void setQTreeWidget_CloseEvent_Callback(QTreeWidget_CloseEvent_Callback cb) { qtreewidget_closeevent_callback = cb; }
    void setQTreeWidget_TabletEvent_Callback(QTreeWidget_TabletEvent_Callback cb) { qtreewidget_tabletevent_callback = cb; }
    void setQTreeWidget_ActionEvent_Callback(QTreeWidget_ActionEvent_Callback cb) { qtreewidget_actionevent_callback = cb; }
    void setQTreeWidget_ShowEvent_Callback(QTreeWidget_ShowEvent_Callback cb) { qtreewidget_showevent_callback = cb; }
    void setQTreeWidget_HideEvent_Callback(QTreeWidget_HideEvent_Callback cb) { qtreewidget_hideevent_callback = cb; }
    void setQTreeWidget_NativeEvent_Callback(QTreeWidget_NativeEvent_Callback cb) { qtreewidget_nativeevent_callback = cb; }
    void setQTreeWidget_Metric_Callback(QTreeWidget_Metric_Callback cb) { qtreewidget_metric_callback = cb; }
    void setQTreeWidget_InitPainter_Callback(QTreeWidget_InitPainter_Callback cb) { qtreewidget_initpainter_callback = cb; }
    void setQTreeWidget_Redirected_Callback(QTreeWidget_Redirected_Callback cb) { qtreewidget_redirected_callback = cb; }
    void setQTreeWidget_SharedPainter_Callback(QTreeWidget_SharedPainter_Callback cb) { qtreewidget_sharedpainter_callback = cb; }
    void setQTreeWidget_ChildEvent_Callback(QTreeWidget_ChildEvent_Callback cb) { qtreewidget_childevent_callback = cb; }
    void setQTreeWidget_CustomEvent_Callback(QTreeWidget_CustomEvent_Callback cb) { qtreewidget_customevent_callback = cb; }
    void setQTreeWidget_ConnectNotify_Callback(QTreeWidget_ConnectNotify_Callback cb) { qtreewidget_connectnotify_callback = cb; }
    void setQTreeWidget_DisconnectNotify_Callback(QTreeWidget_DisconnectNotify_Callback cb) { qtreewidget_disconnectnotify_callback = cb; }
    void setQTreeWidget_ColumnResized_Callback(QTreeWidget_ColumnResized_Callback cb) { qtreewidget_columnresized_callback = cb; }
    void setQTreeWidget_ColumnCountChanged_Callback(QTreeWidget_ColumnCountChanged_Callback cb) { qtreewidget_columncountchanged_callback = cb; }
    void setQTreeWidget_ColumnMoved_Callback(QTreeWidget_ColumnMoved_Callback cb) { qtreewidget_columnmoved_callback = cb; }
    void setQTreeWidget_Reexpand_Callback(QTreeWidget_Reexpand_Callback cb) { qtreewidget_reexpand_callback = cb; }
    void setQTreeWidget_RowsRemoved_Callback(QTreeWidget_RowsRemoved_Callback cb) { qtreewidget_rowsremoved_callback = cb; }
    void setQTreeWidget_DrawTree_Callback(QTreeWidget_DrawTree_Callback cb) { qtreewidget_drawtree_callback = cb; }
    void setQTreeWidget_IndexRowSizeHint_Callback(QTreeWidget_IndexRowSizeHint_Callback cb) { qtreewidget_indexrowsizehint_callback = cb; }
    void setQTreeWidget_RowHeight_Callback(QTreeWidget_RowHeight_Callback cb) { qtreewidget_rowheight_callback = cb; }
    void setQTreeWidget_State_Callback(QTreeWidget_State_Callback cb) { qtreewidget_state_callback = cb; }
    void setQTreeWidget_SetState_Callback(QTreeWidget_SetState_Callback cb) { qtreewidget_setstate_callback = cb; }
    void setQTreeWidget_ScheduleDelayedItemsLayout_Callback(QTreeWidget_ScheduleDelayedItemsLayout_Callback cb) { qtreewidget_scheduledelayeditemslayout_callback = cb; }
    void setQTreeWidget_ExecuteDelayedItemsLayout_Callback(QTreeWidget_ExecuteDelayedItemsLayout_Callback cb) { qtreewidget_executedelayeditemslayout_callback = cb; }
    void setQTreeWidget_SetDirtyRegion_Callback(QTreeWidget_SetDirtyRegion_Callback cb) { qtreewidget_setdirtyregion_callback = cb; }
    void setQTreeWidget_ScrollDirtyRegion_Callback(QTreeWidget_ScrollDirtyRegion_Callback cb) { qtreewidget_scrolldirtyregion_callback = cb; }
    void setQTreeWidget_DirtyRegionOffset_Callback(QTreeWidget_DirtyRegionOffset_Callback cb) { qtreewidget_dirtyregionoffset_callback = cb; }
    void setQTreeWidget_StartAutoScroll_Callback(QTreeWidget_StartAutoScroll_Callback cb) { qtreewidget_startautoscroll_callback = cb; }
    void setQTreeWidget_StopAutoScroll_Callback(QTreeWidget_StopAutoScroll_Callback cb) { qtreewidget_stopautoscroll_callback = cb; }
    void setQTreeWidget_DoAutoScroll_Callback(QTreeWidget_DoAutoScroll_Callback cb) { qtreewidget_doautoscroll_callback = cb; }
    void setQTreeWidget_DropIndicatorPosition_Callback(QTreeWidget_DropIndicatorPosition_Callback cb) { qtreewidget_dropindicatorposition_callback = cb; }
    void setQTreeWidget_SetViewportMargins_Callback(QTreeWidget_SetViewportMargins_Callback cb) { qtreewidget_setviewportmargins_callback = cb; }
    void setQTreeWidget_ViewportMargins_Callback(QTreeWidget_ViewportMargins_Callback cb) { qtreewidget_viewportmargins_callback = cb; }
    void setQTreeWidget_DrawFrame_Callback(QTreeWidget_DrawFrame_Callback cb) { qtreewidget_drawframe_callback = cb; }
    void setQTreeWidget_UpdateMicroFocus_Callback(QTreeWidget_UpdateMicroFocus_Callback cb) { qtreewidget_updatemicrofocus_callback = cb; }
    void setQTreeWidget_Create_Callback(QTreeWidget_Create_Callback cb) { qtreewidget_create_callback = cb; }
    void setQTreeWidget_Destroy_Callback(QTreeWidget_Destroy_Callback cb) { qtreewidget_destroy_callback = cb; }
    void setQTreeWidget_FocusNextChild_Callback(QTreeWidget_FocusNextChild_Callback cb) { qtreewidget_focusnextchild_callback = cb; }
    void setQTreeWidget_FocusPreviousChild_Callback(QTreeWidget_FocusPreviousChild_Callback cb) { qtreewidget_focuspreviouschild_callback = cb; }
    void setQTreeWidget_Sender_Callback(QTreeWidget_Sender_Callback cb) { qtreewidget_sender_callback = cb; }
    void setQTreeWidget_SenderSignalIndex_Callback(QTreeWidget_SenderSignalIndex_Callback cb) { qtreewidget_sendersignalindex_callback = cb; }
    void setQTreeWidget_Receivers_Callback(QTreeWidget_Receivers_Callback cb) { qtreewidget_receivers_callback = cb; }
    void setQTreeWidget_IsSignalConnected_Callback(QTreeWidget_IsSignalConnected_Callback cb) { qtreewidget_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTreeWidget_Metacall_IsBase(bool value) const { qtreewidget_metacall_isbase = value; }
    void setQTreeWidget_SetSelectionModel_IsBase(bool value) const { qtreewidget_setselectionmodel_isbase = value; }
    void setQTreeWidget_Event_IsBase(bool value) const { qtreewidget_event_isbase = value; }
    void setQTreeWidget_MimeTypes_IsBase(bool value) const { qtreewidget_mimetypes_isbase = value; }
    void setQTreeWidget_MimeData_IsBase(bool value) const { qtreewidget_mimedata_isbase = value; }
    void setQTreeWidget_DropMimeData_IsBase(bool value) const { qtreewidget_dropmimedata_isbase = value; }
    void setQTreeWidget_SupportedDropActions_IsBase(bool value) const { qtreewidget_supporteddropactions_isbase = value; }
    void setQTreeWidget_DropEvent_IsBase(bool value) const { qtreewidget_dropevent_isbase = value; }
    void setQTreeWidget_SetRootIndex_IsBase(bool value) const { qtreewidget_setrootindex_isbase = value; }
    void setQTreeWidget_KeyboardSearch_IsBase(bool value) const { qtreewidget_keyboardsearch_isbase = value; }
    void setQTreeWidget_VisualRect_IsBase(bool value) const { qtreewidget_visualrect_isbase = value; }
    void setQTreeWidget_ScrollTo_IsBase(bool value) const { qtreewidget_scrollto_isbase = value; }
    void setQTreeWidget_IndexAt_IsBase(bool value) const { qtreewidget_indexat_isbase = value; }
    void setQTreeWidget_DoItemsLayout_IsBase(bool value) const { qtreewidget_doitemslayout_isbase = value; }
    void setQTreeWidget_Reset_IsBase(bool value) const { qtreewidget_reset_isbase = value; }
    void setQTreeWidget_DataChanged_IsBase(bool value) const { qtreewidget_datachanged_isbase = value; }
    void setQTreeWidget_SelectAll_IsBase(bool value) const { qtreewidget_selectall_isbase = value; }
    void setQTreeWidget_VerticalScrollbarValueChanged_IsBase(bool value) const { qtreewidget_verticalscrollbarvaluechanged_isbase = value; }
    void setQTreeWidget_ScrollContentsBy_IsBase(bool value) const { qtreewidget_scrollcontentsby_isbase = value; }
    void setQTreeWidget_RowsInserted_IsBase(bool value) const { qtreewidget_rowsinserted_isbase = value; }
    void setQTreeWidget_RowsAboutToBeRemoved_IsBase(bool value) const { qtreewidget_rowsabouttoberemoved_isbase = value; }
    void setQTreeWidget_MoveCursor_IsBase(bool value) const { qtreewidget_movecursor_isbase = value; }
    void setQTreeWidget_HorizontalOffset_IsBase(bool value) const { qtreewidget_horizontaloffset_isbase = value; }
    void setQTreeWidget_VerticalOffset_IsBase(bool value) const { qtreewidget_verticaloffset_isbase = value; }
    void setQTreeWidget_SetSelection_IsBase(bool value) const { qtreewidget_setselection_isbase = value; }
    void setQTreeWidget_VisualRegionForSelection_IsBase(bool value) const { qtreewidget_visualregionforselection_isbase = value; }
    void setQTreeWidget_SelectedIndexes_IsBase(bool value) const { qtreewidget_selectedindexes_isbase = value; }
    void setQTreeWidget_ChangeEvent_IsBase(bool value) const { qtreewidget_changeevent_isbase = value; }
    void setQTreeWidget_TimerEvent_IsBase(bool value) const { qtreewidget_timerevent_isbase = value; }
    void setQTreeWidget_PaintEvent_IsBase(bool value) const { qtreewidget_paintevent_isbase = value; }
    void setQTreeWidget_DrawRow_IsBase(bool value) const { qtreewidget_drawrow_isbase = value; }
    void setQTreeWidget_DrawBranches_IsBase(bool value) const { qtreewidget_drawbranches_isbase = value; }
    void setQTreeWidget_MousePressEvent_IsBase(bool value) const { qtreewidget_mousepressevent_isbase = value; }
    void setQTreeWidget_MouseReleaseEvent_IsBase(bool value) const { qtreewidget_mousereleaseevent_isbase = value; }
    void setQTreeWidget_MouseDoubleClickEvent_IsBase(bool value) const { qtreewidget_mousedoubleclickevent_isbase = value; }
    void setQTreeWidget_MouseMoveEvent_IsBase(bool value) const { qtreewidget_mousemoveevent_isbase = value; }
    void setQTreeWidget_KeyPressEvent_IsBase(bool value) const { qtreewidget_keypressevent_isbase = value; }
    void setQTreeWidget_DragMoveEvent_IsBase(bool value) const { qtreewidget_dragmoveevent_isbase = value; }
    void setQTreeWidget_ViewportEvent_IsBase(bool value) const { qtreewidget_viewportevent_isbase = value; }
    void setQTreeWidget_UpdateGeometries_IsBase(bool value) const { qtreewidget_updategeometries_isbase = value; }
    void setQTreeWidget_ViewportSizeHint_IsBase(bool value) const { qtreewidget_viewportsizehint_isbase = value; }
    void setQTreeWidget_SizeHintForColumn_IsBase(bool value) const { qtreewidget_sizehintforcolumn_isbase = value; }
    void setQTreeWidget_HorizontalScrollbarAction_IsBase(bool value) const { qtreewidget_horizontalscrollbaraction_isbase = value; }
    void setQTreeWidget_IsIndexHidden_IsBase(bool value) const { qtreewidget_isindexhidden_isbase = value; }
    void setQTreeWidget_SelectionChanged_IsBase(bool value) const { qtreewidget_selectionchanged_isbase = value; }
    void setQTreeWidget_CurrentChanged_IsBase(bool value) const { qtreewidget_currentchanged_isbase = value; }
    void setQTreeWidget_SizeHintForRow_IsBase(bool value) const { qtreewidget_sizehintforrow_isbase = value; }
    void setQTreeWidget_ItemDelegateForIndex_IsBase(bool value) const { qtreewidget_itemdelegateforindex_isbase = value; }
    void setQTreeWidget_InputMethodQuery_IsBase(bool value) const { qtreewidget_inputmethodquery_isbase = value; }
    void setQTreeWidget_UpdateEditorData_IsBase(bool value) const { qtreewidget_updateeditordata_isbase = value; }
    void setQTreeWidget_UpdateEditorGeometries_IsBase(bool value) const { qtreewidget_updateeditorgeometries_isbase = value; }
    void setQTreeWidget_VerticalScrollbarAction_IsBase(bool value) const { qtreewidget_verticalscrollbaraction_isbase = value; }
    void setQTreeWidget_HorizontalScrollbarValueChanged_IsBase(bool value) const { qtreewidget_horizontalscrollbarvaluechanged_isbase = value; }
    void setQTreeWidget_CloseEditor_IsBase(bool value) const { qtreewidget_closeeditor_isbase = value; }
    void setQTreeWidget_CommitData_IsBase(bool value) const { qtreewidget_commitdata_isbase = value; }
    void setQTreeWidget_EditorDestroyed_IsBase(bool value) const { qtreewidget_editordestroyed_isbase = value; }
    void setQTreeWidget_Edit2_IsBase(bool value) const { qtreewidget_edit2_isbase = value; }
    void setQTreeWidget_SelectionCommand_IsBase(bool value) const { qtreewidget_selectioncommand_isbase = value; }
    void setQTreeWidget_StartDrag_IsBase(bool value) const { qtreewidget_startdrag_isbase = value; }
    void setQTreeWidget_InitViewItemOption_IsBase(bool value) const { qtreewidget_initviewitemoption_isbase = value; }
    void setQTreeWidget_FocusNextPrevChild_IsBase(bool value) const { qtreewidget_focusnextprevchild_isbase = value; }
    void setQTreeWidget_DragEnterEvent_IsBase(bool value) const { qtreewidget_dragenterevent_isbase = value; }
    void setQTreeWidget_DragLeaveEvent_IsBase(bool value) const { qtreewidget_dragleaveevent_isbase = value; }
    void setQTreeWidget_FocusInEvent_IsBase(bool value) const { qtreewidget_focusinevent_isbase = value; }
    void setQTreeWidget_FocusOutEvent_IsBase(bool value) const { qtreewidget_focusoutevent_isbase = value; }
    void setQTreeWidget_ResizeEvent_IsBase(bool value) const { qtreewidget_resizeevent_isbase = value; }
    void setQTreeWidget_InputMethodEvent_IsBase(bool value) const { qtreewidget_inputmethodevent_isbase = value; }
    void setQTreeWidget_EventFilter_IsBase(bool value) const { qtreewidget_eventfilter_isbase = value; }
    void setQTreeWidget_MinimumSizeHint_IsBase(bool value) const { qtreewidget_minimumsizehint_isbase = value; }
    void setQTreeWidget_SizeHint_IsBase(bool value) const { qtreewidget_sizehint_isbase = value; }
    void setQTreeWidget_SetupViewport_IsBase(bool value) const { qtreewidget_setupviewport_isbase = value; }
    void setQTreeWidget_WheelEvent_IsBase(bool value) const { qtreewidget_wheelevent_isbase = value; }
    void setQTreeWidget_ContextMenuEvent_IsBase(bool value) const { qtreewidget_contextmenuevent_isbase = value; }
    void setQTreeWidget_InitStyleOption_IsBase(bool value) const { qtreewidget_initstyleoption_isbase = value; }
    void setQTreeWidget_DevType_IsBase(bool value) const { qtreewidget_devtype_isbase = value; }
    void setQTreeWidget_SetVisible_IsBase(bool value) const { qtreewidget_setvisible_isbase = value; }
    void setQTreeWidget_HeightForWidth_IsBase(bool value) const { qtreewidget_heightforwidth_isbase = value; }
    void setQTreeWidget_HasHeightForWidth_IsBase(bool value) const { qtreewidget_hasheightforwidth_isbase = value; }
    void setQTreeWidget_PaintEngine_IsBase(bool value) const { qtreewidget_paintengine_isbase = value; }
    void setQTreeWidget_KeyReleaseEvent_IsBase(bool value) const { qtreewidget_keyreleaseevent_isbase = value; }
    void setQTreeWidget_EnterEvent_IsBase(bool value) const { qtreewidget_enterevent_isbase = value; }
    void setQTreeWidget_LeaveEvent_IsBase(bool value) const { qtreewidget_leaveevent_isbase = value; }
    void setQTreeWidget_MoveEvent_IsBase(bool value) const { qtreewidget_moveevent_isbase = value; }
    void setQTreeWidget_CloseEvent_IsBase(bool value) const { qtreewidget_closeevent_isbase = value; }
    void setQTreeWidget_TabletEvent_IsBase(bool value) const { qtreewidget_tabletevent_isbase = value; }
    void setQTreeWidget_ActionEvent_IsBase(bool value) const { qtreewidget_actionevent_isbase = value; }
    void setQTreeWidget_ShowEvent_IsBase(bool value) const { qtreewidget_showevent_isbase = value; }
    void setQTreeWidget_HideEvent_IsBase(bool value) const { qtreewidget_hideevent_isbase = value; }
    void setQTreeWidget_NativeEvent_IsBase(bool value) const { qtreewidget_nativeevent_isbase = value; }
    void setQTreeWidget_Metric_IsBase(bool value) const { qtreewidget_metric_isbase = value; }
    void setQTreeWidget_InitPainter_IsBase(bool value) const { qtreewidget_initpainter_isbase = value; }
    void setQTreeWidget_Redirected_IsBase(bool value) const { qtreewidget_redirected_isbase = value; }
    void setQTreeWidget_SharedPainter_IsBase(bool value) const { qtreewidget_sharedpainter_isbase = value; }
    void setQTreeWidget_ChildEvent_IsBase(bool value) const { qtreewidget_childevent_isbase = value; }
    void setQTreeWidget_CustomEvent_IsBase(bool value) const { qtreewidget_customevent_isbase = value; }
    void setQTreeWidget_ConnectNotify_IsBase(bool value) const { qtreewidget_connectnotify_isbase = value; }
    void setQTreeWidget_DisconnectNotify_IsBase(bool value) const { qtreewidget_disconnectnotify_isbase = value; }
    void setQTreeWidget_ColumnResized_IsBase(bool value) const { qtreewidget_columnresized_isbase = value; }
    void setQTreeWidget_ColumnCountChanged_IsBase(bool value) const { qtreewidget_columncountchanged_isbase = value; }
    void setQTreeWidget_ColumnMoved_IsBase(bool value) const { qtreewidget_columnmoved_isbase = value; }
    void setQTreeWidget_Reexpand_IsBase(bool value) const { qtreewidget_reexpand_isbase = value; }
    void setQTreeWidget_RowsRemoved_IsBase(bool value) const { qtreewidget_rowsremoved_isbase = value; }
    void setQTreeWidget_DrawTree_IsBase(bool value) const { qtreewidget_drawtree_isbase = value; }
    void setQTreeWidget_IndexRowSizeHint_IsBase(bool value) const { qtreewidget_indexrowsizehint_isbase = value; }
    void setQTreeWidget_RowHeight_IsBase(bool value) const { qtreewidget_rowheight_isbase = value; }
    void setQTreeWidget_State_IsBase(bool value) const { qtreewidget_state_isbase = value; }
    void setQTreeWidget_SetState_IsBase(bool value) const { qtreewidget_setstate_isbase = value; }
    void setQTreeWidget_ScheduleDelayedItemsLayout_IsBase(bool value) const { qtreewidget_scheduledelayeditemslayout_isbase = value; }
    void setQTreeWidget_ExecuteDelayedItemsLayout_IsBase(bool value) const { qtreewidget_executedelayeditemslayout_isbase = value; }
    void setQTreeWidget_SetDirtyRegion_IsBase(bool value) const { qtreewidget_setdirtyregion_isbase = value; }
    void setQTreeWidget_ScrollDirtyRegion_IsBase(bool value) const { qtreewidget_scrolldirtyregion_isbase = value; }
    void setQTreeWidget_DirtyRegionOffset_IsBase(bool value) const { qtreewidget_dirtyregionoffset_isbase = value; }
    void setQTreeWidget_StartAutoScroll_IsBase(bool value) const { qtreewidget_startautoscroll_isbase = value; }
    void setQTreeWidget_StopAutoScroll_IsBase(bool value) const { qtreewidget_stopautoscroll_isbase = value; }
    void setQTreeWidget_DoAutoScroll_IsBase(bool value) const { qtreewidget_doautoscroll_isbase = value; }
    void setQTreeWidget_DropIndicatorPosition_IsBase(bool value) const { qtreewidget_dropindicatorposition_isbase = value; }
    void setQTreeWidget_SetViewportMargins_IsBase(bool value) const { qtreewidget_setviewportmargins_isbase = value; }
    void setQTreeWidget_ViewportMargins_IsBase(bool value) const { qtreewidget_viewportmargins_isbase = value; }
    void setQTreeWidget_DrawFrame_IsBase(bool value) const { qtreewidget_drawframe_isbase = value; }
    void setQTreeWidget_UpdateMicroFocus_IsBase(bool value) const { qtreewidget_updatemicrofocus_isbase = value; }
    void setQTreeWidget_Create_IsBase(bool value) const { qtreewidget_create_isbase = value; }
    void setQTreeWidget_Destroy_IsBase(bool value) const { qtreewidget_destroy_isbase = value; }
    void setQTreeWidget_FocusNextChild_IsBase(bool value) const { qtreewidget_focusnextchild_isbase = value; }
    void setQTreeWidget_FocusPreviousChild_IsBase(bool value) const { qtreewidget_focuspreviouschild_isbase = value; }
    void setQTreeWidget_Sender_IsBase(bool value) const { qtreewidget_sender_isbase = value; }
    void setQTreeWidget_SenderSignalIndex_IsBase(bool value) const { qtreewidget_sendersignalindex_isbase = value; }
    void setQTreeWidget_Receivers_IsBase(bool value) const { qtreewidget_receivers_isbase = value; }
    void setQTreeWidget_IsSignalConnected_IsBase(bool value) const { qtreewidget_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtreewidget_metacall_isbase) {
            qtreewidget_metacall_isbase = false;
            return QTreeWidget::qt_metacall(param1, param2, param3);
        } else if (qtreewidget_metacall_callback != nullptr) {
            return qtreewidget_metacall_callback(this, param1, param2, param3);
        } else {
            return QTreeWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qtreewidget_setselectionmodel_isbase) {
            qtreewidget_setselectionmodel_isbase = false;
            QTreeWidget::setSelectionModel(selectionModel);
        } else if (qtreewidget_setselectionmodel_callback != nullptr) {
            qtreewidget_setselectionmodel_callback(this, selectionModel);
        } else {
            QTreeWidget::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtreewidget_event_isbase) {
            qtreewidget_event_isbase = false;
            return QTreeWidget::event(e);
        } else if (qtreewidget_event_callback != nullptr) {
            return qtreewidget_event_callback(this, e);
        } else {
            return QTreeWidget::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qtreewidget_mimetypes_isbase) {
            qtreewidget_mimetypes_isbase = false;
            return QTreeWidget::mimeTypes();
        } else if (qtreewidget_mimetypes_callback != nullptr) {
            return qtreewidget_mimetypes_callback();
        } else {
            return QTreeWidget::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QTreeWidgetItem*>& items) const override {
        if (qtreewidget_mimedata_isbase) {
            qtreewidget_mimedata_isbase = false;
            return QTreeWidget::mimeData(items);
        } else if (qtreewidget_mimedata_callback != nullptr) {
            return qtreewidget_mimedata_callback(this, items);
        } else {
            return QTreeWidget::mimeData(items);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(QTreeWidgetItem* parent, int index, const QMimeData* data, Qt::DropAction action) override {
        if (qtreewidget_dropmimedata_isbase) {
            qtreewidget_dropmimedata_isbase = false;
            return QTreeWidget::dropMimeData(parent, index, data, action);
        } else if (qtreewidget_dropmimedata_callback != nullptr) {
            return qtreewidget_dropmimedata_callback(this, parent, index, data, action);
        } else {
            return QTreeWidget::dropMimeData(parent, index, data, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qtreewidget_supporteddropactions_isbase) {
            qtreewidget_supporteddropactions_isbase = false;
            return QTreeWidget::supportedDropActions();
        } else if (qtreewidget_supporteddropactions_callback != nullptr) {
            return qtreewidget_supporteddropactions_callback();
        } else {
            return QTreeWidget::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtreewidget_dropevent_isbase) {
            qtreewidget_dropevent_isbase = false;
            QTreeWidget::dropEvent(event);
        } else if (qtreewidget_dropevent_callback != nullptr) {
            qtreewidget_dropevent_callback(this, event);
        } else {
            QTreeWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qtreewidget_setrootindex_isbase) {
            qtreewidget_setrootindex_isbase = false;
            QTreeWidget::setRootIndex(index);
        } else if (qtreewidget_setrootindex_callback != nullptr) {
            qtreewidget_setrootindex_callback(this, index);
        } else {
            QTreeWidget::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qtreewidget_keyboardsearch_isbase) {
            qtreewidget_keyboardsearch_isbase = false;
            QTreeWidget::keyboardSearch(search);
        } else if (qtreewidget_keyboardsearch_callback != nullptr) {
            qtreewidget_keyboardsearch_callback(this, search);
        } else {
            QTreeWidget::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qtreewidget_visualrect_isbase) {
            qtreewidget_visualrect_isbase = false;
            return QTreeWidget::visualRect(index);
        } else if (qtreewidget_visualrect_callback != nullptr) {
            return qtreewidget_visualrect_callback(this, index);
        } else {
            return QTreeWidget::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qtreewidget_scrollto_isbase) {
            qtreewidget_scrollto_isbase = false;
            QTreeWidget::scrollTo(index, hint);
        } else if (qtreewidget_scrollto_callback != nullptr) {
            qtreewidget_scrollto_callback(this, index, hint);
        } else {
            QTreeWidget::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qtreewidget_indexat_isbase) {
            qtreewidget_indexat_isbase = false;
            return QTreeWidget::indexAt(p);
        } else if (qtreewidget_indexat_callback != nullptr) {
            return qtreewidget_indexat_callback(this, p);
        } else {
            return QTreeWidget::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qtreewidget_doitemslayout_isbase) {
            qtreewidget_doitemslayout_isbase = false;
            QTreeWidget::doItemsLayout();
        } else if (qtreewidget_doitemslayout_callback != nullptr) {
            qtreewidget_doitemslayout_callback();
        } else {
            QTreeWidget::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qtreewidget_reset_isbase) {
            qtreewidget_reset_isbase = false;
            QTreeWidget::reset();
        } else if (qtreewidget_reset_callback != nullptr) {
            qtreewidget_reset_callback();
        } else {
            QTreeWidget::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qtreewidget_datachanged_isbase) {
            qtreewidget_datachanged_isbase = false;
            QTreeWidget::dataChanged(topLeft, bottomRight, roles);
        } else if (qtreewidget_datachanged_callback != nullptr) {
            qtreewidget_datachanged_callback(this, topLeft, bottomRight, roles);
        } else {
            QTreeWidget::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qtreewidget_selectall_isbase) {
            qtreewidget_selectall_isbase = false;
            QTreeWidget::selectAll();
        } else if (qtreewidget_selectall_callback != nullptr) {
            qtreewidget_selectall_callback();
        } else {
            QTreeWidget::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qtreewidget_verticalscrollbarvaluechanged_isbase) {
            qtreewidget_verticalscrollbarvaluechanged_isbase = false;
            QTreeWidget::verticalScrollbarValueChanged(value);
        } else if (qtreewidget_verticalscrollbarvaluechanged_callback != nullptr) {
            qtreewidget_verticalscrollbarvaluechanged_callback(this, value);
        } else {
            QTreeWidget::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtreewidget_scrollcontentsby_isbase) {
            qtreewidget_scrollcontentsby_isbase = false;
            QTreeWidget::scrollContentsBy(dx, dy);
        } else if (qtreewidget_scrollcontentsby_callback != nullptr) {
            qtreewidget_scrollcontentsby_callback(this, dx, dy);
        } else {
            QTreeWidget::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qtreewidget_rowsinserted_isbase) {
            qtreewidget_rowsinserted_isbase = false;
            QTreeWidget::rowsInserted(parent, start, end);
        } else if (qtreewidget_rowsinserted_callback != nullptr) {
            qtreewidget_rowsinserted_callback(this, parent, start, end);
        } else {
            QTreeWidget::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qtreewidget_rowsabouttoberemoved_isbase) {
            qtreewidget_rowsabouttoberemoved_isbase = false;
            QTreeWidget::rowsAboutToBeRemoved(parent, start, end);
        } else if (qtreewidget_rowsabouttoberemoved_callback != nullptr) {
            qtreewidget_rowsabouttoberemoved_callback(this, parent, start, end);
        } else {
            QTreeWidget::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qtreewidget_movecursor_isbase) {
            qtreewidget_movecursor_isbase = false;
            return QTreeWidget::moveCursor(cursorAction, modifiers);
        } else if (qtreewidget_movecursor_callback != nullptr) {
            return qtreewidget_movecursor_callback(this, cursorAction, modifiers);
        } else {
            return QTreeWidget::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qtreewidget_horizontaloffset_isbase) {
            qtreewidget_horizontaloffset_isbase = false;
            return QTreeWidget::horizontalOffset();
        } else if (qtreewidget_horizontaloffset_callback != nullptr) {
            return qtreewidget_horizontaloffset_callback();
        } else {
            return QTreeWidget::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qtreewidget_verticaloffset_isbase) {
            qtreewidget_verticaloffset_isbase = false;
            return QTreeWidget::verticalOffset();
        } else if (qtreewidget_verticaloffset_callback != nullptr) {
            return qtreewidget_verticaloffset_callback();
        } else {
            return QTreeWidget::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qtreewidget_setselection_isbase) {
            qtreewidget_setselection_isbase = false;
            QTreeWidget::setSelection(rect, command);
        } else if (qtreewidget_setselection_callback != nullptr) {
            qtreewidget_setselection_callback(this, rect, command);
        } else {
            QTreeWidget::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qtreewidget_visualregionforselection_isbase) {
            qtreewidget_visualregionforselection_isbase = false;
            return QTreeWidget::visualRegionForSelection(selection);
        } else if (qtreewidget_visualregionforselection_callback != nullptr) {
            return qtreewidget_visualregionforselection_callback(this, selection);
        } else {
            return QTreeWidget::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList selectedIndexes() const override {
        if (qtreewidget_selectedindexes_isbase) {
            qtreewidget_selectedindexes_isbase = false;
            return QTreeWidget::selectedIndexes();
        } else if (qtreewidget_selectedindexes_callback != nullptr) {
            return qtreewidget_selectedindexes_callback();
        } else {
            return QTreeWidget::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtreewidget_changeevent_isbase) {
            qtreewidget_changeevent_isbase = false;
            QTreeWidget::changeEvent(event);
        } else if (qtreewidget_changeevent_callback != nullptr) {
            qtreewidget_changeevent_callback(this, event);
        } else {
            QTreeWidget::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtreewidget_timerevent_isbase) {
            qtreewidget_timerevent_isbase = false;
            QTreeWidget::timerEvent(event);
        } else if (qtreewidget_timerevent_callback != nullptr) {
            qtreewidget_timerevent_callback(this, event);
        } else {
            QTreeWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtreewidget_paintevent_isbase) {
            qtreewidget_paintevent_isbase = false;
            QTreeWidget::paintEvent(event);
        } else if (qtreewidget_paintevent_callback != nullptr) {
            qtreewidget_paintevent_callback(this, event);
        } else {
            QTreeWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRow(QPainter* painter, const QStyleOptionViewItem& options, const QModelIndex& index) const override {
        if (qtreewidget_drawrow_isbase) {
            qtreewidget_drawrow_isbase = false;
            QTreeWidget::drawRow(painter, options, index);
        } else if (qtreewidget_drawrow_callback != nullptr) {
            qtreewidget_drawrow_callback(this, painter, options, index);
        } else {
            QTreeWidget::drawRow(painter, options, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBranches(QPainter* painter, const QRect& rect, const QModelIndex& index) const override {
        if (qtreewidget_drawbranches_isbase) {
            qtreewidget_drawbranches_isbase = false;
            QTreeWidget::drawBranches(painter, rect, index);
        } else if (qtreewidget_drawbranches_callback != nullptr) {
            qtreewidget_drawbranches_callback(this, painter, rect, index);
        } else {
            QTreeWidget::drawBranches(painter, rect, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtreewidget_mousepressevent_isbase) {
            qtreewidget_mousepressevent_isbase = false;
            QTreeWidget::mousePressEvent(event);
        } else if (qtreewidget_mousepressevent_callback != nullptr) {
            qtreewidget_mousepressevent_callback(this, event);
        } else {
            QTreeWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtreewidget_mousereleaseevent_isbase) {
            qtreewidget_mousereleaseevent_isbase = false;
            QTreeWidget::mouseReleaseEvent(event);
        } else if (qtreewidget_mousereleaseevent_callback != nullptr) {
            qtreewidget_mousereleaseevent_callback(this, event);
        } else {
            QTreeWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtreewidget_mousedoubleclickevent_isbase) {
            qtreewidget_mousedoubleclickevent_isbase = false;
            QTreeWidget::mouseDoubleClickEvent(event);
        } else if (qtreewidget_mousedoubleclickevent_callback != nullptr) {
            qtreewidget_mousedoubleclickevent_callback(this, event);
        } else {
            QTreeWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtreewidget_mousemoveevent_isbase) {
            qtreewidget_mousemoveevent_isbase = false;
            QTreeWidget::mouseMoveEvent(event);
        } else if (qtreewidget_mousemoveevent_callback != nullptr) {
            qtreewidget_mousemoveevent_callback(this, event);
        } else {
            QTreeWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtreewidget_keypressevent_isbase) {
            qtreewidget_keypressevent_isbase = false;
            QTreeWidget::keyPressEvent(event);
        } else if (qtreewidget_keypressevent_callback != nullptr) {
            qtreewidget_keypressevent_callback(this, event);
        } else {
            QTreeWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtreewidget_dragmoveevent_isbase) {
            qtreewidget_dragmoveevent_isbase = false;
            QTreeWidget::dragMoveEvent(event);
        } else if (qtreewidget_dragmoveevent_callback != nullptr) {
            qtreewidget_dragmoveevent_callback(this, event);
        } else {
            QTreeWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qtreewidget_viewportevent_isbase) {
            qtreewidget_viewportevent_isbase = false;
            return QTreeWidget::viewportEvent(event);
        } else if (qtreewidget_viewportevent_callback != nullptr) {
            return qtreewidget_viewportevent_callback(this, event);
        } else {
            return QTreeWidget::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qtreewidget_updategeometries_isbase) {
            qtreewidget_updategeometries_isbase = false;
            QTreeWidget::updateGeometries();
        } else if (qtreewidget_updategeometries_callback != nullptr) {
            qtreewidget_updategeometries_callback();
        } else {
            QTreeWidget::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtreewidget_viewportsizehint_isbase) {
            qtreewidget_viewportsizehint_isbase = false;
            return QTreeWidget::viewportSizeHint();
        } else if (qtreewidget_viewportsizehint_callback != nullptr) {
            return qtreewidget_viewportsizehint_callback();
        } else {
            return QTreeWidget::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qtreewidget_sizehintforcolumn_isbase) {
            qtreewidget_sizehintforcolumn_isbase = false;
            return QTreeWidget::sizeHintForColumn(column);
        } else if (qtreewidget_sizehintforcolumn_callback != nullptr) {
            return qtreewidget_sizehintforcolumn_callback(this, column);
        } else {
            return QTreeWidget::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qtreewidget_horizontalscrollbaraction_isbase) {
            qtreewidget_horizontalscrollbaraction_isbase = false;
            QTreeWidget::horizontalScrollbarAction(action);
        } else if (qtreewidget_horizontalscrollbaraction_callback != nullptr) {
            qtreewidget_horizontalscrollbaraction_callback(this, action);
        } else {
            QTreeWidget::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qtreewidget_isindexhidden_isbase) {
            qtreewidget_isindexhidden_isbase = false;
            return QTreeWidget::isIndexHidden(index);
        } else if (qtreewidget_isindexhidden_callback != nullptr) {
            return qtreewidget_isindexhidden_callback(this, index);
        } else {
            return QTreeWidget::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qtreewidget_selectionchanged_isbase) {
            qtreewidget_selectionchanged_isbase = false;
            QTreeWidget::selectionChanged(selected, deselected);
        } else if (qtreewidget_selectionchanged_callback != nullptr) {
            qtreewidget_selectionchanged_callback(this, selected, deselected);
        } else {
            QTreeWidget::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qtreewidget_currentchanged_isbase) {
            qtreewidget_currentchanged_isbase = false;
            QTreeWidget::currentChanged(current, previous);
        } else if (qtreewidget_currentchanged_callback != nullptr) {
            qtreewidget_currentchanged_callback(this, current, previous);
        } else {
            QTreeWidget::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qtreewidget_sizehintforrow_isbase) {
            qtreewidget_sizehintforrow_isbase = false;
            return QTreeWidget::sizeHintForRow(row);
        } else if (qtreewidget_sizehintforrow_callback != nullptr) {
            return qtreewidget_sizehintforrow_callback(this, row);
        } else {
            return QTreeWidget::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qtreewidget_itemdelegateforindex_isbase) {
            qtreewidget_itemdelegateforindex_isbase = false;
            return QTreeWidget::itemDelegateForIndex(index);
        } else if (qtreewidget_itemdelegateforindex_callback != nullptr) {
            return qtreewidget_itemdelegateforindex_callback(this, index);
        } else {
            return QTreeWidget::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qtreewidget_inputmethodquery_isbase) {
            qtreewidget_inputmethodquery_isbase = false;
            return QTreeWidget::inputMethodQuery(query);
        } else if (qtreewidget_inputmethodquery_callback != nullptr) {
            return qtreewidget_inputmethodquery_callback(this, query);
        } else {
            return QTreeWidget::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qtreewidget_updateeditordata_isbase) {
            qtreewidget_updateeditordata_isbase = false;
            QTreeWidget::updateEditorData();
        } else if (qtreewidget_updateeditordata_callback != nullptr) {
            qtreewidget_updateeditordata_callback();
        } else {
            QTreeWidget::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qtreewidget_updateeditorgeometries_isbase) {
            qtreewidget_updateeditorgeometries_isbase = false;
            QTreeWidget::updateEditorGeometries();
        } else if (qtreewidget_updateeditorgeometries_callback != nullptr) {
            qtreewidget_updateeditorgeometries_callback();
        } else {
            QTreeWidget::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qtreewidget_verticalscrollbaraction_isbase) {
            qtreewidget_verticalscrollbaraction_isbase = false;
            QTreeWidget::verticalScrollbarAction(action);
        } else if (qtreewidget_verticalscrollbaraction_callback != nullptr) {
            qtreewidget_verticalscrollbaraction_callback(this, action);
        } else {
            QTreeWidget::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qtreewidget_horizontalscrollbarvaluechanged_isbase) {
            qtreewidget_horizontalscrollbarvaluechanged_isbase = false;
            QTreeWidget::horizontalScrollbarValueChanged(value);
        } else if (qtreewidget_horizontalscrollbarvaluechanged_callback != nullptr) {
            qtreewidget_horizontalscrollbarvaluechanged_callback(this, value);
        } else {
            QTreeWidget::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qtreewidget_closeeditor_isbase) {
            qtreewidget_closeeditor_isbase = false;
            QTreeWidget::closeEditor(editor, hint);
        } else if (qtreewidget_closeeditor_callback != nullptr) {
            qtreewidget_closeeditor_callback(this, editor, hint);
        } else {
            QTreeWidget::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qtreewidget_commitdata_isbase) {
            qtreewidget_commitdata_isbase = false;
            QTreeWidget::commitData(editor);
        } else if (qtreewidget_commitdata_callback != nullptr) {
            qtreewidget_commitdata_callback(this, editor);
        } else {
            QTreeWidget::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qtreewidget_editordestroyed_isbase) {
            qtreewidget_editordestroyed_isbase = false;
            QTreeWidget::editorDestroyed(editor);
        } else if (qtreewidget_editordestroyed_callback != nullptr) {
            qtreewidget_editordestroyed_callback(this, editor);
        } else {
            QTreeWidget::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qtreewidget_edit2_isbase) {
            qtreewidget_edit2_isbase = false;
            return QTreeWidget::edit(index, trigger, event);
        } else if (qtreewidget_edit2_callback != nullptr) {
            return qtreewidget_edit2_callback(this, index, trigger, event);
        } else {
            return QTreeWidget::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qtreewidget_selectioncommand_isbase) {
            qtreewidget_selectioncommand_isbase = false;
            return QTreeWidget::selectionCommand(index, event);
        } else if (qtreewidget_selectioncommand_callback != nullptr) {
            return qtreewidget_selectioncommand_callback(this, index, event);
        } else {
            return QTreeWidget::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qtreewidget_startdrag_isbase) {
            qtreewidget_startdrag_isbase = false;
            QTreeWidget::startDrag(supportedActions);
        } else if (qtreewidget_startdrag_callback != nullptr) {
            qtreewidget_startdrag_callback(this, supportedActions);
        } else {
            QTreeWidget::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qtreewidget_initviewitemoption_isbase) {
            qtreewidget_initviewitemoption_isbase = false;
            QTreeWidget::initViewItemOption(option);
        } else if (qtreewidget_initviewitemoption_callback != nullptr) {
            qtreewidget_initviewitemoption_callback(this, option);
        } else {
            QTreeWidget::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtreewidget_focusnextprevchild_isbase) {
            qtreewidget_focusnextprevchild_isbase = false;
            return QTreeWidget::focusNextPrevChild(next);
        } else if (qtreewidget_focusnextprevchild_callback != nullptr) {
            return qtreewidget_focusnextprevchild_callback(this, next);
        } else {
            return QTreeWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtreewidget_dragenterevent_isbase) {
            qtreewidget_dragenterevent_isbase = false;
            QTreeWidget::dragEnterEvent(event);
        } else if (qtreewidget_dragenterevent_callback != nullptr) {
            qtreewidget_dragenterevent_callback(this, event);
        } else {
            QTreeWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtreewidget_dragleaveevent_isbase) {
            qtreewidget_dragleaveevent_isbase = false;
            QTreeWidget::dragLeaveEvent(event);
        } else if (qtreewidget_dragleaveevent_callback != nullptr) {
            qtreewidget_dragleaveevent_callback(this, event);
        } else {
            QTreeWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtreewidget_focusinevent_isbase) {
            qtreewidget_focusinevent_isbase = false;
            QTreeWidget::focusInEvent(event);
        } else if (qtreewidget_focusinevent_callback != nullptr) {
            qtreewidget_focusinevent_callback(this, event);
        } else {
            QTreeWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtreewidget_focusoutevent_isbase) {
            qtreewidget_focusoutevent_isbase = false;
            QTreeWidget::focusOutEvent(event);
        } else if (qtreewidget_focusoutevent_callback != nullptr) {
            qtreewidget_focusoutevent_callback(this, event);
        } else {
            QTreeWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtreewidget_resizeevent_isbase) {
            qtreewidget_resizeevent_isbase = false;
            QTreeWidget::resizeEvent(event);
        } else if (qtreewidget_resizeevent_callback != nullptr) {
            qtreewidget_resizeevent_callback(this, event);
        } else {
            QTreeWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qtreewidget_inputmethodevent_isbase) {
            qtreewidget_inputmethodevent_isbase = false;
            QTreeWidget::inputMethodEvent(event);
        } else if (qtreewidget_inputmethodevent_callback != nullptr) {
            qtreewidget_inputmethodevent_callback(this, event);
        } else {
            QTreeWidget::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qtreewidget_eventfilter_isbase) {
            qtreewidget_eventfilter_isbase = false;
            return QTreeWidget::eventFilter(object, event);
        } else if (qtreewidget_eventfilter_callback != nullptr) {
            return qtreewidget_eventfilter_callback(this, object, event);
        } else {
            return QTreeWidget::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtreewidget_minimumsizehint_isbase) {
            qtreewidget_minimumsizehint_isbase = false;
            return QTreeWidget::minimumSizeHint();
        } else if (qtreewidget_minimumsizehint_callback != nullptr) {
            return qtreewidget_minimumsizehint_callback();
        } else {
            return QTreeWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtreewidget_sizehint_isbase) {
            qtreewidget_sizehint_isbase = false;
            return QTreeWidget::sizeHint();
        } else if (qtreewidget_sizehint_callback != nullptr) {
            return qtreewidget_sizehint_callback();
        } else {
            return QTreeWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtreewidget_setupviewport_isbase) {
            qtreewidget_setupviewport_isbase = false;
            QTreeWidget::setupViewport(viewport);
        } else if (qtreewidget_setupviewport_callback != nullptr) {
            qtreewidget_setupviewport_callback(this, viewport);
        } else {
            QTreeWidget::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qtreewidget_wheelevent_isbase) {
            qtreewidget_wheelevent_isbase = false;
            QTreeWidget::wheelEvent(param1);
        } else if (qtreewidget_wheelevent_callback != nullptr) {
            qtreewidget_wheelevent_callback(this, param1);
        } else {
            QTreeWidget::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qtreewidget_contextmenuevent_isbase) {
            qtreewidget_contextmenuevent_isbase = false;
            QTreeWidget::contextMenuEvent(param1);
        } else if (qtreewidget_contextmenuevent_callback != nullptr) {
            qtreewidget_contextmenuevent_callback(this, param1);
        } else {
            QTreeWidget::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtreewidget_initstyleoption_isbase) {
            qtreewidget_initstyleoption_isbase = false;
            QTreeWidget::initStyleOption(option);
        } else if (qtreewidget_initstyleoption_callback != nullptr) {
            qtreewidget_initstyleoption_callback(this, option);
        } else {
            QTreeWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtreewidget_devtype_isbase) {
            qtreewidget_devtype_isbase = false;
            return QTreeWidget::devType();
        } else if (qtreewidget_devtype_callback != nullptr) {
            return qtreewidget_devtype_callback();
        } else {
            return QTreeWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtreewidget_setvisible_isbase) {
            qtreewidget_setvisible_isbase = false;
            QTreeWidget::setVisible(visible);
        } else if (qtreewidget_setvisible_callback != nullptr) {
            qtreewidget_setvisible_callback(this, visible);
        } else {
            QTreeWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtreewidget_heightforwidth_isbase) {
            qtreewidget_heightforwidth_isbase = false;
            return QTreeWidget::heightForWidth(param1);
        } else if (qtreewidget_heightforwidth_callback != nullptr) {
            return qtreewidget_heightforwidth_callback(this, param1);
        } else {
            return QTreeWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtreewidget_hasheightforwidth_isbase) {
            qtreewidget_hasheightforwidth_isbase = false;
            return QTreeWidget::hasHeightForWidth();
        } else if (qtreewidget_hasheightforwidth_callback != nullptr) {
            return qtreewidget_hasheightforwidth_callback();
        } else {
            return QTreeWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtreewidget_paintengine_isbase) {
            qtreewidget_paintengine_isbase = false;
            return QTreeWidget::paintEngine();
        } else if (qtreewidget_paintengine_callback != nullptr) {
            return qtreewidget_paintengine_callback();
        } else {
            return QTreeWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtreewidget_keyreleaseevent_isbase) {
            qtreewidget_keyreleaseevent_isbase = false;
            QTreeWidget::keyReleaseEvent(event);
        } else if (qtreewidget_keyreleaseevent_callback != nullptr) {
            qtreewidget_keyreleaseevent_callback(this, event);
        } else {
            QTreeWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtreewidget_enterevent_isbase) {
            qtreewidget_enterevent_isbase = false;
            QTreeWidget::enterEvent(event);
        } else if (qtreewidget_enterevent_callback != nullptr) {
            qtreewidget_enterevent_callback(this, event);
        } else {
            QTreeWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtreewidget_leaveevent_isbase) {
            qtreewidget_leaveevent_isbase = false;
            QTreeWidget::leaveEvent(event);
        } else if (qtreewidget_leaveevent_callback != nullptr) {
            qtreewidget_leaveevent_callback(this, event);
        } else {
            QTreeWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtreewidget_moveevent_isbase) {
            qtreewidget_moveevent_isbase = false;
            QTreeWidget::moveEvent(event);
        } else if (qtreewidget_moveevent_callback != nullptr) {
            qtreewidget_moveevent_callback(this, event);
        } else {
            QTreeWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtreewidget_closeevent_isbase) {
            qtreewidget_closeevent_isbase = false;
            QTreeWidget::closeEvent(event);
        } else if (qtreewidget_closeevent_callback != nullptr) {
            qtreewidget_closeevent_callback(this, event);
        } else {
            QTreeWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtreewidget_tabletevent_isbase) {
            qtreewidget_tabletevent_isbase = false;
            QTreeWidget::tabletEvent(event);
        } else if (qtreewidget_tabletevent_callback != nullptr) {
            qtreewidget_tabletevent_callback(this, event);
        } else {
            QTreeWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtreewidget_actionevent_isbase) {
            qtreewidget_actionevent_isbase = false;
            QTreeWidget::actionEvent(event);
        } else if (qtreewidget_actionevent_callback != nullptr) {
            qtreewidget_actionevent_callback(this, event);
        } else {
            QTreeWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtreewidget_showevent_isbase) {
            qtreewidget_showevent_isbase = false;
            QTreeWidget::showEvent(event);
        } else if (qtreewidget_showevent_callback != nullptr) {
            qtreewidget_showevent_callback(this, event);
        } else {
            QTreeWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtreewidget_hideevent_isbase) {
            qtreewidget_hideevent_isbase = false;
            QTreeWidget::hideEvent(event);
        } else if (qtreewidget_hideevent_callback != nullptr) {
            qtreewidget_hideevent_callback(this, event);
        } else {
            QTreeWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtreewidget_nativeevent_isbase) {
            qtreewidget_nativeevent_isbase = false;
            return QTreeWidget::nativeEvent(eventType, message, result);
        } else if (qtreewidget_nativeevent_callback != nullptr) {
            return qtreewidget_nativeevent_callback(this, eventType, message, result);
        } else {
            return QTreeWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtreewidget_metric_isbase) {
            qtreewidget_metric_isbase = false;
            return QTreeWidget::metric(param1);
        } else if (qtreewidget_metric_callback != nullptr) {
            return qtreewidget_metric_callback(this, param1);
        } else {
            return QTreeWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtreewidget_initpainter_isbase) {
            qtreewidget_initpainter_isbase = false;
            QTreeWidget::initPainter(painter);
        } else if (qtreewidget_initpainter_callback != nullptr) {
            qtreewidget_initpainter_callback(this, painter);
        } else {
            QTreeWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtreewidget_redirected_isbase) {
            qtreewidget_redirected_isbase = false;
            return QTreeWidget::redirected(offset);
        } else if (qtreewidget_redirected_callback != nullptr) {
            return qtreewidget_redirected_callback(this, offset);
        } else {
            return QTreeWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtreewidget_sharedpainter_isbase) {
            qtreewidget_sharedpainter_isbase = false;
            return QTreeWidget::sharedPainter();
        } else if (qtreewidget_sharedpainter_callback != nullptr) {
            return qtreewidget_sharedpainter_callback();
        } else {
            return QTreeWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtreewidget_childevent_isbase) {
            qtreewidget_childevent_isbase = false;
            QTreeWidget::childEvent(event);
        } else if (qtreewidget_childevent_callback != nullptr) {
            qtreewidget_childevent_callback(this, event);
        } else {
            QTreeWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtreewidget_customevent_isbase) {
            qtreewidget_customevent_isbase = false;
            QTreeWidget::customEvent(event);
        } else if (qtreewidget_customevent_callback != nullptr) {
            qtreewidget_customevent_callback(this, event);
        } else {
            QTreeWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtreewidget_connectnotify_isbase) {
            qtreewidget_connectnotify_isbase = false;
            QTreeWidget::connectNotify(signal);
        } else if (qtreewidget_connectnotify_callback != nullptr) {
            qtreewidget_connectnotify_callback(this, signal);
        } else {
            QTreeWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtreewidget_disconnectnotify_isbase) {
            qtreewidget_disconnectnotify_isbase = false;
            QTreeWidget::disconnectNotify(signal);
        } else if (qtreewidget_disconnectnotify_callback != nullptr) {
            qtreewidget_disconnectnotify_callback(this, signal);
        } else {
            QTreeWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnResized(int column, int oldSize, int newSize) {
        if (qtreewidget_columnresized_isbase) {
            qtreewidget_columnresized_isbase = false;
            QTreeWidget::columnResized(column, oldSize, newSize);
        } else if (qtreewidget_columnresized_callback != nullptr) {
            qtreewidget_columnresized_callback(this, column, oldSize, newSize);
        } else {
            QTreeWidget::columnResized(column, oldSize, newSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnCountChanged(int oldCount, int newCount) {
        if (qtreewidget_columncountchanged_isbase) {
            qtreewidget_columncountchanged_isbase = false;
            QTreeWidget::columnCountChanged(oldCount, newCount);
        } else if (qtreewidget_columncountchanged_callback != nullptr) {
            qtreewidget_columncountchanged_callback(this, oldCount, newCount);
        } else {
            QTreeWidget::columnCountChanged(oldCount, newCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void columnMoved() {
        if (qtreewidget_columnmoved_isbase) {
            qtreewidget_columnmoved_isbase = false;
            QTreeWidget::columnMoved();
        } else if (qtreewidget_columnmoved_callback != nullptr) {
            qtreewidget_columnmoved_callback();
        } else {
            QTreeWidget::columnMoved();
        }
    }

    // Virtual method for C ABI access and custom callback
    void reexpand() {
        if (qtreewidget_reexpand_isbase) {
            qtreewidget_reexpand_isbase = false;
            QTreeWidget::reexpand();
        } else if (qtreewidget_reexpand_callback != nullptr) {
            qtreewidget_reexpand_callback();
        } else {
            QTreeWidget::reexpand();
        }
    }

    // Virtual method for C ABI access and custom callback
    void rowsRemoved(const QModelIndex& parent, int first, int last) {
        if (qtreewidget_rowsremoved_isbase) {
            qtreewidget_rowsremoved_isbase = false;
            QTreeWidget::rowsRemoved(parent, first, last);
        } else if (qtreewidget_rowsremoved_callback != nullptr) {
            qtreewidget_rowsremoved_callback(this, parent, first, last);
        } else {
            QTreeWidget::rowsRemoved(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawTree(QPainter* painter, const QRegion& region) const {
        if (qtreewidget_drawtree_isbase) {
            qtreewidget_drawtree_isbase = false;
            QTreeWidget::drawTree(painter, region);
        } else if (qtreewidget_drawtree_callback != nullptr) {
            qtreewidget_drawtree_callback(this, painter, region);
        } else {
            QTreeWidget::drawTree(painter, region);
        }
    }

    // Virtual method for C ABI access and custom callback
    int indexRowSizeHint(const QModelIndex& index) const {
        if (qtreewidget_indexrowsizehint_isbase) {
            qtreewidget_indexrowsizehint_isbase = false;
            return QTreeWidget::indexRowSizeHint(index);
        } else if (qtreewidget_indexrowsizehint_callback != nullptr) {
            return qtreewidget_indexrowsizehint_callback(this, index);
        } else {
            return QTreeWidget::indexRowSizeHint(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    int rowHeight(const QModelIndex& index) const {
        if (qtreewidget_rowheight_isbase) {
            qtreewidget_rowheight_isbase = false;
            return QTreeWidget::rowHeight(index);
        } else if (qtreewidget_rowheight_callback != nullptr) {
            return qtreewidget_rowheight_callback(this, index);
        } else {
            return QTreeWidget::rowHeight(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qtreewidget_state_isbase) {
            qtreewidget_state_isbase = false;
            return QTreeWidget::state();
        } else if (qtreewidget_state_callback != nullptr) {
            return qtreewidget_state_callback();
        } else {
            return QTreeWidget::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qtreewidget_setstate_isbase) {
            qtreewidget_setstate_isbase = false;
            QTreeWidget::setState(state);
        } else if (qtreewidget_setstate_callback != nullptr) {
            qtreewidget_setstate_callback(this, state);
        } else {
            QTreeWidget::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qtreewidget_scheduledelayeditemslayout_isbase) {
            qtreewidget_scheduledelayeditemslayout_isbase = false;
            QTreeWidget::scheduleDelayedItemsLayout();
        } else if (qtreewidget_scheduledelayeditemslayout_callback != nullptr) {
            qtreewidget_scheduledelayeditemslayout_callback();
        } else {
            QTreeWidget::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qtreewidget_executedelayeditemslayout_isbase) {
            qtreewidget_executedelayeditemslayout_isbase = false;
            QTreeWidget::executeDelayedItemsLayout();
        } else if (qtreewidget_executedelayeditemslayout_callback != nullptr) {
            qtreewidget_executedelayeditemslayout_callback();
        } else {
            QTreeWidget::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qtreewidget_setdirtyregion_isbase) {
            qtreewidget_setdirtyregion_isbase = false;
            QTreeWidget::setDirtyRegion(region);
        } else if (qtreewidget_setdirtyregion_callback != nullptr) {
            qtreewidget_setdirtyregion_callback(this, region);
        } else {
            QTreeWidget::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qtreewidget_scrolldirtyregion_isbase) {
            qtreewidget_scrolldirtyregion_isbase = false;
            QTreeWidget::scrollDirtyRegion(dx, dy);
        } else if (qtreewidget_scrolldirtyregion_callback != nullptr) {
            qtreewidget_scrolldirtyregion_callback(this, dx, dy);
        } else {
            QTreeWidget::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qtreewidget_dirtyregionoffset_isbase) {
            qtreewidget_dirtyregionoffset_isbase = false;
            return QTreeWidget::dirtyRegionOffset();
        } else if (qtreewidget_dirtyregionoffset_callback != nullptr) {
            return qtreewidget_dirtyregionoffset_callback();
        } else {
            return QTreeWidget::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qtreewidget_startautoscroll_isbase) {
            qtreewidget_startautoscroll_isbase = false;
            QTreeWidget::startAutoScroll();
        } else if (qtreewidget_startautoscroll_callback != nullptr) {
            qtreewidget_startautoscroll_callback();
        } else {
            QTreeWidget::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qtreewidget_stopautoscroll_isbase) {
            qtreewidget_stopautoscroll_isbase = false;
            QTreeWidget::stopAutoScroll();
        } else if (qtreewidget_stopautoscroll_callback != nullptr) {
            qtreewidget_stopautoscroll_callback();
        } else {
            QTreeWidget::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qtreewidget_doautoscroll_isbase) {
            qtreewidget_doautoscroll_isbase = false;
            QTreeWidget::doAutoScroll();
        } else if (qtreewidget_doautoscroll_callback != nullptr) {
            qtreewidget_doautoscroll_callback();
        } else {
            QTreeWidget::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qtreewidget_dropindicatorposition_isbase) {
            qtreewidget_dropindicatorposition_isbase = false;
            return QTreeWidget::dropIndicatorPosition();
        } else if (qtreewidget_dropindicatorposition_callback != nullptr) {
            return qtreewidget_dropindicatorposition_callback();
        } else {
            return QTreeWidget::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtreewidget_setviewportmargins_isbase) {
            qtreewidget_setviewportmargins_isbase = false;
            QTreeWidget::setViewportMargins(left, top, right, bottom);
        } else if (qtreewidget_setviewportmargins_callback != nullptr) {
            qtreewidget_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QTreeWidget::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtreewidget_viewportmargins_isbase) {
            qtreewidget_viewportmargins_isbase = false;
            return QTreeWidget::viewportMargins();
        } else if (qtreewidget_viewportmargins_callback != nullptr) {
            return qtreewidget_viewportmargins_callback();
        } else {
            return QTreeWidget::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtreewidget_drawframe_isbase) {
            qtreewidget_drawframe_isbase = false;
            QTreeWidget::drawFrame(param1);
        } else if (qtreewidget_drawframe_callback != nullptr) {
            qtreewidget_drawframe_callback(this, param1);
        } else {
            QTreeWidget::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtreewidget_updatemicrofocus_isbase) {
            qtreewidget_updatemicrofocus_isbase = false;
            QTreeWidget::updateMicroFocus();
        } else if (qtreewidget_updatemicrofocus_callback != nullptr) {
            qtreewidget_updatemicrofocus_callback();
        } else {
            QTreeWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtreewidget_create_isbase) {
            qtreewidget_create_isbase = false;
            QTreeWidget::create();
        } else if (qtreewidget_create_callback != nullptr) {
            qtreewidget_create_callback();
        } else {
            QTreeWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtreewidget_destroy_isbase) {
            qtreewidget_destroy_isbase = false;
            QTreeWidget::destroy();
        } else if (qtreewidget_destroy_callback != nullptr) {
            qtreewidget_destroy_callback();
        } else {
            QTreeWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtreewidget_focusnextchild_isbase) {
            qtreewidget_focusnextchild_isbase = false;
            return QTreeWidget::focusNextChild();
        } else if (qtreewidget_focusnextchild_callback != nullptr) {
            return qtreewidget_focusnextchild_callback();
        } else {
            return QTreeWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtreewidget_focuspreviouschild_isbase) {
            qtreewidget_focuspreviouschild_isbase = false;
            return QTreeWidget::focusPreviousChild();
        } else if (qtreewidget_focuspreviouschild_callback != nullptr) {
            return qtreewidget_focuspreviouschild_callback();
        } else {
            return QTreeWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtreewidget_sender_isbase) {
            qtreewidget_sender_isbase = false;
            return QTreeWidget::sender();
        } else if (qtreewidget_sender_callback != nullptr) {
            return qtreewidget_sender_callback();
        } else {
            return QTreeWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtreewidget_sendersignalindex_isbase) {
            qtreewidget_sendersignalindex_isbase = false;
            return QTreeWidget::senderSignalIndex();
        } else if (qtreewidget_sendersignalindex_callback != nullptr) {
            return qtreewidget_sendersignalindex_callback();
        } else {
            return QTreeWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtreewidget_receivers_isbase) {
            qtreewidget_receivers_isbase = false;
            return QTreeWidget::receivers(signal);
        } else if (qtreewidget_receivers_callback != nullptr) {
            return qtreewidget_receivers_callback(this, signal);
        } else {
            return QTreeWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtreewidget_issignalconnected_isbase) {
            qtreewidget_issignalconnected_isbase = false;
            return QTreeWidget::isSignalConnected(signal);
        } else if (qtreewidget_issignalconnected_callback != nullptr) {
            return qtreewidget_issignalconnected_callback(this, signal);
        } else {
            return QTreeWidget::isSignalConnected(signal);
        }
    }
};

#endif
