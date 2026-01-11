#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBITEMSMODEL_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBITEMSMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self KNSCore__ItemsModel*
///
const QMetaObject* k_nscore__itemsmodel_meta_object(void* self);

/// @param self KNSCore__ItemsModel*
/// @param param1 const char*
///
void* k_nscore__itemsmodel_metacast(void* self, const char* param1);

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
int32_t k_nscore__itemsmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_nscore__itemsmodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#rowCount)
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
int32_t k_nscore__itemsmodel_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(KNSCore__ItemsModel* self, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
int32_t k_nscore__itemsmodel_qbase_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#data)
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_nscore__itemsmodel_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QVariant* func(KNSCore__ItemsModel* self, QModelIndex* index, int role)
///
void k_nscore__itemsmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#data)
///
/// Base class method implementation
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_nscore__itemsmodel_qbase_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#row)
///
/// @param self KNSCore__ItemsModel*
/// @param entry KNSCore__Entry*
///
int32_t k_nscore__itemsmodel_row(void* self, void* entry);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#addEntry)
///
/// @param self KNSCore__ItemsModel*
/// @param entry KNSCore__Entry*
///
void k_nscore__itemsmodel_add_entry(void* self, void* entry);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#removeEntry)
///
/// @param self KNSCore__ItemsModel*
/// @param entry KNSCore__Entry*
///
void k_nscore__itemsmodel_remove_entry(void* self, void* entry);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#hasPreviewImages)
///
/// @param self KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_has_preview_images(void* self);

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
void k_nscore__itemsmodel_load_preview(void* self, void* entry, int32_t type);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#loadPreview)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, KNSCore__Entry* entry, enum KNSCore__Entry__PreviewType type)
///
void k_nscore__itemsmodel_on_load_preview(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#slotEntryChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param entry KNSCore__Entry*
///
void k_nscore__itemsmodel_slot_entry_changed(void* self, void* entry);

/// [Upstream resources](https://api.kde.org/knscore-itemsmodel.html#slotEntriesLoaded)
///
/// @param self KNSCore__ItemsModel*
/// @param entries libqt_list /* of KNSCore__Entry* */
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
void k_nscore__itemsmodel_slot_entry_preview_loaded(void* self, void* entry, int32_t type);

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
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param column int
///
bool k_nscore__itemsmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self KNSCore__ItemsModel*
/// @param child QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex* func(KNSCore__ItemsModel* self, QModelIndex* child)
///
void k_nscore__itemsmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self KNSCore__ItemsModel*
/// @param child QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
int32_t k_nscore__itemsmodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(KNSCore__ItemsModel* self, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
int32_t k_nscore__itemsmodel_qbase_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_qbase_has_children(void* self, void* parent);

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
bool k_nscore__itemsmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

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
bool k_nscore__itemsmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
bool k_nscore__itemsmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_nscore__itemsmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_nscore__itemsmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

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
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KNSCore__ItemsModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KNSCore__ItemsModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_nscore__itemsmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void k_nscore__itemsmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
///
void k_nscore__itemsmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void k_nscore__itemsmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QPersistentModelIndex** parents)
///
void k_nscore__itemsmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_nscore__itemsmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_nscore__itemsmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void k_nscore__itemsmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QPersistentModelIndex** parents)
///
void k_nscore__itemsmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_nscore__itemsmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_nscore__itemsmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNSCore__ItemsModel*
///
const char* k_nscore__itemsmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNSCore__ItemsModel*
/// @param name char*
///
void k_nscore__itemsmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNSCore__ItemsModel*
///
bool k_nscore__itemsmodel_signals_blocked(void* self);

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
/// @param self KNSCore__ItemsModel*
///
QThread* k_nscore__itemsmodel_thread(void* self);

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
/// @param self KNSCore__ItemsModel*
///
libqt_list /* of QObject* */ k_nscore__itemsmodel_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_nscore__itemsmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__ItemsModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_nscore__itemsmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_nscore__itemsmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_nscore__itemsmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNSCore__ItemsModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_nscore__itemsmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNSCore__ItemsModel*
/// @param name const char*
///
QVariant* k_nscore__itemsmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KNSCore__ItemsModel*
///
const char** k_nscore__itemsmodel_dynamic_property_names(void* self);

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
/// @param self KNSCore__ItemsModel*
///
const QBindingStorage* k_nscore__itemsmodel_binding_storage2(void* self);

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
/// @param self KNSCore__ItemsModel*
/// @param classname const char*
///
bool k_nscore__itemsmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNSCore__ItemsModel*
///
void k_nscore__itemsmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__ItemsModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_nscore__itemsmodel_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_nscore__itemsmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__ItemsModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_nscore__itemsmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_qbase_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex* func(KNSCore__ItemsModel* self, int row, int column, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex* func(KNSCore__ItemsModel* self, int row, int column, QModelIndex* idx)
///
void k_nscore__itemsmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

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
bool k_nscore__itemsmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

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
bool k_nscore__itemsmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_nscore__itemsmodel_flags(void* self, void* index);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_nscore__itemsmodel_qbase_flags(void* self, void* index);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(KNSCore__ItemsModel* self, QModelIndex* index)
///
void k_nscore__itemsmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

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
bool k_nscore__itemsmodel_set_data(void* self, void* index, void* value, int role);

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
bool k_nscore__itemsmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_nscore__itemsmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_nscore__itemsmodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_nscore__itemsmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QVariant* func(KNSCore__ItemsModel* self, int section, enum Qt__Orientation orientation, int role)
///
void k_nscore__itemsmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

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
bool k_nscore__itemsmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

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
bool k_nscore__itemsmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_nscore__itemsmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ k_nscore__itemsmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ k_nscore__itemsmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback libqt_map /* of int to QVariant* */ func(KNSCore__ItemsModel* self, QModelIndex* index)
///
void k_nscore__itemsmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool k_nscore__itemsmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool k_nscore__itemsmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
///
void k_nscore__itemsmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
bool k_nscore__itemsmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
bool k_nscore__itemsmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* index)
///
void k_nscore__itemsmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
const char** k_nscore__itemsmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
const char** k_nscore__itemsmodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback const char** func()
///
void k_nscore__itemsmodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* k_nscore__itemsmodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* k_nscore__itemsmodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QMimeData* func(KNSCore__ItemsModel* self, QModelIndex** indexes)
///
void k_nscore__itemsmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
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
bool k_nscore__itemsmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
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
bool k_nscore__itemsmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_nscore__itemsmodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_nscore__itemsmodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func()
///
void k_nscore__itemsmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_nscore__itemsmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_nscore__itemsmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func()
///
void k_nscore__itemsmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

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
bool k_nscore__itemsmodel_insert_rows(void* self, int row, int count, void* parent);

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
bool k_nscore__itemsmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int row, int count, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

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
bool k_nscore__itemsmodel_insert_columns(void* self, int column, int count, void* parent);

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
bool k_nscore__itemsmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int column, int count, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

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
bool k_nscore__itemsmodel_remove_rows(void* self, int row, int count, void* parent);

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
bool k_nscore__itemsmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int row, int count, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

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
bool k_nscore__itemsmodel_remove_columns(void* self, int column, int count, void* parent);

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
bool k_nscore__itemsmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int column, int count, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

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
bool k_nscore__itemsmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

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
bool k_nscore__itemsmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_nscore__itemsmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
bool k_nscore__itemsmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

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
bool k_nscore__itemsmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_nscore__itemsmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
void k_nscore__itemsmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
void k_nscore__itemsmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param parent QModelIndex*
///
bool k_nscore__itemsmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* parent)
///
void k_nscore__itemsmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

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
void k_nscore__itemsmodel_qbase_sort(void* self, int column, int32_t order);

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
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
QModelIndex* k_nscore__itemsmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex* func(KNSCore__ItemsModel* self, QModelIndex* index)
///
void k_nscore__itemsmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ k_nscore__itemsmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ k_nscore__itemsmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex** func(KNSCore__ItemsModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_nscore__itemsmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
QSize* k_nscore__itemsmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
///
QSize* k_nscore__itemsmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QSize* func(KNSCore__ItemsModel* self, QModelIndex* index)
///
void k_nscore__itemsmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
libqt_map /* of int to char* */ k_nscore__itemsmodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
libqt_map /* of int to char* */ k_nscore__itemsmodel_qbase_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback libqt_map /* of int to char* */ func()
///
void k_nscore__itemsmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_nscore__itemsmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_nscore__itemsmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_nscore__itemsmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

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
bool k_nscore__itemsmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func()
///
void k_nscore__itemsmodel_on_submit(void* self, bool (*callback)());

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
void k_nscore__itemsmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func()
///
void k_nscore__itemsmodel_on_revert(void* self, void (*callback)());

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
void k_nscore__itemsmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func()
///
void k_nscore__itemsmodel_on_reset_internal_data(void* self, void (*callback)());

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
bool k_nscore__itemsmodel_qbase_event(void* self, void* event);

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
bool k_nscore__itemsmodel_qbase_event_filter(void* self, void* watched, void* event);

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
void k_nscore__itemsmodel_qbase_timer_event(void* self, void* event);

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
void k_nscore__itemsmodel_qbase_child_event(void* self, void* event);

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
void k_nscore__itemsmodel_qbase_custom_event(void* self, void* event);

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
void k_nscore__itemsmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
void k_nscore__itemsmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QMetaMethod* signal)
///
void k_nscore__itemsmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
void k_nscore__itemsmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
void k_nscore__itemsmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QMetaMethod* signal)
///
void k_nscore__itemsmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param column int
///
QModelIndex* k_nscore__itemsmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param row int
/// @param column int
///
QModelIndex* k_nscore__itemsmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex* func(KNSCore__ItemsModel* self, int row, int column)
///
void k_nscore__itemsmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void k_nscore__itemsmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void k_nscore__itemsmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex** indexes, QDataStream* stream)
///
void k_nscore__itemsmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

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
bool k_nscore__itemsmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

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
bool k_nscore__itemsmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_nscore__itemsmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

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
void k_nscore__itemsmodel_begin_insert_rows(void* self, void* parent, int first, int last);

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
void k_nscore__itemsmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

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
void k_nscore__itemsmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func()
///
void k_nscore__itemsmodel_on_end_insert_rows(void* self, void (*callback)());

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
void k_nscore__itemsmodel_begin_remove_rows(void* self, void* parent, int first, int last);

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
void k_nscore__itemsmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

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
void k_nscore__itemsmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func()
///
void k_nscore__itemsmodel_on_end_remove_rows(void* self, void (*callback)());

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
bool k_nscore__itemsmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

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
bool k_nscore__itemsmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_nscore__itemsmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
void k_nscore__itemsmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func()
///
void k_nscore__itemsmodel_on_end_move_rows(void* self, void (*callback)());

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
void k_nscore__itemsmodel_begin_insert_columns(void* self, void* parent, int first, int last);

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
void k_nscore__itemsmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

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
void k_nscore__itemsmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func()
///
void k_nscore__itemsmodel_on_end_insert_columns(void* self, void (*callback)());

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
void k_nscore__itemsmodel_begin_remove_columns(void* self, void* parent, int first, int last);

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
void k_nscore__itemsmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

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
void k_nscore__itemsmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func()
///
void k_nscore__itemsmodel_on_end_remove_columns(void* self, void (*callback)());

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
bool k_nscore__itemsmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

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
bool k_nscore__itemsmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_nscore__itemsmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
void k_nscore__itemsmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func()
///
void k_nscore__itemsmodel_on_end_move_columns(void* self, void (*callback)());

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
void k_nscore__itemsmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func()
///
void k_nscore__itemsmodel_on_begin_reset_model(void* self, void (*callback)());

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
void k_nscore__itemsmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func()
///
void k_nscore__itemsmodel_on_end_reset_model(void* self, void (*callback)());

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
void k_nscore__itemsmodel_change_persistent_index(void* self, void* from, void* to);

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
void k_nscore__itemsmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* from, QModelIndex* to)
///
void k_nscore__itemsmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void k_nscore__itemsmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void k_nscore__itemsmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex** from, QModelIndex** to)
///
void k_nscore__itemsmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
libqt_list /* of QModelIndex* */ k_nscore__itemsmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
libqt_list /* of QModelIndex* */ k_nscore__itemsmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QModelIndex** func()
///
void k_nscore__itemsmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
QObject* k_nscore__itemsmodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
QObject* k_nscore__itemsmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback QObject* func()
///
void k_nscore__itemsmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
int32_t k_nscore__itemsmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
///
int32_t k_nscore__itemsmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func()
///
void k_nscore__itemsmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal const char*
///
int32_t k_nscore__itemsmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal const char*
///
int32_t k_nscore__itemsmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback int32_t func(KNSCore__ItemsModel* self, const char* signal)
///
void k_nscore__itemsmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
bool k_nscore__itemsmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param signal QMetaMethod*
///
bool k_nscore__itemsmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__ItemsModel*
/// @param callback bool func(KNSCore__ItemsModel* self, QMetaMethod* signal)
///
void k_nscore__itemsmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* parent, int first, int last)
///
void k_nscore__itemsmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

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
void k_nscore__itemsmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_nscore__itemsmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_nscore__itemsmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ItemsModel*
/// @param callback void func(KNSCore__ItemsModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_nscore__itemsmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

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
