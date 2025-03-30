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
#include "libqvboxplotmodelmapper.hpp"
#include "libqvboxplotmodelmapper.h"

/// https://doc.qt.io/qt-6/qvboxplotmodelmapper.html

/// q_vboxplotmodelmapper_new constructs a new QVBoxPlotModelMapper object.
///
///
QVBoxPlotModelMapper* q_vboxplotmodelmapper_new() {
    return QVBoxPlotModelMapper_new();
}

/// q_vboxplotmodelmapper_new2 constructs a new QVBoxPlotModelMapper object.
///
/// ``` QObject* parent ```
QVBoxPlotModelMapper* q_vboxplotmodelmapper_new2(void* parent) {
    return QVBoxPlotModelMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVBoxPlotModelMapper* self ```
QMetaObject* q_vboxplotmodelmapper_meta_object(void* self) {
    return QVBoxPlotModelMapper_MetaObject((QVBoxPlotModelMapper*)self);
}

/// ``` QVBoxPlotModelMapper* self, const char* param1 ```
void* q_vboxplotmodelmapper_metacast(void* self, const char* param1) {
    return QVBoxPlotModelMapper_Metacast((QVBoxPlotModelMapper*)self, param1);
}

/// ``` QVBoxPlotModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vboxplotmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVBoxPlotModelMapper_Metacall((QVBoxPlotModelMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)(QVBoxPlotModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_vboxplotmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVBoxPlotModelMapper_OnMetacall((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVBoxPlotModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vboxplotmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVBoxPlotModelMapper_QBaseMetacall((QVBoxPlotModelMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_vboxplotmodelmapper_tr(const char* s) {
    libqt_string _str = QVBoxPlotModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#model)
///
/// ``` QVBoxPlotModelMapper* self ```
QAbstractItemModel* q_vboxplotmodelmapper_model(void* self) {
    return QVBoxPlotModelMapper_Model((QVBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#setModel)
///
/// ``` QVBoxPlotModelMapper* self, QAbstractItemModel* model ```
void q_vboxplotmodelmapper_set_model(void* self, void* model) {
    QVBoxPlotModelMapper_SetModel((QVBoxPlotModelMapper*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#series)
///
/// ``` QVBoxPlotModelMapper* self ```
QBoxPlotSeries* q_vboxplotmodelmapper_series(void* self) {
    return QVBoxPlotModelMapper_Series((QVBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#setSeries)
///
/// ``` QVBoxPlotModelMapper* self, QBoxPlotSeries* series ```
void q_vboxplotmodelmapper_set_series(void* self, void* series) {
    QVBoxPlotModelMapper_SetSeries((QVBoxPlotModelMapper*)self, (QBoxPlotSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#firstBoxSetColumn)
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_first_box_set_column(void* self) {
    return QVBoxPlotModelMapper_FirstBoxSetColumn((QVBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#setFirstBoxSetColumn)
///
/// ``` QVBoxPlotModelMapper* self, int firstBoxSetColumn ```
void q_vboxplotmodelmapper_set_first_box_set_column(void* self, int firstBoxSetColumn) {
    QVBoxPlotModelMapper_SetFirstBoxSetColumn((QVBoxPlotModelMapper*)self, firstBoxSetColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#lastBoxSetColumn)
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_last_box_set_column(void* self) {
    return QVBoxPlotModelMapper_LastBoxSetColumn((QVBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#setLastBoxSetColumn)
///
/// ``` QVBoxPlotModelMapper* self, int lastBoxSetColumn ```
void q_vboxplotmodelmapper_set_last_box_set_column(void* self, int lastBoxSetColumn) {
    QVBoxPlotModelMapper_SetLastBoxSetColumn((QVBoxPlotModelMapper*)self, lastBoxSetColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#firstRow)
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_first_row(void* self) {
    return QVBoxPlotModelMapper_FirstRow((QVBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#setFirstRow)
///
/// ``` QVBoxPlotModelMapper* self, int firstRow ```
void q_vboxplotmodelmapper_set_first_row(void* self, int firstRow) {
    QVBoxPlotModelMapper_SetFirstRow((QVBoxPlotModelMapper*)self, firstRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#rowCount)
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_row_count(void* self) {
    return QVBoxPlotModelMapper_RowCount((QVBoxPlotModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#setRowCount)
///
/// ``` QVBoxPlotModelMapper* self, int rowCount ```
void q_vboxplotmodelmapper_set_row_count(void* self, int rowCount) {
    QVBoxPlotModelMapper_SetRowCount((QVBoxPlotModelMapper*)self, rowCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#seriesReplaced)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_series_replaced(void* self) {
    QVBoxPlotModelMapper_SeriesReplaced((QVBoxPlotModelMapper*)self);
}

/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_SeriesReplaced((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#modelReplaced)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_model_replaced(void* self) {
    QVBoxPlotModelMapper_ModelReplaced((QVBoxPlotModelMapper*)self);
}

/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_ModelReplaced((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#firstBoxSetColumnChanged)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_first_box_set_column_changed(void* self) {
    QVBoxPlotModelMapper_FirstBoxSetColumnChanged((QVBoxPlotModelMapper*)self);
}

/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_first_box_set_column_changed(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#lastBoxSetColumnChanged)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_last_box_set_column_changed(void* self) {
    QVBoxPlotModelMapper_LastBoxSetColumnChanged((QVBoxPlotModelMapper*)self);
}

/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_last_box_set_column_changed(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#firstRowChanged)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_first_row_changed(void* self) {
    QVBoxPlotModelMapper_FirstRowChanged((QVBoxPlotModelMapper*)self);
}

/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_first_row_changed(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_FirstRowChanged((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper.html#rowCountChanged)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_row_count_changed(void* self) {
    QVBoxPlotModelMapper_RowCountChanged((QVBoxPlotModelMapper*)self);
}

/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_row_count_changed(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_RowCountChanged((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_vboxplotmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QVBoxPlotModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_vboxplotmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVBoxPlotModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVBoxPlotModelMapper* self ```
const char* q_vboxplotmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVBoxPlotModelMapper* self, const char* name ```
void q_vboxplotmodelmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVBoxPlotModelMapper* self ```
bool q_vboxplotmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVBoxPlotModelMapper* self ```
bool q_vboxplotmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVBoxPlotModelMapper* self ```
bool q_vboxplotmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVBoxPlotModelMapper* self ```
bool q_vboxplotmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVBoxPlotModelMapper* self, bool b ```
bool q_vboxplotmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVBoxPlotModelMapper* self ```
QThread* q_vboxplotmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVBoxPlotModelMapper* self, QThread* thread ```
void q_vboxplotmodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVBoxPlotModelMapper* self, int interval ```
int32_t q_vboxplotmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVBoxPlotModelMapper* self, int id ```
void q_vboxplotmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVBoxPlotModelMapper* self ```
libqt_list /* of QObject* */ q_vboxplotmodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVBoxPlotModelMapper* self, QObject* parent ```
void q_vboxplotmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVBoxPlotModelMapper* self, QObject* filterObj ```
void q_vboxplotmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVBoxPlotModelMapper* self, QObject* obj ```
void q_vboxplotmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_vboxplotmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVBoxPlotModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_vboxplotmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_vboxplotmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_vboxplotmodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVBoxPlotModelMapper* self, const char* name, QVariant* value ```
bool q_vboxplotmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVBoxPlotModelMapper* self, const char* name ```
QVariant* q_vboxplotmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVBoxPlotModelMapper* self ```
const char** q_vboxplotmodelmapper_dynamic_property_names(void* self) {
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
/// ``` QVBoxPlotModelMapper* self ```
QBindingStorage* q_vboxplotmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVBoxPlotModelMapper* self ```
QBindingStorage* q_vboxplotmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QObject*) ```
void q_vboxplotmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVBoxPlotModelMapper* self ```
QObject* q_vboxplotmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVBoxPlotModelMapper* self, const char* classname ```
bool q_vboxplotmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVBoxPlotModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_vboxplotmodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vboxplotmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVBoxPlotModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vboxplotmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBoxPlotModelMapper* self, QObject* param1 ```
void q_vboxplotmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_vboxplotmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QEvent* event ```
bool q_vboxplotmodelmapper_event(void* self, void* event) {
    return QVBoxPlotModelMapper_Event((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QEvent* event ```
bool q_vboxplotmodelmapper_qbase_event(void* self, void* event) {
    return QVBoxPlotModelMapper_QBaseEvent((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, bool (*slot)(QVBoxPlotModelMapper*, QEvent*) ```
void q_vboxplotmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnEvent((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QObject* watched, QEvent* event ```
bool q_vboxplotmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QVBoxPlotModelMapper_EventFilter((QVBoxPlotModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QObject* watched, QEvent* event ```
bool q_vboxplotmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QVBoxPlotModelMapper_QBaseEventFilter((QVBoxPlotModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, bool (*slot)(QVBoxPlotModelMapper*, QObject*, QEvent*) ```
void q_vboxplotmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVBoxPlotModelMapper_OnEventFilter((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QTimerEvent* event ```
void q_vboxplotmodelmapper_timer_event(void* self, void* event) {
    QVBoxPlotModelMapper_TimerEvent((QVBoxPlotModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QTimerEvent* event ```
void q_vboxplotmodelmapper_qbase_timer_event(void* self, void* event) {
    QVBoxPlotModelMapper_QBaseTimerEvent((QVBoxPlotModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, QTimerEvent*) ```
void q_vboxplotmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnTimerEvent((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QChildEvent* event ```
void q_vboxplotmodelmapper_child_event(void* self, void* event) {
    QVBoxPlotModelMapper_ChildEvent((QVBoxPlotModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QChildEvent* event ```
void q_vboxplotmodelmapper_qbase_child_event(void* self, void* event) {
    QVBoxPlotModelMapper_QBaseChildEvent((QVBoxPlotModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, QChildEvent*) ```
void q_vboxplotmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnChildEvent((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QEvent* event ```
void q_vboxplotmodelmapper_custom_event(void* self, void* event) {
    QVBoxPlotModelMapper_CustomEvent((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QEvent* event ```
void q_vboxplotmodelmapper_qbase_custom_event(void* self, void* event) {
    QVBoxPlotModelMapper_QBaseCustomEvent((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, QEvent*) ```
void q_vboxplotmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnCustomEvent((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_vboxplotmodelmapper_connect_notify(void* self, void* signal) {
    QVBoxPlotModelMapper_ConnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_vboxplotmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QVBoxPlotModelMapper_QBaseConnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, QMetaMethod*) ```
void q_vboxplotmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnConnectNotify((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_vboxplotmodelmapper_disconnect_notify(void* self, void* signal) {
    QVBoxPlotModelMapper_DisconnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_vboxplotmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QVBoxPlotModelMapper_QBaseDisconnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, QMetaMethod*) ```
void q_vboxplotmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnDisconnectNotify((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_first(void* self) {
    return QVBoxPlotModelMapper_First((QVBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_qbase_first(void* self) {
    return QVBoxPlotModelMapper_QBaseFirst((QVBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_vboxplotmodelmapper_on_first(void* self, int32_t (*slot)()) {
    QVBoxPlotModelMapper_OnFirst((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int first ```
void q_vboxplotmodelmapper_set_first(void* self, int first) {
    QVBoxPlotModelMapper_SetFirst((QVBoxPlotModelMapper*)self, first);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int first ```
void q_vboxplotmodelmapper_qbase_set_first(void* self, int first) {
    QVBoxPlotModelMapper_QBaseSetFirst((QVBoxPlotModelMapper*)self, first);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, int) ```
void q_vboxplotmodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QVBoxPlotModelMapper_OnSetFirst((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_count(void* self) {
    return QVBoxPlotModelMapper_Count((QVBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_qbase_count(void* self) {
    return QVBoxPlotModelMapper_QBaseCount((QVBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_vboxplotmodelmapper_on_count(void* self, int32_t (*slot)()) {
    QVBoxPlotModelMapper_OnCount((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int count ```
void q_vboxplotmodelmapper_set_count(void* self, int count) {
    QVBoxPlotModelMapper_SetCount((QVBoxPlotModelMapper*)self, count);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int count ```
void q_vboxplotmodelmapper_qbase_set_count(void* self, int count) {
    QVBoxPlotModelMapper_QBaseSetCount((QVBoxPlotModelMapper*)self, count);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, int) ```
void q_vboxplotmodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QVBoxPlotModelMapper_OnSetCount((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_first_box_set_section(void* self) {
    return QVBoxPlotModelMapper_FirstBoxSetSection((QVBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_qbase_first_box_set_section(void* self) {
    return QVBoxPlotModelMapper_QBaseFirstBoxSetSection((QVBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_vboxplotmodelmapper_on_first_box_set_section(void* self, int32_t (*slot)()) {
    QVBoxPlotModelMapper_OnFirstBoxSetSection((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int firstBoxSetSection ```
void q_vboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection) {
    QVBoxPlotModelMapper_SetFirstBoxSetSection((QVBoxPlotModelMapper*)self, firstBoxSetSection);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int firstBoxSetSection ```
void q_vboxplotmodelmapper_qbase_set_first_box_set_section(void* self, int firstBoxSetSection) {
    QVBoxPlotModelMapper_QBaseSetFirstBoxSetSection((QVBoxPlotModelMapper*)self, firstBoxSetSection);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, int) ```
void q_vboxplotmodelmapper_on_set_first_box_set_section(void* self, void (*slot)(void*, int)) {
    QVBoxPlotModelMapper_OnSetFirstBoxSetSection((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_last_box_set_section(void* self) {
    return QVBoxPlotModelMapper_LastBoxSetSection((QVBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_qbase_last_box_set_section(void* self) {
    return QVBoxPlotModelMapper_QBaseLastBoxSetSection((QVBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_vboxplotmodelmapper_on_last_box_set_section(void* self, int32_t (*slot)()) {
    QVBoxPlotModelMapper_OnLastBoxSetSection((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int lastBoxSetSection ```
void q_vboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection) {
    QVBoxPlotModelMapper_SetLastBoxSetSection((QVBoxPlotModelMapper*)self, lastBoxSetSection);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int lastBoxSetSection ```
void q_vboxplotmodelmapper_qbase_set_last_box_set_section(void* self, int lastBoxSetSection) {
    QVBoxPlotModelMapper_QBaseSetLastBoxSetSection((QVBoxPlotModelMapper*)self, lastBoxSetSection);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, int) ```
void q_vboxplotmodelmapper_on_set_last_box_set_section(void* self, void (*slot)(void*, int)) {
    QVBoxPlotModelMapper_OnSetLastBoxSetSection((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int64_t q_vboxplotmodelmapper_orientation(void* self) {
    return QVBoxPlotModelMapper_Orientation((QVBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int64_t q_vboxplotmodelmapper_qbase_orientation(void* self) {
    return QVBoxPlotModelMapper_QBaseOrientation((QVBoxPlotModelMapper*)self);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int64_t (*slot)() ```
void q_vboxplotmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QVBoxPlotModelMapper_OnOrientation((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, enum Qt__Orientation orientation ```
void q_vboxplotmodelmapper_set_orientation(void* self, int64_t orientation) {
    QVBoxPlotModelMapper_SetOrientation((QVBoxPlotModelMapper*)self, orientation);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, enum Qt__Orientation orientation ```
void q_vboxplotmodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QVBoxPlotModelMapper_QBaseSetOrientation((QVBoxPlotModelMapper*)self, orientation);
}

/// Inherited from QBoxPlotModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, enum Qt__Orientation) ```
void q_vboxplotmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QVBoxPlotModelMapper_OnSetOrientation((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
QObject* q_vboxplotmodelmapper_sender(void* self) {
    return QVBoxPlotModelMapper_Sender((QVBoxPlotModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
QObject* q_vboxplotmodelmapper_qbase_sender(void* self) {
    return QVBoxPlotModelMapper_QBaseSender((QVBoxPlotModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QObject* (*slot)() ```
void q_vboxplotmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QVBoxPlotModelMapper_OnSender((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_sender_signal_index(void* self) {
    return QVBoxPlotModelMapper_SenderSignalIndex((QVBoxPlotModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_qbase_sender_signal_index(void* self) {
    return QVBoxPlotModelMapper_QBaseSenderSignalIndex((QVBoxPlotModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_vboxplotmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVBoxPlotModelMapper_OnSenderSignalIndex((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, const char* signal ```
int32_t q_vboxplotmodelmapper_receivers(void* self, const char* signal) {
    return QVBoxPlotModelMapper_Receivers((QVBoxPlotModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, const char* signal ```
int32_t q_vboxplotmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QVBoxPlotModelMapper_QBaseReceivers((QVBoxPlotModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)(QVBoxPlotModelMapper*, const char*) ```
void q_vboxplotmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVBoxPlotModelMapper_OnReceivers((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
bool q_vboxplotmodelmapper_is_signal_connected(void* self, void* signal) {
    return QVBoxPlotModelMapper_IsSignalConnected((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
bool q_vboxplotmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QVBoxPlotModelMapper_QBaseIsSignalConnected((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, bool (*slot)(QVBoxPlotModelMapper*, QMetaMethod*) ```
void q_vboxplotmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnIsSignalConnected((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_delete(void* self) {
    QVBoxPlotModelMapper_Delete((QVBoxPlotModelMapper*)(self));
}