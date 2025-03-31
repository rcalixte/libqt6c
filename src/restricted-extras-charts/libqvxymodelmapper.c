#include "../libqabstractitemmodel.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqxymodelmapper.hpp"
#include "libqxyseries.hpp"
#include "../libqcoreevent.hpp"
#include "libqvxymodelmapper.hpp"
#include "libqvxymodelmapper.h"

/// https://doc.qt.io/qt-6/qvxymodelmapper.html

/// q_vxymodelmapper_new constructs a new QVXYModelMapper object.
///
///
QVXYModelMapper* q_vxymodelmapper_new() {
    return QVXYModelMapper_new();
}

/// q_vxymodelmapper_new2 constructs a new QVXYModelMapper object.
///
/// ``` QObject* parent ```
QVXYModelMapper* q_vxymodelmapper_new2(void* parent) {
    return QVXYModelMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVXYModelMapper* self ```
QMetaObject* q_vxymodelmapper_meta_object(void* self) {
    return QVXYModelMapper_MetaObject((QVXYModelMapper*)self);
}

/// ``` QVXYModelMapper* self, const char* param1 ```
void* q_vxymodelmapper_metacast(void* self, const char* param1) {
    return QVXYModelMapper_Metacast((QVXYModelMapper*)self, param1);
}

/// ``` QVXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vxymodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVXYModelMapper_Metacall((QVXYModelMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)(QVXYModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_vxymodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVXYModelMapper_OnMetacall((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vxymodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVXYModelMapper_QBaseMetacall((QVXYModelMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_vxymodelmapper_tr(const char* s) {
    libqt_string _str = QVXYModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#model)
///
/// ``` QVXYModelMapper* self ```
QAbstractItemModel* q_vxymodelmapper_model(void* self) {
    return QVXYModelMapper_Model((QVXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setModel)
///
/// ``` QVXYModelMapper* self, QAbstractItemModel* model ```
void q_vxymodelmapper_set_model(void* self, void* model) {
    QVXYModelMapper_SetModel((QVXYModelMapper*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#series)
///
/// ``` QVXYModelMapper* self ```
QXYSeries* q_vxymodelmapper_series(void* self) {
    return QVXYModelMapper_Series((QVXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setSeries)
///
/// ``` QVXYModelMapper* self, QXYSeries* series ```
void q_vxymodelmapper_set_series(void* self, void* series) {
    QVXYModelMapper_SetSeries((QVXYModelMapper*)self, (QXYSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#xColumn)
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_x_column(void* self) {
    return QVXYModelMapper_XColumn((QVXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setXColumn)
///
/// ``` QVXYModelMapper* self, int xColumn ```
void q_vxymodelmapper_set_x_column(void* self, int xColumn) {
    QVXYModelMapper_SetXColumn((QVXYModelMapper*)self, xColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#yColumn)
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_y_column(void* self) {
    return QVXYModelMapper_YColumn((QVXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setYColumn)
///
/// ``` QVXYModelMapper* self, int yColumn ```
void q_vxymodelmapper_set_y_column(void* self, int yColumn) {
    QVXYModelMapper_SetYColumn((QVXYModelMapper*)self, yColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#firstRow)
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_first_row(void* self) {
    return QVXYModelMapper_FirstRow((QVXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setFirstRow)
///
/// ``` QVXYModelMapper* self, int firstRow ```
void q_vxymodelmapper_set_first_row(void* self, int firstRow) {
    QVXYModelMapper_SetFirstRow((QVXYModelMapper*)self, firstRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#rowCount)
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_row_count(void* self) {
    return QVXYModelMapper_RowCount((QVXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setRowCount)
///
/// ``` QVXYModelMapper* self, int rowCount ```
void q_vxymodelmapper_set_row_count(void* self, int rowCount) {
    QVXYModelMapper_SetRowCount((QVXYModelMapper*)self, rowCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#seriesReplaced)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_series_replaced(void* self) {
    QVXYModelMapper_SeriesReplaced((QVXYModelMapper*)self);
}

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QVXYModelMapper_Connect_SeriesReplaced((QVXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#modelReplaced)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_model_replaced(void* self) {
    QVXYModelMapper_ModelReplaced((QVXYModelMapper*)self);
}

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QVXYModelMapper_Connect_ModelReplaced((QVXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#xColumnChanged)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_x_column_changed(void* self) {
    QVXYModelMapper_XColumnChanged((QVXYModelMapper*)self);
}

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_x_column_changed(void* self, void (*slot)(void*)) {
    QVXYModelMapper_Connect_XColumnChanged((QVXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#yColumnChanged)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_y_column_changed(void* self) {
    QVXYModelMapper_YColumnChanged((QVXYModelMapper*)self);
}

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_y_column_changed(void* self, void (*slot)(void*)) {
    QVXYModelMapper_Connect_YColumnChanged((QVXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#firstRowChanged)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_first_row_changed(void* self) {
    QVXYModelMapper_FirstRowChanged((QVXYModelMapper*)self);
}

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_first_row_changed(void* self, void (*slot)(void*)) {
    QVXYModelMapper_Connect_FirstRowChanged((QVXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#rowCountChanged)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_row_count_changed(void* self) {
    QVXYModelMapper_RowCountChanged((QVXYModelMapper*)self);
}

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_row_count_changed(void* self, void (*slot)(void*)) {
    QVXYModelMapper_Connect_RowCountChanged((QVXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_vxymodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QVXYModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_vxymodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVXYModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVXYModelMapper* self ```
const char* q_vxymodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVXYModelMapper* self, const char* name ```
void q_vxymodelmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVXYModelMapper* self ```
bool q_vxymodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVXYModelMapper* self ```
bool q_vxymodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVXYModelMapper* self ```
bool q_vxymodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVXYModelMapper* self ```
bool q_vxymodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVXYModelMapper* self, bool b ```
bool q_vxymodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVXYModelMapper* self ```
QThread* q_vxymodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVXYModelMapper* self, QThread* thread ```
void q_vxymodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVXYModelMapper* self, int interval ```
int32_t q_vxymodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVXYModelMapper* self, int id ```
void q_vxymodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVXYModelMapper* self ```
libqt_list /* of QObject* */ q_vxymodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVXYModelMapper* self, QObject* parent ```
void q_vxymodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVXYModelMapper* self, QObject* filterObj ```
void q_vxymodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVXYModelMapper* self, QObject* obj ```
void q_vxymodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_vxymodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVXYModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_vxymodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_vxymodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_vxymodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVXYModelMapper* self, const char* name, QVariant* value ```
bool q_vxymodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVXYModelMapper* self, const char* name ```
QVariant* q_vxymodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVXYModelMapper* self ```
const char** q_vxymodelmapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVXYModelMapper* self ```
QBindingStorage* q_vxymodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVXYModelMapper* self ```
QBindingStorage* q_vxymodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QVXYModelMapper* self, void (*slot)(QObject*) ```
void q_vxymodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVXYModelMapper* self ```
QObject* q_vxymodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVXYModelMapper* self, const char* classname ```
bool q_vxymodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVXYModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_vxymodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vxymodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVXYModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vxymodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVXYModelMapper* self, QObject* param1 ```
void q_vxymodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QVXYModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_vxymodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QEvent* event ```
bool q_vxymodelmapper_event(void* self, void* event) {
    return QVXYModelMapper_Event((QVXYModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QEvent* event ```
bool q_vxymodelmapper_qbase_event(void* self, void* event) {
    return QVXYModelMapper_QBaseEvent((QVXYModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, bool (*slot)(QVXYModelMapper*, QEvent*) ```
void q_vxymodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QVXYModelMapper_OnEvent((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QObject* watched, QEvent* event ```
bool q_vxymodelmapper_event_filter(void* self, void* watched, void* event) {
    return QVXYModelMapper_EventFilter((QVXYModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QObject* watched, QEvent* event ```
bool q_vxymodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QVXYModelMapper_QBaseEventFilter((QVXYModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, bool (*slot)(QVXYModelMapper*, QObject*, QEvent*) ```
void q_vxymodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVXYModelMapper_OnEventFilter((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QTimerEvent* event ```
void q_vxymodelmapper_timer_event(void* self, void* event) {
    QVXYModelMapper_TimerEvent((QVXYModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QTimerEvent* event ```
void q_vxymodelmapper_qbase_timer_event(void* self, void* event) {
    QVXYModelMapper_QBaseTimerEvent((QVXYModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, QTimerEvent*) ```
void q_vxymodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVXYModelMapper_OnTimerEvent((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QChildEvent* event ```
void q_vxymodelmapper_child_event(void* self, void* event) {
    QVXYModelMapper_ChildEvent((QVXYModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QChildEvent* event ```
void q_vxymodelmapper_qbase_child_event(void* self, void* event) {
    QVXYModelMapper_QBaseChildEvent((QVXYModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, QChildEvent*) ```
void q_vxymodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVXYModelMapper_OnChildEvent((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QEvent* event ```
void q_vxymodelmapper_custom_event(void* self, void* event) {
    QVXYModelMapper_CustomEvent((QVXYModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QEvent* event ```
void q_vxymodelmapper_qbase_custom_event(void* self, void* event) {
    QVXYModelMapper_QBaseCustomEvent((QVXYModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, QEvent*) ```
void q_vxymodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVXYModelMapper_OnCustomEvent((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
void q_vxymodelmapper_connect_notify(void* self, void* signal) {
    QVXYModelMapper_ConnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
void q_vxymodelmapper_qbase_connect_notify(void* self, void* signal) {
    QVXYModelMapper_QBaseConnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, QMetaMethod*) ```
void q_vxymodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVXYModelMapper_OnConnectNotify((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
void q_vxymodelmapper_disconnect_notify(void* self, void* signal) {
    QVXYModelMapper_DisconnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
void q_vxymodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QVXYModelMapper_QBaseDisconnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, QMetaMethod*) ```
void q_vxymodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVXYModelMapper_OnDisconnectNotify((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_first(void* self) {
    return QVXYModelMapper_First((QVXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_qbase_first(void* self) {
    return QVXYModelMapper_QBaseFirst((QVXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)() ```
void q_vxymodelmapper_on_first(void* self, int32_t (*slot)()) {
    QVXYModelMapper_OnFirst((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, int first ```
void q_vxymodelmapper_set_first(void* self, int first) {
    QVXYModelMapper_SetFirst((QVXYModelMapper*)self, first);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int first ```
void q_vxymodelmapper_qbase_set_first(void* self, int first) {
    QVXYModelMapper_QBaseSetFirst((QVXYModelMapper*)self, first);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, int) ```
void q_vxymodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QVXYModelMapper_OnSetFirst((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_count(void* self) {
    return QVXYModelMapper_Count((QVXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_qbase_count(void* self) {
    return QVXYModelMapper_QBaseCount((QVXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)() ```
void q_vxymodelmapper_on_count(void* self, int32_t (*slot)()) {
    QVXYModelMapper_OnCount((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, int count ```
void q_vxymodelmapper_set_count(void* self, int count) {
    QVXYModelMapper_SetCount((QVXYModelMapper*)self, count);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int count ```
void q_vxymodelmapper_qbase_set_count(void* self, int count) {
    QVXYModelMapper_QBaseSetCount((QVXYModelMapper*)self, count);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, int) ```
void q_vxymodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QVXYModelMapper_OnSetCount((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int64_t q_vxymodelmapper_orientation(void* self) {
    return QVXYModelMapper_Orientation((QVXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int64_t q_vxymodelmapper_qbase_orientation(void* self) {
    return QVXYModelMapper_QBaseOrientation((QVXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int64_t (*slot)() ```
void q_vxymodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QVXYModelMapper_OnOrientation((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, enum Qt__Orientation orientation ```
void q_vxymodelmapper_set_orientation(void* self, int64_t orientation) {
    QVXYModelMapper_SetOrientation((QVXYModelMapper*)self, orientation);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, enum Qt__Orientation orientation ```
void q_vxymodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QVXYModelMapper_QBaseSetOrientation((QVXYModelMapper*)self, orientation);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, enum Qt__Orientation) ```
void q_vxymodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QVXYModelMapper_OnSetOrientation((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_x_section(void* self) {
    return QVXYModelMapper_XSection((QVXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_qbase_x_section(void* self) {
    return QVXYModelMapper_QBaseXSection((QVXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)() ```
void q_vxymodelmapper_on_x_section(void* self, int32_t (*slot)()) {
    QVXYModelMapper_OnXSection((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, int xSection ```
void q_vxymodelmapper_set_x_section(void* self, int xSection) {
    QVXYModelMapper_SetXSection((QVXYModelMapper*)self, xSection);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int xSection ```
void q_vxymodelmapper_qbase_set_x_section(void* self, int xSection) {
    QVXYModelMapper_QBaseSetXSection((QVXYModelMapper*)self, xSection);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, int) ```
void q_vxymodelmapper_on_set_x_section(void* self, void (*slot)(void*, int)) {
    QVXYModelMapper_OnSetXSection((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_y_section(void* self) {
    return QVXYModelMapper_YSection((QVXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_qbase_y_section(void* self) {
    return QVXYModelMapper_QBaseYSection((QVXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)() ```
void q_vxymodelmapper_on_y_section(void* self, int32_t (*slot)()) {
    QVXYModelMapper_OnYSection((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, int ySection ```
void q_vxymodelmapper_set_y_section(void* self, int ySection) {
    QVXYModelMapper_SetYSection((QVXYModelMapper*)self, ySection);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int ySection ```
void q_vxymodelmapper_qbase_set_y_section(void* self, int ySection) {
    QVXYModelMapper_QBaseSetYSection((QVXYModelMapper*)self, ySection);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, int) ```
void q_vxymodelmapper_on_set_y_section(void* self, void (*slot)(void*, int)) {
    QVXYModelMapper_OnSetYSection((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
QObject* q_vxymodelmapper_sender(void* self) {
    return QVXYModelMapper_Sender((QVXYModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
QObject* q_vxymodelmapper_qbase_sender(void* self) {
    return QVXYModelMapper_QBaseSender((QVXYModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QObject* (*slot)() ```
void q_vxymodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QVXYModelMapper_OnSender((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_sender_signal_index(void* self) {
    return QVXYModelMapper_SenderSignalIndex((QVXYModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_qbase_sender_signal_index(void* self) {
    return QVXYModelMapper_QBaseSenderSignalIndex((QVXYModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)() ```
void q_vxymodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVXYModelMapper_OnSenderSignalIndex((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, const char* signal ```
int32_t q_vxymodelmapper_receivers(void* self, const char* signal) {
    return QVXYModelMapper_Receivers((QVXYModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, const char* signal ```
int32_t q_vxymodelmapper_qbase_receivers(void* self, const char* signal) {
    return QVXYModelMapper_QBaseReceivers((QVXYModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)(QVXYModelMapper*, const char*) ```
void q_vxymodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVXYModelMapper_OnReceivers((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
bool q_vxymodelmapper_is_signal_connected(void* self, void* signal) {
    return QVXYModelMapper_IsSignalConnected((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
bool q_vxymodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QVXYModelMapper_QBaseIsSignalConnected((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, bool (*slot)(QVXYModelMapper*, QMetaMethod*) ```
void q_vxymodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVXYModelMapper_OnIsSignalConnected((QVXYModelMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_delete(void* self) {
    QVXYModelMapper_Delete((QVXYModelMapper*)(self));
}