#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqfileselector.hpp"
#include "libqfileselector.h"

/// https://doc.qt.io/qt-6/qfileselector.html

/// q_fileselector_new constructs a new QFileSelector object.
///
///
QFileSelector* q_fileselector_new() {
    return QFileSelector_new();
}

/// q_fileselector_new2 constructs a new QFileSelector object.
///
/// ``` QObject* parent ```
QFileSelector* q_fileselector_new2(void* parent) {
    return QFileSelector_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFileSelector* self ```
QMetaObject* q_fileselector_meta_object(void* self) {
    return QFileSelector_MetaObject((QFileSelector*)self);
}

/// ``` QFileSelector* self, const char* param1 ```
void* q_fileselector_metacast(void* self, const char* param1) {
    return QFileSelector_Metacast((QFileSelector*)self, param1);
}

/// ``` QFileSelector* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_fileselector_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFileSelector_Metacall((QFileSelector*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QFileSelector* self, int32_t (*slot)(QFileSelector*, enum QMetaObject__Call, int, void*) ```
void q_fileselector_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QFileSelector_OnMetacall((QFileSelector*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSelector* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_fileselector_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFileSelector_QBaseMetacall((QFileSelector*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_fileselector_tr(const char* s) {
    libqt_string _str = QFileSelector_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileselector.html#select)
///
/// ``` QFileSelector* self, const char* filePath ```
const char* q_fileselector_select(void* self, const char* filePath) {
    libqt_string _str = QFileSelector_Select((QFileSelector*)self, qstring(filePath));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileselector.html#select)
///
/// ``` QFileSelector* self, QUrl* filePath ```
QUrl* q_fileselector_select_with_file_path(void* self, void* filePath) {
    return QFileSelector_SelectWithFilePath((QFileSelector*)self, (QUrl*)filePath);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileselector.html#extraSelectors)
///
/// ``` QFileSelector* self ```
const char** q_fileselector_extra_selectors(void* self) {
    libqt_list _arr = QFileSelector_ExtraSelectors((QFileSelector*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfileselector.html#setExtraSelectors)
///
/// ``` QFileSelector* self, const char* list[] ```
void q_fileselector_set_extra_selectors(void* self, const char* list[]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = malloc(list_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < list_len; ++_i) {
        list_qstr[_i] = qstring(list[_i]);
    }
    libqt_list list_list = qstrlist(list_qstr, list_len);
    QFileSelector_SetExtraSelectors((QFileSelector*)self, list_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileselector.html#allSelectors)
///
/// ``` QFileSelector* self ```
const char** q_fileselector_all_selectors(void* self) {
    libqt_list _arr = QFileSelector_AllSelectors((QFileSelector*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_fileselector_tr2(const char* s, const char* c) {
    libqt_string _str = QFileSelector_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_fileselector_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFileSelector_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFileSelector* self ```
const char* q_fileselector_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFileSelector* self, const char* name ```
void q_fileselector_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFileSelector* self ```
bool q_fileselector_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFileSelector* self ```
bool q_fileselector_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFileSelector* self ```
bool q_fileselector_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFileSelector* self ```
bool q_fileselector_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFileSelector* self, bool b ```
bool q_fileselector_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFileSelector* self ```
QThread* q_fileselector_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileSelector* self, QThread* thread ```
void q_fileselector_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileSelector* self, int interval ```
int32_t q_fileselector_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileSelector* self, int id ```
void q_fileselector_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFileSelector* self ```
libqt_list /* of QObject* */ q_fileselector_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFileSelector* self, QObject* parent ```
void q_fileselector_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFileSelector* self, QObject* filterObj ```
void q_fileselector_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFileSelector* self, QObject* obj ```
void q_fileselector_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_fileselector_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileSelector* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_fileselector_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_fileselector_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_fileselector_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFileSelector* self ```
void q_fileselector_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFileSelector* self ```
void q_fileselector_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFileSelector* self, const char* name, QVariant* value ```
bool q_fileselector_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFileSelector* self, const char* name ```
QVariant* q_fileselector_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFileSelector* self ```
const char** q_fileselector_dynamic_property_names(void* self) {
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
/// ``` QFileSelector* self ```
QBindingStorage* q_fileselector_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileSelector* self ```
QBindingStorage* q_fileselector_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSelector* self ```
void q_fileselector_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QFileSelector* self, void (*slot)(QObject*) ```
void q_fileselector_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFileSelector* self ```
QObject* q_fileselector_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFileSelector* self, const char* classname ```
bool q_fileselector_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFileSelector* self ```
void q_fileselector_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileSelector* self, int interval, enum Qt__TimerType timerType ```
int32_t q_fileselector_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_fileselector_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileSelector* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_fileselector_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSelector* self, QObject* param1 ```
void q_fileselector_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QFileSelector* self, void (*slot)(QObject*, QObject*) ```
void q_fileselector_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self, QEvent* event ```
bool q_fileselector_event(void* self, void* event) {
    return QFileSelector_Event((QFileSelector*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self, QEvent* event ```
bool q_fileselector_qbase_event(void* self, void* event) {
    return QFileSelector_QBaseEvent((QFileSelector*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, bool (*slot)(QFileSelector*, QEvent*) ```
void q_fileselector_on_event(void* self, bool (*slot)(void*, void*)) {
    QFileSelector_OnEvent((QFileSelector*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self, QObject* watched, QEvent* event ```
bool q_fileselector_event_filter(void* self, void* watched, void* event) {
    return QFileSelector_EventFilter((QFileSelector*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self, QObject* watched, QEvent* event ```
bool q_fileselector_qbase_event_filter(void* self, void* watched, void* event) {
    return QFileSelector_QBaseEventFilter((QFileSelector*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, bool (*slot)(QFileSelector*, QObject*, QEvent*) ```
void q_fileselector_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QFileSelector_OnEventFilter((QFileSelector*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self, QTimerEvent* event ```
void q_fileselector_timer_event(void* self, void* event) {
    QFileSelector_TimerEvent((QFileSelector*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self, QTimerEvent* event ```
void q_fileselector_qbase_timer_event(void* self, void* event) {
    QFileSelector_QBaseTimerEvent((QFileSelector*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, void (*slot)(QFileSelector*, QTimerEvent*) ```
void q_fileselector_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QFileSelector_OnTimerEvent((QFileSelector*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self, QChildEvent* event ```
void q_fileselector_child_event(void* self, void* event) {
    QFileSelector_ChildEvent((QFileSelector*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self, QChildEvent* event ```
void q_fileselector_qbase_child_event(void* self, void* event) {
    QFileSelector_QBaseChildEvent((QFileSelector*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, void (*slot)(QFileSelector*, QChildEvent*) ```
void q_fileselector_on_child_event(void* self, void (*slot)(void*, void*)) {
    QFileSelector_OnChildEvent((QFileSelector*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self, QEvent* event ```
void q_fileselector_custom_event(void* self, void* event) {
    QFileSelector_CustomEvent((QFileSelector*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self, QEvent* event ```
void q_fileselector_qbase_custom_event(void* self, void* event) {
    QFileSelector_QBaseCustomEvent((QFileSelector*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, void (*slot)(QFileSelector*, QEvent*) ```
void q_fileselector_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QFileSelector_OnCustomEvent((QFileSelector*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self, QMetaMethod* signal ```
void q_fileselector_connect_notify(void* self, void* signal) {
    QFileSelector_ConnectNotify((QFileSelector*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self, QMetaMethod* signal ```
void q_fileselector_qbase_connect_notify(void* self, void* signal) {
    QFileSelector_QBaseConnectNotify((QFileSelector*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, void (*slot)(QFileSelector*, QMetaMethod*) ```
void q_fileselector_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QFileSelector_OnConnectNotify((QFileSelector*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self, QMetaMethod* signal ```
void q_fileselector_disconnect_notify(void* self, void* signal) {
    QFileSelector_DisconnectNotify((QFileSelector*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self, QMetaMethod* signal ```
void q_fileselector_qbase_disconnect_notify(void* self, void* signal) {
    QFileSelector_QBaseDisconnectNotify((QFileSelector*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, void (*slot)(QFileSelector*, QMetaMethod*) ```
void q_fileselector_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QFileSelector_OnDisconnectNotify((QFileSelector*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self ```
QObject* q_fileselector_sender(void* self) {
    return QFileSelector_Sender((QFileSelector*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self ```
QObject* q_fileselector_qbase_sender(void* self) {
    return QFileSelector_QBaseSender((QFileSelector*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, QObject* (*slot)() ```
void q_fileselector_on_sender(void* self, QObject* (*slot)()) {
    QFileSelector_OnSender((QFileSelector*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self ```
int32_t q_fileselector_sender_signal_index(void* self) {
    return QFileSelector_SenderSignalIndex((QFileSelector*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self ```
int32_t q_fileselector_qbase_sender_signal_index(void* self) {
    return QFileSelector_QBaseSenderSignalIndex((QFileSelector*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, int32_t (*slot)() ```
void q_fileselector_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QFileSelector_OnSenderSignalIndex((QFileSelector*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self, const char* signal ```
int32_t q_fileselector_receivers(void* self, const char* signal) {
    return QFileSelector_Receivers((QFileSelector*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self, const char* signal ```
int32_t q_fileselector_qbase_receivers(void* self, const char* signal) {
    return QFileSelector_QBaseReceivers((QFileSelector*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, int32_t (*slot)(QFileSelector*, const char*) ```
void q_fileselector_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QFileSelector_OnReceivers((QFileSelector*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSelector* self, QMetaMethod* signal ```
bool q_fileselector_is_signal_connected(void* self, void* signal) {
    return QFileSelector_IsSignalConnected((QFileSelector*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSelector* self, QMetaMethod* signal ```
bool q_fileselector_qbase_is_signal_connected(void* self, void* signal) {
    return QFileSelector_QBaseIsSignalConnected((QFileSelector*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSelector* self, bool (*slot)(QFileSelector*, QMetaMethod*) ```
void q_fileselector_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QFileSelector_OnIsSignalConnected((QFileSelector*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFileSelector* self ```
void q_fileselector_delete(void* self) {
    QFileSelector_Delete((QFileSelector*)(self));
}