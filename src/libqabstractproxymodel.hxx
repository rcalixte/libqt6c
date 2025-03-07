#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTPROXYMODEL_H
#define SRCC_LIBVIRTUALQABSTRACTPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractProxyModel so that we can call protected methods
class VirtualQAbstractProxyModel : public QAbstractProxyModel {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractProxyModel_Metacall_Callback = int (*)(QAbstractProxyModel*, QMetaObject::Call, int, void**);
    using QAbstractProxyModel_SetSourceModel_Callback = void (*)(QAbstractProxyModel*, QAbstractItemModel*);
    using QAbstractProxyModel_MapToSource_Callback = QModelIndex (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_MapFromSource_Callback = QModelIndex (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_MapSelectionToSource_Callback = QItemSelection (*)(const QAbstractProxyModel*, const QItemSelection&);
    using QAbstractProxyModel_MapSelectionFromSource_Callback = QItemSelection (*)(const QAbstractProxyModel*, const QItemSelection&);
    using QAbstractProxyModel_Submit_Callback = bool (*)();
    using QAbstractProxyModel_Revert_Callback = void (*)();
    using QAbstractProxyModel_Data_Callback = QVariant (*)(const QAbstractProxyModel*, const QModelIndex&, int);
    using QAbstractProxyModel_HeaderData_Callback = QVariant (*)(const QAbstractProxyModel*, int, Qt::Orientation, int);
    using QAbstractProxyModel_ItemData_Callback = QMap<int, QVariant> (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_Flags_Callback = Qt::ItemFlags (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_SetData_Callback = bool (*)(QAbstractProxyModel*, const QModelIndex&, const QVariant&, int);
    using QAbstractProxyModel_SetItemData_Callback = bool (*)(QAbstractProxyModel*, const QModelIndex&, const QMap<int, QVariant>&);
    using QAbstractProxyModel_SetHeaderData_Callback = bool (*)(QAbstractProxyModel*, int, Qt::Orientation, const QVariant&, int);
    using QAbstractProxyModel_ClearItemData_Callback = bool (*)(QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_Buddy_Callback = QModelIndex (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_CanFetchMore_Callback = bool (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_FetchMore_Callback = void (*)(QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_Sort_Callback = void (*)(QAbstractProxyModel*, int, Qt::SortOrder);
    using QAbstractProxyModel_Span_Callback = QSize (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_HasChildren_Callback = bool (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_Sibling_Callback = QModelIndex (*)(const QAbstractProxyModel*, int, int, const QModelIndex&);
    using QAbstractProxyModel_MimeData_Callback = QMimeData* (*)(const QAbstractProxyModel*, const QModelIndexList&);
    using QAbstractProxyModel_CanDropMimeData_Callback = bool (*)(const QAbstractProxyModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QAbstractProxyModel_DropMimeData_Callback = bool (*)(QAbstractProxyModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QAbstractProxyModel_MimeTypes_Callback = QStringList (*)();
    using QAbstractProxyModel_SupportedDragActions_Callback = Qt::DropActions (*)();
    using QAbstractProxyModel_SupportedDropActions_Callback = Qt::DropActions (*)();
    using QAbstractProxyModel_RoleNames_Callback = QHash<int, QByteArray> (*)();
    using QAbstractProxyModel_Index_Callback = QModelIndex (*)(const QAbstractProxyModel*, int, int, const QModelIndex&);
    using QAbstractProxyModel_Parent_Callback = QModelIndex (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_RowCount_Callback = int (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_ColumnCount_Callback = int (*)(const QAbstractProxyModel*, const QModelIndex&);
    using QAbstractProxyModel_InsertRows_Callback = bool (*)(QAbstractProxyModel*, int, int, const QModelIndex&);
    using QAbstractProxyModel_InsertColumns_Callback = bool (*)(QAbstractProxyModel*, int, int, const QModelIndex&);
    using QAbstractProxyModel_RemoveRows_Callback = bool (*)(QAbstractProxyModel*, int, int, const QModelIndex&);
    using QAbstractProxyModel_RemoveColumns_Callback = bool (*)(QAbstractProxyModel*, int, int, const QModelIndex&);
    using QAbstractProxyModel_MoveRows_Callback = bool (*)(QAbstractProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QAbstractProxyModel_MoveColumns_Callback = bool (*)(QAbstractProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QAbstractProxyModel_Match_Callback = QModelIndexList (*)(const QAbstractProxyModel*, const QModelIndex&, int, const QVariant&, int, Qt::MatchFlags);
    using QAbstractProxyModel_MultiData_Callback = void (*)(const QAbstractProxyModel*, const QModelIndex&, QModelRoleDataSpan);
    using QAbstractProxyModel_ResetInternalData_Callback = void (*)();
    using QAbstractProxyModel_Event_Callback = bool (*)(QAbstractProxyModel*, QEvent*);
    using QAbstractProxyModel_EventFilter_Callback = bool (*)(QAbstractProxyModel*, QObject*, QEvent*);
    using QAbstractProxyModel_TimerEvent_Callback = void (*)(QAbstractProxyModel*, QTimerEvent*);
    using QAbstractProxyModel_ChildEvent_Callback = void (*)(QAbstractProxyModel*, QChildEvent*);
    using QAbstractProxyModel_CustomEvent_Callback = void (*)(QAbstractProxyModel*, QEvent*);
    using QAbstractProxyModel_ConnectNotify_Callback = void (*)(QAbstractProxyModel*, const QMetaMethod&);
    using QAbstractProxyModel_DisconnectNotify_Callback = void (*)(QAbstractProxyModel*, const QMetaMethod&);
    using QAbstractProxyModel_CreateSourceIndex_Callback = QModelIndex (*)(const QAbstractProxyModel*, int, int, void*);
    using QAbstractProxyModel_CreateIndex_Callback = QModelIndex (*)(const QAbstractProxyModel*, int, int);
    using QAbstractProxyModel_EncodeData_Callback = void (*)(const QAbstractProxyModel*, const QModelIndexList&, QDataStream&);
    using QAbstractProxyModel_DecodeData_Callback = bool (*)(QAbstractProxyModel*, int, int, const QModelIndex&, QDataStream&);
    using QAbstractProxyModel_BeginInsertRows_Callback = void (*)(QAbstractProxyModel*, const QModelIndex&, int, int);
    using QAbstractProxyModel_EndInsertRows_Callback = void (*)();
    using QAbstractProxyModel_BeginRemoveRows_Callback = void (*)(QAbstractProxyModel*, const QModelIndex&, int, int);
    using QAbstractProxyModel_EndRemoveRows_Callback = void (*)();
    using QAbstractProxyModel_BeginMoveRows_Callback = bool (*)(QAbstractProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QAbstractProxyModel_EndMoveRows_Callback = void (*)();
    using QAbstractProxyModel_BeginInsertColumns_Callback = void (*)(QAbstractProxyModel*, const QModelIndex&, int, int);
    using QAbstractProxyModel_EndInsertColumns_Callback = void (*)();
    using QAbstractProxyModel_BeginRemoveColumns_Callback = void (*)(QAbstractProxyModel*, const QModelIndex&, int, int);
    using QAbstractProxyModel_EndRemoveColumns_Callback = void (*)();
    using QAbstractProxyModel_BeginMoveColumns_Callback = bool (*)(QAbstractProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QAbstractProxyModel_EndMoveColumns_Callback = void (*)();
    using QAbstractProxyModel_BeginResetModel_Callback = void (*)();
    using QAbstractProxyModel_EndResetModel_Callback = void (*)();
    using QAbstractProxyModel_ChangePersistentIndex_Callback = void (*)(QAbstractProxyModel*, const QModelIndex&, const QModelIndex&);
    using QAbstractProxyModel_ChangePersistentIndexList_Callback = void (*)(QAbstractProxyModel*, const QModelIndexList&, const QModelIndexList&);
    using QAbstractProxyModel_PersistentIndexList_Callback = QModelIndexList (*)();
    using QAbstractProxyModel_Sender_Callback = QObject* (*)();
    using QAbstractProxyModel_SenderSignalIndex_Callback = int (*)();
    using QAbstractProxyModel_Receivers_Callback = int (*)(const QAbstractProxyModel*, const char*);
    using QAbstractProxyModel_IsSignalConnected_Callback = bool (*)(const QAbstractProxyModel*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAbstractProxyModel_Metacall_Callback qabstractproxymodel_metacall_callback = nullptr;
    QAbstractProxyModel_SetSourceModel_Callback qabstractproxymodel_setsourcemodel_callback = nullptr;
    QAbstractProxyModel_MapToSource_Callback qabstractproxymodel_maptosource_callback = nullptr;
    QAbstractProxyModel_MapFromSource_Callback qabstractproxymodel_mapfromsource_callback = nullptr;
    QAbstractProxyModel_MapSelectionToSource_Callback qabstractproxymodel_mapselectiontosource_callback = nullptr;
    QAbstractProxyModel_MapSelectionFromSource_Callback qabstractproxymodel_mapselectionfromsource_callback = nullptr;
    QAbstractProxyModel_Submit_Callback qabstractproxymodel_submit_callback = nullptr;
    QAbstractProxyModel_Revert_Callback qabstractproxymodel_revert_callback = nullptr;
    QAbstractProxyModel_Data_Callback qabstractproxymodel_data_callback = nullptr;
    QAbstractProxyModel_HeaderData_Callback qabstractproxymodel_headerdata_callback = nullptr;
    QAbstractProxyModel_ItemData_Callback qabstractproxymodel_itemdata_callback = nullptr;
    QAbstractProxyModel_Flags_Callback qabstractproxymodel_flags_callback = nullptr;
    QAbstractProxyModel_SetData_Callback qabstractproxymodel_setdata_callback = nullptr;
    QAbstractProxyModel_SetItemData_Callback qabstractproxymodel_setitemdata_callback = nullptr;
    QAbstractProxyModel_SetHeaderData_Callback qabstractproxymodel_setheaderdata_callback = nullptr;
    QAbstractProxyModel_ClearItemData_Callback qabstractproxymodel_clearitemdata_callback = nullptr;
    QAbstractProxyModel_Buddy_Callback qabstractproxymodel_buddy_callback = nullptr;
    QAbstractProxyModel_CanFetchMore_Callback qabstractproxymodel_canfetchmore_callback = nullptr;
    QAbstractProxyModel_FetchMore_Callback qabstractproxymodel_fetchmore_callback = nullptr;
    QAbstractProxyModel_Sort_Callback qabstractproxymodel_sort_callback = nullptr;
    QAbstractProxyModel_Span_Callback qabstractproxymodel_span_callback = nullptr;
    QAbstractProxyModel_HasChildren_Callback qabstractproxymodel_haschildren_callback = nullptr;
    QAbstractProxyModel_Sibling_Callback qabstractproxymodel_sibling_callback = nullptr;
    QAbstractProxyModel_MimeData_Callback qabstractproxymodel_mimedata_callback = nullptr;
    QAbstractProxyModel_CanDropMimeData_Callback qabstractproxymodel_candropmimedata_callback = nullptr;
    QAbstractProxyModel_DropMimeData_Callback qabstractproxymodel_dropmimedata_callback = nullptr;
    QAbstractProxyModel_MimeTypes_Callback qabstractproxymodel_mimetypes_callback = nullptr;
    QAbstractProxyModel_SupportedDragActions_Callback qabstractproxymodel_supporteddragactions_callback = nullptr;
    QAbstractProxyModel_SupportedDropActions_Callback qabstractproxymodel_supporteddropactions_callback = nullptr;
    QAbstractProxyModel_RoleNames_Callback qabstractproxymodel_rolenames_callback = nullptr;
    QAbstractProxyModel_Index_Callback qabstractproxymodel_index_callback = nullptr;
    QAbstractProxyModel_Parent_Callback qabstractproxymodel_parent_callback = nullptr;
    QAbstractProxyModel_RowCount_Callback qabstractproxymodel_rowcount_callback = nullptr;
    QAbstractProxyModel_ColumnCount_Callback qabstractproxymodel_columncount_callback = nullptr;
    QAbstractProxyModel_InsertRows_Callback qabstractproxymodel_insertrows_callback = nullptr;
    QAbstractProxyModel_InsertColumns_Callback qabstractproxymodel_insertcolumns_callback = nullptr;
    QAbstractProxyModel_RemoveRows_Callback qabstractproxymodel_removerows_callback = nullptr;
    QAbstractProxyModel_RemoveColumns_Callback qabstractproxymodel_removecolumns_callback = nullptr;
    QAbstractProxyModel_MoveRows_Callback qabstractproxymodel_moverows_callback = nullptr;
    QAbstractProxyModel_MoveColumns_Callback qabstractproxymodel_movecolumns_callback = nullptr;
    QAbstractProxyModel_Match_Callback qabstractproxymodel_match_callback = nullptr;
    QAbstractProxyModel_MultiData_Callback qabstractproxymodel_multidata_callback = nullptr;
    QAbstractProxyModel_ResetInternalData_Callback qabstractproxymodel_resetinternaldata_callback = nullptr;
    QAbstractProxyModel_Event_Callback qabstractproxymodel_event_callback = nullptr;
    QAbstractProxyModel_EventFilter_Callback qabstractproxymodel_eventfilter_callback = nullptr;
    QAbstractProxyModel_TimerEvent_Callback qabstractproxymodel_timerevent_callback = nullptr;
    QAbstractProxyModel_ChildEvent_Callback qabstractproxymodel_childevent_callback = nullptr;
    QAbstractProxyModel_CustomEvent_Callback qabstractproxymodel_customevent_callback = nullptr;
    QAbstractProxyModel_ConnectNotify_Callback qabstractproxymodel_connectnotify_callback = nullptr;
    QAbstractProxyModel_DisconnectNotify_Callback qabstractproxymodel_disconnectnotify_callback = nullptr;
    QAbstractProxyModel_CreateSourceIndex_Callback qabstractproxymodel_createsourceindex_callback = nullptr;
    QAbstractProxyModel_CreateIndex_Callback qabstractproxymodel_createindex_callback = nullptr;
    QAbstractProxyModel_EncodeData_Callback qabstractproxymodel_encodedata_callback = nullptr;
    QAbstractProxyModel_DecodeData_Callback qabstractproxymodel_decodedata_callback = nullptr;
    QAbstractProxyModel_BeginInsertRows_Callback qabstractproxymodel_begininsertrows_callback = nullptr;
    QAbstractProxyModel_EndInsertRows_Callback qabstractproxymodel_endinsertrows_callback = nullptr;
    QAbstractProxyModel_BeginRemoveRows_Callback qabstractproxymodel_beginremoverows_callback = nullptr;
    QAbstractProxyModel_EndRemoveRows_Callback qabstractproxymodel_endremoverows_callback = nullptr;
    QAbstractProxyModel_BeginMoveRows_Callback qabstractproxymodel_beginmoverows_callback = nullptr;
    QAbstractProxyModel_EndMoveRows_Callback qabstractproxymodel_endmoverows_callback = nullptr;
    QAbstractProxyModel_BeginInsertColumns_Callback qabstractproxymodel_begininsertcolumns_callback = nullptr;
    QAbstractProxyModel_EndInsertColumns_Callback qabstractproxymodel_endinsertcolumns_callback = nullptr;
    QAbstractProxyModel_BeginRemoveColumns_Callback qabstractproxymodel_beginremovecolumns_callback = nullptr;
    QAbstractProxyModel_EndRemoveColumns_Callback qabstractproxymodel_endremovecolumns_callback = nullptr;
    QAbstractProxyModel_BeginMoveColumns_Callback qabstractproxymodel_beginmovecolumns_callback = nullptr;
    QAbstractProxyModel_EndMoveColumns_Callback qabstractproxymodel_endmovecolumns_callback = nullptr;
    QAbstractProxyModel_BeginResetModel_Callback qabstractproxymodel_beginresetmodel_callback = nullptr;
    QAbstractProxyModel_EndResetModel_Callback qabstractproxymodel_endresetmodel_callback = nullptr;
    QAbstractProxyModel_ChangePersistentIndex_Callback qabstractproxymodel_changepersistentindex_callback = nullptr;
    QAbstractProxyModel_ChangePersistentIndexList_Callback qabstractproxymodel_changepersistentindexlist_callback = nullptr;
    QAbstractProxyModel_PersistentIndexList_Callback qabstractproxymodel_persistentindexlist_callback = nullptr;
    QAbstractProxyModel_Sender_Callback qabstractproxymodel_sender_callback = nullptr;
    QAbstractProxyModel_SenderSignalIndex_Callback qabstractproxymodel_sendersignalindex_callback = nullptr;
    QAbstractProxyModel_Receivers_Callback qabstractproxymodel_receivers_callback = nullptr;
    QAbstractProxyModel_IsSignalConnected_Callback qabstractproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractproxymodel_metacall_isbase = false;
    mutable bool qabstractproxymodel_setsourcemodel_isbase = false;
    mutable bool qabstractproxymodel_maptosource_isbase = false;
    mutable bool qabstractproxymodel_mapfromsource_isbase = false;
    mutable bool qabstractproxymodel_mapselectiontosource_isbase = false;
    mutable bool qabstractproxymodel_mapselectionfromsource_isbase = false;
    mutable bool qabstractproxymodel_submit_isbase = false;
    mutable bool qabstractproxymodel_revert_isbase = false;
    mutable bool qabstractproxymodel_data_isbase = false;
    mutable bool qabstractproxymodel_headerdata_isbase = false;
    mutable bool qabstractproxymodel_itemdata_isbase = false;
    mutable bool qabstractproxymodel_flags_isbase = false;
    mutable bool qabstractproxymodel_setdata_isbase = false;
    mutable bool qabstractproxymodel_setitemdata_isbase = false;
    mutable bool qabstractproxymodel_setheaderdata_isbase = false;
    mutable bool qabstractproxymodel_clearitemdata_isbase = false;
    mutable bool qabstractproxymodel_buddy_isbase = false;
    mutable bool qabstractproxymodel_canfetchmore_isbase = false;
    mutable bool qabstractproxymodel_fetchmore_isbase = false;
    mutable bool qabstractproxymodel_sort_isbase = false;
    mutable bool qabstractproxymodel_span_isbase = false;
    mutable bool qabstractproxymodel_haschildren_isbase = false;
    mutable bool qabstractproxymodel_sibling_isbase = false;
    mutable bool qabstractproxymodel_mimedata_isbase = false;
    mutable bool qabstractproxymodel_candropmimedata_isbase = false;
    mutable bool qabstractproxymodel_dropmimedata_isbase = false;
    mutable bool qabstractproxymodel_mimetypes_isbase = false;
    mutable bool qabstractproxymodel_supporteddragactions_isbase = false;
    mutable bool qabstractproxymodel_supporteddropactions_isbase = false;
    mutable bool qabstractproxymodel_rolenames_isbase = false;
    mutable bool qabstractproxymodel_index_isbase = false;
    mutable bool qabstractproxymodel_parent_isbase = false;
    mutable bool qabstractproxymodel_rowcount_isbase = false;
    mutable bool qabstractproxymodel_columncount_isbase = false;
    mutable bool qabstractproxymodel_insertrows_isbase = false;
    mutable bool qabstractproxymodel_insertcolumns_isbase = false;
    mutable bool qabstractproxymodel_removerows_isbase = false;
    mutable bool qabstractproxymodel_removecolumns_isbase = false;
    mutable bool qabstractproxymodel_moverows_isbase = false;
    mutable bool qabstractproxymodel_movecolumns_isbase = false;
    mutable bool qabstractproxymodel_match_isbase = false;
    mutable bool qabstractproxymodel_multidata_isbase = false;
    mutable bool qabstractproxymodel_resetinternaldata_isbase = false;
    mutable bool qabstractproxymodel_event_isbase = false;
    mutable bool qabstractproxymodel_eventfilter_isbase = false;
    mutable bool qabstractproxymodel_timerevent_isbase = false;
    mutable bool qabstractproxymodel_childevent_isbase = false;
    mutable bool qabstractproxymodel_customevent_isbase = false;
    mutable bool qabstractproxymodel_connectnotify_isbase = false;
    mutable bool qabstractproxymodel_disconnectnotify_isbase = false;
    mutable bool qabstractproxymodel_createsourceindex_isbase = false;
    mutable bool qabstractproxymodel_createindex_isbase = false;
    mutable bool qabstractproxymodel_encodedata_isbase = false;
    mutable bool qabstractproxymodel_decodedata_isbase = false;
    mutable bool qabstractproxymodel_begininsertrows_isbase = false;
    mutable bool qabstractproxymodel_endinsertrows_isbase = false;
    mutable bool qabstractproxymodel_beginremoverows_isbase = false;
    mutable bool qabstractproxymodel_endremoverows_isbase = false;
    mutable bool qabstractproxymodel_beginmoverows_isbase = false;
    mutable bool qabstractproxymodel_endmoverows_isbase = false;
    mutable bool qabstractproxymodel_begininsertcolumns_isbase = false;
    mutable bool qabstractproxymodel_endinsertcolumns_isbase = false;
    mutable bool qabstractproxymodel_beginremovecolumns_isbase = false;
    mutable bool qabstractproxymodel_endremovecolumns_isbase = false;
    mutable bool qabstractproxymodel_beginmovecolumns_isbase = false;
    mutable bool qabstractproxymodel_endmovecolumns_isbase = false;
    mutable bool qabstractproxymodel_beginresetmodel_isbase = false;
    mutable bool qabstractproxymodel_endresetmodel_isbase = false;
    mutable bool qabstractproxymodel_changepersistentindex_isbase = false;
    mutable bool qabstractproxymodel_changepersistentindexlist_isbase = false;
    mutable bool qabstractproxymodel_persistentindexlist_isbase = false;
    mutable bool qabstractproxymodel_sender_isbase = false;
    mutable bool qabstractproxymodel_sendersignalindex_isbase = false;
    mutable bool qabstractproxymodel_receivers_isbase = false;
    mutable bool qabstractproxymodel_issignalconnected_isbase = false;

  public:
    VirtualQAbstractProxyModel() : QAbstractProxyModel(){};
    VirtualQAbstractProxyModel(QObject* parent) : QAbstractProxyModel(parent){};

    ~VirtualQAbstractProxyModel() {
        qabstractproxymodel_metacall_callback = nullptr;
        qabstractproxymodel_setsourcemodel_callback = nullptr;
        qabstractproxymodel_maptosource_callback = nullptr;
        qabstractproxymodel_mapfromsource_callback = nullptr;
        qabstractproxymodel_mapselectiontosource_callback = nullptr;
        qabstractproxymodel_mapselectionfromsource_callback = nullptr;
        qabstractproxymodel_submit_callback = nullptr;
        qabstractproxymodel_revert_callback = nullptr;
        qabstractproxymodel_data_callback = nullptr;
        qabstractproxymodel_headerdata_callback = nullptr;
        qabstractproxymodel_itemdata_callback = nullptr;
        qabstractproxymodel_flags_callback = nullptr;
        qabstractproxymodel_setdata_callback = nullptr;
        qabstractproxymodel_setitemdata_callback = nullptr;
        qabstractproxymodel_setheaderdata_callback = nullptr;
        qabstractproxymodel_clearitemdata_callback = nullptr;
        qabstractproxymodel_buddy_callback = nullptr;
        qabstractproxymodel_canfetchmore_callback = nullptr;
        qabstractproxymodel_fetchmore_callback = nullptr;
        qabstractproxymodel_sort_callback = nullptr;
        qabstractproxymodel_span_callback = nullptr;
        qabstractproxymodel_haschildren_callback = nullptr;
        qabstractproxymodel_sibling_callback = nullptr;
        qabstractproxymodel_mimedata_callback = nullptr;
        qabstractproxymodel_candropmimedata_callback = nullptr;
        qabstractproxymodel_dropmimedata_callback = nullptr;
        qabstractproxymodel_mimetypes_callback = nullptr;
        qabstractproxymodel_supporteddragactions_callback = nullptr;
        qabstractproxymodel_supporteddropactions_callback = nullptr;
        qabstractproxymodel_rolenames_callback = nullptr;
        qabstractproxymodel_index_callback = nullptr;
        qabstractproxymodel_parent_callback = nullptr;
        qabstractproxymodel_rowcount_callback = nullptr;
        qabstractproxymodel_columncount_callback = nullptr;
        qabstractproxymodel_insertrows_callback = nullptr;
        qabstractproxymodel_insertcolumns_callback = nullptr;
        qabstractproxymodel_removerows_callback = nullptr;
        qabstractproxymodel_removecolumns_callback = nullptr;
        qabstractproxymodel_moverows_callback = nullptr;
        qabstractproxymodel_movecolumns_callback = nullptr;
        qabstractproxymodel_match_callback = nullptr;
        qabstractproxymodel_multidata_callback = nullptr;
        qabstractproxymodel_resetinternaldata_callback = nullptr;
        qabstractproxymodel_event_callback = nullptr;
        qabstractproxymodel_eventfilter_callback = nullptr;
        qabstractproxymodel_timerevent_callback = nullptr;
        qabstractproxymodel_childevent_callback = nullptr;
        qabstractproxymodel_customevent_callback = nullptr;
        qabstractproxymodel_connectnotify_callback = nullptr;
        qabstractproxymodel_disconnectnotify_callback = nullptr;
        qabstractproxymodel_createsourceindex_callback = nullptr;
        qabstractproxymodel_createindex_callback = nullptr;
        qabstractproxymodel_encodedata_callback = nullptr;
        qabstractproxymodel_decodedata_callback = nullptr;
        qabstractproxymodel_begininsertrows_callback = nullptr;
        qabstractproxymodel_endinsertrows_callback = nullptr;
        qabstractproxymodel_beginremoverows_callback = nullptr;
        qabstractproxymodel_endremoverows_callback = nullptr;
        qabstractproxymodel_beginmoverows_callback = nullptr;
        qabstractproxymodel_endmoverows_callback = nullptr;
        qabstractproxymodel_begininsertcolumns_callback = nullptr;
        qabstractproxymodel_endinsertcolumns_callback = nullptr;
        qabstractproxymodel_beginremovecolumns_callback = nullptr;
        qabstractproxymodel_endremovecolumns_callback = nullptr;
        qabstractproxymodel_beginmovecolumns_callback = nullptr;
        qabstractproxymodel_endmovecolumns_callback = nullptr;
        qabstractproxymodel_beginresetmodel_callback = nullptr;
        qabstractproxymodel_endresetmodel_callback = nullptr;
        qabstractproxymodel_changepersistentindex_callback = nullptr;
        qabstractproxymodel_changepersistentindexlist_callback = nullptr;
        qabstractproxymodel_persistentindexlist_callback = nullptr;
        qabstractproxymodel_sender_callback = nullptr;
        qabstractproxymodel_sendersignalindex_callback = nullptr;
        qabstractproxymodel_receivers_callback = nullptr;
        qabstractproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAbstractProxyModel_Metacall_Callback(QAbstractProxyModel_Metacall_Callback cb) { qabstractproxymodel_metacall_callback = cb; }
    void setQAbstractProxyModel_SetSourceModel_Callback(QAbstractProxyModel_SetSourceModel_Callback cb) { qabstractproxymodel_setsourcemodel_callback = cb; }
    void setQAbstractProxyModel_MapToSource_Callback(QAbstractProxyModel_MapToSource_Callback cb) { qabstractproxymodel_maptosource_callback = cb; }
    void setQAbstractProxyModel_MapFromSource_Callback(QAbstractProxyModel_MapFromSource_Callback cb) { qabstractproxymodel_mapfromsource_callback = cb; }
    void setQAbstractProxyModel_MapSelectionToSource_Callback(QAbstractProxyModel_MapSelectionToSource_Callback cb) { qabstractproxymodel_mapselectiontosource_callback = cb; }
    void setQAbstractProxyModel_MapSelectionFromSource_Callback(QAbstractProxyModel_MapSelectionFromSource_Callback cb) { qabstractproxymodel_mapselectionfromsource_callback = cb; }
    void setQAbstractProxyModel_Submit_Callback(QAbstractProxyModel_Submit_Callback cb) { qabstractproxymodel_submit_callback = cb; }
    void setQAbstractProxyModel_Revert_Callback(QAbstractProxyModel_Revert_Callback cb) { qabstractproxymodel_revert_callback = cb; }
    void setQAbstractProxyModel_Data_Callback(QAbstractProxyModel_Data_Callback cb) { qabstractproxymodel_data_callback = cb; }
    void setQAbstractProxyModel_HeaderData_Callback(QAbstractProxyModel_HeaderData_Callback cb) { qabstractproxymodel_headerdata_callback = cb; }
    void setQAbstractProxyModel_ItemData_Callback(QAbstractProxyModel_ItemData_Callback cb) { qabstractproxymodel_itemdata_callback = cb; }
    void setQAbstractProxyModel_Flags_Callback(QAbstractProxyModel_Flags_Callback cb) { qabstractproxymodel_flags_callback = cb; }
    void setQAbstractProxyModel_SetData_Callback(QAbstractProxyModel_SetData_Callback cb) { qabstractproxymodel_setdata_callback = cb; }
    void setQAbstractProxyModel_SetItemData_Callback(QAbstractProxyModel_SetItemData_Callback cb) { qabstractproxymodel_setitemdata_callback = cb; }
    void setQAbstractProxyModel_SetHeaderData_Callback(QAbstractProxyModel_SetHeaderData_Callback cb) { qabstractproxymodel_setheaderdata_callback = cb; }
    void setQAbstractProxyModel_ClearItemData_Callback(QAbstractProxyModel_ClearItemData_Callback cb) { qabstractproxymodel_clearitemdata_callback = cb; }
    void setQAbstractProxyModel_Buddy_Callback(QAbstractProxyModel_Buddy_Callback cb) { qabstractproxymodel_buddy_callback = cb; }
    void setQAbstractProxyModel_CanFetchMore_Callback(QAbstractProxyModel_CanFetchMore_Callback cb) { qabstractproxymodel_canfetchmore_callback = cb; }
    void setQAbstractProxyModel_FetchMore_Callback(QAbstractProxyModel_FetchMore_Callback cb) { qabstractproxymodel_fetchmore_callback = cb; }
    void setQAbstractProxyModel_Sort_Callback(QAbstractProxyModel_Sort_Callback cb) { qabstractproxymodel_sort_callback = cb; }
    void setQAbstractProxyModel_Span_Callback(QAbstractProxyModel_Span_Callback cb) { qabstractproxymodel_span_callback = cb; }
    void setQAbstractProxyModel_HasChildren_Callback(QAbstractProxyModel_HasChildren_Callback cb) { qabstractproxymodel_haschildren_callback = cb; }
    void setQAbstractProxyModel_Sibling_Callback(QAbstractProxyModel_Sibling_Callback cb) { qabstractproxymodel_sibling_callback = cb; }
    void setQAbstractProxyModel_MimeData_Callback(QAbstractProxyModel_MimeData_Callback cb) { qabstractproxymodel_mimedata_callback = cb; }
    void setQAbstractProxyModel_CanDropMimeData_Callback(QAbstractProxyModel_CanDropMimeData_Callback cb) { qabstractproxymodel_candropmimedata_callback = cb; }
    void setQAbstractProxyModel_DropMimeData_Callback(QAbstractProxyModel_DropMimeData_Callback cb) { qabstractproxymodel_dropmimedata_callback = cb; }
    void setQAbstractProxyModel_MimeTypes_Callback(QAbstractProxyModel_MimeTypes_Callback cb) { qabstractproxymodel_mimetypes_callback = cb; }
    void setQAbstractProxyModel_SupportedDragActions_Callback(QAbstractProxyModel_SupportedDragActions_Callback cb) { qabstractproxymodel_supporteddragactions_callback = cb; }
    void setQAbstractProxyModel_SupportedDropActions_Callback(QAbstractProxyModel_SupportedDropActions_Callback cb) { qabstractproxymodel_supporteddropactions_callback = cb; }
    void setQAbstractProxyModel_RoleNames_Callback(QAbstractProxyModel_RoleNames_Callback cb) { qabstractproxymodel_rolenames_callback = cb; }
    void setQAbstractProxyModel_Index_Callback(QAbstractProxyModel_Index_Callback cb) { qabstractproxymodel_index_callback = cb; }
    void setQAbstractProxyModel_Parent_Callback(QAbstractProxyModel_Parent_Callback cb) { qabstractproxymodel_parent_callback = cb; }
    void setQAbstractProxyModel_RowCount_Callback(QAbstractProxyModel_RowCount_Callback cb) { qabstractproxymodel_rowcount_callback = cb; }
    void setQAbstractProxyModel_ColumnCount_Callback(QAbstractProxyModel_ColumnCount_Callback cb) { qabstractproxymodel_columncount_callback = cb; }
    void setQAbstractProxyModel_InsertRows_Callback(QAbstractProxyModel_InsertRows_Callback cb) { qabstractproxymodel_insertrows_callback = cb; }
    void setQAbstractProxyModel_InsertColumns_Callback(QAbstractProxyModel_InsertColumns_Callback cb) { qabstractproxymodel_insertcolumns_callback = cb; }
    void setQAbstractProxyModel_RemoveRows_Callback(QAbstractProxyModel_RemoveRows_Callback cb) { qabstractproxymodel_removerows_callback = cb; }
    void setQAbstractProxyModel_RemoveColumns_Callback(QAbstractProxyModel_RemoveColumns_Callback cb) { qabstractproxymodel_removecolumns_callback = cb; }
    void setQAbstractProxyModel_MoveRows_Callback(QAbstractProxyModel_MoveRows_Callback cb) { qabstractproxymodel_moverows_callback = cb; }
    void setQAbstractProxyModel_MoveColumns_Callback(QAbstractProxyModel_MoveColumns_Callback cb) { qabstractproxymodel_movecolumns_callback = cb; }
    void setQAbstractProxyModel_Match_Callback(QAbstractProxyModel_Match_Callback cb) { qabstractproxymodel_match_callback = cb; }
    void setQAbstractProxyModel_MultiData_Callback(QAbstractProxyModel_MultiData_Callback cb) { qabstractproxymodel_multidata_callback = cb; }
    void setQAbstractProxyModel_ResetInternalData_Callback(QAbstractProxyModel_ResetInternalData_Callback cb) { qabstractproxymodel_resetinternaldata_callback = cb; }
    void setQAbstractProxyModel_Event_Callback(QAbstractProxyModel_Event_Callback cb) { qabstractproxymodel_event_callback = cb; }
    void setQAbstractProxyModel_EventFilter_Callback(QAbstractProxyModel_EventFilter_Callback cb) { qabstractproxymodel_eventfilter_callback = cb; }
    void setQAbstractProxyModel_TimerEvent_Callback(QAbstractProxyModel_TimerEvent_Callback cb) { qabstractproxymodel_timerevent_callback = cb; }
    void setQAbstractProxyModel_ChildEvent_Callback(QAbstractProxyModel_ChildEvent_Callback cb) { qabstractproxymodel_childevent_callback = cb; }
    void setQAbstractProxyModel_CustomEvent_Callback(QAbstractProxyModel_CustomEvent_Callback cb) { qabstractproxymodel_customevent_callback = cb; }
    void setQAbstractProxyModel_ConnectNotify_Callback(QAbstractProxyModel_ConnectNotify_Callback cb) { qabstractproxymodel_connectnotify_callback = cb; }
    void setQAbstractProxyModel_DisconnectNotify_Callback(QAbstractProxyModel_DisconnectNotify_Callback cb) { qabstractproxymodel_disconnectnotify_callback = cb; }
    void setQAbstractProxyModel_CreateSourceIndex_Callback(QAbstractProxyModel_CreateSourceIndex_Callback cb) { qabstractproxymodel_createsourceindex_callback = cb; }
    void setQAbstractProxyModel_CreateIndex_Callback(QAbstractProxyModel_CreateIndex_Callback cb) { qabstractproxymodel_createindex_callback = cb; }
    void setQAbstractProxyModel_EncodeData_Callback(QAbstractProxyModel_EncodeData_Callback cb) { qabstractproxymodel_encodedata_callback = cb; }
    void setQAbstractProxyModel_DecodeData_Callback(QAbstractProxyModel_DecodeData_Callback cb) { qabstractproxymodel_decodedata_callback = cb; }
    void setQAbstractProxyModel_BeginInsertRows_Callback(QAbstractProxyModel_BeginInsertRows_Callback cb) { qabstractproxymodel_begininsertrows_callback = cb; }
    void setQAbstractProxyModel_EndInsertRows_Callback(QAbstractProxyModel_EndInsertRows_Callback cb) { qabstractproxymodel_endinsertrows_callback = cb; }
    void setQAbstractProxyModel_BeginRemoveRows_Callback(QAbstractProxyModel_BeginRemoveRows_Callback cb) { qabstractproxymodel_beginremoverows_callback = cb; }
    void setQAbstractProxyModel_EndRemoveRows_Callback(QAbstractProxyModel_EndRemoveRows_Callback cb) { qabstractproxymodel_endremoverows_callback = cb; }
    void setQAbstractProxyModel_BeginMoveRows_Callback(QAbstractProxyModel_BeginMoveRows_Callback cb) { qabstractproxymodel_beginmoverows_callback = cb; }
    void setQAbstractProxyModel_EndMoveRows_Callback(QAbstractProxyModel_EndMoveRows_Callback cb) { qabstractproxymodel_endmoverows_callback = cb; }
    void setQAbstractProxyModel_BeginInsertColumns_Callback(QAbstractProxyModel_BeginInsertColumns_Callback cb) { qabstractproxymodel_begininsertcolumns_callback = cb; }
    void setQAbstractProxyModel_EndInsertColumns_Callback(QAbstractProxyModel_EndInsertColumns_Callback cb) { qabstractproxymodel_endinsertcolumns_callback = cb; }
    void setQAbstractProxyModel_BeginRemoveColumns_Callback(QAbstractProxyModel_BeginRemoveColumns_Callback cb) { qabstractproxymodel_beginremovecolumns_callback = cb; }
    void setQAbstractProxyModel_EndRemoveColumns_Callback(QAbstractProxyModel_EndRemoveColumns_Callback cb) { qabstractproxymodel_endremovecolumns_callback = cb; }
    void setQAbstractProxyModel_BeginMoveColumns_Callback(QAbstractProxyModel_BeginMoveColumns_Callback cb) { qabstractproxymodel_beginmovecolumns_callback = cb; }
    void setQAbstractProxyModel_EndMoveColumns_Callback(QAbstractProxyModel_EndMoveColumns_Callback cb) { qabstractproxymodel_endmovecolumns_callback = cb; }
    void setQAbstractProxyModel_BeginResetModel_Callback(QAbstractProxyModel_BeginResetModel_Callback cb) { qabstractproxymodel_beginresetmodel_callback = cb; }
    void setQAbstractProxyModel_EndResetModel_Callback(QAbstractProxyModel_EndResetModel_Callback cb) { qabstractproxymodel_endresetmodel_callback = cb; }
    void setQAbstractProxyModel_ChangePersistentIndex_Callback(QAbstractProxyModel_ChangePersistentIndex_Callback cb) { qabstractproxymodel_changepersistentindex_callback = cb; }
    void setQAbstractProxyModel_ChangePersistentIndexList_Callback(QAbstractProxyModel_ChangePersistentIndexList_Callback cb) { qabstractproxymodel_changepersistentindexlist_callback = cb; }
    void setQAbstractProxyModel_PersistentIndexList_Callback(QAbstractProxyModel_PersistentIndexList_Callback cb) { qabstractproxymodel_persistentindexlist_callback = cb; }
    void setQAbstractProxyModel_Sender_Callback(QAbstractProxyModel_Sender_Callback cb) { qabstractproxymodel_sender_callback = cb; }
    void setQAbstractProxyModel_SenderSignalIndex_Callback(QAbstractProxyModel_SenderSignalIndex_Callback cb) { qabstractproxymodel_sendersignalindex_callback = cb; }
    void setQAbstractProxyModel_Receivers_Callback(QAbstractProxyModel_Receivers_Callback cb) { qabstractproxymodel_receivers_callback = cb; }
    void setQAbstractProxyModel_IsSignalConnected_Callback(QAbstractProxyModel_IsSignalConnected_Callback cb) { qabstractproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAbstractProxyModel_Metacall_IsBase(bool value) const { qabstractproxymodel_metacall_isbase = value; }
    void setQAbstractProxyModel_SetSourceModel_IsBase(bool value) const { qabstractproxymodel_setsourcemodel_isbase = value; }
    void setQAbstractProxyModel_MapToSource_IsBase(bool value) const { qabstractproxymodel_maptosource_isbase = value; }
    void setQAbstractProxyModel_MapFromSource_IsBase(bool value) const { qabstractproxymodel_mapfromsource_isbase = value; }
    void setQAbstractProxyModel_MapSelectionToSource_IsBase(bool value) const { qabstractproxymodel_mapselectiontosource_isbase = value; }
    void setQAbstractProxyModel_MapSelectionFromSource_IsBase(bool value) const { qabstractproxymodel_mapselectionfromsource_isbase = value; }
    void setQAbstractProxyModel_Submit_IsBase(bool value) const { qabstractproxymodel_submit_isbase = value; }
    void setQAbstractProxyModel_Revert_IsBase(bool value) const { qabstractproxymodel_revert_isbase = value; }
    void setQAbstractProxyModel_Data_IsBase(bool value) const { qabstractproxymodel_data_isbase = value; }
    void setQAbstractProxyModel_HeaderData_IsBase(bool value) const { qabstractproxymodel_headerdata_isbase = value; }
    void setQAbstractProxyModel_ItemData_IsBase(bool value) const { qabstractproxymodel_itemdata_isbase = value; }
    void setQAbstractProxyModel_Flags_IsBase(bool value) const { qabstractproxymodel_flags_isbase = value; }
    void setQAbstractProxyModel_SetData_IsBase(bool value) const { qabstractproxymodel_setdata_isbase = value; }
    void setQAbstractProxyModel_SetItemData_IsBase(bool value) const { qabstractproxymodel_setitemdata_isbase = value; }
    void setQAbstractProxyModel_SetHeaderData_IsBase(bool value) const { qabstractproxymodel_setheaderdata_isbase = value; }
    void setQAbstractProxyModel_ClearItemData_IsBase(bool value) const { qabstractproxymodel_clearitemdata_isbase = value; }
    void setQAbstractProxyModel_Buddy_IsBase(bool value) const { qabstractproxymodel_buddy_isbase = value; }
    void setQAbstractProxyModel_CanFetchMore_IsBase(bool value) const { qabstractproxymodel_canfetchmore_isbase = value; }
    void setQAbstractProxyModel_FetchMore_IsBase(bool value) const { qabstractproxymodel_fetchmore_isbase = value; }
    void setQAbstractProxyModel_Sort_IsBase(bool value) const { qabstractproxymodel_sort_isbase = value; }
    void setQAbstractProxyModel_Span_IsBase(bool value) const { qabstractproxymodel_span_isbase = value; }
    void setQAbstractProxyModel_HasChildren_IsBase(bool value) const { qabstractproxymodel_haschildren_isbase = value; }
    void setQAbstractProxyModel_Sibling_IsBase(bool value) const { qabstractproxymodel_sibling_isbase = value; }
    void setQAbstractProxyModel_MimeData_IsBase(bool value) const { qabstractproxymodel_mimedata_isbase = value; }
    void setQAbstractProxyModel_CanDropMimeData_IsBase(bool value) const { qabstractproxymodel_candropmimedata_isbase = value; }
    void setQAbstractProxyModel_DropMimeData_IsBase(bool value) const { qabstractproxymodel_dropmimedata_isbase = value; }
    void setQAbstractProxyModel_MimeTypes_IsBase(bool value) const { qabstractproxymodel_mimetypes_isbase = value; }
    void setQAbstractProxyModel_SupportedDragActions_IsBase(bool value) const { qabstractproxymodel_supporteddragactions_isbase = value; }
    void setQAbstractProxyModel_SupportedDropActions_IsBase(bool value) const { qabstractproxymodel_supporteddropactions_isbase = value; }
    void setQAbstractProxyModel_RoleNames_IsBase(bool value) const { qabstractproxymodel_rolenames_isbase = value; }
    void setQAbstractProxyModel_Index_IsBase(bool value) const { qabstractproxymodel_index_isbase = value; }
    void setQAbstractProxyModel_Parent_IsBase(bool value) const { qabstractproxymodel_parent_isbase = value; }
    void setQAbstractProxyModel_RowCount_IsBase(bool value) const { qabstractproxymodel_rowcount_isbase = value; }
    void setQAbstractProxyModel_ColumnCount_IsBase(bool value) const { qabstractproxymodel_columncount_isbase = value; }
    void setQAbstractProxyModel_InsertRows_IsBase(bool value) const { qabstractproxymodel_insertrows_isbase = value; }
    void setQAbstractProxyModel_InsertColumns_IsBase(bool value) const { qabstractproxymodel_insertcolumns_isbase = value; }
    void setQAbstractProxyModel_RemoveRows_IsBase(bool value) const { qabstractproxymodel_removerows_isbase = value; }
    void setQAbstractProxyModel_RemoveColumns_IsBase(bool value) const { qabstractproxymodel_removecolumns_isbase = value; }
    void setQAbstractProxyModel_MoveRows_IsBase(bool value) const { qabstractproxymodel_moverows_isbase = value; }
    void setQAbstractProxyModel_MoveColumns_IsBase(bool value) const { qabstractproxymodel_movecolumns_isbase = value; }
    void setQAbstractProxyModel_Match_IsBase(bool value) const { qabstractproxymodel_match_isbase = value; }
    void setQAbstractProxyModel_MultiData_IsBase(bool value) const { qabstractproxymodel_multidata_isbase = value; }
    void setQAbstractProxyModel_ResetInternalData_IsBase(bool value) const { qabstractproxymodel_resetinternaldata_isbase = value; }
    void setQAbstractProxyModel_Event_IsBase(bool value) const { qabstractproxymodel_event_isbase = value; }
    void setQAbstractProxyModel_EventFilter_IsBase(bool value) const { qabstractproxymodel_eventfilter_isbase = value; }
    void setQAbstractProxyModel_TimerEvent_IsBase(bool value) const { qabstractproxymodel_timerevent_isbase = value; }
    void setQAbstractProxyModel_ChildEvent_IsBase(bool value) const { qabstractproxymodel_childevent_isbase = value; }
    void setQAbstractProxyModel_CustomEvent_IsBase(bool value) const { qabstractproxymodel_customevent_isbase = value; }
    void setQAbstractProxyModel_ConnectNotify_IsBase(bool value) const { qabstractproxymodel_connectnotify_isbase = value; }
    void setQAbstractProxyModel_DisconnectNotify_IsBase(bool value) const { qabstractproxymodel_disconnectnotify_isbase = value; }
    void setQAbstractProxyModel_CreateSourceIndex_IsBase(bool value) const { qabstractproxymodel_createsourceindex_isbase = value; }
    void setQAbstractProxyModel_CreateIndex_IsBase(bool value) const { qabstractproxymodel_createindex_isbase = value; }
    void setQAbstractProxyModel_EncodeData_IsBase(bool value) const { qabstractproxymodel_encodedata_isbase = value; }
    void setQAbstractProxyModel_DecodeData_IsBase(bool value) const { qabstractproxymodel_decodedata_isbase = value; }
    void setQAbstractProxyModel_BeginInsertRows_IsBase(bool value) const { qabstractproxymodel_begininsertrows_isbase = value; }
    void setQAbstractProxyModel_EndInsertRows_IsBase(bool value) const { qabstractproxymodel_endinsertrows_isbase = value; }
    void setQAbstractProxyModel_BeginRemoveRows_IsBase(bool value) const { qabstractproxymodel_beginremoverows_isbase = value; }
    void setQAbstractProxyModel_EndRemoveRows_IsBase(bool value) const { qabstractproxymodel_endremoverows_isbase = value; }
    void setQAbstractProxyModel_BeginMoveRows_IsBase(bool value) const { qabstractproxymodel_beginmoverows_isbase = value; }
    void setQAbstractProxyModel_EndMoveRows_IsBase(bool value) const { qabstractproxymodel_endmoverows_isbase = value; }
    void setQAbstractProxyModel_BeginInsertColumns_IsBase(bool value) const { qabstractproxymodel_begininsertcolumns_isbase = value; }
    void setQAbstractProxyModel_EndInsertColumns_IsBase(bool value) const { qabstractproxymodel_endinsertcolumns_isbase = value; }
    void setQAbstractProxyModel_BeginRemoveColumns_IsBase(bool value) const { qabstractproxymodel_beginremovecolumns_isbase = value; }
    void setQAbstractProxyModel_EndRemoveColumns_IsBase(bool value) const { qabstractproxymodel_endremovecolumns_isbase = value; }
    void setQAbstractProxyModel_BeginMoveColumns_IsBase(bool value) const { qabstractproxymodel_beginmovecolumns_isbase = value; }
    void setQAbstractProxyModel_EndMoveColumns_IsBase(bool value) const { qabstractproxymodel_endmovecolumns_isbase = value; }
    void setQAbstractProxyModel_BeginResetModel_IsBase(bool value) const { qabstractproxymodel_beginresetmodel_isbase = value; }
    void setQAbstractProxyModel_EndResetModel_IsBase(bool value) const { qabstractproxymodel_endresetmodel_isbase = value; }
    void setQAbstractProxyModel_ChangePersistentIndex_IsBase(bool value) const { qabstractproxymodel_changepersistentindex_isbase = value; }
    void setQAbstractProxyModel_ChangePersistentIndexList_IsBase(bool value) const { qabstractproxymodel_changepersistentindexlist_isbase = value; }
    void setQAbstractProxyModel_PersistentIndexList_IsBase(bool value) const { qabstractproxymodel_persistentindexlist_isbase = value; }
    void setQAbstractProxyModel_Sender_IsBase(bool value) const { qabstractproxymodel_sender_isbase = value; }
    void setQAbstractProxyModel_SenderSignalIndex_IsBase(bool value) const { qabstractproxymodel_sendersignalindex_isbase = value; }
    void setQAbstractProxyModel_Receivers_IsBase(bool value) const { qabstractproxymodel_receivers_isbase = value; }
    void setQAbstractProxyModel_IsSignalConnected_IsBase(bool value) const { qabstractproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractproxymodel_metacall_isbase) {
            qabstractproxymodel_metacall_isbase = false;
            return QAbstractProxyModel::qt_metacall(param1, param2, param3);
        } else if (qabstractproxymodel_metacall_callback != nullptr) {
            return qabstractproxymodel_metacall_callback(this, param1, param2, param3);
        } else {
            return QAbstractProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (qabstractproxymodel_setsourcemodel_isbase) {
            qabstractproxymodel_setsourcemodel_isbase = false;
            QAbstractProxyModel::setSourceModel(sourceModel);
        } else if (qabstractproxymodel_setsourcemodel_callback != nullptr) {
            qabstractproxymodel_setsourcemodel_callback(this, sourceModel);
        } else {
            QAbstractProxyModel::setSourceModel(sourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        return qabstractproxymodel_maptosource_callback(this, proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        return qabstractproxymodel_mapfromsource_callback(this, sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (qabstractproxymodel_mapselectiontosource_isbase) {
            qabstractproxymodel_mapselectiontosource_isbase = false;
            return QAbstractProxyModel::mapSelectionToSource(selection);
        } else if (qabstractproxymodel_mapselectiontosource_callback != nullptr) {
            return qabstractproxymodel_mapselectiontosource_callback(this, selection);
        } else {
            return QAbstractProxyModel::mapSelectionToSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (qabstractproxymodel_mapselectionfromsource_isbase) {
            qabstractproxymodel_mapselectionfromsource_isbase = false;
            return QAbstractProxyModel::mapSelectionFromSource(selection);
        } else if (qabstractproxymodel_mapselectionfromsource_callback != nullptr) {
            return qabstractproxymodel_mapselectionfromsource_callback(this, selection);
        } else {
            return QAbstractProxyModel::mapSelectionFromSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qabstractproxymodel_submit_isbase) {
            qabstractproxymodel_submit_isbase = false;
            return QAbstractProxyModel::submit();
        } else if (qabstractproxymodel_submit_callback != nullptr) {
            return qabstractproxymodel_submit_callback();
        } else {
            return QAbstractProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qabstractproxymodel_revert_isbase) {
            qabstractproxymodel_revert_isbase = false;
            QAbstractProxyModel::revert();
        } else if (qabstractproxymodel_revert_callback != nullptr) {
            qabstractproxymodel_revert_callback();
        } else {
            QAbstractProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (qabstractproxymodel_data_isbase) {
            qabstractproxymodel_data_isbase = false;
            return QAbstractProxyModel::data(proxyIndex, role);
        } else if (qabstractproxymodel_data_callback != nullptr) {
            return qabstractproxymodel_data_callback(this, proxyIndex, role);
        } else {
            return QAbstractProxyModel::data(proxyIndex, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qabstractproxymodel_headerdata_isbase) {
            qabstractproxymodel_headerdata_isbase = false;
            return QAbstractProxyModel::headerData(section, orientation, role);
        } else if (qabstractproxymodel_headerdata_callback != nullptr) {
            return qabstractproxymodel_headerdata_callback(this, section, orientation, role);
        } else {
            return QAbstractProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qabstractproxymodel_itemdata_isbase) {
            qabstractproxymodel_itemdata_isbase = false;
            return QAbstractProxyModel::itemData(index);
        } else if (qabstractproxymodel_itemdata_callback != nullptr) {
            return qabstractproxymodel_itemdata_callback(this, index);
        } else {
            return QAbstractProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qabstractproxymodel_flags_isbase) {
            qabstractproxymodel_flags_isbase = false;
            return QAbstractProxyModel::flags(index);
        } else if (qabstractproxymodel_flags_callback != nullptr) {
            return qabstractproxymodel_flags_callback(this, index);
        } else {
            return QAbstractProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qabstractproxymodel_setdata_isbase) {
            qabstractproxymodel_setdata_isbase = false;
            return QAbstractProxyModel::setData(index, value, role);
        } else if (qabstractproxymodel_setdata_callback != nullptr) {
            return qabstractproxymodel_setdata_callback(this, index, value, role);
        } else {
            return QAbstractProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qabstractproxymodel_setitemdata_isbase) {
            qabstractproxymodel_setitemdata_isbase = false;
            return QAbstractProxyModel::setItemData(index, roles);
        } else if (qabstractproxymodel_setitemdata_callback != nullptr) {
            return qabstractproxymodel_setitemdata_callback(this, index, roles);
        } else {
            return QAbstractProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qabstractproxymodel_setheaderdata_isbase) {
            qabstractproxymodel_setheaderdata_isbase = false;
            return QAbstractProxyModel::setHeaderData(section, orientation, value, role);
        } else if (qabstractproxymodel_setheaderdata_callback != nullptr) {
            return qabstractproxymodel_setheaderdata_callback(this, section, orientation, value, role);
        } else {
            return QAbstractProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qabstractproxymodel_clearitemdata_isbase) {
            qabstractproxymodel_clearitemdata_isbase = false;
            return QAbstractProxyModel::clearItemData(index);
        } else if (qabstractproxymodel_clearitemdata_callback != nullptr) {
            return qabstractproxymodel_clearitemdata_callback(this, index);
        } else {
            return QAbstractProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qabstractproxymodel_buddy_isbase) {
            qabstractproxymodel_buddy_isbase = false;
            return QAbstractProxyModel::buddy(index);
        } else if (qabstractproxymodel_buddy_callback != nullptr) {
            return qabstractproxymodel_buddy_callback(this, index);
        } else {
            return QAbstractProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qabstractproxymodel_canfetchmore_isbase) {
            qabstractproxymodel_canfetchmore_isbase = false;
            return QAbstractProxyModel::canFetchMore(parent);
        } else if (qabstractproxymodel_canfetchmore_callback != nullptr) {
            return qabstractproxymodel_canfetchmore_callback(this, parent);
        } else {
            return QAbstractProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qabstractproxymodel_fetchmore_isbase) {
            qabstractproxymodel_fetchmore_isbase = false;
            QAbstractProxyModel::fetchMore(parent);
        } else if (qabstractproxymodel_fetchmore_callback != nullptr) {
            qabstractproxymodel_fetchmore_callback(this, parent);
        } else {
            QAbstractProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qabstractproxymodel_sort_isbase) {
            qabstractproxymodel_sort_isbase = false;
            QAbstractProxyModel::sort(column, order);
        } else if (qabstractproxymodel_sort_callback != nullptr) {
            qabstractproxymodel_sort_callback(this, column, order);
        } else {
            QAbstractProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qabstractproxymodel_span_isbase) {
            qabstractproxymodel_span_isbase = false;
            return QAbstractProxyModel::span(index);
        } else if (qabstractproxymodel_span_callback != nullptr) {
            return qabstractproxymodel_span_callback(this, index);
        } else {
            return QAbstractProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qabstractproxymodel_haschildren_isbase) {
            qabstractproxymodel_haschildren_isbase = false;
            return QAbstractProxyModel::hasChildren(parent);
        } else if (qabstractproxymodel_haschildren_callback != nullptr) {
            return qabstractproxymodel_haschildren_callback(this, parent);
        } else {
            return QAbstractProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qabstractproxymodel_sibling_isbase) {
            qabstractproxymodel_sibling_isbase = false;
            return QAbstractProxyModel::sibling(row, column, idx);
        } else if (qabstractproxymodel_sibling_callback != nullptr) {
            return qabstractproxymodel_sibling_callback(this, row, column, idx);
        } else {
            return QAbstractProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
        if (qabstractproxymodel_mimedata_isbase) {
            qabstractproxymodel_mimedata_isbase = false;
            return QAbstractProxyModel::mimeData(indexes);
        } else if (qabstractproxymodel_mimedata_callback != nullptr) {
            return qabstractproxymodel_mimedata_callback(this, indexes);
        } else {
            return QAbstractProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qabstractproxymodel_candropmimedata_isbase) {
            qabstractproxymodel_candropmimedata_isbase = false;
            return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (qabstractproxymodel_candropmimedata_callback != nullptr) {
            return qabstractproxymodel_candropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qabstractproxymodel_dropmimedata_isbase) {
            qabstractproxymodel_dropmimedata_isbase = false;
            return QAbstractProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (qabstractproxymodel_dropmimedata_callback != nullptr) {
            return qabstractproxymodel_dropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QAbstractProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qabstractproxymodel_mimetypes_isbase) {
            qabstractproxymodel_mimetypes_isbase = false;
            return QAbstractProxyModel::mimeTypes();
        } else if (qabstractproxymodel_mimetypes_callback != nullptr) {
            return qabstractproxymodel_mimetypes_callback();
        } else {
            return QAbstractProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qabstractproxymodel_supporteddragactions_isbase) {
            qabstractproxymodel_supporteddragactions_isbase = false;
            return QAbstractProxyModel::supportedDragActions();
        } else if (qabstractproxymodel_supporteddragactions_callback != nullptr) {
            return qabstractproxymodel_supporteddragactions_callback();
        } else {
            return QAbstractProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qabstractproxymodel_supporteddropactions_isbase) {
            qabstractproxymodel_supporteddropactions_isbase = false;
            return QAbstractProxyModel::supportedDropActions();
        } else if (qabstractproxymodel_supporteddropactions_callback != nullptr) {
            return qabstractproxymodel_supporteddropactions_callback();
        } else {
            return QAbstractProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qabstractproxymodel_rolenames_isbase) {
            qabstractproxymodel_rolenames_isbase = false;
            return QAbstractProxyModel::roleNames();
        } else if (qabstractproxymodel_rolenames_callback != nullptr) {
            return qabstractproxymodel_rolenames_callback();
        } else {
            return QAbstractProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        return qabstractproxymodel_index_callback(this, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        return qabstractproxymodel_parent_callback(this, child);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        return qabstractproxymodel_rowcount_callback(this, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        return qabstractproxymodel_columncount_callback(this, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_insertrows_isbase) {
            qabstractproxymodel_insertrows_isbase = false;
            return QAbstractProxyModel::insertRows(row, count, parent);
        } else if (qabstractproxymodel_insertrows_callback != nullptr) {
            return qabstractproxymodel_insertrows_callback(this, row, count, parent);
        } else {
            return QAbstractProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_insertcolumns_isbase) {
            qabstractproxymodel_insertcolumns_isbase = false;
            return QAbstractProxyModel::insertColumns(column, count, parent);
        } else if (qabstractproxymodel_insertcolumns_callback != nullptr) {
            return qabstractproxymodel_insertcolumns_callback(this, column, count, parent);
        } else {
            return QAbstractProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_removerows_isbase) {
            qabstractproxymodel_removerows_isbase = false;
            return QAbstractProxyModel::removeRows(row, count, parent);
        } else if (qabstractproxymodel_removerows_callback != nullptr) {
            return qabstractproxymodel_removerows_callback(this, row, count, parent);
        } else {
            return QAbstractProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_removecolumns_isbase) {
            qabstractproxymodel_removecolumns_isbase = false;
            return QAbstractProxyModel::removeColumns(column, count, parent);
        } else if (qabstractproxymodel_removecolumns_callback != nullptr) {
            return qabstractproxymodel_removecolumns_callback(this, column, count, parent);
        } else {
            return QAbstractProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractproxymodel_moverows_isbase) {
            qabstractproxymodel_moverows_isbase = false;
            return QAbstractProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qabstractproxymodel_moverows_callback != nullptr) {
            return qabstractproxymodel_moverows_callback(this, sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else {
            return QAbstractProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractproxymodel_movecolumns_isbase) {
            qabstractproxymodel_movecolumns_isbase = false;
            return QAbstractProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qabstractproxymodel_movecolumns_callback != nullptr) {
            return qabstractproxymodel_movecolumns_callback(this, sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else {
            return QAbstractProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qabstractproxymodel_match_isbase) {
            qabstractproxymodel_match_isbase = false;
            return QAbstractProxyModel::match(start, role, value, hits, flags);
        } else if (qabstractproxymodel_match_callback != nullptr) {
            return qabstractproxymodel_match_callback(this, start, role, value, hits, flags);
        } else {
            return QAbstractProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qabstractproxymodel_multidata_isbase) {
            qabstractproxymodel_multidata_isbase = false;
            QAbstractProxyModel::multiData(index, roleDataSpan);
        } else if (qabstractproxymodel_multidata_callback != nullptr) {
            qabstractproxymodel_multidata_callback(this, index, roleDataSpan);
        } else {
            QAbstractProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qabstractproxymodel_resetinternaldata_isbase) {
            qabstractproxymodel_resetinternaldata_isbase = false;
            QAbstractProxyModel::resetInternalData();
        } else if (qabstractproxymodel_resetinternaldata_callback != nullptr) {
            qabstractproxymodel_resetinternaldata_callback();
        } else {
            QAbstractProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractproxymodel_event_isbase) {
            qabstractproxymodel_event_isbase = false;
            return QAbstractProxyModel::event(event);
        } else if (qabstractproxymodel_event_callback != nullptr) {
            return qabstractproxymodel_event_callback(this, event);
        } else {
            return QAbstractProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractproxymodel_eventfilter_isbase) {
            qabstractproxymodel_eventfilter_isbase = false;
            return QAbstractProxyModel::eventFilter(watched, event);
        } else if (qabstractproxymodel_eventfilter_callback != nullptr) {
            return qabstractproxymodel_eventfilter_callback(this, watched, event);
        } else {
            return QAbstractProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractproxymodel_timerevent_isbase) {
            qabstractproxymodel_timerevent_isbase = false;
            QAbstractProxyModel::timerEvent(event);
        } else if (qabstractproxymodel_timerevent_callback != nullptr) {
            qabstractproxymodel_timerevent_callback(this, event);
        } else {
            QAbstractProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractproxymodel_childevent_isbase) {
            qabstractproxymodel_childevent_isbase = false;
            QAbstractProxyModel::childEvent(event);
        } else if (qabstractproxymodel_childevent_callback != nullptr) {
            qabstractproxymodel_childevent_callback(this, event);
        } else {
            QAbstractProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractproxymodel_customevent_isbase) {
            qabstractproxymodel_customevent_isbase = false;
            QAbstractProxyModel::customEvent(event);
        } else if (qabstractproxymodel_customevent_callback != nullptr) {
            qabstractproxymodel_customevent_callback(this, event);
        } else {
            QAbstractProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractproxymodel_connectnotify_isbase) {
            qabstractproxymodel_connectnotify_isbase = false;
            QAbstractProxyModel::connectNotify(signal);
        } else if (qabstractproxymodel_connectnotify_callback != nullptr) {
            qabstractproxymodel_connectnotify_callback(this, signal);
        } else {
            QAbstractProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractproxymodel_disconnectnotify_isbase) {
            qabstractproxymodel_disconnectnotify_isbase = false;
            QAbstractProxyModel::disconnectNotify(signal);
        } else if (qabstractproxymodel_disconnectnotify_callback != nullptr) {
            qabstractproxymodel_disconnectnotify_callback(this, signal);
        } else {
            QAbstractProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (qabstractproxymodel_createsourceindex_isbase) {
            qabstractproxymodel_createsourceindex_isbase = false;
            return QAbstractProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (qabstractproxymodel_createsourceindex_callback != nullptr) {
            return qabstractproxymodel_createsourceindex_callback(this, row, col, internalPtr);
        } else {
            return QAbstractProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qabstractproxymodel_createindex_isbase) {
            qabstractproxymodel_createindex_isbase = false;
            return QAbstractProxyModel::createIndex(row, column);
        } else if (qabstractproxymodel_createindex_callback != nullptr) {
            return qabstractproxymodel_createindex_callback(this, row, column);
        } else {
            return QAbstractProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QModelIndexList& indexes, QDataStream& stream) const {
        if (qabstractproxymodel_encodedata_isbase) {
            qabstractproxymodel_encodedata_isbase = false;
            QAbstractProxyModel::encodeData(indexes, stream);
        } else if (qabstractproxymodel_encodedata_callback != nullptr) {
            qabstractproxymodel_encodedata_callback(this, indexes, stream);
        } else {
            QAbstractProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qabstractproxymodel_decodedata_isbase) {
            qabstractproxymodel_decodedata_isbase = false;
            return QAbstractProxyModel::decodeData(row, column, parent, stream);
        } else if (qabstractproxymodel_decodedata_callback != nullptr) {
            return qabstractproxymodel_decodedata_callback(this, row, column, parent, stream);
        } else {
            return QAbstractProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qabstractproxymodel_begininsertrows_isbase) {
            qabstractproxymodel_begininsertrows_isbase = false;
            QAbstractProxyModel::beginInsertRows(parent, first, last);
        } else if (qabstractproxymodel_begininsertrows_callback != nullptr) {
            qabstractproxymodel_begininsertrows_callback(this, parent, first, last);
        } else {
            QAbstractProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qabstractproxymodel_endinsertrows_isbase) {
            qabstractproxymodel_endinsertrows_isbase = false;
            QAbstractProxyModel::endInsertRows();
        } else if (qabstractproxymodel_endinsertrows_callback != nullptr) {
            qabstractproxymodel_endinsertrows_callback();
        } else {
            QAbstractProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qabstractproxymodel_beginremoverows_isbase) {
            qabstractproxymodel_beginremoverows_isbase = false;
            QAbstractProxyModel::beginRemoveRows(parent, first, last);
        } else if (qabstractproxymodel_beginremoverows_callback != nullptr) {
            qabstractproxymodel_beginremoverows_callback(this, parent, first, last);
        } else {
            QAbstractProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qabstractproxymodel_endremoverows_isbase) {
            qabstractproxymodel_endremoverows_isbase = false;
            QAbstractProxyModel::endRemoveRows();
        } else if (qabstractproxymodel_endremoverows_callback != nullptr) {
            qabstractproxymodel_endremoverows_callback();
        } else {
            QAbstractProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qabstractproxymodel_beginmoverows_isbase) {
            qabstractproxymodel_beginmoverows_isbase = false;
            return QAbstractProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qabstractproxymodel_beginmoverows_callback != nullptr) {
            return qabstractproxymodel_beginmoverows_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else {
            return QAbstractProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qabstractproxymodel_endmoverows_isbase) {
            qabstractproxymodel_endmoverows_isbase = false;
            QAbstractProxyModel::endMoveRows();
        } else if (qabstractproxymodel_endmoverows_callback != nullptr) {
            qabstractproxymodel_endmoverows_callback();
        } else {
            QAbstractProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qabstractproxymodel_begininsertcolumns_isbase) {
            qabstractproxymodel_begininsertcolumns_isbase = false;
            QAbstractProxyModel::beginInsertColumns(parent, first, last);
        } else if (qabstractproxymodel_begininsertcolumns_callback != nullptr) {
            qabstractproxymodel_begininsertcolumns_callback(this, parent, first, last);
        } else {
            QAbstractProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qabstractproxymodel_endinsertcolumns_isbase) {
            qabstractproxymodel_endinsertcolumns_isbase = false;
            QAbstractProxyModel::endInsertColumns();
        } else if (qabstractproxymodel_endinsertcolumns_callback != nullptr) {
            qabstractproxymodel_endinsertcolumns_callback();
        } else {
            QAbstractProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qabstractproxymodel_beginremovecolumns_isbase) {
            qabstractproxymodel_beginremovecolumns_isbase = false;
            QAbstractProxyModel::beginRemoveColumns(parent, first, last);
        } else if (qabstractproxymodel_beginremovecolumns_callback != nullptr) {
            qabstractproxymodel_beginremovecolumns_callback(this, parent, first, last);
        } else {
            QAbstractProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qabstractproxymodel_endremovecolumns_isbase) {
            qabstractproxymodel_endremovecolumns_isbase = false;
            QAbstractProxyModel::endRemoveColumns();
        } else if (qabstractproxymodel_endremovecolumns_callback != nullptr) {
            qabstractproxymodel_endremovecolumns_callback();
        } else {
            QAbstractProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qabstractproxymodel_beginmovecolumns_isbase) {
            qabstractproxymodel_beginmovecolumns_isbase = false;
            return QAbstractProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qabstractproxymodel_beginmovecolumns_callback != nullptr) {
            return qabstractproxymodel_beginmovecolumns_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else {
            return QAbstractProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qabstractproxymodel_endmovecolumns_isbase) {
            qabstractproxymodel_endmovecolumns_isbase = false;
            QAbstractProxyModel::endMoveColumns();
        } else if (qabstractproxymodel_endmovecolumns_callback != nullptr) {
            qabstractproxymodel_endmovecolumns_callback();
        } else {
            QAbstractProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qabstractproxymodel_beginresetmodel_isbase) {
            qabstractproxymodel_beginresetmodel_isbase = false;
            QAbstractProxyModel::beginResetModel();
        } else if (qabstractproxymodel_beginresetmodel_callback != nullptr) {
            qabstractproxymodel_beginresetmodel_callback();
        } else {
            QAbstractProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qabstractproxymodel_endresetmodel_isbase) {
            qabstractproxymodel_endresetmodel_isbase = false;
            QAbstractProxyModel::endResetModel();
        } else if (qabstractproxymodel_endresetmodel_callback != nullptr) {
            qabstractproxymodel_endresetmodel_callback();
        } else {
            QAbstractProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qabstractproxymodel_changepersistentindex_isbase) {
            qabstractproxymodel_changepersistentindex_isbase = false;
            QAbstractProxyModel::changePersistentIndex(from, to);
        } else if (qabstractproxymodel_changepersistentindex_callback != nullptr) {
            qabstractproxymodel_changepersistentindex_callback(this, from, to);
        } else {
            QAbstractProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QModelIndexList& from, const QModelIndexList& to) {
        if (qabstractproxymodel_changepersistentindexlist_isbase) {
            qabstractproxymodel_changepersistentindexlist_isbase = false;
            QAbstractProxyModel::changePersistentIndexList(from, to);
        } else if (qabstractproxymodel_changepersistentindexlist_callback != nullptr) {
            qabstractproxymodel_changepersistentindexlist_callback(this, from, to);
        } else {
            QAbstractProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndexList persistentIndexList() const {
        if (qabstractproxymodel_persistentindexlist_isbase) {
            qabstractproxymodel_persistentindexlist_isbase = false;
            return QAbstractProxyModel::persistentIndexList();
        } else if (qabstractproxymodel_persistentindexlist_callback != nullptr) {
            return qabstractproxymodel_persistentindexlist_callback();
        } else {
            return QAbstractProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractproxymodel_sender_isbase) {
            qabstractproxymodel_sender_isbase = false;
            return QAbstractProxyModel::sender();
        } else if (qabstractproxymodel_sender_callback != nullptr) {
            return qabstractproxymodel_sender_callback();
        } else {
            return QAbstractProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractproxymodel_sendersignalindex_isbase) {
            qabstractproxymodel_sendersignalindex_isbase = false;
            return QAbstractProxyModel::senderSignalIndex();
        } else if (qabstractproxymodel_sendersignalindex_callback != nullptr) {
            return qabstractproxymodel_sendersignalindex_callback();
        } else {
            return QAbstractProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractproxymodel_receivers_isbase) {
            qabstractproxymodel_receivers_isbase = false;
            return QAbstractProxyModel::receivers(signal);
        } else if (qabstractproxymodel_receivers_callback != nullptr) {
            return qabstractproxymodel_receivers_callback(this, signal);
        } else {
            return QAbstractProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractproxymodel_issignalconnected_isbase) {
            qabstractproxymodel_issignalconnected_isbase = false;
            return QAbstractProxyModel::isSignalConnected(signal);
        } else if (qabstractproxymodel_issignalconnected_callback != nullptr) {
            return qabstractproxymodel_issignalconnected_callback(this, signal);
        } else {
            return QAbstractProxyModel::isSignalConnected(signal);
        }
    }
};

#endif
