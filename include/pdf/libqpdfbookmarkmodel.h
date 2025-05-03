#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFBOOKMARKMODEL_H
#define SRC_PDFQT6C_LIBQPDFBOOKMARKMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqdatastream.h"
#include "../libqmetaobject.h"
#include "../libqmimedata.h"
#include "../libqobject.h"
#include "libqpdfdocument.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qpdfbookmarkmodel.html

/// q_pdfbookmarkmodel_new constructs a new QPdfBookmarkModel object.
///
///
QPdfBookmarkModel* q_pdfbookmarkmodel_new();

/// q_pdfbookmarkmodel_new2 constructs a new QPdfBookmarkModel object.
///
/// ``` QObject* parent ```
QPdfBookmarkModel* q_pdfbookmarkmodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPdfBookmarkModel* self ```
QMetaObject* q_pdfbookmarkmodel_meta_object(void* self);

/// ``` QPdfBookmarkModel* self, const char* param1 ```
void* q_pdfbookmarkmodel_metacast(void* self, const char* param1);

/// ``` QPdfBookmarkModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfbookmarkmodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPdfBookmarkModel* self, int32_t (*slot)(QPdfBookmarkModel*, enum QMetaObject__Call, int, void*) ```
void q_pdfbookmarkmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPdfBookmarkModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfbookmarkmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pdfbookmarkmodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#document)
///
/// ``` QPdfBookmarkModel* self ```
QPdfDocument* q_pdfbookmarkmodel_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#setDocument)
///
/// ``` QPdfBookmarkModel* self, QPdfDocument* document ```
void q_pdfbookmarkmodel_set_document(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#data)
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index, int role ```
QVariant* q_pdfbookmarkmodel_data(void* self, void* index, int role);

/// Allows for overriding the related default method
///
/// ``` QPdfBookmarkModel* self, QVariant* (*slot)(QPdfBookmarkModel*, QModelIndex*, int) ```
void q_pdfbookmarkmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// Base class method implementation
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index, int role ```
QVariant* q_pdfbookmarkmodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#index)
///
/// ``` QPdfBookmarkModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_pdfbookmarkmodel_index(void* self, int row, int column, void* parent);

/// Allows for overriding the related default method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* (*slot)(QPdfBookmarkModel*, int, int, QModelIndex*) ```
void q_pdfbookmarkmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QPdfBookmarkModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_pdfbookmarkmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#parent)
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
QModelIndex* q_pdfbookmarkmodel_parent(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
QModelIndex* q_pdfbookmarkmodel_qbase_parent(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#rowCount)
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent ```
int32_t q_pdfbookmarkmodel_row_count(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QPdfBookmarkModel* self, int32_t (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent ```
int32_t q_pdfbookmarkmodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#columnCount)
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent ```
int32_t q_pdfbookmarkmodel_column_count(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QPdfBookmarkModel* self, int32_t (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent ```
int32_t q_pdfbookmarkmodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#roleNames)
///
/// ``` QPdfBookmarkModel* self ```
libqt_map /* of int to char* */ q_pdfbookmarkmodel_role_names(void* self);

/// Allows for overriding the related default method
///
/// ``` QPdfBookmarkModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_pdfbookmarkmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// Base class method implementation
///
/// ``` QPdfBookmarkModel* self ```
libqt_map /* of int to char* */ q_pdfbookmarkmodel_qbase_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#documentChanged)
///
/// ``` QPdfBookmarkModel* self, QPdfDocument* document ```
void q_pdfbookmarkmodel_document_changed(void* self, void* document);

/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QPdfDocument*) ```
void q_pdfbookmarkmodel_on_document_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pdfbookmarkmodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pdfbookmarkmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QPdfBookmarkModel* self, int row, int column ```
bool q_pdfbookmarkmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QPdfBookmarkModel* self, int row ```
bool q_pdfbookmarkmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QPdfBookmarkModel* self, int column ```
bool q_pdfbookmarkmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QPdfBookmarkModel* self, int row ```
bool q_pdfbookmarkmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QPdfBookmarkModel* self, int column ```
bool q_pdfbookmarkmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QPdfBookmarkModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfbookmarkmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QPdfBookmarkModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfbookmarkmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
bool q_pdfbookmarkmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QPdfBookmarkModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_pdfbookmarkmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QPdfBookmarkModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_pdfbookmarkmodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_pdfbookmarkmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QAbstractItemModel*) ```
void q_pdfbookmarkmodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QAbstractItemModel*) ```
void q_pdfbookmarkmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QPdfBookmarkModel* self, int row, int column, QModelIndex* parent ```
bool q_pdfbookmarkmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QPdfBookmarkModel* self, int row, QModelIndex* parent ```
bool q_pdfbookmarkmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QPdfBookmarkModel* self, int column, QModelIndex* parent ```
bool q_pdfbookmarkmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QPdfBookmarkModel* self, int row, QModelIndex* parent ```
bool q_pdfbookmarkmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QPdfBookmarkModel* self, int column, QModelIndex* parent ```
bool q_pdfbookmarkmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index, int options ```
bool q_pdfbookmarkmodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QPdfBookmarkModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_pdfbookmarkmodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]);

/// Inherited from QAbstractItemModel
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_pdfbookmarkmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QPdfBookmarkModel* self, QPersistentModelIndex* parents[] ```
void q_pdfbookmarkmodel_layout_changed1(void* self, void* parents[]);

/// Inherited from QAbstractItemModel
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_pdfbookmarkmodel_on_layout_changed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QPdfBookmarkModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_pdfbookmarkmodel_layout_changed2(void* self, void* parents[], int64_t hint);

/// Inherited from QAbstractItemModel
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_pdfbookmarkmodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QPdfBookmarkModel* self, QPersistentModelIndex* parents[] ```
void q_pdfbookmarkmodel_layout_about_to_be_changed1(void* self, void* parents[]);

/// Inherited from QAbstractItemModel
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_pdfbookmarkmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QPdfBookmarkModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_pdfbookmarkmodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint);

/// Inherited from QAbstractItemModel
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_pdfbookmarkmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPdfBookmarkModel* self ```
const char* q_pdfbookmarkmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPdfBookmarkModel* self, char* name ```
void q_pdfbookmarkmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPdfBookmarkModel* self ```
bool q_pdfbookmarkmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPdfBookmarkModel* self ```
bool q_pdfbookmarkmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPdfBookmarkModel* self ```
bool q_pdfbookmarkmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPdfBookmarkModel* self ```
bool q_pdfbookmarkmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPdfBookmarkModel* self, bool b ```
bool q_pdfbookmarkmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPdfBookmarkModel* self ```
QThread* q_pdfbookmarkmodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPdfBookmarkModel* self, QThread* thread ```
void q_pdfbookmarkmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfBookmarkModel* self, int interval ```
int32_t q_pdfbookmarkmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPdfBookmarkModel* self, int id ```
void q_pdfbookmarkmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPdfBookmarkModel* self ```
libqt_list /* of QObject* */ q_pdfbookmarkmodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPdfBookmarkModel* self, QObject* parent ```
void q_pdfbookmarkmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPdfBookmarkModel* self, QObject* filterObj ```
void q_pdfbookmarkmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPdfBookmarkModel* self, QObject* obj ```
void q_pdfbookmarkmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pdfbookmarkmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfBookmarkModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pdfbookmarkmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pdfbookmarkmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pdfbookmarkmodel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPdfBookmarkModel* self, const char* name, QVariant* value ```
bool q_pdfbookmarkmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPdfBookmarkModel* self, const char* name ```
QVariant* q_pdfbookmarkmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPdfBookmarkModel* self ```
const char** q_pdfbookmarkmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfBookmarkModel* self ```
QBindingStorage* q_pdfbookmarkmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfBookmarkModel* self ```
QBindingStorage* q_pdfbookmarkmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QObject*) ```
void q_pdfbookmarkmodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPdfBookmarkModel* self, const char* classname ```
bool q_pdfbookmarkmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfBookmarkModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pdfbookmarkmodel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfbookmarkmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfBookmarkModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfbookmarkmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfBookmarkModel* self, QObject* param1 ```
void q_pdfbookmarkmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QObject*, QObject*) ```
void q_pdfbookmarkmodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_pdfbookmarkmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_pdfbookmarkmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* (*slot)(QPdfBookmarkModel*, int, int, QModelIndex*) ```
void q_pdfbookmarkmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent ```
bool q_pdfbookmarkmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent ```
bool q_pdfbookmarkmodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_pdfbookmarkmodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_pdfbookmarkmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QModelIndex*, QVariant*, int) ```
void q_pdfbookmarkmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_pdfbookmarkmodel_header_data(void* self, int section, int64_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_pdfbookmarkmodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QVariant* (*slot)(QPdfBookmarkModel*, int, enum Qt__Orientation, int) ```
void q_pdfbookmarkmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_pdfbookmarkmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_pdfbookmarkmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_pdfbookmarkmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_pdfbookmarkmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_pdfbookmarkmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, libqt_map /* of int to QVariant* */ (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_pdfbookmarkmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_pdfbookmarkmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_pdfbookmarkmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
bool q_pdfbookmarkmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
bool q_pdfbookmarkmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
const char** q_pdfbookmarkmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
const char** q_pdfbookmarkmodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, const char** (*slot)() ```
void q_pdfbookmarkmodel_on_mime_types(void* self, const char** (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* indexes[] ```
QMimeData* q_pdfbookmarkmodel_mime_data(void* self, void* indexes[]);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* indexes[] ```
QMimeData* q_pdfbookmarkmodel_qbase_mime_data(void* self, void* indexes[]);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMimeData* (*slot)(QPdfBookmarkModel*, QModelIndex*[]) ```
void q_pdfbookmarkmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_pdfbookmarkmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_pdfbookmarkmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_pdfbookmarkmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_pdfbookmarkmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_pdfbookmarkmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_pdfbookmarkmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
int64_t q_pdfbookmarkmodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
int64_t q_pdfbookmarkmodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int64_t (*slot)() ```
void q_pdfbookmarkmodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
int64_t q_pdfbookmarkmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
int64_t q_pdfbookmarkmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int64_t (*slot)() ```
void q_pdfbookmarkmodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int row, int count, QModelIndex* parent ```
bool q_pdfbookmarkmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int row, int count, QModelIndex* parent ```
bool q_pdfbookmarkmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, int, int, QModelIndex*) ```
void q_pdfbookmarkmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int column, int count, QModelIndex* parent ```
bool q_pdfbookmarkmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int column, int count, QModelIndex* parent ```
bool q_pdfbookmarkmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, int, int, QModelIndex*) ```
void q_pdfbookmarkmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int row, int count, QModelIndex* parent ```
bool q_pdfbookmarkmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int row, int count, QModelIndex* parent ```
bool q_pdfbookmarkmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, int, int, QModelIndex*) ```
void q_pdfbookmarkmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int column, int count, QModelIndex* parent ```
bool q_pdfbookmarkmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int column, int count, QModelIndex* parent ```
bool q_pdfbookmarkmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, int, int, QModelIndex*) ```
void q_pdfbookmarkmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfbookmarkmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfbookmarkmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfbookmarkmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfbookmarkmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_pdfbookmarkmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfbookmarkmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent ```
void q_pdfbookmarkmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent ```
void q_pdfbookmarkmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent ```
bool q_pdfbookmarkmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent ```
bool q_pdfbookmarkmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
int64_t q_pdfbookmarkmodel_flags(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
int64_t q_pdfbookmarkmodel_qbase_flags(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int64_t (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int column, enum Qt__SortOrder order ```
void q_pdfbookmarkmodel_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int column, enum Qt__SortOrder order ```
void q_pdfbookmarkmodel_qbase_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, int, enum Qt__SortOrder) ```
void q_pdfbookmarkmodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
QModelIndex* q_pdfbookmarkmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
QModelIndex* q_pdfbookmarkmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, libqt_list /* of QModelIndex* */ (*slot)(QPdfBookmarkModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_pdfbookmarkmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
QSize* q_pdfbookmarkmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index ```
QSize* q_pdfbookmarkmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QSize* (*slot)(QPdfBookmarkModel*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_pdfbookmarkmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_pdfbookmarkmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_pdfbookmarkmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
bool q_pdfbookmarkmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
bool q_pdfbookmarkmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)() ```
void q_pdfbookmarkmodel_on_submit(void* self, bool (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)() ```
void q_pdfbookmarkmodel_on_revert(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)() ```
void q_pdfbookmarkmodel_on_reset_internal_data(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QEvent* event ```
bool q_pdfbookmarkmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QEvent* event ```
bool q_pdfbookmarkmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QEvent*) ```
void q_pdfbookmarkmodel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QObject* watched, QEvent* event ```
bool q_pdfbookmarkmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QObject* watched, QEvent* event ```
bool q_pdfbookmarkmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QObject*, QEvent*) ```
void q_pdfbookmarkmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QTimerEvent* event ```
void q_pdfbookmarkmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QTimerEvent* event ```
void q_pdfbookmarkmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QTimerEvent*) ```
void q_pdfbookmarkmodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QChildEvent* event ```
void q_pdfbookmarkmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QChildEvent* event ```
void q_pdfbookmarkmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QChildEvent*) ```
void q_pdfbookmarkmodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QEvent* event ```
void q_pdfbookmarkmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QEvent* event ```
void q_pdfbookmarkmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QEvent*) ```
void q_pdfbookmarkmodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMetaMethod* signal ```
void q_pdfbookmarkmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMetaMethod* signal ```
void q_pdfbookmarkmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QMetaMethod*) ```
void q_pdfbookmarkmodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMetaMethod* signal ```
void q_pdfbookmarkmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMetaMethod* signal ```
void q_pdfbookmarkmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QMetaMethod*) ```
void q_pdfbookmarkmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int row, int column ```
QModelIndex* q_pdfbookmarkmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int row, int column ```
QModelIndex* q_pdfbookmarkmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* (*slot)(QPdfBookmarkModel*, int, int) ```
void q_pdfbookmarkmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_pdfbookmarkmodel_encode_data(void* self, void* indexes[], void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_pdfbookmarkmodel_qbase_encode_data(void* self, void* indexes[], void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QModelIndex*[], QDataStream*) ```
void q_pdfbookmarkmodel_on_encode_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_pdfbookmarkmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_pdfbookmarkmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, int, int, QModelIndex*, QDataStream*) ```
void q_pdfbookmarkmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent, int first, int last ```
void q_pdfbookmarkmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent, int first, int last ```
void q_pdfbookmarkmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QModelIndex*, int, int) ```
void q_pdfbookmarkmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)() ```
void q_pdfbookmarkmodel_on_end_insert_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent, int first, int last ```
void q_pdfbookmarkmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent, int first, int last ```
void q_pdfbookmarkmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QModelIndex*, int, int) ```
void q_pdfbookmarkmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)() ```
void q_pdfbookmarkmodel_on_end_remove_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_pdfbookmarkmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_pdfbookmarkmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfbookmarkmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)() ```
void q_pdfbookmarkmodel_on_end_move_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent, int first, int last ```
void q_pdfbookmarkmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent, int first, int last ```
void q_pdfbookmarkmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QModelIndex*, int, int) ```
void q_pdfbookmarkmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)() ```
void q_pdfbookmarkmodel_on_end_insert_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent, int first, int last ```
void q_pdfbookmarkmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* parent, int first, int last ```
void q_pdfbookmarkmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QModelIndex*, int, int) ```
void q_pdfbookmarkmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)() ```
void q_pdfbookmarkmodel_on_end_remove_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_pdfbookmarkmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_pdfbookmarkmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_pdfbookmarkmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)() ```
void q_pdfbookmarkmodel_on_end_move_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)() ```
void q_pdfbookmarkmodel_on_begin_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)() ```
void q_pdfbookmarkmodel_on_end_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* from, QModelIndex* to ```
void q_pdfbookmarkmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* from, QModelIndex* to ```
void q_pdfbookmarkmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QModelIndex*, QModelIndex*) ```
void q_pdfbookmarkmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_pdfbookmarkmodel_change_persistent_index_list(void* self, void* from[], void* to[]);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_pdfbookmarkmodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, void (*slot)(QPdfBookmarkModel*, QModelIndex*[], QModelIndex*[]) ```
void q_pdfbookmarkmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_pdfbookmarkmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
QObject* q_pdfbookmarkmodel_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
QObject* q_pdfbookmarkmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QObject* (*slot)() ```
void q_pdfbookmarkmodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
int32_t q_pdfbookmarkmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self ```
int32_t q_pdfbookmarkmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int32_t (*slot)() ```
void q_pdfbookmarkmodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, const char* signal ```
int32_t q_pdfbookmarkmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, const char* signal ```
int32_t q_pdfbookmarkmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, int32_t (*slot)(QPdfBookmarkModel*, const char*) ```
void q_pdfbookmarkmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMetaMethod* signal ```
bool q_pdfbookmarkmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, QMetaMethod* signal ```
bool q_pdfbookmarkmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfBookmarkModel* self, bool (*slot)(QPdfBookmarkModel*, QMetaMethod*) ```
void q_pdfbookmarkmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QPdfBookmarkModel* self ```
void q_pdfbookmarkmodel_delete(void* self);

/// https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#types

typedef enum {
    QPDFBOOKMARKMODEL_ROLE_TITLE = 256,
    QPDFBOOKMARKMODEL_ROLE_LEVEL = 257,
    QPDFBOOKMARKMODEL_ROLE_PAGE = 258,
    QPDFBOOKMARKMODEL_ROLE_LOCATION = 259,
    QPDFBOOKMARKMODEL_ROLE_ZOOM = 260,
    QPDFBOOKMARKMODEL_ROLE_NROLES = 261
} QPdfBookmarkModel__Role;

#endif
