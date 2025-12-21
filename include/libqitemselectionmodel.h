#pragma once
#ifndef SRC_QT6C_LIBQITEMSELECTIONMODEL_H
#define SRC_QT6C_LIBQITEMSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html)

/// q_itemselectionrange_new constructs a new QItemSelectionRange object.
///
QItemSelectionRange* q_itemselectionrange_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html)

/// q_itemselectionrange_new2 constructs a new QItemSelectionRange object.
///
/// @param topL QModelIndex*
/// @param bottomR QModelIndex*
///
QItemSelectionRange* q_itemselectionrange_new2(void* topL, void* bottomR);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html)

/// q_itemselectionrange_new3 constructs a new QItemSelectionRange object.
///
/// @param index QModelIndex*
///
QItemSelectionRange* q_itemselectionrange_new3(void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html)

/// q_itemselectionrange_new4 constructs a new QItemSelectionRange object.
///
/// @param param1 QItemSelectionRange*
///
QItemSelectionRange* q_itemselectionrange_new4(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#swap)
///
/// @param self QItemSelectionRange*
/// @param other QItemSelectionRange*
///
void q_itemselectionrange_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#top)
///
/// @param self QItemSelectionRange*
///
int32_t q_itemselectionrange_top(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#left)
///
/// @param self QItemSelectionRange*
///
int32_t q_itemselectionrange_left(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#bottom)
///
/// @param self QItemSelectionRange*
///
int32_t q_itemselectionrange_bottom(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#right)
///
/// @param self QItemSelectionRange*
///
int32_t q_itemselectionrange_right(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#width)
///
/// @param self QItemSelectionRange*
///
int32_t q_itemselectionrange_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#height)
///
/// @param self QItemSelectionRange*
///
int32_t q_itemselectionrange_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#topLeft)
///
/// @param self QItemSelectionRange*
///
const QPersistentModelIndex* q_itemselectionrange_top_left(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#bottomRight)
///
/// @param self QItemSelectionRange*
///
const QPersistentModelIndex* q_itemselectionrange_bottom_right(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#parent)
///
/// @param self QItemSelectionRange*
///
QModelIndex* q_itemselectionrange_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#model)
///
/// @param self QItemSelectionRange*
///
const QAbstractItemModel* q_itemselectionrange_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#contains)
///
/// @param self QItemSelectionRange*
/// @param index QModelIndex*
///
bool q_itemselectionrange_contains(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#contains)
///
/// @param self QItemSelectionRange*
/// @param row int
/// @param column int
/// @param parentIndex QModelIndex*
///
bool q_itemselectionrange_contains2(void* self, int row, int column, void* parentIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#intersects)
///
/// @param self QItemSelectionRange*
/// @param other QItemSelectionRange*
///
bool q_itemselectionrange_intersects(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#intersected)
///
/// @param self QItemSelectionRange*
/// @param other QItemSelectionRange*
///
QItemSelectionRange* q_itemselectionrange_intersected(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#isValid)
///
/// @param self QItemSelectionRange*
///
bool q_itemselectionrange_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#isEmpty)
///
/// @param self QItemSelectionRange*
///
bool q_itemselectionrange_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#indexes)
///
/// @param self QItemSelectionRange*
///
libqt_list /* of QModelIndex* */ q_itemselectionrange_indexes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#dtor.QItemSelectionRange)
///
/// Delete this object from C++ memory.
///
/// @param self QItemSelectionRange*
///
void q_itemselectionrange_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html)

/// q_itemselectionmodel_new constructs a new QItemSelectionModel object.
///
QItemSelectionModel* q_itemselectionmodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html)

/// q_itemselectionmodel_new2 constructs a new QItemSelectionModel object.
///
/// @param model QAbstractItemModel*
/// @param parent QObject*
///
QItemSelectionModel* q_itemselectionmodel_new2(void* model, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html)

/// q_itemselectionmodel_new3 constructs a new QItemSelectionModel object.
///
/// @param model QAbstractItemModel*
///
QItemSelectionModel* q_itemselectionmodel_new3(void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QItemSelectionModel*
///
const QMetaObject* q_itemselectionmodel_meta_object(void* self);

/// @param self QItemSelectionModel*
/// @param param1 const char*
///
void* q_itemselectionmodel_metacast(void* self, const char* param1);

/// @param self QItemSelectionModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_itemselectionmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QItemSelectionModel*
/// @param callback int32_t func(QItemSelectionModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_itemselectionmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QItemSelectionModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_itemselectionmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_itemselectionmodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentIndex)
///
/// @param self QItemSelectionModel*
///
QModelIndex* q_itemselectionmodel_current_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isSelected)
///
/// @param self QItemSelectionModel*
/// @param index QModelIndex*
///
bool q_itemselectionmodel_is_selected(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
///
/// @param self QItemSelectionModel*
/// @param row int
///
bool q_itemselectionmodel_is_row_selected(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
///
/// @param self QItemSelectionModel*
/// @param column int
///
bool q_itemselectionmodel_is_column_selected(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
///
/// @param self QItemSelectionModel*
/// @param row int
///
bool q_itemselectionmodel_row_intersects_selection(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
///
/// @param self QItemSelectionModel*
/// @param column int
///
bool q_itemselectionmodel_column_intersects_selection(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#hasSelection)
///
/// @param self QItemSelectionModel*
///
bool q_itemselectionmodel_has_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedIndexes)
///
/// @param self QItemSelectionModel*
///
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_indexes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
///
/// @param self QItemSelectionModel*
///
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
///
/// @param self QItemSelectionModel*
///
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selection)
///
/// @param self QItemSelectionModel*
///
const QItemSelection* q_itemselectionmodel_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
///
/// @param self QItemSelectionModel*
///
const QAbstractItemModel* q_itemselectionmodel_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
///
/// @param self QItemSelectionModel*
///
QAbstractItemModel* q_itemselectionmodel_model2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setModel)
///
/// @param self QItemSelectionModel*
/// @param model QAbstractItemModel*
///
void q_itemselectionmodel_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
///
/// @param self QItemSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_itemselectionmodel_set_current_index(void* self, void* index, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
///
/// Allows for overriding the related default method
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QModelIndex* index, flag of enum QItemSelectionModel__SelectionFlag command)
///
void q_itemselectionmodel_on_set_current_index(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
///
/// Base class method implementation
///
/// @param self QItemSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_itemselectionmodel_qbase_set_current_index(void* self, void* index, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
///
/// @param self QItemSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_itemselectionmodel_select(void* self, void* index, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
///
/// Allows for overriding the related default method
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QModelIndex* index, flag of enum QItemSelectionModel__SelectionFlag command)
///
void q_itemselectionmodel_on_select(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
///
/// Base class method implementation
///
/// @param self QItemSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_itemselectionmodel_qbase_select(void* self, void* index, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
///
/// @param self QItemSelectionModel*
/// @param selection QItemSelection*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_itemselectionmodel_select2(void* self, void* selection, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
///
/// Allows for overriding the related default method
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QItemSelection* selection, flag of enum QItemSelectionModel__SelectionFlag command)
///
void q_itemselectionmodel_on_select2(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
///
/// Base class method implementation
///
/// @param self QItemSelectionModel*
/// @param selection QItemSelection*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_itemselectionmodel_qbase_select2(void* self, void* selection, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self QItemSelectionModel*
/// @param callback void func()
///
void q_itemselectionmodel_on_clear(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
///
/// Base class method implementation
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_qbase_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self QItemSelectionModel*
/// @param callback void func()
///
void q_itemselectionmodel_on_reset(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
///
/// Base class method implementation
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_qbase_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearSelection)
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_clear_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_clear_current_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
///
/// Allows for overriding the related default method
///
/// @param self QItemSelectionModel*
/// @param callback void func()
///
void q_itemselectionmodel_on_clear_current_index(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
///
/// Base class method implementation
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_qbase_clear_current_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
///
/// @param self QItemSelectionModel*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_itemselectionmodel_selection_changed(void* self, void* selected, void* deselected);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QItemSelection* selected, QItemSelection* deselected)
///
void q_itemselectionmodel_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
///
/// @param self QItemSelectionModel*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_itemselectionmodel_current_changed(void* self, void* current, void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous)
///
void q_itemselectionmodel_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
///
/// @param self QItemSelectionModel*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_itemselectionmodel_current_row_changed(void* self, void* current, void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous)
///
void q_itemselectionmodel_on_current_row_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
///
/// @param self QItemSelectionModel*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_itemselectionmodel_current_column_changed(void* self, void* current, void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous)
///
void q_itemselectionmodel_on_current_column_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
///
/// @param self QItemSelectionModel*
/// @param model QAbstractItemModel*
///
void q_itemselectionmodel_model_changed(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QAbstractItemModel* model)
///
void q_itemselectionmodel_on_model_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
///
/// @param self QItemSelectionModel*
/// @param newSelection QItemSelection*
/// @param oldSelection QItemSelection*
///
void q_itemselectionmodel_emit_selection_changed(void* self, void* newSelection, void* oldSelection);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
///
/// Allows for overriding the related default method
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QItemSelection* newSelection, QItemSelection* oldSelection)
///
void q_itemselectionmodel_on_emit_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
///
/// Base class method implementation
///
/// @param self QItemSelectionModel*
/// @param newSelection QItemSelection*
/// @param oldSelection QItemSelection*
///
void q_itemselectionmodel_qbase_emit_selection_changed(void* self, void* newSelection, void* oldSelection);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_itemselectionmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_itemselectionmodel_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
///
/// @param self QItemSelectionModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_itemselectionmodel_is_row_selected2(void* self, int row, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
///
/// @param self QItemSelectionModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_itemselectionmodel_is_column_selected2(void* self, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
///
/// @param self QItemSelectionModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_itemselectionmodel_row_intersects_selection2(void* self, int row, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
///
/// @param self QItemSelectionModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_itemselectionmodel_column_intersects_selection2(void* self, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
///
/// @param self QItemSelectionModel*
/// @param column int
///
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_rows1(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
///
/// @param self QItemSelectionModel*
/// @param row int
///
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_columns1(void* self, int row);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QItemSelectionModel*
///
const char* q_itemselectionmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QItemSelectionModel*
/// @param name char*
///
void q_itemselectionmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QItemSelectionModel*
///
bool q_itemselectionmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QItemSelectionModel*
///
bool q_itemselectionmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QItemSelectionModel*
///
bool q_itemselectionmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QItemSelectionModel*
///
bool q_itemselectionmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QItemSelectionModel*
/// @param b bool
///
bool q_itemselectionmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QItemSelectionModel*
///
QThread* q_itemselectionmodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QItemSelectionModel*
/// @param thread QThread*
///
bool q_itemselectionmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemSelectionModel*
/// @param interval int
///
int32_t q_itemselectionmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QItemSelectionModel*
/// @param id int
///
void q_itemselectionmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QItemSelectionModel*
/// @param id enum Qt__TimerId
///
void q_itemselectionmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QItemSelectionModel*
///
libqt_list /* of QObject* */ q_itemselectionmodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QItemSelectionModel*
/// @param parent QObject*
///
void q_itemselectionmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QItemSelectionModel*
/// @param filterObj QObject*
///
void q_itemselectionmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QItemSelectionModel*
/// @param obj QObject*
///
void q_itemselectionmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_itemselectionmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QItemSelectionModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_itemselectionmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_itemselectionmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_itemselectionmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QItemSelectionModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_itemselectionmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QItemSelectionModel*
/// @param name const char*
///
QVariant* q_itemselectionmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QItemSelectionModel*
///
const char** q_itemselectionmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QItemSelectionModel*
///
QBindingStorage* q_itemselectionmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QItemSelectionModel*
///
const QBindingStorage* q_itemselectionmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self)
///
void q_itemselectionmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QItemSelectionModel*
///
QObject* q_itemselectionmodel_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QItemSelectionModel*
/// @param classname const char*
///
bool q_itemselectionmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QItemSelectionModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_itemselectionmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemSelectionModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_itemselectionmodel_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_itemselectionmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QItemSelectionModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_itemselectionmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemSelectionModel*
/// @param param1 QObject*
///
void q_itemselectionmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QObject* param1)
///
void q_itemselectionmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param event QEvent*
///
bool q_itemselectionmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param event QEvent*
///
bool q_itemselectionmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback bool func(QItemSelectionModel* self, QEvent* event)
///
void q_itemselectionmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_itemselectionmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_itemselectionmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback bool func(QItemSelectionModel* self, QObject* watched, QEvent* event)
///
void q_itemselectionmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param event QTimerEvent*
///
void q_itemselectionmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param event QTimerEvent*
///
void q_itemselectionmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QTimerEvent* event)
///
void q_itemselectionmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param event QChildEvent*
///
void q_itemselectionmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param event QChildEvent*
///
void q_itemselectionmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QChildEvent* event)
///
void q_itemselectionmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param event QEvent*
///
void q_itemselectionmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param event QEvent*
///
void q_itemselectionmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QEvent* event)
///
void q_itemselectionmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param signal QMetaMethod*
///
void q_itemselectionmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param signal QMetaMethod*
///
void q_itemselectionmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QMetaMethod* signal)
///
void q_itemselectionmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param signal QMetaMethod*
///
void q_itemselectionmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param signal QMetaMethod*
///
void q_itemselectionmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, QMetaMethod* signal)
///
void q_itemselectionmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
///
QObject* q_itemselectionmodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
///
QObject* q_itemselectionmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback QObject* func()
///
void q_itemselectionmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
///
int32_t q_itemselectionmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
///
int32_t q_itemselectionmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback int32_t func()
///
void q_itemselectionmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param signal const char*
///
int32_t q_itemselectionmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param signal const char*
///
int32_t q_itemselectionmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback int32_t func(QItemSelectionModel* self, const char* signal)
///
void q_itemselectionmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param signal QMetaMethod*
///
bool q_itemselectionmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param signal QMetaMethod*
///
bool q_itemselectionmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemSelectionModel*
/// @param callback bool func(QItemSelectionModel* self, QMetaMethod* signal)
///
void q_itemselectionmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QItemSelectionModel*
/// @param callback void func(QItemSelectionModel* self, const char* objectName)
///
void q_itemselectionmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#dtor.QItemSelectionModel)
///
/// Delete this object from C++ memory.
///
/// @param self QItemSelectionModel*
///
void q_itemselectionmodel_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html)

/// q_itemselection_new constructs a new QItemSelection object.
///
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
QItemSelection* q_itemselection_new(void* topLeft, void* bottomRight);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html)

/// q_itemselection_new2 constructs a new QItemSelection object.
///
QItemSelection* q_itemselection_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html)

/// q_itemselection_new3 constructs a new QItemSelection object.
///
/// @param param1 QItemSelection*
///
QItemSelection* q_itemselection_new3(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#select)
///
/// @param self QItemSelection*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_itemselection_select(void* self, void* topLeft, void* bottomRight);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#contains)
///
/// @param self QItemSelection*
/// @param index QModelIndex*
///
bool q_itemselection_contains(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#indexes)
///
/// @param self QItemSelection*
///
libqt_list /* of QModelIndex* */ q_itemselection_indexes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#merge)
///
/// @param self QItemSelection*
/// @param other QItemSelection*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_itemselection_merge(void* self, void* other, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#split)
///
/// @param range QItemSelectionRange*
/// @param other QItemSelectionRange*
/// @param result QItemSelection*
///
void q_itemselection_split(void* range, void* other, void* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#dtor.QItemSelection)
///
/// Delete this object from C++ memory.
///
/// @param self QItemSelection*
///
void q_itemselection_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#public-types)

typedef enum {
    QITEMSELECTIONMODEL_SELECTIONFLAG_NOUPDATE = 0,
    QITEMSELECTIONMODEL_SELECTIONFLAG_CLEAR = 1,
    QITEMSELECTIONMODEL_SELECTIONFLAG_SELECT = 2,
    QITEMSELECTIONMODEL_SELECTIONFLAG_DESELECT = 4,
    QITEMSELECTIONMODEL_SELECTIONFLAG_TOGGLE = 8,
    QITEMSELECTIONMODEL_SELECTIONFLAG_CURRENT = 16,
    QITEMSELECTIONMODEL_SELECTIONFLAG_ROWS = 32,
    QITEMSELECTIONMODEL_SELECTIONFLAG_COLUMNS = 64,
    QITEMSELECTIONMODEL_SELECTIONFLAG_SELECTCURRENT = 18,
    QITEMSELECTIONMODEL_SELECTIONFLAG_TOGGLECURRENT = 24,
    QITEMSELECTIONMODEL_SELECTIONFLAG_CLEARANDSELECT = 3
} QItemSelectionModel__SelectionFlag;

#endif
