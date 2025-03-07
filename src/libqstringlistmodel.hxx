#pragma once
#ifndef SRCC_LIBVIRTUALQSTRINGLISTMODEL_H
#define SRCC_LIBVIRTUALQSTRINGLISTMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStringListModel so that we can call protected methods
class VirtualQStringListModel : public QStringListModel {

  public:
    // Virtual class public types (including callbacks)
    using QStringListModel_Metacall_Callback = int (*)(QStringListModel*, QMetaObject::Call, int, void**);
    using QStringListModel_RowCount_Callback = int (*)(const QStringListModel*, const QModelIndex&);
    using QStringListModel_Sibling_Callback = QModelIndex (*)(const QStringListModel*, int, int, const QModelIndex&);
    using QStringListModel_Data_Callback = QVariant (*)(const QStringListModel*, const QModelIndex&, int);
    using QStringListModel_SetData_Callback = bool (*)(QStringListModel*, const QModelIndex&, const QVariant&, int);
    using QStringListModel_ClearItemData_Callback = bool (*)(QStringListModel*, const QModelIndex&);
    using QStringListModel_Flags_Callback = Qt::ItemFlags (*)(const QStringListModel*, const QModelIndex&);
    using QStringListModel_InsertRows_Callback = bool (*)(QStringListModel*, int, int, const QModelIndex&);
    using QStringListModel_RemoveRows_Callback = bool (*)(QStringListModel*, int, int, const QModelIndex&);
    using QStringListModel_MoveRows_Callback = bool (*)(QStringListModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QStringListModel_ItemData_Callback = QMap<int, QVariant> (*)(const QStringListModel*, const QModelIndex&);
    using QStringListModel_SetItemData_Callback = bool (*)(QStringListModel*, const QModelIndex&, const QMap<int, QVariant>&);
    using QStringListModel_Sort_Callback = void (*)(QStringListModel*, int, Qt::SortOrder);
    using QStringListModel_SupportedDropActions_Callback = Qt::DropActions (*)();
    using QStringListModel_Index_Callback = QModelIndex (*)(const QStringListModel*, int, int, const QModelIndex&);
    using QStringListModel_DropMimeData_Callback = bool (*)(QStringListModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QStringListModel_HeaderData_Callback = QVariant (*)(const QStringListModel*, int, Qt::Orientation, int);
    using QStringListModel_SetHeaderData_Callback = bool (*)(QStringListModel*, int, Qt::Orientation, const QVariant&, int);
    using QStringListModel_MimeTypes_Callback = QStringList (*)();
    using QStringListModel_MimeData_Callback = QMimeData* (*)(const QStringListModel*, const QModelIndexList&);
    using QStringListModel_CanDropMimeData_Callback = bool (*)(const QStringListModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QStringListModel_SupportedDragActions_Callback = Qt::DropActions (*)();
    using QStringListModel_InsertColumns_Callback = bool (*)(QStringListModel*, int, int, const QModelIndex&);
    using QStringListModel_RemoveColumns_Callback = bool (*)(QStringListModel*, int, int, const QModelIndex&);
    using QStringListModel_MoveColumns_Callback = bool (*)(QStringListModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QStringListModel_FetchMore_Callback = void (*)(QStringListModel*, const QModelIndex&);
    using QStringListModel_CanFetchMore_Callback = bool (*)(const QStringListModel*, const QModelIndex&);
    using QStringListModel_Buddy_Callback = QModelIndex (*)(const QStringListModel*, const QModelIndex&);
    using QStringListModel_Match_Callback = QModelIndexList (*)(const QStringListModel*, const QModelIndex&, int, const QVariant&, int, Qt::MatchFlags);
    using QStringListModel_Span_Callback = QSize (*)(const QStringListModel*, const QModelIndex&);
    using QStringListModel_RoleNames_Callback = QHash<int, QByteArray> (*)();
    using QStringListModel_MultiData_Callback = void (*)(const QStringListModel*, const QModelIndex&, QModelRoleDataSpan);
    using QStringListModel_Submit_Callback = bool (*)();
    using QStringListModel_Revert_Callback = void (*)();
    using QStringListModel_ResetInternalData_Callback = void (*)();
    using QStringListModel_Event_Callback = bool (*)(QStringListModel*, QEvent*);
    using QStringListModel_EventFilter_Callback = bool (*)(QStringListModel*, QObject*, QEvent*);
    using QStringListModel_TimerEvent_Callback = void (*)(QStringListModel*, QTimerEvent*);
    using QStringListModel_ChildEvent_Callback = void (*)(QStringListModel*, QChildEvent*);
    using QStringListModel_CustomEvent_Callback = void (*)(QStringListModel*, QEvent*);
    using QStringListModel_ConnectNotify_Callback = void (*)(QStringListModel*, const QMetaMethod&);
    using QStringListModel_DisconnectNotify_Callback = void (*)(QStringListModel*, const QMetaMethod&);
    using QStringListModel_CreateIndex_Callback = QModelIndex (*)(const QStringListModel*, int, int);
    using QStringListModel_EncodeData_Callback = void (*)(const QStringListModel*, const QModelIndexList&, QDataStream&);
    using QStringListModel_DecodeData_Callback = bool (*)(QStringListModel*, int, int, const QModelIndex&, QDataStream&);
    using QStringListModel_BeginInsertRows_Callback = void (*)(QStringListModel*, const QModelIndex&, int, int);
    using QStringListModel_EndInsertRows_Callback = void (*)();
    using QStringListModel_BeginRemoveRows_Callback = void (*)(QStringListModel*, const QModelIndex&, int, int);
    using QStringListModel_EndRemoveRows_Callback = void (*)();
    using QStringListModel_BeginMoveRows_Callback = bool (*)(QStringListModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QStringListModel_EndMoveRows_Callback = void (*)();
    using QStringListModel_BeginInsertColumns_Callback = void (*)(QStringListModel*, const QModelIndex&, int, int);
    using QStringListModel_EndInsertColumns_Callback = void (*)();
    using QStringListModel_BeginRemoveColumns_Callback = void (*)(QStringListModel*, const QModelIndex&, int, int);
    using QStringListModel_EndRemoveColumns_Callback = void (*)();
    using QStringListModel_BeginMoveColumns_Callback = bool (*)(QStringListModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QStringListModel_EndMoveColumns_Callback = void (*)();
    using QStringListModel_BeginResetModel_Callback = void (*)();
    using QStringListModel_EndResetModel_Callback = void (*)();
    using QStringListModel_ChangePersistentIndex_Callback = void (*)(QStringListModel*, const QModelIndex&, const QModelIndex&);
    using QStringListModel_ChangePersistentIndexList_Callback = void (*)(QStringListModel*, const QModelIndexList&, const QModelIndexList&);
    using QStringListModel_PersistentIndexList_Callback = QModelIndexList (*)();
    using QStringListModel_Sender_Callback = QObject* (*)();
    using QStringListModel_SenderSignalIndex_Callback = int (*)();
    using QStringListModel_Receivers_Callback = int (*)(const QStringListModel*, const char*);
    using QStringListModel_IsSignalConnected_Callback = bool (*)(const QStringListModel*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QStringListModel_Metacall_Callback qstringlistmodel_metacall_callback = nullptr;
    QStringListModel_RowCount_Callback qstringlistmodel_rowcount_callback = nullptr;
    QStringListModel_Sibling_Callback qstringlistmodel_sibling_callback = nullptr;
    QStringListModel_Data_Callback qstringlistmodel_data_callback = nullptr;
    QStringListModel_SetData_Callback qstringlistmodel_setdata_callback = nullptr;
    QStringListModel_ClearItemData_Callback qstringlistmodel_clearitemdata_callback = nullptr;
    QStringListModel_Flags_Callback qstringlistmodel_flags_callback = nullptr;
    QStringListModel_InsertRows_Callback qstringlistmodel_insertrows_callback = nullptr;
    QStringListModel_RemoveRows_Callback qstringlistmodel_removerows_callback = nullptr;
    QStringListModel_MoveRows_Callback qstringlistmodel_moverows_callback = nullptr;
    QStringListModel_ItemData_Callback qstringlistmodel_itemdata_callback = nullptr;
    QStringListModel_SetItemData_Callback qstringlistmodel_setitemdata_callback = nullptr;
    QStringListModel_Sort_Callback qstringlistmodel_sort_callback = nullptr;
    QStringListModel_SupportedDropActions_Callback qstringlistmodel_supporteddropactions_callback = nullptr;
    QStringListModel_Index_Callback qstringlistmodel_index_callback = nullptr;
    QStringListModel_DropMimeData_Callback qstringlistmodel_dropmimedata_callback = nullptr;
    QStringListModel_HeaderData_Callback qstringlistmodel_headerdata_callback = nullptr;
    QStringListModel_SetHeaderData_Callback qstringlistmodel_setheaderdata_callback = nullptr;
    QStringListModel_MimeTypes_Callback qstringlistmodel_mimetypes_callback = nullptr;
    QStringListModel_MimeData_Callback qstringlistmodel_mimedata_callback = nullptr;
    QStringListModel_CanDropMimeData_Callback qstringlistmodel_candropmimedata_callback = nullptr;
    QStringListModel_SupportedDragActions_Callback qstringlistmodel_supporteddragactions_callback = nullptr;
    QStringListModel_InsertColumns_Callback qstringlistmodel_insertcolumns_callback = nullptr;
    QStringListModel_RemoveColumns_Callback qstringlistmodel_removecolumns_callback = nullptr;
    QStringListModel_MoveColumns_Callback qstringlistmodel_movecolumns_callback = nullptr;
    QStringListModel_FetchMore_Callback qstringlistmodel_fetchmore_callback = nullptr;
    QStringListModel_CanFetchMore_Callback qstringlistmodel_canfetchmore_callback = nullptr;
    QStringListModel_Buddy_Callback qstringlistmodel_buddy_callback = nullptr;
    QStringListModel_Match_Callback qstringlistmodel_match_callback = nullptr;
    QStringListModel_Span_Callback qstringlistmodel_span_callback = nullptr;
    QStringListModel_RoleNames_Callback qstringlistmodel_rolenames_callback = nullptr;
    QStringListModel_MultiData_Callback qstringlistmodel_multidata_callback = nullptr;
    QStringListModel_Submit_Callback qstringlistmodel_submit_callback = nullptr;
    QStringListModel_Revert_Callback qstringlistmodel_revert_callback = nullptr;
    QStringListModel_ResetInternalData_Callback qstringlistmodel_resetinternaldata_callback = nullptr;
    QStringListModel_Event_Callback qstringlistmodel_event_callback = nullptr;
    QStringListModel_EventFilter_Callback qstringlistmodel_eventfilter_callback = nullptr;
    QStringListModel_TimerEvent_Callback qstringlistmodel_timerevent_callback = nullptr;
    QStringListModel_ChildEvent_Callback qstringlistmodel_childevent_callback = nullptr;
    QStringListModel_CustomEvent_Callback qstringlistmodel_customevent_callback = nullptr;
    QStringListModel_ConnectNotify_Callback qstringlistmodel_connectnotify_callback = nullptr;
    QStringListModel_DisconnectNotify_Callback qstringlistmodel_disconnectnotify_callback = nullptr;
    QStringListModel_CreateIndex_Callback qstringlistmodel_createindex_callback = nullptr;
    QStringListModel_EncodeData_Callback qstringlistmodel_encodedata_callback = nullptr;
    QStringListModel_DecodeData_Callback qstringlistmodel_decodedata_callback = nullptr;
    QStringListModel_BeginInsertRows_Callback qstringlistmodel_begininsertrows_callback = nullptr;
    QStringListModel_EndInsertRows_Callback qstringlistmodel_endinsertrows_callback = nullptr;
    QStringListModel_BeginRemoveRows_Callback qstringlistmodel_beginremoverows_callback = nullptr;
    QStringListModel_EndRemoveRows_Callback qstringlistmodel_endremoverows_callback = nullptr;
    QStringListModel_BeginMoveRows_Callback qstringlistmodel_beginmoverows_callback = nullptr;
    QStringListModel_EndMoveRows_Callback qstringlistmodel_endmoverows_callback = nullptr;
    QStringListModel_BeginInsertColumns_Callback qstringlistmodel_begininsertcolumns_callback = nullptr;
    QStringListModel_EndInsertColumns_Callback qstringlistmodel_endinsertcolumns_callback = nullptr;
    QStringListModel_BeginRemoveColumns_Callback qstringlistmodel_beginremovecolumns_callback = nullptr;
    QStringListModel_EndRemoveColumns_Callback qstringlistmodel_endremovecolumns_callback = nullptr;
    QStringListModel_BeginMoveColumns_Callback qstringlistmodel_beginmovecolumns_callback = nullptr;
    QStringListModel_EndMoveColumns_Callback qstringlistmodel_endmovecolumns_callback = nullptr;
    QStringListModel_BeginResetModel_Callback qstringlistmodel_beginresetmodel_callback = nullptr;
    QStringListModel_EndResetModel_Callback qstringlistmodel_endresetmodel_callback = nullptr;
    QStringListModel_ChangePersistentIndex_Callback qstringlistmodel_changepersistentindex_callback = nullptr;
    QStringListModel_ChangePersistentIndexList_Callback qstringlistmodel_changepersistentindexlist_callback = nullptr;
    QStringListModel_PersistentIndexList_Callback qstringlistmodel_persistentindexlist_callback = nullptr;
    QStringListModel_Sender_Callback qstringlistmodel_sender_callback = nullptr;
    QStringListModel_SenderSignalIndex_Callback qstringlistmodel_sendersignalindex_callback = nullptr;
    QStringListModel_Receivers_Callback qstringlistmodel_receivers_callback = nullptr;
    QStringListModel_IsSignalConnected_Callback qstringlistmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstringlistmodel_metacall_isbase = false;
    mutable bool qstringlistmodel_rowcount_isbase = false;
    mutable bool qstringlistmodel_sibling_isbase = false;
    mutable bool qstringlistmodel_data_isbase = false;
    mutable bool qstringlistmodel_setdata_isbase = false;
    mutable bool qstringlistmodel_clearitemdata_isbase = false;
    mutable bool qstringlistmodel_flags_isbase = false;
    mutable bool qstringlistmodel_insertrows_isbase = false;
    mutable bool qstringlistmodel_removerows_isbase = false;
    mutable bool qstringlistmodel_moverows_isbase = false;
    mutable bool qstringlistmodel_itemdata_isbase = false;
    mutable bool qstringlistmodel_setitemdata_isbase = false;
    mutable bool qstringlistmodel_sort_isbase = false;
    mutable bool qstringlistmodel_supporteddropactions_isbase = false;
    mutable bool qstringlistmodel_index_isbase = false;
    mutable bool qstringlistmodel_dropmimedata_isbase = false;
    mutable bool qstringlistmodel_headerdata_isbase = false;
    mutable bool qstringlistmodel_setheaderdata_isbase = false;
    mutable bool qstringlistmodel_mimetypes_isbase = false;
    mutable bool qstringlistmodel_mimedata_isbase = false;
    mutable bool qstringlistmodel_candropmimedata_isbase = false;
    mutable bool qstringlistmodel_supporteddragactions_isbase = false;
    mutable bool qstringlistmodel_insertcolumns_isbase = false;
    mutable bool qstringlistmodel_removecolumns_isbase = false;
    mutable bool qstringlistmodel_movecolumns_isbase = false;
    mutable bool qstringlistmodel_fetchmore_isbase = false;
    mutable bool qstringlistmodel_canfetchmore_isbase = false;
    mutable bool qstringlistmodel_buddy_isbase = false;
    mutable bool qstringlistmodel_match_isbase = false;
    mutable bool qstringlistmodel_span_isbase = false;
    mutable bool qstringlistmodel_rolenames_isbase = false;
    mutable bool qstringlistmodel_multidata_isbase = false;
    mutable bool qstringlistmodel_submit_isbase = false;
    mutable bool qstringlistmodel_revert_isbase = false;
    mutable bool qstringlistmodel_resetinternaldata_isbase = false;
    mutable bool qstringlistmodel_event_isbase = false;
    mutable bool qstringlistmodel_eventfilter_isbase = false;
    mutable bool qstringlistmodel_timerevent_isbase = false;
    mutable bool qstringlistmodel_childevent_isbase = false;
    mutable bool qstringlistmodel_customevent_isbase = false;
    mutable bool qstringlistmodel_connectnotify_isbase = false;
    mutable bool qstringlistmodel_disconnectnotify_isbase = false;
    mutable bool qstringlistmodel_createindex_isbase = false;
    mutable bool qstringlistmodel_encodedata_isbase = false;
    mutable bool qstringlistmodel_decodedata_isbase = false;
    mutable bool qstringlistmodel_begininsertrows_isbase = false;
    mutable bool qstringlistmodel_endinsertrows_isbase = false;
    mutable bool qstringlistmodel_beginremoverows_isbase = false;
    mutable bool qstringlistmodel_endremoverows_isbase = false;
    mutable bool qstringlistmodel_beginmoverows_isbase = false;
    mutable bool qstringlistmodel_endmoverows_isbase = false;
    mutable bool qstringlistmodel_begininsertcolumns_isbase = false;
    mutable bool qstringlistmodel_endinsertcolumns_isbase = false;
    mutable bool qstringlistmodel_beginremovecolumns_isbase = false;
    mutable bool qstringlistmodel_endremovecolumns_isbase = false;
    mutable bool qstringlistmodel_beginmovecolumns_isbase = false;
    mutable bool qstringlistmodel_endmovecolumns_isbase = false;
    mutable bool qstringlistmodel_beginresetmodel_isbase = false;
    mutable bool qstringlistmodel_endresetmodel_isbase = false;
    mutable bool qstringlistmodel_changepersistentindex_isbase = false;
    mutable bool qstringlistmodel_changepersistentindexlist_isbase = false;
    mutable bool qstringlistmodel_persistentindexlist_isbase = false;
    mutable bool qstringlistmodel_sender_isbase = false;
    mutable bool qstringlistmodel_sendersignalindex_isbase = false;
    mutable bool qstringlistmodel_receivers_isbase = false;
    mutable bool qstringlistmodel_issignalconnected_isbase = false;

  public:
    VirtualQStringListModel() : QStringListModel(){};
    VirtualQStringListModel(const QStringList& strings) : QStringListModel(strings){};
    VirtualQStringListModel(QObject* parent) : QStringListModel(parent){};
    VirtualQStringListModel(const QStringList& strings, QObject* parent) : QStringListModel(strings, parent){};

    ~VirtualQStringListModel() {
        qstringlistmodel_metacall_callback = nullptr;
        qstringlistmodel_rowcount_callback = nullptr;
        qstringlistmodel_sibling_callback = nullptr;
        qstringlistmodel_data_callback = nullptr;
        qstringlistmodel_setdata_callback = nullptr;
        qstringlistmodel_clearitemdata_callback = nullptr;
        qstringlistmodel_flags_callback = nullptr;
        qstringlistmodel_insertrows_callback = nullptr;
        qstringlistmodel_removerows_callback = nullptr;
        qstringlistmodel_moverows_callback = nullptr;
        qstringlistmodel_itemdata_callback = nullptr;
        qstringlistmodel_setitemdata_callback = nullptr;
        qstringlistmodel_sort_callback = nullptr;
        qstringlistmodel_supporteddropactions_callback = nullptr;
        qstringlistmodel_index_callback = nullptr;
        qstringlistmodel_dropmimedata_callback = nullptr;
        qstringlistmodel_headerdata_callback = nullptr;
        qstringlistmodel_setheaderdata_callback = nullptr;
        qstringlistmodel_mimetypes_callback = nullptr;
        qstringlistmodel_mimedata_callback = nullptr;
        qstringlistmodel_candropmimedata_callback = nullptr;
        qstringlistmodel_supporteddragactions_callback = nullptr;
        qstringlistmodel_insertcolumns_callback = nullptr;
        qstringlistmodel_removecolumns_callback = nullptr;
        qstringlistmodel_movecolumns_callback = nullptr;
        qstringlistmodel_fetchmore_callback = nullptr;
        qstringlistmodel_canfetchmore_callback = nullptr;
        qstringlistmodel_buddy_callback = nullptr;
        qstringlistmodel_match_callback = nullptr;
        qstringlistmodel_span_callback = nullptr;
        qstringlistmodel_rolenames_callback = nullptr;
        qstringlistmodel_multidata_callback = nullptr;
        qstringlistmodel_submit_callback = nullptr;
        qstringlistmodel_revert_callback = nullptr;
        qstringlistmodel_resetinternaldata_callback = nullptr;
        qstringlistmodel_event_callback = nullptr;
        qstringlistmodel_eventfilter_callback = nullptr;
        qstringlistmodel_timerevent_callback = nullptr;
        qstringlistmodel_childevent_callback = nullptr;
        qstringlistmodel_customevent_callback = nullptr;
        qstringlistmodel_connectnotify_callback = nullptr;
        qstringlistmodel_disconnectnotify_callback = nullptr;
        qstringlistmodel_createindex_callback = nullptr;
        qstringlistmodel_encodedata_callback = nullptr;
        qstringlistmodel_decodedata_callback = nullptr;
        qstringlistmodel_begininsertrows_callback = nullptr;
        qstringlistmodel_endinsertrows_callback = nullptr;
        qstringlistmodel_beginremoverows_callback = nullptr;
        qstringlistmodel_endremoverows_callback = nullptr;
        qstringlistmodel_beginmoverows_callback = nullptr;
        qstringlistmodel_endmoverows_callback = nullptr;
        qstringlistmodel_begininsertcolumns_callback = nullptr;
        qstringlistmodel_endinsertcolumns_callback = nullptr;
        qstringlistmodel_beginremovecolumns_callback = nullptr;
        qstringlistmodel_endremovecolumns_callback = nullptr;
        qstringlistmodel_beginmovecolumns_callback = nullptr;
        qstringlistmodel_endmovecolumns_callback = nullptr;
        qstringlistmodel_beginresetmodel_callback = nullptr;
        qstringlistmodel_endresetmodel_callback = nullptr;
        qstringlistmodel_changepersistentindex_callback = nullptr;
        qstringlistmodel_changepersistentindexlist_callback = nullptr;
        qstringlistmodel_persistentindexlist_callback = nullptr;
        qstringlistmodel_sender_callback = nullptr;
        qstringlistmodel_sendersignalindex_callback = nullptr;
        qstringlistmodel_receivers_callback = nullptr;
        qstringlistmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQStringListModel_Metacall_Callback(QStringListModel_Metacall_Callback cb) { qstringlistmodel_metacall_callback = cb; }
    void setQStringListModel_RowCount_Callback(QStringListModel_RowCount_Callback cb) { qstringlistmodel_rowcount_callback = cb; }
    void setQStringListModel_Sibling_Callback(QStringListModel_Sibling_Callback cb) { qstringlistmodel_sibling_callback = cb; }
    void setQStringListModel_Data_Callback(QStringListModel_Data_Callback cb) { qstringlistmodel_data_callback = cb; }
    void setQStringListModel_SetData_Callback(QStringListModel_SetData_Callback cb) { qstringlistmodel_setdata_callback = cb; }
    void setQStringListModel_ClearItemData_Callback(QStringListModel_ClearItemData_Callback cb) { qstringlistmodel_clearitemdata_callback = cb; }
    void setQStringListModel_Flags_Callback(QStringListModel_Flags_Callback cb) { qstringlistmodel_flags_callback = cb; }
    void setQStringListModel_InsertRows_Callback(QStringListModel_InsertRows_Callback cb) { qstringlistmodel_insertrows_callback = cb; }
    void setQStringListModel_RemoveRows_Callback(QStringListModel_RemoveRows_Callback cb) { qstringlistmodel_removerows_callback = cb; }
    void setQStringListModel_MoveRows_Callback(QStringListModel_MoveRows_Callback cb) { qstringlistmodel_moverows_callback = cb; }
    void setQStringListModel_ItemData_Callback(QStringListModel_ItemData_Callback cb) { qstringlistmodel_itemdata_callback = cb; }
    void setQStringListModel_SetItemData_Callback(QStringListModel_SetItemData_Callback cb) { qstringlistmodel_setitemdata_callback = cb; }
    void setQStringListModel_Sort_Callback(QStringListModel_Sort_Callback cb) { qstringlistmodel_sort_callback = cb; }
    void setQStringListModel_SupportedDropActions_Callback(QStringListModel_SupportedDropActions_Callback cb) { qstringlistmodel_supporteddropactions_callback = cb; }
    void setQStringListModel_Index_Callback(QStringListModel_Index_Callback cb) { qstringlistmodel_index_callback = cb; }
    void setQStringListModel_DropMimeData_Callback(QStringListModel_DropMimeData_Callback cb) { qstringlistmodel_dropmimedata_callback = cb; }
    void setQStringListModel_HeaderData_Callback(QStringListModel_HeaderData_Callback cb) { qstringlistmodel_headerdata_callback = cb; }
    void setQStringListModel_SetHeaderData_Callback(QStringListModel_SetHeaderData_Callback cb) { qstringlistmodel_setheaderdata_callback = cb; }
    void setQStringListModel_MimeTypes_Callback(QStringListModel_MimeTypes_Callback cb) { qstringlistmodel_mimetypes_callback = cb; }
    void setQStringListModel_MimeData_Callback(QStringListModel_MimeData_Callback cb) { qstringlistmodel_mimedata_callback = cb; }
    void setQStringListModel_CanDropMimeData_Callback(QStringListModel_CanDropMimeData_Callback cb) { qstringlistmodel_candropmimedata_callback = cb; }
    void setQStringListModel_SupportedDragActions_Callback(QStringListModel_SupportedDragActions_Callback cb) { qstringlistmodel_supporteddragactions_callback = cb; }
    void setQStringListModel_InsertColumns_Callback(QStringListModel_InsertColumns_Callback cb) { qstringlistmodel_insertcolumns_callback = cb; }
    void setQStringListModel_RemoveColumns_Callback(QStringListModel_RemoveColumns_Callback cb) { qstringlistmodel_removecolumns_callback = cb; }
    void setQStringListModel_MoveColumns_Callback(QStringListModel_MoveColumns_Callback cb) { qstringlistmodel_movecolumns_callback = cb; }
    void setQStringListModel_FetchMore_Callback(QStringListModel_FetchMore_Callback cb) { qstringlistmodel_fetchmore_callback = cb; }
    void setQStringListModel_CanFetchMore_Callback(QStringListModel_CanFetchMore_Callback cb) { qstringlistmodel_canfetchmore_callback = cb; }
    void setQStringListModel_Buddy_Callback(QStringListModel_Buddy_Callback cb) { qstringlistmodel_buddy_callback = cb; }
    void setQStringListModel_Match_Callback(QStringListModel_Match_Callback cb) { qstringlistmodel_match_callback = cb; }
    void setQStringListModel_Span_Callback(QStringListModel_Span_Callback cb) { qstringlistmodel_span_callback = cb; }
    void setQStringListModel_RoleNames_Callback(QStringListModel_RoleNames_Callback cb) { qstringlistmodel_rolenames_callback = cb; }
    void setQStringListModel_MultiData_Callback(QStringListModel_MultiData_Callback cb) { qstringlistmodel_multidata_callback = cb; }
    void setQStringListModel_Submit_Callback(QStringListModel_Submit_Callback cb) { qstringlistmodel_submit_callback = cb; }
    void setQStringListModel_Revert_Callback(QStringListModel_Revert_Callback cb) { qstringlistmodel_revert_callback = cb; }
    void setQStringListModel_ResetInternalData_Callback(QStringListModel_ResetInternalData_Callback cb) { qstringlistmodel_resetinternaldata_callback = cb; }
    void setQStringListModel_Event_Callback(QStringListModel_Event_Callback cb) { qstringlistmodel_event_callback = cb; }
    void setQStringListModel_EventFilter_Callback(QStringListModel_EventFilter_Callback cb) { qstringlistmodel_eventfilter_callback = cb; }
    void setQStringListModel_TimerEvent_Callback(QStringListModel_TimerEvent_Callback cb) { qstringlistmodel_timerevent_callback = cb; }
    void setQStringListModel_ChildEvent_Callback(QStringListModel_ChildEvent_Callback cb) { qstringlistmodel_childevent_callback = cb; }
    void setQStringListModel_CustomEvent_Callback(QStringListModel_CustomEvent_Callback cb) { qstringlistmodel_customevent_callback = cb; }
    void setQStringListModel_ConnectNotify_Callback(QStringListModel_ConnectNotify_Callback cb) { qstringlistmodel_connectnotify_callback = cb; }
    void setQStringListModel_DisconnectNotify_Callback(QStringListModel_DisconnectNotify_Callback cb) { qstringlistmodel_disconnectnotify_callback = cb; }
    void setQStringListModel_CreateIndex_Callback(QStringListModel_CreateIndex_Callback cb) { qstringlistmodel_createindex_callback = cb; }
    void setQStringListModel_EncodeData_Callback(QStringListModel_EncodeData_Callback cb) { qstringlistmodel_encodedata_callback = cb; }
    void setQStringListModel_DecodeData_Callback(QStringListModel_DecodeData_Callback cb) { qstringlistmodel_decodedata_callback = cb; }
    void setQStringListModel_BeginInsertRows_Callback(QStringListModel_BeginInsertRows_Callback cb) { qstringlistmodel_begininsertrows_callback = cb; }
    void setQStringListModel_EndInsertRows_Callback(QStringListModel_EndInsertRows_Callback cb) { qstringlistmodel_endinsertrows_callback = cb; }
    void setQStringListModel_BeginRemoveRows_Callback(QStringListModel_BeginRemoveRows_Callback cb) { qstringlistmodel_beginremoverows_callback = cb; }
    void setQStringListModel_EndRemoveRows_Callback(QStringListModel_EndRemoveRows_Callback cb) { qstringlistmodel_endremoverows_callback = cb; }
    void setQStringListModel_BeginMoveRows_Callback(QStringListModel_BeginMoveRows_Callback cb) { qstringlistmodel_beginmoverows_callback = cb; }
    void setQStringListModel_EndMoveRows_Callback(QStringListModel_EndMoveRows_Callback cb) { qstringlistmodel_endmoverows_callback = cb; }
    void setQStringListModel_BeginInsertColumns_Callback(QStringListModel_BeginInsertColumns_Callback cb) { qstringlistmodel_begininsertcolumns_callback = cb; }
    void setQStringListModel_EndInsertColumns_Callback(QStringListModel_EndInsertColumns_Callback cb) { qstringlistmodel_endinsertcolumns_callback = cb; }
    void setQStringListModel_BeginRemoveColumns_Callback(QStringListModel_BeginRemoveColumns_Callback cb) { qstringlistmodel_beginremovecolumns_callback = cb; }
    void setQStringListModel_EndRemoveColumns_Callback(QStringListModel_EndRemoveColumns_Callback cb) { qstringlistmodel_endremovecolumns_callback = cb; }
    void setQStringListModel_BeginMoveColumns_Callback(QStringListModel_BeginMoveColumns_Callback cb) { qstringlistmodel_beginmovecolumns_callback = cb; }
    void setQStringListModel_EndMoveColumns_Callback(QStringListModel_EndMoveColumns_Callback cb) { qstringlistmodel_endmovecolumns_callback = cb; }
    void setQStringListModel_BeginResetModel_Callback(QStringListModel_BeginResetModel_Callback cb) { qstringlistmodel_beginresetmodel_callback = cb; }
    void setQStringListModel_EndResetModel_Callback(QStringListModel_EndResetModel_Callback cb) { qstringlistmodel_endresetmodel_callback = cb; }
    void setQStringListModel_ChangePersistentIndex_Callback(QStringListModel_ChangePersistentIndex_Callback cb) { qstringlistmodel_changepersistentindex_callback = cb; }
    void setQStringListModel_ChangePersistentIndexList_Callback(QStringListModel_ChangePersistentIndexList_Callback cb) { qstringlistmodel_changepersistentindexlist_callback = cb; }
    void setQStringListModel_PersistentIndexList_Callback(QStringListModel_PersistentIndexList_Callback cb) { qstringlistmodel_persistentindexlist_callback = cb; }
    void setQStringListModel_Sender_Callback(QStringListModel_Sender_Callback cb) { qstringlistmodel_sender_callback = cb; }
    void setQStringListModel_SenderSignalIndex_Callback(QStringListModel_SenderSignalIndex_Callback cb) { qstringlistmodel_sendersignalindex_callback = cb; }
    void setQStringListModel_Receivers_Callback(QStringListModel_Receivers_Callback cb) { qstringlistmodel_receivers_callback = cb; }
    void setQStringListModel_IsSignalConnected_Callback(QStringListModel_IsSignalConnected_Callback cb) { qstringlistmodel_issignalconnected_callback = cb; }

    // Base flag setters
    void setQStringListModel_Metacall_IsBase(bool value) const { qstringlistmodel_metacall_isbase = value; }
    void setQStringListModel_RowCount_IsBase(bool value) const { qstringlistmodel_rowcount_isbase = value; }
    void setQStringListModel_Sibling_IsBase(bool value) const { qstringlistmodel_sibling_isbase = value; }
    void setQStringListModel_Data_IsBase(bool value) const { qstringlistmodel_data_isbase = value; }
    void setQStringListModel_SetData_IsBase(bool value) const { qstringlistmodel_setdata_isbase = value; }
    void setQStringListModel_ClearItemData_IsBase(bool value) const { qstringlistmodel_clearitemdata_isbase = value; }
    void setQStringListModel_Flags_IsBase(bool value) const { qstringlistmodel_flags_isbase = value; }
    void setQStringListModel_InsertRows_IsBase(bool value) const { qstringlistmodel_insertrows_isbase = value; }
    void setQStringListModel_RemoveRows_IsBase(bool value) const { qstringlistmodel_removerows_isbase = value; }
    void setQStringListModel_MoveRows_IsBase(bool value) const { qstringlistmodel_moverows_isbase = value; }
    void setQStringListModel_ItemData_IsBase(bool value) const { qstringlistmodel_itemdata_isbase = value; }
    void setQStringListModel_SetItemData_IsBase(bool value) const { qstringlistmodel_setitemdata_isbase = value; }
    void setQStringListModel_Sort_IsBase(bool value) const { qstringlistmodel_sort_isbase = value; }
    void setQStringListModel_SupportedDropActions_IsBase(bool value) const { qstringlistmodel_supporteddropactions_isbase = value; }
    void setQStringListModel_Index_IsBase(bool value) const { qstringlistmodel_index_isbase = value; }
    void setQStringListModel_DropMimeData_IsBase(bool value) const { qstringlistmodel_dropmimedata_isbase = value; }
    void setQStringListModel_HeaderData_IsBase(bool value) const { qstringlistmodel_headerdata_isbase = value; }
    void setQStringListModel_SetHeaderData_IsBase(bool value) const { qstringlistmodel_setheaderdata_isbase = value; }
    void setQStringListModel_MimeTypes_IsBase(bool value) const { qstringlistmodel_mimetypes_isbase = value; }
    void setQStringListModel_MimeData_IsBase(bool value) const { qstringlistmodel_mimedata_isbase = value; }
    void setQStringListModel_CanDropMimeData_IsBase(bool value) const { qstringlistmodel_candropmimedata_isbase = value; }
    void setQStringListModel_SupportedDragActions_IsBase(bool value) const { qstringlistmodel_supporteddragactions_isbase = value; }
    void setQStringListModel_InsertColumns_IsBase(bool value) const { qstringlistmodel_insertcolumns_isbase = value; }
    void setQStringListModel_RemoveColumns_IsBase(bool value) const { qstringlistmodel_removecolumns_isbase = value; }
    void setQStringListModel_MoveColumns_IsBase(bool value) const { qstringlistmodel_movecolumns_isbase = value; }
    void setQStringListModel_FetchMore_IsBase(bool value) const { qstringlistmodel_fetchmore_isbase = value; }
    void setQStringListModel_CanFetchMore_IsBase(bool value) const { qstringlistmodel_canfetchmore_isbase = value; }
    void setQStringListModel_Buddy_IsBase(bool value) const { qstringlistmodel_buddy_isbase = value; }
    void setQStringListModel_Match_IsBase(bool value) const { qstringlistmodel_match_isbase = value; }
    void setQStringListModel_Span_IsBase(bool value) const { qstringlistmodel_span_isbase = value; }
    void setQStringListModel_RoleNames_IsBase(bool value) const { qstringlistmodel_rolenames_isbase = value; }
    void setQStringListModel_MultiData_IsBase(bool value) const { qstringlistmodel_multidata_isbase = value; }
    void setQStringListModel_Submit_IsBase(bool value) const { qstringlistmodel_submit_isbase = value; }
    void setQStringListModel_Revert_IsBase(bool value) const { qstringlistmodel_revert_isbase = value; }
    void setQStringListModel_ResetInternalData_IsBase(bool value) const { qstringlistmodel_resetinternaldata_isbase = value; }
    void setQStringListModel_Event_IsBase(bool value) const { qstringlistmodel_event_isbase = value; }
    void setQStringListModel_EventFilter_IsBase(bool value) const { qstringlistmodel_eventfilter_isbase = value; }
    void setQStringListModel_TimerEvent_IsBase(bool value) const { qstringlistmodel_timerevent_isbase = value; }
    void setQStringListModel_ChildEvent_IsBase(bool value) const { qstringlistmodel_childevent_isbase = value; }
    void setQStringListModel_CustomEvent_IsBase(bool value) const { qstringlistmodel_customevent_isbase = value; }
    void setQStringListModel_ConnectNotify_IsBase(bool value) const { qstringlistmodel_connectnotify_isbase = value; }
    void setQStringListModel_DisconnectNotify_IsBase(bool value) const { qstringlistmodel_disconnectnotify_isbase = value; }
    void setQStringListModel_CreateIndex_IsBase(bool value) const { qstringlistmodel_createindex_isbase = value; }
    void setQStringListModel_EncodeData_IsBase(bool value) const { qstringlistmodel_encodedata_isbase = value; }
    void setQStringListModel_DecodeData_IsBase(bool value) const { qstringlistmodel_decodedata_isbase = value; }
    void setQStringListModel_BeginInsertRows_IsBase(bool value) const { qstringlistmodel_begininsertrows_isbase = value; }
    void setQStringListModel_EndInsertRows_IsBase(bool value) const { qstringlistmodel_endinsertrows_isbase = value; }
    void setQStringListModel_BeginRemoveRows_IsBase(bool value) const { qstringlistmodel_beginremoverows_isbase = value; }
    void setQStringListModel_EndRemoveRows_IsBase(bool value) const { qstringlistmodel_endremoverows_isbase = value; }
    void setQStringListModel_BeginMoveRows_IsBase(bool value) const { qstringlistmodel_beginmoverows_isbase = value; }
    void setQStringListModel_EndMoveRows_IsBase(bool value) const { qstringlistmodel_endmoverows_isbase = value; }
    void setQStringListModel_BeginInsertColumns_IsBase(bool value) const { qstringlistmodel_begininsertcolumns_isbase = value; }
    void setQStringListModel_EndInsertColumns_IsBase(bool value) const { qstringlistmodel_endinsertcolumns_isbase = value; }
    void setQStringListModel_BeginRemoveColumns_IsBase(bool value) const { qstringlistmodel_beginremovecolumns_isbase = value; }
    void setQStringListModel_EndRemoveColumns_IsBase(bool value) const { qstringlistmodel_endremovecolumns_isbase = value; }
    void setQStringListModel_BeginMoveColumns_IsBase(bool value) const { qstringlistmodel_beginmovecolumns_isbase = value; }
    void setQStringListModel_EndMoveColumns_IsBase(bool value) const { qstringlistmodel_endmovecolumns_isbase = value; }
    void setQStringListModel_BeginResetModel_IsBase(bool value) const { qstringlistmodel_beginresetmodel_isbase = value; }
    void setQStringListModel_EndResetModel_IsBase(bool value) const { qstringlistmodel_endresetmodel_isbase = value; }
    void setQStringListModel_ChangePersistentIndex_IsBase(bool value) const { qstringlistmodel_changepersistentindex_isbase = value; }
    void setQStringListModel_ChangePersistentIndexList_IsBase(bool value) const { qstringlistmodel_changepersistentindexlist_isbase = value; }
    void setQStringListModel_PersistentIndexList_IsBase(bool value) const { qstringlistmodel_persistentindexlist_isbase = value; }
    void setQStringListModel_Sender_IsBase(bool value) const { qstringlistmodel_sender_isbase = value; }
    void setQStringListModel_SenderSignalIndex_IsBase(bool value) const { qstringlistmodel_sendersignalindex_isbase = value; }
    void setQStringListModel_Receivers_IsBase(bool value) const { qstringlistmodel_receivers_isbase = value; }
    void setQStringListModel_IsSignalConnected_IsBase(bool value) const { qstringlistmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstringlistmodel_metacall_isbase) {
            qstringlistmodel_metacall_isbase = false;
            return QStringListModel::qt_metacall(param1, param2, param3);
        } else if (qstringlistmodel_metacall_callback != nullptr) {
            return qstringlistmodel_metacall_callback(this, param1, param2, param3);
        } else {
            return QStringListModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qstringlistmodel_rowcount_isbase) {
            qstringlistmodel_rowcount_isbase = false;
            return QStringListModel::rowCount(parent);
        } else if (qstringlistmodel_rowcount_callback != nullptr) {
            return qstringlistmodel_rowcount_callback(this, parent);
        } else {
            return QStringListModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qstringlistmodel_sibling_isbase) {
            qstringlistmodel_sibling_isbase = false;
            return QStringListModel::sibling(row, column, idx);
        } else if (qstringlistmodel_sibling_callback != nullptr) {
            return qstringlistmodel_sibling_callback(this, row, column, idx);
        } else {
            return QStringListModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qstringlistmodel_data_isbase) {
            qstringlistmodel_data_isbase = false;
            return QStringListModel::data(index, role);
        } else if (qstringlistmodel_data_callback != nullptr) {
            return qstringlistmodel_data_callback(this, index, role);
        } else {
            return QStringListModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qstringlistmodel_setdata_isbase) {
            qstringlistmodel_setdata_isbase = false;
            return QStringListModel::setData(index, value, role);
        } else if (qstringlistmodel_setdata_callback != nullptr) {
            return qstringlistmodel_setdata_callback(this, index, value, role);
        } else {
            return QStringListModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qstringlistmodel_clearitemdata_isbase) {
            qstringlistmodel_clearitemdata_isbase = false;
            return QStringListModel::clearItemData(index);
        } else if (qstringlistmodel_clearitemdata_callback != nullptr) {
            return qstringlistmodel_clearitemdata_callback(this, index);
        } else {
            return QStringListModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qstringlistmodel_flags_isbase) {
            qstringlistmodel_flags_isbase = false;
            return QStringListModel::flags(index);
        } else if (qstringlistmodel_flags_callback != nullptr) {
            return qstringlistmodel_flags_callback(this, index);
        } else {
            return QStringListModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_insertrows_isbase) {
            qstringlistmodel_insertrows_isbase = false;
            return QStringListModel::insertRows(row, count, parent);
        } else if (qstringlistmodel_insertrows_callback != nullptr) {
            return qstringlistmodel_insertrows_callback(this, row, count, parent);
        } else {
            return QStringListModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_removerows_isbase) {
            qstringlistmodel_removerows_isbase = false;
            return QStringListModel::removeRows(row, count, parent);
        } else if (qstringlistmodel_removerows_callback != nullptr) {
            return qstringlistmodel_removerows_callback(this, row, count, parent);
        } else {
            return QStringListModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qstringlistmodel_moverows_isbase) {
            qstringlistmodel_moverows_isbase = false;
            return QStringListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qstringlistmodel_moverows_callback != nullptr) {
            return qstringlistmodel_moverows_callback(this, sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else {
            return QStringListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qstringlistmodel_itemdata_isbase) {
            qstringlistmodel_itemdata_isbase = false;
            return QStringListModel::itemData(index);
        } else if (qstringlistmodel_itemdata_callback != nullptr) {
            return qstringlistmodel_itemdata_callback(this, index);
        } else {
            return QStringListModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qstringlistmodel_setitemdata_isbase) {
            qstringlistmodel_setitemdata_isbase = false;
            return QStringListModel::setItemData(index, roles);
        } else if (qstringlistmodel_setitemdata_callback != nullptr) {
            return qstringlistmodel_setitemdata_callback(this, index, roles);
        } else {
            return QStringListModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qstringlistmodel_sort_isbase) {
            qstringlistmodel_sort_isbase = false;
            QStringListModel::sort(column, order);
        } else if (qstringlistmodel_sort_callback != nullptr) {
            qstringlistmodel_sort_callback(this, column, order);
        } else {
            QStringListModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qstringlistmodel_supporteddropactions_isbase) {
            qstringlistmodel_supporteddropactions_isbase = false;
            return QStringListModel::supportedDropActions();
        } else if (qstringlistmodel_supporteddropactions_callback != nullptr) {
            return qstringlistmodel_supporteddropactions_callback();
        } else {
            return QStringListModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qstringlistmodel_index_isbase) {
            qstringlistmodel_index_isbase = false;
            return QStringListModel::index(row, column, parent);
        } else if (qstringlistmodel_index_callback != nullptr) {
            return qstringlistmodel_index_callback(this, row, column, parent);
        } else {
            return QStringListModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qstringlistmodel_dropmimedata_isbase) {
            qstringlistmodel_dropmimedata_isbase = false;
            return QStringListModel::dropMimeData(data, action, row, column, parent);
        } else if (qstringlistmodel_dropmimedata_callback != nullptr) {
            return qstringlistmodel_dropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QStringListModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qstringlistmodel_headerdata_isbase) {
            qstringlistmodel_headerdata_isbase = false;
            return QStringListModel::headerData(section, orientation, role);
        } else if (qstringlistmodel_headerdata_callback != nullptr) {
            return qstringlistmodel_headerdata_callback(this, section, orientation, role);
        } else {
            return QStringListModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qstringlistmodel_setheaderdata_isbase) {
            qstringlistmodel_setheaderdata_isbase = false;
            return QStringListModel::setHeaderData(section, orientation, value, role);
        } else if (qstringlistmodel_setheaderdata_callback != nullptr) {
            return qstringlistmodel_setheaderdata_callback(this, section, orientation, value, role);
        } else {
            return QStringListModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qstringlistmodel_mimetypes_isbase) {
            qstringlistmodel_mimetypes_isbase = false;
            return QStringListModel::mimeTypes();
        } else if (qstringlistmodel_mimetypes_callback != nullptr) {
            return qstringlistmodel_mimetypes_callback();
        } else {
            return QStringListModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
        if (qstringlistmodel_mimedata_isbase) {
            qstringlistmodel_mimedata_isbase = false;
            return QStringListModel::mimeData(indexes);
        } else if (qstringlistmodel_mimedata_callback != nullptr) {
            return qstringlistmodel_mimedata_callback(this, indexes);
        } else {
            return QStringListModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qstringlistmodel_candropmimedata_isbase) {
            qstringlistmodel_candropmimedata_isbase = false;
            return QStringListModel::canDropMimeData(data, action, row, column, parent);
        } else if (qstringlistmodel_candropmimedata_callback != nullptr) {
            return qstringlistmodel_candropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QStringListModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qstringlistmodel_supporteddragactions_isbase) {
            qstringlistmodel_supporteddragactions_isbase = false;
            return QStringListModel::supportedDragActions();
        } else if (qstringlistmodel_supporteddragactions_callback != nullptr) {
            return qstringlistmodel_supporteddragactions_callback();
        } else {
            return QStringListModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_insertcolumns_isbase) {
            qstringlistmodel_insertcolumns_isbase = false;
            return QStringListModel::insertColumns(column, count, parent);
        } else if (qstringlistmodel_insertcolumns_callback != nullptr) {
            return qstringlistmodel_insertcolumns_callback(this, column, count, parent);
        } else {
            return QStringListModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_removecolumns_isbase) {
            qstringlistmodel_removecolumns_isbase = false;
            return QStringListModel::removeColumns(column, count, parent);
        } else if (qstringlistmodel_removecolumns_callback != nullptr) {
            return qstringlistmodel_removecolumns_callback(this, column, count, parent);
        } else {
            return QStringListModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qstringlistmodel_movecolumns_isbase) {
            qstringlistmodel_movecolumns_isbase = false;
            return QStringListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qstringlistmodel_movecolumns_callback != nullptr) {
            return qstringlistmodel_movecolumns_callback(this, sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else {
            return QStringListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qstringlistmodel_fetchmore_isbase) {
            qstringlistmodel_fetchmore_isbase = false;
            QStringListModel::fetchMore(parent);
        } else if (qstringlistmodel_fetchmore_callback != nullptr) {
            qstringlistmodel_fetchmore_callback(this, parent);
        } else {
            QStringListModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qstringlistmodel_canfetchmore_isbase) {
            qstringlistmodel_canfetchmore_isbase = false;
            return QStringListModel::canFetchMore(parent);
        } else if (qstringlistmodel_canfetchmore_callback != nullptr) {
            return qstringlistmodel_canfetchmore_callback(this, parent);
        } else {
            return QStringListModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qstringlistmodel_buddy_isbase) {
            qstringlistmodel_buddy_isbase = false;
            return QStringListModel::buddy(index);
        } else if (qstringlistmodel_buddy_callback != nullptr) {
            return qstringlistmodel_buddy_callback(this, index);
        } else {
            return QStringListModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qstringlistmodel_match_isbase) {
            qstringlistmodel_match_isbase = false;
            return QStringListModel::match(start, role, value, hits, flags);
        } else if (qstringlistmodel_match_callback != nullptr) {
            return qstringlistmodel_match_callback(this, start, role, value, hits, flags);
        } else {
            return QStringListModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qstringlistmodel_span_isbase) {
            qstringlistmodel_span_isbase = false;
            return QStringListModel::span(index);
        } else if (qstringlistmodel_span_callback != nullptr) {
            return qstringlistmodel_span_callback(this, index);
        } else {
            return QStringListModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qstringlistmodel_rolenames_isbase) {
            qstringlistmodel_rolenames_isbase = false;
            return QStringListModel::roleNames();
        } else if (qstringlistmodel_rolenames_callback != nullptr) {
            return qstringlistmodel_rolenames_callback();
        } else {
            return QStringListModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qstringlistmodel_multidata_isbase) {
            qstringlistmodel_multidata_isbase = false;
            QStringListModel::multiData(index, roleDataSpan);
        } else if (qstringlistmodel_multidata_callback != nullptr) {
            qstringlistmodel_multidata_callback(this, index, roleDataSpan);
        } else {
            QStringListModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qstringlistmodel_submit_isbase) {
            qstringlistmodel_submit_isbase = false;
            return QStringListModel::submit();
        } else if (qstringlistmodel_submit_callback != nullptr) {
            return qstringlistmodel_submit_callback();
        } else {
            return QStringListModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qstringlistmodel_revert_isbase) {
            qstringlistmodel_revert_isbase = false;
            QStringListModel::revert();
        } else if (qstringlistmodel_revert_callback != nullptr) {
            qstringlistmodel_revert_callback();
        } else {
            QStringListModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qstringlistmodel_resetinternaldata_isbase) {
            qstringlistmodel_resetinternaldata_isbase = false;
            QStringListModel::resetInternalData();
        } else if (qstringlistmodel_resetinternaldata_callback != nullptr) {
            qstringlistmodel_resetinternaldata_callback();
        } else {
            QStringListModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstringlistmodel_event_isbase) {
            qstringlistmodel_event_isbase = false;
            return QStringListModel::event(event);
        } else if (qstringlistmodel_event_callback != nullptr) {
            return qstringlistmodel_event_callback(this, event);
        } else {
            return QStringListModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstringlistmodel_eventfilter_isbase) {
            qstringlistmodel_eventfilter_isbase = false;
            return QStringListModel::eventFilter(watched, event);
        } else if (qstringlistmodel_eventfilter_callback != nullptr) {
            return qstringlistmodel_eventfilter_callback(this, watched, event);
        } else {
            return QStringListModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstringlistmodel_timerevent_isbase) {
            qstringlistmodel_timerevent_isbase = false;
            QStringListModel::timerEvent(event);
        } else if (qstringlistmodel_timerevent_callback != nullptr) {
            qstringlistmodel_timerevent_callback(this, event);
        } else {
            QStringListModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstringlistmodel_childevent_isbase) {
            qstringlistmodel_childevent_isbase = false;
            QStringListModel::childEvent(event);
        } else if (qstringlistmodel_childevent_callback != nullptr) {
            qstringlistmodel_childevent_callback(this, event);
        } else {
            QStringListModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstringlistmodel_customevent_isbase) {
            qstringlistmodel_customevent_isbase = false;
            QStringListModel::customEvent(event);
        } else if (qstringlistmodel_customevent_callback != nullptr) {
            qstringlistmodel_customevent_callback(this, event);
        } else {
            QStringListModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstringlistmodel_connectnotify_isbase) {
            qstringlistmodel_connectnotify_isbase = false;
            QStringListModel::connectNotify(signal);
        } else if (qstringlistmodel_connectnotify_callback != nullptr) {
            qstringlistmodel_connectnotify_callback(this, signal);
        } else {
            QStringListModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstringlistmodel_disconnectnotify_isbase) {
            qstringlistmodel_disconnectnotify_isbase = false;
            QStringListModel::disconnectNotify(signal);
        } else if (qstringlistmodel_disconnectnotify_callback != nullptr) {
            qstringlistmodel_disconnectnotify_callback(this, signal);
        } else {
            QStringListModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qstringlistmodel_createindex_isbase) {
            qstringlistmodel_createindex_isbase = false;
            return QStringListModel::createIndex(row, column);
        } else if (qstringlistmodel_createindex_callback != nullptr) {
            return qstringlistmodel_createindex_callback(this, row, column);
        } else {
            return QStringListModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QModelIndexList& indexes, QDataStream& stream) const {
        if (qstringlistmodel_encodedata_isbase) {
            qstringlistmodel_encodedata_isbase = false;
            QStringListModel::encodeData(indexes, stream);
        } else if (qstringlistmodel_encodedata_callback != nullptr) {
            qstringlistmodel_encodedata_callback(this, indexes, stream);
        } else {
            QStringListModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qstringlistmodel_decodedata_isbase) {
            qstringlistmodel_decodedata_isbase = false;
            return QStringListModel::decodeData(row, column, parent, stream);
        } else if (qstringlistmodel_decodedata_callback != nullptr) {
            return qstringlistmodel_decodedata_callback(this, row, column, parent, stream);
        } else {
            return QStringListModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qstringlistmodel_begininsertrows_isbase) {
            qstringlistmodel_begininsertrows_isbase = false;
            QStringListModel::beginInsertRows(parent, first, last);
        } else if (qstringlistmodel_begininsertrows_callback != nullptr) {
            qstringlistmodel_begininsertrows_callback(this, parent, first, last);
        } else {
            QStringListModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qstringlistmodel_endinsertrows_isbase) {
            qstringlistmodel_endinsertrows_isbase = false;
            QStringListModel::endInsertRows();
        } else if (qstringlistmodel_endinsertrows_callback != nullptr) {
            qstringlistmodel_endinsertrows_callback();
        } else {
            QStringListModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qstringlistmodel_beginremoverows_isbase) {
            qstringlistmodel_beginremoverows_isbase = false;
            QStringListModel::beginRemoveRows(parent, first, last);
        } else if (qstringlistmodel_beginremoverows_callback != nullptr) {
            qstringlistmodel_beginremoverows_callback(this, parent, first, last);
        } else {
            QStringListModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qstringlistmodel_endremoverows_isbase) {
            qstringlistmodel_endremoverows_isbase = false;
            QStringListModel::endRemoveRows();
        } else if (qstringlistmodel_endremoverows_callback != nullptr) {
            qstringlistmodel_endremoverows_callback();
        } else {
            QStringListModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qstringlistmodel_beginmoverows_isbase) {
            qstringlistmodel_beginmoverows_isbase = false;
            return QStringListModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qstringlistmodel_beginmoverows_callback != nullptr) {
            return qstringlistmodel_beginmoverows_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else {
            return QStringListModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qstringlistmodel_endmoverows_isbase) {
            qstringlistmodel_endmoverows_isbase = false;
            QStringListModel::endMoveRows();
        } else if (qstringlistmodel_endmoverows_callback != nullptr) {
            qstringlistmodel_endmoverows_callback();
        } else {
            QStringListModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qstringlistmodel_begininsertcolumns_isbase) {
            qstringlistmodel_begininsertcolumns_isbase = false;
            QStringListModel::beginInsertColumns(parent, first, last);
        } else if (qstringlistmodel_begininsertcolumns_callback != nullptr) {
            qstringlistmodel_begininsertcolumns_callback(this, parent, first, last);
        } else {
            QStringListModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qstringlistmodel_endinsertcolumns_isbase) {
            qstringlistmodel_endinsertcolumns_isbase = false;
            QStringListModel::endInsertColumns();
        } else if (qstringlistmodel_endinsertcolumns_callback != nullptr) {
            qstringlistmodel_endinsertcolumns_callback();
        } else {
            QStringListModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qstringlistmodel_beginremovecolumns_isbase) {
            qstringlistmodel_beginremovecolumns_isbase = false;
            QStringListModel::beginRemoveColumns(parent, first, last);
        } else if (qstringlistmodel_beginremovecolumns_callback != nullptr) {
            qstringlistmodel_beginremovecolumns_callback(this, parent, first, last);
        } else {
            QStringListModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qstringlistmodel_endremovecolumns_isbase) {
            qstringlistmodel_endremovecolumns_isbase = false;
            QStringListModel::endRemoveColumns();
        } else if (qstringlistmodel_endremovecolumns_callback != nullptr) {
            qstringlistmodel_endremovecolumns_callback();
        } else {
            QStringListModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qstringlistmodel_beginmovecolumns_isbase) {
            qstringlistmodel_beginmovecolumns_isbase = false;
            return QStringListModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qstringlistmodel_beginmovecolumns_callback != nullptr) {
            return qstringlistmodel_beginmovecolumns_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else {
            return QStringListModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qstringlistmodel_endmovecolumns_isbase) {
            qstringlistmodel_endmovecolumns_isbase = false;
            QStringListModel::endMoveColumns();
        } else if (qstringlistmodel_endmovecolumns_callback != nullptr) {
            qstringlistmodel_endmovecolumns_callback();
        } else {
            QStringListModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qstringlistmodel_beginresetmodel_isbase) {
            qstringlistmodel_beginresetmodel_isbase = false;
            QStringListModel::beginResetModel();
        } else if (qstringlistmodel_beginresetmodel_callback != nullptr) {
            qstringlistmodel_beginresetmodel_callback();
        } else {
            QStringListModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qstringlistmodel_endresetmodel_isbase) {
            qstringlistmodel_endresetmodel_isbase = false;
            QStringListModel::endResetModel();
        } else if (qstringlistmodel_endresetmodel_callback != nullptr) {
            qstringlistmodel_endresetmodel_callback();
        } else {
            QStringListModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qstringlistmodel_changepersistentindex_isbase) {
            qstringlistmodel_changepersistentindex_isbase = false;
            QStringListModel::changePersistentIndex(from, to);
        } else if (qstringlistmodel_changepersistentindex_callback != nullptr) {
            qstringlistmodel_changepersistentindex_callback(this, from, to);
        } else {
            QStringListModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QModelIndexList& from, const QModelIndexList& to) {
        if (qstringlistmodel_changepersistentindexlist_isbase) {
            qstringlistmodel_changepersistentindexlist_isbase = false;
            QStringListModel::changePersistentIndexList(from, to);
        } else if (qstringlistmodel_changepersistentindexlist_callback != nullptr) {
            qstringlistmodel_changepersistentindexlist_callback(this, from, to);
        } else {
            QStringListModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndexList persistentIndexList() const {
        if (qstringlistmodel_persistentindexlist_isbase) {
            qstringlistmodel_persistentindexlist_isbase = false;
            return QStringListModel::persistentIndexList();
        } else if (qstringlistmodel_persistentindexlist_callback != nullptr) {
            return qstringlistmodel_persistentindexlist_callback();
        } else {
            return QStringListModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstringlistmodel_sender_isbase) {
            qstringlistmodel_sender_isbase = false;
            return QStringListModel::sender();
        } else if (qstringlistmodel_sender_callback != nullptr) {
            return qstringlistmodel_sender_callback();
        } else {
            return QStringListModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstringlistmodel_sendersignalindex_isbase) {
            qstringlistmodel_sendersignalindex_isbase = false;
            return QStringListModel::senderSignalIndex();
        } else if (qstringlistmodel_sendersignalindex_callback != nullptr) {
            return qstringlistmodel_sendersignalindex_callback();
        } else {
            return QStringListModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstringlistmodel_receivers_isbase) {
            qstringlistmodel_receivers_isbase = false;
            return QStringListModel::receivers(signal);
        } else if (qstringlistmodel_receivers_callback != nullptr) {
            return qstringlistmodel_receivers_callback(this, signal);
        } else {
            return QStringListModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstringlistmodel_issignalconnected_isbase) {
            qstringlistmodel_issignalconnected_isbase = false;
            return QStringListModel::isSignalConnected(signal);
        } else if (qstringlistmodel_issignalconnected_callback != nullptr) {
            return qstringlistmodel_issignalconnected_callback(this, signal);
        } else {
            return QStringListModel::isSignalConnected(signal);
        }
    }
};

#endif
