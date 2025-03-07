#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqsignalmapper.hpp"
#include "libqsignalmapper.h"

/// https://doc.qt.io/qt-6/qsignalmapper.html

/// q_signalmapper_new constructs a new QSignalMapper object.
///
///
QSignalMapper* q_signalmapper_new() {
    return QSignalMapper_new();
}

/// q_signalmapper_new2 constructs a new QSignalMapper object.
///
/// ``` QObject* parent ```
QSignalMapper* q_signalmapper_new2(void* parent) {
    return QSignalMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSignalMapper* self ```
QMetaObject* q_signalmapper_meta_object(void* self) {
    return QSignalMapper_MetaObject((QSignalMapper*)self);
}

/// ``` QSignalMapper* self, const char* param1 ```
void* q_signalmapper_metacast(void* self, const char* param1) {
    return QSignalMapper_Metacast((QSignalMapper*)self, param1);
}

/// ``` QSignalMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_signalmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSignalMapper_Metacall((QSignalMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSignalMapper* self, int32_t (*slot)(QSignalMapper*, enum QMetaObject__Call, int, void*) ```
void q_signalmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSignalMapper_OnMetacall((QSignalMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSignalMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_signalmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSignalMapper_QBaseMetacall((QSignalMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_signalmapper_tr(const char* s) {
    libqt_string _str = QSignalMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// ``` QSignalMapper* self, QObject* sender, int id ```
void q_signalmapper_set_mapping(void* self, void* sender, int id) {
    QSignalMapper_SetMapping((QSignalMapper*)self, (QObject*)sender, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// ``` QSignalMapper* self, QObject* sender, const char* text ```
void q_signalmapper_set_mapping2(void* self, void* sender, const char* text) {
    QSignalMapper_SetMapping2((QSignalMapper*)self, (QObject*)sender, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// ``` QSignalMapper* self, QObject* sender, QObject* object ```
void q_signalmapper_set_mapping3(void* self, void* sender, void* object) {
    QSignalMapper_SetMapping3((QSignalMapper*)self, (QObject*)sender, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#removeMappings)
///
/// ``` QSignalMapper* self, QObject* sender ```
void q_signalmapper_remove_mappings(void* self, void* sender) {
    QSignalMapper_RemoveMappings((QSignalMapper*)self, (QObject*)sender);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// ``` QSignalMapper* self, int id ```
QObject* q_signalmapper_mapping(void* self, int id) {
    return QSignalMapper_Mapping((QSignalMapper*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// ``` QSignalMapper* self, const char* text ```
QObject* q_signalmapper_mapping_with_text(void* self, const char* text) {
    return QSignalMapper_MappingWithText((QSignalMapper*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// ``` QSignalMapper* self, QObject* object ```
QObject* q_signalmapper_mapping_with_object(void* self, void* object) {
    return QSignalMapper_MappingWithObject((QSignalMapper*)self, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedInt)
///
/// ``` QSignalMapper* self, int param1 ```
void q_signalmapper_mapped_int(void* self, int param1) {
    QSignalMapper_MappedInt((QSignalMapper*)self, param1);
}

/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, int) ```
void q_signalmapper_on_mapped_int(void* self, void (*slot)(void*, int)) {
    QSignalMapper_Connect_MappedInt((QSignalMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedString)
///
/// ``` QSignalMapper* self, const char* param1 ```
void q_signalmapper_mapped_string(void* self, const char* param1) {
    QSignalMapper_MappedString((QSignalMapper*)self, qstring(param1));
}

/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, const char*) ```
void q_signalmapper_on_mapped_string(void* self, void (*slot)(void*, const char*)) {
    QSignalMapper_Connect_MappedString((QSignalMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedObject)
///
/// ``` QSignalMapper* self, QObject* param1 ```
void q_signalmapper_mapped_object(void* self, void* param1) {
    QSignalMapper_MappedObject((QSignalMapper*)self, (QObject*)param1);
}

/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QObject*) ```
void q_signalmapper_on_mapped_object(void* self, void (*slot)(void*, void*)) {
    QSignalMapper_Connect_MappedObject((QSignalMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#map)
///
/// ``` QSignalMapper* self ```
void q_signalmapper_map(void* self) {
    QSignalMapper_Map((QSignalMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#map)
///
/// ``` QSignalMapper* self, QObject* sender ```
void q_signalmapper_map_with_sender(void* self, void* sender) {
    QSignalMapper_MapWithSender((QSignalMapper*)self, (QObject*)sender);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_signalmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QSignalMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_signalmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSignalMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSignalMapper* self ```
const char* q_signalmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSignalMapper* self, const char* name ```
void q_signalmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSignalMapper* self ```
bool q_signalmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSignalMapper* self ```
bool q_signalmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSignalMapper* self ```
bool q_signalmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSignalMapper* self ```
bool q_signalmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSignalMapper* self, bool b ```
bool q_signalmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSignalMapper* self ```
QThread* q_signalmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSignalMapper* self, QThread* thread ```
void q_signalmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSignalMapper* self, int interval ```
int32_t q_signalmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSignalMapper* self, int id ```
void q_signalmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSignalMapper* self ```
libqt_list /* of QObject* */ q_signalmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSignalMapper* self, QObject* parent ```
void q_signalmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSignalMapper* self, QObject* filterObj ```
void q_signalmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSignalMapper* self, QObject* obj ```
void q_signalmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_signalmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSignalMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_signalmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_signalmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_signalmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSignalMapper* self ```
void q_signalmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSignalMapper* self ```
void q_signalmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSignalMapper* self, const char* name, QVariant* value ```
bool q_signalmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSignalMapper* self, const char* name ```
QVariant* q_signalmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSignalMapper* self ```
const char** q_signalmapper_dynamic_property_names(void* self) {
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
/// ``` QSignalMapper* self ```
QBindingStorage* q_signalmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSignalMapper* self ```
QBindingStorage* q_signalmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSignalMapper* self ```
void q_signalmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSignalMapper* self, void (*slot)(QObject*) ```
void q_signalmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSignalMapper* self ```
QObject* q_signalmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSignalMapper* self, const char* classname ```
bool q_signalmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSignalMapper* self ```
void q_signalmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSignalMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_signalmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_signalmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSignalMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_signalmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSignalMapper* self, QObject* param1 ```
void q_signalmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSignalMapper* self, void (*slot)(QObject*, QObject*) ```
void q_signalmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QEvent* event ```
bool q_signalmapper_event(void* self, void* event) {
    return QSignalMapper_Event((QSignalMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QEvent* event ```
bool q_signalmapper_qbase_event(void* self, void* event) {
    return QSignalMapper_QBaseEvent((QSignalMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, bool (*slot)(QSignalMapper*, QEvent*) ```
void q_signalmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QSignalMapper_OnEvent((QSignalMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QObject* watched, QEvent* event ```
bool q_signalmapper_event_filter(void* self, void* watched, void* event) {
    return QSignalMapper_EventFilter((QSignalMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QObject* watched, QEvent* event ```
bool q_signalmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QSignalMapper_QBaseEventFilter((QSignalMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, bool (*slot)(QSignalMapper*, QObject*, QEvent*) ```
void q_signalmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSignalMapper_OnEventFilter((QSignalMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QTimerEvent* event ```
void q_signalmapper_timer_event(void* self, void* event) {
    QSignalMapper_TimerEvent((QSignalMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QTimerEvent* event ```
void q_signalmapper_qbase_timer_event(void* self, void* event) {
    QSignalMapper_QBaseTimerEvent((QSignalMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QTimerEvent*) ```
void q_signalmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSignalMapper_OnTimerEvent((QSignalMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QChildEvent* event ```
void q_signalmapper_child_event(void* self, void* event) {
    QSignalMapper_ChildEvent((QSignalMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QChildEvent* event ```
void q_signalmapper_qbase_child_event(void* self, void* event) {
    QSignalMapper_QBaseChildEvent((QSignalMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QChildEvent*) ```
void q_signalmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSignalMapper_OnChildEvent((QSignalMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QEvent* event ```
void q_signalmapper_custom_event(void* self, void* event) {
    QSignalMapper_CustomEvent((QSignalMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QEvent* event ```
void q_signalmapper_qbase_custom_event(void* self, void* event) {
    QSignalMapper_QBaseCustomEvent((QSignalMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QEvent*) ```
void q_signalmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSignalMapper_OnCustomEvent((QSignalMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
void q_signalmapper_connect_notify(void* self, void* signal) {
    QSignalMapper_ConnectNotify((QSignalMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
void q_signalmapper_qbase_connect_notify(void* self, void* signal) {
    QSignalMapper_QBaseConnectNotify((QSignalMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QMetaMethod*) ```
void q_signalmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSignalMapper_OnConnectNotify((QSignalMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
void q_signalmapper_disconnect_notify(void* self, void* signal) {
    QSignalMapper_DisconnectNotify((QSignalMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
void q_signalmapper_qbase_disconnect_notify(void* self, void* signal) {
    QSignalMapper_QBaseDisconnectNotify((QSignalMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QMetaMethod*) ```
void q_signalmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSignalMapper_OnDisconnectNotify((QSignalMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self ```
QObject* q_signalmapper_sender(void* self) {
    return QSignalMapper_Sender((QSignalMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self ```
QObject* q_signalmapper_qbase_sender(void* self) {
    return QSignalMapper_QBaseSender((QSignalMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, QObject* (*slot)() ```
void q_signalmapper_on_sender(void* self, QObject* (*slot)()) {
    QSignalMapper_OnSender((QSignalMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self ```
int32_t q_signalmapper_sender_signal_index(void* self) {
    return QSignalMapper_SenderSignalIndex((QSignalMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self ```
int32_t q_signalmapper_qbase_sender_signal_index(void* self) {
    return QSignalMapper_QBaseSenderSignalIndex((QSignalMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, int32_t (*slot)() ```
void q_signalmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSignalMapper_OnSenderSignalIndex((QSignalMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, const char* signal ```
int32_t q_signalmapper_receivers(void* self, const char* signal) {
    return QSignalMapper_Receivers((QSignalMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, const char* signal ```
int32_t q_signalmapper_qbase_receivers(void* self, const char* signal) {
    return QSignalMapper_QBaseReceivers((QSignalMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, int32_t (*slot)(QSignalMapper*, const char*) ```
void q_signalmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSignalMapper_OnReceivers((QSignalMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
bool q_signalmapper_is_signal_connected(void* self, void* signal) {
    return QSignalMapper_IsSignalConnected((QSignalMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
bool q_signalmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QSignalMapper_QBaseIsSignalConnected((QSignalMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, bool (*slot)(QSignalMapper*, QMetaMethod*) ```
void q_signalmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSignalMapper_OnIsSignalConnected((QSignalMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSignalMapper* self ```
void q_signalmapper_delete(void* self) {
    QSignalMapper_Delete((QSignalMapper*)(self));
}