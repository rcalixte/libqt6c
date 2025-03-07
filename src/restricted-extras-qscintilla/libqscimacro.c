#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqscimacro.hpp"
#include "libqscimacro.h"

/// https://doc.qt.io/qt-6/qscimacro.html

/// q_scimacro_new constructs a new QsciMacro object.
///
/// ``` QsciScintilla* parent ```
QsciMacro* q_scimacro_new(void* parent) {
    return QsciMacro_new((QsciScintilla*)parent);
}

/// q_scimacro_new2 constructs a new QsciMacro object.
///
/// ``` const char* asc, QsciScintilla* parent ```
QsciMacro* q_scimacro_new2(const char* asc, void* parent) {
    return QsciMacro_new2(qstring(asc), (QsciScintilla*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciMacro* self ```
QMetaObject* q_scimacro_meta_object(void* self) {
    return QsciMacro_MetaObject((QsciMacro*)self);
}

/// ``` QsciMacro* self, const char* param1 ```
void* q_scimacro_metacast(void* self, const char* param1) {
    return QsciMacro_Metacast((QsciMacro*)self, param1);
}

/// ``` QsciMacro* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scimacro_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciMacro_Metacall((QsciMacro*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciMacro* self, int32_t (*slot)(QsciMacro*, enum QMetaObject__Call, int, void*) ```
void q_scimacro_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciMacro_OnMetacall((QsciMacro*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciMacro* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scimacro_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciMacro_QBaseMetacall((QsciMacro*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scimacro_tr(const char* s) {
    libqt_string _str = QsciMacro_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscimacro.html#clear)
///
/// ``` QsciMacro* self ```
void q_scimacro_clear(void* self) {
    QsciMacro_Clear((QsciMacro*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscimacro.html#load)
///
/// ``` QsciMacro* self, const char* asc ```
bool q_scimacro_load(void* self, const char* asc) {
    return QsciMacro_Load((QsciMacro*)self, qstring(asc));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscimacro.html#save)
///
/// ``` QsciMacro* self ```
const char* q_scimacro_save(void* self) {
    libqt_string _str = QsciMacro_Save((QsciMacro*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscimacro.html#play)
///
/// ``` QsciMacro* self ```
void q_scimacro_play(void* self) {
    QsciMacro_Play((QsciMacro*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciMacro* self, void (*slot)() ```
void q_scimacro_on_play(void* self, void (*slot)()) {
    QsciMacro_OnPlay((QsciMacro*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciMacro* self ```
void q_scimacro_qbase_play(void* self) {
    QsciMacro_QBasePlay((QsciMacro*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscimacro.html#startRecording)
///
/// ``` QsciMacro* self ```
void q_scimacro_start_recording(void* self) {
    QsciMacro_StartRecording((QsciMacro*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciMacro* self, void (*slot)() ```
void q_scimacro_on_start_recording(void* self, void (*slot)()) {
    QsciMacro_OnStartRecording((QsciMacro*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciMacro* self ```
void q_scimacro_qbase_start_recording(void* self) {
    QsciMacro_QBaseStartRecording((QsciMacro*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscimacro.html#endRecording)
///
/// ``` QsciMacro* self ```
void q_scimacro_end_recording(void* self) {
    QsciMacro_EndRecording((QsciMacro*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciMacro* self, void (*slot)() ```
void q_scimacro_on_end_recording(void* self, void (*slot)()) {
    QsciMacro_OnEndRecording((QsciMacro*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciMacro* self ```
void q_scimacro_qbase_end_recording(void* self) {
    QsciMacro_QBaseEndRecording((QsciMacro*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scimacro_tr2(const char* s, const char* c) {
    libqt_string _str = QsciMacro_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scimacro_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciMacro_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciMacro* self ```
const char* q_scimacro_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciMacro* self, const char* name ```
void q_scimacro_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciMacro* self ```
bool q_scimacro_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciMacro* self ```
bool q_scimacro_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciMacro* self ```
bool q_scimacro_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciMacro* self ```
bool q_scimacro_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciMacro* self, bool b ```
bool q_scimacro_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciMacro* self ```
QThread* q_scimacro_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciMacro* self, QThread* thread ```
void q_scimacro_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciMacro* self, int interval ```
int32_t q_scimacro_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciMacro* self, int id ```
void q_scimacro_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciMacro* self ```
libqt_list /* of QObject* */ q_scimacro_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciMacro* self, QObject* parent ```
void q_scimacro_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciMacro* self, QObject* filterObj ```
void q_scimacro_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciMacro* self, QObject* obj ```
void q_scimacro_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scimacro_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciMacro* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scimacro_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scimacro_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scimacro_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciMacro* self ```
void q_scimacro_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciMacro* self ```
void q_scimacro_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciMacro* self, const char* name, QVariant* value ```
bool q_scimacro_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciMacro* self, const char* name ```
QVariant* q_scimacro_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciMacro* self ```
const char** q_scimacro_dynamic_property_names(void* self) {
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
/// ``` QsciMacro* self ```
QBindingStorage* q_scimacro_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciMacro* self ```
QBindingStorage* q_scimacro_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciMacro* self ```
void q_scimacro_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciMacro* self, void (*slot)(QObject*) ```
void q_scimacro_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciMacro* self ```
QObject* q_scimacro_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciMacro* self, const char* classname ```
bool q_scimacro_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciMacro* self ```
void q_scimacro_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciMacro* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scimacro_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scimacro_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciMacro* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scimacro_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciMacro* self, QObject* param1 ```
void q_scimacro_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciMacro* self, void (*slot)(QObject*, QObject*) ```
void q_scimacro_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self, QEvent* event ```
bool q_scimacro_event(void* self, void* event) {
    return QsciMacro_Event((QsciMacro*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self, QEvent* event ```
bool q_scimacro_qbase_event(void* self, void* event) {
    return QsciMacro_QBaseEvent((QsciMacro*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, bool (*slot)(QsciMacro*, QEvent*) ```
void q_scimacro_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciMacro_OnEvent((QsciMacro*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self, QObject* watched, QEvent* event ```
bool q_scimacro_event_filter(void* self, void* watched, void* event) {
    return QsciMacro_EventFilter((QsciMacro*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self, QObject* watched, QEvent* event ```
bool q_scimacro_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciMacro_QBaseEventFilter((QsciMacro*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, bool (*slot)(QsciMacro*, QObject*, QEvent*) ```
void q_scimacro_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciMacro_OnEventFilter((QsciMacro*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self, QTimerEvent* event ```
void q_scimacro_timer_event(void* self, void* event) {
    QsciMacro_TimerEvent((QsciMacro*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self, QTimerEvent* event ```
void q_scimacro_qbase_timer_event(void* self, void* event) {
    QsciMacro_QBaseTimerEvent((QsciMacro*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, void (*slot)(QsciMacro*, QTimerEvent*) ```
void q_scimacro_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciMacro_OnTimerEvent((QsciMacro*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self, QChildEvent* event ```
void q_scimacro_child_event(void* self, void* event) {
    QsciMacro_ChildEvent((QsciMacro*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self, QChildEvent* event ```
void q_scimacro_qbase_child_event(void* self, void* event) {
    QsciMacro_QBaseChildEvent((QsciMacro*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, void (*slot)(QsciMacro*, QChildEvent*) ```
void q_scimacro_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciMacro_OnChildEvent((QsciMacro*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self, QEvent* event ```
void q_scimacro_custom_event(void* self, void* event) {
    QsciMacro_CustomEvent((QsciMacro*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self, QEvent* event ```
void q_scimacro_qbase_custom_event(void* self, void* event) {
    QsciMacro_QBaseCustomEvent((QsciMacro*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, void (*slot)(QsciMacro*, QEvent*) ```
void q_scimacro_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciMacro_OnCustomEvent((QsciMacro*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self, QMetaMethod* signal ```
void q_scimacro_connect_notify(void* self, void* signal) {
    QsciMacro_ConnectNotify((QsciMacro*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self, QMetaMethod* signal ```
void q_scimacro_qbase_connect_notify(void* self, void* signal) {
    QsciMacro_QBaseConnectNotify((QsciMacro*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, void (*slot)(QsciMacro*, QMetaMethod*) ```
void q_scimacro_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciMacro_OnConnectNotify((QsciMacro*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self, QMetaMethod* signal ```
void q_scimacro_disconnect_notify(void* self, void* signal) {
    QsciMacro_DisconnectNotify((QsciMacro*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self, QMetaMethod* signal ```
void q_scimacro_qbase_disconnect_notify(void* self, void* signal) {
    QsciMacro_QBaseDisconnectNotify((QsciMacro*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, void (*slot)(QsciMacro*, QMetaMethod*) ```
void q_scimacro_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciMacro_OnDisconnectNotify((QsciMacro*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self ```
QObject* q_scimacro_sender(void* self) {
    return QsciMacro_Sender((QsciMacro*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self ```
QObject* q_scimacro_qbase_sender(void* self) {
    return QsciMacro_QBaseSender((QsciMacro*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, QObject* (*slot)() ```
void q_scimacro_on_sender(void* self, QObject* (*slot)()) {
    QsciMacro_OnSender((QsciMacro*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self ```
int32_t q_scimacro_sender_signal_index(void* self) {
    return QsciMacro_SenderSignalIndex((QsciMacro*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self ```
int32_t q_scimacro_qbase_sender_signal_index(void* self) {
    return QsciMacro_QBaseSenderSignalIndex((QsciMacro*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, int32_t (*slot)() ```
void q_scimacro_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciMacro_OnSenderSignalIndex((QsciMacro*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self, const char* signal ```
int32_t q_scimacro_receivers(void* self, const char* signal) {
    return QsciMacro_Receivers((QsciMacro*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self, const char* signal ```
int32_t q_scimacro_qbase_receivers(void* self, const char* signal) {
    return QsciMacro_QBaseReceivers((QsciMacro*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, int32_t (*slot)(QsciMacro*, const char*) ```
void q_scimacro_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciMacro_OnReceivers((QsciMacro*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciMacro* self, QMetaMethod* signal ```
bool q_scimacro_is_signal_connected(void* self, void* signal) {
    return QsciMacro_IsSignalConnected((QsciMacro*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciMacro* self, QMetaMethod* signal ```
bool q_scimacro_qbase_is_signal_connected(void* self, void* signal) {
    return QsciMacro_QBaseIsSignalConnected((QsciMacro*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciMacro* self, bool (*slot)(QsciMacro*, QMetaMethod*) ```
void q_scimacro_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciMacro_OnIsSignalConnected((QsciMacro*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciMacro* self ```
void q_scimacro_delete(void* self) {
    QsciMacro_Delete((QsciMacro*)(self));
}