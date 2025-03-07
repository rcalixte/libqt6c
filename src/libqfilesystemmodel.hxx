#pragma once
#ifndef SRCC_LIBVIRTUALQFILESYSTEMMODEL_H
#define SRCC_LIBVIRTUALQFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileSystemModel so that we can call protected methods
class VirtualQFileSystemModel : public QFileSystemModel {

  public:
    // Virtual class public types (including callbacks)
    using QFileSystemModel_Metacall_Callback = int (*)(QFileSystemModel*, QMetaObject::Call, int, void**);
    using QFileSystemModel_Index_Callback = QModelIndex (*)(const QFileSystemModel*, int, int, const QModelIndex&);
    using QFileSystemModel_Parent_Callback = QModelIndex (*)(const QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_Sibling_Callback = QModelIndex (*)(const QFileSystemModel*, int, int, const QModelIndex&);
    using QFileSystemModel_HasChildren_Callback = bool (*)(const QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_CanFetchMore_Callback = bool (*)(const QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_FetchMore_Callback = void (*)(QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_RowCount_Callback = int (*)(const QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_ColumnCount_Callback = int (*)(const QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_Data_Callback = QVariant (*)(const QFileSystemModel*, const QModelIndex&, int);
    using QFileSystemModel_SetData_Callback = bool (*)(QFileSystemModel*, const QModelIndex&, const QVariant&, int);
    using QFileSystemModel_HeaderData_Callback = QVariant (*)(const QFileSystemModel*, int, Qt::Orientation, int);
    using QFileSystemModel_Flags_Callback = Qt::ItemFlags (*)(const QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_Sort_Callback = void (*)(QFileSystemModel*, int, Qt::SortOrder);
    using QFileSystemModel_MimeTypes_Callback = QStringList (*)();
    using QFileSystemModel_MimeData_Callback = QMimeData* (*)(const QFileSystemModel*, const QModelIndexList&);
    using QFileSystemModel_DropMimeData_Callback = bool (*)(QFileSystemModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QFileSystemModel_SupportedDropActions_Callback = Qt::DropActions (*)();
    using QFileSystemModel_RoleNames_Callback = QHash<int, QByteArray> (*)();
    using QFileSystemModel_TimerEvent_Callback = void (*)(QFileSystemModel*, QTimerEvent*);
    using QFileSystemModel_Event_Callback = bool (*)(QFileSystemModel*, QEvent*);
    using QFileSystemModel_SetHeaderData_Callback = bool (*)(QFileSystemModel*, int, Qt::Orientation, const QVariant&, int);
    using QFileSystemModel_ItemData_Callback = QMap<int, QVariant> (*)(const QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_SetItemData_Callback = bool (*)(QFileSystemModel*, const QModelIndex&, const QMap<int, QVariant>&);
    using QFileSystemModel_ClearItemData_Callback = bool (*)(QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_CanDropMimeData_Callback = bool (*)(const QFileSystemModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QFileSystemModel_SupportedDragActions_Callback = Qt::DropActions (*)();
    using QFileSystemModel_InsertRows_Callback = bool (*)(QFileSystemModel*, int, int, const QModelIndex&);
    using QFileSystemModel_InsertColumns_Callback = bool (*)(QFileSystemModel*, int, int, const QModelIndex&);
    using QFileSystemModel_RemoveRows_Callback = bool (*)(QFileSystemModel*, int, int, const QModelIndex&);
    using QFileSystemModel_RemoveColumns_Callback = bool (*)(QFileSystemModel*, int, int, const QModelIndex&);
    using QFileSystemModel_MoveRows_Callback = bool (*)(QFileSystemModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QFileSystemModel_MoveColumns_Callback = bool (*)(QFileSystemModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QFileSystemModel_Buddy_Callback = QModelIndex (*)(const QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_Match_Callback = QModelIndexList (*)(const QFileSystemModel*, const QModelIndex&, int, const QVariant&, int, Qt::MatchFlags);
    using QFileSystemModel_Span_Callback = QSize (*)(const QFileSystemModel*, const QModelIndex&);
    using QFileSystemModel_MultiData_Callback = void (*)(const QFileSystemModel*, const QModelIndex&, QModelRoleDataSpan);
    using QFileSystemModel_Submit_Callback = bool (*)();
    using QFileSystemModel_Revert_Callback = void (*)();
    using QFileSystemModel_ResetInternalData_Callback = void (*)();
    using QFileSystemModel_EventFilter_Callback = bool (*)(QFileSystemModel*, QObject*, QEvent*);
    using QFileSystemModel_ChildEvent_Callback = void (*)(QFileSystemModel*, QChildEvent*);
    using QFileSystemModel_CustomEvent_Callback = void (*)(QFileSystemModel*, QEvent*);
    using QFileSystemModel_ConnectNotify_Callback = void (*)(QFileSystemModel*, const QMetaMethod&);
    using QFileSystemModel_DisconnectNotify_Callback = void (*)(QFileSystemModel*, const QMetaMethod&);
    using QFileSystemModel_CreateIndex_Callback = QModelIndex (*)(const QFileSystemModel*, int, int);
    using QFileSystemModel_EncodeData_Callback = void (*)(const QFileSystemModel*, const QModelIndexList&, QDataStream&);
    using QFileSystemModel_DecodeData_Callback = bool (*)(QFileSystemModel*, int, int, const QModelIndex&, QDataStream&);
    using QFileSystemModel_BeginInsertRows_Callback = void (*)(QFileSystemModel*, const QModelIndex&, int, int);
    using QFileSystemModel_EndInsertRows_Callback = void (*)();
    using QFileSystemModel_BeginRemoveRows_Callback = void (*)(QFileSystemModel*, const QModelIndex&, int, int);
    using QFileSystemModel_EndRemoveRows_Callback = void (*)();
    using QFileSystemModel_BeginMoveRows_Callback = bool (*)(QFileSystemModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QFileSystemModel_EndMoveRows_Callback = void (*)();
    using QFileSystemModel_BeginInsertColumns_Callback = void (*)(QFileSystemModel*, const QModelIndex&, int, int);
    using QFileSystemModel_EndInsertColumns_Callback = void (*)();
    using QFileSystemModel_BeginRemoveColumns_Callback = void (*)(QFileSystemModel*, const QModelIndex&, int, int);
    using QFileSystemModel_EndRemoveColumns_Callback = void (*)();
    using QFileSystemModel_BeginMoveColumns_Callback = bool (*)(QFileSystemModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QFileSystemModel_EndMoveColumns_Callback = void (*)();
    using QFileSystemModel_BeginResetModel_Callback = void (*)();
    using QFileSystemModel_EndResetModel_Callback = void (*)();
    using QFileSystemModel_ChangePersistentIndex_Callback = void (*)(QFileSystemModel*, const QModelIndex&, const QModelIndex&);
    using QFileSystemModel_ChangePersistentIndexList_Callback = void (*)(QFileSystemModel*, const QModelIndexList&, const QModelIndexList&);
    using QFileSystemModel_PersistentIndexList_Callback = QModelIndexList (*)();
    using QFileSystemModel_Sender_Callback = QObject* (*)();
    using QFileSystemModel_SenderSignalIndex_Callback = int (*)();
    using QFileSystemModel_Receivers_Callback = int (*)(const QFileSystemModel*, const char*);
    using QFileSystemModel_IsSignalConnected_Callback = bool (*)(const QFileSystemModel*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QFileSystemModel_Metacall_Callback qfilesystemmodel_metacall_callback = nullptr;
    QFileSystemModel_Index_Callback qfilesystemmodel_index_callback = nullptr;
    QFileSystemModel_Parent_Callback qfilesystemmodel_parent_callback = nullptr;
    QFileSystemModel_Sibling_Callback qfilesystemmodel_sibling_callback = nullptr;
    QFileSystemModel_HasChildren_Callback qfilesystemmodel_haschildren_callback = nullptr;
    QFileSystemModel_CanFetchMore_Callback qfilesystemmodel_canfetchmore_callback = nullptr;
    QFileSystemModel_FetchMore_Callback qfilesystemmodel_fetchmore_callback = nullptr;
    QFileSystemModel_RowCount_Callback qfilesystemmodel_rowcount_callback = nullptr;
    QFileSystemModel_ColumnCount_Callback qfilesystemmodel_columncount_callback = nullptr;
    QFileSystemModel_Data_Callback qfilesystemmodel_data_callback = nullptr;
    QFileSystemModel_SetData_Callback qfilesystemmodel_setdata_callback = nullptr;
    QFileSystemModel_HeaderData_Callback qfilesystemmodel_headerdata_callback = nullptr;
    QFileSystemModel_Flags_Callback qfilesystemmodel_flags_callback = nullptr;
    QFileSystemModel_Sort_Callback qfilesystemmodel_sort_callback = nullptr;
    QFileSystemModel_MimeTypes_Callback qfilesystemmodel_mimetypes_callback = nullptr;
    QFileSystemModel_MimeData_Callback qfilesystemmodel_mimedata_callback = nullptr;
    QFileSystemModel_DropMimeData_Callback qfilesystemmodel_dropmimedata_callback = nullptr;
    QFileSystemModel_SupportedDropActions_Callback qfilesystemmodel_supporteddropactions_callback = nullptr;
    QFileSystemModel_RoleNames_Callback qfilesystemmodel_rolenames_callback = nullptr;
    QFileSystemModel_TimerEvent_Callback qfilesystemmodel_timerevent_callback = nullptr;
    QFileSystemModel_Event_Callback qfilesystemmodel_event_callback = nullptr;
    QFileSystemModel_SetHeaderData_Callback qfilesystemmodel_setheaderdata_callback = nullptr;
    QFileSystemModel_ItemData_Callback qfilesystemmodel_itemdata_callback = nullptr;
    QFileSystemModel_SetItemData_Callback qfilesystemmodel_setitemdata_callback = nullptr;
    QFileSystemModel_ClearItemData_Callback qfilesystemmodel_clearitemdata_callback = nullptr;
    QFileSystemModel_CanDropMimeData_Callback qfilesystemmodel_candropmimedata_callback = nullptr;
    QFileSystemModel_SupportedDragActions_Callback qfilesystemmodel_supporteddragactions_callback = nullptr;
    QFileSystemModel_InsertRows_Callback qfilesystemmodel_insertrows_callback = nullptr;
    QFileSystemModel_InsertColumns_Callback qfilesystemmodel_insertcolumns_callback = nullptr;
    QFileSystemModel_RemoveRows_Callback qfilesystemmodel_removerows_callback = nullptr;
    QFileSystemModel_RemoveColumns_Callback qfilesystemmodel_removecolumns_callback = nullptr;
    QFileSystemModel_MoveRows_Callback qfilesystemmodel_moverows_callback = nullptr;
    QFileSystemModel_MoveColumns_Callback qfilesystemmodel_movecolumns_callback = nullptr;
    QFileSystemModel_Buddy_Callback qfilesystemmodel_buddy_callback = nullptr;
    QFileSystemModel_Match_Callback qfilesystemmodel_match_callback = nullptr;
    QFileSystemModel_Span_Callback qfilesystemmodel_span_callback = nullptr;
    QFileSystemModel_MultiData_Callback qfilesystemmodel_multidata_callback = nullptr;
    QFileSystemModel_Submit_Callback qfilesystemmodel_submit_callback = nullptr;
    QFileSystemModel_Revert_Callback qfilesystemmodel_revert_callback = nullptr;
    QFileSystemModel_ResetInternalData_Callback qfilesystemmodel_resetinternaldata_callback = nullptr;
    QFileSystemModel_EventFilter_Callback qfilesystemmodel_eventfilter_callback = nullptr;
    QFileSystemModel_ChildEvent_Callback qfilesystemmodel_childevent_callback = nullptr;
    QFileSystemModel_CustomEvent_Callback qfilesystemmodel_customevent_callback = nullptr;
    QFileSystemModel_ConnectNotify_Callback qfilesystemmodel_connectnotify_callback = nullptr;
    QFileSystemModel_DisconnectNotify_Callback qfilesystemmodel_disconnectnotify_callback = nullptr;
    QFileSystemModel_CreateIndex_Callback qfilesystemmodel_createindex_callback = nullptr;
    QFileSystemModel_EncodeData_Callback qfilesystemmodel_encodedata_callback = nullptr;
    QFileSystemModel_DecodeData_Callback qfilesystemmodel_decodedata_callback = nullptr;
    QFileSystemModel_BeginInsertRows_Callback qfilesystemmodel_begininsertrows_callback = nullptr;
    QFileSystemModel_EndInsertRows_Callback qfilesystemmodel_endinsertrows_callback = nullptr;
    QFileSystemModel_BeginRemoveRows_Callback qfilesystemmodel_beginremoverows_callback = nullptr;
    QFileSystemModel_EndRemoveRows_Callback qfilesystemmodel_endremoverows_callback = nullptr;
    QFileSystemModel_BeginMoveRows_Callback qfilesystemmodel_beginmoverows_callback = nullptr;
    QFileSystemModel_EndMoveRows_Callback qfilesystemmodel_endmoverows_callback = nullptr;
    QFileSystemModel_BeginInsertColumns_Callback qfilesystemmodel_begininsertcolumns_callback = nullptr;
    QFileSystemModel_EndInsertColumns_Callback qfilesystemmodel_endinsertcolumns_callback = nullptr;
    QFileSystemModel_BeginRemoveColumns_Callback qfilesystemmodel_beginremovecolumns_callback = nullptr;
    QFileSystemModel_EndRemoveColumns_Callback qfilesystemmodel_endremovecolumns_callback = nullptr;
    QFileSystemModel_BeginMoveColumns_Callback qfilesystemmodel_beginmovecolumns_callback = nullptr;
    QFileSystemModel_EndMoveColumns_Callback qfilesystemmodel_endmovecolumns_callback = nullptr;
    QFileSystemModel_BeginResetModel_Callback qfilesystemmodel_beginresetmodel_callback = nullptr;
    QFileSystemModel_EndResetModel_Callback qfilesystemmodel_endresetmodel_callback = nullptr;
    QFileSystemModel_ChangePersistentIndex_Callback qfilesystemmodel_changepersistentindex_callback = nullptr;
    QFileSystemModel_ChangePersistentIndexList_Callback qfilesystemmodel_changepersistentindexlist_callback = nullptr;
    QFileSystemModel_PersistentIndexList_Callback qfilesystemmodel_persistentindexlist_callback = nullptr;
    QFileSystemModel_Sender_Callback qfilesystemmodel_sender_callback = nullptr;
    QFileSystemModel_SenderSignalIndex_Callback qfilesystemmodel_sendersignalindex_callback = nullptr;
    QFileSystemModel_Receivers_Callback qfilesystemmodel_receivers_callback = nullptr;
    QFileSystemModel_IsSignalConnected_Callback qfilesystemmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qfilesystemmodel_metacall_isbase = false;
    mutable bool qfilesystemmodel_index_isbase = false;
    mutable bool qfilesystemmodel_parent_isbase = false;
    mutable bool qfilesystemmodel_sibling_isbase = false;
    mutable bool qfilesystemmodel_haschildren_isbase = false;
    mutable bool qfilesystemmodel_canfetchmore_isbase = false;
    mutable bool qfilesystemmodel_fetchmore_isbase = false;
    mutable bool qfilesystemmodel_rowcount_isbase = false;
    mutable bool qfilesystemmodel_columncount_isbase = false;
    mutable bool qfilesystemmodel_data_isbase = false;
    mutable bool qfilesystemmodel_setdata_isbase = false;
    mutable bool qfilesystemmodel_headerdata_isbase = false;
    mutable bool qfilesystemmodel_flags_isbase = false;
    mutable bool qfilesystemmodel_sort_isbase = false;
    mutable bool qfilesystemmodel_mimetypes_isbase = false;
    mutable bool qfilesystemmodel_mimedata_isbase = false;
    mutable bool qfilesystemmodel_dropmimedata_isbase = false;
    mutable bool qfilesystemmodel_supporteddropactions_isbase = false;
    mutable bool qfilesystemmodel_rolenames_isbase = false;
    mutable bool qfilesystemmodel_timerevent_isbase = false;
    mutable bool qfilesystemmodel_event_isbase = false;
    mutable bool qfilesystemmodel_setheaderdata_isbase = false;
    mutable bool qfilesystemmodel_itemdata_isbase = false;
    mutable bool qfilesystemmodel_setitemdata_isbase = false;
    mutable bool qfilesystemmodel_clearitemdata_isbase = false;
    mutable bool qfilesystemmodel_candropmimedata_isbase = false;
    mutable bool qfilesystemmodel_supporteddragactions_isbase = false;
    mutable bool qfilesystemmodel_insertrows_isbase = false;
    mutable bool qfilesystemmodel_insertcolumns_isbase = false;
    mutable bool qfilesystemmodel_removerows_isbase = false;
    mutable bool qfilesystemmodel_removecolumns_isbase = false;
    mutable bool qfilesystemmodel_moverows_isbase = false;
    mutable bool qfilesystemmodel_movecolumns_isbase = false;
    mutable bool qfilesystemmodel_buddy_isbase = false;
    mutable bool qfilesystemmodel_match_isbase = false;
    mutable bool qfilesystemmodel_span_isbase = false;
    mutable bool qfilesystemmodel_multidata_isbase = false;
    mutable bool qfilesystemmodel_submit_isbase = false;
    mutable bool qfilesystemmodel_revert_isbase = false;
    mutable bool qfilesystemmodel_resetinternaldata_isbase = false;
    mutable bool qfilesystemmodel_eventfilter_isbase = false;
    mutable bool qfilesystemmodel_childevent_isbase = false;
    mutable bool qfilesystemmodel_customevent_isbase = false;
    mutable bool qfilesystemmodel_connectnotify_isbase = false;
    mutable bool qfilesystemmodel_disconnectnotify_isbase = false;
    mutable bool qfilesystemmodel_createindex_isbase = false;
    mutable bool qfilesystemmodel_encodedata_isbase = false;
    mutable bool qfilesystemmodel_decodedata_isbase = false;
    mutable bool qfilesystemmodel_begininsertrows_isbase = false;
    mutable bool qfilesystemmodel_endinsertrows_isbase = false;
    mutable bool qfilesystemmodel_beginremoverows_isbase = false;
    mutable bool qfilesystemmodel_endremoverows_isbase = false;
    mutable bool qfilesystemmodel_beginmoverows_isbase = false;
    mutable bool qfilesystemmodel_endmoverows_isbase = false;
    mutable bool qfilesystemmodel_begininsertcolumns_isbase = false;
    mutable bool qfilesystemmodel_endinsertcolumns_isbase = false;
    mutable bool qfilesystemmodel_beginremovecolumns_isbase = false;
    mutable bool qfilesystemmodel_endremovecolumns_isbase = false;
    mutable bool qfilesystemmodel_beginmovecolumns_isbase = false;
    mutable bool qfilesystemmodel_endmovecolumns_isbase = false;
    mutable bool qfilesystemmodel_beginresetmodel_isbase = false;
    mutable bool qfilesystemmodel_endresetmodel_isbase = false;
    mutable bool qfilesystemmodel_changepersistentindex_isbase = false;
    mutable bool qfilesystemmodel_changepersistentindexlist_isbase = false;
    mutable bool qfilesystemmodel_persistentindexlist_isbase = false;
    mutable bool qfilesystemmodel_sender_isbase = false;
    mutable bool qfilesystemmodel_sendersignalindex_isbase = false;
    mutable bool qfilesystemmodel_receivers_isbase = false;
    mutable bool qfilesystemmodel_issignalconnected_isbase = false;

  public:
    VirtualQFileSystemModel() : QFileSystemModel(){};
    VirtualQFileSystemModel(QObject* parent) : QFileSystemModel(parent){};

    ~VirtualQFileSystemModel() {
        qfilesystemmodel_metacall_callback = nullptr;
        qfilesystemmodel_index_callback = nullptr;
        qfilesystemmodel_parent_callback = nullptr;
        qfilesystemmodel_sibling_callback = nullptr;
        qfilesystemmodel_haschildren_callback = nullptr;
        qfilesystemmodel_canfetchmore_callback = nullptr;
        qfilesystemmodel_fetchmore_callback = nullptr;
        qfilesystemmodel_rowcount_callback = nullptr;
        qfilesystemmodel_columncount_callback = nullptr;
        qfilesystemmodel_data_callback = nullptr;
        qfilesystemmodel_setdata_callback = nullptr;
        qfilesystemmodel_headerdata_callback = nullptr;
        qfilesystemmodel_flags_callback = nullptr;
        qfilesystemmodel_sort_callback = nullptr;
        qfilesystemmodel_mimetypes_callback = nullptr;
        qfilesystemmodel_mimedata_callback = nullptr;
        qfilesystemmodel_dropmimedata_callback = nullptr;
        qfilesystemmodel_supporteddropactions_callback = nullptr;
        qfilesystemmodel_rolenames_callback = nullptr;
        qfilesystemmodel_timerevent_callback = nullptr;
        qfilesystemmodel_event_callback = nullptr;
        qfilesystemmodel_setheaderdata_callback = nullptr;
        qfilesystemmodel_itemdata_callback = nullptr;
        qfilesystemmodel_setitemdata_callback = nullptr;
        qfilesystemmodel_clearitemdata_callback = nullptr;
        qfilesystemmodel_candropmimedata_callback = nullptr;
        qfilesystemmodel_supporteddragactions_callback = nullptr;
        qfilesystemmodel_insertrows_callback = nullptr;
        qfilesystemmodel_insertcolumns_callback = nullptr;
        qfilesystemmodel_removerows_callback = nullptr;
        qfilesystemmodel_removecolumns_callback = nullptr;
        qfilesystemmodel_moverows_callback = nullptr;
        qfilesystemmodel_movecolumns_callback = nullptr;
        qfilesystemmodel_buddy_callback = nullptr;
        qfilesystemmodel_match_callback = nullptr;
        qfilesystemmodel_span_callback = nullptr;
        qfilesystemmodel_multidata_callback = nullptr;
        qfilesystemmodel_submit_callback = nullptr;
        qfilesystemmodel_revert_callback = nullptr;
        qfilesystemmodel_resetinternaldata_callback = nullptr;
        qfilesystemmodel_eventfilter_callback = nullptr;
        qfilesystemmodel_childevent_callback = nullptr;
        qfilesystemmodel_customevent_callback = nullptr;
        qfilesystemmodel_connectnotify_callback = nullptr;
        qfilesystemmodel_disconnectnotify_callback = nullptr;
        qfilesystemmodel_createindex_callback = nullptr;
        qfilesystemmodel_encodedata_callback = nullptr;
        qfilesystemmodel_decodedata_callback = nullptr;
        qfilesystemmodel_begininsertrows_callback = nullptr;
        qfilesystemmodel_endinsertrows_callback = nullptr;
        qfilesystemmodel_beginremoverows_callback = nullptr;
        qfilesystemmodel_endremoverows_callback = nullptr;
        qfilesystemmodel_beginmoverows_callback = nullptr;
        qfilesystemmodel_endmoverows_callback = nullptr;
        qfilesystemmodel_begininsertcolumns_callback = nullptr;
        qfilesystemmodel_endinsertcolumns_callback = nullptr;
        qfilesystemmodel_beginremovecolumns_callback = nullptr;
        qfilesystemmodel_endremovecolumns_callback = nullptr;
        qfilesystemmodel_beginmovecolumns_callback = nullptr;
        qfilesystemmodel_endmovecolumns_callback = nullptr;
        qfilesystemmodel_beginresetmodel_callback = nullptr;
        qfilesystemmodel_endresetmodel_callback = nullptr;
        qfilesystemmodel_changepersistentindex_callback = nullptr;
        qfilesystemmodel_changepersistentindexlist_callback = nullptr;
        qfilesystemmodel_persistentindexlist_callback = nullptr;
        qfilesystemmodel_sender_callback = nullptr;
        qfilesystemmodel_sendersignalindex_callback = nullptr;
        qfilesystemmodel_receivers_callback = nullptr;
        qfilesystemmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQFileSystemModel_Metacall_Callback(QFileSystemModel_Metacall_Callback cb) { qfilesystemmodel_metacall_callback = cb; }
    void setQFileSystemModel_Index_Callback(QFileSystemModel_Index_Callback cb) { qfilesystemmodel_index_callback = cb; }
    void setQFileSystemModel_Parent_Callback(QFileSystemModel_Parent_Callback cb) { qfilesystemmodel_parent_callback = cb; }
    void setQFileSystemModel_Sibling_Callback(QFileSystemModel_Sibling_Callback cb) { qfilesystemmodel_sibling_callback = cb; }
    void setQFileSystemModel_HasChildren_Callback(QFileSystemModel_HasChildren_Callback cb) { qfilesystemmodel_haschildren_callback = cb; }
    void setQFileSystemModel_CanFetchMore_Callback(QFileSystemModel_CanFetchMore_Callback cb) { qfilesystemmodel_canfetchmore_callback = cb; }
    void setQFileSystemModel_FetchMore_Callback(QFileSystemModel_FetchMore_Callback cb) { qfilesystemmodel_fetchmore_callback = cb; }
    void setQFileSystemModel_RowCount_Callback(QFileSystemModel_RowCount_Callback cb) { qfilesystemmodel_rowcount_callback = cb; }
    void setQFileSystemModel_ColumnCount_Callback(QFileSystemModel_ColumnCount_Callback cb) { qfilesystemmodel_columncount_callback = cb; }
    void setQFileSystemModel_Data_Callback(QFileSystemModel_Data_Callback cb) { qfilesystemmodel_data_callback = cb; }
    void setQFileSystemModel_SetData_Callback(QFileSystemModel_SetData_Callback cb) { qfilesystemmodel_setdata_callback = cb; }
    void setQFileSystemModel_HeaderData_Callback(QFileSystemModel_HeaderData_Callback cb) { qfilesystemmodel_headerdata_callback = cb; }
    void setQFileSystemModel_Flags_Callback(QFileSystemModel_Flags_Callback cb) { qfilesystemmodel_flags_callback = cb; }
    void setQFileSystemModel_Sort_Callback(QFileSystemModel_Sort_Callback cb) { qfilesystemmodel_sort_callback = cb; }
    void setQFileSystemModel_MimeTypes_Callback(QFileSystemModel_MimeTypes_Callback cb) { qfilesystemmodel_mimetypes_callback = cb; }
    void setQFileSystemModel_MimeData_Callback(QFileSystemModel_MimeData_Callback cb) { qfilesystemmodel_mimedata_callback = cb; }
    void setQFileSystemModel_DropMimeData_Callback(QFileSystemModel_DropMimeData_Callback cb) { qfilesystemmodel_dropmimedata_callback = cb; }
    void setQFileSystemModel_SupportedDropActions_Callback(QFileSystemModel_SupportedDropActions_Callback cb) { qfilesystemmodel_supporteddropactions_callback = cb; }
    void setQFileSystemModel_RoleNames_Callback(QFileSystemModel_RoleNames_Callback cb) { qfilesystemmodel_rolenames_callback = cb; }
    void setQFileSystemModel_TimerEvent_Callback(QFileSystemModel_TimerEvent_Callback cb) { qfilesystemmodel_timerevent_callback = cb; }
    void setQFileSystemModel_Event_Callback(QFileSystemModel_Event_Callback cb) { qfilesystemmodel_event_callback = cb; }
    void setQFileSystemModel_SetHeaderData_Callback(QFileSystemModel_SetHeaderData_Callback cb) { qfilesystemmodel_setheaderdata_callback = cb; }
    void setQFileSystemModel_ItemData_Callback(QFileSystemModel_ItemData_Callback cb) { qfilesystemmodel_itemdata_callback = cb; }
    void setQFileSystemModel_SetItemData_Callback(QFileSystemModel_SetItemData_Callback cb) { qfilesystemmodel_setitemdata_callback = cb; }
    void setQFileSystemModel_ClearItemData_Callback(QFileSystemModel_ClearItemData_Callback cb) { qfilesystemmodel_clearitemdata_callback = cb; }
    void setQFileSystemModel_CanDropMimeData_Callback(QFileSystemModel_CanDropMimeData_Callback cb) { qfilesystemmodel_candropmimedata_callback = cb; }
    void setQFileSystemModel_SupportedDragActions_Callback(QFileSystemModel_SupportedDragActions_Callback cb) { qfilesystemmodel_supporteddragactions_callback = cb; }
    void setQFileSystemModel_InsertRows_Callback(QFileSystemModel_InsertRows_Callback cb) { qfilesystemmodel_insertrows_callback = cb; }
    void setQFileSystemModel_InsertColumns_Callback(QFileSystemModel_InsertColumns_Callback cb) { qfilesystemmodel_insertcolumns_callback = cb; }
    void setQFileSystemModel_RemoveRows_Callback(QFileSystemModel_RemoveRows_Callback cb) { qfilesystemmodel_removerows_callback = cb; }
    void setQFileSystemModel_RemoveColumns_Callback(QFileSystemModel_RemoveColumns_Callback cb) { qfilesystemmodel_removecolumns_callback = cb; }
    void setQFileSystemModel_MoveRows_Callback(QFileSystemModel_MoveRows_Callback cb) { qfilesystemmodel_moverows_callback = cb; }
    void setQFileSystemModel_MoveColumns_Callback(QFileSystemModel_MoveColumns_Callback cb) { qfilesystemmodel_movecolumns_callback = cb; }
    void setQFileSystemModel_Buddy_Callback(QFileSystemModel_Buddy_Callback cb) { qfilesystemmodel_buddy_callback = cb; }
    void setQFileSystemModel_Match_Callback(QFileSystemModel_Match_Callback cb) { qfilesystemmodel_match_callback = cb; }
    void setQFileSystemModel_Span_Callback(QFileSystemModel_Span_Callback cb) { qfilesystemmodel_span_callback = cb; }
    void setQFileSystemModel_MultiData_Callback(QFileSystemModel_MultiData_Callback cb) { qfilesystemmodel_multidata_callback = cb; }
    void setQFileSystemModel_Submit_Callback(QFileSystemModel_Submit_Callback cb) { qfilesystemmodel_submit_callback = cb; }
    void setQFileSystemModel_Revert_Callback(QFileSystemModel_Revert_Callback cb) { qfilesystemmodel_revert_callback = cb; }
    void setQFileSystemModel_ResetInternalData_Callback(QFileSystemModel_ResetInternalData_Callback cb) { qfilesystemmodel_resetinternaldata_callback = cb; }
    void setQFileSystemModel_EventFilter_Callback(QFileSystemModel_EventFilter_Callback cb) { qfilesystemmodel_eventfilter_callback = cb; }
    void setQFileSystemModel_ChildEvent_Callback(QFileSystemModel_ChildEvent_Callback cb) { qfilesystemmodel_childevent_callback = cb; }
    void setQFileSystemModel_CustomEvent_Callback(QFileSystemModel_CustomEvent_Callback cb) { qfilesystemmodel_customevent_callback = cb; }
    void setQFileSystemModel_ConnectNotify_Callback(QFileSystemModel_ConnectNotify_Callback cb) { qfilesystemmodel_connectnotify_callback = cb; }
    void setQFileSystemModel_DisconnectNotify_Callback(QFileSystemModel_DisconnectNotify_Callback cb) { qfilesystemmodel_disconnectnotify_callback = cb; }
    void setQFileSystemModel_CreateIndex_Callback(QFileSystemModel_CreateIndex_Callback cb) { qfilesystemmodel_createindex_callback = cb; }
    void setQFileSystemModel_EncodeData_Callback(QFileSystemModel_EncodeData_Callback cb) { qfilesystemmodel_encodedata_callback = cb; }
    void setQFileSystemModel_DecodeData_Callback(QFileSystemModel_DecodeData_Callback cb) { qfilesystemmodel_decodedata_callback = cb; }
    void setQFileSystemModel_BeginInsertRows_Callback(QFileSystemModel_BeginInsertRows_Callback cb) { qfilesystemmodel_begininsertrows_callback = cb; }
    void setQFileSystemModel_EndInsertRows_Callback(QFileSystemModel_EndInsertRows_Callback cb) { qfilesystemmodel_endinsertrows_callback = cb; }
    void setQFileSystemModel_BeginRemoveRows_Callback(QFileSystemModel_BeginRemoveRows_Callback cb) { qfilesystemmodel_beginremoverows_callback = cb; }
    void setQFileSystemModel_EndRemoveRows_Callback(QFileSystemModel_EndRemoveRows_Callback cb) { qfilesystemmodel_endremoverows_callback = cb; }
    void setQFileSystemModel_BeginMoveRows_Callback(QFileSystemModel_BeginMoveRows_Callback cb) { qfilesystemmodel_beginmoverows_callback = cb; }
    void setQFileSystemModel_EndMoveRows_Callback(QFileSystemModel_EndMoveRows_Callback cb) { qfilesystemmodel_endmoverows_callback = cb; }
    void setQFileSystemModel_BeginInsertColumns_Callback(QFileSystemModel_BeginInsertColumns_Callback cb) { qfilesystemmodel_begininsertcolumns_callback = cb; }
    void setQFileSystemModel_EndInsertColumns_Callback(QFileSystemModel_EndInsertColumns_Callback cb) { qfilesystemmodel_endinsertcolumns_callback = cb; }
    void setQFileSystemModel_BeginRemoveColumns_Callback(QFileSystemModel_BeginRemoveColumns_Callback cb) { qfilesystemmodel_beginremovecolumns_callback = cb; }
    void setQFileSystemModel_EndRemoveColumns_Callback(QFileSystemModel_EndRemoveColumns_Callback cb) { qfilesystemmodel_endremovecolumns_callback = cb; }
    void setQFileSystemModel_BeginMoveColumns_Callback(QFileSystemModel_BeginMoveColumns_Callback cb) { qfilesystemmodel_beginmovecolumns_callback = cb; }
    void setQFileSystemModel_EndMoveColumns_Callback(QFileSystemModel_EndMoveColumns_Callback cb) { qfilesystemmodel_endmovecolumns_callback = cb; }
    void setQFileSystemModel_BeginResetModel_Callback(QFileSystemModel_BeginResetModel_Callback cb) { qfilesystemmodel_beginresetmodel_callback = cb; }
    void setQFileSystemModel_EndResetModel_Callback(QFileSystemModel_EndResetModel_Callback cb) { qfilesystemmodel_endresetmodel_callback = cb; }
    void setQFileSystemModel_ChangePersistentIndex_Callback(QFileSystemModel_ChangePersistentIndex_Callback cb) { qfilesystemmodel_changepersistentindex_callback = cb; }
    void setQFileSystemModel_ChangePersistentIndexList_Callback(QFileSystemModel_ChangePersistentIndexList_Callback cb) { qfilesystemmodel_changepersistentindexlist_callback = cb; }
    void setQFileSystemModel_PersistentIndexList_Callback(QFileSystemModel_PersistentIndexList_Callback cb) { qfilesystemmodel_persistentindexlist_callback = cb; }
    void setQFileSystemModel_Sender_Callback(QFileSystemModel_Sender_Callback cb) { qfilesystemmodel_sender_callback = cb; }
    void setQFileSystemModel_SenderSignalIndex_Callback(QFileSystemModel_SenderSignalIndex_Callback cb) { qfilesystemmodel_sendersignalindex_callback = cb; }
    void setQFileSystemModel_Receivers_Callback(QFileSystemModel_Receivers_Callback cb) { qfilesystemmodel_receivers_callback = cb; }
    void setQFileSystemModel_IsSignalConnected_Callback(QFileSystemModel_IsSignalConnected_Callback cb) { qfilesystemmodel_issignalconnected_callback = cb; }

    // Base flag setters
    void setQFileSystemModel_Metacall_IsBase(bool value) const { qfilesystemmodel_metacall_isbase = value; }
    void setQFileSystemModel_Index_IsBase(bool value) const { qfilesystemmodel_index_isbase = value; }
    void setQFileSystemModel_Parent_IsBase(bool value) const { qfilesystemmodel_parent_isbase = value; }
    void setQFileSystemModel_Sibling_IsBase(bool value) const { qfilesystemmodel_sibling_isbase = value; }
    void setQFileSystemModel_HasChildren_IsBase(bool value) const { qfilesystemmodel_haschildren_isbase = value; }
    void setQFileSystemModel_CanFetchMore_IsBase(bool value) const { qfilesystemmodel_canfetchmore_isbase = value; }
    void setQFileSystemModel_FetchMore_IsBase(bool value) const { qfilesystemmodel_fetchmore_isbase = value; }
    void setQFileSystemModel_RowCount_IsBase(bool value) const { qfilesystemmodel_rowcount_isbase = value; }
    void setQFileSystemModel_ColumnCount_IsBase(bool value) const { qfilesystemmodel_columncount_isbase = value; }
    void setQFileSystemModel_Data_IsBase(bool value) const { qfilesystemmodel_data_isbase = value; }
    void setQFileSystemModel_SetData_IsBase(bool value) const { qfilesystemmodel_setdata_isbase = value; }
    void setQFileSystemModel_HeaderData_IsBase(bool value) const { qfilesystemmodel_headerdata_isbase = value; }
    void setQFileSystemModel_Flags_IsBase(bool value) const { qfilesystemmodel_flags_isbase = value; }
    void setQFileSystemModel_Sort_IsBase(bool value) const { qfilesystemmodel_sort_isbase = value; }
    void setQFileSystemModel_MimeTypes_IsBase(bool value) const { qfilesystemmodel_mimetypes_isbase = value; }
    void setQFileSystemModel_MimeData_IsBase(bool value) const { qfilesystemmodel_mimedata_isbase = value; }
    void setQFileSystemModel_DropMimeData_IsBase(bool value) const { qfilesystemmodel_dropmimedata_isbase = value; }
    void setQFileSystemModel_SupportedDropActions_IsBase(bool value) const { qfilesystemmodel_supporteddropactions_isbase = value; }
    void setQFileSystemModel_RoleNames_IsBase(bool value) const { qfilesystemmodel_rolenames_isbase = value; }
    void setQFileSystemModel_TimerEvent_IsBase(bool value) const { qfilesystemmodel_timerevent_isbase = value; }
    void setQFileSystemModel_Event_IsBase(bool value) const { qfilesystemmodel_event_isbase = value; }
    void setQFileSystemModel_SetHeaderData_IsBase(bool value) const { qfilesystemmodel_setheaderdata_isbase = value; }
    void setQFileSystemModel_ItemData_IsBase(bool value) const { qfilesystemmodel_itemdata_isbase = value; }
    void setQFileSystemModel_SetItemData_IsBase(bool value) const { qfilesystemmodel_setitemdata_isbase = value; }
    void setQFileSystemModel_ClearItemData_IsBase(bool value) const { qfilesystemmodel_clearitemdata_isbase = value; }
    void setQFileSystemModel_CanDropMimeData_IsBase(bool value) const { qfilesystemmodel_candropmimedata_isbase = value; }
    void setQFileSystemModel_SupportedDragActions_IsBase(bool value) const { qfilesystemmodel_supporteddragactions_isbase = value; }
    void setQFileSystemModel_InsertRows_IsBase(bool value) const { qfilesystemmodel_insertrows_isbase = value; }
    void setQFileSystemModel_InsertColumns_IsBase(bool value) const { qfilesystemmodel_insertcolumns_isbase = value; }
    void setQFileSystemModel_RemoveRows_IsBase(bool value) const { qfilesystemmodel_removerows_isbase = value; }
    void setQFileSystemModel_RemoveColumns_IsBase(bool value) const { qfilesystemmodel_removecolumns_isbase = value; }
    void setQFileSystemModel_MoveRows_IsBase(bool value) const { qfilesystemmodel_moverows_isbase = value; }
    void setQFileSystemModel_MoveColumns_IsBase(bool value) const { qfilesystemmodel_movecolumns_isbase = value; }
    void setQFileSystemModel_Buddy_IsBase(bool value) const { qfilesystemmodel_buddy_isbase = value; }
    void setQFileSystemModel_Match_IsBase(bool value) const { qfilesystemmodel_match_isbase = value; }
    void setQFileSystemModel_Span_IsBase(bool value) const { qfilesystemmodel_span_isbase = value; }
    void setQFileSystemModel_MultiData_IsBase(bool value) const { qfilesystemmodel_multidata_isbase = value; }
    void setQFileSystemModel_Submit_IsBase(bool value) const { qfilesystemmodel_submit_isbase = value; }
    void setQFileSystemModel_Revert_IsBase(bool value) const { qfilesystemmodel_revert_isbase = value; }
    void setQFileSystemModel_ResetInternalData_IsBase(bool value) const { qfilesystemmodel_resetinternaldata_isbase = value; }
    void setQFileSystemModel_EventFilter_IsBase(bool value) const { qfilesystemmodel_eventfilter_isbase = value; }
    void setQFileSystemModel_ChildEvent_IsBase(bool value) const { qfilesystemmodel_childevent_isbase = value; }
    void setQFileSystemModel_CustomEvent_IsBase(bool value) const { qfilesystemmodel_customevent_isbase = value; }
    void setQFileSystemModel_ConnectNotify_IsBase(bool value) const { qfilesystemmodel_connectnotify_isbase = value; }
    void setQFileSystemModel_DisconnectNotify_IsBase(bool value) const { qfilesystemmodel_disconnectnotify_isbase = value; }
    void setQFileSystemModel_CreateIndex_IsBase(bool value) const { qfilesystemmodel_createindex_isbase = value; }
    void setQFileSystemModel_EncodeData_IsBase(bool value) const { qfilesystemmodel_encodedata_isbase = value; }
    void setQFileSystemModel_DecodeData_IsBase(bool value) const { qfilesystemmodel_decodedata_isbase = value; }
    void setQFileSystemModel_BeginInsertRows_IsBase(bool value) const { qfilesystemmodel_begininsertrows_isbase = value; }
    void setQFileSystemModel_EndInsertRows_IsBase(bool value) const { qfilesystemmodel_endinsertrows_isbase = value; }
    void setQFileSystemModel_BeginRemoveRows_IsBase(bool value) const { qfilesystemmodel_beginremoverows_isbase = value; }
    void setQFileSystemModel_EndRemoveRows_IsBase(bool value) const { qfilesystemmodel_endremoverows_isbase = value; }
    void setQFileSystemModel_BeginMoveRows_IsBase(bool value) const { qfilesystemmodel_beginmoverows_isbase = value; }
    void setQFileSystemModel_EndMoveRows_IsBase(bool value) const { qfilesystemmodel_endmoverows_isbase = value; }
    void setQFileSystemModel_BeginInsertColumns_IsBase(bool value) const { qfilesystemmodel_begininsertcolumns_isbase = value; }
    void setQFileSystemModel_EndInsertColumns_IsBase(bool value) const { qfilesystemmodel_endinsertcolumns_isbase = value; }
    void setQFileSystemModel_BeginRemoveColumns_IsBase(bool value) const { qfilesystemmodel_beginremovecolumns_isbase = value; }
    void setQFileSystemModel_EndRemoveColumns_IsBase(bool value) const { qfilesystemmodel_endremovecolumns_isbase = value; }
    void setQFileSystemModel_BeginMoveColumns_IsBase(bool value) const { qfilesystemmodel_beginmovecolumns_isbase = value; }
    void setQFileSystemModel_EndMoveColumns_IsBase(bool value) const { qfilesystemmodel_endmovecolumns_isbase = value; }
    void setQFileSystemModel_BeginResetModel_IsBase(bool value) const { qfilesystemmodel_beginresetmodel_isbase = value; }
    void setQFileSystemModel_EndResetModel_IsBase(bool value) const { qfilesystemmodel_endresetmodel_isbase = value; }
    void setQFileSystemModel_ChangePersistentIndex_IsBase(bool value) const { qfilesystemmodel_changepersistentindex_isbase = value; }
    void setQFileSystemModel_ChangePersistentIndexList_IsBase(bool value) const { qfilesystemmodel_changepersistentindexlist_isbase = value; }
    void setQFileSystemModel_PersistentIndexList_IsBase(bool value) const { qfilesystemmodel_persistentindexlist_isbase = value; }
    void setQFileSystemModel_Sender_IsBase(bool value) const { qfilesystemmodel_sender_isbase = value; }
    void setQFileSystemModel_SenderSignalIndex_IsBase(bool value) const { qfilesystemmodel_sendersignalindex_isbase = value; }
    void setQFileSystemModel_Receivers_IsBase(bool value) const { qfilesystemmodel_receivers_isbase = value; }
    void setQFileSystemModel_IsSignalConnected_IsBase(bool value) const { qfilesystemmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfilesystemmodel_metacall_isbase) {
            qfilesystemmodel_metacall_isbase = false;
            return QFileSystemModel::qt_metacall(param1, param2, param3);
        } else if (qfilesystemmodel_metacall_callback != nullptr) {
            return qfilesystemmodel_metacall_callback(this, param1, param2, param3);
        } else {
            return QFileSystemModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qfilesystemmodel_index_isbase) {
            qfilesystemmodel_index_isbase = false;
            return QFileSystemModel::index(row, column, parent);
        } else if (qfilesystemmodel_index_callback != nullptr) {
            return qfilesystemmodel_index_callback(this, row, column, parent);
        } else {
            return QFileSystemModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qfilesystemmodel_parent_isbase) {
            qfilesystemmodel_parent_isbase = false;
            return QFileSystemModel::parent(child);
        } else if (qfilesystemmodel_parent_callback != nullptr) {
            return qfilesystemmodel_parent_callback(this, child);
        } else {
            return QFileSystemModel::parent(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qfilesystemmodel_sibling_isbase) {
            qfilesystemmodel_sibling_isbase = false;
            return QFileSystemModel::sibling(row, column, idx);
        } else if (qfilesystemmodel_sibling_callback != nullptr) {
            return qfilesystemmodel_sibling_callback(this, row, column, idx);
        } else {
            return QFileSystemModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qfilesystemmodel_haschildren_isbase) {
            qfilesystemmodel_haschildren_isbase = false;
            return QFileSystemModel::hasChildren(parent);
        } else if (qfilesystemmodel_haschildren_callback != nullptr) {
            return qfilesystemmodel_haschildren_callback(this, parent);
        } else {
            return QFileSystemModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qfilesystemmodel_canfetchmore_isbase) {
            qfilesystemmodel_canfetchmore_isbase = false;
            return QFileSystemModel::canFetchMore(parent);
        } else if (qfilesystemmodel_canfetchmore_callback != nullptr) {
            return qfilesystemmodel_canfetchmore_callback(this, parent);
        } else {
            return QFileSystemModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qfilesystemmodel_fetchmore_isbase) {
            qfilesystemmodel_fetchmore_isbase = false;
            QFileSystemModel::fetchMore(parent);
        } else if (qfilesystemmodel_fetchmore_callback != nullptr) {
            qfilesystemmodel_fetchmore_callback(this, parent);
        } else {
            QFileSystemModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qfilesystemmodel_rowcount_isbase) {
            qfilesystemmodel_rowcount_isbase = false;
            return QFileSystemModel::rowCount(parent);
        } else if (qfilesystemmodel_rowcount_callback != nullptr) {
            return qfilesystemmodel_rowcount_callback(this, parent);
        } else {
            return QFileSystemModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qfilesystemmodel_columncount_isbase) {
            qfilesystemmodel_columncount_isbase = false;
            return QFileSystemModel::columnCount(parent);
        } else if (qfilesystemmodel_columncount_callback != nullptr) {
            return qfilesystemmodel_columncount_callback(this, parent);
        } else {
            return QFileSystemModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qfilesystemmodel_data_isbase) {
            qfilesystemmodel_data_isbase = false;
            return QFileSystemModel::data(index, role);
        } else if (qfilesystemmodel_data_callback != nullptr) {
            return qfilesystemmodel_data_callback(this, index, role);
        } else {
            return QFileSystemModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qfilesystemmodel_setdata_isbase) {
            qfilesystemmodel_setdata_isbase = false;
            return QFileSystemModel::setData(index, value, role);
        } else if (qfilesystemmodel_setdata_callback != nullptr) {
            return qfilesystemmodel_setdata_callback(this, index, value, role);
        } else {
            return QFileSystemModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qfilesystemmodel_headerdata_isbase) {
            qfilesystemmodel_headerdata_isbase = false;
            return QFileSystemModel::headerData(section, orientation, role);
        } else if (qfilesystemmodel_headerdata_callback != nullptr) {
            return qfilesystemmodel_headerdata_callback(this, section, orientation, role);
        } else {
            return QFileSystemModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qfilesystemmodel_flags_isbase) {
            qfilesystemmodel_flags_isbase = false;
            return QFileSystemModel::flags(index);
        } else if (qfilesystemmodel_flags_callback != nullptr) {
            return qfilesystemmodel_flags_callback(this, index);
        } else {
            return QFileSystemModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qfilesystemmodel_sort_isbase) {
            qfilesystemmodel_sort_isbase = false;
            QFileSystemModel::sort(column, order);
        } else if (qfilesystemmodel_sort_callback != nullptr) {
            qfilesystemmodel_sort_callback(this, column, order);
        } else {
            QFileSystemModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qfilesystemmodel_mimetypes_isbase) {
            qfilesystemmodel_mimetypes_isbase = false;
            return QFileSystemModel::mimeTypes();
        } else if (qfilesystemmodel_mimetypes_callback != nullptr) {
            return qfilesystemmodel_mimetypes_callback();
        } else {
            return QFileSystemModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
        if (qfilesystemmodel_mimedata_isbase) {
            qfilesystemmodel_mimedata_isbase = false;
            return QFileSystemModel::mimeData(indexes);
        } else if (qfilesystemmodel_mimedata_callback != nullptr) {
            return qfilesystemmodel_mimedata_callback(this, indexes);
        } else {
            return QFileSystemModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qfilesystemmodel_dropmimedata_isbase) {
            qfilesystemmodel_dropmimedata_isbase = false;
            return QFileSystemModel::dropMimeData(data, action, row, column, parent);
        } else if (qfilesystemmodel_dropmimedata_callback != nullptr) {
            return qfilesystemmodel_dropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QFileSystemModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qfilesystemmodel_supporteddropactions_isbase) {
            qfilesystemmodel_supporteddropactions_isbase = false;
            return QFileSystemModel::supportedDropActions();
        } else if (qfilesystemmodel_supporteddropactions_callback != nullptr) {
            return qfilesystemmodel_supporteddropactions_callback();
        } else {
            return QFileSystemModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qfilesystemmodel_rolenames_isbase) {
            qfilesystemmodel_rolenames_isbase = false;
            return QFileSystemModel::roleNames();
        } else if (qfilesystemmodel_rolenames_callback != nullptr) {
            return qfilesystemmodel_rolenames_callback();
        } else {
            return QFileSystemModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfilesystemmodel_timerevent_isbase) {
            qfilesystemmodel_timerevent_isbase = false;
            QFileSystemModel::timerEvent(event);
        } else if (qfilesystemmodel_timerevent_callback != nullptr) {
            qfilesystemmodel_timerevent_callback(this, event);
        } else {
            QFileSystemModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfilesystemmodel_event_isbase) {
            qfilesystemmodel_event_isbase = false;
            return QFileSystemModel::event(event);
        } else if (qfilesystemmodel_event_callback != nullptr) {
            return qfilesystemmodel_event_callback(this, event);
        } else {
            return QFileSystemModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qfilesystemmodel_setheaderdata_isbase) {
            qfilesystemmodel_setheaderdata_isbase = false;
            return QFileSystemModel::setHeaderData(section, orientation, value, role);
        } else if (qfilesystemmodel_setheaderdata_callback != nullptr) {
            return qfilesystemmodel_setheaderdata_callback(this, section, orientation, value, role);
        } else {
            return QFileSystemModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qfilesystemmodel_itemdata_isbase) {
            qfilesystemmodel_itemdata_isbase = false;
            return QFileSystemModel::itemData(index);
        } else if (qfilesystemmodel_itemdata_callback != nullptr) {
            return qfilesystemmodel_itemdata_callback(this, index);
        } else {
            return QFileSystemModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qfilesystemmodel_setitemdata_isbase) {
            qfilesystemmodel_setitemdata_isbase = false;
            return QFileSystemModel::setItemData(index, roles);
        } else if (qfilesystemmodel_setitemdata_callback != nullptr) {
            return qfilesystemmodel_setitemdata_callback(this, index, roles);
        } else {
            return QFileSystemModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qfilesystemmodel_clearitemdata_isbase) {
            qfilesystemmodel_clearitemdata_isbase = false;
            return QFileSystemModel::clearItemData(index);
        } else if (qfilesystemmodel_clearitemdata_callback != nullptr) {
            return qfilesystemmodel_clearitemdata_callback(this, index);
        } else {
            return QFileSystemModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qfilesystemmodel_candropmimedata_isbase) {
            qfilesystemmodel_candropmimedata_isbase = false;
            return QFileSystemModel::canDropMimeData(data, action, row, column, parent);
        } else if (qfilesystemmodel_candropmimedata_callback != nullptr) {
            return qfilesystemmodel_candropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QFileSystemModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qfilesystemmodel_supporteddragactions_isbase) {
            qfilesystemmodel_supporteddragactions_isbase = false;
            return QFileSystemModel::supportedDragActions();
        } else if (qfilesystemmodel_supporteddragactions_callback != nullptr) {
            return qfilesystemmodel_supporteddragactions_callback();
        } else {
            return QFileSystemModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_insertrows_isbase) {
            qfilesystemmodel_insertrows_isbase = false;
            return QFileSystemModel::insertRows(row, count, parent);
        } else if (qfilesystemmodel_insertrows_callback != nullptr) {
            return qfilesystemmodel_insertrows_callback(this, row, count, parent);
        } else {
            return QFileSystemModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_insertcolumns_isbase) {
            qfilesystemmodel_insertcolumns_isbase = false;
            return QFileSystemModel::insertColumns(column, count, parent);
        } else if (qfilesystemmodel_insertcolumns_callback != nullptr) {
            return qfilesystemmodel_insertcolumns_callback(this, column, count, parent);
        } else {
            return QFileSystemModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_removerows_isbase) {
            qfilesystemmodel_removerows_isbase = false;
            return QFileSystemModel::removeRows(row, count, parent);
        } else if (qfilesystemmodel_removerows_callback != nullptr) {
            return qfilesystemmodel_removerows_callback(this, row, count, parent);
        } else {
            return QFileSystemModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_removecolumns_isbase) {
            qfilesystemmodel_removecolumns_isbase = false;
            return QFileSystemModel::removeColumns(column, count, parent);
        } else if (qfilesystemmodel_removecolumns_callback != nullptr) {
            return qfilesystemmodel_removecolumns_callback(this, column, count, parent);
        } else {
            return QFileSystemModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qfilesystemmodel_moverows_isbase) {
            qfilesystemmodel_moverows_isbase = false;
            return QFileSystemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qfilesystemmodel_moverows_callback != nullptr) {
            return qfilesystemmodel_moverows_callback(this, sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else {
            return QFileSystemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qfilesystemmodel_movecolumns_isbase) {
            qfilesystemmodel_movecolumns_isbase = false;
            return QFileSystemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qfilesystemmodel_movecolumns_callback != nullptr) {
            return qfilesystemmodel_movecolumns_callback(this, sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else {
            return QFileSystemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qfilesystemmodel_buddy_isbase) {
            qfilesystemmodel_buddy_isbase = false;
            return QFileSystemModel::buddy(index);
        } else if (qfilesystemmodel_buddy_callback != nullptr) {
            return qfilesystemmodel_buddy_callback(this, index);
        } else {
            return QFileSystemModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qfilesystemmodel_match_isbase) {
            qfilesystemmodel_match_isbase = false;
            return QFileSystemModel::match(start, role, value, hits, flags);
        } else if (qfilesystemmodel_match_callback != nullptr) {
            return qfilesystemmodel_match_callback(this, start, role, value, hits, flags);
        } else {
            return QFileSystemModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qfilesystemmodel_span_isbase) {
            qfilesystemmodel_span_isbase = false;
            return QFileSystemModel::span(index);
        } else if (qfilesystemmodel_span_callback != nullptr) {
            return qfilesystemmodel_span_callback(this, index);
        } else {
            return QFileSystemModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qfilesystemmodel_multidata_isbase) {
            qfilesystemmodel_multidata_isbase = false;
            QFileSystemModel::multiData(index, roleDataSpan);
        } else if (qfilesystemmodel_multidata_callback != nullptr) {
            qfilesystemmodel_multidata_callback(this, index, roleDataSpan);
        } else {
            QFileSystemModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qfilesystemmodel_submit_isbase) {
            qfilesystemmodel_submit_isbase = false;
            return QFileSystemModel::submit();
        } else if (qfilesystemmodel_submit_callback != nullptr) {
            return qfilesystemmodel_submit_callback();
        } else {
            return QFileSystemModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qfilesystemmodel_revert_isbase) {
            qfilesystemmodel_revert_isbase = false;
            QFileSystemModel::revert();
        } else if (qfilesystemmodel_revert_callback != nullptr) {
            qfilesystemmodel_revert_callback();
        } else {
            QFileSystemModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qfilesystemmodel_resetinternaldata_isbase) {
            qfilesystemmodel_resetinternaldata_isbase = false;
            QFileSystemModel::resetInternalData();
        } else if (qfilesystemmodel_resetinternaldata_callback != nullptr) {
            qfilesystemmodel_resetinternaldata_callback();
        } else {
            QFileSystemModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfilesystemmodel_eventfilter_isbase) {
            qfilesystemmodel_eventfilter_isbase = false;
            return QFileSystemModel::eventFilter(watched, event);
        } else if (qfilesystemmodel_eventfilter_callback != nullptr) {
            return qfilesystemmodel_eventfilter_callback(this, watched, event);
        } else {
            return QFileSystemModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfilesystemmodel_childevent_isbase) {
            qfilesystemmodel_childevent_isbase = false;
            QFileSystemModel::childEvent(event);
        } else if (qfilesystemmodel_childevent_callback != nullptr) {
            qfilesystemmodel_childevent_callback(this, event);
        } else {
            QFileSystemModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfilesystemmodel_customevent_isbase) {
            qfilesystemmodel_customevent_isbase = false;
            QFileSystemModel::customEvent(event);
        } else if (qfilesystemmodel_customevent_callback != nullptr) {
            qfilesystemmodel_customevent_callback(this, event);
        } else {
            QFileSystemModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfilesystemmodel_connectnotify_isbase) {
            qfilesystemmodel_connectnotify_isbase = false;
            QFileSystemModel::connectNotify(signal);
        } else if (qfilesystemmodel_connectnotify_callback != nullptr) {
            qfilesystemmodel_connectnotify_callback(this, signal);
        } else {
            QFileSystemModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfilesystemmodel_disconnectnotify_isbase) {
            qfilesystemmodel_disconnectnotify_isbase = false;
            QFileSystemModel::disconnectNotify(signal);
        } else if (qfilesystemmodel_disconnectnotify_callback != nullptr) {
            qfilesystemmodel_disconnectnotify_callback(this, signal);
        } else {
            QFileSystemModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qfilesystemmodel_createindex_isbase) {
            qfilesystemmodel_createindex_isbase = false;
            return QFileSystemModel::createIndex(row, column);
        } else if (qfilesystemmodel_createindex_callback != nullptr) {
            return qfilesystemmodel_createindex_callback(this, row, column);
        } else {
            return QFileSystemModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QModelIndexList& indexes, QDataStream& stream) const {
        if (qfilesystemmodel_encodedata_isbase) {
            qfilesystemmodel_encodedata_isbase = false;
            QFileSystemModel::encodeData(indexes, stream);
        } else if (qfilesystemmodel_encodedata_callback != nullptr) {
            qfilesystemmodel_encodedata_callback(this, indexes, stream);
        } else {
            QFileSystemModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qfilesystemmodel_decodedata_isbase) {
            qfilesystemmodel_decodedata_isbase = false;
            return QFileSystemModel::decodeData(row, column, parent, stream);
        } else if (qfilesystemmodel_decodedata_callback != nullptr) {
            return qfilesystemmodel_decodedata_callback(this, row, column, parent, stream);
        } else {
            return QFileSystemModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qfilesystemmodel_begininsertrows_isbase) {
            qfilesystemmodel_begininsertrows_isbase = false;
            QFileSystemModel::beginInsertRows(parent, first, last);
        } else if (qfilesystemmodel_begininsertrows_callback != nullptr) {
            qfilesystemmodel_begininsertrows_callback(this, parent, first, last);
        } else {
            QFileSystemModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qfilesystemmodel_endinsertrows_isbase) {
            qfilesystemmodel_endinsertrows_isbase = false;
            QFileSystemModel::endInsertRows();
        } else if (qfilesystemmodel_endinsertrows_callback != nullptr) {
            qfilesystemmodel_endinsertrows_callback();
        } else {
            QFileSystemModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qfilesystemmodel_beginremoverows_isbase) {
            qfilesystemmodel_beginremoverows_isbase = false;
            QFileSystemModel::beginRemoveRows(parent, first, last);
        } else if (qfilesystemmodel_beginremoverows_callback != nullptr) {
            qfilesystemmodel_beginremoverows_callback(this, parent, first, last);
        } else {
            QFileSystemModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qfilesystemmodel_endremoverows_isbase) {
            qfilesystemmodel_endremoverows_isbase = false;
            QFileSystemModel::endRemoveRows();
        } else if (qfilesystemmodel_endremoverows_callback != nullptr) {
            qfilesystemmodel_endremoverows_callback();
        } else {
            QFileSystemModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qfilesystemmodel_beginmoverows_isbase) {
            qfilesystemmodel_beginmoverows_isbase = false;
            return QFileSystemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qfilesystemmodel_beginmoverows_callback != nullptr) {
            return qfilesystemmodel_beginmoverows_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else {
            return QFileSystemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qfilesystemmodel_endmoverows_isbase) {
            qfilesystemmodel_endmoverows_isbase = false;
            QFileSystemModel::endMoveRows();
        } else if (qfilesystemmodel_endmoverows_callback != nullptr) {
            qfilesystemmodel_endmoverows_callback();
        } else {
            QFileSystemModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qfilesystemmodel_begininsertcolumns_isbase) {
            qfilesystemmodel_begininsertcolumns_isbase = false;
            QFileSystemModel::beginInsertColumns(parent, first, last);
        } else if (qfilesystemmodel_begininsertcolumns_callback != nullptr) {
            qfilesystemmodel_begininsertcolumns_callback(this, parent, first, last);
        } else {
            QFileSystemModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qfilesystemmodel_endinsertcolumns_isbase) {
            qfilesystemmodel_endinsertcolumns_isbase = false;
            QFileSystemModel::endInsertColumns();
        } else if (qfilesystemmodel_endinsertcolumns_callback != nullptr) {
            qfilesystemmodel_endinsertcolumns_callback();
        } else {
            QFileSystemModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qfilesystemmodel_beginremovecolumns_isbase) {
            qfilesystemmodel_beginremovecolumns_isbase = false;
            QFileSystemModel::beginRemoveColumns(parent, first, last);
        } else if (qfilesystemmodel_beginremovecolumns_callback != nullptr) {
            qfilesystemmodel_beginremovecolumns_callback(this, parent, first, last);
        } else {
            QFileSystemModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qfilesystemmodel_endremovecolumns_isbase) {
            qfilesystemmodel_endremovecolumns_isbase = false;
            QFileSystemModel::endRemoveColumns();
        } else if (qfilesystemmodel_endremovecolumns_callback != nullptr) {
            qfilesystemmodel_endremovecolumns_callback();
        } else {
            QFileSystemModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qfilesystemmodel_beginmovecolumns_isbase) {
            qfilesystemmodel_beginmovecolumns_isbase = false;
            return QFileSystemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qfilesystemmodel_beginmovecolumns_callback != nullptr) {
            return qfilesystemmodel_beginmovecolumns_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else {
            return QFileSystemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qfilesystemmodel_endmovecolumns_isbase) {
            qfilesystemmodel_endmovecolumns_isbase = false;
            QFileSystemModel::endMoveColumns();
        } else if (qfilesystemmodel_endmovecolumns_callback != nullptr) {
            qfilesystemmodel_endmovecolumns_callback();
        } else {
            QFileSystemModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qfilesystemmodel_beginresetmodel_isbase) {
            qfilesystemmodel_beginresetmodel_isbase = false;
            QFileSystemModel::beginResetModel();
        } else if (qfilesystemmodel_beginresetmodel_callback != nullptr) {
            qfilesystemmodel_beginresetmodel_callback();
        } else {
            QFileSystemModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qfilesystemmodel_endresetmodel_isbase) {
            qfilesystemmodel_endresetmodel_isbase = false;
            QFileSystemModel::endResetModel();
        } else if (qfilesystemmodel_endresetmodel_callback != nullptr) {
            qfilesystemmodel_endresetmodel_callback();
        } else {
            QFileSystemModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qfilesystemmodel_changepersistentindex_isbase) {
            qfilesystemmodel_changepersistentindex_isbase = false;
            QFileSystemModel::changePersistentIndex(from, to);
        } else if (qfilesystemmodel_changepersistentindex_callback != nullptr) {
            qfilesystemmodel_changepersistentindex_callback(this, from, to);
        } else {
            QFileSystemModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QModelIndexList& from, const QModelIndexList& to) {
        if (qfilesystemmodel_changepersistentindexlist_isbase) {
            qfilesystemmodel_changepersistentindexlist_isbase = false;
            QFileSystemModel::changePersistentIndexList(from, to);
        } else if (qfilesystemmodel_changepersistentindexlist_callback != nullptr) {
            qfilesystemmodel_changepersistentindexlist_callback(this, from, to);
        } else {
            QFileSystemModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndexList persistentIndexList() const {
        if (qfilesystemmodel_persistentindexlist_isbase) {
            qfilesystemmodel_persistentindexlist_isbase = false;
            return QFileSystemModel::persistentIndexList();
        } else if (qfilesystemmodel_persistentindexlist_callback != nullptr) {
            return qfilesystemmodel_persistentindexlist_callback();
        } else {
            return QFileSystemModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfilesystemmodel_sender_isbase) {
            qfilesystemmodel_sender_isbase = false;
            return QFileSystemModel::sender();
        } else if (qfilesystemmodel_sender_callback != nullptr) {
            return qfilesystemmodel_sender_callback();
        } else {
            return QFileSystemModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfilesystemmodel_sendersignalindex_isbase) {
            qfilesystemmodel_sendersignalindex_isbase = false;
            return QFileSystemModel::senderSignalIndex();
        } else if (qfilesystemmodel_sendersignalindex_callback != nullptr) {
            return qfilesystemmodel_sendersignalindex_callback();
        } else {
            return QFileSystemModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfilesystemmodel_receivers_isbase) {
            qfilesystemmodel_receivers_isbase = false;
            return QFileSystemModel::receivers(signal);
        } else if (qfilesystemmodel_receivers_callback != nullptr) {
            return qfilesystemmodel_receivers_callback(this, signal);
        } else {
            return QFileSystemModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfilesystemmodel_issignalconnected_isbase) {
            qfilesystemmodel_issignalconnected_isbase = false;
            return QFileSystemModel::isSignalConnected(signal);
        } else if (qfilesystemmodel_issignalconnected_callback != nullptr) {
            return qfilesystemmodel_issignalconnected_callback(this, signal);
        } else {
            return QFileSystemModel::isSignalConnected(signal);
        }
    }
};

#endif
