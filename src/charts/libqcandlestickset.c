#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqcandlestickset.hpp"
#include "libqcandlestickset.h"

/// https://doc.qt.io/qt-6/qcandlestickset.html

/// q_candlestickset_new constructs a new QCandlestickSet object.
///
///
QCandlestickSet* q_candlestickset_new() {
    return QCandlestickSet_new();
}

/// q_candlestickset_new2 constructs a new QCandlestickSet object.
///
/// ``` double open, double high, double low, double close ```
QCandlestickSet* q_candlestickset_new2(double open, double high, double low, double close) {
    return QCandlestickSet_new2(open, high, low, close);
}

/// q_candlestickset_new3 constructs a new QCandlestickSet object.
///
/// ``` double timestamp ```
QCandlestickSet* q_candlestickset_new3(double timestamp) {
    return QCandlestickSet_new3(timestamp);
}

/// q_candlestickset_new4 constructs a new QCandlestickSet object.
///
/// ``` double timestamp, QObject* parent ```
QCandlestickSet* q_candlestickset_new4(double timestamp, void* parent) {
    return QCandlestickSet_new4(timestamp, (QObject*)parent);
}

/// q_candlestickset_new5 constructs a new QCandlestickSet object.
///
/// ``` double open, double high, double low, double close, double timestamp ```
QCandlestickSet* q_candlestickset_new5(double open, double high, double low, double close, double timestamp) {
    return QCandlestickSet_new5(open, high, low, close, timestamp);
}

/// q_candlestickset_new6 constructs a new QCandlestickSet object.
///
/// ``` double open, double high, double low, double close, double timestamp, QObject* parent ```
QCandlestickSet* q_candlestickset_new6(double open, double high, double low, double close, double timestamp, void* parent) {
    return QCandlestickSet_new6(open, high, low, close, timestamp, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCandlestickSet* self ```
QMetaObject* q_candlestickset_meta_object(void* self) {
    return QCandlestickSet_MetaObject((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, const char* param1 ```
void* q_candlestickset_metacast(void* self, const char* param1) {
    return QCandlestickSet_Metacast((QCandlestickSet*)self, param1);
}

/// ``` QCandlestickSet* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickset_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickSet_Metacall((QCandlestickSet*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickSet* self, int32_t (*slot)(QCandlestickSet*, enum QMetaObject__Call, int, void*) ```
void q_candlestickset_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCandlestickSet_OnMetacall((QCandlestickSet*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickSet* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickset_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickSet_QBaseMetacall((QCandlestickSet*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_candlestickset_tr(const char* s) {
    libqt_string _str = QCandlestickSet_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#setTimestamp)
///
/// ``` QCandlestickSet* self, double timestamp ```
void q_candlestickset_set_timestamp(void* self, double timestamp) {
    QCandlestickSet_SetTimestamp((QCandlestickSet*)self, timestamp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#timestamp)
///
/// ``` QCandlestickSet* self ```
double q_candlestickset_timestamp(void* self) {
    return QCandlestickSet_Timestamp((QCandlestickSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#setOpen)
///
/// ``` QCandlestickSet* self, double open ```
void q_candlestickset_set_open(void* self, double open) {
    QCandlestickSet_SetOpen((QCandlestickSet*)self, open);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#open)
///
/// ``` QCandlestickSet* self ```
double q_candlestickset_open(void* self) {
    return QCandlestickSet_Open((QCandlestickSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#setHigh)
///
/// ``` QCandlestickSet* self, double high ```
void q_candlestickset_set_high(void* self, double high) {
    QCandlestickSet_SetHigh((QCandlestickSet*)self, high);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#high)
///
/// ``` QCandlestickSet* self ```
double q_candlestickset_high(void* self) {
    return QCandlestickSet_High((QCandlestickSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#setLow)
///
/// ``` QCandlestickSet* self, double low ```
void q_candlestickset_set_low(void* self, double low) {
    QCandlestickSet_SetLow((QCandlestickSet*)self, low);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#low)
///
/// ``` QCandlestickSet* self ```
double q_candlestickset_low(void* self) {
    return QCandlestickSet_Low((QCandlestickSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#setClose)
///
/// ``` QCandlestickSet* self, double close ```
void q_candlestickset_set_close(void* self, double close) {
    QCandlestickSet_SetClose((QCandlestickSet*)self, close);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#close)
///
/// ``` QCandlestickSet* self ```
double q_candlestickset_close(void* self) {
    return QCandlestickSet_Close((QCandlestickSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#setBrush)
///
/// ``` QCandlestickSet* self, QBrush* brush ```
void q_candlestickset_set_brush(void* self, void* brush) {
    QCandlestickSet_SetBrush((QCandlestickSet*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#brush)
///
/// ``` QCandlestickSet* self ```
QBrush* q_candlestickset_brush(void* self) {
    return QCandlestickSet_Brush((QCandlestickSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#setPen)
///
/// ``` QCandlestickSet* self, QPen* pen ```
void q_candlestickset_set_pen(void* self, void* pen) {
    QCandlestickSet_SetPen((QCandlestickSet*)self, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#pen)
///
/// ``` QCandlestickSet* self ```
QPen* q_candlestickset_pen(void* self) {
    return QCandlestickSet_Pen((QCandlestickSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#clicked)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_clicked(void* self) {
    QCandlestickSet_Clicked((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_clicked(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_Clicked((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#hovered)
///
/// ``` QCandlestickSet* self, bool status ```
void q_candlestickset_hovered(void* self, bool status) {
    QCandlestickSet_Hovered((QCandlestickSet*)self, status);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, bool) ```
void q_candlestickset_on_hovered(void* self, void (*slot)(void*, bool)) {
    QCandlestickSet_Connect_Hovered((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#pressed)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_pressed(void* self) {
    QCandlestickSet_Pressed((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_pressed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_Pressed((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#released)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_released(void* self) {
    QCandlestickSet_Released((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_released(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_Released((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#doubleClicked)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_double_clicked(void* self) {
    QCandlestickSet_DoubleClicked((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_double_clicked(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_DoubleClicked((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#timestampChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_timestamp_changed(void* self) {
    QCandlestickSet_TimestampChanged((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_timestamp_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_TimestampChanged((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#openChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_open_changed(void* self) {
    QCandlestickSet_OpenChanged((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_open_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_OpenChanged((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#highChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_high_changed(void* self) {
    QCandlestickSet_HighChanged((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_high_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_HighChanged((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#lowChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_low_changed(void* self) {
    QCandlestickSet_LowChanged((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_low_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_LowChanged((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#closeChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_close_changed(void* self) {
    QCandlestickSet_CloseChanged((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_close_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_CloseChanged((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#brushChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_brush_changed(void* self) {
    QCandlestickSet_BrushChanged((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_brush_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_BrushChanged((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset.html#penChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_pen_changed(void* self) {
    QCandlestickSet_PenChanged((QCandlestickSet*)self);
}

/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_pen_changed(void* self, void (*slot)(void*)) {
    QCandlestickSet_Connect_PenChanged((QCandlestickSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_candlestickset_tr2(const char* s, const char* c) {
    libqt_string _str = QCandlestickSet_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_candlestickset_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCandlestickSet_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCandlestickSet* self ```
const char* q_candlestickset_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCandlestickSet* self, const char* name ```
void q_candlestickset_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCandlestickSet* self ```
bool q_candlestickset_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCandlestickSet* self ```
bool q_candlestickset_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCandlestickSet* self ```
bool q_candlestickset_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCandlestickSet* self ```
bool q_candlestickset_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCandlestickSet* self, bool b ```
bool q_candlestickset_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCandlestickSet* self ```
QThread* q_candlestickset_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCandlestickSet* self, QThread* thread ```
void q_candlestickset_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickSet* self, int interval ```
int32_t q_candlestickset_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCandlestickSet* self, int id ```
void q_candlestickset_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCandlestickSet* self ```
libqt_list /* of QObject* */ q_candlestickset_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCandlestickSet* self, QObject* parent ```
void q_candlestickset_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCandlestickSet* self, QObject* filterObj ```
void q_candlestickset_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCandlestickSet* self, QObject* obj ```
void q_candlestickset_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_candlestickset_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickSet* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_candlestickset_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_candlestickset_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_candlestickset_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCandlestickSet* self, const char* name, QVariant* value ```
bool q_candlestickset_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCandlestickSet* self, const char* name ```
QVariant* q_candlestickset_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCandlestickSet* self ```
const char** q_candlestickset_dynamic_property_names(void* self) {
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
/// ``` QCandlestickSet* self ```
QBindingStorage* q_candlestickset_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickSet* self ```
QBindingStorage* q_candlestickset_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCandlestickSet* self, void (*slot)(QObject*) ```
void q_candlestickset_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCandlestickSet* self ```
QObject* q_candlestickset_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCandlestickSet* self, const char* classname ```
bool q_candlestickset_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickSet* self, int interval, enum Qt__TimerType timerType ```
int32_t q_candlestickset_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickset_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickSet* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickset_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSet* self, QObject* param1 ```
void q_candlestickset_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCandlestickSet* self, void (*slot)(QObject*, QObject*) ```
void q_candlestickset_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QEvent* event ```
bool q_candlestickset_event(void* self, void* event) {
    return QCandlestickSet_Event((QCandlestickSet*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QEvent* event ```
bool q_candlestickset_qbase_event(void* self, void* event) {
    return QCandlestickSet_QBaseEvent((QCandlestickSet*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, bool (*slot)(QCandlestickSet*, QEvent*) ```
void q_candlestickset_on_event(void* self, bool (*slot)(void*, void*)) {
    QCandlestickSet_OnEvent((QCandlestickSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QObject* watched, QEvent* event ```
bool q_candlestickset_event_filter(void* self, void* watched, void* event) {
    return QCandlestickSet_EventFilter((QCandlestickSet*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QObject* watched, QEvent* event ```
bool q_candlestickset_qbase_event_filter(void* self, void* watched, void* event) {
    return QCandlestickSet_QBaseEventFilter((QCandlestickSet*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, bool (*slot)(QCandlestickSet*, QObject*, QEvent*) ```
void q_candlestickset_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCandlestickSet_OnEventFilter((QCandlestickSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QTimerEvent* event ```
void q_candlestickset_timer_event(void* self, void* event) {
    QCandlestickSet_TimerEvent((QCandlestickSet*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QTimerEvent* event ```
void q_candlestickset_qbase_timer_event(void* self, void* event) {
    QCandlestickSet_QBaseTimerEvent((QCandlestickSet*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, QTimerEvent*) ```
void q_candlestickset_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickSet_OnTimerEvent((QCandlestickSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QChildEvent* event ```
void q_candlestickset_child_event(void* self, void* event) {
    QCandlestickSet_ChildEvent((QCandlestickSet*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QChildEvent* event ```
void q_candlestickset_qbase_child_event(void* self, void* event) {
    QCandlestickSet_QBaseChildEvent((QCandlestickSet*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, QChildEvent*) ```
void q_candlestickset_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickSet_OnChildEvent((QCandlestickSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QEvent* event ```
void q_candlestickset_custom_event(void* self, void* event) {
    QCandlestickSet_CustomEvent((QCandlestickSet*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QEvent* event ```
void q_candlestickset_qbase_custom_event(void* self, void* event) {
    QCandlestickSet_QBaseCustomEvent((QCandlestickSet*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, QEvent*) ```
void q_candlestickset_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickSet_OnCustomEvent((QCandlestickSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
void q_candlestickset_connect_notify(void* self, void* signal) {
    QCandlestickSet_ConnectNotify((QCandlestickSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
void q_candlestickset_qbase_connect_notify(void* self, void* signal) {
    QCandlestickSet_QBaseConnectNotify((QCandlestickSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, QMetaMethod*) ```
void q_candlestickset_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCandlestickSet_OnConnectNotify((QCandlestickSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
void q_candlestickset_disconnect_notify(void* self, void* signal) {
    QCandlestickSet_DisconnectNotify((QCandlestickSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
void q_candlestickset_qbase_disconnect_notify(void* self, void* signal) {
    QCandlestickSet_QBaseDisconnectNotify((QCandlestickSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, QMetaMethod*) ```
void q_candlestickset_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCandlestickSet_OnDisconnectNotify((QCandlestickSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self ```
QObject* q_candlestickset_sender(void* self) {
    return QCandlestickSet_Sender((QCandlestickSet*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self ```
QObject* q_candlestickset_qbase_sender(void* self) {
    return QCandlestickSet_QBaseSender((QCandlestickSet*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, QObject* (*slot)() ```
void q_candlestickset_on_sender(void* self, QObject* (*slot)()) {
    QCandlestickSet_OnSender((QCandlestickSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self ```
int32_t q_candlestickset_sender_signal_index(void* self) {
    return QCandlestickSet_SenderSignalIndex((QCandlestickSet*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self ```
int32_t q_candlestickset_qbase_sender_signal_index(void* self) {
    return QCandlestickSet_QBaseSenderSignalIndex((QCandlestickSet*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, int32_t (*slot)() ```
void q_candlestickset_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCandlestickSet_OnSenderSignalIndex((QCandlestickSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, const char* signal ```
int32_t q_candlestickset_receivers(void* self, const char* signal) {
    return QCandlestickSet_Receivers((QCandlestickSet*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, const char* signal ```
int32_t q_candlestickset_qbase_receivers(void* self, const char* signal) {
    return QCandlestickSet_QBaseReceivers((QCandlestickSet*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, int32_t (*slot)(QCandlestickSet*, const char*) ```
void q_candlestickset_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCandlestickSet_OnReceivers((QCandlestickSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
bool q_candlestickset_is_signal_connected(void* self, void* signal) {
    return QCandlestickSet_IsSignalConnected((QCandlestickSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
bool q_candlestickset_qbase_is_signal_connected(void* self, void* signal) {
    return QCandlestickSet_QBaseIsSignalConnected((QCandlestickSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, bool (*slot)(QCandlestickSet*, QMetaMethod*) ```
void q_candlestickset_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCandlestickSet_OnIsSignalConnected((QCandlestickSet*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_delete(void* self) {
    QCandlestickSet_Delete((QCandlestickSet*)(self));
}