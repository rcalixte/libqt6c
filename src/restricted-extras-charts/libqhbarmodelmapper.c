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
#include "libqhbarmodelmapper.hpp"
#include "libqhbarmodelmapper.h"

/// https://doc.qt.io/qt-6/qhbarmodelmapper.html

/// q_hbarmodelmapper_new constructs a new QHBarModelMapper object.
///
///
QHBarModelMapper* q_hbarmodelmapper_new() {
    return QHBarModelMapper_new();
}

/// q_hbarmodelmapper_new2 constructs a new QHBarModelMapper object.
///
/// ``` QObject* parent ```
QHBarModelMapper* q_hbarmodelmapper_new2(void* parent) {
    return QHBarModelMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHBarModelMapper* self ```
QMetaObject* q_hbarmodelmapper_meta_object(void* self) {
    return QHBarModelMapper_MetaObject((QHBarModelMapper*)self);
}

/// ``` QHBarModelMapper* self, const char* param1 ```
void* q_hbarmodelmapper_metacast(void* self, const char* param1) {
    return QHBarModelMapper_Metacast((QHBarModelMapper*)self, param1);
}

/// ``` QHBarModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hbarmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHBarModelMapper_Metacall((QHBarModelMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)(QHBarModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_hbarmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHBarModelMapper_OnMetacall((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHBarModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hbarmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHBarModelMapper_QBaseMetacall((QHBarModelMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_hbarmodelmapper_tr(const char* s) {
    libqt_string _str = QHBarModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#model)
///
/// ``` QHBarModelMapper* self ```
QAbstractItemModel* q_hbarmodelmapper_model(void* self) {
    return QHBarModelMapper_Model((QHBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#setModel)
///
/// ``` QHBarModelMapper* self, QAbstractItemModel* model ```
void q_hbarmodelmapper_set_model(void* self, void* model) {
    QHBarModelMapper_SetModel((QHBarModelMapper*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#series)
///
/// ``` QHBarModelMapper* self ```
QAbstractBarSeries* q_hbarmodelmapper_series(void* self) {
    return QHBarModelMapper_Series((QHBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#setSeries)
///
/// ``` QHBarModelMapper* self, QAbstractBarSeries* series ```
void q_hbarmodelmapper_set_series(void* self, void* series) {
    QHBarModelMapper_SetSeries((QHBarModelMapper*)self, (QAbstractBarSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#firstBarSetRow)
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_first_bar_set_row(void* self) {
    return QHBarModelMapper_FirstBarSetRow((QHBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#setFirstBarSetRow)
///
/// ``` QHBarModelMapper* self, int firstBarSetRow ```
void q_hbarmodelmapper_set_first_bar_set_row(void* self, int firstBarSetRow) {
    QHBarModelMapper_SetFirstBarSetRow((QHBarModelMapper*)self, firstBarSetRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#lastBarSetRow)
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_last_bar_set_row(void* self) {
    return QHBarModelMapper_LastBarSetRow((QHBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#setLastBarSetRow)
///
/// ``` QHBarModelMapper* self, int lastBarSetRow ```
void q_hbarmodelmapper_set_last_bar_set_row(void* self, int lastBarSetRow) {
    QHBarModelMapper_SetLastBarSetRow((QHBarModelMapper*)self, lastBarSetRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#firstColumn)
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_first_column(void* self) {
    return QHBarModelMapper_FirstColumn((QHBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#setFirstColumn)
///
/// ``` QHBarModelMapper* self, int firstColumn ```
void q_hbarmodelmapper_set_first_column(void* self, int firstColumn) {
    QHBarModelMapper_SetFirstColumn((QHBarModelMapper*)self, firstColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#columnCount)
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_column_count(void* self) {
    return QHBarModelMapper_ColumnCount((QHBarModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#setColumnCount)
///
/// ``` QHBarModelMapper* self, int columnCount ```
void q_hbarmodelmapper_set_column_count(void* self, int columnCount) {
    QHBarModelMapper_SetColumnCount((QHBarModelMapper*)self, columnCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#seriesReplaced)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_series_replaced(void* self) {
    QHBarModelMapper_SeriesReplaced((QHBarModelMapper*)self);
}

/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_SeriesReplaced((QHBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#modelReplaced)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_model_replaced(void* self) {
    QHBarModelMapper_ModelReplaced((QHBarModelMapper*)self);
}

/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_ModelReplaced((QHBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#firstBarSetRowChanged)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_first_bar_set_row_changed(void* self) {
    QHBarModelMapper_FirstBarSetRowChanged((QHBarModelMapper*)self);
}

/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_first_bar_set_row_changed(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_FirstBarSetRowChanged((QHBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#lastBarSetRowChanged)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_last_bar_set_row_changed(void* self) {
    QHBarModelMapper_LastBarSetRowChanged((QHBarModelMapper*)self);
}

/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_last_bar_set_row_changed(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_LastBarSetRowChanged((QHBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#firstColumnChanged)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_first_column_changed(void* self) {
    QHBarModelMapper_FirstColumnChanged((QHBarModelMapper*)self);
}

/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_first_column_changed(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_FirstColumnChanged((QHBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper.html#columnCountChanged)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_column_count_changed(void* self) {
    QHBarModelMapper_ColumnCountChanged((QHBarModelMapper*)self);
}

/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_column_count_changed(void* self, void (*slot)(void*)) {
    QHBarModelMapper_Connect_ColumnCountChanged((QHBarModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_hbarmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QHBarModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_hbarmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHBarModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHBarModelMapper* self ```
const char* q_hbarmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHBarModelMapper* self, const char* name ```
void q_hbarmodelmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHBarModelMapper* self ```
bool q_hbarmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHBarModelMapper* self ```
bool q_hbarmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHBarModelMapper* self ```
bool q_hbarmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHBarModelMapper* self ```
bool q_hbarmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHBarModelMapper* self, bool b ```
bool q_hbarmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHBarModelMapper* self ```
QThread* q_hbarmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHBarModelMapper* self, QThread* thread ```
void q_hbarmodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHBarModelMapper* self, int interval ```
int32_t q_hbarmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHBarModelMapper* self, int id ```
void q_hbarmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHBarModelMapper* self ```
libqt_list /* of QObject* */ q_hbarmodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHBarModelMapper* self, QObject* parent ```
void q_hbarmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHBarModelMapper* self, QObject* filterObj ```
void q_hbarmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHBarModelMapper* self, QObject* obj ```
void q_hbarmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_hbarmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHBarModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_hbarmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_hbarmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_hbarmodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHBarModelMapper* self, const char* name, QVariant* value ```
bool q_hbarmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHBarModelMapper* self, const char* name ```
QVariant* q_hbarmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHBarModelMapper* self ```
const char** q_hbarmodelmapper_dynamic_property_names(void* self) {
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
/// ``` QHBarModelMapper* self ```
QBindingStorage* q_hbarmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHBarModelMapper* self ```
QBindingStorage* q_hbarmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHBarModelMapper* self, void (*slot)(QObject*) ```
void q_hbarmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHBarModelMapper* self ```
QObject* q_hbarmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHBarModelMapper* self, const char* classname ```
bool q_hbarmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHBarModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_hbarmodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hbarmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHBarModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hbarmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBarModelMapper* self, QObject* param1 ```
void q_hbarmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHBarModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_hbarmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QEvent* event ```
bool q_hbarmodelmapper_event(void* self, void* event) {
    return QHBarModelMapper_Event((QHBarModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QEvent* event ```
bool q_hbarmodelmapper_qbase_event(void* self, void* event) {
    return QHBarModelMapper_QBaseEvent((QHBarModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, bool (*slot)(QHBarModelMapper*, QEvent*) ```
void q_hbarmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QHBarModelMapper_OnEvent((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QObject* watched, QEvent* event ```
bool q_hbarmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHBarModelMapper_EventFilter((QHBarModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QObject* watched, QEvent* event ```
bool q_hbarmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QHBarModelMapper_QBaseEventFilter((QHBarModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, bool (*slot)(QHBarModelMapper*, QObject*, QEvent*) ```
void q_hbarmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHBarModelMapper_OnEventFilter((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QTimerEvent* event ```
void q_hbarmodelmapper_timer_event(void* self, void* event) {
    QHBarModelMapper_TimerEvent((QHBarModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QTimerEvent* event ```
void q_hbarmodelmapper_qbase_timer_event(void* self, void* event) {
    QHBarModelMapper_QBaseTimerEvent((QHBarModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, QTimerEvent*) ```
void q_hbarmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHBarModelMapper_OnTimerEvent((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QChildEvent* event ```
void q_hbarmodelmapper_child_event(void* self, void* event) {
    QHBarModelMapper_ChildEvent((QHBarModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QChildEvent* event ```
void q_hbarmodelmapper_qbase_child_event(void* self, void* event) {
    QHBarModelMapper_QBaseChildEvent((QHBarModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, QChildEvent*) ```
void q_hbarmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHBarModelMapper_OnChildEvent((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QEvent* event ```
void q_hbarmodelmapper_custom_event(void* self, void* event) {
    QHBarModelMapper_CustomEvent((QHBarModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QEvent* event ```
void q_hbarmodelmapper_qbase_custom_event(void* self, void* event) {
    QHBarModelMapper_QBaseCustomEvent((QHBarModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, QEvent*) ```
void q_hbarmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHBarModelMapper_OnCustomEvent((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
void q_hbarmodelmapper_connect_notify(void* self, void* signal) {
    QHBarModelMapper_ConnectNotify((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
void q_hbarmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QHBarModelMapper_QBaseConnectNotify((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, QMetaMethod*) ```
void q_hbarmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHBarModelMapper_OnConnectNotify((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
void q_hbarmodelmapper_disconnect_notify(void* self, void* signal) {
    QHBarModelMapper_DisconnectNotify((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
void q_hbarmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QHBarModelMapper_QBaseDisconnectNotify((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, QMetaMethod*) ```
void q_hbarmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHBarModelMapper_OnDisconnectNotify((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_first(void* self) {
    return QHBarModelMapper_First((QHBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_qbase_first(void* self) {
    return QHBarModelMapper_QBaseFirst((QHBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)() ```
void q_hbarmodelmapper_on_first(void* self, int32_t (*slot)()) {
    QHBarModelMapper_OnFirst((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, int first ```
void q_hbarmodelmapper_set_first(void* self, int first) {
    QHBarModelMapper_SetFirst((QHBarModelMapper*)self, first);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int first ```
void q_hbarmodelmapper_qbase_set_first(void* self, int first) {
    QHBarModelMapper_QBaseSetFirst((QHBarModelMapper*)self, first);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, int) ```
void q_hbarmodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QHBarModelMapper_OnSetFirst((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_count(void* self) {
    return QHBarModelMapper_Count((QHBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_qbase_count(void* self) {
    return QHBarModelMapper_QBaseCount((QHBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)() ```
void q_hbarmodelmapper_on_count(void* self, int32_t (*slot)()) {
    QHBarModelMapper_OnCount((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, int count ```
void q_hbarmodelmapper_set_count(void* self, int count) {
    QHBarModelMapper_SetCount((QHBarModelMapper*)self, count);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int count ```
void q_hbarmodelmapper_qbase_set_count(void* self, int count) {
    QHBarModelMapper_QBaseSetCount((QHBarModelMapper*)self, count);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, int) ```
void q_hbarmodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QHBarModelMapper_OnSetCount((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_first_bar_set_section(void* self) {
    return QHBarModelMapper_FirstBarSetSection((QHBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_qbase_first_bar_set_section(void* self) {
    return QHBarModelMapper_QBaseFirstBarSetSection((QHBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)() ```
void q_hbarmodelmapper_on_first_bar_set_section(void* self, int32_t (*slot)()) {
    QHBarModelMapper_OnFirstBarSetSection((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, int firstBarSetSection ```
void q_hbarmodelmapper_set_first_bar_set_section(void* self, int firstBarSetSection) {
    QHBarModelMapper_SetFirstBarSetSection((QHBarModelMapper*)self, firstBarSetSection);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int firstBarSetSection ```
void q_hbarmodelmapper_qbase_set_first_bar_set_section(void* self, int firstBarSetSection) {
    QHBarModelMapper_QBaseSetFirstBarSetSection((QHBarModelMapper*)self, firstBarSetSection);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, int) ```
void q_hbarmodelmapper_on_set_first_bar_set_section(void* self, void (*slot)(void*, int)) {
    QHBarModelMapper_OnSetFirstBarSetSection((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_last_bar_set_section(void* self) {
    return QHBarModelMapper_LastBarSetSection((QHBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_qbase_last_bar_set_section(void* self) {
    return QHBarModelMapper_QBaseLastBarSetSection((QHBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)() ```
void q_hbarmodelmapper_on_last_bar_set_section(void* self, int32_t (*slot)()) {
    QHBarModelMapper_OnLastBarSetSection((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, int lastBarSetSection ```
void q_hbarmodelmapper_set_last_bar_set_section(void* self, int lastBarSetSection) {
    QHBarModelMapper_SetLastBarSetSection((QHBarModelMapper*)self, lastBarSetSection);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int lastBarSetSection ```
void q_hbarmodelmapper_qbase_set_last_bar_set_section(void* self, int lastBarSetSection) {
    QHBarModelMapper_QBaseSetLastBarSetSection((QHBarModelMapper*)self, lastBarSetSection);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, int) ```
void q_hbarmodelmapper_on_set_last_bar_set_section(void* self, void (*slot)(void*, int)) {
    QHBarModelMapper_OnSetLastBarSetSection((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int64_t q_hbarmodelmapper_orientation(void* self) {
    return QHBarModelMapper_Orientation((QHBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int64_t q_hbarmodelmapper_qbase_orientation(void* self) {
    return QHBarModelMapper_QBaseOrientation((QHBarModelMapper*)self);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int64_t (*slot)() ```
void q_hbarmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QHBarModelMapper_OnOrientation((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, enum Qt__Orientation orientation ```
void q_hbarmodelmapper_set_orientation(void* self, int64_t orientation) {
    QHBarModelMapper_SetOrientation((QHBarModelMapper*)self, orientation);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, enum Qt__Orientation orientation ```
void q_hbarmodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QHBarModelMapper_QBaseSetOrientation((QHBarModelMapper*)self, orientation);
}

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, enum Qt__Orientation) ```
void q_hbarmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QHBarModelMapper_OnSetOrientation((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
QObject* q_hbarmodelmapper_sender(void* self) {
    return QHBarModelMapper_Sender((QHBarModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
QObject* q_hbarmodelmapper_qbase_sender(void* self) {
    return QHBarModelMapper_QBaseSender((QHBarModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QObject* (*slot)() ```
void q_hbarmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QHBarModelMapper_OnSender((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_sender_signal_index(void* self) {
    return QHBarModelMapper_SenderSignalIndex((QHBarModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_qbase_sender_signal_index(void* self) {
    return QHBarModelMapper_QBaseSenderSignalIndex((QHBarModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)() ```
void q_hbarmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHBarModelMapper_OnSenderSignalIndex((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, const char* signal ```
int32_t q_hbarmodelmapper_receivers(void* self, const char* signal) {
    return QHBarModelMapper_Receivers((QHBarModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, const char* signal ```
int32_t q_hbarmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QHBarModelMapper_QBaseReceivers((QHBarModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)(QHBarModelMapper*, const char*) ```
void q_hbarmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHBarModelMapper_OnReceivers((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
bool q_hbarmodelmapper_is_signal_connected(void* self, void* signal) {
    return QHBarModelMapper_IsSignalConnected((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
bool q_hbarmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QHBarModelMapper_QBaseIsSignalConnected((QHBarModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, bool (*slot)(QHBarModelMapper*, QMetaMethod*) ```
void q_hbarmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHBarModelMapper_OnIsSignalConnected((QHBarModelMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_delete(void* self) {
    QHBarModelMapper_Delete((QHBarModelMapper*)(self));
}