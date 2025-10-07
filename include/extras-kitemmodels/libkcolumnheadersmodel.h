#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSQT6C_LIBKCOLUMNHEADERSMODEL_H
#define SRC_EXTRAS_KITEMMODELSQT6C_LIBKCOLUMNHEADERSMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcolumnheadersmodel.html

/// k_columnheadersmodel_new constructs a new KColumnHeadersModel object.
///
KColumnHeadersModel* k_columnheadersmodel_new();

/// k_columnheadersmodel_new2 constructs a new KColumnHeadersModel object.
///
/// @param parent QObject*
KColumnHeadersModel* k_columnheadersmodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KColumnHeadersModel*
const QMetaObject* k_columnheadersmodel_meta_object(void* self);

/// @param self KColumnHeadersModel*
/// @param param1 const char*
void* k_columnheadersmodel_metacast(void* self, const char* param1);

/// @param self KColumnHeadersModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_columnheadersmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func(KColumnHeadersModel* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_columnheadersmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_columnheadersmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_columnheadersmodel_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#rowCount)
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
int32_t k_columnheadersmodel_row_count(void* self, void* parent);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func(KColumnHeadersModel* self, QModelIndex* parent)
void k_columnheadersmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
int32_t k_columnheadersmodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#data)
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param role int
QVariant* k_columnheadersmodel_data(void* self, void* index, int role);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback QVariant* func(KColumnHeadersModel* self, QModelIndex* index, int role)
void k_columnheadersmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#data)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param role int
QVariant* k_columnheadersmodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#roleNames)
///
/// @param self KColumnHeadersModel*
libqt_map /* of int to char* */ k_columnheadersmodel_role_names(void* self);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback libqt_map /* of int to char* */ func()
void k_columnheadersmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
libqt_map /* of int to char* */ k_columnheadersmodel_qbase_role_names(void* self);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#sourceModel)
///
/// @param self KColumnHeadersModel*
QAbstractItemModel* k_columnheadersmodel_source_model(void* self);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#setSourceModel)
///
/// @param self KColumnHeadersModel*
/// @param newSourceModel QAbstractItemModel*
void k_columnheadersmodel_set_source_model(void* self, void* newSourceModel);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#sortColumn)
///
/// @param self KColumnHeadersModel*
int32_t k_columnheadersmodel_sort_column(void* self);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#setSortColumn)
///
/// @param self KColumnHeadersModel*
/// @param newSortColumn int
void k_columnheadersmodel_set_sort_column(void* self, int newSortColumn);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#sortOrder)
///
/// @param self KColumnHeadersModel*
///
/// @return enum Qt__SortOrder
int32_t k_columnheadersmodel_sort_order(void* self);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#setSortOrder)
///
/// @param self KColumnHeadersModel*
/// @param newSortOrder enum Qt__SortOrder
void k_columnheadersmodel_set_sort_order(void* self, int32_t newSortOrder);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#sourceModelChanged)
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_source_model_changed(void* self);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#sourceModelChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
void k_columnheadersmodel_on_source_model_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#sortColumnChanged)
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_sort_column_changed(void* self);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#sortColumnChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
void k_columnheadersmodel_on_sort_column_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#sortOrderChanged)
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_sort_order_changed(void* self);

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#sortOrderChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
void k_columnheadersmodel_on_sort_order_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_columnheadersmodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_columnheadersmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
bool k_columnheadersmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self KColumnHeadersModel*
/// @param child QModelIndex*
QModelIndex* k_columnheadersmodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex* func(KColumnHeadersModel* self, QModelIndex* child)
void k_columnheadersmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param child QModelIndex*
QModelIndex* k_columnheadersmodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
int32_t k_columnheadersmodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func(KColumnHeadersModel* self, QModelIndex* parent)
void k_columnheadersmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
int32_t k_columnheadersmodel_qbase_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
bool k_columnheadersmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* parent)
void k_columnheadersmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
bool k_columnheadersmodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KColumnHeadersModel*
/// @param row int
bool k_columnheadersmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KColumnHeadersModel*
/// @param column int
bool k_columnheadersmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KColumnHeadersModel*
/// @param row int
bool k_columnheadersmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KColumnHeadersModel*
/// @param column int
bool k_columnheadersmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_columnheadersmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_columnheadersmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
bool k_columnheadersmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColumnHeadersModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
void k_columnheadersmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
void k_columnheadersmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KColumnHeadersModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
void k_columnheadersmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, enum Qt__Orientation orientation, int first, int last)
void k_columnheadersmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
void k_columnheadersmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
void k_columnheadersmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_columnheadersmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param parent QModelIndex*
bool k_columnheadersmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param parent QModelIndex*
bool k_columnheadersmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param parent QModelIndex*
bool k_columnheadersmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param parent QModelIndex*
bool k_columnheadersmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
bool k_columnheadersmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColumnHeadersModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void k_columnheadersmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
void k_columnheadersmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void k_columnheadersmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QPersistentModelIndex** parents)
void k_columnheadersmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void k_columnheadersmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void k_columnheadersmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void k_columnheadersmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QPersistentModelIndex** parents)
void k_columnheadersmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void k_columnheadersmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void k_columnheadersmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KColumnHeadersModel*
const char* k_columnheadersmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KColumnHeadersModel*
/// @param name char*
void k_columnheadersmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KColumnHeadersModel*
bool k_columnheadersmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KColumnHeadersModel*
bool k_columnheadersmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KColumnHeadersModel*
bool k_columnheadersmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KColumnHeadersModel*
bool k_columnheadersmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KColumnHeadersModel*
/// @param b bool
bool k_columnheadersmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KColumnHeadersModel*
QThread* k_columnheadersmodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KColumnHeadersModel*
/// @param thread QThread*
bool k_columnheadersmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColumnHeadersModel*
/// @param interval int
int32_t k_columnheadersmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KColumnHeadersModel*
/// @param id int
void k_columnheadersmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KColumnHeadersModel*
/// @param id enum Qt__TimerId
void k_columnheadersmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KColumnHeadersModel*
libqt_list /* of QObject* */ k_columnheadersmodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KColumnHeadersModel*
/// @param parent QObject*
void k_columnheadersmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KColumnHeadersModel*
/// @param filterObj QObject*
void k_columnheadersmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KColumnHeadersModel*
/// @param obj QObject*
void k_columnheadersmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_columnheadersmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KColumnHeadersModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_columnheadersmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_columnheadersmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_columnheadersmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KColumnHeadersModel*
/// @param name const char*
/// @param value QVariant*
bool k_columnheadersmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KColumnHeadersModel*
/// @param name const char*
QVariant* k_columnheadersmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KColumnHeadersModel*
const char** k_columnheadersmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KColumnHeadersModel*
QBindingStorage* k_columnheadersmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KColumnHeadersModel*
const QBindingStorage* k_columnheadersmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
void k_columnheadersmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KColumnHeadersModel*
/// @param classname const char*
bool k_columnheadersmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KColumnHeadersModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_columnheadersmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColumnHeadersModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_columnheadersmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_columnheadersmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KColumnHeadersModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_columnheadersmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColumnHeadersModel*
/// @param param1 QObject*
void k_columnheadersmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QObject* param1)
void k_columnheadersmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* k_columnheadersmodel_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* k_columnheadersmodel_qbase_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex* func(KColumnHeadersModel* self, int row, int column, QModelIndex* parent)
void k_columnheadersmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* k_columnheadersmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* k_columnheadersmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex* func(KColumnHeadersModel* self, int row, int column, QModelIndex* idx)
void k_columnheadersmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_columnheadersmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_columnheadersmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void k_columnheadersmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t k_columnheadersmodel_flags(void* self, void* index);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t k_columnheadersmodel_qbase_flags(void* self, void* index);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func(KColumnHeadersModel* self, QModelIndex* index)
void k_columnheadersmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool k_columnheadersmodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool k_columnheadersmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* index, QVariant* value, int role)
void k_columnheadersmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* k_columnheadersmodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* k_columnheadersmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QVariant* func(KColumnHeadersModel* self, int section, enum Qt__Orientation orientation, int role)
void k_columnheadersmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool k_columnheadersmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool k_columnheadersmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
void k_columnheadersmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ k_columnheadersmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ k_columnheadersmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback libqt_map /* of int to QVariant* */ func(KColumnHeadersModel* self, QModelIndex* index)
void k_columnheadersmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool k_columnheadersmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool k_columnheadersmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
void k_columnheadersmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
bool k_columnheadersmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
bool k_columnheadersmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* index)
void k_columnheadersmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
const char** k_columnheadersmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
const char** k_columnheadersmodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback const char** func()
void k_columnheadersmodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* k_columnheadersmodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* k_columnheadersmodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QMimeData* func(KColumnHeadersModel* self, QModelIndex** indexes)
void k_columnheadersmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_columnheadersmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_columnheadersmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void k_columnheadersmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
/// @return flag of enum Qt__DropAction
int32_t k_columnheadersmodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
/// @return flag of enum Qt__DropAction
int32_t k_columnheadersmodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func()
void k_columnheadersmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
/// @return flag of enum Qt__DropAction
int32_t k_columnheadersmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
/// @return flag of enum Qt__DropAction
int32_t k_columnheadersmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func()
void k_columnheadersmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_columnheadersmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_columnheadersmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int row, int count, QModelIndex* parent)
void k_columnheadersmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_columnheadersmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_columnheadersmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int column, int count, QModelIndex* parent)
void k_columnheadersmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_columnheadersmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_columnheadersmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int row, int count, QModelIndex* parent)
void k_columnheadersmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_columnheadersmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_columnheadersmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int column, int count, QModelIndex* parent)
void k_columnheadersmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_columnheadersmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_columnheadersmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
void k_columnheadersmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_columnheadersmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_columnheadersmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
void k_columnheadersmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
void k_columnheadersmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
void k_columnheadersmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent)
void k_columnheadersmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
bool k_columnheadersmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
bool k_columnheadersmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* parent)
void k_columnheadersmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param order enum Qt__SortOrder
void k_columnheadersmodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param order enum Qt__SortOrder
void k_columnheadersmodel_qbase_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, int column, enum Qt__SortOrder order)
void k_columnheadersmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
QModelIndex* k_columnheadersmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
QModelIndex* k_columnheadersmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex* func(KColumnHeadersModel* self, QModelIndex* index)
void k_columnheadersmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ k_columnheadersmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ k_columnheadersmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex** func(KColumnHeadersModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
void k_columnheadersmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
QSize* k_columnheadersmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
QSize* k_columnheadersmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QSize* func(KColumnHeadersModel* self, QModelIndex* index)
void k_columnheadersmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void k_columnheadersmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void k_columnheadersmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
void k_columnheadersmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
bool k_columnheadersmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
bool k_columnheadersmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func()
void k_columnheadersmodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
void k_columnheadersmodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
void k_columnheadersmodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QEvent*
bool k_columnheadersmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QEvent*
bool k_columnheadersmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QEvent* event)
void k_columnheadersmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param watched QObject*
/// @param event QEvent*
bool k_columnheadersmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param watched QObject*
/// @param event QEvent*
bool k_columnheadersmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QObject* watched, QEvent* event)
void k_columnheadersmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QTimerEvent*
void k_columnheadersmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QTimerEvent*
void k_columnheadersmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QTimerEvent* event)
void k_columnheadersmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QChildEvent*
void k_columnheadersmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QChildEvent*
void k_columnheadersmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QChildEvent* event)
void k_columnheadersmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QEvent*
void k_columnheadersmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QEvent*
void k_columnheadersmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QEvent* event)
void k_columnheadersmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
void k_columnheadersmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
void k_columnheadersmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QMetaMethod* signal)
void k_columnheadersmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
void k_columnheadersmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
void k_columnheadersmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QMetaMethod* signal)
void k_columnheadersmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
QModelIndex* k_columnheadersmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
QModelIndex* k_columnheadersmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex* func(KColumnHeadersModel* self, int row, int column)
void k_columnheadersmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void k_columnheadersmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void k_columnheadersmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex** indexes, QDataStream* stream)
void k_columnheadersmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool k_columnheadersmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool k_columnheadersmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
void k_columnheadersmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_columnheadersmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_columnheadersmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
void k_columnheadersmodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_columnheadersmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_columnheadersmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
void k_columnheadersmodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool k_columnheadersmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool k_columnheadersmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
void k_columnheadersmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
void k_columnheadersmodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_columnheadersmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_columnheadersmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
void k_columnheadersmodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_columnheadersmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_columnheadersmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
void k_columnheadersmodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool k_columnheadersmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool k_columnheadersmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
void k_columnheadersmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
void k_columnheadersmodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
void k_columnheadersmodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
void k_columnheadersmodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void k_columnheadersmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void k_columnheadersmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* from, QModelIndex* to)
void k_columnheadersmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void k_columnheadersmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void k_columnheadersmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex** from, QModelIndex** to)
void k_columnheadersmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
libqt_list /* of QModelIndex* */ k_columnheadersmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
libqt_list /* of QModelIndex* */ k_columnheadersmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex** func()
void k_columnheadersmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
QObject* k_columnheadersmodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
QObject* k_columnheadersmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QObject* func()
void k_columnheadersmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
int32_t k_columnheadersmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
int32_t k_columnheadersmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func()
void k_columnheadersmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal const char*
int32_t k_columnheadersmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal const char*
int32_t k_columnheadersmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func(KColumnHeadersModel* self, const char* signal)
void k_columnheadersmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
bool k_columnheadersmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
bool k_columnheadersmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QMetaMethod* signal)
void k_columnheadersmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
void k_columnheadersmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
void k_columnheadersmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
void k_columnheadersmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void k_columnheadersmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void k_columnheadersmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void k_columnheadersmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void k_columnheadersmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, const char* objectName)
void k_columnheadersmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kcolumnheadersmodel.html#dtor.KColumnHeadersModel)
///
/// Delete this object from C++ memory.
///
/// @param self KColumnHeadersModel*
void k_columnheadersmodel_delete(void* self);

/// https://api.kde.org/kcolumnheadersmodel.html#types

typedef enum {
    KCOLUMNHEADERSMODEL_EXTRAROLES_SORTROLE = 18714894
} KColumnHeadersModel__ExtraRoles;

#endif
