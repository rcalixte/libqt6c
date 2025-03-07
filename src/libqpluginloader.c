#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqjsonobject.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqplugin.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqpluginloader.hpp"
#include "libqpluginloader.h"

/// https://doc.qt.io/qt-6/qpluginloader.html

/// q_pluginloader_new constructs a new QPluginLoader object.
///
///
QPluginLoader* q_pluginloader_new() {
    return QPluginLoader_new();
}

/// q_pluginloader_new2 constructs a new QPluginLoader object.
///
/// ``` const char* fileName ```
QPluginLoader* q_pluginloader_new2(const char* fileName) {
    return QPluginLoader_new2(qstring(fileName));
}

/// q_pluginloader_new3 constructs a new QPluginLoader object.
///
/// ``` QObject* parent ```
QPluginLoader* q_pluginloader_new3(void* parent) {
    return QPluginLoader_new3((QObject*)parent);
}

/// q_pluginloader_new4 constructs a new QPluginLoader object.
///
/// ``` const char* fileName, QObject* parent ```
QPluginLoader* q_pluginloader_new4(const char* fileName, void* parent) {
    return QPluginLoader_new4(qstring(fileName), (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPluginLoader* self ```
QMetaObject* q_pluginloader_meta_object(void* self) {
    return QPluginLoader_MetaObject((QPluginLoader*)self);
}

/// ``` QPluginLoader* self, const char* param1 ```
void* q_pluginloader_metacast(void* self, const char* param1) {
    return QPluginLoader_Metacast((QPluginLoader*)self, param1);
}

/// ``` QPluginLoader* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pluginloader_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPluginLoader_Metacall((QPluginLoader*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPluginLoader* self, int32_t (*slot)(QPluginLoader*, enum QMetaObject__Call, int, void*) ```
void q_pluginloader_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPluginLoader_OnMetacall((QPluginLoader*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPluginLoader* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pluginloader_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPluginLoader_QBaseMetacall((QPluginLoader*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pluginloader_tr(const char* s) {
    libqt_string _str = QPluginLoader_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#instance)
///
/// ``` QPluginLoader* self ```
QObject* q_pluginloader_instance(void* self) {
    return QPluginLoader_Instance((QPluginLoader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#metaData)
///
/// ``` QPluginLoader* self ```
QJsonObject* q_pluginloader_meta_data(void* self) {
    return QPluginLoader_MetaData((QPluginLoader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#staticInstances)
///
///
libqt_list /* of QObject* */ q_pluginloader_static_instances() {
    libqt_list _arr = QPluginLoader_StaticInstances();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#staticPlugins)
///
///
libqt_list /* of QStaticPlugin* */ q_pluginloader_static_plugins() {
    libqt_list _arr = QPluginLoader_StaticPlugins();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#load)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_load(void* self) {
    return QPluginLoader_Load((QPluginLoader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#unload)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_unload(void* self) {
    return QPluginLoader_Unload((QPluginLoader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#isLoaded)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_is_loaded(void* self) {
    return QPluginLoader_IsLoaded((QPluginLoader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#setFileName)
///
/// ``` QPluginLoader* self, const char* fileName ```
void q_pluginloader_set_file_name(void* self, const char* fileName) {
    QPluginLoader_SetFileName((QPluginLoader*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#fileName)
///
/// ``` QPluginLoader* self ```
const char* q_pluginloader_file_name(void* self) {
    libqt_string _str = QPluginLoader_FileName((QPluginLoader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#errorString)
///
/// ``` QPluginLoader* self ```
const char* q_pluginloader_error_string(void* self) {
    libqt_string _str = QPluginLoader_ErrorString((QPluginLoader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#setLoadHints)
///
/// ``` QPluginLoader* self, int loadHints ```
void q_pluginloader_set_load_hints(void* self, int64_t loadHints) {
    QPluginLoader_SetLoadHints((QPluginLoader*)self, loadHints);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginloader.html#loadHints)
///
/// ``` QPluginLoader* self ```
int64_t q_pluginloader_load_hints(void* self) {
    return QPluginLoader_LoadHints((QPluginLoader*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pluginloader_tr2(const char* s, const char* c) {
    libqt_string _str = QPluginLoader_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pluginloader_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPluginLoader_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPluginLoader* self ```
const char* q_pluginloader_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPluginLoader* self, const char* name ```
void q_pluginloader_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPluginLoader* self ```
bool q_pluginloader_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPluginLoader* self, bool b ```
bool q_pluginloader_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPluginLoader* self ```
QThread* q_pluginloader_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPluginLoader* self, QThread* thread ```
void q_pluginloader_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPluginLoader* self, int interval ```
int32_t q_pluginloader_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPluginLoader* self, int id ```
void q_pluginloader_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPluginLoader* self ```
libqt_list /* of QObject* */ q_pluginloader_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPluginLoader* self, QObject* parent ```
void q_pluginloader_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPluginLoader* self, QObject* filterObj ```
void q_pluginloader_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPluginLoader* self, QObject* obj ```
void q_pluginloader_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pluginloader_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPluginLoader* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pluginloader_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pluginloader_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pluginloader_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPluginLoader* self ```
void q_pluginloader_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPluginLoader* self ```
void q_pluginloader_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPluginLoader* self, const char* name, QVariant* value ```
bool q_pluginloader_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPluginLoader* self, const char* name ```
QVariant* q_pluginloader_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPluginLoader* self ```
const char** q_pluginloader_dynamic_property_names(void* self) {
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
/// ``` QPluginLoader* self ```
QBindingStorage* q_pluginloader_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPluginLoader* self ```
QBindingStorage* q_pluginloader_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPluginLoader* self ```
void q_pluginloader_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPluginLoader* self, void (*slot)(QObject*) ```
void q_pluginloader_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPluginLoader* self ```
QObject* q_pluginloader_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPluginLoader* self, const char* classname ```
bool q_pluginloader_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPluginLoader* self ```
void q_pluginloader_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPluginLoader* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pluginloader_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pluginloader_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPluginLoader* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pluginloader_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPluginLoader* self, QObject* param1 ```
void q_pluginloader_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPluginLoader* self, void (*slot)(QObject*, QObject*) ```
void q_pluginloader_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QEvent* event ```
bool q_pluginloader_event(void* self, void* event) {
    return QPluginLoader_Event((QPluginLoader*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QEvent* event ```
bool q_pluginloader_qbase_event(void* self, void* event) {
    return QPluginLoader_QBaseEvent((QPluginLoader*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, bool (*slot)(QPluginLoader*, QEvent*) ```
void q_pluginloader_on_event(void* self, bool (*slot)(void*, void*)) {
    QPluginLoader_OnEvent((QPluginLoader*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QObject* watched, QEvent* event ```
bool q_pluginloader_event_filter(void* self, void* watched, void* event) {
    return QPluginLoader_EventFilter((QPluginLoader*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QObject* watched, QEvent* event ```
bool q_pluginloader_qbase_event_filter(void* self, void* watched, void* event) {
    return QPluginLoader_QBaseEventFilter((QPluginLoader*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, bool (*slot)(QPluginLoader*, QObject*, QEvent*) ```
void q_pluginloader_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPluginLoader_OnEventFilter((QPluginLoader*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QTimerEvent* event ```
void q_pluginloader_timer_event(void* self, void* event) {
    QPluginLoader_TimerEvent((QPluginLoader*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QTimerEvent* event ```
void q_pluginloader_qbase_timer_event(void* self, void* event) {
    QPluginLoader_QBaseTimerEvent((QPluginLoader*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, void (*slot)(QPluginLoader*, QTimerEvent*) ```
void q_pluginloader_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPluginLoader_OnTimerEvent((QPluginLoader*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QChildEvent* event ```
void q_pluginloader_child_event(void* self, void* event) {
    QPluginLoader_ChildEvent((QPluginLoader*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QChildEvent* event ```
void q_pluginloader_qbase_child_event(void* self, void* event) {
    QPluginLoader_QBaseChildEvent((QPluginLoader*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, void (*slot)(QPluginLoader*, QChildEvent*) ```
void q_pluginloader_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPluginLoader_OnChildEvent((QPluginLoader*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QEvent* event ```
void q_pluginloader_custom_event(void* self, void* event) {
    QPluginLoader_CustomEvent((QPluginLoader*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QEvent* event ```
void q_pluginloader_qbase_custom_event(void* self, void* event) {
    QPluginLoader_QBaseCustomEvent((QPluginLoader*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, void (*slot)(QPluginLoader*, QEvent*) ```
void q_pluginloader_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPluginLoader_OnCustomEvent((QPluginLoader*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
void q_pluginloader_connect_notify(void* self, void* signal) {
    QPluginLoader_ConnectNotify((QPluginLoader*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
void q_pluginloader_qbase_connect_notify(void* self, void* signal) {
    QPluginLoader_QBaseConnectNotify((QPluginLoader*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, void (*slot)(QPluginLoader*, QMetaMethod*) ```
void q_pluginloader_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPluginLoader_OnConnectNotify((QPluginLoader*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
void q_pluginloader_disconnect_notify(void* self, void* signal) {
    QPluginLoader_DisconnectNotify((QPluginLoader*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
void q_pluginloader_qbase_disconnect_notify(void* self, void* signal) {
    QPluginLoader_QBaseDisconnectNotify((QPluginLoader*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, void (*slot)(QPluginLoader*, QMetaMethod*) ```
void q_pluginloader_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPluginLoader_OnDisconnectNotify((QPluginLoader*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self ```
QObject* q_pluginloader_sender(void* self) {
    return QPluginLoader_Sender((QPluginLoader*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self ```
QObject* q_pluginloader_qbase_sender(void* self) {
    return QPluginLoader_QBaseSender((QPluginLoader*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, QObject* (*slot)() ```
void q_pluginloader_on_sender(void* self, QObject* (*slot)()) {
    QPluginLoader_OnSender((QPluginLoader*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self ```
int32_t q_pluginloader_sender_signal_index(void* self) {
    return QPluginLoader_SenderSignalIndex((QPluginLoader*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self ```
int32_t q_pluginloader_qbase_sender_signal_index(void* self) {
    return QPluginLoader_QBaseSenderSignalIndex((QPluginLoader*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, int32_t (*slot)() ```
void q_pluginloader_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPluginLoader_OnSenderSignalIndex((QPluginLoader*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, const char* signal ```
int32_t q_pluginloader_receivers(void* self, const char* signal) {
    return QPluginLoader_Receivers((QPluginLoader*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, const char* signal ```
int32_t q_pluginloader_qbase_receivers(void* self, const char* signal) {
    return QPluginLoader_QBaseReceivers((QPluginLoader*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, int32_t (*slot)(QPluginLoader*, const char*) ```
void q_pluginloader_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPluginLoader_OnReceivers((QPluginLoader*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
bool q_pluginloader_is_signal_connected(void* self, void* signal) {
    return QPluginLoader_IsSignalConnected((QPluginLoader*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPluginLoader* self, QMetaMethod* signal ```
bool q_pluginloader_qbase_is_signal_connected(void* self, void* signal) {
    return QPluginLoader_QBaseIsSignalConnected((QPluginLoader*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPluginLoader* self, bool (*slot)(QPluginLoader*, QMetaMethod*) ```
void q_pluginloader_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPluginLoader_OnIsSignalConnected((QPluginLoader*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPluginLoader* self ```
void q_pluginloader_delete(void* self) {
    QPluginLoader_Delete((QPluginLoader*)(self));
}