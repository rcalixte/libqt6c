#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqsessionmanager.hpp"
#include "libqsessionmanager.h"

/// https://doc.qt.io/qt-6/qsessionmanager.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSessionManager* self ```
QMetaObject* q_sessionmanager_meta_object(void* self) {
    return QSessionManager_MetaObject((QSessionManager*)self);
}

/// ``` QSessionManager* self, const char* param1 ```
void* q_sessionmanager_metacast(void* self, const char* param1) {
    return QSessionManager_Metacast((QSessionManager*)self, param1);
}

/// ``` QSessionManager* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sessionmanager_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSessionManager_Metacall((QSessionManager*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sessionmanager_tr(const char* s) {
    libqt_string _str = QSessionManager_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#sessionId)
///
/// ``` QSessionManager* self ```
const char* q_sessionmanager_session_id(void* self) {
    libqt_string _str = QSessionManager_SessionId((QSessionManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#sessionKey)
///
/// ``` QSessionManager* self ```
const char* q_sessionmanager_session_key(void* self) {
    libqt_string _str = QSessionManager_SessionKey((QSessionManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#allowsInteraction)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_allows_interaction(void* self) {
    return QSessionManager_AllowsInteraction((QSessionManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#allowsErrorInteraction)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_allows_error_interaction(void* self) {
    return QSessionManager_AllowsErrorInteraction((QSessionManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#release)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_release(void* self) {
    QSessionManager_Release((QSessionManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#cancel)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_cancel(void* self) {
    QSessionManager_Cancel((QSessionManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#setRestartHint)
///
/// ``` QSessionManager* self, enum QSessionManager__RestartHint restartHint ```
void q_sessionmanager_set_restart_hint(void* self, int64_t restartHint) {
    QSessionManager_SetRestartHint((QSessionManager*)self, restartHint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#restartHint)
///
/// ``` QSessionManager* self ```
int64_t q_sessionmanager_restart_hint(void* self) {
    return QSessionManager_RestartHint((QSessionManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#setRestartCommand)
///
/// ``` QSessionManager* self, const char* restartCommand[] ```
void q_sessionmanager_set_restart_command(void* self, const char* restartCommand[]) {
    size_t restartCommand_len = libqt_strv_length(restartCommand);
    libqt_string* restartCommand_qstr = malloc(restartCommand_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < restartCommand_len; ++_i) {
        restartCommand_qstr[_i] = qstring(restartCommand[_i]);
    }
    libqt_list restartCommand_list = qstrlist(restartCommand_qstr, restartCommand_len);
    QSessionManager_SetRestartCommand((QSessionManager*)self, restartCommand_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#restartCommand)
///
/// ``` QSessionManager* self ```
const char** q_sessionmanager_restart_command(void* self) {
    libqt_list _arr = QSessionManager_RestartCommand((QSessionManager*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#setDiscardCommand)
///
/// ``` QSessionManager* self, const char* discardCommand[] ```
void q_sessionmanager_set_discard_command(void* self, const char* discardCommand[]) {
    size_t discardCommand_len = libqt_strv_length(discardCommand);
    libqt_string* discardCommand_qstr = malloc(discardCommand_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < discardCommand_len; ++_i) {
        discardCommand_qstr[_i] = qstring(discardCommand[_i]);
    }
    libqt_list discardCommand_list = qstrlist(discardCommand_qstr, discardCommand_len);
    QSessionManager_SetDiscardCommand((QSessionManager*)self, discardCommand_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#discardCommand)
///
/// ``` QSessionManager* self ```
const char** q_sessionmanager_discard_command(void* self) {
    libqt_list _arr = QSessionManager_DiscardCommand((QSessionManager*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#setManagerProperty)
///
/// ``` QSessionManager* self, const char* name, const char* value ```
void q_sessionmanager_set_manager_property(void* self, const char* name, const char* value) {
    QSessionManager_SetManagerProperty((QSessionManager*)self, qstring(name), qstring(value));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#setManagerProperty)
///
/// ``` QSessionManager* self, const char* name, const char* value[] ```
void q_sessionmanager_set_manager_property2(void* self, const char* name, const char* value[]) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = malloc(value_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < value_len; ++_i) {
        value_qstr[_i] = qstring(value[_i]);
    }
    libqt_list value_list = qstrlist(value_qstr, value_len);
    QSessionManager_SetManagerProperty2((QSessionManager*)self, qstring(name), value_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#isPhase2)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_is_phase2(void* self) {
    return QSessionManager_IsPhase2((QSessionManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#requestPhase2)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_request_phase2(void* self) {
    QSessionManager_RequestPhase2((QSessionManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sessionmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QSessionManager_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sessionmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSessionManager_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QSessionManager* self, QEvent* event ```
bool q_sessionmanager_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QSessionManager* self, QObject* watched, QEvent* event ```
bool q_sessionmanager_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSessionManager* self ```
const char* q_sessionmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSessionManager* self, const char* name ```
void q_sessionmanager_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSessionManager* self, bool b ```
bool q_sessionmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSessionManager* self ```
QThread* q_sessionmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSessionManager* self, QThread* thread ```
void q_sessionmanager_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSessionManager* self, int interval ```
int32_t q_sessionmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSessionManager* self, int id ```
void q_sessionmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSessionManager* self ```
libqt_list /* of QObject* */ q_sessionmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSessionManager* self, QObject* parent ```
void q_sessionmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSessionManager* self, QObject* filterObj ```
void q_sessionmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSessionManager* self, QObject* obj ```
void q_sessionmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sessionmanager_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSessionManager* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sessionmanager_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sessionmanager_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sessionmanager_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSessionManager* self, const char* name, QVariant* value ```
bool q_sessionmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSessionManager* self, const char* name ```
QVariant* q_sessionmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSessionManager* self ```
const char** q_sessionmanager_dynamic_property_names(void* self) {
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
/// ``` QSessionManager* self ```
QBindingStorage* q_sessionmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSessionManager* self ```
QBindingStorage* q_sessionmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSessionManager* self, void (*slot)(QObject*) ```
void q_sessionmanager_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSessionManager* self ```
QObject* q_sessionmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSessionManager* self, const char* classname ```
bool q_sessionmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSessionManager* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sessionmanager_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sessionmanager_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSessionManager* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sessionmanager_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSessionManager* self, QObject* param1 ```
void q_sessionmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSessionManager* self, void (*slot)(QObject*, QObject*) ```
void q_sessionmanager_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}
