#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFSEARCHMODEL_H
#define SRC_PDFQT6C_LIBQPDFSEARCHMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfsearchmodel.html

/// q_pdfsearchmodel_new constructs a new QPdfSearchModel object.
///
///
QPdfSearchModel* q_pdfsearchmodel_new();

/// q_pdfsearchmodel_new2 constructs a new QPdfSearchModel object.
///
/// ``` QObject* parent ```
QPdfSearchModel* q_pdfsearchmodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPdfSearchModel* self ```
const QMetaObject* q_pdfsearchmodel_meta_object(void* self);

/// ``` QPdfSearchModel* self, const char* param1 ```
void* q_pdfsearchmodel_metacast(void* self, const char* param1);

/// ``` QPdfSearchModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfsearchmodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPdfSearchModel* self, int32_t (*slot)(QPdfSearchModel*, enum QMetaObject__Call, int, void*) ```
void q_pdfsearchmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPdfSearchModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfsearchmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pdfsearchmodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#resultsOnPage)
///
/// ``` QPdfSearchModel* self, int page ```
libqt_list /* of QPdfLink* */ q_pdfsearchmodel_results_on_page(void* self, int page);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#resultAtIndex)
///
/// ``` QPdfSearchModel* self, int index ```
QPdfLink* q_pdfsearchmodel_result_at_index(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#document)
///
/// ``` QPdfSearchModel* self ```
QPdfDocument* q_pdfsearchmodel_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#searchString)
///
/// ``` QPdfSearchModel* self ```
const char* q_pdfsearchmodel_search_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#roleNames)
///
/// ``` QPdfSearchModel* self ```
libqt_map /* of int to char* */ q_pdfsearchmodel_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// ``` QPdfSearchModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_pdfsearchmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#roleNames)
///
/// Base class method implementation
///
/// ``` QPdfSearchModel* self ```
libqt_map /* of int to char* */ q_pdfsearchmodel_qbase_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#rowCount)
///
/// ``` QPdfSearchModel* self, QModelIndex* parent ```
int32_t q_pdfsearchmodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// ``` QPdfSearchModel* self, int32_t (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#rowCount)
///
/// Base class method implementation
///
/// ``` QPdfSearchModel* self, QModelIndex* parent ```
int32_t q_pdfsearchmodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#data)
///
/// ``` QPdfSearchModel* self, QModelIndex* index, int role ```
QVariant* q_pdfsearchmodel_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#data)
///
/// Allows for overriding the related default method
///
/// ``` QPdfSearchModel* self, QVariant* (*slot)(QPdfSearchModel*, QModelIndex*, int) ```
void q_pdfsearchmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#data)
///
/// Base class method implementation
///
/// ``` QPdfSearchModel* self, QModelIndex* index, int role ```
QVariant* q_pdfsearchmodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#count)
///
/// ``` QPdfSearchModel* self ```
int32_t q_pdfsearchmodel_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#setSearchString)
///
/// ``` QPdfSearchModel* self, const char* searchString ```
void q_pdfsearchmodel_set_search_string(void* self, const char* searchString);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#setDocument)
///
/// ``` QPdfSearchModel* self, QPdfDocument* document ```
void q_pdfsearchmodel_set_document(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#documentChanged)
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_document_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#documentChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*) ```
void q_pdfsearchmodel_on_document_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#searchStringChanged)
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_search_string_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#searchStringChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*) ```
void q_pdfsearchmodel_on_search_string_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#countChanged)
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#countChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*) ```
void q_pdfsearchmodel_on_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#updatePage)
///
/// ``` QPdfSearchModel* self, int page ```
void q_pdfsearchmodel_update_page(void* self, int page);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#updatePage)
///
/// Allows for overriding the related default method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, int) ```
void q_pdfsearchmodel_on_update_page(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#updatePage)
///
/// Base class method implementation
///
/// ``` QPdfSearchModel* self, int page ```
void q_pdfsearchmodel_qbase_update_page(void* self, int page);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#timerEvent)
///
/// ``` QPdfSearchModel* self, QTimerEvent* event ```
void q_pdfsearchmodel_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QTimerEvent*) ```
void q_pdfsearchmodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QPdfSearchModel* self, QTimerEvent* event ```
void q_pdfsearchmodel_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pdfsearchmodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pdfsearchmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QPdfSearchModel* self, int row, int column ```
bool q_pdfsearchmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// ``` QPdfSearchModel* self, QModelIndex* child ```
QModelIndex* q_pdfsearchmodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// ``` QPdfSearchModel* self, QModelIndex* (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// ``` QPdfSearchModel* self, QModelIndex* child ```
QModelIndex* q_pdfsearchmodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// ``` QPdfSearchModel* self, QModelIndex* parent ```
int32_t q_pdfsearchmodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// ``` QPdfSearchModel* self, int32_t (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Base class method implementation
///
/// ``` QPdfSearchModel* self, QModelIndex* parent ```
int32_t q_pdfsearchmodel_qbase_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// ``` QPdfSearchModel* self, QModelIndex* parent ```
bool q_pdfsearchmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// ``` QPdfSearchModel* self, QModelIndex* parent ```
bool q_pdfsearchmodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QPdfSearchModel* self, int row ```
bool q_pdfsearchmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QPdfSearchModel* self, int column ```
bool q_pdfsearchmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QPdfSearchModel* self, int row ```
bool q_pdfsearchmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QPdfSearchModel* self, int column ```
bool q_pdfsearchmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QPdfSearchModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfsearchmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QPdfSearchModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfsearchmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
bool q_pdfsearchmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QPdfSearchModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_pdfsearchmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, QModelIndex*) ```
void q_pdfsearchmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QPdfSearchModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_pdfsearchmodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, enum Qt__Orientation, int, int) ```
void q_pdfsearchmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*) ```
void q_pdfsearchmodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*) ```
void q_pdfsearchmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QPdfSearchModel* self, int row, int column, QModelIndex* parent ```
bool q_pdfsearchmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QPdfSearchModel* self, int row, QModelIndex* parent ```
bool q_pdfsearchmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QPdfSearchModel* self, int column, QModelIndex* parent ```
bool q_pdfsearchmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QPdfSearchModel* self, int row, QModelIndex* parent ```
bool q_pdfsearchmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QPdfSearchModel* self, int column, QModelIndex* parent ```
bool q_pdfsearchmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QPdfSearchModel* self, QModelIndex* index, int options ```
bool q_pdfsearchmodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QPdfSearchModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_pdfsearchmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_pdfsearchmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QPdfSearchModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_pdfsearchmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_pdfsearchmodel_on_layout_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QPdfSearchModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_pdfsearchmodel_layout_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_pdfsearchmodel_on_layout_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QPdfSearchModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_pdfsearchmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_pdfsearchmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QPdfSearchModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_pdfsearchmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_pdfsearchmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPdfSearchModel* self ```
const char* q_pdfsearchmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPdfSearchModel* self, char* name ```
void q_pdfsearchmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPdfSearchModel* self ```
bool q_pdfsearchmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPdfSearchModel* self ```
bool q_pdfsearchmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPdfSearchModel* self ```
bool q_pdfsearchmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPdfSearchModel* self ```
bool q_pdfsearchmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPdfSearchModel* self, bool b ```
bool q_pdfsearchmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPdfSearchModel* self ```
QThread* q_pdfsearchmodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPdfSearchModel* self, QThread* thread ```
bool q_pdfsearchmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfSearchModel* self, int interval ```
int32_t q_pdfsearchmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPdfSearchModel* self, int id ```
void q_pdfsearchmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPdfSearchModel* self, enum Qt__TimerId id ```
void q_pdfsearchmodel_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPdfSearchModel* self ```
libqt_list /* of QObject* */ q_pdfsearchmodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPdfSearchModel* self, QObject* parent ```
void q_pdfsearchmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPdfSearchModel* self, QObject* filterObj ```
void q_pdfsearchmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPdfSearchModel* self, QObject* obj ```
void q_pdfsearchmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pdfsearchmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfSearchModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pdfsearchmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pdfsearchmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pdfsearchmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPdfSearchModel* self, const char* name, QVariant* value ```
bool q_pdfsearchmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPdfSearchModel* self, const char* name ```
QVariant* q_pdfsearchmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPdfSearchModel* self ```
const char** q_pdfsearchmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfSearchModel* self ```
QBindingStorage* q_pdfsearchmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfSearchModel* self ```
const QBindingStorage* q_pdfsearchmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*) ```
void q_pdfsearchmodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPdfSearchModel* self, const char* classname ```
bool q_pdfsearchmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPdfSearchModel* self, QThread* thread, Disambiguated_t* param2 ```
bool q_pdfsearchmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfSearchModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pdfsearchmodel_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfsearchmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfSearchModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfsearchmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfSearchModel* self, QObject* param1 ```
void q_pdfsearchmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QObject*) ```
void q_pdfsearchmodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_pdfsearchmodel_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_pdfsearchmodel_qbase_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* (*slot)(QPdfSearchModel*, int, int, QModelIndex*) ```
void q_pdfsearchmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_pdfsearchmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_pdfsearchmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* (*slot)(QPdfSearchModel*, int, int, QModelIndex*) ```
void q_pdfsearchmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_pdfsearchmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_pdfsearchmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_pdfsearchmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
int64_t q_pdfsearchmodel_flags(void* self, void* index);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
int64_t q_pdfsearchmodel_qbase_flags(void* self, void* index);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int64_t (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_pdfsearchmodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_pdfsearchmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QModelIndex*, QVariant*, int) ```
void q_pdfsearchmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_pdfsearchmodel_header_data(void* self, int section, int64_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_pdfsearchmodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QVariant* (*slot)(QPdfSearchModel*, int, enum Qt__Orientation, int) ```
void q_pdfsearchmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_pdfsearchmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_pdfsearchmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_pdfsearchmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_pdfsearchmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_pdfsearchmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, libqt_map /* of int to QVariant* */ (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_pdfsearchmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_pdfsearchmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_pdfsearchmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
bool q_pdfsearchmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
bool q_pdfsearchmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
const char** q_pdfsearchmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
const char** q_pdfsearchmodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, const char** (*slot)() ```
void q_pdfsearchmodel_on_mime_types(void* self, const char** (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_pdfsearchmodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_pdfsearchmodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QMimeData* (*slot)(QPdfSearchModel*, libqt_list /* of QModelIndex* */ indexes ) ```
void q_pdfsearchmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_pdfsearchmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_pdfsearchmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_pdfsearchmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
int64_t q_pdfsearchmodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
int64_t q_pdfsearchmodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int64_t (*slot)() ```
void q_pdfsearchmodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
int64_t q_pdfsearchmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
int64_t q_pdfsearchmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int64_t (*slot)() ```
void q_pdfsearchmodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int count, QModelIndex* parent ```
bool q_pdfsearchmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int count, QModelIndex* parent ```
bool q_pdfsearchmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, int, int, QModelIndex*) ```
void q_pdfsearchmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int column, int count, QModelIndex* parent ```
bool q_pdfsearchmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int column, int count, QModelIndex* parent ```
bool q_pdfsearchmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, int, int, QModelIndex*) ```
void q_pdfsearchmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int count, QModelIndex* parent ```
bool q_pdfsearchmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int count, QModelIndex* parent ```
bool q_pdfsearchmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, int, int, QModelIndex*) ```
void q_pdfsearchmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int column, int count, QModelIndex* parent ```
bool q_pdfsearchmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int column, int count, QModelIndex* parent ```
bool q_pdfsearchmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, int, int, QModelIndex*) ```
void q_pdfsearchmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfsearchmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfsearchmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfsearchmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfsearchmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfsearchmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfsearchmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent ```
void q_pdfsearchmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent ```
void q_pdfsearchmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent ```
bool q_pdfsearchmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent ```
bool q_pdfsearchmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int column, enum Qt__SortOrder order ```
void q_pdfsearchmodel_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int column, enum Qt__SortOrder order ```
void q_pdfsearchmodel_qbase_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, int, enum Qt__SortOrder) ```
void q_pdfsearchmodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
QModelIndex* q_pdfsearchmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
QModelIndex* q_pdfsearchmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_pdfsearchmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_pdfsearchmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, libqt_list /* of QModelIndex* */ (*slot)(QPdfSearchModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_pdfsearchmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
QSize* q_pdfsearchmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index ```
QSize* q_pdfsearchmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QSize* (*slot)(QPdfSearchModel*, QModelIndex*) ```
void q_pdfsearchmodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_pdfsearchmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_pdfsearchmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_pdfsearchmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
bool q_pdfsearchmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
bool q_pdfsearchmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)() ```
void q_pdfsearchmodel_on_submit(void* self, bool (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)() ```
void q_pdfsearchmodel_on_revert(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)() ```
void q_pdfsearchmodel_on_reset_internal_data(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QEvent* event ```
bool q_pdfsearchmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QEvent* event ```
bool q_pdfsearchmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QEvent*) ```
void q_pdfsearchmodel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QObject* watched, QEvent* event ```
bool q_pdfsearchmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QObject* watched, QEvent* event ```
bool q_pdfsearchmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QObject*, QEvent*) ```
void q_pdfsearchmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QChildEvent* event ```
void q_pdfsearchmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QChildEvent* event ```
void q_pdfsearchmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QChildEvent*) ```
void q_pdfsearchmodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QEvent* event ```
void q_pdfsearchmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QEvent* event ```
void q_pdfsearchmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QEvent*) ```
void q_pdfsearchmodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QMetaMethod* signal ```
void q_pdfsearchmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QMetaMethod* signal ```
void q_pdfsearchmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QMetaMethod*) ```
void q_pdfsearchmodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QMetaMethod* signal ```
void q_pdfsearchmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QMetaMethod* signal ```
void q_pdfsearchmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QMetaMethod*) ```
void q_pdfsearchmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int column ```
QModelIndex* q_pdfsearchmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int column ```
QModelIndex* q_pdfsearchmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* (*slot)(QPdfSearchModel*, int, int) ```
void q_pdfsearchmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_pdfsearchmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_pdfsearchmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, libqt_list /* of QModelIndex* */ indexes , QDataStream*) ```
void q_pdfsearchmodel_on_encode_data(void* self, void (*slot)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_pdfsearchmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_pdfsearchmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, int, int, QModelIndex*, QDataStream*) ```
void q_pdfsearchmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent, int first, int last ```
void q_pdfsearchmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent, int first, int last ```
void q_pdfsearchmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)() ```
void q_pdfsearchmodel_on_end_insert_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent, int first, int last ```
void q_pdfsearchmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent, int first, int last ```
void q_pdfsearchmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)() ```
void q_pdfsearchmodel_on_end_remove_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_pdfsearchmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_pdfsearchmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfsearchmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)() ```
void q_pdfsearchmodel_on_end_move_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent, int first, int last ```
void q_pdfsearchmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent, int first, int last ```
void q_pdfsearchmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)() ```
void q_pdfsearchmodel_on_end_insert_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent, int first, int last ```
void q_pdfsearchmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* parent, int first, int last ```
void q_pdfsearchmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)() ```
void q_pdfsearchmodel_on_end_remove_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_pdfsearchmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_pdfsearchmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfsearchmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)() ```
void q_pdfsearchmodel_on_end_move_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)() ```
void q_pdfsearchmodel_on_begin_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)() ```
void q_pdfsearchmodel_on_end_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* from, QModelIndex* to ```
void q_pdfsearchmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QModelIndex* from, QModelIndex* to ```
void q_pdfsearchmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, QModelIndex*) ```
void q_pdfsearchmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_pdfsearchmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_pdfsearchmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, libqt_list /* of QModelIndex* */ from , libqt_list /* of QModelIndex* */ to ) ```
void q_pdfsearchmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
libqt_list /* of QModelIndex* */ q_pdfsearchmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
libqt_list /* of QModelIndex* */ q_pdfsearchmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_pdfsearchmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
QObject* q_pdfsearchmodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
QObject* q_pdfsearchmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QObject* (*slot)() ```
void q_pdfsearchmodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self ```
int32_t q_pdfsearchmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self ```
int32_t q_pdfsearchmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int32_t (*slot)() ```
void q_pdfsearchmodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, const char* signal ```
int32_t q_pdfsearchmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, const char* signal ```
int32_t q_pdfsearchmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, int32_t (*slot)(QPdfSearchModel*, const char*) ```
void q_pdfsearchmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfSearchModel* self, QMetaMethod* signal ```
bool q_pdfsearchmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfSearchModel* self, QMetaMethod* signal ```
bool q_pdfsearchmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfSearchModel* self, bool (*slot)(QPdfSearchModel*, QMetaMethod*) ```
void q_pdfsearchmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_rows_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_rows_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_columns_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_columns_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_columns_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int) ```
void q_pdfsearchmodel_on_columns_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*) ```
void q_pdfsearchmodel_on_model_about_to_be_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*) ```
void q_pdfsearchmodel_on_model_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfsearchmodel_on_rows_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfsearchmodel_on_rows_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfsearchmodel_on_columns_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfsearchmodel_on_columns_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfSearchModel* self, void (*slot)(QPdfSearchModel*, const char*) ```
void q_pdfsearchmodel_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfsearchmodel.html#dtor.QPdfSearchModel)
///
/// Delete this object from C++ memory.
///
/// ``` QPdfSearchModel* self ```
void q_pdfsearchmodel_delete(void* self);

/// https://doc.qt.io/qt-6/qpdfsearchmodel.html#types

typedef enum {
    QPDFSEARCHMODEL_ROLE_PAGE = 256,
    QPDFSEARCHMODEL_ROLE_INDEXONPAGE = 257,
    QPDFSEARCHMODEL_ROLE_LOCATION = 258,
    QPDFSEARCHMODEL_ROLE_CONTEXTBEFORE = 259,
    QPDFSEARCHMODEL_ROLE_CONTEXTAFTER = 260,
    QPDFSEARCHMODEL_ROLE_NROLES = 261
} QPdfSearchModel__Role;

#endif
