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
#include "libqhxymodelmapper.hpp"
#include "libqhxymodelmapper.h"

/// https://doc.qt.io/qt-6/qhxymodelmapper.html

/// q_hxymodelmapper_new constructs a new QHXYModelMapper object.
///
///
QHXYModelMapper* q_hxymodelmapper_new() {
    return QHXYModelMapper_new();
}

/// q_hxymodelmapper_new2 constructs a new QHXYModelMapper object.
///
/// ``` QObject* parent ```
QHXYModelMapper* q_hxymodelmapper_new2(void* parent) {
    return QHXYModelMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHXYModelMapper* self ```
QMetaObject* q_hxymodelmapper_meta_object(void* self) {
    return QHXYModelMapper_MetaObject((QHXYModelMapper*)self);
}

/// ``` QHXYModelMapper* self, const char* param1 ```
void* q_hxymodelmapper_metacast(void* self, const char* param1) {
    return QHXYModelMapper_Metacast((QHXYModelMapper*)self, param1);
}

/// ``` QHXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hxymodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHXYModelMapper_Metacall((QHXYModelMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)(QHXYModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_hxymodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHXYModelMapper_OnMetacall((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hxymodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHXYModelMapper_QBaseMetacall((QHXYModelMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_hxymodelmapper_tr(const char* s) {
    libqt_string _str = QHXYModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#model)
///
/// ``` QHXYModelMapper* self ```
QAbstractItemModel* q_hxymodelmapper_model(void* self) {
    return QHXYModelMapper_Model((QHXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#setModel)
///
/// ``` QHXYModelMapper* self, QAbstractItemModel* model ```
void q_hxymodelmapper_set_model(void* self, void* model) {
    QHXYModelMapper_SetModel((QHXYModelMapper*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#series)
///
/// ``` QHXYModelMapper* self ```
QXYSeries* q_hxymodelmapper_series(void* self) {
    return QHXYModelMapper_Series((QHXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#setSeries)
///
/// ``` QHXYModelMapper* self, QXYSeries* series ```
void q_hxymodelmapper_set_series(void* self, void* series) {
    QHXYModelMapper_SetSeries((QHXYModelMapper*)self, (QXYSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#xRow)
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_x_row(void* self) {
    return QHXYModelMapper_XRow((QHXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#setXRow)
///
/// ``` QHXYModelMapper* self, int xRow ```
void q_hxymodelmapper_set_x_row(void* self, int xRow) {
    QHXYModelMapper_SetXRow((QHXYModelMapper*)self, xRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#yRow)
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_y_row(void* self) {
    return QHXYModelMapper_YRow((QHXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#setYRow)
///
/// ``` QHXYModelMapper* self, int yRow ```
void q_hxymodelmapper_set_y_row(void* self, int yRow) {
    QHXYModelMapper_SetYRow((QHXYModelMapper*)self, yRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#firstColumn)
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_first_column(void* self) {
    return QHXYModelMapper_FirstColumn((QHXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#setFirstColumn)
///
/// ``` QHXYModelMapper* self, int firstColumn ```
void q_hxymodelmapper_set_first_column(void* self, int firstColumn) {
    QHXYModelMapper_SetFirstColumn((QHXYModelMapper*)self, firstColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#columnCount)
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_column_count(void* self) {
    return QHXYModelMapper_ColumnCount((QHXYModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#setColumnCount)
///
/// ``` QHXYModelMapper* self, int columnCount ```
void q_hxymodelmapper_set_column_count(void* self, int columnCount) {
    QHXYModelMapper_SetColumnCount((QHXYModelMapper*)self, columnCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#seriesReplaced)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_series_replaced(void* self) {
    QHXYModelMapper_SeriesReplaced((QHXYModelMapper*)self);
}

/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QHXYModelMapper_Connect_SeriesReplaced((QHXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#modelReplaced)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_model_replaced(void* self) {
    QHXYModelMapper_ModelReplaced((QHXYModelMapper*)self);
}

/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QHXYModelMapper_Connect_ModelReplaced((QHXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#xRowChanged)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_x_row_changed(void* self) {
    QHXYModelMapper_XRowChanged((QHXYModelMapper*)self);
}

/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_x_row_changed(void* self, void (*slot)(void*)) {
    QHXYModelMapper_Connect_XRowChanged((QHXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#yRowChanged)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_y_row_changed(void* self) {
    QHXYModelMapper_YRowChanged((QHXYModelMapper*)self);
}

/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_y_row_changed(void* self, void (*slot)(void*)) {
    QHXYModelMapper_Connect_YRowChanged((QHXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#firstColumnChanged)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_first_column_changed(void* self) {
    QHXYModelMapper_FirstColumnChanged((QHXYModelMapper*)self);
}

/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_first_column_changed(void* self, void (*slot)(void*)) {
    QHXYModelMapper_Connect_FirstColumnChanged((QHXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper.html#columnCountChanged)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_column_count_changed(void* self) {
    QHXYModelMapper_ColumnCountChanged((QHXYModelMapper*)self);
}

/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_column_count_changed(void* self, void (*slot)(void*)) {
    QHXYModelMapper_Connect_ColumnCountChanged((QHXYModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_hxymodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QHXYModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_hxymodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHXYModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHXYModelMapper* self ```
const char* q_hxymodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHXYModelMapper* self, const char* name ```
void q_hxymodelmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHXYModelMapper* self ```
bool q_hxymodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHXYModelMapper* self ```
bool q_hxymodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHXYModelMapper* self ```
bool q_hxymodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHXYModelMapper* self ```
bool q_hxymodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHXYModelMapper* self, bool b ```
bool q_hxymodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHXYModelMapper* self ```
QThread* q_hxymodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHXYModelMapper* self, QThread* thread ```
void q_hxymodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHXYModelMapper* self, int interval ```
int32_t q_hxymodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHXYModelMapper* self, int id ```
void q_hxymodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHXYModelMapper* self ```
libqt_list /* of QObject* */ q_hxymodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHXYModelMapper* self, QObject* parent ```
void q_hxymodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHXYModelMapper* self, QObject* filterObj ```
void q_hxymodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHXYModelMapper* self, QObject* obj ```
void q_hxymodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_hxymodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHXYModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_hxymodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_hxymodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_hxymodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHXYModelMapper* self, const char* name, QVariant* value ```
bool q_hxymodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHXYModelMapper* self, const char* name ```
QVariant* q_hxymodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHXYModelMapper* self ```
const char** q_hxymodelmapper_dynamic_property_names(void* self) {
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
/// ``` QHXYModelMapper* self ```
QBindingStorage* q_hxymodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHXYModelMapper* self ```
QBindingStorage* q_hxymodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHXYModelMapper* self, void (*slot)(QObject*) ```
void q_hxymodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHXYModelMapper* self ```
QObject* q_hxymodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHXYModelMapper* self, const char* classname ```
bool q_hxymodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHXYModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_hxymodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hxymodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHXYModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hxymodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHXYModelMapper* self, QObject* param1 ```
void q_hxymodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHXYModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_hxymodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QEvent* event ```
bool q_hxymodelmapper_event(void* self, void* event) {
    return QHXYModelMapper_Event((QHXYModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QEvent* event ```
bool q_hxymodelmapper_qbase_event(void* self, void* event) {
    return QHXYModelMapper_QBaseEvent((QHXYModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, bool (*slot)(QHXYModelMapper*, QEvent*) ```
void q_hxymodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QHXYModelMapper_OnEvent((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QObject* watched, QEvent* event ```
bool q_hxymodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHXYModelMapper_EventFilter((QHXYModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QObject* watched, QEvent* event ```
bool q_hxymodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QHXYModelMapper_QBaseEventFilter((QHXYModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, bool (*slot)(QHXYModelMapper*, QObject*, QEvent*) ```
void q_hxymodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHXYModelMapper_OnEventFilter((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QTimerEvent* event ```
void q_hxymodelmapper_timer_event(void* self, void* event) {
    QHXYModelMapper_TimerEvent((QHXYModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QTimerEvent* event ```
void q_hxymodelmapper_qbase_timer_event(void* self, void* event) {
    QHXYModelMapper_QBaseTimerEvent((QHXYModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, QTimerEvent*) ```
void q_hxymodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHXYModelMapper_OnTimerEvent((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QChildEvent* event ```
void q_hxymodelmapper_child_event(void* self, void* event) {
    QHXYModelMapper_ChildEvent((QHXYModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QChildEvent* event ```
void q_hxymodelmapper_qbase_child_event(void* self, void* event) {
    QHXYModelMapper_QBaseChildEvent((QHXYModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, QChildEvent*) ```
void q_hxymodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHXYModelMapper_OnChildEvent((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QEvent* event ```
void q_hxymodelmapper_custom_event(void* self, void* event) {
    QHXYModelMapper_CustomEvent((QHXYModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QEvent* event ```
void q_hxymodelmapper_qbase_custom_event(void* self, void* event) {
    QHXYModelMapper_QBaseCustomEvent((QHXYModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, QEvent*) ```
void q_hxymodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHXYModelMapper_OnCustomEvent((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
void q_hxymodelmapper_connect_notify(void* self, void* signal) {
    QHXYModelMapper_ConnectNotify((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
void q_hxymodelmapper_qbase_connect_notify(void* self, void* signal) {
    QHXYModelMapper_QBaseConnectNotify((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, QMetaMethod*) ```
void q_hxymodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHXYModelMapper_OnConnectNotify((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
void q_hxymodelmapper_disconnect_notify(void* self, void* signal) {
    QHXYModelMapper_DisconnectNotify((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
void q_hxymodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QHXYModelMapper_QBaseDisconnectNotify((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, QMetaMethod*) ```
void q_hxymodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHXYModelMapper_OnDisconnectNotify((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_first(void* self) {
    return QHXYModelMapper_First((QHXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_qbase_first(void* self) {
    return QHXYModelMapper_QBaseFirst((QHXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)() ```
void q_hxymodelmapper_on_first(void* self, int32_t (*slot)()) {
    QHXYModelMapper_OnFirst((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, int first ```
void q_hxymodelmapper_set_first(void* self, int first) {
    QHXYModelMapper_SetFirst((QHXYModelMapper*)self, first);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int first ```
void q_hxymodelmapper_qbase_set_first(void* self, int first) {
    QHXYModelMapper_QBaseSetFirst((QHXYModelMapper*)self, first);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, int) ```
void q_hxymodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QHXYModelMapper_OnSetFirst((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_count(void* self) {
    return QHXYModelMapper_Count((QHXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_qbase_count(void* self) {
    return QHXYModelMapper_QBaseCount((QHXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)() ```
void q_hxymodelmapper_on_count(void* self, int32_t (*slot)()) {
    QHXYModelMapper_OnCount((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, int count ```
void q_hxymodelmapper_set_count(void* self, int count) {
    QHXYModelMapper_SetCount((QHXYModelMapper*)self, count);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int count ```
void q_hxymodelmapper_qbase_set_count(void* self, int count) {
    QHXYModelMapper_QBaseSetCount((QHXYModelMapper*)self, count);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, int) ```
void q_hxymodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QHXYModelMapper_OnSetCount((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int64_t q_hxymodelmapper_orientation(void* self) {
    return QHXYModelMapper_Orientation((QHXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int64_t q_hxymodelmapper_qbase_orientation(void* self) {
    return QHXYModelMapper_QBaseOrientation((QHXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int64_t (*slot)() ```
void q_hxymodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QHXYModelMapper_OnOrientation((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, enum Qt__Orientation orientation ```
void q_hxymodelmapper_set_orientation(void* self, int64_t orientation) {
    QHXYModelMapper_SetOrientation((QHXYModelMapper*)self, orientation);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, enum Qt__Orientation orientation ```
void q_hxymodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QHXYModelMapper_QBaseSetOrientation((QHXYModelMapper*)self, orientation);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, enum Qt__Orientation) ```
void q_hxymodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QHXYModelMapper_OnSetOrientation((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_x_section(void* self) {
    return QHXYModelMapper_XSection((QHXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_qbase_x_section(void* self) {
    return QHXYModelMapper_QBaseXSection((QHXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)() ```
void q_hxymodelmapper_on_x_section(void* self, int32_t (*slot)()) {
    QHXYModelMapper_OnXSection((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, int xSection ```
void q_hxymodelmapper_set_x_section(void* self, int xSection) {
    QHXYModelMapper_SetXSection((QHXYModelMapper*)self, xSection);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int xSection ```
void q_hxymodelmapper_qbase_set_x_section(void* self, int xSection) {
    QHXYModelMapper_QBaseSetXSection((QHXYModelMapper*)self, xSection);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, int) ```
void q_hxymodelmapper_on_set_x_section(void* self, void (*slot)(void*, int)) {
    QHXYModelMapper_OnSetXSection((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_y_section(void* self) {
    return QHXYModelMapper_YSection((QHXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_qbase_y_section(void* self) {
    return QHXYModelMapper_QBaseYSection((QHXYModelMapper*)self);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)() ```
void q_hxymodelmapper_on_y_section(void* self, int32_t (*slot)()) {
    QHXYModelMapper_OnYSection((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, int ySection ```
void q_hxymodelmapper_set_y_section(void* self, int ySection) {
    QHXYModelMapper_SetYSection((QHXYModelMapper*)self, ySection);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int ySection ```
void q_hxymodelmapper_qbase_set_y_section(void* self, int ySection) {
    QHXYModelMapper_QBaseSetYSection((QHXYModelMapper*)self, ySection);
}

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, int) ```
void q_hxymodelmapper_on_set_y_section(void* self, void (*slot)(void*, int)) {
    QHXYModelMapper_OnSetYSection((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
QObject* q_hxymodelmapper_sender(void* self) {
    return QHXYModelMapper_Sender((QHXYModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
QObject* q_hxymodelmapper_qbase_sender(void* self) {
    return QHXYModelMapper_QBaseSender((QHXYModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QObject* (*slot)() ```
void q_hxymodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QHXYModelMapper_OnSender((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_sender_signal_index(void* self) {
    return QHXYModelMapper_SenderSignalIndex((QHXYModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_qbase_sender_signal_index(void* self) {
    return QHXYModelMapper_QBaseSenderSignalIndex((QHXYModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)() ```
void q_hxymodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHXYModelMapper_OnSenderSignalIndex((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, const char* signal ```
int32_t q_hxymodelmapper_receivers(void* self, const char* signal) {
    return QHXYModelMapper_Receivers((QHXYModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, const char* signal ```
int32_t q_hxymodelmapper_qbase_receivers(void* self, const char* signal) {
    return QHXYModelMapper_QBaseReceivers((QHXYModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)(QHXYModelMapper*, const char*) ```
void q_hxymodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHXYModelMapper_OnReceivers((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
bool q_hxymodelmapper_is_signal_connected(void* self, void* signal) {
    return QHXYModelMapper_IsSignalConnected((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
bool q_hxymodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QHXYModelMapper_QBaseIsSignalConnected((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, bool (*slot)(QHXYModelMapper*, QMetaMethod*) ```
void q_hxymodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHXYModelMapper_OnIsSignalConnected((QHXYModelMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_delete(void* self) {
    QHXYModelMapper_Delete((QHXYModelMapper*)(self));
}