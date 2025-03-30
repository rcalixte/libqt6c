#include "../libqabstractitemmodel.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "libqpiemodelmapper.hpp"
#include "libqpieseries.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqhpiemodelmapper.hpp"
#include "libqhpiemodelmapper.h"

/// https://doc.qt.io/qt-6/qhpiemodelmapper.html

/// q_hpiemodelmapper_new constructs a new QHPieModelMapper object.
///
///
QHPieModelMapper* q_hpiemodelmapper_new() {
    return QHPieModelMapper_new();
}

/// q_hpiemodelmapper_new2 constructs a new QHPieModelMapper object.
///
/// ``` QObject* parent ```
QHPieModelMapper* q_hpiemodelmapper_new2(void* parent) {
    return QHPieModelMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHPieModelMapper* self ```
QMetaObject* q_hpiemodelmapper_meta_object(void* self) {
    return QHPieModelMapper_MetaObject((QHPieModelMapper*)self);
}

/// ``` QHPieModelMapper* self, const char* param1 ```
void* q_hpiemodelmapper_metacast(void* self, const char* param1) {
    return QHPieModelMapper_Metacast((QHPieModelMapper*)self, param1);
}

/// ``` QHPieModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hpiemodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHPieModelMapper_Metacall((QHPieModelMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHPieModelMapper* self, int32_t (*slot)(QHPieModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_hpiemodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHPieModelMapper_OnMetacall((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHPieModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hpiemodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHPieModelMapper_QBaseMetacall((QHPieModelMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_hpiemodelmapper_tr(const char* s) {
    libqt_string _str = QHPieModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#model)
///
/// ``` QHPieModelMapper* self ```
QAbstractItemModel* q_hpiemodelmapper_model(void* self) {
    return QHPieModelMapper_Model((QHPieModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setModel)
///
/// ``` QHPieModelMapper* self, QAbstractItemModel* model ```
void q_hpiemodelmapper_set_model(void* self, void* model) {
    QHPieModelMapper_SetModel((QHPieModelMapper*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#series)
///
/// ``` QHPieModelMapper* self ```
QPieSeries* q_hpiemodelmapper_series(void* self) {
    return QHPieModelMapper_Series((QHPieModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setSeries)
///
/// ``` QHPieModelMapper* self, QPieSeries* series ```
void q_hpiemodelmapper_set_series(void* self, void* series) {
    QHPieModelMapper_SetSeries((QHPieModelMapper*)self, (QPieSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#valuesRow)
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_values_row(void* self) {
    return QHPieModelMapper_ValuesRow((QHPieModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setValuesRow)
///
/// ``` QHPieModelMapper* self, int valuesRow ```
void q_hpiemodelmapper_set_values_row(void* self, int valuesRow) {
    QHPieModelMapper_SetValuesRow((QHPieModelMapper*)self, valuesRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#labelsRow)
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_labels_row(void* self) {
    return QHPieModelMapper_LabelsRow((QHPieModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setLabelsRow)
///
/// ``` QHPieModelMapper* self, int labelsRow ```
void q_hpiemodelmapper_set_labels_row(void* self, int labelsRow) {
    QHPieModelMapper_SetLabelsRow((QHPieModelMapper*)self, labelsRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#firstColumn)
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_first_column(void* self) {
    return QHPieModelMapper_FirstColumn((QHPieModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setFirstColumn)
///
/// ``` QHPieModelMapper* self, int firstColumn ```
void q_hpiemodelmapper_set_first_column(void* self, int firstColumn) {
    QHPieModelMapper_SetFirstColumn((QHPieModelMapper*)self, firstColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#columnCount)
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_column_count(void* self) {
    return QHPieModelMapper_ColumnCount((QHPieModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setColumnCount)
///
/// ``` QHPieModelMapper* self, int columnCount ```
void q_hpiemodelmapper_set_column_count(void* self, int columnCount) {
    QHPieModelMapper_SetColumnCount((QHPieModelMapper*)self, columnCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#seriesReplaced)
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_series_replaced(void* self) {
    QHPieModelMapper_SeriesReplaced((QHPieModelMapper*)self);
}

/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*) ```
void q_hpiemodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QHPieModelMapper_Connect_SeriesReplaced((QHPieModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#modelReplaced)
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_model_replaced(void* self) {
    QHPieModelMapper_ModelReplaced((QHPieModelMapper*)self);
}

/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*) ```
void q_hpiemodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QHPieModelMapper_Connect_ModelReplaced((QHPieModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#valuesRowChanged)
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_values_row_changed(void* self) {
    QHPieModelMapper_ValuesRowChanged((QHPieModelMapper*)self);
}

/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*) ```
void q_hpiemodelmapper_on_values_row_changed(void* self, void (*slot)(void*)) {
    QHPieModelMapper_Connect_ValuesRowChanged((QHPieModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#labelsRowChanged)
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_labels_row_changed(void* self) {
    QHPieModelMapper_LabelsRowChanged((QHPieModelMapper*)self);
}

/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*) ```
void q_hpiemodelmapper_on_labels_row_changed(void* self, void (*slot)(void*)) {
    QHPieModelMapper_Connect_LabelsRowChanged((QHPieModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#firstColumnChanged)
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_first_column_changed(void* self) {
    QHPieModelMapper_FirstColumnChanged((QHPieModelMapper*)self);
}

/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*) ```
void q_hpiemodelmapper_on_first_column_changed(void* self, void (*slot)(void*)) {
    QHPieModelMapper_Connect_FirstColumnChanged((QHPieModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#columnCountChanged)
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_column_count_changed(void* self) {
    QHPieModelMapper_ColumnCountChanged((QHPieModelMapper*)self);
}

/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*) ```
void q_hpiemodelmapper_on_column_count_changed(void* self, void (*slot)(void*)) {
    QHPieModelMapper_Connect_ColumnCountChanged((QHPieModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_hpiemodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QHPieModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_hpiemodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHPieModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHPieModelMapper* self ```
const char* q_hpiemodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHPieModelMapper* self, const char* name ```
void q_hpiemodelmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHPieModelMapper* self ```
bool q_hpiemodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHPieModelMapper* self ```
bool q_hpiemodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHPieModelMapper* self ```
bool q_hpiemodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHPieModelMapper* self ```
bool q_hpiemodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHPieModelMapper* self, bool b ```
bool q_hpiemodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHPieModelMapper* self ```
QThread* q_hpiemodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHPieModelMapper* self, QThread* thread ```
void q_hpiemodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHPieModelMapper* self, int interval ```
int32_t q_hpiemodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHPieModelMapper* self, int id ```
void q_hpiemodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHPieModelMapper* self ```
libqt_list /* of QObject* */ q_hpiemodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHPieModelMapper* self, QObject* parent ```
void q_hpiemodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHPieModelMapper* self, QObject* filterObj ```
void q_hpiemodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHPieModelMapper* self, QObject* obj ```
void q_hpiemodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_hpiemodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHPieModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_hpiemodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_hpiemodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_hpiemodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHPieModelMapper* self, const char* name, QVariant* value ```
bool q_hpiemodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHPieModelMapper* self, const char* name ```
QVariant* q_hpiemodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHPieModelMapper* self ```
const char** q_hpiemodelmapper_dynamic_property_names(void* self) {
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
/// ``` QHPieModelMapper* self ```
QBindingStorage* q_hpiemodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHPieModelMapper* self ```
QBindingStorage* q_hpiemodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHPieModelMapper* self, void (*slot)(QObject*) ```
void q_hpiemodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHPieModelMapper* self ```
QObject* q_hpiemodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHPieModelMapper* self, const char* classname ```
bool q_hpiemodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHPieModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_hpiemodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hpiemodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHPieModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hpiemodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHPieModelMapper* self, QObject* param1 ```
void q_hpiemodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHPieModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_hpiemodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, QEvent* event ```
bool q_hpiemodelmapper_event(void* self, void* event) {
    return QHPieModelMapper_Event((QHPieModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, QEvent* event ```
bool q_hpiemodelmapper_qbase_event(void* self, void* event) {
    return QHPieModelMapper_QBaseEvent((QHPieModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, bool (*slot)(QHPieModelMapper*, QEvent*) ```
void q_hpiemodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QHPieModelMapper_OnEvent((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, QObject* watched, QEvent* event ```
bool q_hpiemodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHPieModelMapper_EventFilter((QHPieModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, QObject* watched, QEvent* event ```
bool q_hpiemodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QHPieModelMapper_QBaseEventFilter((QHPieModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, bool (*slot)(QHPieModelMapper*, QObject*, QEvent*) ```
void q_hpiemodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHPieModelMapper_OnEventFilter((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, QTimerEvent* event ```
void q_hpiemodelmapper_timer_event(void* self, void* event) {
    QHPieModelMapper_TimerEvent((QHPieModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, QTimerEvent* event ```
void q_hpiemodelmapper_qbase_timer_event(void* self, void* event) {
    QHPieModelMapper_QBaseTimerEvent((QHPieModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*, QTimerEvent*) ```
void q_hpiemodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHPieModelMapper_OnTimerEvent((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, QChildEvent* event ```
void q_hpiemodelmapper_child_event(void* self, void* event) {
    QHPieModelMapper_ChildEvent((QHPieModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, QChildEvent* event ```
void q_hpiemodelmapper_qbase_child_event(void* self, void* event) {
    QHPieModelMapper_QBaseChildEvent((QHPieModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*, QChildEvent*) ```
void q_hpiemodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHPieModelMapper_OnChildEvent((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, QEvent* event ```
void q_hpiemodelmapper_custom_event(void* self, void* event) {
    QHPieModelMapper_CustomEvent((QHPieModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, QEvent* event ```
void q_hpiemodelmapper_qbase_custom_event(void* self, void* event) {
    QHPieModelMapper_QBaseCustomEvent((QHPieModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*, QEvent*) ```
void q_hpiemodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHPieModelMapper_OnCustomEvent((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, QMetaMethod* signal ```
void q_hpiemodelmapper_connect_notify(void* self, void* signal) {
    QHPieModelMapper_ConnectNotify((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, QMetaMethod* signal ```
void q_hpiemodelmapper_qbase_connect_notify(void* self, void* signal) {
    QHPieModelMapper_QBaseConnectNotify((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*, QMetaMethod*) ```
void q_hpiemodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHPieModelMapper_OnConnectNotify((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, QMetaMethod* signal ```
void q_hpiemodelmapper_disconnect_notify(void* self, void* signal) {
    QHPieModelMapper_DisconnectNotify((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, QMetaMethod* signal ```
void q_hpiemodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QHPieModelMapper_QBaseDisconnectNotify((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*, QMetaMethod*) ```
void q_hpiemodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHPieModelMapper_OnDisconnectNotify((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_first(void* self) {
    return QHPieModelMapper_First((QHPieModelMapper*)self);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_qbase_first(void* self) {
    return QHPieModelMapper_QBaseFirst((QHPieModelMapper*)self);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int32_t (*slot)() ```
void q_hpiemodelmapper_on_first(void* self, int32_t (*slot)()) {
    QHPieModelMapper_OnFirst((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, int first ```
void q_hpiemodelmapper_set_first(void* self, int first) {
    QHPieModelMapper_SetFirst((QHPieModelMapper*)self, first);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int first ```
void q_hpiemodelmapper_qbase_set_first(void* self, int first) {
    QHPieModelMapper_QBaseSetFirst((QHPieModelMapper*)self, first);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*, int) ```
void q_hpiemodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QHPieModelMapper_OnSetFirst((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_count(void* self) {
    return QHPieModelMapper_Count((QHPieModelMapper*)self);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_qbase_count(void* self) {
    return QHPieModelMapper_QBaseCount((QHPieModelMapper*)self);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int32_t (*slot)() ```
void q_hpiemodelmapper_on_count(void* self, int32_t (*slot)()) {
    QHPieModelMapper_OnCount((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, int count ```
void q_hpiemodelmapper_set_count(void* self, int count) {
    QHPieModelMapper_SetCount((QHPieModelMapper*)self, count);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int count ```
void q_hpiemodelmapper_qbase_set_count(void* self, int count) {
    QHPieModelMapper_QBaseSetCount((QHPieModelMapper*)self, count);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*, int) ```
void q_hpiemodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QHPieModelMapper_OnSetCount((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_values_section(void* self) {
    return QHPieModelMapper_ValuesSection((QHPieModelMapper*)self);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_qbase_values_section(void* self) {
    return QHPieModelMapper_QBaseValuesSection((QHPieModelMapper*)self);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int32_t (*slot)() ```
void q_hpiemodelmapper_on_values_section(void* self, int32_t (*slot)()) {
    QHPieModelMapper_OnValuesSection((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, int valuesSection ```
void q_hpiemodelmapper_set_values_section(void* self, int valuesSection) {
    QHPieModelMapper_SetValuesSection((QHPieModelMapper*)self, valuesSection);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int valuesSection ```
void q_hpiemodelmapper_qbase_set_values_section(void* self, int valuesSection) {
    QHPieModelMapper_QBaseSetValuesSection((QHPieModelMapper*)self, valuesSection);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*, int) ```
void q_hpiemodelmapper_on_set_values_section(void* self, void (*slot)(void*, int)) {
    QHPieModelMapper_OnSetValuesSection((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_labels_section(void* self) {
    return QHPieModelMapper_LabelsSection((QHPieModelMapper*)self);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_qbase_labels_section(void* self) {
    return QHPieModelMapper_QBaseLabelsSection((QHPieModelMapper*)self);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int32_t (*slot)() ```
void q_hpiemodelmapper_on_labels_section(void* self, int32_t (*slot)()) {
    QHPieModelMapper_OnLabelsSection((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, int labelsSection ```
void q_hpiemodelmapper_set_labels_section(void* self, int labelsSection) {
    QHPieModelMapper_SetLabelsSection((QHPieModelMapper*)self, labelsSection);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int labelsSection ```
void q_hpiemodelmapper_qbase_set_labels_section(void* self, int labelsSection) {
    QHPieModelMapper_QBaseSetLabelsSection((QHPieModelMapper*)self, labelsSection);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*, int) ```
void q_hpiemodelmapper_on_set_labels_section(void* self, void (*slot)(void*, int)) {
    QHPieModelMapper_OnSetLabelsSection((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int64_t q_hpiemodelmapper_orientation(void* self) {
    return QHPieModelMapper_Orientation((QHPieModelMapper*)self);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int64_t q_hpiemodelmapper_qbase_orientation(void* self) {
    return QHPieModelMapper_QBaseOrientation((QHPieModelMapper*)self);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int64_t (*slot)() ```
void q_hpiemodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QHPieModelMapper_OnOrientation((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, enum Qt__Orientation orientation ```
void q_hpiemodelmapper_set_orientation(void* self, int64_t orientation) {
    QHPieModelMapper_SetOrientation((QHPieModelMapper*)self, orientation);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, enum Qt__Orientation orientation ```
void q_hpiemodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QHPieModelMapper_QBaseSetOrientation((QHPieModelMapper*)self, orientation);
}

/// Inherited from QPieModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, void (*slot)(QHPieModelMapper*, enum Qt__Orientation) ```
void q_hpiemodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QHPieModelMapper_OnSetOrientation((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self ```
QObject* q_hpiemodelmapper_sender(void* self) {
    return QHPieModelMapper_Sender((QHPieModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self ```
QObject* q_hpiemodelmapper_qbase_sender(void* self) {
    return QHPieModelMapper_QBaseSender((QHPieModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, QObject* (*slot)() ```
void q_hpiemodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QHPieModelMapper_OnSender((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_sender_signal_index(void* self) {
    return QHPieModelMapper_SenderSignalIndex((QHPieModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self ```
int32_t q_hpiemodelmapper_qbase_sender_signal_index(void* self) {
    return QHPieModelMapper_QBaseSenderSignalIndex((QHPieModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int32_t (*slot)() ```
void q_hpiemodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHPieModelMapper_OnSenderSignalIndex((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, const char* signal ```
int32_t q_hpiemodelmapper_receivers(void* self, const char* signal) {
    return QHPieModelMapper_Receivers((QHPieModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, const char* signal ```
int32_t q_hpiemodelmapper_qbase_receivers(void* self, const char* signal) {
    return QHPieModelMapper_QBaseReceivers((QHPieModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, int32_t (*slot)(QHPieModelMapper*, const char*) ```
void q_hpiemodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHPieModelMapper_OnReceivers((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHPieModelMapper* self, QMetaMethod* signal ```
bool q_hpiemodelmapper_is_signal_connected(void* self, void* signal) {
    return QHPieModelMapper_IsSignalConnected((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHPieModelMapper* self, QMetaMethod* signal ```
bool q_hpiemodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QHPieModelMapper_QBaseIsSignalConnected((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHPieModelMapper* self, bool (*slot)(QHPieModelMapper*, QMetaMethod*) ```
void q_hpiemodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHPieModelMapper_OnIsSignalConnected((QHPieModelMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHPieModelMapper* self ```
void q_hpiemodelmapper_delete(void* self) {
    QHPieModelMapper_Delete((QHPieModelMapper*)(self));
}