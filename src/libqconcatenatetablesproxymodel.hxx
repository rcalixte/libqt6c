#pragma once
#ifndef SRCC_LIBVIRTUALQCONCATENATETABLESPROXYMODEL_H
#define SRCC_LIBVIRTUALQCONCATENATETABLESPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QConcatenateTablesProxyModel so that we can call protected methods
class VirtualQConcatenateTablesProxyModel : public QConcatenateTablesProxyModel {

  public:
    // Virtual class public types (including callbacks)
    using QConcatenateTablesProxyModel_Metacall_Callback = int (*)(QConcatenateTablesProxyModel*, QMetaObject::Call, int, void**);
    using QConcatenateTablesProxyModel_Data_Callback = QVariant (*)(const QConcatenateTablesProxyModel*, const QModelIndex&, int);
    using QConcatenateTablesProxyModel_SetData_Callback = bool (*)(QConcatenateTablesProxyModel*, const QModelIndex&, const QVariant&, int);
    using QConcatenateTablesProxyModel_ItemData_Callback = QMap<int, QVariant> (*)(const QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_SetItemData_Callback = bool (*)(QConcatenateTablesProxyModel*, const QModelIndex&, const QMap<int, QVariant>&);
    using QConcatenateTablesProxyModel_Flags_Callback = Qt::ItemFlags (*)(const QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_Index_Callback = QModelIndex (*)(const QConcatenateTablesProxyModel*, int, int, const QModelIndex&);
    using QConcatenateTablesProxyModel_Parent_Callback = QModelIndex (*)(const QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_RowCount_Callback = int (*)(const QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_HeaderData_Callback = QVariant (*)(const QConcatenateTablesProxyModel*, int, Qt::Orientation, int);
    using QConcatenateTablesProxyModel_ColumnCount_Callback = int (*)(const QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_MimeTypes_Callback = QStringList (*)();
    using QConcatenateTablesProxyModel_MimeData_Callback = QMimeData* (*)(const QConcatenateTablesProxyModel*, const QModelIndexList&);
    using QConcatenateTablesProxyModel_CanDropMimeData_Callback = bool (*)(const QConcatenateTablesProxyModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QConcatenateTablesProxyModel_DropMimeData_Callback = bool (*)(QConcatenateTablesProxyModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QConcatenateTablesProxyModel_Span_Callback = QSize (*)(const QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_Sibling_Callback = QModelIndex (*)(const QConcatenateTablesProxyModel*, int, int, const QModelIndex&);
    using QConcatenateTablesProxyModel_HasChildren_Callback = bool (*)(const QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_SetHeaderData_Callback = bool (*)(QConcatenateTablesProxyModel*, int, Qt::Orientation, const QVariant&, int);
    using QConcatenateTablesProxyModel_ClearItemData_Callback = bool (*)(QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_SupportedDropActions_Callback = Qt::DropActions (*)();
    using QConcatenateTablesProxyModel_SupportedDragActions_Callback = Qt::DropActions (*)();
    using QConcatenateTablesProxyModel_InsertRows_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, const QModelIndex&);
    using QConcatenateTablesProxyModel_InsertColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, const QModelIndex&);
    using QConcatenateTablesProxyModel_RemoveRows_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, const QModelIndex&);
    using QConcatenateTablesProxyModel_RemoveColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, const QModelIndex&);
    using QConcatenateTablesProxyModel_MoveRows_Callback = bool (*)(QConcatenateTablesProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QConcatenateTablesProxyModel_MoveColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QConcatenateTablesProxyModel_FetchMore_Callback = void (*)(QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_CanFetchMore_Callback = bool (*)(const QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_Sort_Callback = void (*)(QConcatenateTablesProxyModel*, int, Qt::SortOrder);
    using QConcatenateTablesProxyModel_Buddy_Callback = QModelIndex (*)(const QConcatenateTablesProxyModel*, const QModelIndex&);
    using QConcatenateTablesProxyModel_Match_Callback = QModelIndexList (*)(const QConcatenateTablesProxyModel*, const QModelIndex&, int, const QVariant&, int, Qt::MatchFlags);
    using QConcatenateTablesProxyModel_RoleNames_Callback = QHash<int, QByteArray> (*)();
    using QConcatenateTablesProxyModel_MultiData_Callback = void (*)(const QConcatenateTablesProxyModel*, const QModelIndex&, QModelRoleDataSpan);
    using QConcatenateTablesProxyModel_Submit_Callback = bool (*)();
    using QConcatenateTablesProxyModel_Revert_Callback = void (*)();
    using QConcatenateTablesProxyModel_ResetInternalData_Callback = void (*)();
    using QConcatenateTablesProxyModel_Event_Callback = bool (*)(QConcatenateTablesProxyModel*, QEvent*);
    using QConcatenateTablesProxyModel_EventFilter_Callback = bool (*)(QConcatenateTablesProxyModel*, QObject*, QEvent*);
    using QConcatenateTablesProxyModel_TimerEvent_Callback = void (*)(QConcatenateTablesProxyModel*, QTimerEvent*);
    using QConcatenateTablesProxyModel_ChildEvent_Callback = void (*)(QConcatenateTablesProxyModel*, QChildEvent*);
    using QConcatenateTablesProxyModel_CustomEvent_Callback = void (*)(QConcatenateTablesProxyModel*, QEvent*);
    using QConcatenateTablesProxyModel_ConnectNotify_Callback = void (*)(QConcatenateTablesProxyModel*, const QMetaMethod&);
    using QConcatenateTablesProxyModel_DisconnectNotify_Callback = void (*)(QConcatenateTablesProxyModel*, const QMetaMethod&);
    using QConcatenateTablesProxyModel_CreateIndex_Callback = QModelIndex (*)(const QConcatenateTablesProxyModel*, int, int);
    using QConcatenateTablesProxyModel_EncodeData_Callback = void (*)(const QConcatenateTablesProxyModel*, const QModelIndexList&, QDataStream&);
    using QConcatenateTablesProxyModel_DecodeData_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, const QModelIndex&, QDataStream&);
    using QConcatenateTablesProxyModel_BeginInsertRows_Callback = void (*)(QConcatenateTablesProxyModel*, const QModelIndex&, int, int);
    using QConcatenateTablesProxyModel_EndInsertRows_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginRemoveRows_Callback = void (*)(QConcatenateTablesProxyModel*, const QModelIndex&, int, int);
    using QConcatenateTablesProxyModel_EndRemoveRows_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginMoveRows_Callback = bool (*)(QConcatenateTablesProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QConcatenateTablesProxyModel_EndMoveRows_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginInsertColumns_Callback = void (*)(QConcatenateTablesProxyModel*, const QModelIndex&, int, int);
    using QConcatenateTablesProxyModel_EndInsertColumns_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginRemoveColumns_Callback = void (*)(QConcatenateTablesProxyModel*, const QModelIndex&, int, int);
    using QConcatenateTablesProxyModel_EndRemoveColumns_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginMoveColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QConcatenateTablesProxyModel_EndMoveColumns_Callback = void (*)();
    using QConcatenateTablesProxyModel_BeginResetModel_Callback = void (*)();
    using QConcatenateTablesProxyModel_EndResetModel_Callback = void (*)();
    using QConcatenateTablesProxyModel_ChangePersistentIndex_Callback = void (*)(QConcatenateTablesProxyModel*, const QModelIndex&, const QModelIndex&);
    using QConcatenateTablesProxyModel_ChangePersistentIndexList_Callback = void (*)(QConcatenateTablesProxyModel*, const QModelIndexList&, const QModelIndexList&);
    using QConcatenateTablesProxyModel_PersistentIndexList_Callback = QModelIndexList (*)();
    using QConcatenateTablesProxyModel_Sender_Callback = QObject* (*)();
    using QConcatenateTablesProxyModel_SenderSignalIndex_Callback = int (*)();
    using QConcatenateTablesProxyModel_Receivers_Callback = int (*)(const QConcatenateTablesProxyModel*, const char*);
    using QConcatenateTablesProxyModel_IsSignalConnected_Callback = bool (*)(const QConcatenateTablesProxyModel*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QConcatenateTablesProxyModel_Metacall_Callback qconcatenatetablesproxymodel_metacall_callback = nullptr;
    QConcatenateTablesProxyModel_Data_Callback qconcatenatetablesproxymodel_data_callback = nullptr;
    QConcatenateTablesProxyModel_SetData_Callback qconcatenatetablesproxymodel_setdata_callback = nullptr;
    QConcatenateTablesProxyModel_ItemData_Callback qconcatenatetablesproxymodel_itemdata_callback = nullptr;
    QConcatenateTablesProxyModel_SetItemData_Callback qconcatenatetablesproxymodel_setitemdata_callback = nullptr;
    QConcatenateTablesProxyModel_Flags_Callback qconcatenatetablesproxymodel_flags_callback = nullptr;
    QConcatenateTablesProxyModel_Index_Callback qconcatenatetablesproxymodel_index_callback = nullptr;
    QConcatenateTablesProxyModel_Parent_Callback qconcatenatetablesproxymodel_parent_callback = nullptr;
    QConcatenateTablesProxyModel_RowCount_Callback qconcatenatetablesproxymodel_rowcount_callback = nullptr;
    QConcatenateTablesProxyModel_HeaderData_Callback qconcatenatetablesproxymodel_headerdata_callback = nullptr;
    QConcatenateTablesProxyModel_ColumnCount_Callback qconcatenatetablesproxymodel_columncount_callback = nullptr;
    QConcatenateTablesProxyModel_MimeTypes_Callback qconcatenatetablesproxymodel_mimetypes_callback = nullptr;
    QConcatenateTablesProxyModel_MimeData_Callback qconcatenatetablesproxymodel_mimedata_callback = nullptr;
    QConcatenateTablesProxyModel_CanDropMimeData_Callback qconcatenatetablesproxymodel_candropmimedata_callback = nullptr;
    QConcatenateTablesProxyModel_DropMimeData_Callback qconcatenatetablesproxymodel_dropmimedata_callback = nullptr;
    QConcatenateTablesProxyModel_Span_Callback qconcatenatetablesproxymodel_span_callback = nullptr;
    QConcatenateTablesProxyModel_Sibling_Callback qconcatenatetablesproxymodel_sibling_callback = nullptr;
    QConcatenateTablesProxyModel_HasChildren_Callback qconcatenatetablesproxymodel_haschildren_callback = nullptr;
    QConcatenateTablesProxyModel_SetHeaderData_Callback qconcatenatetablesproxymodel_setheaderdata_callback = nullptr;
    QConcatenateTablesProxyModel_ClearItemData_Callback qconcatenatetablesproxymodel_clearitemdata_callback = nullptr;
    QConcatenateTablesProxyModel_SupportedDropActions_Callback qconcatenatetablesproxymodel_supporteddropactions_callback = nullptr;
    QConcatenateTablesProxyModel_SupportedDragActions_Callback qconcatenatetablesproxymodel_supporteddragactions_callback = nullptr;
    QConcatenateTablesProxyModel_InsertRows_Callback qconcatenatetablesproxymodel_insertrows_callback = nullptr;
    QConcatenateTablesProxyModel_InsertColumns_Callback qconcatenatetablesproxymodel_insertcolumns_callback = nullptr;
    QConcatenateTablesProxyModel_RemoveRows_Callback qconcatenatetablesproxymodel_removerows_callback = nullptr;
    QConcatenateTablesProxyModel_RemoveColumns_Callback qconcatenatetablesproxymodel_removecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_MoveRows_Callback qconcatenatetablesproxymodel_moverows_callback = nullptr;
    QConcatenateTablesProxyModel_MoveColumns_Callback qconcatenatetablesproxymodel_movecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_FetchMore_Callback qconcatenatetablesproxymodel_fetchmore_callback = nullptr;
    QConcatenateTablesProxyModel_CanFetchMore_Callback qconcatenatetablesproxymodel_canfetchmore_callback = nullptr;
    QConcatenateTablesProxyModel_Sort_Callback qconcatenatetablesproxymodel_sort_callback = nullptr;
    QConcatenateTablesProxyModel_Buddy_Callback qconcatenatetablesproxymodel_buddy_callback = nullptr;
    QConcatenateTablesProxyModel_Match_Callback qconcatenatetablesproxymodel_match_callback = nullptr;
    QConcatenateTablesProxyModel_RoleNames_Callback qconcatenatetablesproxymodel_rolenames_callback = nullptr;
    QConcatenateTablesProxyModel_MultiData_Callback qconcatenatetablesproxymodel_multidata_callback = nullptr;
    QConcatenateTablesProxyModel_Submit_Callback qconcatenatetablesproxymodel_submit_callback = nullptr;
    QConcatenateTablesProxyModel_Revert_Callback qconcatenatetablesproxymodel_revert_callback = nullptr;
    QConcatenateTablesProxyModel_ResetInternalData_Callback qconcatenatetablesproxymodel_resetinternaldata_callback = nullptr;
    QConcatenateTablesProxyModel_Event_Callback qconcatenatetablesproxymodel_event_callback = nullptr;
    QConcatenateTablesProxyModel_EventFilter_Callback qconcatenatetablesproxymodel_eventfilter_callback = nullptr;
    QConcatenateTablesProxyModel_TimerEvent_Callback qconcatenatetablesproxymodel_timerevent_callback = nullptr;
    QConcatenateTablesProxyModel_ChildEvent_Callback qconcatenatetablesproxymodel_childevent_callback = nullptr;
    QConcatenateTablesProxyModel_CustomEvent_Callback qconcatenatetablesproxymodel_customevent_callback = nullptr;
    QConcatenateTablesProxyModel_ConnectNotify_Callback qconcatenatetablesproxymodel_connectnotify_callback = nullptr;
    QConcatenateTablesProxyModel_DisconnectNotify_Callback qconcatenatetablesproxymodel_disconnectnotify_callback = nullptr;
    QConcatenateTablesProxyModel_CreateIndex_Callback qconcatenatetablesproxymodel_createindex_callback = nullptr;
    QConcatenateTablesProxyModel_EncodeData_Callback qconcatenatetablesproxymodel_encodedata_callback = nullptr;
    QConcatenateTablesProxyModel_DecodeData_Callback qconcatenatetablesproxymodel_decodedata_callback = nullptr;
    QConcatenateTablesProxyModel_BeginInsertRows_Callback qconcatenatetablesproxymodel_begininsertrows_callback = nullptr;
    QConcatenateTablesProxyModel_EndInsertRows_Callback qconcatenatetablesproxymodel_endinsertrows_callback = nullptr;
    QConcatenateTablesProxyModel_BeginRemoveRows_Callback qconcatenatetablesproxymodel_beginremoverows_callback = nullptr;
    QConcatenateTablesProxyModel_EndRemoveRows_Callback qconcatenatetablesproxymodel_endremoverows_callback = nullptr;
    QConcatenateTablesProxyModel_BeginMoveRows_Callback qconcatenatetablesproxymodel_beginmoverows_callback = nullptr;
    QConcatenateTablesProxyModel_EndMoveRows_Callback qconcatenatetablesproxymodel_endmoverows_callback = nullptr;
    QConcatenateTablesProxyModel_BeginInsertColumns_Callback qconcatenatetablesproxymodel_begininsertcolumns_callback = nullptr;
    QConcatenateTablesProxyModel_EndInsertColumns_Callback qconcatenatetablesproxymodel_endinsertcolumns_callback = nullptr;
    QConcatenateTablesProxyModel_BeginRemoveColumns_Callback qconcatenatetablesproxymodel_beginremovecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_EndRemoveColumns_Callback qconcatenatetablesproxymodel_endremovecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_BeginMoveColumns_Callback qconcatenatetablesproxymodel_beginmovecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_EndMoveColumns_Callback qconcatenatetablesproxymodel_endmovecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_BeginResetModel_Callback qconcatenatetablesproxymodel_beginresetmodel_callback = nullptr;
    QConcatenateTablesProxyModel_EndResetModel_Callback qconcatenatetablesproxymodel_endresetmodel_callback = nullptr;
    QConcatenateTablesProxyModel_ChangePersistentIndex_Callback qconcatenatetablesproxymodel_changepersistentindex_callback = nullptr;
    QConcatenateTablesProxyModel_ChangePersistentIndexList_Callback qconcatenatetablesproxymodel_changepersistentindexlist_callback = nullptr;
    QConcatenateTablesProxyModel_PersistentIndexList_Callback qconcatenatetablesproxymodel_persistentindexlist_callback = nullptr;
    QConcatenateTablesProxyModel_Sender_Callback qconcatenatetablesproxymodel_sender_callback = nullptr;
    QConcatenateTablesProxyModel_SenderSignalIndex_Callback qconcatenatetablesproxymodel_sendersignalindex_callback = nullptr;
    QConcatenateTablesProxyModel_Receivers_Callback qconcatenatetablesproxymodel_receivers_callback = nullptr;
    QConcatenateTablesProxyModel_IsSignalConnected_Callback qconcatenatetablesproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qconcatenatetablesproxymodel_metacall_isbase = false;
    mutable bool qconcatenatetablesproxymodel_data_isbase = false;
    mutable bool qconcatenatetablesproxymodel_setdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_itemdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_setitemdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_flags_isbase = false;
    mutable bool qconcatenatetablesproxymodel_index_isbase = false;
    mutable bool qconcatenatetablesproxymodel_parent_isbase = false;
    mutable bool qconcatenatetablesproxymodel_rowcount_isbase = false;
    mutable bool qconcatenatetablesproxymodel_headerdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_columncount_isbase = false;
    mutable bool qconcatenatetablesproxymodel_mimetypes_isbase = false;
    mutable bool qconcatenatetablesproxymodel_mimedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_candropmimedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_dropmimedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_span_isbase = false;
    mutable bool qconcatenatetablesproxymodel_sibling_isbase = false;
    mutable bool qconcatenatetablesproxymodel_haschildren_isbase = false;
    mutable bool qconcatenatetablesproxymodel_setheaderdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_clearitemdata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_supporteddropactions_isbase = false;
    mutable bool qconcatenatetablesproxymodel_supporteddragactions_isbase = false;
    mutable bool qconcatenatetablesproxymodel_insertrows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_insertcolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_removerows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_removecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_moverows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_movecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_fetchmore_isbase = false;
    mutable bool qconcatenatetablesproxymodel_canfetchmore_isbase = false;
    mutable bool qconcatenatetablesproxymodel_sort_isbase = false;
    mutable bool qconcatenatetablesproxymodel_buddy_isbase = false;
    mutable bool qconcatenatetablesproxymodel_match_isbase = false;
    mutable bool qconcatenatetablesproxymodel_rolenames_isbase = false;
    mutable bool qconcatenatetablesproxymodel_multidata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_submit_isbase = false;
    mutable bool qconcatenatetablesproxymodel_revert_isbase = false;
    mutable bool qconcatenatetablesproxymodel_resetinternaldata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_event_isbase = false;
    mutable bool qconcatenatetablesproxymodel_eventfilter_isbase = false;
    mutable bool qconcatenatetablesproxymodel_timerevent_isbase = false;
    mutable bool qconcatenatetablesproxymodel_childevent_isbase = false;
    mutable bool qconcatenatetablesproxymodel_customevent_isbase = false;
    mutable bool qconcatenatetablesproxymodel_connectnotify_isbase = false;
    mutable bool qconcatenatetablesproxymodel_disconnectnotify_isbase = false;
    mutable bool qconcatenatetablesproxymodel_createindex_isbase = false;
    mutable bool qconcatenatetablesproxymodel_encodedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_decodedata_isbase = false;
    mutable bool qconcatenatetablesproxymodel_begininsertrows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endinsertrows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_beginremoverows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endremoverows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_beginmoverows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endmoverows_isbase = false;
    mutable bool qconcatenatetablesproxymodel_begininsertcolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endinsertcolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_beginremovecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endremovecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_beginmovecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endmovecolumns_isbase = false;
    mutable bool qconcatenatetablesproxymodel_beginresetmodel_isbase = false;
    mutable bool qconcatenatetablesproxymodel_endresetmodel_isbase = false;
    mutable bool qconcatenatetablesproxymodel_changepersistentindex_isbase = false;
    mutable bool qconcatenatetablesproxymodel_changepersistentindexlist_isbase = false;
    mutable bool qconcatenatetablesproxymodel_persistentindexlist_isbase = false;
    mutable bool qconcatenatetablesproxymodel_sender_isbase = false;
    mutable bool qconcatenatetablesproxymodel_sendersignalindex_isbase = false;
    mutable bool qconcatenatetablesproxymodel_receivers_isbase = false;
    mutable bool qconcatenatetablesproxymodel_issignalconnected_isbase = false;

  public:
    VirtualQConcatenateTablesProxyModel() : QConcatenateTablesProxyModel(){};
    VirtualQConcatenateTablesProxyModel(QObject* parent) : QConcatenateTablesProxyModel(parent){};

    ~VirtualQConcatenateTablesProxyModel() {
        qconcatenatetablesproxymodel_metacall_callback = nullptr;
        qconcatenatetablesproxymodel_data_callback = nullptr;
        qconcatenatetablesproxymodel_setdata_callback = nullptr;
        qconcatenatetablesproxymodel_itemdata_callback = nullptr;
        qconcatenatetablesproxymodel_setitemdata_callback = nullptr;
        qconcatenatetablesproxymodel_flags_callback = nullptr;
        qconcatenatetablesproxymodel_index_callback = nullptr;
        qconcatenatetablesproxymodel_parent_callback = nullptr;
        qconcatenatetablesproxymodel_rowcount_callback = nullptr;
        qconcatenatetablesproxymodel_headerdata_callback = nullptr;
        qconcatenatetablesproxymodel_columncount_callback = nullptr;
        qconcatenatetablesproxymodel_mimetypes_callback = nullptr;
        qconcatenatetablesproxymodel_mimedata_callback = nullptr;
        qconcatenatetablesproxymodel_candropmimedata_callback = nullptr;
        qconcatenatetablesproxymodel_dropmimedata_callback = nullptr;
        qconcatenatetablesproxymodel_span_callback = nullptr;
        qconcatenatetablesproxymodel_sibling_callback = nullptr;
        qconcatenatetablesproxymodel_haschildren_callback = nullptr;
        qconcatenatetablesproxymodel_setheaderdata_callback = nullptr;
        qconcatenatetablesproxymodel_clearitemdata_callback = nullptr;
        qconcatenatetablesproxymodel_supporteddropactions_callback = nullptr;
        qconcatenatetablesproxymodel_supporteddragactions_callback = nullptr;
        qconcatenatetablesproxymodel_insertrows_callback = nullptr;
        qconcatenatetablesproxymodel_insertcolumns_callback = nullptr;
        qconcatenatetablesproxymodel_removerows_callback = nullptr;
        qconcatenatetablesproxymodel_removecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_moverows_callback = nullptr;
        qconcatenatetablesproxymodel_movecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_fetchmore_callback = nullptr;
        qconcatenatetablesproxymodel_canfetchmore_callback = nullptr;
        qconcatenatetablesproxymodel_sort_callback = nullptr;
        qconcatenatetablesproxymodel_buddy_callback = nullptr;
        qconcatenatetablesproxymodel_match_callback = nullptr;
        qconcatenatetablesproxymodel_rolenames_callback = nullptr;
        qconcatenatetablesproxymodel_multidata_callback = nullptr;
        qconcatenatetablesproxymodel_submit_callback = nullptr;
        qconcatenatetablesproxymodel_revert_callback = nullptr;
        qconcatenatetablesproxymodel_resetinternaldata_callback = nullptr;
        qconcatenatetablesproxymodel_event_callback = nullptr;
        qconcatenatetablesproxymodel_eventfilter_callback = nullptr;
        qconcatenatetablesproxymodel_timerevent_callback = nullptr;
        qconcatenatetablesproxymodel_childevent_callback = nullptr;
        qconcatenatetablesproxymodel_customevent_callback = nullptr;
        qconcatenatetablesproxymodel_connectnotify_callback = nullptr;
        qconcatenatetablesproxymodel_disconnectnotify_callback = nullptr;
        qconcatenatetablesproxymodel_createindex_callback = nullptr;
        qconcatenatetablesproxymodel_encodedata_callback = nullptr;
        qconcatenatetablesproxymodel_decodedata_callback = nullptr;
        qconcatenatetablesproxymodel_begininsertrows_callback = nullptr;
        qconcatenatetablesproxymodel_endinsertrows_callback = nullptr;
        qconcatenatetablesproxymodel_beginremoverows_callback = nullptr;
        qconcatenatetablesproxymodel_endremoverows_callback = nullptr;
        qconcatenatetablesproxymodel_beginmoverows_callback = nullptr;
        qconcatenatetablesproxymodel_endmoverows_callback = nullptr;
        qconcatenatetablesproxymodel_begininsertcolumns_callback = nullptr;
        qconcatenatetablesproxymodel_endinsertcolumns_callback = nullptr;
        qconcatenatetablesproxymodel_beginremovecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_endremovecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_beginmovecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_endmovecolumns_callback = nullptr;
        qconcatenatetablesproxymodel_beginresetmodel_callback = nullptr;
        qconcatenatetablesproxymodel_endresetmodel_callback = nullptr;
        qconcatenatetablesproxymodel_changepersistentindex_callback = nullptr;
        qconcatenatetablesproxymodel_changepersistentindexlist_callback = nullptr;
        qconcatenatetablesproxymodel_persistentindexlist_callback = nullptr;
        qconcatenatetablesproxymodel_sender_callback = nullptr;
        qconcatenatetablesproxymodel_sendersignalindex_callback = nullptr;
        qconcatenatetablesproxymodel_receivers_callback = nullptr;
        qconcatenatetablesproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQConcatenateTablesProxyModel_Metacall_Callback(QConcatenateTablesProxyModel_Metacall_Callback cb) { qconcatenatetablesproxymodel_metacall_callback = cb; }
    void setQConcatenateTablesProxyModel_Data_Callback(QConcatenateTablesProxyModel_Data_Callback cb) { qconcatenatetablesproxymodel_data_callback = cb; }
    void setQConcatenateTablesProxyModel_SetData_Callback(QConcatenateTablesProxyModel_SetData_Callback cb) { qconcatenatetablesproxymodel_setdata_callback = cb; }
    void setQConcatenateTablesProxyModel_ItemData_Callback(QConcatenateTablesProxyModel_ItemData_Callback cb) { qconcatenatetablesproxymodel_itemdata_callback = cb; }
    void setQConcatenateTablesProxyModel_SetItemData_Callback(QConcatenateTablesProxyModel_SetItemData_Callback cb) { qconcatenatetablesproxymodel_setitemdata_callback = cb; }
    void setQConcatenateTablesProxyModel_Flags_Callback(QConcatenateTablesProxyModel_Flags_Callback cb) { qconcatenatetablesproxymodel_flags_callback = cb; }
    void setQConcatenateTablesProxyModel_Index_Callback(QConcatenateTablesProxyModel_Index_Callback cb) { qconcatenatetablesproxymodel_index_callback = cb; }
    void setQConcatenateTablesProxyModel_Parent_Callback(QConcatenateTablesProxyModel_Parent_Callback cb) { qconcatenatetablesproxymodel_parent_callback = cb; }
    void setQConcatenateTablesProxyModel_RowCount_Callback(QConcatenateTablesProxyModel_RowCount_Callback cb) { qconcatenatetablesproxymodel_rowcount_callback = cb; }
    void setQConcatenateTablesProxyModel_HeaderData_Callback(QConcatenateTablesProxyModel_HeaderData_Callback cb) { qconcatenatetablesproxymodel_headerdata_callback = cb; }
    void setQConcatenateTablesProxyModel_ColumnCount_Callback(QConcatenateTablesProxyModel_ColumnCount_Callback cb) { qconcatenatetablesproxymodel_columncount_callback = cb; }
    void setQConcatenateTablesProxyModel_MimeTypes_Callback(QConcatenateTablesProxyModel_MimeTypes_Callback cb) { qconcatenatetablesproxymodel_mimetypes_callback = cb; }
    void setQConcatenateTablesProxyModel_MimeData_Callback(QConcatenateTablesProxyModel_MimeData_Callback cb) { qconcatenatetablesproxymodel_mimedata_callback = cb; }
    void setQConcatenateTablesProxyModel_CanDropMimeData_Callback(QConcatenateTablesProxyModel_CanDropMimeData_Callback cb) { qconcatenatetablesproxymodel_candropmimedata_callback = cb; }
    void setQConcatenateTablesProxyModel_DropMimeData_Callback(QConcatenateTablesProxyModel_DropMimeData_Callback cb) { qconcatenatetablesproxymodel_dropmimedata_callback = cb; }
    void setQConcatenateTablesProxyModel_Span_Callback(QConcatenateTablesProxyModel_Span_Callback cb) { qconcatenatetablesproxymodel_span_callback = cb; }
    void setQConcatenateTablesProxyModel_Sibling_Callback(QConcatenateTablesProxyModel_Sibling_Callback cb) { qconcatenatetablesproxymodel_sibling_callback = cb; }
    void setQConcatenateTablesProxyModel_HasChildren_Callback(QConcatenateTablesProxyModel_HasChildren_Callback cb) { qconcatenatetablesproxymodel_haschildren_callback = cb; }
    void setQConcatenateTablesProxyModel_SetHeaderData_Callback(QConcatenateTablesProxyModel_SetHeaderData_Callback cb) { qconcatenatetablesproxymodel_setheaderdata_callback = cb; }
    void setQConcatenateTablesProxyModel_ClearItemData_Callback(QConcatenateTablesProxyModel_ClearItemData_Callback cb) { qconcatenatetablesproxymodel_clearitemdata_callback = cb; }
    void setQConcatenateTablesProxyModel_SupportedDropActions_Callback(QConcatenateTablesProxyModel_SupportedDropActions_Callback cb) { qconcatenatetablesproxymodel_supporteddropactions_callback = cb; }
    void setQConcatenateTablesProxyModel_SupportedDragActions_Callback(QConcatenateTablesProxyModel_SupportedDragActions_Callback cb) { qconcatenatetablesproxymodel_supporteddragactions_callback = cb; }
    void setQConcatenateTablesProxyModel_InsertRows_Callback(QConcatenateTablesProxyModel_InsertRows_Callback cb) { qconcatenatetablesproxymodel_insertrows_callback = cb; }
    void setQConcatenateTablesProxyModel_InsertColumns_Callback(QConcatenateTablesProxyModel_InsertColumns_Callback cb) { qconcatenatetablesproxymodel_insertcolumns_callback = cb; }
    void setQConcatenateTablesProxyModel_RemoveRows_Callback(QConcatenateTablesProxyModel_RemoveRows_Callback cb) { qconcatenatetablesproxymodel_removerows_callback = cb; }
    void setQConcatenateTablesProxyModel_RemoveColumns_Callback(QConcatenateTablesProxyModel_RemoveColumns_Callback cb) { qconcatenatetablesproxymodel_removecolumns_callback = cb; }
    void setQConcatenateTablesProxyModel_MoveRows_Callback(QConcatenateTablesProxyModel_MoveRows_Callback cb) { qconcatenatetablesproxymodel_moverows_callback = cb; }
    void setQConcatenateTablesProxyModel_MoveColumns_Callback(QConcatenateTablesProxyModel_MoveColumns_Callback cb) { qconcatenatetablesproxymodel_movecolumns_callback = cb; }
    void setQConcatenateTablesProxyModel_FetchMore_Callback(QConcatenateTablesProxyModel_FetchMore_Callback cb) { qconcatenatetablesproxymodel_fetchmore_callback = cb; }
    void setQConcatenateTablesProxyModel_CanFetchMore_Callback(QConcatenateTablesProxyModel_CanFetchMore_Callback cb) { qconcatenatetablesproxymodel_canfetchmore_callback = cb; }
    void setQConcatenateTablesProxyModel_Sort_Callback(QConcatenateTablesProxyModel_Sort_Callback cb) { qconcatenatetablesproxymodel_sort_callback = cb; }
    void setQConcatenateTablesProxyModel_Buddy_Callback(QConcatenateTablesProxyModel_Buddy_Callback cb) { qconcatenatetablesproxymodel_buddy_callback = cb; }
    void setQConcatenateTablesProxyModel_Match_Callback(QConcatenateTablesProxyModel_Match_Callback cb) { qconcatenatetablesproxymodel_match_callback = cb; }
    void setQConcatenateTablesProxyModel_RoleNames_Callback(QConcatenateTablesProxyModel_RoleNames_Callback cb) { qconcatenatetablesproxymodel_rolenames_callback = cb; }
    void setQConcatenateTablesProxyModel_MultiData_Callback(QConcatenateTablesProxyModel_MultiData_Callback cb) { qconcatenatetablesproxymodel_multidata_callback = cb; }
    void setQConcatenateTablesProxyModel_Submit_Callback(QConcatenateTablesProxyModel_Submit_Callback cb) { qconcatenatetablesproxymodel_submit_callback = cb; }
    void setQConcatenateTablesProxyModel_Revert_Callback(QConcatenateTablesProxyModel_Revert_Callback cb) { qconcatenatetablesproxymodel_revert_callback = cb; }
    void setQConcatenateTablesProxyModel_ResetInternalData_Callback(QConcatenateTablesProxyModel_ResetInternalData_Callback cb) { qconcatenatetablesproxymodel_resetinternaldata_callback = cb; }
    void setQConcatenateTablesProxyModel_Event_Callback(QConcatenateTablesProxyModel_Event_Callback cb) { qconcatenatetablesproxymodel_event_callback = cb; }
    void setQConcatenateTablesProxyModel_EventFilter_Callback(QConcatenateTablesProxyModel_EventFilter_Callback cb) { qconcatenatetablesproxymodel_eventfilter_callback = cb; }
    void setQConcatenateTablesProxyModel_TimerEvent_Callback(QConcatenateTablesProxyModel_TimerEvent_Callback cb) { qconcatenatetablesproxymodel_timerevent_callback = cb; }
    void setQConcatenateTablesProxyModel_ChildEvent_Callback(QConcatenateTablesProxyModel_ChildEvent_Callback cb) { qconcatenatetablesproxymodel_childevent_callback = cb; }
    void setQConcatenateTablesProxyModel_CustomEvent_Callback(QConcatenateTablesProxyModel_CustomEvent_Callback cb) { qconcatenatetablesproxymodel_customevent_callback = cb; }
    void setQConcatenateTablesProxyModel_ConnectNotify_Callback(QConcatenateTablesProxyModel_ConnectNotify_Callback cb) { qconcatenatetablesproxymodel_connectnotify_callback = cb; }
    void setQConcatenateTablesProxyModel_DisconnectNotify_Callback(QConcatenateTablesProxyModel_DisconnectNotify_Callback cb) { qconcatenatetablesproxymodel_disconnectnotify_callback = cb; }
    void setQConcatenateTablesProxyModel_CreateIndex_Callback(QConcatenateTablesProxyModel_CreateIndex_Callback cb) { qconcatenatetablesproxymodel_createindex_callback = cb; }
    void setQConcatenateTablesProxyModel_EncodeData_Callback(QConcatenateTablesProxyModel_EncodeData_Callback cb) { qconcatenatetablesproxymodel_encodedata_callback = cb; }
    void setQConcatenateTablesProxyModel_DecodeData_Callback(QConcatenateTablesProxyModel_DecodeData_Callback cb) { qconcatenatetablesproxymodel_decodedata_callback = cb; }
    void setQConcatenateTablesProxyModel_BeginInsertRows_Callback(QConcatenateTablesProxyModel_BeginInsertRows_Callback cb) { qconcatenatetablesproxymodel_begininsertrows_callback = cb; }
    void setQConcatenateTablesProxyModel_EndInsertRows_Callback(QConcatenateTablesProxyModel_EndInsertRows_Callback cb) { qconcatenatetablesproxymodel_endinsertrows_callback = cb; }
    void setQConcatenateTablesProxyModel_BeginRemoveRows_Callback(QConcatenateTablesProxyModel_BeginRemoveRows_Callback cb) { qconcatenatetablesproxymodel_beginremoverows_callback = cb; }
    void setQConcatenateTablesProxyModel_EndRemoveRows_Callback(QConcatenateTablesProxyModel_EndRemoveRows_Callback cb) { qconcatenatetablesproxymodel_endremoverows_callback = cb; }
    void setQConcatenateTablesProxyModel_BeginMoveRows_Callback(QConcatenateTablesProxyModel_BeginMoveRows_Callback cb) { qconcatenatetablesproxymodel_beginmoverows_callback = cb; }
    void setQConcatenateTablesProxyModel_EndMoveRows_Callback(QConcatenateTablesProxyModel_EndMoveRows_Callback cb) { qconcatenatetablesproxymodel_endmoverows_callback = cb; }
    void setQConcatenateTablesProxyModel_BeginInsertColumns_Callback(QConcatenateTablesProxyModel_BeginInsertColumns_Callback cb) { qconcatenatetablesproxymodel_begininsertcolumns_callback = cb; }
    void setQConcatenateTablesProxyModel_EndInsertColumns_Callback(QConcatenateTablesProxyModel_EndInsertColumns_Callback cb) { qconcatenatetablesproxymodel_endinsertcolumns_callback = cb; }
    void setQConcatenateTablesProxyModel_BeginRemoveColumns_Callback(QConcatenateTablesProxyModel_BeginRemoveColumns_Callback cb) { qconcatenatetablesproxymodel_beginremovecolumns_callback = cb; }
    void setQConcatenateTablesProxyModel_EndRemoveColumns_Callback(QConcatenateTablesProxyModel_EndRemoveColumns_Callback cb) { qconcatenatetablesproxymodel_endremovecolumns_callback = cb; }
    void setQConcatenateTablesProxyModel_BeginMoveColumns_Callback(QConcatenateTablesProxyModel_BeginMoveColumns_Callback cb) { qconcatenatetablesproxymodel_beginmovecolumns_callback = cb; }
    void setQConcatenateTablesProxyModel_EndMoveColumns_Callback(QConcatenateTablesProxyModel_EndMoveColumns_Callback cb) { qconcatenatetablesproxymodel_endmovecolumns_callback = cb; }
    void setQConcatenateTablesProxyModel_BeginResetModel_Callback(QConcatenateTablesProxyModel_BeginResetModel_Callback cb) { qconcatenatetablesproxymodel_beginresetmodel_callback = cb; }
    void setQConcatenateTablesProxyModel_EndResetModel_Callback(QConcatenateTablesProxyModel_EndResetModel_Callback cb) { qconcatenatetablesproxymodel_endresetmodel_callback = cb; }
    void setQConcatenateTablesProxyModel_ChangePersistentIndex_Callback(QConcatenateTablesProxyModel_ChangePersistentIndex_Callback cb) { qconcatenatetablesproxymodel_changepersistentindex_callback = cb; }
    void setQConcatenateTablesProxyModel_ChangePersistentIndexList_Callback(QConcatenateTablesProxyModel_ChangePersistentIndexList_Callback cb) { qconcatenatetablesproxymodel_changepersistentindexlist_callback = cb; }
    void setQConcatenateTablesProxyModel_PersistentIndexList_Callback(QConcatenateTablesProxyModel_PersistentIndexList_Callback cb) { qconcatenatetablesproxymodel_persistentindexlist_callback = cb; }
    void setQConcatenateTablesProxyModel_Sender_Callback(QConcatenateTablesProxyModel_Sender_Callback cb) { qconcatenatetablesproxymodel_sender_callback = cb; }
    void setQConcatenateTablesProxyModel_SenderSignalIndex_Callback(QConcatenateTablesProxyModel_SenderSignalIndex_Callback cb) { qconcatenatetablesproxymodel_sendersignalindex_callback = cb; }
    void setQConcatenateTablesProxyModel_Receivers_Callback(QConcatenateTablesProxyModel_Receivers_Callback cb) { qconcatenatetablesproxymodel_receivers_callback = cb; }
    void setQConcatenateTablesProxyModel_IsSignalConnected_Callback(QConcatenateTablesProxyModel_IsSignalConnected_Callback cb) { qconcatenatetablesproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    void setQConcatenateTablesProxyModel_Metacall_IsBase(bool value) const { qconcatenatetablesproxymodel_metacall_isbase = value; }
    void setQConcatenateTablesProxyModel_Data_IsBase(bool value) const { qconcatenatetablesproxymodel_data_isbase = value; }
    void setQConcatenateTablesProxyModel_SetData_IsBase(bool value) const { qconcatenatetablesproxymodel_setdata_isbase = value; }
    void setQConcatenateTablesProxyModel_ItemData_IsBase(bool value) const { qconcatenatetablesproxymodel_itemdata_isbase = value; }
    void setQConcatenateTablesProxyModel_SetItemData_IsBase(bool value) const { qconcatenatetablesproxymodel_setitemdata_isbase = value; }
    void setQConcatenateTablesProxyModel_Flags_IsBase(bool value) const { qconcatenatetablesproxymodel_flags_isbase = value; }
    void setQConcatenateTablesProxyModel_Index_IsBase(bool value) const { qconcatenatetablesproxymodel_index_isbase = value; }
    void setQConcatenateTablesProxyModel_Parent_IsBase(bool value) const { qconcatenatetablesproxymodel_parent_isbase = value; }
    void setQConcatenateTablesProxyModel_RowCount_IsBase(bool value) const { qconcatenatetablesproxymodel_rowcount_isbase = value; }
    void setQConcatenateTablesProxyModel_HeaderData_IsBase(bool value) const { qconcatenatetablesproxymodel_headerdata_isbase = value; }
    void setQConcatenateTablesProxyModel_ColumnCount_IsBase(bool value) const { qconcatenatetablesproxymodel_columncount_isbase = value; }
    void setQConcatenateTablesProxyModel_MimeTypes_IsBase(bool value) const { qconcatenatetablesproxymodel_mimetypes_isbase = value; }
    void setQConcatenateTablesProxyModel_MimeData_IsBase(bool value) const { qconcatenatetablesproxymodel_mimedata_isbase = value; }
    void setQConcatenateTablesProxyModel_CanDropMimeData_IsBase(bool value) const { qconcatenatetablesproxymodel_candropmimedata_isbase = value; }
    void setQConcatenateTablesProxyModel_DropMimeData_IsBase(bool value) const { qconcatenatetablesproxymodel_dropmimedata_isbase = value; }
    void setQConcatenateTablesProxyModel_Span_IsBase(bool value) const { qconcatenatetablesproxymodel_span_isbase = value; }
    void setQConcatenateTablesProxyModel_Sibling_IsBase(bool value) const { qconcatenatetablesproxymodel_sibling_isbase = value; }
    void setQConcatenateTablesProxyModel_HasChildren_IsBase(bool value) const { qconcatenatetablesproxymodel_haschildren_isbase = value; }
    void setQConcatenateTablesProxyModel_SetHeaderData_IsBase(bool value) const { qconcatenatetablesproxymodel_setheaderdata_isbase = value; }
    void setQConcatenateTablesProxyModel_ClearItemData_IsBase(bool value) const { qconcatenatetablesproxymodel_clearitemdata_isbase = value; }
    void setQConcatenateTablesProxyModel_SupportedDropActions_IsBase(bool value) const { qconcatenatetablesproxymodel_supporteddropactions_isbase = value; }
    void setQConcatenateTablesProxyModel_SupportedDragActions_IsBase(bool value) const { qconcatenatetablesproxymodel_supporteddragactions_isbase = value; }
    void setQConcatenateTablesProxyModel_InsertRows_IsBase(bool value) const { qconcatenatetablesproxymodel_insertrows_isbase = value; }
    void setQConcatenateTablesProxyModel_InsertColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_insertcolumns_isbase = value; }
    void setQConcatenateTablesProxyModel_RemoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_removerows_isbase = value; }
    void setQConcatenateTablesProxyModel_RemoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_removecolumns_isbase = value; }
    void setQConcatenateTablesProxyModel_MoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_moverows_isbase = value; }
    void setQConcatenateTablesProxyModel_MoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_movecolumns_isbase = value; }
    void setQConcatenateTablesProxyModel_FetchMore_IsBase(bool value) const { qconcatenatetablesproxymodel_fetchmore_isbase = value; }
    void setQConcatenateTablesProxyModel_CanFetchMore_IsBase(bool value) const { qconcatenatetablesproxymodel_canfetchmore_isbase = value; }
    void setQConcatenateTablesProxyModel_Sort_IsBase(bool value) const { qconcatenatetablesproxymodel_sort_isbase = value; }
    void setQConcatenateTablesProxyModel_Buddy_IsBase(bool value) const { qconcatenatetablesproxymodel_buddy_isbase = value; }
    void setQConcatenateTablesProxyModel_Match_IsBase(bool value) const { qconcatenatetablesproxymodel_match_isbase = value; }
    void setQConcatenateTablesProxyModel_RoleNames_IsBase(bool value) const { qconcatenatetablesproxymodel_rolenames_isbase = value; }
    void setQConcatenateTablesProxyModel_MultiData_IsBase(bool value) const { qconcatenatetablesproxymodel_multidata_isbase = value; }
    void setQConcatenateTablesProxyModel_Submit_IsBase(bool value) const { qconcatenatetablesproxymodel_submit_isbase = value; }
    void setQConcatenateTablesProxyModel_Revert_IsBase(bool value) const { qconcatenatetablesproxymodel_revert_isbase = value; }
    void setQConcatenateTablesProxyModel_ResetInternalData_IsBase(bool value) const { qconcatenatetablesproxymodel_resetinternaldata_isbase = value; }
    void setQConcatenateTablesProxyModel_Event_IsBase(bool value) const { qconcatenatetablesproxymodel_event_isbase = value; }
    void setQConcatenateTablesProxyModel_EventFilter_IsBase(bool value) const { qconcatenatetablesproxymodel_eventfilter_isbase = value; }
    void setQConcatenateTablesProxyModel_TimerEvent_IsBase(bool value) const { qconcatenatetablesproxymodel_timerevent_isbase = value; }
    void setQConcatenateTablesProxyModel_ChildEvent_IsBase(bool value) const { qconcatenatetablesproxymodel_childevent_isbase = value; }
    void setQConcatenateTablesProxyModel_CustomEvent_IsBase(bool value) const { qconcatenatetablesproxymodel_customevent_isbase = value; }
    void setQConcatenateTablesProxyModel_ConnectNotify_IsBase(bool value) const { qconcatenatetablesproxymodel_connectnotify_isbase = value; }
    void setQConcatenateTablesProxyModel_DisconnectNotify_IsBase(bool value) const { qconcatenatetablesproxymodel_disconnectnotify_isbase = value; }
    void setQConcatenateTablesProxyModel_CreateIndex_IsBase(bool value) const { qconcatenatetablesproxymodel_createindex_isbase = value; }
    void setQConcatenateTablesProxyModel_EncodeData_IsBase(bool value) const { qconcatenatetablesproxymodel_encodedata_isbase = value; }
    void setQConcatenateTablesProxyModel_DecodeData_IsBase(bool value) const { qconcatenatetablesproxymodel_decodedata_isbase = value; }
    void setQConcatenateTablesProxyModel_BeginInsertRows_IsBase(bool value) const { qconcatenatetablesproxymodel_begininsertrows_isbase = value; }
    void setQConcatenateTablesProxyModel_EndInsertRows_IsBase(bool value) const { qconcatenatetablesproxymodel_endinsertrows_isbase = value; }
    void setQConcatenateTablesProxyModel_BeginRemoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_beginremoverows_isbase = value; }
    void setQConcatenateTablesProxyModel_EndRemoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_endremoverows_isbase = value; }
    void setQConcatenateTablesProxyModel_BeginMoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_beginmoverows_isbase = value; }
    void setQConcatenateTablesProxyModel_EndMoveRows_IsBase(bool value) const { qconcatenatetablesproxymodel_endmoverows_isbase = value; }
    void setQConcatenateTablesProxyModel_BeginInsertColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_begininsertcolumns_isbase = value; }
    void setQConcatenateTablesProxyModel_EndInsertColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_endinsertcolumns_isbase = value; }
    void setQConcatenateTablesProxyModel_BeginRemoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_beginremovecolumns_isbase = value; }
    void setQConcatenateTablesProxyModel_EndRemoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_endremovecolumns_isbase = value; }
    void setQConcatenateTablesProxyModel_BeginMoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_beginmovecolumns_isbase = value; }
    void setQConcatenateTablesProxyModel_EndMoveColumns_IsBase(bool value) const { qconcatenatetablesproxymodel_endmovecolumns_isbase = value; }
    void setQConcatenateTablesProxyModel_BeginResetModel_IsBase(bool value) const { qconcatenatetablesproxymodel_beginresetmodel_isbase = value; }
    void setQConcatenateTablesProxyModel_EndResetModel_IsBase(bool value) const { qconcatenatetablesproxymodel_endresetmodel_isbase = value; }
    void setQConcatenateTablesProxyModel_ChangePersistentIndex_IsBase(bool value) const { qconcatenatetablesproxymodel_changepersistentindex_isbase = value; }
    void setQConcatenateTablesProxyModel_ChangePersistentIndexList_IsBase(bool value) const { qconcatenatetablesproxymodel_changepersistentindexlist_isbase = value; }
    void setQConcatenateTablesProxyModel_PersistentIndexList_IsBase(bool value) const { qconcatenatetablesproxymodel_persistentindexlist_isbase = value; }
    void setQConcatenateTablesProxyModel_Sender_IsBase(bool value) const { qconcatenatetablesproxymodel_sender_isbase = value; }
    void setQConcatenateTablesProxyModel_SenderSignalIndex_IsBase(bool value) const { qconcatenatetablesproxymodel_sendersignalindex_isbase = value; }
    void setQConcatenateTablesProxyModel_Receivers_IsBase(bool value) const { qconcatenatetablesproxymodel_receivers_isbase = value; }
    void setQConcatenateTablesProxyModel_IsSignalConnected_IsBase(bool value) const { qconcatenatetablesproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qconcatenatetablesproxymodel_metacall_isbase) {
            qconcatenatetablesproxymodel_metacall_isbase = false;
            return QConcatenateTablesProxyModel::qt_metacall(param1, param2, param3);
        } else if (qconcatenatetablesproxymodel_metacall_callback != nullptr) {
            return qconcatenatetablesproxymodel_metacall_callback(this, param1, param2, param3);
        } else {
            return QConcatenateTablesProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qconcatenatetablesproxymodel_data_isbase) {
            qconcatenatetablesproxymodel_data_isbase = false;
            return QConcatenateTablesProxyModel::data(index, role);
        } else if (qconcatenatetablesproxymodel_data_callback != nullptr) {
            return qconcatenatetablesproxymodel_data_callback(this, index, role);
        } else {
            return QConcatenateTablesProxyModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qconcatenatetablesproxymodel_setdata_isbase) {
            qconcatenatetablesproxymodel_setdata_isbase = false;
            return QConcatenateTablesProxyModel::setData(index, value, role);
        } else if (qconcatenatetablesproxymodel_setdata_callback != nullptr) {
            return qconcatenatetablesproxymodel_setdata_callback(this, index, value, role);
        } else {
            return QConcatenateTablesProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& proxyIndex) const override {
        if (qconcatenatetablesproxymodel_itemdata_isbase) {
            qconcatenatetablesproxymodel_itemdata_isbase = false;
            return QConcatenateTablesProxyModel::itemData(proxyIndex);
        } else if (qconcatenatetablesproxymodel_itemdata_callback != nullptr) {
            return qconcatenatetablesproxymodel_itemdata_callback(this, proxyIndex);
        } else {
            return QConcatenateTablesProxyModel::itemData(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qconcatenatetablesproxymodel_setitemdata_isbase) {
            qconcatenatetablesproxymodel_setitemdata_isbase = false;
            return QConcatenateTablesProxyModel::setItemData(index, roles);
        } else if (qconcatenatetablesproxymodel_setitemdata_callback != nullptr) {
            return qconcatenatetablesproxymodel_setitemdata_callback(this, index, roles);
        } else {
            return QConcatenateTablesProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_flags_isbase) {
            qconcatenatetablesproxymodel_flags_isbase = false;
            return QConcatenateTablesProxyModel::flags(index);
        } else if (qconcatenatetablesproxymodel_flags_callback != nullptr) {
            return qconcatenatetablesproxymodel_flags_callback(this, index);
        } else {
            return QConcatenateTablesProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_index_isbase) {
            qconcatenatetablesproxymodel_index_isbase = false;
            return QConcatenateTablesProxyModel::index(row, column, parent);
        } else if (qconcatenatetablesproxymodel_index_callback != nullptr) {
            return qconcatenatetablesproxymodel_index_callback(this, row, column, parent);
        } else {
            return QConcatenateTablesProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_parent_isbase) {
            qconcatenatetablesproxymodel_parent_isbase = false;
            return QConcatenateTablesProxyModel::parent(index);
        } else if (qconcatenatetablesproxymodel_parent_callback != nullptr) {
            return qconcatenatetablesproxymodel_parent_callback(this, index);
        } else {
            return QConcatenateTablesProxyModel::parent(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_rowcount_isbase) {
            qconcatenatetablesproxymodel_rowcount_isbase = false;
            return QConcatenateTablesProxyModel::rowCount(parent);
        } else if (qconcatenatetablesproxymodel_rowcount_callback != nullptr) {
            return qconcatenatetablesproxymodel_rowcount_callback(this, parent);
        } else {
            return QConcatenateTablesProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qconcatenatetablesproxymodel_headerdata_isbase) {
            qconcatenatetablesproxymodel_headerdata_isbase = false;
            return QConcatenateTablesProxyModel::headerData(section, orientation, role);
        } else if (qconcatenatetablesproxymodel_headerdata_callback != nullptr) {
            return qconcatenatetablesproxymodel_headerdata_callback(this, section, orientation, role);
        } else {
            return QConcatenateTablesProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_columncount_isbase) {
            qconcatenatetablesproxymodel_columncount_isbase = false;
            return QConcatenateTablesProxyModel::columnCount(parent);
        } else if (qconcatenatetablesproxymodel_columncount_callback != nullptr) {
            return qconcatenatetablesproxymodel_columncount_callback(this, parent);
        } else {
            return QConcatenateTablesProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qconcatenatetablesproxymodel_mimetypes_isbase) {
            qconcatenatetablesproxymodel_mimetypes_isbase = false;
            return QConcatenateTablesProxyModel::mimeTypes();
        } else if (qconcatenatetablesproxymodel_mimetypes_callback != nullptr) {
            return qconcatenatetablesproxymodel_mimetypes_callback();
        } else {
            return QConcatenateTablesProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
        if (qconcatenatetablesproxymodel_mimedata_isbase) {
            qconcatenatetablesproxymodel_mimedata_isbase = false;
            return QConcatenateTablesProxyModel::mimeData(indexes);
        } else if (qconcatenatetablesproxymodel_mimedata_callback != nullptr) {
            return qconcatenatetablesproxymodel_mimedata_callback(this, indexes);
        } else {
            return QConcatenateTablesProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_candropmimedata_isbase) {
            qconcatenatetablesproxymodel_candropmimedata_isbase = false;
            return QConcatenateTablesProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (qconcatenatetablesproxymodel_candropmimedata_callback != nullptr) {
            return qconcatenatetablesproxymodel_candropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QConcatenateTablesProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_dropmimedata_isbase) {
            qconcatenatetablesproxymodel_dropmimedata_isbase = false;
            return QConcatenateTablesProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (qconcatenatetablesproxymodel_dropmimedata_callback != nullptr) {
            return qconcatenatetablesproxymodel_dropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QConcatenateTablesProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_span_isbase) {
            qconcatenatetablesproxymodel_span_isbase = false;
            return QConcatenateTablesProxyModel::span(index);
        } else if (qconcatenatetablesproxymodel_span_callback != nullptr) {
            return qconcatenatetablesproxymodel_span_callback(this, index);
        } else {
            return QConcatenateTablesProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qconcatenatetablesproxymodel_sibling_isbase) {
            qconcatenatetablesproxymodel_sibling_isbase = false;
            return QConcatenateTablesProxyModel::sibling(row, column, idx);
        } else if (qconcatenatetablesproxymodel_sibling_callback != nullptr) {
            return qconcatenatetablesproxymodel_sibling_callback(this, row, column, idx);
        } else {
            return QConcatenateTablesProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_haschildren_isbase) {
            qconcatenatetablesproxymodel_haschildren_isbase = false;
            return QConcatenateTablesProxyModel::hasChildren(parent);
        } else if (qconcatenatetablesproxymodel_haschildren_callback != nullptr) {
            return qconcatenatetablesproxymodel_haschildren_callback(this, parent);
        } else {
            return QConcatenateTablesProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qconcatenatetablesproxymodel_setheaderdata_isbase) {
            qconcatenatetablesproxymodel_setheaderdata_isbase = false;
            return QConcatenateTablesProxyModel::setHeaderData(section, orientation, value, role);
        } else if (qconcatenatetablesproxymodel_setheaderdata_callback != nullptr) {
            return qconcatenatetablesproxymodel_setheaderdata_callback(this, section, orientation, value, role);
        } else {
            return QConcatenateTablesProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qconcatenatetablesproxymodel_clearitemdata_isbase) {
            qconcatenatetablesproxymodel_clearitemdata_isbase = false;
            return QConcatenateTablesProxyModel::clearItemData(index);
        } else if (qconcatenatetablesproxymodel_clearitemdata_callback != nullptr) {
            return qconcatenatetablesproxymodel_clearitemdata_callback(this, index);
        } else {
            return QConcatenateTablesProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qconcatenatetablesproxymodel_supporteddropactions_isbase) {
            qconcatenatetablesproxymodel_supporteddropactions_isbase = false;
            return QConcatenateTablesProxyModel::supportedDropActions();
        } else if (qconcatenatetablesproxymodel_supporteddropactions_callback != nullptr) {
            return qconcatenatetablesproxymodel_supporteddropactions_callback();
        } else {
            return QConcatenateTablesProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qconcatenatetablesproxymodel_supporteddragactions_isbase) {
            qconcatenatetablesproxymodel_supporteddragactions_isbase = false;
            return QConcatenateTablesProxyModel::supportedDragActions();
        } else if (qconcatenatetablesproxymodel_supporteddragactions_callback != nullptr) {
            return qconcatenatetablesproxymodel_supporteddragactions_callback();
        } else {
            return QConcatenateTablesProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_insertrows_isbase) {
            qconcatenatetablesproxymodel_insertrows_isbase = false;
            return QConcatenateTablesProxyModel::insertRows(row, count, parent);
        } else if (qconcatenatetablesproxymodel_insertrows_callback != nullptr) {
            return qconcatenatetablesproxymodel_insertrows_callback(this, row, count, parent);
        } else {
            return QConcatenateTablesProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_insertcolumns_isbase) {
            qconcatenatetablesproxymodel_insertcolumns_isbase = false;
            return QConcatenateTablesProxyModel::insertColumns(column, count, parent);
        } else if (qconcatenatetablesproxymodel_insertcolumns_callback != nullptr) {
            return qconcatenatetablesproxymodel_insertcolumns_callback(this, column, count, parent);
        } else {
            return QConcatenateTablesProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_removerows_isbase) {
            qconcatenatetablesproxymodel_removerows_isbase = false;
            return QConcatenateTablesProxyModel::removeRows(row, count, parent);
        } else if (qconcatenatetablesproxymodel_removerows_callback != nullptr) {
            return qconcatenatetablesproxymodel_removerows_callback(this, row, count, parent);
        } else {
            return QConcatenateTablesProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_removecolumns_isbase) {
            qconcatenatetablesproxymodel_removecolumns_isbase = false;
            return QConcatenateTablesProxyModel::removeColumns(column, count, parent);
        } else if (qconcatenatetablesproxymodel_removecolumns_callback != nullptr) {
            return qconcatenatetablesproxymodel_removecolumns_callback(this, column, count, parent);
        } else {
            return QConcatenateTablesProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qconcatenatetablesproxymodel_moverows_isbase) {
            qconcatenatetablesproxymodel_moverows_isbase = false;
            return QConcatenateTablesProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qconcatenatetablesproxymodel_moverows_callback != nullptr) {
            return qconcatenatetablesproxymodel_moverows_callback(this, sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else {
            return QConcatenateTablesProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qconcatenatetablesproxymodel_movecolumns_isbase) {
            qconcatenatetablesproxymodel_movecolumns_isbase = false;
            return QConcatenateTablesProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qconcatenatetablesproxymodel_movecolumns_callback != nullptr) {
            return qconcatenatetablesproxymodel_movecolumns_callback(this, sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else {
            return QConcatenateTablesProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_fetchmore_isbase) {
            qconcatenatetablesproxymodel_fetchmore_isbase = false;
            QConcatenateTablesProxyModel::fetchMore(parent);
        } else if (qconcatenatetablesproxymodel_fetchmore_callback != nullptr) {
            qconcatenatetablesproxymodel_fetchmore_callback(this, parent);
        } else {
            QConcatenateTablesProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_canfetchmore_isbase) {
            qconcatenatetablesproxymodel_canfetchmore_isbase = false;
            return QConcatenateTablesProxyModel::canFetchMore(parent);
        } else if (qconcatenatetablesproxymodel_canfetchmore_callback != nullptr) {
            return qconcatenatetablesproxymodel_canfetchmore_callback(this, parent);
        } else {
            return QConcatenateTablesProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qconcatenatetablesproxymodel_sort_isbase) {
            qconcatenatetablesproxymodel_sort_isbase = false;
            QConcatenateTablesProxyModel::sort(column, order);
        } else if (qconcatenatetablesproxymodel_sort_callback != nullptr) {
            qconcatenatetablesproxymodel_sort_callback(this, column, order);
        } else {
            QConcatenateTablesProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_buddy_isbase) {
            qconcatenatetablesproxymodel_buddy_isbase = false;
            return QConcatenateTablesProxyModel::buddy(index);
        } else if (qconcatenatetablesproxymodel_buddy_callback != nullptr) {
            return qconcatenatetablesproxymodel_buddy_callback(this, index);
        } else {
            return QConcatenateTablesProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qconcatenatetablesproxymodel_match_isbase) {
            qconcatenatetablesproxymodel_match_isbase = false;
            return QConcatenateTablesProxyModel::match(start, role, value, hits, flags);
        } else if (qconcatenatetablesproxymodel_match_callback != nullptr) {
            return qconcatenatetablesproxymodel_match_callback(this, start, role, value, hits, flags);
        } else {
            return QConcatenateTablesProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qconcatenatetablesproxymodel_rolenames_isbase) {
            qconcatenatetablesproxymodel_rolenames_isbase = false;
            return QConcatenateTablesProxyModel::roleNames();
        } else if (qconcatenatetablesproxymodel_rolenames_callback != nullptr) {
            return qconcatenatetablesproxymodel_rolenames_callback();
        } else {
            return QConcatenateTablesProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qconcatenatetablesproxymodel_multidata_isbase) {
            qconcatenatetablesproxymodel_multidata_isbase = false;
            QConcatenateTablesProxyModel::multiData(index, roleDataSpan);
        } else if (qconcatenatetablesproxymodel_multidata_callback != nullptr) {
            qconcatenatetablesproxymodel_multidata_callback(this, index, roleDataSpan);
        } else {
            QConcatenateTablesProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qconcatenatetablesproxymodel_submit_isbase) {
            qconcatenatetablesproxymodel_submit_isbase = false;
            return QConcatenateTablesProxyModel::submit();
        } else if (qconcatenatetablesproxymodel_submit_callback != nullptr) {
            return qconcatenatetablesproxymodel_submit_callback();
        } else {
            return QConcatenateTablesProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qconcatenatetablesproxymodel_revert_isbase) {
            qconcatenatetablesproxymodel_revert_isbase = false;
            QConcatenateTablesProxyModel::revert();
        } else if (qconcatenatetablesproxymodel_revert_callback != nullptr) {
            qconcatenatetablesproxymodel_revert_callback();
        } else {
            QConcatenateTablesProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qconcatenatetablesproxymodel_resetinternaldata_isbase) {
            qconcatenatetablesproxymodel_resetinternaldata_isbase = false;
            QConcatenateTablesProxyModel::resetInternalData();
        } else if (qconcatenatetablesproxymodel_resetinternaldata_callback != nullptr) {
            qconcatenatetablesproxymodel_resetinternaldata_callback();
        } else {
            QConcatenateTablesProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qconcatenatetablesproxymodel_event_isbase) {
            qconcatenatetablesproxymodel_event_isbase = false;
            return QConcatenateTablesProxyModel::event(event);
        } else if (qconcatenatetablesproxymodel_event_callback != nullptr) {
            return qconcatenatetablesproxymodel_event_callback(this, event);
        } else {
            return QConcatenateTablesProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qconcatenatetablesproxymodel_eventfilter_isbase) {
            qconcatenatetablesproxymodel_eventfilter_isbase = false;
            return QConcatenateTablesProxyModel::eventFilter(watched, event);
        } else if (qconcatenatetablesproxymodel_eventfilter_callback != nullptr) {
            return qconcatenatetablesproxymodel_eventfilter_callback(this, watched, event);
        } else {
            return QConcatenateTablesProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qconcatenatetablesproxymodel_timerevent_isbase) {
            qconcatenatetablesproxymodel_timerevent_isbase = false;
            QConcatenateTablesProxyModel::timerEvent(event);
        } else if (qconcatenatetablesproxymodel_timerevent_callback != nullptr) {
            qconcatenatetablesproxymodel_timerevent_callback(this, event);
        } else {
            QConcatenateTablesProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qconcatenatetablesproxymodel_childevent_isbase) {
            qconcatenatetablesproxymodel_childevent_isbase = false;
            QConcatenateTablesProxyModel::childEvent(event);
        } else if (qconcatenatetablesproxymodel_childevent_callback != nullptr) {
            qconcatenatetablesproxymodel_childevent_callback(this, event);
        } else {
            QConcatenateTablesProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qconcatenatetablesproxymodel_customevent_isbase) {
            qconcatenatetablesproxymodel_customevent_isbase = false;
            QConcatenateTablesProxyModel::customEvent(event);
        } else if (qconcatenatetablesproxymodel_customevent_callback != nullptr) {
            qconcatenatetablesproxymodel_customevent_callback(this, event);
        } else {
            QConcatenateTablesProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qconcatenatetablesproxymodel_connectnotify_isbase) {
            qconcatenatetablesproxymodel_connectnotify_isbase = false;
            QConcatenateTablesProxyModel::connectNotify(signal);
        } else if (qconcatenatetablesproxymodel_connectnotify_callback != nullptr) {
            qconcatenatetablesproxymodel_connectnotify_callback(this, signal);
        } else {
            QConcatenateTablesProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qconcatenatetablesproxymodel_disconnectnotify_isbase) {
            qconcatenatetablesproxymodel_disconnectnotify_isbase = false;
            QConcatenateTablesProxyModel::disconnectNotify(signal);
        } else if (qconcatenatetablesproxymodel_disconnectnotify_callback != nullptr) {
            qconcatenatetablesproxymodel_disconnectnotify_callback(this, signal);
        } else {
            QConcatenateTablesProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qconcatenatetablesproxymodel_createindex_isbase) {
            qconcatenatetablesproxymodel_createindex_isbase = false;
            return QConcatenateTablesProxyModel::createIndex(row, column);
        } else if (qconcatenatetablesproxymodel_createindex_callback != nullptr) {
            return qconcatenatetablesproxymodel_createindex_callback(this, row, column);
        } else {
            return QConcatenateTablesProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QModelIndexList& indexes, QDataStream& stream) const {
        if (qconcatenatetablesproxymodel_encodedata_isbase) {
            qconcatenatetablesproxymodel_encodedata_isbase = false;
            QConcatenateTablesProxyModel::encodeData(indexes, stream);
        } else if (qconcatenatetablesproxymodel_encodedata_callback != nullptr) {
            qconcatenatetablesproxymodel_encodedata_callback(this, indexes, stream);
        } else {
            QConcatenateTablesProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qconcatenatetablesproxymodel_decodedata_isbase) {
            qconcatenatetablesproxymodel_decodedata_isbase = false;
            return QConcatenateTablesProxyModel::decodeData(row, column, parent, stream);
        } else if (qconcatenatetablesproxymodel_decodedata_callback != nullptr) {
            return qconcatenatetablesproxymodel_decodedata_callback(this, row, column, parent, stream);
        } else {
            return QConcatenateTablesProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qconcatenatetablesproxymodel_begininsertrows_isbase) {
            qconcatenatetablesproxymodel_begininsertrows_isbase = false;
            QConcatenateTablesProxyModel::beginInsertRows(parent, first, last);
        } else if (qconcatenatetablesproxymodel_begininsertrows_callback != nullptr) {
            qconcatenatetablesproxymodel_begininsertrows_callback(this, parent, first, last);
        } else {
            QConcatenateTablesProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qconcatenatetablesproxymodel_endinsertrows_isbase) {
            qconcatenatetablesproxymodel_endinsertrows_isbase = false;
            QConcatenateTablesProxyModel::endInsertRows();
        } else if (qconcatenatetablesproxymodel_endinsertrows_callback != nullptr) {
            qconcatenatetablesproxymodel_endinsertrows_callback();
        } else {
            QConcatenateTablesProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qconcatenatetablesproxymodel_beginremoverows_isbase) {
            qconcatenatetablesproxymodel_beginremoverows_isbase = false;
            QConcatenateTablesProxyModel::beginRemoveRows(parent, first, last);
        } else if (qconcatenatetablesproxymodel_beginremoverows_callback != nullptr) {
            qconcatenatetablesproxymodel_beginremoverows_callback(this, parent, first, last);
        } else {
            QConcatenateTablesProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qconcatenatetablesproxymodel_endremoverows_isbase) {
            qconcatenatetablesproxymodel_endremoverows_isbase = false;
            QConcatenateTablesProxyModel::endRemoveRows();
        } else if (qconcatenatetablesproxymodel_endremoverows_callback != nullptr) {
            qconcatenatetablesproxymodel_endremoverows_callback();
        } else {
            QConcatenateTablesProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qconcatenatetablesproxymodel_beginmoverows_isbase) {
            qconcatenatetablesproxymodel_beginmoverows_isbase = false;
            return QConcatenateTablesProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qconcatenatetablesproxymodel_beginmoverows_callback != nullptr) {
            return qconcatenatetablesproxymodel_beginmoverows_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else {
            return QConcatenateTablesProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qconcatenatetablesproxymodel_endmoverows_isbase) {
            qconcatenatetablesproxymodel_endmoverows_isbase = false;
            QConcatenateTablesProxyModel::endMoveRows();
        } else if (qconcatenatetablesproxymodel_endmoverows_callback != nullptr) {
            qconcatenatetablesproxymodel_endmoverows_callback();
        } else {
            QConcatenateTablesProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qconcatenatetablesproxymodel_begininsertcolumns_isbase) {
            qconcatenatetablesproxymodel_begininsertcolumns_isbase = false;
            QConcatenateTablesProxyModel::beginInsertColumns(parent, first, last);
        } else if (qconcatenatetablesproxymodel_begininsertcolumns_callback != nullptr) {
            qconcatenatetablesproxymodel_begininsertcolumns_callback(this, parent, first, last);
        } else {
            QConcatenateTablesProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qconcatenatetablesproxymodel_endinsertcolumns_isbase) {
            qconcatenatetablesproxymodel_endinsertcolumns_isbase = false;
            QConcatenateTablesProxyModel::endInsertColumns();
        } else if (qconcatenatetablesproxymodel_endinsertcolumns_callback != nullptr) {
            qconcatenatetablesproxymodel_endinsertcolumns_callback();
        } else {
            QConcatenateTablesProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qconcatenatetablesproxymodel_beginremovecolumns_isbase) {
            qconcatenatetablesproxymodel_beginremovecolumns_isbase = false;
            QConcatenateTablesProxyModel::beginRemoveColumns(parent, first, last);
        } else if (qconcatenatetablesproxymodel_beginremovecolumns_callback != nullptr) {
            qconcatenatetablesproxymodel_beginremovecolumns_callback(this, parent, first, last);
        } else {
            QConcatenateTablesProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qconcatenatetablesproxymodel_endremovecolumns_isbase) {
            qconcatenatetablesproxymodel_endremovecolumns_isbase = false;
            QConcatenateTablesProxyModel::endRemoveColumns();
        } else if (qconcatenatetablesproxymodel_endremovecolumns_callback != nullptr) {
            qconcatenatetablesproxymodel_endremovecolumns_callback();
        } else {
            QConcatenateTablesProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qconcatenatetablesproxymodel_beginmovecolumns_isbase) {
            qconcatenatetablesproxymodel_beginmovecolumns_isbase = false;
            return QConcatenateTablesProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qconcatenatetablesproxymodel_beginmovecolumns_callback != nullptr) {
            return qconcatenatetablesproxymodel_beginmovecolumns_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else {
            return QConcatenateTablesProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qconcatenatetablesproxymodel_endmovecolumns_isbase) {
            qconcatenatetablesproxymodel_endmovecolumns_isbase = false;
            QConcatenateTablesProxyModel::endMoveColumns();
        } else if (qconcatenatetablesproxymodel_endmovecolumns_callback != nullptr) {
            qconcatenatetablesproxymodel_endmovecolumns_callback();
        } else {
            QConcatenateTablesProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qconcatenatetablesproxymodel_beginresetmodel_isbase) {
            qconcatenatetablesproxymodel_beginresetmodel_isbase = false;
            QConcatenateTablesProxyModel::beginResetModel();
        } else if (qconcatenatetablesproxymodel_beginresetmodel_callback != nullptr) {
            qconcatenatetablesproxymodel_beginresetmodel_callback();
        } else {
            QConcatenateTablesProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qconcatenatetablesproxymodel_endresetmodel_isbase) {
            qconcatenatetablesproxymodel_endresetmodel_isbase = false;
            QConcatenateTablesProxyModel::endResetModel();
        } else if (qconcatenatetablesproxymodel_endresetmodel_callback != nullptr) {
            qconcatenatetablesproxymodel_endresetmodel_callback();
        } else {
            QConcatenateTablesProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qconcatenatetablesproxymodel_changepersistentindex_isbase) {
            qconcatenatetablesproxymodel_changepersistentindex_isbase = false;
            QConcatenateTablesProxyModel::changePersistentIndex(from, to);
        } else if (qconcatenatetablesproxymodel_changepersistentindex_callback != nullptr) {
            qconcatenatetablesproxymodel_changepersistentindex_callback(this, from, to);
        } else {
            QConcatenateTablesProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QModelIndexList& from, const QModelIndexList& to) {
        if (qconcatenatetablesproxymodel_changepersistentindexlist_isbase) {
            qconcatenatetablesproxymodel_changepersistentindexlist_isbase = false;
            QConcatenateTablesProxyModel::changePersistentIndexList(from, to);
        } else if (qconcatenatetablesproxymodel_changepersistentindexlist_callback != nullptr) {
            qconcatenatetablesproxymodel_changepersistentindexlist_callback(this, from, to);
        } else {
            QConcatenateTablesProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndexList persistentIndexList() const {
        if (qconcatenatetablesproxymodel_persistentindexlist_isbase) {
            qconcatenatetablesproxymodel_persistentindexlist_isbase = false;
            return QConcatenateTablesProxyModel::persistentIndexList();
        } else if (qconcatenatetablesproxymodel_persistentindexlist_callback != nullptr) {
            return qconcatenatetablesproxymodel_persistentindexlist_callback();
        } else {
            return QConcatenateTablesProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qconcatenatetablesproxymodel_sender_isbase) {
            qconcatenatetablesproxymodel_sender_isbase = false;
            return QConcatenateTablesProxyModel::sender();
        } else if (qconcatenatetablesproxymodel_sender_callback != nullptr) {
            return qconcatenatetablesproxymodel_sender_callback();
        } else {
            return QConcatenateTablesProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qconcatenatetablesproxymodel_sendersignalindex_isbase) {
            qconcatenatetablesproxymodel_sendersignalindex_isbase = false;
            return QConcatenateTablesProxyModel::senderSignalIndex();
        } else if (qconcatenatetablesproxymodel_sendersignalindex_callback != nullptr) {
            return qconcatenatetablesproxymodel_sendersignalindex_callback();
        } else {
            return QConcatenateTablesProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qconcatenatetablesproxymodel_receivers_isbase) {
            qconcatenatetablesproxymodel_receivers_isbase = false;
            return QConcatenateTablesProxyModel::receivers(signal);
        } else if (qconcatenatetablesproxymodel_receivers_callback != nullptr) {
            return qconcatenatetablesproxymodel_receivers_callback(this, signal);
        } else {
            return QConcatenateTablesProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qconcatenatetablesproxymodel_issignalconnected_isbase) {
            qconcatenatetablesproxymodel_issignalconnected_isbase = false;
            return QConcatenateTablesProxyModel::isSignalConnected(signal);
        } else if (qconcatenatetablesproxymodel_issignalconnected_callback != nullptr) {
            return qconcatenatetablesproxymodel_issignalconnected_callback(this, signal);
        } else {
            return QConcatenateTablesProxyModel::isSignalConnected(signal);
        }
    }
};

#endif
