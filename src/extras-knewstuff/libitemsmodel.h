#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBITEMSMODEL_H
#define EXTRAS_KNEWSTUFF_LIBITEMSMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html)

/// k_nscore__itemsmodel_new constructs a new KNSCore::ItemsModel object.
///
/// @param engine KNSCore__EngineBase*
///
KNSCore__ItemsModel* k_nscore__itemsmodel_new(void* engine);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html)

/// k_nscore__itemsmodel_new2 constructs a new KNSCore::ItemsModel object.
///
/// @param engine KNSCore__EngineBase*
/// @param parent QObject*
///
KNSCore__ItemsModel* k_nscore__itemsmodel_new2(void* engine, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KNSCore__ItemsModel*
///
const QMetaObject* k_nscore__itemsmodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback const QMetaObject* func(const KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KNSCore__ItemsModel*
///
const QMetaObject* k_nscore__itemsmodel_super_meta_object(const void* self);

/// @param self KNSCore__ItemsModel*
/// @param param1 const char*
///
void* k_nscore__itemsmodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void* func(KNSCore__ItemsModel* self, const char* param1)
///
void k_nscore__itemsmodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KNSCore__ItemsModel*
/// @param param1 const char*
///
void* k_nscore__itemsmodel_super_metacast(void* self, const char* param1);

/// @param self KNSCore__ItemsModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_nscore__itemsmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(KNSCore__ItemsModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_nscore__itemsmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNSCore__ItemsModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_nscore__itemsmodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_nscore__itemsmodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#rowCount)
///
/// @param self const KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
int32_t k_nscore__itemsmodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(const KNSCore__ItemsModel* self, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self const KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
int32_t k_nscore__itemsmodel_super_row_count(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#data)
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_nscore__itemsmodel_data(const void* self, const void* index, int role);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QVariant* func(const KNSCore__ItemsModel* self, QModelIndex* index, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nscore__itemsmodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int));

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#data)
///
/// Base class method implementation
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_nscore__itemsmodel_super_data(const void* self, const void* index, int role);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#row)
///
/// @param self const KNSCore__ItemsModel*
/// @param entry KNSCore__Entry*
///
int32_t k_nscore__itemsmodel_row(const void* self, const void* entry);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#addEntry)
///
/// @param self KNSCore__ItemsModel*
/// @param entry KNSCore__Entry*
///
void k_nscore__itemsmodel_add_entry(void* self, const void* entry);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#removeEntry)
///
/// @param self KNSCore__ItemsModel*
/// @param entry KNSCore__Entry*
///
void k_nscore__itemsmodel_remove_entry(void* self, const void* entry);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#hasPreviewImages)
///
/// @param self const KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_has_preview_images(const void* self);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#jobStarted)
///
/// @param self KNSCore__ItemsModel*
/// @param param1 KJob*
/// @param label const char*
///
void k_nscore__itemsmodel_job_started(void* self, void* param1, const char* label);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#jobStarted)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, KJob* param1, const char* label)
///
void k_nscore__itemsmodel_on_job_started(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#loadPreview)
///
/// @param self KNSCore__ItemsModel*
/// @param entry KNSCore__Entry*
/// @param type enum KNSCore__Entry__PreviewType
///
void k_nscore__itemsmodel_load_preview(void* self, const void* entry, int32_t type);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#loadPreview)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, KNSCore__Entry* entry, enum KNSCore__Entry__PreviewType type)
///
void k_nscore__itemsmodel_on_load_preview(void* self, void (*callback)(void*, const void*, int32_t));

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#slotEntryChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param entry KNSCore__Entry*
///
void k_nscore__itemsmodel_slot_entry_changed(void* self, const void* entry);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#slotEntriesLoaded)
///
/// @param self KNSCore__ItemsModel*
/// @param entries libqt_list of KNSCore__Entry*
///
void k_nscore__itemsmodel_slot_entries_loaded(void* self, libqt_list entries);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#clearEntries)
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_clear_entries(void* self);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#slotEntryPreviewLoaded)
///
/// @param self KNSCore__ItemsModel*
/// @param entry KNSCore__Entry*
/// @param type enum KNSCore__Entry__PreviewType
///
void k_nscore__itemsmodel_slot_entry_preview_loaded(void* self, const void* entry, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_nscore__itemsmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_nscore__itemsmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KNSCore__ItemsModel*
/// @param row int
/// @param column int
///
bool k_nscore__itemsmodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @warning This method must be implemented with `k_nscore__itemsmodel_on_parent` before it can be called.
///
/// @param self const KNSCore__ItemsModel*
/// @param child QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_parent(const void* self, const void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex* func(const KNSCore__ItemsModel* self, QModelIndex* child)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nscore__itemsmodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @warning This method must be implemented with `k_nscore__itemsmodel_on_column_count` before it can be called.
///
/// @param self const KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
int32_t k_nscore__itemsmodel_column_count(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(const KNSCore__ItemsModel* self, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self const KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(const KNSCore__ItemsModel* self, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_has_children(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self const KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_super_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KNSCore__ItemsModel*
/// @param row int
///
bool k_nscore__itemsmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KNSCore__ItemsModel*
/// @param column int
///
bool k_nscore__itemsmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KNSCore__ItemsModel*
/// @param row int
///
bool k_nscore__itemsmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KNSCore__ItemsModel*
/// @param column int
///
bool k_nscore__itemsmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KNSCore__ItemsModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_nscore__itemsmodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KNSCore__ItemsModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_nscore__itemsmodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
///
bool k_nscore__itemsmodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_nscore__itemsmodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_nscore__itemsmodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_nscore__itemsmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_nscore__itemsmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KNSCore__ItemsModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KNSCore__ItemsModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_nscore__itemsmodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_nscore__itemsmodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void k_nscore__itemsmodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_nscore__itemsmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_nscore__itemsmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_nscore__itemsmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_nscore__itemsmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_nscore__itemsmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_nscore__itemsmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_nscore__itemsmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_nscore__itemsmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSCore__ItemsModel*
///
const char* k_nscore__itemsmodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNSCore__ItemsModel*
/// @param name const char*
///
void k_nscore__itemsmodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNSCore__ItemsModel*
/// @param b bool
///
bool k_nscore__itemsmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KNSCore__ItemsModel*
///
QThread* k_nscore__itemsmodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__ItemsModel*
/// @param thread QThread*
///
bool k_nscore__itemsmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__ItemsModel*
/// @param interval int
///
int32_t k_nscore__itemsmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__ItemsModel*
/// @param time int64_t of nanoseconds
///
int32_t k_nscore__itemsmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__ItemsModel*
/// @param id int
///
void k_nscore__itemsmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__ItemsModel*
/// @param id enum Qt__TimerId
///
void k_nscore__itemsmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KNSCore__ItemsModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_nscore__itemsmodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNSCore__ItemsModel*
/// @param parent QObject*
///
void k_nscore__itemsmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNSCore__ItemsModel*
/// @param filterObj QObject*
///
void k_nscore__itemsmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNSCore__ItemsModel*
/// @param obj QObject*
///
void k_nscore__itemsmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_nscore__itemsmodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_nscore__itemsmodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KNSCore__ItemsModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_nscore__itemsmodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_nscore__itemsmodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_nscore__itemsmodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSCore__ItemsModel*
/// @param receiver QObject*
///
bool k_nscore__itemsmodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_nscore__itemsmodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNSCore__ItemsModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_nscore__itemsmodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KNSCore__ItemsModel*
/// @param name const char*
///
QVariant* k_nscore__itemsmodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KNSCore__ItemsModel*
///
const char** k_nscore__itemsmodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__ItemsModel*
///
QBindingStorage* k_nscore__itemsmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KNSCore__ItemsModel*
///
const QBindingStorage* k_nscore__itemsmodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KNSCore__ItemsModel*
/// @param classname const char*
///
bool k_nscore__itemsmodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__ItemsModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_nscore__itemsmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__ItemsModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_nscore__itemsmodel_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_nscore__itemsmodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_nscore__itemsmodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KNSCore__ItemsModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_nscore__itemsmodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSCore__ItemsModel*
/// @param signal const char*
///
bool k_nscore__itemsmodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSCore__ItemsModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_nscore__itemsmodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSCore__ItemsModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_nscore__itemsmodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSCore__ItemsModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_nscore__itemsmodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ItemsModel*
/// @param param1 QObject*
///
void k_nscore__itemsmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QObject* param1)
///
void k_nscore__itemsmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_index(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_super_index(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex* func(KNSCore__ItemsModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nscore__itemsmodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_super_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex* func(KNSCore__ItemsModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nscore__itemsmodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_nscore__itemsmodel_flags(const void* self, const void* index);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_nscore__itemsmodel_super_flags(const void* self, const void* index);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(KNSCore__ItemsModel* self, QModelIndex* index)
///
void k_nscore__itemsmodel_on_flags(void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_nscore__itemsmodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_nscore__itemsmodel_super_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_nscore__itemsmodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_nscore__itemsmodel_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_nscore__itemsmodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QVariant* func(KNSCore__ItemsModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nscore__itemsmodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_nscore__itemsmodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_nscore__itemsmodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_nscore__itemsmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_nscore__itemsmodel_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_nscore__itemsmodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback libqt_map of int to QVariant* func(KNSCore__ItemsModel* self, QModelIndex* index)
///
void k_nscore__itemsmodel_on_item_data(void* self, libqt_map (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_nscore__itemsmodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_nscore__itemsmodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void k_nscore__itemsmodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
bool k_nscore__itemsmodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
bool k_nscore__itemsmodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* index)
///
void k_nscore__itemsmodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
const char** k_nscore__itemsmodel_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
const char** k_nscore__itemsmodel_super_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback const char** func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_mime_types(void* self, const char** (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_nscore__itemsmodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_nscore__itemsmodel_super_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QMimeData* func(KNSCore__ItemsModel* self, libqt_list of QModelIndex* indexes)
///
void k_nscore__itemsmodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_nscore__itemsmodel_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_nscore__itemsmodel_super_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_nscore__itemsmodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_nscore__itemsmodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int row, int count, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int column, int count, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int row, int count, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int column, int count, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_nscore__itemsmodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_nscore__itemsmodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_nscore__itemsmodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_nscore__itemsmodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_nscore__itemsmodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_nscore__itemsmodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
void k_nscore__itemsmodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
void k_nscore__itemsmodel_super_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_super_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_nscore__itemsmodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_nscore__itemsmodel_super_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, int column, enum Qt__SortOrder order)
///
void k_nscore__itemsmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex* func(KNSCore__ItemsModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nscore__itemsmodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_nscore__itemsmodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_nscore__itemsmodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback libqt_list of QModelIndex* func(KNSCore__ItemsModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_nscore__itemsmodel_on_match(void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
///
QSize* k_nscore__itemsmodel_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
///
QSize* k_nscore__itemsmodel_super_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QSize* func(KNSCore__ItemsModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nscore__itemsmodel_on_span(void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
/// @return libqt_map of int to const char*
///
libqt_map k_nscore__itemsmodel_role_names(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
/// @return libqt_map of int to const char*
///
libqt_map k_nscore__itemsmodel_super_role_names(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback libqt_map of int to const char* func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_role_names(void* self, libqt_map (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_nscore__itemsmodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_nscore__itemsmodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_nscore__itemsmodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_super_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_super_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_revert(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param event QEvent*
///
bool k_nscore__itemsmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param event QEvent*
///
bool k_nscore__itemsmodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QEvent* event)
///
void k_nscore__itemsmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_nscore__itemsmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_nscore__itemsmodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QObject* watched, QEvent* event)
///
void k_nscore__itemsmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param event QTimerEvent*
///
void k_nscore__itemsmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param event QTimerEvent*
///
void k_nscore__itemsmodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QTimerEvent* event)
///
void k_nscore__itemsmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param event QChildEvent*
///
void k_nscore__itemsmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param event QChildEvent*
///
void k_nscore__itemsmodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QChildEvent* event)
///
void k_nscore__itemsmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param event QEvent*
///
void k_nscore__itemsmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param event QEvent*
///
void k_nscore__itemsmodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QEvent* event)
///
void k_nscore__itemsmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
void k_nscore__itemsmodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
void k_nscore__itemsmodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QMetaMethod* signal)
///
void k_nscore__itemsmodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
void k_nscore__itemsmodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
void k_nscore__itemsmodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QMetaMethod* signal)
///
void k_nscore__itemsmodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param row int
/// @param column int
///
QModelIndex* k_nscore__itemsmodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param row int
/// @param column int
///
QModelIndex* k_nscore__itemsmodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex* func(KNSCore__ItemsModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_nscore__itemsmodel_on_create_index(void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_nscore__itemsmodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_nscore__itemsmodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void k_nscore__itemsmodel_on_encode_data(void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_nscore__itemsmodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_nscore__itemsmodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_nscore__itemsmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_nscore__itemsmodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_nscore__itemsmodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_nscore__itemsmodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_nscore__itemsmodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_nscore__itemsmodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_nscore__itemsmodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_nscore__itemsmodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_nscore__itemsmodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_nscore__itemsmodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_nscore__itemsmodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_nscore__itemsmodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_nscore__itemsmodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_nscore__itemsmodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_nscore__itemsmodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_nscore__itemsmodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_nscore__itemsmodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* from, QModelIndex* to)
///
void k_nscore__itemsmodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_nscore__itemsmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_nscore__itemsmodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void k_nscore__itemsmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_nscore__itemsmodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_nscore__itemsmodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback libqt_list of QModelIndex* func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_persistent_index_list(void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
QObject* k_nscore__itemsmodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
QObject* k_nscore__itemsmodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QObject* func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
int32_t k_nscore__itemsmodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
///
int32_t k_nscore__itemsmodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param signal const char*
///
int32_t k_nscore__itemsmodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param signal const char*
///
int32_t k_nscore__itemsmodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(KNSCore__ItemsModel* self, const char* signal)
///
void k_nscore__itemsmodel_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
bool k_nscore__itemsmodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
bool k_nscore__itemsmodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QMetaMethod* signal)
///
void k_nscore__itemsmodel_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self)
///
void k_nscore__itemsmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_nscore__itemsmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_nscore__itemsmodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_nscore__itemsmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_nscore__itemsmodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, const char* objectName)
///
void k_nscore__itemsmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_delete(void* self);

#endif
