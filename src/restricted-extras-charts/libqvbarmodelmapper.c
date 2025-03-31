#include "libqabstractbarseries.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqanystringview.hpp"
#include "libqbarmodelmapper.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqvbarmodelmapper.hpp"
#include "libqvbarmodelmapper.h"

/// https://doc.qt.io/qt-6/qvbarmodelmapper.html

/// q_vbarmodelmapper_new constructs a new QVBarModelMapper object.
///
///
QVBarModelMapper* q_vbarmodelmapper_new() {
    return QVBarModelMapper_new();
}

/// q_vbarmodelmapper_new2 constructs a new QVBarModelMapper object.
///
/// ``` QObject* parent ```
QVBarModelMapper* q_vbarmodelmapper_new2(void* parent) {
    return QVBarModelMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVBarModelMapper* self ```
QMetaObject* q_vbarmodelmapper_meta_object(void* self) {
    return QVBarModelMapper_MetaObject((QVBarModelMapper*)self);
}

/// ``` QVBarModelMapper* self, const char* param1 ```
void* q_vbarmodelmapper_metacast(void* self, const char* param1) {
    return QVBarModelMapper_Metacast((QVBarModelMapper*)self, param1);
}

/// ``` QVBarModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vbarmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVBarModelMapper_Metacall((QVBarModelMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)(QVBarModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_vbarmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVBarModelMapper_OnMetacall((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVBarModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vbarmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVBarModelMapper_QBaseMetacall((QVBarModelMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_vbarmodelmapper_tr(const char* s) {
    libqt_string _str = QVBarModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#model)
///
/// ``` QVBarModelMapper* self ```
QAbstractItemModel* q_vbarmodelmapper_model(void* self) {
    return QVBarModelMapper_Model((QVBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setModel)
///
/// ``` QVBarModelMapper* self, QAbstractItemModel* model ```
void q_vbarmodelmapper_set_model(void* self, void* model) {
    QVBarModelMapper_SetModel((QVBarModelMapper*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#series)
///
/// ``` QVBarModelMapper* self ```
QAbstractBarSeries* q_vbarmodelmapper_series(void* self) {
    return QVBarModelMapper_Series((QVBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setSeries)
///
/// ``` QVBarModelMapper* self, QAbstractBarSeries* series ```
void q_vbarmodelmapper_set_series(void* self, void* series) {
    QVBarModelMapper_SetSeries((QVBarModelMapper*)self, (QAbstractBarSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#firstBarSetColumn)
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_first_bar_set_column(void* self) {
    return QVBarModelMapper_FirstBarSetColumn((QVBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setFirstBarSetColumn)
///
/// ``` QVBarModelMapper* self, int firstBarSetColumn ```
void q_vbarmodelmapper_set_first_bar_set_column(void* self, int firstBarSetColumn) {
    QVBarModelMapper_SetFirstBarSetColumn((QVBarModelMapper*)self, firstBarSetColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#lastBarSetColumn)
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_last_bar_set_column(void* self) {
    return QVBarModelMapper_LastBarSetColumn((QVBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setLastBarSetColumn)
///
/// ``` QVBarModelMapper* self, int lastBarSetColumn ```
void q_vbarmodelmapper_set_last_bar_set_column(void* self, int lastBarSetColumn) {
    QVBarModelMapper_SetLastBarSetColumn((QVBarModelMapper*)self, lastBarSetColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#firstRow)
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_first_row(void* self) {
    return QVBarModelMapper_FirstRow((QVBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setFirstRow)
///
/// ``` QVBarModelMapper* self, int firstRow ```
void q_vbarmodelmapper_set_first_row(void* self, int firstRow) {
    QVBarModelMapper_SetFirstRow((QVBarModelMapper*)self, firstRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#rowCount)
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_row_count(void* self) {
    return QVBarModelMapper_RowCount((QVBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setRowCount)
///
/// ``` QVBarModelMapper* self, int rowCount ```
void q_vbarmodelmapper_set_row_count(void* self, int rowCount) {
    QVBarModelMapper_SetRowCount((QVBarModelMapper*)self, rowCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#seriesReplaced)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_series_replaced(void* self) {
    QVBarModelMapper_SeriesReplaced((QVBarModelMapper*)self);
}

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_SeriesReplaced((QVBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#modelReplaced)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_model_replaced(void* self) {
    QVBarModelMapper_ModelReplaced((QVBarModelMapper*)self);
}

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_ModelReplaced((QVBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#firstBarSetColumnChanged)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_first_bar_set_column_changed(void* self) {
    QVBarModelMapper_FirstBarSetColumnChanged((QVBarModelMapper*)self);
}

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_first_bar_set_column_changed(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_FirstBarSetColumnChanged((QVBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#lastBarSetColumnChanged)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_last_bar_set_column_changed(void* self) {
    QVBarModelMapper_LastBarSetColumnChanged((QVBarModelMapper*)self);
}

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_last_bar_set_column_changed(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_LastBarSetColumnChanged((QVBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#firstRowChanged)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_first_row_changed(void* self) {
    QVBarModelMapper_FirstRowChanged((QVBarModelMapper*)self);
}

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_first_row_changed(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_FirstRowChanged((QVBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#rowCountChanged)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_row_count_changed(void* self) {
    QVBarModelMapper_RowCountChanged((QVBarModelMapper*)self);
}

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_row_count_changed(void* self, void (*slot)(void*)) {
    QVBarModelMapper_Connect_RowCountChanged((QVBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_vbarmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QVBarModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_vbarmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVBarModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVBarModelMapper* self ```
const char* q_vbarmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVBarModelMapper* self, const char* name ```
void q_vbarmodelmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVBarModelMapper* self ```
bool q_vbarmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVBarModelMapper* self ```
bool q_vbarmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVBarModelMapper* self ```
bool q_vbarmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVBarModelMapper* self ```
bool q_vbarmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVBarModelMapper* self, bool b ```
bool q_vbarmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVBarModelMapper* self ```
QThread* q_vbarmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVBarModelMapper* self, QThread* thread ```
void q_vbarmodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVBarModelMapper* self, int interval ```
int32_t q_vbarmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVBarModelMapper* self, int id ```
void q_vbarmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVBarModelMapper* self ```
libqt_list /* of QObject* */ q_vbarmodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVBarModelMapper* self, QObject* parent ```
void q_vbarmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVBarModelMapper* self, QObject* filterObj ```
void q_vbarmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVBarModelMapper* self, QObject* obj ```
void q_vbarmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_vbarmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVBarModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_vbarmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_vbarmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_vbarmodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVBarModelMapper* self, const char* name, QVariant* value ```
bool q_vbarmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVBarModelMapper* self, const char* name ```
QVariant* q_vbarmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVBarModelMapper* self ```
const char** q_vbarmodelmapper_dynamic_property_names(void* self) {
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
/// ``` QVBarModelMapper* self ```
QBindingStorage* q_vbarmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVBarModelMapper* self ```
QBindingStorage* q_vbarmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QVBarModelMapper* self, void (*slot)(QObject*) ```
void q_vbarmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVBarModelMapper* self ```
QObject* q_vbarmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVBarModelMapper* self, const char* classname ```
bool q_vbarmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVBarModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_vbarmodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vbarmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVBarModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vbarmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBarModelMapper* self, QObject* param1 ```
void q_vbarmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QVBarModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_vbarmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QEvent* event ```
bool q_vbarmodelmapper_event(void* self, void* event) {
    return QVBarModelMapper_Event((QVBarModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QEvent* event ```
bool q_vbarmodelmapper_qbase_event(void* self, void* event) {
    return QVBarModelMapper_QBaseEvent((QVBarModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, bool (*slot)(QVBarModelMapper*, QEvent*) ```
void q_vbarmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QVBarModelMapper_OnEvent((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QObject* watched, QEvent* event ```
bool q_vbarmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QVBarModelMapper_EventFilter((QVBarModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QObject* watched, QEvent* event ```
bool q_vbarmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QVBarModelMapper_QBaseEventFilter((QVBarModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, bool (*slot)(QVBarModelMapper*, QObject*, QEvent*) ```
void q_vbarmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVBarModelMapper_OnEventFilter((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QTimerEvent* event ```
void q_vbarmodelmapper_timer_event(void* self, void* event) {
    QVBarModelMapper_TimerEvent((QVBarModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QTimerEvent* event ```
void q_vbarmodelmapper_qbase_timer_event(void* self, void* event) {
    QVBarModelMapper_QBaseTimerEvent((QVBarModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, QTimerEvent*) ```
void q_vbarmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVBarModelMapper_OnTimerEvent((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QChildEvent* event ```
void q_vbarmodelmapper_child_event(void* self, void* event) {
    QVBarModelMapper_ChildEvent((QVBarModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QChildEvent* event ```
void q_vbarmodelmapper_qbase_child_event(void* self, void* event) {
    QVBarModelMapper_QBaseChildEvent((QVBarModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, QChildEvent*) ```
void q_vbarmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVBarModelMapper_OnChildEvent((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QEvent* event ```
void q_vbarmodelmapper_custom_event(void* self, void* event) {
    QVBarModelMapper_CustomEvent((QVBarModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QEvent* event ```
void q_vbarmodelmapper_qbase_custom_event(void* self, void* event) {
    QVBarModelMapper_QBaseCustomEvent((QVBarModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, QEvent*) ```
void q_vbarmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVBarModelMapper_OnCustomEvent((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
void q_vbarmodelmapper_connect_notify(void* self, void* signal) {
    QVBarModelMapper_ConnectNotify((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
void q_vbarmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QVBarModelMapper_QBaseConnectNotify((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, QMetaMethod*) ```
void q_vbarmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVBarModelMapper_OnConnectNotify((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
void q_vbarmodelmapper_disconnect_notify(void* self, void* signal) {
    QVBarModelMapper_DisconnectNotify((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
void q_vbarmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QVBarModelMapper_QBaseDisconnectNotify((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, QMetaMethod*) ```
void q_vbarmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVBarModelMapper_OnDisconnectNotify((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_first(void* self) {
    return QVBarModelMapper_First((QVBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_qbase_first(void* self) {
    return QVBarModelMapper_QBaseFirst((QVBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)() ```
void q_vbarmodelmapper_on_first(void* self, int32_t (*slot)()) {
    QVBarModelMapper_OnFirst((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, int first ```
void q_vbarmodelmapper_set_first(void* self, int first) {
    QVBarModelMapper_SetFirst((QVBarModelMapper*)self, first);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int first ```
void q_vbarmodelmapper_qbase_set_first(void* self, int first) {
    QVBarModelMapper_QBaseSetFirst((QVBarModelMapper*)self, first);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, int) ```
void q_vbarmodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QVBarModelMapper_OnSetFirst((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_count(void* self) {
    return QVBarModelMapper_Count((QVBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_qbase_count(void* self) {
    return QVBarModelMapper_QBaseCount((QVBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)() ```
void q_vbarmodelmapper_on_count(void* self, int32_t (*slot)()) {
    QVBarModelMapper_OnCount((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, int count ```
void q_vbarmodelmapper_set_count(void* self, int count) {
    QVBarModelMapper_SetCount((QVBarModelMapper*)self, count);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int count ```
void q_vbarmodelmapper_qbase_set_count(void* self, int count) {
    QVBarModelMapper_QBaseSetCount((QVBarModelMapper*)self, count);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, int) ```
void q_vbarmodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QVBarModelMapper_OnSetCount((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_first_bar_set_section(void* self) {
    return QVBarModelMapper_FirstBarSetSection((QVBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_qbase_first_bar_set_section(void* self) {
    return QVBarModelMapper_QBaseFirstBarSetSection((QVBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)() ```
void q_vbarmodelmapper_on_first_bar_set_section(void* self, int32_t (*slot)()) {
    QVBarModelMapper_OnFirstBarSetSection((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, int firstBarSetSection ```
void q_vbarmodelmapper_set_first_bar_set_section(void* self, int firstBarSetSection) {
    QVBarModelMapper_SetFirstBarSetSection((QVBarModelMapper*)self, firstBarSetSection);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int firstBarSetSection ```
void q_vbarmodelmapper_qbase_set_first_bar_set_section(void* self, int firstBarSetSection) {
    QVBarModelMapper_QBaseSetFirstBarSetSection((QVBarModelMapper*)self, firstBarSetSection);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, int) ```
void q_vbarmodelmapper_on_set_first_bar_set_section(void* self, void (*slot)(void*, int)) {
    QVBarModelMapper_OnSetFirstBarSetSection((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_last_bar_set_section(void* self) {
    return QVBarModelMapper_LastBarSetSection((QVBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_qbase_last_bar_set_section(void* self) {
    return QVBarModelMapper_QBaseLastBarSetSection((QVBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)() ```
void q_vbarmodelmapper_on_last_bar_set_section(void* self, int32_t (*slot)()) {
    QVBarModelMapper_OnLastBarSetSection((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, int lastBarSetSection ```
void q_vbarmodelmapper_set_last_bar_set_section(void* self, int lastBarSetSection) {
    QVBarModelMapper_SetLastBarSetSection((QVBarModelMapper*)self, lastBarSetSection);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int lastBarSetSection ```
void q_vbarmodelmapper_qbase_set_last_bar_set_section(void* self, int lastBarSetSection) {
    QVBarModelMapper_QBaseSetLastBarSetSection((QVBarModelMapper*)self, lastBarSetSection);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, int) ```
void q_vbarmodelmapper_on_set_last_bar_set_section(void* self, void (*slot)(void*, int)) {
    QVBarModelMapper_OnSetLastBarSetSection((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int64_t q_vbarmodelmapper_orientation(void* self) {
    return QVBarModelMapper_Orientation((QVBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int64_t q_vbarmodelmapper_qbase_orientation(void* self) {
    return QVBarModelMapper_QBaseOrientation((QVBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int64_t (*slot)() ```
void q_vbarmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QVBarModelMapper_OnOrientation((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, enum Qt__Orientation orientation ```
void q_vbarmodelmapper_set_orientation(void* self, int64_t orientation) {
    QVBarModelMapper_SetOrientation((QVBarModelMapper*)self, orientation);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, enum Qt__Orientation orientation ```
void q_vbarmodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QVBarModelMapper_QBaseSetOrientation((QVBarModelMapper*)self, orientation);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, enum Qt__Orientation) ```
void q_vbarmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QVBarModelMapper_OnSetOrientation((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
QObject* q_vbarmodelmapper_sender(void* self) {
    return QVBarModelMapper_Sender((QVBarModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
QObject* q_vbarmodelmapper_qbase_sender(void* self) {
    return QVBarModelMapper_QBaseSender((QVBarModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QObject* (*slot)() ```
void q_vbarmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QVBarModelMapper_OnSender((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_sender_signal_index(void* self) {
    return QVBarModelMapper_SenderSignalIndex((QVBarModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_qbase_sender_signal_index(void* self) {
    return QVBarModelMapper_QBaseSenderSignalIndex((QVBarModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)() ```
void q_vbarmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVBarModelMapper_OnSenderSignalIndex((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, const char* signal ```
int32_t q_vbarmodelmapper_receivers(void* self, const char* signal) {
    return QVBarModelMapper_Receivers((QVBarModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, const char* signal ```
int32_t q_vbarmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QVBarModelMapper_QBaseReceivers((QVBarModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)(QVBarModelMapper*, const char*) ```
void q_vbarmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVBarModelMapper_OnReceivers((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
bool q_vbarmodelmapper_is_signal_connected(void* self, void* signal) {
    return QVBarModelMapper_IsSignalConnected((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
bool q_vbarmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QVBarModelMapper_QBaseIsSignalConnected((QVBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, bool (*slot)(QVBarModelMapper*, QMetaMethod*) ```
void q_vbarmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVBarModelMapper_OnIsSignalConnected((QVBarModelMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_delete(void* self) {
    QVBarModelMapper_Delete((QVBarModelMapper*)(self));
}