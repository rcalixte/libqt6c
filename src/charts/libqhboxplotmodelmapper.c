#include "../libqabstractitemmodel.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "libqboxplotmodelmapper.hpp"
#include "libqboxplotseries.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqhboxplotmodelmapper.hpp"
#include "libqhboxplotmodelmapper.h"

/// https://doc.qt.io/qt-6/qhboxplotmodelmapper.html

/// q_hboxplotmodelmapper_new constructs a new QHBoxPlotModelMapper object.
///
///
QHBoxPlotModelMapper* q_hboxplotmodelmapper_new() {
    return QHBoxPlotModelMapper_new();
}

/// q_hboxplotmodelmapper_new2 constructs a new QHBoxPlotModelMapper object.
///
/// ``` QObject* parent ```
QHBoxPlotModelMapper* q_hboxplotmodelmapper_new2(void* parent) {
    return QHBoxPlotModelMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHBoxPlotModelMapper* self ```
QMetaObject* q_hboxplotmodelmapper_meta_object(void* self) {
    return QHBoxPlotModelMapper_MetaObject((QHBoxPlotModelMapper*)self);
}

/// ``` QHBoxPlotModelMapper* self, const char* param1 ```
void* q_hboxplotmodelmapper_metacast(void* self, const char* param1) {
    return QHBoxPlotModelMapper_Metacast((QHBoxPlotModelMapper*)self, param1);
}

/// ``` QHBoxPlotModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hboxplotmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHBoxPlotModelMapper_Metacall((QHBoxPlotModelMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)(QHBoxPlotModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_hboxplotmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHBoxPlotModelMapper_OnMetacall((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHBoxPlotModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hboxplotmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHBoxPlotModelMapper_QBaseMetacall((QHBoxPlotModelMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_hboxplotmodelmapper_tr(const char* s) {
    libqt_string _str = QHBoxPlotModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#model)
///
/// ``` QHBoxPlotModelMapper* self ```
QAbstractItemModel* q_hboxplotmodelmapper_model(void* self) {
    return QHBoxPlotModelMapper_Model((QHBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#setModel)
///
/// ``` QHBoxPlotModelMapper* self, QAbstractItemModel* model ```
void q_hboxplotmodelmapper_set_model(void* self, void* model) {
    QHBoxPlotModelMapper_SetModel((QHBoxPlotModelMapper*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#series)
///
/// ``` QHBoxPlotModelMapper* self ```
QBoxPlotSeries* q_hboxplotmodelmapper_series(void* self) {
    return QHBoxPlotModelMapper_Series((QHBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#setSeries)
///
/// ``` QHBoxPlotModelMapper* self, QBoxPlotSeries* series ```
void q_hboxplotmodelmapper_set_series(void* self, void* series) {
    QHBoxPlotModelMapper_SetSeries((QHBoxPlotModelMapper*)self, (QBoxPlotSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#firstBoxSetRow)
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_first_box_set_row(void* self) {
    return QHBoxPlotModelMapper_FirstBoxSetRow((QHBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#setFirstBoxSetRow)
///
/// ``` QHBoxPlotModelMapper* self, int firstBoxSetRow ```
void q_hboxplotmodelmapper_set_first_box_set_row(void* self, int firstBoxSetRow) {
    QHBoxPlotModelMapper_SetFirstBoxSetRow((QHBoxPlotModelMapper*)self, firstBoxSetRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#lastBoxSetRow)
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_last_box_set_row(void* self) {
    return QHBoxPlotModelMapper_LastBoxSetRow((QHBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#setLastBoxSetRow)
///
/// ``` QHBoxPlotModelMapper* self, int lastBoxSetRow ```
void q_hboxplotmodelmapper_set_last_box_set_row(void* self, int lastBoxSetRow) {
    QHBoxPlotModelMapper_SetLastBoxSetRow((QHBoxPlotModelMapper*)self, lastBoxSetRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#firstColumn)
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_first_column(void* self) {
    return QHBoxPlotModelMapper_FirstColumn((QHBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#setFirstColumn)
///
/// ``` QHBoxPlotModelMapper* self, int firstColumn ```
void q_hboxplotmodelmapper_set_first_column(void* self, int firstColumn) {
    QHBoxPlotModelMapper_SetFirstColumn((QHBoxPlotModelMapper*)self, firstColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#columnCount)
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_column_count(void* self) {
    return QHBoxPlotModelMapper_ColumnCount((QHBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#setColumnCount)
///
/// ``` QHBoxPlotModelMapper* self, int rowCount ```
void q_hboxplotmodelmapper_set_column_count(void* self, int rowCount) {
    QHBoxPlotModelMapper_SetColumnCount((QHBoxPlotModelMapper*)self, rowCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#seriesReplaced)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_series_replaced(void* self) {
    QHBoxPlotModelMapper_SeriesReplaced((QHBoxPlotModelMapper*)self);
}

/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QHBoxPlotModelMapper_Connect_SeriesReplaced((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#modelReplaced)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_model_replaced(void* self) {
    QHBoxPlotModelMapper_ModelReplaced((QHBoxPlotModelMapper*)self);
}

/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QHBoxPlotModelMapper_Connect_ModelReplaced((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#firstBoxSetRowChanged)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_first_box_set_row_changed(void* self) {
    QHBoxPlotModelMapper_FirstBoxSetRowChanged((QHBoxPlotModelMapper*)self);
}

/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_first_box_set_row_changed(void* self, void (*slot)(void*)) {
    QHBoxPlotModelMapper_Connect_FirstBoxSetRowChanged((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#lastBoxSetRowChanged)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_last_box_set_row_changed(void* self) {
    QHBoxPlotModelMapper_LastBoxSetRowChanged((QHBoxPlotModelMapper*)self);
}

/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_last_box_set_row_changed(void* self, void (*slot)(void*)) {
    QHBoxPlotModelMapper_Connect_LastBoxSetRowChanged((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#firstColumnChanged)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_first_column_changed(void* self) {
    QHBoxPlotModelMapper_FirstColumnChanged((QHBoxPlotModelMapper*)self);
}

/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_first_column_changed(void* self, void (*slot)(void*)) {
    QHBoxPlotModelMapper_Connect_FirstColumnChanged((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper.html#columnCountChanged)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_column_count_changed(void* self) {
    QHBoxPlotModelMapper_ColumnCountChanged((QHBoxPlotModelMapper*)self);
}

/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_column_count_changed(void* self, void (*slot)(void*)) {
    QHBoxPlotModelMapper_Connect_ColumnCountChanged((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_hboxplotmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QHBoxPlotModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_hboxplotmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHBoxPlotModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHBoxPlotModelMapper* self ```
const char* q_hboxplotmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHBoxPlotModelMapper* self, const char* name ```
void q_hboxplotmodelmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHBoxPlotModelMapper* self ```
bool q_hboxplotmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHBoxPlotModelMapper* self ```
bool q_hboxplotmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHBoxPlotModelMapper* self ```
bool q_hboxplotmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHBoxPlotModelMapper* self ```
bool q_hboxplotmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHBoxPlotModelMapper* self, bool b ```
bool q_hboxplotmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHBoxPlotModelMapper* self ```
QThread* q_hboxplotmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHBoxPlotModelMapper* self, QThread* thread ```
void q_hboxplotmodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHBoxPlotModelMapper* self, int interval ```
int32_t q_hboxplotmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHBoxPlotModelMapper* self, int id ```
void q_hboxplotmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHBoxPlotModelMapper* self ```
libqt_list /* of QObject* */ q_hboxplotmodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHBoxPlotModelMapper* self, QObject* parent ```
void q_hboxplotmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHBoxPlotModelMapper* self, QObject* filterObj ```
void q_hboxplotmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHBoxPlotModelMapper* self, QObject* obj ```
void q_hboxplotmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_hboxplotmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHBoxPlotModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_hboxplotmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_hboxplotmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_hboxplotmodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHBoxPlotModelMapper* self, const char* name, QVariant* value ```
bool q_hboxplotmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHBoxPlotModelMapper* self, const char* name ```
QVariant* q_hboxplotmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHBoxPlotModelMapper* self ```
const char** q_hboxplotmodelmapper_dynamic_property_names(void* self) {
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
/// ``` QHBoxPlotModelMapper* self ```
QBindingStorage* q_hboxplotmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHBoxPlotModelMapper* self ```
QBindingStorage* q_hboxplotmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QObject*) ```
void q_hboxplotmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHBoxPlotModelMapper* self ```
QObject* q_hboxplotmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHBoxPlotModelMapper* self, const char* classname ```
bool q_hboxplotmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHBoxPlotModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_hboxplotmodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hboxplotmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHBoxPlotModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hboxplotmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBoxPlotModelMapper* self, QObject* param1 ```
void q_hboxplotmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_hboxplotmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QEvent* event ```
bool q_hboxplotmodelmapper_event(void* self, void* event) {
    return QHBoxPlotModelMapper_Event((QHBoxPlotModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QEvent* event ```
bool q_hboxplotmodelmapper_qbase_event(void* self, void* event) {
    return QHBoxPlotModelMapper_QBaseEvent((QHBoxPlotModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, bool (*slot)(QHBoxPlotModelMapper*, QEvent*) ```
void q_hboxplotmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QHBoxPlotModelMapper_OnEvent((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QObject* watched, QEvent* event ```
bool q_hboxplotmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHBoxPlotModelMapper_EventFilter((QHBoxPlotModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QObject* watched, QEvent* event ```
bool q_hboxplotmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QHBoxPlotModelMapper_QBaseEventFilter((QHBoxPlotModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, bool (*slot)(QHBoxPlotModelMapper*, QObject*, QEvent*) ```
void q_hboxplotmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHBoxPlotModelMapper_OnEventFilter((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QTimerEvent* event ```
void q_hboxplotmodelmapper_timer_event(void* self, void* event) {
    QHBoxPlotModelMapper_TimerEvent((QHBoxPlotModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QTimerEvent* event ```
void q_hboxplotmodelmapper_qbase_timer_event(void* self, void* event) {
    QHBoxPlotModelMapper_QBaseTimerEvent((QHBoxPlotModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, QTimerEvent*) ```
void q_hboxplotmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHBoxPlotModelMapper_OnTimerEvent((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QChildEvent* event ```
void q_hboxplotmodelmapper_child_event(void* self, void* event) {
    QHBoxPlotModelMapper_ChildEvent((QHBoxPlotModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QChildEvent* event ```
void q_hboxplotmodelmapper_qbase_child_event(void* self, void* event) {
    QHBoxPlotModelMapper_QBaseChildEvent((QHBoxPlotModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, QChildEvent*) ```
void q_hboxplotmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHBoxPlotModelMapper_OnChildEvent((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QEvent* event ```
void q_hboxplotmodelmapper_custom_event(void* self, void* event) {
    QHBoxPlotModelMapper_CustomEvent((QHBoxPlotModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QEvent* event ```
void q_hboxplotmodelmapper_qbase_custom_event(void* self, void* event) {
    QHBoxPlotModelMapper_QBaseCustomEvent((QHBoxPlotModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, QEvent*) ```
void q_hboxplotmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHBoxPlotModelMapper_OnCustomEvent((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_hboxplotmodelmapper_connect_notify(void* self, void* signal) {
    QHBoxPlotModelMapper_ConnectNotify((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_hboxplotmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QHBoxPlotModelMapper_QBaseConnectNotify((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, QMetaMethod*) ```
void q_hboxplotmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHBoxPlotModelMapper_OnConnectNotify((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_hboxplotmodelmapper_disconnect_notify(void* self, void* signal) {
    QHBoxPlotModelMapper_DisconnectNotify((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_hboxplotmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QHBoxPlotModelMapper_QBaseDisconnectNotify((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, QMetaMethod*) ```
void q_hboxplotmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHBoxPlotModelMapper_OnDisconnectNotify((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_first(void* self) {
    return QHBoxPlotModelMapper_First((QHBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_qbase_first(void* self) {
    return QHBoxPlotModelMapper_QBaseFirst((QHBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_hboxplotmodelmapper_on_first(void* self, int32_t (*slot)()) {
    QHBoxPlotModelMapper_OnFirst((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int first ```
void q_hboxplotmodelmapper_set_first(void* self, int first) {
    QHBoxPlotModelMapper_SetFirst((QHBoxPlotModelMapper*)self, first);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int first ```
void q_hboxplotmodelmapper_qbase_set_first(void* self, int first) {
    QHBoxPlotModelMapper_QBaseSetFirst((QHBoxPlotModelMapper*)self, first);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, int) ```
void q_hboxplotmodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QHBoxPlotModelMapper_OnSetFirst((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_count(void* self) {
    return QHBoxPlotModelMapper_Count((QHBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_qbase_count(void* self) {
    return QHBoxPlotModelMapper_QBaseCount((QHBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_hboxplotmodelmapper_on_count(void* self, int32_t (*slot)()) {
    QHBoxPlotModelMapper_OnCount((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int count ```
void q_hboxplotmodelmapper_set_count(void* self, int count) {
    QHBoxPlotModelMapper_SetCount((QHBoxPlotModelMapper*)self, count);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int count ```
void q_hboxplotmodelmapper_qbase_set_count(void* self, int count) {
    QHBoxPlotModelMapper_QBaseSetCount((QHBoxPlotModelMapper*)self, count);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, int) ```
void q_hboxplotmodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QHBoxPlotModelMapper_OnSetCount((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_first_box_set_section(void* self) {
    return QHBoxPlotModelMapper_FirstBoxSetSection((QHBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_qbase_first_box_set_section(void* self) {
    return QHBoxPlotModelMapper_QBaseFirstBoxSetSection((QHBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_hboxplotmodelmapper_on_first_box_set_section(void* self, int32_t (*slot)()) {
    QHBoxPlotModelMapper_OnFirstBoxSetSection((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int firstBoxSetSection ```
void q_hboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection) {
    QHBoxPlotModelMapper_SetFirstBoxSetSection((QHBoxPlotModelMapper*)self, firstBoxSetSection);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int firstBoxSetSection ```
void q_hboxplotmodelmapper_qbase_set_first_box_set_section(void* self, int firstBoxSetSection) {
    QHBoxPlotModelMapper_QBaseSetFirstBoxSetSection((QHBoxPlotModelMapper*)self, firstBoxSetSection);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, int) ```
void q_hboxplotmodelmapper_on_set_first_box_set_section(void* self, void (*slot)(void*, int)) {
    QHBoxPlotModelMapper_OnSetFirstBoxSetSection((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_last_box_set_section(void* self) {
    return QHBoxPlotModelMapper_LastBoxSetSection((QHBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_qbase_last_box_set_section(void* self) {
    return QHBoxPlotModelMapper_QBaseLastBoxSetSection((QHBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_hboxplotmodelmapper_on_last_box_set_section(void* self, int32_t (*slot)()) {
    QHBoxPlotModelMapper_OnLastBoxSetSection((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int lastBoxSetSection ```
void q_hboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection) {
    QHBoxPlotModelMapper_SetLastBoxSetSection((QHBoxPlotModelMapper*)self, lastBoxSetSection);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int lastBoxSetSection ```
void q_hboxplotmodelmapper_qbase_set_last_box_set_section(void* self, int lastBoxSetSection) {
    QHBoxPlotModelMapper_QBaseSetLastBoxSetSection((QHBoxPlotModelMapper*)self, lastBoxSetSection);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, int) ```
void q_hboxplotmodelmapper_on_set_last_box_set_section(void* self, void (*slot)(void*, int)) {
    QHBoxPlotModelMapper_OnSetLastBoxSetSection((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int64_t q_hboxplotmodelmapper_orientation(void* self) {
    return QHBoxPlotModelMapper_Orientation((QHBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int64_t q_hboxplotmodelmapper_qbase_orientation(void* self) {
    return QHBoxPlotModelMapper_QBaseOrientation((QHBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int64_t (*slot)() ```
void q_hboxplotmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QHBoxPlotModelMapper_OnOrientation((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, enum Qt__Orientation orientation ```
void q_hboxplotmodelmapper_set_orientation(void* self, int64_t orientation) {
    QHBoxPlotModelMapper_SetOrientation((QHBoxPlotModelMapper*)self, orientation);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, enum Qt__Orientation orientation ```
void q_hboxplotmodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QHBoxPlotModelMapper_QBaseSetOrientation((QHBoxPlotModelMapper*)self, orientation);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, enum Qt__Orientation) ```
void q_hboxplotmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QHBoxPlotModelMapper_OnSetOrientation((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
QObject* q_hboxplotmodelmapper_sender(void* self) {
    return QHBoxPlotModelMapper_Sender((QHBoxPlotModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
QObject* q_hboxplotmodelmapper_qbase_sender(void* self) {
    return QHBoxPlotModelMapper_QBaseSender((QHBoxPlotModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QObject* (*slot)() ```
void q_hboxplotmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QHBoxPlotModelMapper_OnSender((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_sender_signal_index(void* self) {
    return QHBoxPlotModelMapper_SenderSignalIndex((QHBoxPlotModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_qbase_sender_signal_index(void* self) {
    return QHBoxPlotModelMapper_QBaseSenderSignalIndex((QHBoxPlotModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_hboxplotmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHBoxPlotModelMapper_OnSenderSignalIndex((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, const char* signal ```
int32_t q_hboxplotmodelmapper_receivers(void* self, const char* signal) {
    return QHBoxPlotModelMapper_Receivers((QHBoxPlotModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, const char* signal ```
int32_t q_hboxplotmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QHBoxPlotModelMapper_QBaseReceivers((QHBoxPlotModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)(QHBoxPlotModelMapper*, const char*) ```
void q_hboxplotmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHBoxPlotModelMapper_OnReceivers((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
bool q_hboxplotmodelmapper_is_signal_connected(void* self, void* signal) {
    return QHBoxPlotModelMapper_IsSignalConnected((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
bool q_hboxplotmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QHBoxPlotModelMapper_QBaseIsSignalConnected((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, bool (*slot)(QHBoxPlotModelMapper*, QMetaMethod*) ```
void q_hboxplotmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHBoxPlotModelMapper_OnIsSignalConnected((QHBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_delete(void* self) {
    QHBoxPlotModelMapper_Delete((QHBoxPlotModelMapper*)(self));
}