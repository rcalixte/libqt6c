#pragma once
#ifndef SRCC_LIBVIRTUALQSORTFILTERPROXYMODEL_H
#define SRCC_LIBVIRTUALQSORTFILTERPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSortFilterProxyModel so that we can call protected methods
class VirtualQSortFilterProxyModel : public QSortFilterProxyModel {

  public:
    // Virtual class public types (including callbacks)
    using QSortFilterProxyModel_Metacall_Callback = int (*)(QSortFilterProxyModel*, QMetaObject::Call, int, void**);
    using QSortFilterProxyModel_SetSourceModel_Callback = void (*)(QSortFilterProxyModel*, QAbstractItemModel*);
    using QSortFilterProxyModel_MapToSource_Callback = QModelIndex (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_MapFromSource_Callback = QModelIndex (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_MapSelectionToSource_Callback = QItemSelection (*)(const QSortFilterProxyModel*, const QItemSelection&);
    using QSortFilterProxyModel_MapSelectionFromSource_Callback = QItemSelection (*)(const QSortFilterProxyModel*, const QItemSelection&);
    using QSortFilterProxyModel_FilterAcceptsRow_Callback = bool (*)(const QSortFilterProxyModel*, int, const QModelIndex&);
    using QSortFilterProxyModel_FilterAcceptsColumn_Callback = bool (*)(const QSortFilterProxyModel*, int, const QModelIndex&);
    using QSortFilterProxyModel_LessThan_Callback = bool (*)(const QSortFilterProxyModel*, const QModelIndex&, const QModelIndex&);
    using QSortFilterProxyModel_Index_Callback = QModelIndex (*)(const QSortFilterProxyModel*, int, int, const QModelIndex&);
    using QSortFilterProxyModel_Parent_Callback = QModelIndex (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_Sibling_Callback = QModelIndex (*)(const QSortFilterProxyModel*, int, int, const QModelIndex&);
    using QSortFilterProxyModel_RowCount_Callback = int (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_ColumnCount_Callback = int (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_HasChildren_Callback = bool (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_Data_Callback = QVariant (*)(const QSortFilterProxyModel*, const QModelIndex&, int);
    using QSortFilterProxyModel_SetData_Callback = bool (*)(QSortFilterProxyModel*, const QModelIndex&, const QVariant&, int);
    using QSortFilterProxyModel_HeaderData_Callback = QVariant (*)(const QSortFilterProxyModel*, int, Qt::Orientation, int);
    using QSortFilterProxyModel_SetHeaderData_Callback = bool (*)(QSortFilterProxyModel*, int, Qt::Orientation, const QVariant&, int);
    using QSortFilterProxyModel_MimeData_Callback = QMimeData* (*)(const QSortFilterProxyModel*, const QModelIndexList&);
    using QSortFilterProxyModel_DropMimeData_Callback = bool (*)(QSortFilterProxyModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QSortFilterProxyModel_InsertRows_Callback = bool (*)(QSortFilterProxyModel*, int, int, const QModelIndex&);
    using QSortFilterProxyModel_InsertColumns_Callback = bool (*)(QSortFilterProxyModel*, int, int, const QModelIndex&);
    using QSortFilterProxyModel_RemoveRows_Callback = bool (*)(QSortFilterProxyModel*, int, int, const QModelIndex&);
    using QSortFilterProxyModel_RemoveColumns_Callback = bool (*)(QSortFilterProxyModel*, int, int, const QModelIndex&);
    using QSortFilterProxyModel_FetchMore_Callback = void (*)(QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_CanFetchMore_Callback = bool (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_Flags_Callback = Qt::ItemFlags (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_Buddy_Callback = QModelIndex (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_Match_Callback = QModelIndexList (*)(const QSortFilterProxyModel*, const QModelIndex&, int, const QVariant&, int, Qt::MatchFlags);
    using QSortFilterProxyModel_Span_Callback = QSize (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_Sort_Callback = void (*)(QSortFilterProxyModel*, int, Qt::SortOrder);
    using QSortFilterProxyModel_MimeTypes_Callback = QStringList (*)();
    using QSortFilterProxyModel_SupportedDropActions_Callback = Qt::DropActions (*)();
    using QSortFilterProxyModel_Submit_Callback = bool (*)();
    using QSortFilterProxyModel_Revert_Callback = void (*)();
    using QSortFilterProxyModel_ItemData_Callback = QMap<int, QVariant> (*)(const QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_SetItemData_Callback = bool (*)(QSortFilterProxyModel*, const QModelIndex&, const QMap<int, QVariant>&);
    using QSortFilterProxyModel_ClearItemData_Callback = bool (*)(QSortFilterProxyModel*, const QModelIndex&);
    using QSortFilterProxyModel_CanDropMimeData_Callback = bool (*)(const QSortFilterProxyModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QSortFilterProxyModel_SupportedDragActions_Callback = Qt::DropActions (*)();
    using QSortFilterProxyModel_RoleNames_Callback = QHash<int, QByteArray> (*)();
    using QSortFilterProxyModel_MoveRows_Callback = bool (*)(QSortFilterProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QSortFilterProxyModel_MoveColumns_Callback = bool (*)(QSortFilterProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QSortFilterProxyModel_MultiData_Callback = void (*)(const QSortFilterProxyModel*, const QModelIndex&, QModelRoleDataSpan);
    using QSortFilterProxyModel_ResetInternalData_Callback = void (*)();
    using QSortFilterProxyModel_Event_Callback = bool (*)(QSortFilterProxyModel*, QEvent*);
    using QSortFilterProxyModel_EventFilter_Callback = bool (*)(QSortFilterProxyModel*, QObject*, QEvent*);
    using QSortFilterProxyModel_TimerEvent_Callback = void (*)(QSortFilterProxyModel*, QTimerEvent*);
    using QSortFilterProxyModel_ChildEvent_Callback = void (*)(QSortFilterProxyModel*, QChildEvent*);
    using QSortFilterProxyModel_CustomEvent_Callback = void (*)(QSortFilterProxyModel*, QEvent*);
    using QSortFilterProxyModel_ConnectNotify_Callback = void (*)(QSortFilterProxyModel*, const QMetaMethod&);
    using QSortFilterProxyModel_DisconnectNotify_Callback = void (*)(QSortFilterProxyModel*, const QMetaMethod&);
    using QSortFilterProxyModel_InvalidateFilter_Callback = void (*)();
    using QSortFilterProxyModel_InvalidateRowsFilter_Callback = void (*)();
    using QSortFilterProxyModel_InvalidateColumnsFilter_Callback = void (*)();
    using QSortFilterProxyModel_CreateSourceIndex_Callback = QModelIndex (*)(const QSortFilterProxyModel*, int, int, void*);
    using QSortFilterProxyModel_CreateIndex_Callback = QModelIndex (*)(const QSortFilterProxyModel*, int, int);
    using QSortFilterProxyModel_EncodeData_Callback = void (*)(const QSortFilterProxyModel*, const QModelIndexList&, QDataStream&);
    using QSortFilterProxyModel_DecodeData_Callback = bool (*)(QSortFilterProxyModel*, int, int, const QModelIndex&, QDataStream&);
    using QSortFilterProxyModel_BeginInsertRows_Callback = void (*)(QSortFilterProxyModel*, const QModelIndex&, int, int);
    using QSortFilterProxyModel_EndInsertRows_Callback = void (*)();
    using QSortFilterProxyModel_BeginRemoveRows_Callback = void (*)(QSortFilterProxyModel*, const QModelIndex&, int, int);
    using QSortFilterProxyModel_EndRemoveRows_Callback = void (*)();
    using QSortFilterProxyModel_BeginMoveRows_Callback = bool (*)(QSortFilterProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QSortFilterProxyModel_EndMoveRows_Callback = void (*)();
    using QSortFilterProxyModel_BeginInsertColumns_Callback = void (*)(QSortFilterProxyModel*, const QModelIndex&, int, int);
    using QSortFilterProxyModel_EndInsertColumns_Callback = void (*)();
    using QSortFilterProxyModel_BeginRemoveColumns_Callback = void (*)(QSortFilterProxyModel*, const QModelIndex&, int, int);
    using QSortFilterProxyModel_EndRemoveColumns_Callback = void (*)();
    using QSortFilterProxyModel_BeginMoveColumns_Callback = bool (*)(QSortFilterProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QSortFilterProxyModel_EndMoveColumns_Callback = void (*)();
    using QSortFilterProxyModel_BeginResetModel_Callback = void (*)();
    using QSortFilterProxyModel_EndResetModel_Callback = void (*)();
    using QSortFilterProxyModel_ChangePersistentIndex_Callback = void (*)(QSortFilterProxyModel*, const QModelIndex&, const QModelIndex&);
    using QSortFilterProxyModel_ChangePersistentIndexList_Callback = void (*)(QSortFilterProxyModel*, const QModelIndexList&, const QModelIndexList&);
    using QSortFilterProxyModel_PersistentIndexList_Callback = QModelIndexList (*)();
    using QSortFilterProxyModel_Sender_Callback = QObject* (*)();
    using QSortFilterProxyModel_SenderSignalIndex_Callback = int (*)();
    using QSortFilterProxyModel_Receivers_Callback = int (*)(const QSortFilterProxyModel*, const char*);
    using QSortFilterProxyModel_IsSignalConnected_Callback = bool (*)(const QSortFilterProxyModel*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSortFilterProxyModel_Metacall_Callback qsortfilterproxymodel_metacall_callback = nullptr;
    QSortFilterProxyModel_SetSourceModel_Callback qsortfilterproxymodel_setsourcemodel_callback = nullptr;
    QSortFilterProxyModel_MapToSource_Callback qsortfilterproxymodel_maptosource_callback = nullptr;
    QSortFilterProxyModel_MapFromSource_Callback qsortfilterproxymodel_mapfromsource_callback = nullptr;
    QSortFilterProxyModel_MapSelectionToSource_Callback qsortfilterproxymodel_mapselectiontosource_callback = nullptr;
    QSortFilterProxyModel_MapSelectionFromSource_Callback qsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
    QSortFilterProxyModel_FilterAcceptsRow_Callback qsortfilterproxymodel_filteracceptsrow_callback = nullptr;
    QSortFilterProxyModel_FilterAcceptsColumn_Callback qsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
    QSortFilterProxyModel_LessThan_Callback qsortfilterproxymodel_lessthan_callback = nullptr;
    QSortFilterProxyModel_Index_Callback qsortfilterproxymodel_index_callback = nullptr;
    QSortFilterProxyModel_Parent_Callback qsortfilterproxymodel_parent_callback = nullptr;
    QSortFilterProxyModel_Sibling_Callback qsortfilterproxymodel_sibling_callback = nullptr;
    QSortFilterProxyModel_RowCount_Callback qsortfilterproxymodel_rowcount_callback = nullptr;
    QSortFilterProxyModel_ColumnCount_Callback qsortfilterproxymodel_columncount_callback = nullptr;
    QSortFilterProxyModel_HasChildren_Callback qsortfilterproxymodel_haschildren_callback = nullptr;
    QSortFilterProxyModel_Data_Callback qsortfilterproxymodel_data_callback = nullptr;
    QSortFilterProxyModel_SetData_Callback qsortfilterproxymodel_setdata_callback = nullptr;
    QSortFilterProxyModel_HeaderData_Callback qsortfilterproxymodel_headerdata_callback = nullptr;
    QSortFilterProxyModel_SetHeaderData_Callback qsortfilterproxymodel_setheaderdata_callback = nullptr;
    QSortFilterProxyModel_MimeData_Callback qsortfilterproxymodel_mimedata_callback = nullptr;
    QSortFilterProxyModel_DropMimeData_Callback qsortfilterproxymodel_dropmimedata_callback = nullptr;
    QSortFilterProxyModel_InsertRows_Callback qsortfilterproxymodel_insertrows_callback = nullptr;
    QSortFilterProxyModel_InsertColumns_Callback qsortfilterproxymodel_insertcolumns_callback = nullptr;
    QSortFilterProxyModel_RemoveRows_Callback qsortfilterproxymodel_removerows_callback = nullptr;
    QSortFilterProxyModel_RemoveColumns_Callback qsortfilterproxymodel_removecolumns_callback = nullptr;
    QSortFilterProxyModel_FetchMore_Callback qsortfilterproxymodel_fetchmore_callback = nullptr;
    QSortFilterProxyModel_CanFetchMore_Callback qsortfilterproxymodel_canfetchmore_callback = nullptr;
    QSortFilterProxyModel_Flags_Callback qsortfilterproxymodel_flags_callback = nullptr;
    QSortFilterProxyModel_Buddy_Callback qsortfilterproxymodel_buddy_callback = nullptr;
    QSortFilterProxyModel_Match_Callback qsortfilterproxymodel_match_callback = nullptr;
    QSortFilterProxyModel_Span_Callback qsortfilterproxymodel_span_callback = nullptr;
    QSortFilterProxyModel_Sort_Callback qsortfilterproxymodel_sort_callback = nullptr;
    QSortFilterProxyModel_MimeTypes_Callback qsortfilterproxymodel_mimetypes_callback = nullptr;
    QSortFilterProxyModel_SupportedDropActions_Callback qsortfilterproxymodel_supporteddropactions_callback = nullptr;
    QSortFilterProxyModel_Submit_Callback qsortfilterproxymodel_submit_callback = nullptr;
    QSortFilterProxyModel_Revert_Callback qsortfilterproxymodel_revert_callback = nullptr;
    QSortFilterProxyModel_ItemData_Callback qsortfilterproxymodel_itemdata_callback = nullptr;
    QSortFilterProxyModel_SetItemData_Callback qsortfilterproxymodel_setitemdata_callback = nullptr;
    QSortFilterProxyModel_ClearItemData_Callback qsortfilterproxymodel_clearitemdata_callback = nullptr;
    QSortFilterProxyModel_CanDropMimeData_Callback qsortfilterproxymodel_candropmimedata_callback = nullptr;
    QSortFilterProxyModel_SupportedDragActions_Callback qsortfilterproxymodel_supporteddragactions_callback = nullptr;
    QSortFilterProxyModel_RoleNames_Callback qsortfilterproxymodel_rolenames_callback = nullptr;
    QSortFilterProxyModel_MoveRows_Callback qsortfilterproxymodel_moverows_callback = nullptr;
    QSortFilterProxyModel_MoveColumns_Callback qsortfilterproxymodel_movecolumns_callback = nullptr;
    QSortFilterProxyModel_MultiData_Callback qsortfilterproxymodel_multidata_callback = nullptr;
    QSortFilterProxyModel_ResetInternalData_Callback qsortfilterproxymodel_resetinternaldata_callback = nullptr;
    QSortFilterProxyModel_Event_Callback qsortfilterproxymodel_event_callback = nullptr;
    QSortFilterProxyModel_EventFilter_Callback qsortfilterproxymodel_eventfilter_callback = nullptr;
    QSortFilterProxyModel_TimerEvent_Callback qsortfilterproxymodel_timerevent_callback = nullptr;
    QSortFilterProxyModel_ChildEvent_Callback qsortfilterproxymodel_childevent_callback = nullptr;
    QSortFilterProxyModel_CustomEvent_Callback qsortfilterproxymodel_customevent_callback = nullptr;
    QSortFilterProxyModel_ConnectNotify_Callback qsortfilterproxymodel_connectnotify_callback = nullptr;
    QSortFilterProxyModel_DisconnectNotify_Callback qsortfilterproxymodel_disconnectnotify_callback = nullptr;
    QSortFilterProxyModel_InvalidateFilter_Callback qsortfilterproxymodel_invalidatefilter_callback = nullptr;
    QSortFilterProxyModel_InvalidateRowsFilter_Callback qsortfilterproxymodel_invalidaterowsfilter_callback = nullptr;
    QSortFilterProxyModel_InvalidateColumnsFilter_Callback qsortfilterproxymodel_invalidatecolumnsfilter_callback = nullptr;
    QSortFilterProxyModel_CreateSourceIndex_Callback qsortfilterproxymodel_createsourceindex_callback = nullptr;
    QSortFilterProxyModel_CreateIndex_Callback qsortfilterproxymodel_createindex_callback = nullptr;
    QSortFilterProxyModel_EncodeData_Callback qsortfilterproxymodel_encodedata_callback = nullptr;
    QSortFilterProxyModel_DecodeData_Callback qsortfilterproxymodel_decodedata_callback = nullptr;
    QSortFilterProxyModel_BeginInsertRows_Callback qsortfilterproxymodel_begininsertrows_callback = nullptr;
    QSortFilterProxyModel_EndInsertRows_Callback qsortfilterproxymodel_endinsertrows_callback = nullptr;
    QSortFilterProxyModel_BeginRemoveRows_Callback qsortfilterproxymodel_beginremoverows_callback = nullptr;
    QSortFilterProxyModel_EndRemoveRows_Callback qsortfilterproxymodel_endremoverows_callback = nullptr;
    QSortFilterProxyModel_BeginMoveRows_Callback qsortfilterproxymodel_beginmoverows_callback = nullptr;
    QSortFilterProxyModel_EndMoveRows_Callback qsortfilterproxymodel_endmoverows_callback = nullptr;
    QSortFilterProxyModel_BeginInsertColumns_Callback qsortfilterproxymodel_begininsertcolumns_callback = nullptr;
    QSortFilterProxyModel_EndInsertColumns_Callback qsortfilterproxymodel_endinsertcolumns_callback = nullptr;
    QSortFilterProxyModel_BeginRemoveColumns_Callback qsortfilterproxymodel_beginremovecolumns_callback = nullptr;
    QSortFilterProxyModel_EndRemoveColumns_Callback qsortfilterproxymodel_endremovecolumns_callback = nullptr;
    QSortFilterProxyModel_BeginMoveColumns_Callback qsortfilterproxymodel_beginmovecolumns_callback = nullptr;
    QSortFilterProxyModel_EndMoveColumns_Callback qsortfilterproxymodel_endmovecolumns_callback = nullptr;
    QSortFilterProxyModel_BeginResetModel_Callback qsortfilterproxymodel_beginresetmodel_callback = nullptr;
    QSortFilterProxyModel_EndResetModel_Callback qsortfilterproxymodel_endresetmodel_callback = nullptr;
    QSortFilterProxyModel_ChangePersistentIndex_Callback qsortfilterproxymodel_changepersistentindex_callback = nullptr;
    QSortFilterProxyModel_ChangePersistentIndexList_Callback qsortfilterproxymodel_changepersistentindexlist_callback = nullptr;
    QSortFilterProxyModel_PersistentIndexList_Callback qsortfilterproxymodel_persistentindexlist_callback = nullptr;
    QSortFilterProxyModel_Sender_Callback qsortfilterproxymodel_sender_callback = nullptr;
    QSortFilterProxyModel_SenderSignalIndex_Callback qsortfilterproxymodel_sendersignalindex_callback = nullptr;
    QSortFilterProxyModel_Receivers_Callback qsortfilterproxymodel_receivers_callback = nullptr;
    QSortFilterProxyModel_IsSignalConnected_Callback qsortfilterproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsortfilterproxymodel_metacall_isbase = false;
    mutable bool qsortfilterproxymodel_setsourcemodel_isbase = false;
    mutable bool qsortfilterproxymodel_maptosource_isbase = false;
    mutable bool qsortfilterproxymodel_mapfromsource_isbase = false;
    mutable bool qsortfilterproxymodel_mapselectiontosource_isbase = false;
    mutable bool qsortfilterproxymodel_mapselectionfromsource_isbase = false;
    mutable bool qsortfilterproxymodel_filteracceptsrow_isbase = false;
    mutable bool qsortfilterproxymodel_filteracceptscolumn_isbase = false;
    mutable bool qsortfilterproxymodel_lessthan_isbase = false;
    mutable bool qsortfilterproxymodel_index_isbase = false;
    mutable bool qsortfilterproxymodel_parent_isbase = false;
    mutable bool qsortfilterproxymodel_sibling_isbase = false;
    mutable bool qsortfilterproxymodel_rowcount_isbase = false;
    mutable bool qsortfilterproxymodel_columncount_isbase = false;
    mutable bool qsortfilterproxymodel_haschildren_isbase = false;
    mutable bool qsortfilterproxymodel_data_isbase = false;
    mutable bool qsortfilterproxymodel_setdata_isbase = false;
    mutable bool qsortfilterproxymodel_headerdata_isbase = false;
    mutable bool qsortfilterproxymodel_setheaderdata_isbase = false;
    mutable bool qsortfilterproxymodel_mimedata_isbase = false;
    mutable bool qsortfilterproxymodel_dropmimedata_isbase = false;
    mutable bool qsortfilterproxymodel_insertrows_isbase = false;
    mutable bool qsortfilterproxymodel_insertcolumns_isbase = false;
    mutable bool qsortfilterproxymodel_removerows_isbase = false;
    mutable bool qsortfilterproxymodel_removecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_fetchmore_isbase = false;
    mutable bool qsortfilterproxymodel_canfetchmore_isbase = false;
    mutable bool qsortfilterproxymodel_flags_isbase = false;
    mutable bool qsortfilterproxymodel_buddy_isbase = false;
    mutable bool qsortfilterproxymodel_match_isbase = false;
    mutable bool qsortfilterproxymodel_span_isbase = false;
    mutable bool qsortfilterproxymodel_sort_isbase = false;
    mutable bool qsortfilterproxymodel_mimetypes_isbase = false;
    mutable bool qsortfilterproxymodel_supporteddropactions_isbase = false;
    mutable bool qsortfilterproxymodel_submit_isbase = false;
    mutable bool qsortfilterproxymodel_revert_isbase = false;
    mutable bool qsortfilterproxymodel_itemdata_isbase = false;
    mutable bool qsortfilterproxymodel_setitemdata_isbase = false;
    mutable bool qsortfilterproxymodel_clearitemdata_isbase = false;
    mutable bool qsortfilterproxymodel_candropmimedata_isbase = false;
    mutable bool qsortfilterproxymodel_supporteddragactions_isbase = false;
    mutable bool qsortfilterproxymodel_rolenames_isbase = false;
    mutable bool qsortfilterproxymodel_moverows_isbase = false;
    mutable bool qsortfilterproxymodel_movecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_multidata_isbase = false;
    mutable bool qsortfilterproxymodel_resetinternaldata_isbase = false;
    mutable bool qsortfilterproxymodel_event_isbase = false;
    mutable bool qsortfilterproxymodel_eventfilter_isbase = false;
    mutable bool qsortfilterproxymodel_timerevent_isbase = false;
    mutable bool qsortfilterproxymodel_childevent_isbase = false;
    mutable bool qsortfilterproxymodel_customevent_isbase = false;
    mutable bool qsortfilterproxymodel_connectnotify_isbase = false;
    mutable bool qsortfilterproxymodel_disconnectnotify_isbase = false;
    mutable bool qsortfilterproxymodel_invalidatefilter_isbase = false;
    mutable bool qsortfilterproxymodel_invalidaterowsfilter_isbase = false;
    mutable bool qsortfilterproxymodel_invalidatecolumnsfilter_isbase = false;
    mutable bool qsortfilterproxymodel_createsourceindex_isbase = false;
    mutable bool qsortfilterproxymodel_createindex_isbase = false;
    mutable bool qsortfilterproxymodel_encodedata_isbase = false;
    mutable bool qsortfilterproxymodel_decodedata_isbase = false;
    mutable bool qsortfilterproxymodel_begininsertrows_isbase = false;
    mutable bool qsortfilterproxymodel_endinsertrows_isbase = false;
    mutable bool qsortfilterproxymodel_beginremoverows_isbase = false;
    mutable bool qsortfilterproxymodel_endremoverows_isbase = false;
    mutable bool qsortfilterproxymodel_beginmoverows_isbase = false;
    mutable bool qsortfilterproxymodel_endmoverows_isbase = false;
    mutable bool qsortfilterproxymodel_begininsertcolumns_isbase = false;
    mutable bool qsortfilterproxymodel_endinsertcolumns_isbase = false;
    mutable bool qsortfilterproxymodel_beginremovecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_endremovecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_beginmovecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_endmovecolumns_isbase = false;
    mutable bool qsortfilterproxymodel_beginresetmodel_isbase = false;
    mutable bool qsortfilterproxymodel_endresetmodel_isbase = false;
    mutable bool qsortfilterproxymodel_changepersistentindex_isbase = false;
    mutable bool qsortfilterproxymodel_changepersistentindexlist_isbase = false;
    mutable bool qsortfilterproxymodel_persistentindexlist_isbase = false;
    mutable bool qsortfilterproxymodel_sender_isbase = false;
    mutable bool qsortfilterproxymodel_sendersignalindex_isbase = false;
    mutable bool qsortfilterproxymodel_receivers_isbase = false;
    mutable bool qsortfilterproxymodel_issignalconnected_isbase = false;

  public:
    VirtualQSortFilterProxyModel() : QSortFilterProxyModel(){};
    VirtualQSortFilterProxyModel(QObject* parent) : QSortFilterProxyModel(parent){};

    ~VirtualQSortFilterProxyModel() {
        qsortfilterproxymodel_metacall_callback = nullptr;
        qsortfilterproxymodel_setsourcemodel_callback = nullptr;
        qsortfilterproxymodel_maptosource_callback = nullptr;
        qsortfilterproxymodel_mapfromsource_callback = nullptr;
        qsortfilterproxymodel_mapselectiontosource_callback = nullptr;
        qsortfilterproxymodel_mapselectionfromsource_callback = nullptr;
        qsortfilterproxymodel_filteracceptsrow_callback = nullptr;
        qsortfilterproxymodel_filteracceptscolumn_callback = nullptr;
        qsortfilterproxymodel_lessthan_callback = nullptr;
        qsortfilterproxymodel_index_callback = nullptr;
        qsortfilterproxymodel_parent_callback = nullptr;
        qsortfilterproxymodel_sibling_callback = nullptr;
        qsortfilterproxymodel_rowcount_callback = nullptr;
        qsortfilterproxymodel_columncount_callback = nullptr;
        qsortfilterproxymodel_haschildren_callback = nullptr;
        qsortfilterproxymodel_data_callback = nullptr;
        qsortfilterproxymodel_setdata_callback = nullptr;
        qsortfilterproxymodel_headerdata_callback = nullptr;
        qsortfilterproxymodel_setheaderdata_callback = nullptr;
        qsortfilterproxymodel_mimedata_callback = nullptr;
        qsortfilterproxymodel_dropmimedata_callback = nullptr;
        qsortfilterproxymodel_insertrows_callback = nullptr;
        qsortfilterproxymodel_insertcolumns_callback = nullptr;
        qsortfilterproxymodel_removerows_callback = nullptr;
        qsortfilterproxymodel_removecolumns_callback = nullptr;
        qsortfilterproxymodel_fetchmore_callback = nullptr;
        qsortfilterproxymodel_canfetchmore_callback = nullptr;
        qsortfilterproxymodel_flags_callback = nullptr;
        qsortfilterproxymodel_buddy_callback = nullptr;
        qsortfilterproxymodel_match_callback = nullptr;
        qsortfilterproxymodel_span_callback = nullptr;
        qsortfilterproxymodel_sort_callback = nullptr;
        qsortfilterproxymodel_mimetypes_callback = nullptr;
        qsortfilterproxymodel_supporteddropactions_callback = nullptr;
        qsortfilterproxymodel_submit_callback = nullptr;
        qsortfilterproxymodel_revert_callback = nullptr;
        qsortfilterproxymodel_itemdata_callback = nullptr;
        qsortfilterproxymodel_setitemdata_callback = nullptr;
        qsortfilterproxymodel_clearitemdata_callback = nullptr;
        qsortfilterproxymodel_candropmimedata_callback = nullptr;
        qsortfilterproxymodel_supporteddragactions_callback = nullptr;
        qsortfilterproxymodel_rolenames_callback = nullptr;
        qsortfilterproxymodel_moverows_callback = nullptr;
        qsortfilterproxymodel_movecolumns_callback = nullptr;
        qsortfilterproxymodel_multidata_callback = nullptr;
        qsortfilterproxymodel_resetinternaldata_callback = nullptr;
        qsortfilterproxymodel_event_callback = nullptr;
        qsortfilterproxymodel_eventfilter_callback = nullptr;
        qsortfilterproxymodel_timerevent_callback = nullptr;
        qsortfilterproxymodel_childevent_callback = nullptr;
        qsortfilterproxymodel_customevent_callback = nullptr;
        qsortfilterproxymodel_connectnotify_callback = nullptr;
        qsortfilterproxymodel_disconnectnotify_callback = nullptr;
        qsortfilterproxymodel_invalidatefilter_callback = nullptr;
        qsortfilterproxymodel_invalidaterowsfilter_callback = nullptr;
        qsortfilterproxymodel_invalidatecolumnsfilter_callback = nullptr;
        qsortfilterproxymodel_createsourceindex_callback = nullptr;
        qsortfilterproxymodel_createindex_callback = nullptr;
        qsortfilterproxymodel_encodedata_callback = nullptr;
        qsortfilterproxymodel_decodedata_callback = nullptr;
        qsortfilterproxymodel_begininsertrows_callback = nullptr;
        qsortfilterproxymodel_endinsertrows_callback = nullptr;
        qsortfilterproxymodel_beginremoverows_callback = nullptr;
        qsortfilterproxymodel_endremoverows_callback = nullptr;
        qsortfilterproxymodel_beginmoverows_callback = nullptr;
        qsortfilterproxymodel_endmoverows_callback = nullptr;
        qsortfilterproxymodel_begininsertcolumns_callback = nullptr;
        qsortfilterproxymodel_endinsertcolumns_callback = nullptr;
        qsortfilterproxymodel_beginremovecolumns_callback = nullptr;
        qsortfilterproxymodel_endremovecolumns_callback = nullptr;
        qsortfilterproxymodel_beginmovecolumns_callback = nullptr;
        qsortfilterproxymodel_endmovecolumns_callback = nullptr;
        qsortfilterproxymodel_beginresetmodel_callback = nullptr;
        qsortfilterproxymodel_endresetmodel_callback = nullptr;
        qsortfilterproxymodel_changepersistentindex_callback = nullptr;
        qsortfilterproxymodel_changepersistentindexlist_callback = nullptr;
        qsortfilterproxymodel_persistentindexlist_callback = nullptr;
        qsortfilterproxymodel_sender_callback = nullptr;
        qsortfilterproxymodel_sendersignalindex_callback = nullptr;
        qsortfilterproxymodel_receivers_callback = nullptr;
        qsortfilterproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSortFilterProxyModel_Metacall_Callback(QSortFilterProxyModel_Metacall_Callback cb) { qsortfilterproxymodel_metacall_callback = cb; }
    void setQSortFilterProxyModel_SetSourceModel_Callback(QSortFilterProxyModel_SetSourceModel_Callback cb) { qsortfilterproxymodel_setsourcemodel_callback = cb; }
    void setQSortFilterProxyModel_MapToSource_Callback(QSortFilterProxyModel_MapToSource_Callback cb) { qsortfilterproxymodel_maptosource_callback = cb; }
    void setQSortFilterProxyModel_MapFromSource_Callback(QSortFilterProxyModel_MapFromSource_Callback cb) { qsortfilterproxymodel_mapfromsource_callback = cb; }
    void setQSortFilterProxyModel_MapSelectionToSource_Callback(QSortFilterProxyModel_MapSelectionToSource_Callback cb) { qsortfilterproxymodel_mapselectiontosource_callback = cb; }
    void setQSortFilterProxyModel_MapSelectionFromSource_Callback(QSortFilterProxyModel_MapSelectionFromSource_Callback cb) { qsortfilterproxymodel_mapselectionfromsource_callback = cb; }
    void setQSortFilterProxyModel_FilterAcceptsRow_Callback(QSortFilterProxyModel_FilterAcceptsRow_Callback cb) { qsortfilterproxymodel_filteracceptsrow_callback = cb; }
    void setQSortFilterProxyModel_FilterAcceptsColumn_Callback(QSortFilterProxyModel_FilterAcceptsColumn_Callback cb) { qsortfilterproxymodel_filteracceptscolumn_callback = cb; }
    void setQSortFilterProxyModel_LessThan_Callback(QSortFilterProxyModel_LessThan_Callback cb) { qsortfilterproxymodel_lessthan_callback = cb; }
    void setQSortFilterProxyModel_Index_Callback(QSortFilterProxyModel_Index_Callback cb) { qsortfilterproxymodel_index_callback = cb; }
    void setQSortFilterProxyModel_Parent_Callback(QSortFilterProxyModel_Parent_Callback cb) { qsortfilterproxymodel_parent_callback = cb; }
    void setQSortFilterProxyModel_Sibling_Callback(QSortFilterProxyModel_Sibling_Callback cb) { qsortfilterproxymodel_sibling_callback = cb; }
    void setQSortFilterProxyModel_RowCount_Callback(QSortFilterProxyModel_RowCount_Callback cb) { qsortfilterproxymodel_rowcount_callback = cb; }
    void setQSortFilterProxyModel_ColumnCount_Callback(QSortFilterProxyModel_ColumnCount_Callback cb) { qsortfilterproxymodel_columncount_callback = cb; }
    void setQSortFilterProxyModel_HasChildren_Callback(QSortFilterProxyModel_HasChildren_Callback cb) { qsortfilterproxymodel_haschildren_callback = cb; }
    void setQSortFilterProxyModel_Data_Callback(QSortFilterProxyModel_Data_Callback cb) { qsortfilterproxymodel_data_callback = cb; }
    void setQSortFilterProxyModel_SetData_Callback(QSortFilterProxyModel_SetData_Callback cb) { qsortfilterproxymodel_setdata_callback = cb; }
    void setQSortFilterProxyModel_HeaderData_Callback(QSortFilterProxyModel_HeaderData_Callback cb) { qsortfilterproxymodel_headerdata_callback = cb; }
    void setQSortFilterProxyModel_SetHeaderData_Callback(QSortFilterProxyModel_SetHeaderData_Callback cb) { qsortfilterproxymodel_setheaderdata_callback = cb; }
    void setQSortFilterProxyModel_MimeData_Callback(QSortFilterProxyModel_MimeData_Callback cb) { qsortfilterproxymodel_mimedata_callback = cb; }
    void setQSortFilterProxyModel_DropMimeData_Callback(QSortFilterProxyModel_DropMimeData_Callback cb) { qsortfilterproxymodel_dropmimedata_callback = cb; }
    void setQSortFilterProxyModel_InsertRows_Callback(QSortFilterProxyModel_InsertRows_Callback cb) { qsortfilterproxymodel_insertrows_callback = cb; }
    void setQSortFilterProxyModel_InsertColumns_Callback(QSortFilterProxyModel_InsertColumns_Callback cb) { qsortfilterproxymodel_insertcolumns_callback = cb; }
    void setQSortFilterProxyModel_RemoveRows_Callback(QSortFilterProxyModel_RemoveRows_Callback cb) { qsortfilterproxymodel_removerows_callback = cb; }
    void setQSortFilterProxyModel_RemoveColumns_Callback(QSortFilterProxyModel_RemoveColumns_Callback cb) { qsortfilterproxymodel_removecolumns_callback = cb; }
    void setQSortFilterProxyModel_FetchMore_Callback(QSortFilterProxyModel_FetchMore_Callback cb) { qsortfilterproxymodel_fetchmore_callback = cb; }
    void setQSortFilterProxyModel_CanFetchMore_Callback(QSortFilterProxyModel_CanFetchMore_Callback cb) { qsortfilterproxymodel_canfetchmore_callback = cb; }
    void setQSortFilterProxyModel_Flags_Callback(QSortFilterProxyModel_Flags_Callback cb) { qsortfilterproxymodel_flags_callback = cb; }
    void setQSortFilterProxyModel_Buddy_Callback(QSortFilterProxyModel_Buddy_Callback cb) { qsortfilterproxymodel_buddy_callback = cb; }
    void setQSortFilterProxyModel_Match_Callback(QSortFilterProxyModel_Match_Callback cb) { qsortfilterproxymodel_match_callback = cb; }
    void setQSortFilterProxyModel_Span_Callback(QSortFilterProxyModel_Span_Callback cb) { qsortfilterproxymodel_span_callback = cb; }
    void setQSortFilterProxyModel_Sort_Callback(QSortFilterProxyModel_Sort_Callback cb) { qsortfilterproxymodel_sort_callback = cb; }
    void setQSortFilterProxyModel_MimeTypes_Callback(QSortFilterProxyModel_MimeTypes_Callback cb) { qsortfilterproxymodel_mimetypes_callback = cb; }
    void setQSortFilterProxyModel_SupportedDropActions_Callback(QSortFilterProxyModel_SupportedDropActions_Callback cb) { qsortfilterproxymodel_supporteddropactions_callback = cb; }
    void setQSortFilterProxyModel_Submit_Callback(QSortFilterProxyModel_Submit_Callback cb) { qsortfilterproxymodel_submit_callback = cb; }
    void setQSortFilterProxyModel_Revert_Callback(QSortFilterProxyModel_Revert_Callback cb) { qsortfilterproxymodel_revert_callback = cb; }
    void setQSortFilterProxyModel_ItemData_Callback(QSortFilterProxyModel_ItemData_Callback cb) { qsortfilterproxymodel_itemdata_callback = cb; }
    void setQSortFilterProxyModel_SetItemData_Callback(QSortFilterProxyModel_SetItemData_Callback cb) { qsortfilterproxymodel_setitemdata_callback = cb; }
    void setQSortFilterProxyModel_ClearItemData_Callback(QSortFilterProxyModel_ClearItemData_Callback cb) { qsortfilterproxymodel_clearitemdata_callback = cb; }
    void setQSortFilterProxyModel_CanDropMimeData_Callback(QSortFilterProxyModel_CanDropMimeData_Callback cb) { qsortfilterproxymodel_candropmimedata_callback = cb; }
    void setQSortFilterProxyModel_SupportedDragActions_Callback(QSortFilterProxyModel_SupportedDragActions_Callback cb) { qsortfilterproxymodel_supporteddragactions_callback = cb; }
    void setQSortFilterProxyModel_RoleNames_Callback(QSortFilterProxyModel_RoleNames_Callback cb) { qsortfilterproxymodel_rolenames_callback = cb; }
    void setQSortFilterProxyModel_MoveRows_Callback(QSortFilterProxyModel_MoveRows_Callback cb) { qsortfilterproxymodel_moverows_callback = cb; }
    void setQSortFilterProxyModel_MoveColumns_Callback(QSortFilterProxyModel_MoveColumns_Callback cb) { qsortfilterproxymodel_movecolumns_callback = cb; }
    void setQSortFilterProxyModel_MultiData_Callback(QSortFilterProxyModel_MultiData_Callback cb) { qsortfilterproxymodel_multidata_callback = cb; }
    void setQSortFilterProxyModel_ResetInternalData_Callback(QSortFilterProxyModel_ResetInternalData_Callback cb) { qsortfilterproxymodel_resetinternaldata_callback = cb; }
    void setQSortFilterProxyModel_Event_Callback(QSortFilterProxyModel_Event_Callback cb) { qsortfilterproxymodel_event_callback = cb; }
    void setQSortFilterProxyModel_EventFilter_Callback(QSortFilterProxyModel_EventFilter_Callback cb) { qsortfilterproxymodel_eventfilter_callback = cb; }
    void setQSortFilterProxyModel_TimerEvent_Callback(QSortFilterProxyModel_TimerEvent_Callback cb) { qsortfilterproxymodel_timerevent_callback = cb; }
    void setQSortFilterProxyModel_ChildEvent_Callback(QSortFilterProxyModel_ChildEvent_Callback cb) { qsortfilterproxymodel_childevent_callback = cb; }
    void setQSortFilterProxyModel_CustomEvent_Callback(QSortFilterProxyModel_CustomEvent_Callback cb) { qsortfilterproxymodel_customevent_callback = cb; }
    void setQSortFilterProxyModel_ConnectNotify_Callback(QSortFilterProxyModel_ConnectNotify_Callback cb) { qsortfilterproxymodel_connectnotify_callback = cb; }
    void setQSortFilterProxyModel_DisconnectNotify_Callback(QSortFilterProxyModel_DisconnectNotify_Callback cb) { qsortfilterproxymodel_disconnectnotify_callback = cb; }
    void setQSortFilterProxyModel_InvalidateFilter_Callback(QSortFilterProxyModel_InvalidateFilter_Callback cb) { qsortfilterproxymodel_invalidatefilter_callback = cb; }
    void setQSortFilterProxyModel_InvalidateRowsFilter_Callback(QSortFilterProxyModel_InvalidateRowsFilter_Callback cb) { qsortfilterproxymodel_invalidaterowsfilter_callback = cb; }
    void setQSortFilterProxyModel_InvalidateColumnsFilter_Callback(QSortFilterProxyModel_InvalidateColumnsFilter_Callback cb) { qsortfilterproxymodel_invalidatecolumnsfilter_callback = cb; }
    void setQSortFilterProxyModel_CreateSourceIndex_Callback(QSortFilterProxyModel_CreateSourceIndex_Callback cb) { qsortfilterproxymodel_createsourceindex_callback = cb; }
    void setQSortFilterProxyModel_CreateIndex_Callback(QSortFilterProxyModel_CreateIndex_Callback cb) { qsortfilterproxymodel_createindex_callback = cb; }
    void setQSortFilterProxyModel_EncodeData_Callback(QSortFilterProxyModel_EncodeData_Callback cb) { qsortfilterproxymodel_encodedata_callback = cb; }
    void setQSortFilterProxyModel_DecodeData_Callback(QSortFilterProxyModel_DecodeData_Callback cb) { qsortfilterproxymodel_decodedata_callback = cb; }
    void setQSortFilterProxyModel_BeginInsertRows_Callback(QSortFilterProxyModel_BeginInsertRows_Callback cb) { qsortfilterproxymodel_begininsertrows_callback = cb; }
    void setQSortFilterProxyModel_EndInsertRows_Callback(QSortFilterProxyModel_EndInsertRows_Callback cb) { qsortfilterproxymodel_endinsertrows_callback = cb; }
    void setQSortFilterProxyModel_BeginRemoveRows_Callback(QSortFilterProxyModel_BeginRemoveRows_Callback cb) { qsortfilterproxymodel_beginremoverows_callback = cb; }
    void setQSortFilterProxyModel_EndRemoveRows_Callback(QSortFilterProxyModel_EndRemoveRows_Callback cb) { qsortfilterproxymodel_endremoverows_callback = cb; }
    void setQSortFilterProxyModel_BeginMoveRows_Callback(QSortFilterProxyModel_BeginMoveRows_Callback cb) { qsortfilterproxymodel_beginmoverows_callback = cb; }
    void setQSortFilterProxyModel_EndMoveRows_Callback(QSortFilterProxyModel_EndMoveRows_Callback cb) { qsortfilterproxymodel_endmoverows_callback = cb; }
    void setQSortFilterProxyModel_BeginInsertColumns_Callback(QSortFilterProxyModel_BeginInsertColumns_Callback cb) { qsortfilterproxymodel_begininsertcolumns_callback = cb; }
    void setQSortFilterProxyModel_EndInsertColumns_Callback(QSortFilterProxyModel_EndInsertColumns_Callback cb) { qsortfilterproxymodel_endinsertcolumns_callback = cb; }
    void setQSortFilterProxyModel_BeginRemoveColumns_Callback(QSortFilterProxyModel_BeginRemoveColumns_Callback cb) { qsortfilterproxymodel_beginremovecolumns_callback = cb; }
    void setQSortFilterProxyModel_EndRemoveColumns_Callback(QSortFilterProxyModel_EndRemoveColumns_Callback cb) { qsortfilterproxymodel_endremovecolumns_callback = cb; }
    void setQSortFilterProxyModel_BeginMoveColumns_Callback(QSortFilterProxyModel_BeginMoveColumns_Callback cb) { qsortfilterproxymodel_beginmovecolumns_callback = cb; }
    void setQSortFilterProxyModel_EndMoveColumns_Callback(QSortFilterProxyModel_EndMoveColumns_Callback cb) { qsortfilterproxymodel_endmovecolumns_callback = cb; }
    void setQSortFilterProxyModel_BeginResetModel_Callback(QSortFilterProxyModel_BeginResetModel_Callback cb) { qsortfilterproxymodel_beginresetmodel_callback = cb; }
    void setQSortFilterProxyModel_EndResetModel_Callback(QSortFilterProxyModel_EndResetModel_Callback cb) { qsortfilterproxymodel_endresetmodel_callback = cb; }
    void setQSortFilterProxyModel_ChangePersistentIndex_Callback(QSortFilterProxyModel_ChangePersistentIndex_Callback cb) { qsortfilterproxymodel_changepersistentindex_callback = cb; }
    void setQSortFilterProxyModel_ChangePersistentIndexList_Callback(QSortFilterProxyModel_ChangePersistentIndexList_Callback cb) { qsortfilterproxymodel_changepersistentindexlist_callback = cb; }
    void setQSortFilterProxyModel_PersistentIndexList_Callback(QSortFilterProxyModel_PersistentIndexList_Callback cb) { qsortfilterproxymodel_persistentindexlist_callback = cb; }
    void setQSortFilterProxyModel_Sender_Callback(QSortFilterProxyModel_Sender_Callback cb) { qsortfilterproxymodel_sender_callback = cb; }
    void setQSortFilterProxyModel_SenderSignalIndex_Callback(QSortFilterProxyModel_SenderSignalIndex_Callback cb) { qsortfilterproxymodel_sendersignalindex_callback = cb; }
    void setQSortFilterProxyModel_Receivers_Callback(QSortFilterProxyModel_Receivers_Callback cb) { qsortfilterproxymodel_receivers_callback = cb; }
    void setQSortFilterProxyModel_IsSignalConnected_Callback(QSortFilterProxyModel_IsSignalConnected_Callback cb) { qsortfilterproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSortFilterProxyModel_Metacall_IsBase(bool value) const { qsortfilterproxymodel_metacall_isbase = value; }
    void setQSortFilterProxyModel_SetSourceModel_IsBase(bool value) const { qsortfilterproxymodel_setsourcemodel_isbase = value; }
    void setQSortFilterProxyModel_MapToSource_IsBase(bool value) const { qsortfilterproxymodel_maptosource_isbase = value; }
    void setQSortFilterProxyModel_MapFromSource_IsBase(bool value) const { qsortfilterproxymodel_mapfromsource_isbase = value; }
    void setQSortFilterProxyModel_MapSelectionToSource_IsBase(bool value) const { qsortfilterproxymodel_mapselectiontosource_isbase = value; }
    void setQSortFilterProxyModel_MapSelectionFromSource_IsBase(bool value) const { qsortfilterproxymodel_mapselectionfromsource_isbase = value; }
    void setQSortFilterProxyModel_FilterAcceptsRow_IsBase(bool value) const { qsortfilterproxymodel_filteracceptsrow_isbase = value; }
    void setQSortFilterProxyModel_FilterAcceptsColumn_IsBase(bool value) const { qsortfilterproxymodel_filteracceptscolumn_isbase = value; }
    void setQSortFilterProxyModel_LessThan_IsBase(bool value) const { qsortfilterproxymodel_lessthan_isbase = value; }
    void setQSortFilterProxyModel_Index_IsBase(bool value) const { qsortfilterproxymodel_index_isbase = value; }
    void setQSortFilterProxyModel_Parent_IsBase(bool value) const { qsortfilterproxymodel_parent_isbase = value; }
    void setQSortFilterProxyModel_Sibling_IsBase(bool value) const { qsortfilterproxymodel_sibling_isbase = value; }
    void setQSortFilterProxyModel_RowCount_IsBase(bool value) const { qsortfilterproxymodel_rowcount_isbase = value; }
    void setQSortFilterProxyModel_ColumnCount_IsBase(bool value) const { qsortfilterproxymodel_columncount_isbase = value; }
    void setQSortFilterProxyModel_HasChildren_IsBase(bool value) const { qsortfilterproxymodel_haschildren_isbase = value; }
    void setQSortFilterProxyModel_Data_IsBase(bool value) const { qsortfilterproxymodel_data_isbase = value; }
    void setQSortFilterProxyModel_SetData_IsBase(bool value) const { qsortfilterproxymodel_setdata_isbase = value; }
    void setQSortFilterProxyModel_HeaderData_IsBase(bool value) const { qsortfilterproxymodel_headerdata_isbase = value; }
    void setQSortFilterProxyModel_SetHeaderData_IsBase(bool value) const { qsortfilterproxymodel_setheaderdata_isbase = value; }
    void setQSortFilterProxyModel_MimeData_IsBase(bool value) const { qsortfilterproxymodel_mimedata_isbase = value; }
    void setQSortFilterProxyModel_DropMimeData_IsBase(bool value) const { qsortfilterproxymodel_dropmimedata_isbase = value; }
    void setQSortFilterProxyModel_InsertRows_IsBase(bool value) const { qsortfilterproxymodel_insertrows_isbase = value; }
    void setQSortFilterProxyModel_InsertColumns_IsBase(bool value) const { qsortfilterproxymodel_insertcolumns_isbase = value; }
    void setQSortFilterProxyModel_RemoveRows_IsBase(bool value) const { qsortfilterproxymodel_removerows_isbase = value; }
    void setQSortFilterProxyModel_RemoveColumns_IsBase(bool value) const { qsortfilterproxymodel_removecolumns_isbase = value; }
    void setQSortFilterProxyModel_FetchMore_IsBase(bool value) const { qsortfilterproxymodel_fetchmore_isbase = value; }
    void setQSortFilterProxyModel_CanFetchMore_IsBase(bool value) const { qsortfilterproxymodel_canfetchmore_isbase = value; }
    void setQSortFilterProxyModel_Flags_IsBase(bool value) const { qsortfilterproxymodel_flags_isbase = value; }
    void setQSortFilterProxyModel_Buddy_IsBase(bool value) const { qsortfilterproxymodel_buddy_isbase = value; }
    void setQSortFilterProxyModel_Match_IsBase(bool value) const { qsortfilterproxymodel_match_isbase = value; }
    void setQSortFilterProxyModel_Span_IsBase(bool value) const { qsortfilterproxymodel_span_isbase = value; }
    void setQSortFilterProxyModel_Sort_IsBase(bool value) const { qsortfilterproxymodel_sort_isbase = value; }
    void setQSortFilterProxyModel_MimeTypes_IsBase(bool value) const { qsortfilterproxymodel_mimetypes_isbase = value; }
    void setQSortFilterProxyModel_SupportedDropActions_IsBase(bool value) const { qsortfilterproxymodel_supporteddropactions_isbase = value; }
    void setQSortFilterProxyModel_Submit_IsBase(bool value) const { qsortfilterproxymodel_submit_isbase = value; }
    void setQSortFilterProxyModel_Revert_IsBase(bool value) const { qsortfilterproxymodel_revert_isbase = value; }
    void setQSortFilterProxyModel_ItemData_IsBase(bool value) const { qsortfilterproxymodel_itemdata_isbase = value; }
    void setQSortFilterProxyModel_SetItemData_IsBase(bool value) const { qsortfilterproxymodel_setitemdata_isbase = value; }
    void setQSortFilterProxyModel_ClearItemData_IsBase(bool value) const { qsortfilterproxymodel_clearitemdata_isbase = value; }
    void setQSortFilterProxyModel_CanDropMimeData_IsBase(bool value) const { qsortfilterproxymodel_candropmimedata_isbase = value; }
    void setQSortFilterProxyModel_SupportedDragActions_IsBase(bool value) const { qsortfilterproxymodel_supporteddragactions_isbase = value; }
    void setQSortFilterProxyModel_RoleNames_IsBase(bool value) const { qsortfilterproxymodel_rolenames_isbase = value; }
    void setQSortFilterProxyModel_MoveRows_IsBase(bool value) const { qsortfilterproxymodel_moverows_isbase = value; }
    void setQSortFilterProxyModel_MoveColumns_IsBase(bool value) const { qsortfilterproxymodel_movecolumns_isbase = value; }
    void setQSortFilterProxyModel_MultiData_IsBase(bool value) const { qsortfilterproxymodel_multidata_isbase = value; }
    void setQSortFilterProxyModel_ResetInternalData_IsBase(bool value) const { qsortfilterproxymodel_resetinternaldata_isbase = value; }
    void setQSortFilterProxyModel_Event_IsBase(bool value) const { qsortfilterproxymodel_event_isbase = value; }
    void setQSortFilterProxyModel_EventFilter_IsBase(bool value) const { qsortfilterproxymodel_eventfilter_isbase = value; }
    void setQSortFilterProxyModel_TimerEvent_IsBase(bool value) const { qsortfilterproxymodel_timerevent_isbase = value; }
    void setQSortFilterProxyModel_ChildEvent_IsBase(bool value) const { qsortfilterproxymodel_childevent_isbase = value; }
    void setQSortFilterProxyModel_CustomEvent_IsBase(bool value) const { qsortfilterproxymodel_customevent_isbase = value; }
    void setQSortFilterProxyModel_ConnectNotify_IsBase(bool value) const { qsortfilterproxymodel_connectnotify_isbase = value; }
    void setQSortFilterProxyModel_DisconnectNotify_IsBase(bool value) const { qsortfilterproxymodel_disconnectnotify_isbase = value; }
    void setQSortFilterProxyModel_InvalidateFilter_IsBase(bool value) const { qsortfilterproxymodel_invalidatefilter_isbase = value; }
    void setQSortFilterProxyModel_InvalidateRowsFilter_IsBase(bool value) const { qsortfilterproxymodel_invalidaterowsfilter_isbase = value; }
    void setQSortFilterProxyModel_InvalidateColumnsFilter_IsBase(bool value) const { qsortfilterproxymodel_invalidatecolumnsfilter_isbase = value; }
    void setQSortFilterProxyModel_CreateSourceIndex_IsBase(bool value) const { qsortfilterproxymodel_createsourceindex_isbase = value; }
    void setQSortFilterProxyModel_CreateIndex_IsBase(bool value) const { qsortfilterproxymodel_createindex_isbase = value; }
    void setQSortFilterProxyModel_EncodeData_IsBase(bool value) const { qsortfilterproxymodel_encodedata_isbase = value; }
    void setQSortFilterProxyModel_DecodeData_IsBase(bool value) const { qsortfilterproxymodel_decodedata_isbase = value; }
    void setQSortFilterProxyModel_BeginInsertRows_IsBase(bool value) const { qsortfilterproxymodel_begininsertrows_isbase = value; }
    void setQSortFilterProxyModel_EndInsertRows_IsBase(bool value) const { qsortfilterproxymodel_endinsertrows_isbase = value; }
    void setQSortFilterProxyModel_BeginRemoveRows_IsBase(bool value) const { qsortfilterproxymodel_beginremoverows_isbase = value; }
    void setQSortFilterProxyModel_EndRemoveRows_IsBase(bool value) const { qsortfilterproxymodel_endremoverows_isbase = value; }
    void setQSortFilterProxyModel_BeginMoveRows_IsBase(bool value) const { qsortfilterproxymodel_beginmoverows_isbase = value; }
    void setQSortFilterProxyModel_EndMoveRows_IsBase(bool value) const { qsortfilterproxymodel_endmoverows_isbase = value; }
    void setQSortFilterProxyModel_BeginInsertColumns_IsBase(bool value) const { qsortfilterproxymodel_begininsertcolumns_isbase = value; }
    void setQSortFilterProxyModel_EndInsertColumns_IsBase(bool value) const { qsortfilterproxymodel_endinsertcolumns_isbase = value; }
    void setQSortFilterProxyModel_BeginRemoveColumns_IsBase(bool value) const { qsortfilterproxymodel_beginremovecolumns_isbase = value; }
    void setQSortFilterProxyModel_EndRemoveColumns_IsBase(bool value) const { qsortfilterproxymodel_endremovecolumns_isbase = value; }
    void setQSortFilterProxyModel_BeginMoveColumns_IsBase(bool value) const { qsortfilterproxymodel_beginmovecolumns_isbase = value; }
    void setQSortFilterProxyModel_EndMoveColumns_IsBase(bool value) const { qsortfilterproxymodel_endmovecolumns_isbase = value; }
    void setQSortFilterProxyModel_BeginResetModel_IsBase(bool value) const { qsortfilterproxymodel_beginresetmodel_isbase = value; }
    void setQSortFilterProxyModel_EndResetModel_IsBase(bool value) const { qsortfilterproxymodel_endresetmodel_isbase = value; }
    void setQSortFilterProxyModel_ChangePersistentIndex_IsBase(bool value) const { qsortfilterproxymodel_changepersistentindex_isbase = value; }
    void setQSortFilterProxyModel_ChangePersistentIndexList_IsBase(bool value) const { qsortfilterproxymodel_changepersistentindexlist_isbase = value; }
    void setQSortFilterProxyModel_PersistentIndexList_IsBase(bool value) const { qsortfilterproxymodel_persistentindexlist_isbase = value; }
    void setQSortFilterProxyModel_Sender_IsBase(bool value) const { qsortfilterproxymodel_sender_isbase = value; }
    void setQSortFilterProxyModel_SenderSignalIndex_IsBase(bool value) const { qsortfilterproxymodel_sendersignalindex_isbase = value; }
    void setQSortFilterProxyModel_Receivers_IsBase(bool value) const { qsortfilterproxymodel_receivers_isbase = value; }
    void setQSortFilterProxyModel_IsSignalConnected_IsBase(bool value) const { qsortfilterproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsortfilterproxymodel_metacall_isbase) {
            qsortfilterproxymodel_metacall_isbase = false;
            return QSortFilterProxyModel::qt_metacall(param1, param2, param3);
        } else if (qsortfilterproxymodel_metacall_callback != nullptr) {
            return qsortfilterproxymodel_metacall_callback(this, param1, param2, param3);
        } else {
            return QSortFilterProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (qsortfilterproxymodel_setsourcemodel_isbase) {
            qsortfilterproxymodel_setsourcemodel_isbase = false;
            QSortFilterProxyModel::setSourceModel(sourceModel);
        } else if (qsortfilterproxymodel_setsourcemodel_callback != nullptr) {
            qsortfilterproxymodel_setsourcemodel_callback(this, sourceModel);
        } else {
            QSortFilterProxyModel::setSourceModel(sourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qsortfilterproxymodel_maptosource_isbase) {
            qsortfilterproxymodel_maptosource_isbase = false;
            return QSortFilterProxyModel::mapToSource(proxyIndex);
        } else if (qsortfilterproxymodel_maptosource_callback != nullptr) {
            return qsortfilterproxymodel_maptosource_callback(this, proxyIndex);
        } else {
            return QSortFilterProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qsortfilterproxymodel_mapfromsource_isbase) {
            qsortfilterproxymodel_mapfromsource_isbase = false;
            return QSortFilterProxyModel::mapFromSource(sourceIndex);
        } else if (qsortfilterproxymodel_mapfromsource_callback != nullptr) {
            return qsortfilterproxymodel_mapfromsource_callback(this, sourceIndex);
        } else {
            return QSortFilterProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
        if (qsortfilterproxymodel_mapselectiontosource_isbase) {
            qsortfilterproxymodel_mapselectiontosource_isbase = false;
            return QSortFilterProxyModel::mapSelectionToSource(proxySelection);
        } else if (qsortfilterproxymodel_mapselectiontosource_callback != nullptr) {
            return qsortfilterproxymodel_mapselectiontosource_callback(this, proxySelection);
        } else {
            return QSortFilterProxyModel::mapSelectionToSource(proxySelection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
        if (qsortfilterproxymodel_mapselectionfromsource_isbase) {
            qsortfilterproxymodel_mapselectionfromsource_isbase = false;
            return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
        } else if (qsortfilterproxymodel_mapselectionfromsource_callback != nullptr) {
            return qsortfilterproxymodel_mapselectionfromsource_callback(this, sourceSelection);
        } else {
            return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
        if (qsortfilterproxymodel_filteracceptsrow_isbase) {
            qsortfilterproxymodel_filteracceptsrow_isbase = false;
            return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
        } else if (qsortfilterproxymodel_filteracceptsrow_callback != nullptr) {
            return qsortfilterproxymodel_filteracceptsrow_callback(this, source_row, source_parent);
        } else {
            return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
        if (qsortfilterproxymodel_filteracceptscolumn_isbase) {
            qsortfilterproxymodel_filteracceptscolumn_isbase = false;
            return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
        } else if (qsortfilterproxymodel_filteracceptscolumn_callback != nullptr) {
            return qsortfilterproxymodel_filteracceptscolumn_callback(this, source_column, source_parent);
        } else {
            return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool lessThan(const QModelIndex& source_left, const QModelIndex& source_right) const override {
        if (qsortfilterproxymodel_lessthan_isbase) {
            qsortfilterproxymodel_lessthan_isbase = false;
            return QSortFilterProxyModel::lessThan(source_left, source_right);
        } else if (qsortfilterproxymodel_lessthan_callback != nullptr) {
            return qsortfilterproxymodel_lessthan_callback(this, source_left, source_right);
        } else {
            return QSortFilterProxyModel::lessThan(source_left, source_right);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_index_isbase) {
            qsortfilterproxymodel_index_isbase = false;
            return QSortFilterProxyModel::index(row, column, parent);
        } else if (qsortfilterproxymodel_index_callback != nullptr) {
            return qsortfilterproxymodel_index_callback(this, row, column, parent);
        } else {
            return QSortFilterProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qsortfilterproxymodel_parent_isbase) {
            qsortfilterproxymodel_parent_isbase = false;
            return QSortFilterProxyModel::parent(child);
        } else if (qsortfilterproxymodel_parent_callback != nullptr) {
            return qsortfilterproxymodel_parent_callback(this, child);
        } else {
            return QSortFilterProxyModel::parent(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qsortfilterproxymodel_sibling_isbase) {
            qsortfilterproxymodel_sibling_isbase = false;
            return QSortFilterProxyModel::sibling(row, column, idx);
        } else if (qsortfilterproxymodel_sibling_callback != nullptr) {
            return qsortfilterproxymodel_sibling_callback(this, row, column, idx);
        } else {
            return QSortFilterProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_rowcount_isbase) {
            qsortfilterproxymodel_rowcount_isbase = false;
            return QSortFilterProxyModel::rowCount(parent);
        } else if (qsortfilterproxymodel_rowcount_callback != nullptr) {
            return qsortfilterproxymodel_rowcount_callback(this, parent);
        } else {
            return QSortFilterProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_columncount_isbase) {
            qsortfilterproxymodel_columncount_isbase = false;
            return QSortFilterProxyModel::columnCount(parent);
        } else if (qsortfilterproxymodel_columncount_callback != nullptr) {
            return qsortfilterproxymodel_columncount_callback(this, parent);
        } else {
            return QSortFilterProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_haschildren_isbase) {
            qsortfilterproxymodel_haschildren_isbase = false;
            return QSortFilterProxyModel::hasChildren(parent);
        } else if (qsortfilterproxymodel_haschildren_callback != nullptr) {
            return qsortfilterproxymodel_haschildren_callback(this, parent);
        } else {
            return QSortFilterProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qsortfilterproxymodel_data_isbase) {
            qsortfilterproxymodel_data_isbase = false;
            return QSortFilterProxyModel::data(index, role);
        } else if (qsortfilterproxymodel_data_callback != nullptr) {
            return qsortfilterproxymodel_data_callback(this, index, role);
        } else {
            return QSortFilterProxyModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qsortfilterproxymodel_setdata_isbase) {
            qsortfilterproxymodel_setdata_isbase = false;
            return QSortFilterProxyModel::setData(index, value, role);
        } else if (qsortfilterproxymodel_setdata_callback != nullptr) {
            return qsortfilterproxymodel_setdata_callback(this, index, value, role);
        } else {
            return QSortFilterProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qsortfilterproxymodel_headerdata_isbase) {
            qsortfilterproxymodel_headerdata_isbase = false;
            return QSortFilterProxyModel::headerData(section, orientation, role);
        } else if (qsortfilterproxymodel_headerdata_callback != nullptr) {
            return qsortfilterproxymodel_headerdata_callback(this, section, orientation, role);
        } else {
            return QSortFilterProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qsortfilterproxymodel_setheaderdata_isbase) {
            qsortfilterproxymodel_setheaderdata_isbase = false;
            return QSortFilterProxyModel::setHeaderData(section, orientation, value, role);
        } else if (qsortfilterproxymodel_setheaderdata_callback != nullptr) {
            return qsortfilterproxymodel_setheaderdata_callback(this, section, orientation, value, role);
        } else {
            return QSortFilterProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
        if (qsortfilterproxymodel_mimedata_isbase) {
            qsortfilterproxymodel_mimedata_isbase = false;
            return QSortFilterProxyModel::mimeData(indexes);
        } else if (qsortfilterproxymodel_mimedata_callback != nullptr) {
            return qsortfilterproxymodel_mimedata_callback(this, indexes);
        } else {
            return QSortFilterProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_dropmimedata_isbase) {
            qsortfilterproxymodel_dropmimedata_isbase = false;
            return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (qsortfilterproxymodel_dropmimedata_callback != nullptr) {
            return qsortfilterproxymodel_dropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_insertrows_isbase) {
            qsortfilterproxymodel_insertrows_isbase = false;
            return QSortFilterProxyModel::insertRows(row, count, parent);
        } else if (qsortfilterproxymodel_insertrows_callback != nullptr) {
            return qsortfilterproxymodel_insertrows_callback(this, row, count, parent);
        } else {
            return QSortFilterProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_insertcolumns_isbase) {
            qsortfilterproxymodel_insertcolumns_isbase = false;
            return QSortFilterProxyModel::insertColumns(column, count, parent);
        } else if (qsortfilterproxymodel_insertcolumns_callback != nullptr) {
            return qsortfilterproxymodel_insertcolumns_callback(this, column, count, parent);
        } else {
            return QSortFilterProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_removerows_isbase) {
            qsortfilterproxymodel_removerows_isbase = false;
            return QSortFilterProxyModel::removeRows(row, count, parent);
        } else if (qsortfilterproxymodel_removerows_callback != nullptr) {
            return qsortfilterproxymodel_removerows_callback(this, row, count, parent);
        } else {
            return QSortFilterProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qsortfilterproxymodel_removecolumns_isbase) {
            qsortfilterproxymodel_removecolumns_isbase = false;
            return QSortFilterProxyModel::removeColumns(column, count, parent);
        } else if (qsortfilterproxymodel_removecolumns_callback != nullptr) {
            return qsortfilterproxymodel_removecolumns_callback(this, column, count, parent);
        } else {
            return QSortFilterProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qsortfilterproxymodel_fetchmore_isbase) {
            qsortfilterproxymodel_fetchmore_isbase = false;
            QSortFilterProxyModel::fetchMore(parent);
        } else if (qsortfilterproxymodel_fetchmore_callback != nullptr) {
            qsortfilterproxymodel_fetchmore_callback(this, parent);
        } else {
            QSortFilterProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_canfetchmore_isbase) {
            qsortfilterproxymodel_canfetchmore_isbase = false;
            return QSortFilterProxyModel::canFetchMore(parent);
        } else if (qsortfilterproxymodel_canfetchmore_callback != nullptr) {
            return qsortfilterproxymodel_canfetchmore_callback(this, parent);
        } else {
            return QSortFilterProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_flags_isbase) {
            qsortfilterproxymodel_flags_isbase = false;
            return QSortFilterProxyModel::flags(index);
        } else if (qsortfilterproxymodel_flags_callback != nullptr) {
            return qsortfilterproxymodel_flags_callback(this, index);
        } else {
            return QSortFilterProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_buddy_isbase) {
            qsortfilterproxymodel_buddy_isbase = false;
            return QSortFilterProxyModel::buddy(index);
        } else if (qsortfilterproxymodel_buddy_callback != nullptr) {
            return qsortfilterproxymodel_buddy_callback(this, index);
        } else {
            return QSortFilterProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qsortfilterproxymodel_match_isbase) {
            qsortfilterproxymodel_match_isbase = false;
            return QSortFilterProxyModel::match(start, role, value, hits, flags);
        } else if (qsortfilterproxymodel_match_callback != nullptr) {
            return qsortfilterproxymodel_match_callback(this, start, role, value, hits, flags);
        } else {
            return QSortFilterProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_span_isbase) {
            qsortfilterproxymodel_span_isbase = false;
            return QSortFilterProxyModel::span(index);
        } else if (qsortfilterproxymodel_span_callback != nullptr) {
            return qsortfilterproxymodel_span_callback(this, index);
        } else {
            return QSortFilterProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qsortfilterproxymodel_sort_isbase) {
            qsortfilterproxymodel_sort_isbase = false;
            QSortFilterProxyModel::sort(column, order);
        } else if (qsortfilterproxymodel_sort_callback != nullptr) {
            qsortfilterproxymodel_sort_callback(this, column, order);
        } else {
            QSortFilterProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qsortfilterproxymodel_mimetypes_isbase) {
            qsortfilterproxymodel_mimetypes_isbase = false;
            return QSortFilterProxyModel::mimeTypes();
        } else if (qsortfilterproxymodel_mimetypes_callback != nullptr) {
            return qsortfilterproxymodel_mimetypes_callback();
        } else {
            return QSortFilterProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qsortfilterproxymodel_supporteddropactions_isbase) {
            qsortfilterproxymodel_supporteddropactions_isbase = false;
            return QSortFilterProxyModel::supportedDropActions();
        } else if (qsortfilterproxymodel_supporteddropactions_callback != nullptr) {
            return qsortfilterproxymodel_supporteddropactions_callback();
        } else {
            return QSortFilterProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qsortfilterproxymodel_submit_isbase) {
            qsortfilterproxymodel_submit_isbase = false;
            return QSortFilterProxyModel::submit();
        } else if (qsortfilterproxymodel_submit_callback != nullptr) {
            return qsortfilterproxymodel_submit_callback();
        } else {
            return QSortFilterProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qsortfilterproxymodel_revert_isbase) {
            qsortfilterproxymodel_revert_isbase = false;
            QSortFilterProxyModel::revert();
        } else if (qsortfilterproxymodel_revert_callback != nullptr) {
            qsortfilterproxymodel_revert_callback();
        } else {
            QSortFilterProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qsortfilterproxymodel_itemdata_isbase) {
            qsortfilterproxymodel_itemdata_isbase = false;
            return QSortFilterProxyModel::itemData(index);
        } else if (qsortfilterproxymodel_itemdata_callback != nullptr) {
            return qsortfilterproxymodel_itemdata_callback(this, index);
        } else {
            return QSortFilterProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qsortfilterproxymodel_setitemdata_isbase) {
            qsortfilterproxymodel_setitemdata_isbase = false;
            return QSortFilterProxyModel::setItemData(index, roles);
        } else if (qsortfilterproxymodel_setitemdata_callback != nullptr) {
            return qsortfilterproxymodel_setitemdata_callback(this, index, roles);
        } else {
            return QSortFilterProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qsortfilterproxymodel_clearitemdata_isbase) {
            qsortfilterproxymodel_clearitemdata_isbase = false;
            return QSortFilterProxyModel::clearItemData(index);
        } else if (qsortfilterproxymodel_clearitemdata_callback != nullptr) {
            return qsortfilterproxymodel_clearitemdata_callback(this, index);
        } else {
            return QSortFilterProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qsortfilterproxymodel_candropmimedata_isbase) {
            qsortfilterproxymodel_candropmimedata_isbase = false;
            return QSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (qsortfilterproxymodel_candropmimedata_callback != nullptr) {
            return qsortfilterproxymodel_candropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qsortfilterproxymodel_supporteddragactions_isbase) {
            qsortfilterproxymodel_supporteddragactions_isbase = false;
            return QSortFilterProxyModel::supportedDragActions();
        } else if (qsortfilterproxymodel_supporteddragactions_callback != nullptr) {
            return qsortfilterproxymodel_supporteddragactions_callback();
        } else {
            return QSortFilterProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qsortfilterproxymodel_rolenames_isbase) {
            qsortfilterproxymodel_rolenames_isbase = false;
            return QSortFilterProxyModel::roleNames();
        } else if (qsortfilterproxymodel_rolenames_callback != nullptr) {
            return qsortfilterproxymodel_rolenames_callback();
        } else {
            return QSortFilterProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsortfilterproxymodel_moverows_isbase) {
            qsortfilterproxymodel_moverows_isbase = false;
            return QSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qsortfilterproxymodel_moverows_callback != nullptr) {
            return qsortfilterproxymodel_moverows_callback(this, sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else {
            return QSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qsortfilterproxymodel_movecolumns_isbase) {
            qsortfilterproxymodel_movecolumns_isbase = false;
            return QSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qsortfilterproxymodel_movecolumns_callback != nullptr) {
            return qsortfilterproxymodel_movecolumns_callback(this, sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else {
            return QSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qsortfilterproxymodel_multidata_isbase) {
            qsortfilterproxymodel_multidata_isbase = false;
            QSortFilterProxyModel::multiData(index, roleDataSpan);
        } else if (qsortfilterproxymodel_multidata_callback != nullptr) {
            qsortfilterproxymodel_multidata_callback(this, index, roleDataSpan);
        } else {
            QSortFilterProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qsortfilterproxymodel_resetinternaldata_isbase) {
            qsortfilterproxymodel_resetinternaldata_isbase = false;
            QSortFilterProxyModel::resetInternalData();
        } else if (qsortfilterproxymodel_resetinternaldata_callback != nullptr) {
            qsortfilterproxymodel_resetinternaldata_callback();
        } else {
            QSortFilterProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsortfilterproxymodel_event_isbase) {
            qsortfilterproxymodel_event_isbase = false;
            return QSortFilterProxyModel::event(event);
        } else if (qsortfilterproxymodel_event_callback != nullptr) {
            return qsortfilterproxymodel_event_callback(this, event);
        } else {
            return QSortFilterProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsortfilterproxymodel_eventfilter_isbase) {
            qsortfilterproxymodel_eventfilter_isbase = false;
            return QSortFilterProxyModel::eventFilter(watched, event);
        } else if (qsortfilterproxymodel_eventfilter_callback != nullptr) {
            return qsortfilterproxymodel_eventfilter_callback(this, watched, event);
        } else {
            return QSortFilterProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsortfilterproxymodel_timerevent_isbase) {
            qsortfilterproxymodel_timerevent_isbase = false;
            QSortFilterProxyModel::timerEvent(event);
        } else if (qsortfilterproxymodel_timerevent_callback != nullptr) {
            qsortfilterproxymodel_timerevent_callback(this, event);
        } else {
            QSortFilterProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsortfilterproxymodel_childevent_isbase) {
            qsortfilterproxymodel_childevent_isbase = false;
            QSortFilterProxyModel::childEvent(event);
        } else if (qsortfilterproxymodel_childevent_callback != nullptr) {
            qsortfilterproxymodel_childevent_callback(this, event);
        } else {
            QSortFilterProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsortfilterproxymodel_customevent_isbase) {
            qsortfilterproxymodel_customevent_isbase = false;
            QSortFilterProxyModel::customEvent(event);
        } else if (qsortfilterproxymodel_customevent_callback != nullptr) {
            qsortfilterproxymodel_customevent_callback(this, event);
        } else {
            QSortFilterProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsortfilterproxymodel_connectnotify_isbase) {
            qsortfilterproxymodel_connectnotify_isbase = false;
            QSortFilterProxyModel::connectNotify(signal);
        } else if (qsortfilterproxymodel_connectnotify_callback != nullptr) {
            qsortfilterproxymodel_connectnotify_callback(this, signal);
        } else {
            QSortFilterProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsortfilterproxymodel_disconnectnotify_isbase) {
            qsortfilterproxymodel_disconnectnotify_isbase = false;
            QSortFilterProxyModel::disconnectNotify(signal);
        } else if (qsortfilterproxymodel_disconnectnotify_callback != nullptr) {
            qsortfilterproxymodel_disconnectnotify_callback(this, signal);
        } else {
            QSortFilterProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void invalidateFilter() {
        if (qsortfilterproxymodel_invalidatefilter_isbase) {
            qsortfilterproxymodel_invalidatefilter_isbase = false;
            QSortFilterProxyModel::invalidateFilter();
        } else if (qsortfilterproxymodel_invalidatefilter_callback != nullptr) {
            qsortfilterproxymodel_invalidatefilter_callback();
        } else {
            QSortFilterProxyModel::invalidateFilter();
        }
    }

    // Virtual method for C ABI access and custom callback
    void invalidateRowsFilter() {
        if (qsortfilterproxymodel_invalidaterowsfilter_isbase) {
            qsortfilterproxymodel_invalidaterowsfilter_isbase = false;
            QSortFilterProxyModel::invalidateRowsFilter();
        } else if (qsortfilterproxymodel_invalidaterowsfilter_callback != nullptr) {
            qsortfilterproxymodel_invalidaterowsfilter_callback();
        } else {
            QSortFilterProxyModel::invalidateRowsFilter();
        }
    }

    // Virtual method for C ABI access and custom callback
    void invalidateColumnsFilter() {
        if (qsortfilterproxymodel_invalidatecolumnsfilter_isbase) {
            qsortfilterproxymodel_invalidatecolumnsfilter_isbase = false;
            QSortFilterProxyModel::invalidateColumnsFilter();
        } else if (qsortfilterproxymodel_invalidatecolumnsfilter_callback != nullptr) {
            qsortfilterproxymodel_invalidatecolumnsfilter_callback();
        } else {
            QSortFilterProxyModel::invalidateColumnsFilter();
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (qsortfilterproxymodel_createsourceindex_isbase) {
            qsortfilterproxymodel_createsourceindex_isbase = false;
            return QSortFilterProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (qsortfilterproxymodel_createsourceindex_callback != nullptr) {
            return qsortfilterproxymodel_createsourceindex_callback(this, row, col, internalPtr);
        } else {
            return QSortFilterProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qsortfilterproxymodel_createindex_isbase) {
            qsortfilterproxymodel_createindex_isbase = false;
            return QSortFilterProxyModel::createIndex(row, column);
        } else if (qsortfilterproxymodel_createindex_callback != nullptr) {
            return qsortfilterproxymodel_createindex_callback(this, row, column);
        } else {
            return QSortFilterProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QModelIndexList& indexes, QDataStream& stream) const {
        if (qsortfilterproxymodel_encodedata_isbase) {
            qsortfilterproxymodel_encodedata_isbase = false;
            QSortFilterProxyModel::encodeData(indexes, stream);
        } else if (qsortfilterproxymodel_encodedata_callback != nullptr) {
            qsortfilterproxymodel_encodedata_callback(this, indexes, stream);
        } else {
            QSortFilterProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qsortfilterproxymodel_decodedata_isbase) {
            qsortfilterproxymodel_decodedata_isbase = false;
            return QSortFilterProxyModel::decodeData(row, column, parent, stream);
        } else if (qsortfilterproxymodel_decodedata_callback != nullptr) {
            return qsortfilterproxymodel_decodedata_callback(this, row, column, parent, stream);
        } else {
            return QSortFilterProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qsortfilterproxymodel_begininsertrows_isbase) {
            qsortfilterproxymodel_begininsertrows_isbase = false;
            QSortFilterProxyModel::beginInsertRows(parent, first, last);
        } else if (qsortfilterproxymodel_begininsertrows_callback != nullptr) {
            qsortfilterproxymodel_begininsertrows_callback(this, parent, first, last);
        } else {
            QSortFilterProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qsortfilterproxymodel_endinsertrows_isbase) {
            qsortfilterproxymodel_endinsertrows_isbase = false;
            QSortFilterProxyModel::endInsertRows();
        } else if (qsortfilterproxymodel_endinsertrows_callback != nullptr) {
            qsortfilterproxymodel_endinsertrows_callback();
        } else {
            QSortFilterProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qsortfilterproxymodel_beginremoverows_isbase) {
            qsortfilterproxymodel_beginremoverows_isbase = false;
            QSortFilterProxyModel::beginRemoveRows(parent, first, last);
        } else if (qsortfilterproxymodel_beginremoverows_callback != nullptr) {
            qsortfilterproxymodel_beginremoverows_callback(this, parent, first, last);
        } else {
            QSortFilterProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qsortfilterproxymodel_endremoverows_isbase) {
            qsortfilterproxymodel_endremoverows_isbase = false;
            QSortFilterProxyModel::endRemoveRows();
        } else if (qsortfilterproxymodel_endremoverows_callback != nullptr) {
            qsortfilterproxymodel_endremoverows_callback();
        } else {
            QSortFilterProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qsortfilterproxymodel_beginmoverows_isbase) {
            qsortfilterproxymodel_beginmoverows_isbase = false;
            return QSortFilterProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qsortfilterproxymodel_beginmoverows_callback != nullptr) {
            return qsortfilterproxymodel_beginmoverows_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else {
            return QSortFilterProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qsortfilterproxymodel_endmoverows_isbase) {
            qsortfilterproxymodel_endmoverows_isbase = false;
            QSortFilterProxyModel::endMoveRows();
        } else if (qsortfilterproxymodel_endmoverows_callback != nullptr) {
            qsortfilterproxymodel_endmoverows_callback();
        } else {
            QSortFilterProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qsortfilterproxymodel_begininsertcolumns_isbase) {
            qsortfilterproxymodel_begininsertcolumns_isbase = false;
            QSortFilterProxyModel::beginInsertColumns(parent, first, last);
        } else if (qsortfilterproxymodel_begininsertcolumns_callback != nullptr) {
            qsortfilterproxymodel_begininsertcolumns_callback(this, parent, first, last);
        } else {
            QSortFilterProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qsortfilterproxymodel_endinsertcolumns_isbase) {
            qsortfilterproxymodel_endinsertcolumns_isbase = false;
            QSortFilterProxyModel::endInsertColumns();
        } else if (qsortfilterproxymodel_endinsertcolumns_callback != nullptr) {
            qsortfilterproxymodel_endinsertcolumns_callback();
        } else {
            QSortFilterProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qsortfilterproxymodel_beginremovecolumns_isbase) {
            qsortfilterproxymodel_beginremovecolumns_isbase = false;
            QSortFilterProxyModel::beginRemoveColumns(parent, first, last);
        } else if (qsortfilterproxymodel_beginremovecolumns_callback != nullptr) {
            qsortfilterproxymodel_beginremovecolumns_callback(this, parent, first, last);
        } else {
            QSortFilterProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qsortfilterproxymodel_endremovecolumns_isbase) {
            qsortfilterproxymodel_endremovecolumns_isbase = false;
            QSortFilterProxyModel::endRemoveColumns();
        } else if (qsortfilterproxymodel_endremovecolumns_callback != nullptr) {
            qsortfilterproxymodel_endremovecolumns_callback();
        } else {
            QSortFilterProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qsortfilterproxymodel_beginmovecolumns_isbase) {
            qsortfilterproxymodel_beginmovecolumns_isbase = false;
            return QSortFilterProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qsortfilterproxymodel_beginmovecolumns_callback != nullptr) {
            return qsortfilterproxymodel_beginmovecolumns_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else {
            return QSortFilterProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qsortfilterproxymodel_endmovecolumns_isbase) {
            qsortfilterproxymodel_endmovecolumns_isbase = false;
            QSortFilterProxyModel::endMoveColumns();
        } else if (qsortfilterproxymodel_endmovecolumns_callback != nullptr) {
            qsortfilterproxymodel_endmovecolumns_callback();
        } else {
            QSortFilterProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qsortfilterproxymodel_beginresetmodel_isbase) {
            qsortfilterproxymodel_beginresetmodel_isbase = false;
            QSortFilterProxyModel::beginResetModel();
        } else if (qsortfilterproxymodel_beginresetmodel_callback != nullptr) {
            qsortfilterproxymodel_beginresetmodel_callback();
        } else {
            QSortFilterProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qsortfilterproxymodel_endresetmodel_isbase) {
            qsortfilterproxymodel_endresetmodel_isbase = false;
            QSortFilterProxyModel::endResetModel();
        } else if (qsortfilterproxymodel_endresetmodel_callback != nullptr) {
            qsortfilterproxymodel_endresetmodel_callback();
        } else {
            QSortFilterProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qsortfilterproxymodel_changepersistentindex_isbase) {
            qsortfilterproxymodel_changepersistentindex_isbase = false;
            QSortFilterProxyModel::changePersistentIndex(from, to);
        } else if (qsortfilterproxymodel_changepersistentindex_callback != nullptr) {
            qsortfilterproxymodel_changepersistentindex_callback(this, from, to);
        } else {
            QSortFilterProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QModelIndexList& from, const QModelIndexList& to) {
        if (qsortfilterproxymodel_changepersistentindexlist_isbase) {
            qsortfilterproxymodel_changepersistentindexlist_isbase = false;
            QSortFilterProxyModel::changePersistentIndexList(from, to);
        } else if (qsortfilterproxymodel_changepersistentindexlist_callback != nullptr) {
            qsortfilterproxymodel_changepersistentindexlist_callback(this, from, to);
        } else {
            QSortFilterProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndexList persistentIndexList() const {
        if (qsortfilterproxymodel_persistentindexlist_isbase) {
            qsortfilterproxymodel_persistentindexlist_isbase = false;
            return QSortFilterProxyModel::persistentIndexList();
        } else if (qsortfilterproxymodel_persistentindexlist_callback != nullptr) {
            return qsortfilterproxymodel_persistentindexlist_callback();
        } else {
            return QSortFilterProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsortfilterproxymodel_sender_isbase) {
            qsortfilterproxymodel_sender_isbase = false;
            return QSortFilterProxyModel::sender();
        } else if (qsortfilterproxymodel_sender_callback != nullptr) {
            return qsortfilterproxymodel_sender_callback();
        } else {
            return QSortFilterProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsortfilterproxymodel_sendersignalindex_isbase) {
            qsortfilterproxymodel_sendersignalindex_isbase = false;
            return QSortFilterProxyModel::senderSignalIndex();
        } else if (qsortfilterproxymodel_sendersignalindex_callback != nullptr) {
            return qsortfilterproxymodel_sendersignalindex_callback();
        } else {
            return QSortFilterProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsortfilterproxymodel_receivers_isbase) {
            qsortfilterproxymodel_receivers_isbase = false;
            return QSortFilterProxyModel::receivers(signal);
        } else if (qsortfilterproxymodel_receivers_callback != nullptr) {
            return qsortfilterproxymodel_receivers_callback(this, signal);
        } else {
            return QSortFilterProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsortfilterproxymodel_issignalconnected_isbase) {
            qsortfilterproxymodel_issignalconnected_isbase = false;
            return QSortFilterProxyModel::isSignalConnected(signal);
        } else if (qsortfilterproxymodel_issignalconnected_callback != nullptr) {
            return qsortfilterproxymodel_issignalconnected_callback(this, signal);
        } else {
            return QSortFilterProxyModel::isSignalConnected(signal);
        }
    }
};

#endif
