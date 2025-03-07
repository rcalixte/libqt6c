#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebenginenavigationrequest.hpp"
#include "libqwebenginenavigationrequest.h"

/// https://doc.qt.io/qt-6/qwebenginenavigationrequest.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineNavigationRequest* self ```
QMetaObject* q_webenginenavigationrequest_meta_object(void* self) {
    return QWebEngineNavigationRequest_MetaObject((QWebEngineNavigationRequest*)self);
}

/// ``` QWebEngineNavigationRequest* self, const char* param1 ```
void* q_webenginenavigationrequest_metacast(void* self, const char* param1) {
    return QWebEngineNavigationRequest_Metacast((QWebEngineNavigationRequest*)self, param1);
}

/// ``` QWebEngineNavigationRequest* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginenavigationrequest_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineNavigationRequest_Metacall((QWebEngineNavigationRequest*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginenavigationrequest_tr(const char* s) {
    libqt_string _str = QWebEngineNavigationRequest_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#url)
///
/// ``` QWebEngineNavigationRequest* self ```
QUrl* q_webenginenavigationrequest_url(void* self) {
    return QWebEngineNavigationRequest_Url((QWebEngineNavigationRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#isMainFrame)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_is_main_frame(void* self) {
    return QWebEngineNavigationRequest_IsMainFrame((QWebEngineNavigationRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#navigationType)
///
/// ``` QWebEngineNavigationRequest* self ```
int64_t q_webenginenavigationrequest_navigation_type(void* self) {
    return QWebEngineNavigationRequest_NavigationType((QWebEngineNavigationRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#accept)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_accept(void* self) {
    QWebEngineNavigationRequest_Accept((QWebEngineNavigationRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#reject)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_reject(void* self) {
    QWebEngineNavigationRequest_Reject((QWebEngineNavigationRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#actionChanged)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_action_changed(void* self) {
    QWebEngineNavigationRequest_ActionChanged((QWebEngineNavigationRequest*)self);
}

/// ``` QWebEngineNavigationRequest* self, void (*slot)(QWebEngineNavigationRequest*) ```
void q_webenginenavigationrequest_on_action_changed(void* self, void (*slot)(void*)) {
    QWebEngineNavigationRequest_Connect_ActionChanged((QWebEngineNavigationRequest*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginenavigationrequest_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineNavigationRequest_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginenavigationrequest_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineNavigationRequest_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineNavigationRequest* self, QEvent* event ```
bool q_webenginenavigationrequest_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineNavigationRequest* self, QObject* watched, QEvent* event ```
bool q_webenginenavigationrequest_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineNavigationRequest* self ```
const char* q_webenginenavigationrequest_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineNavigationRequest* self, const char* name ```
void q_webenginenavigationrequest_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineNavigationRequest* self, bool b ```
bool q_webenginenavigationrequest_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineNavigationRequest* self ```
QThread* q_webenginenavigationrequest_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineNavigationRequest* self, QThread* thread ```
void q_webenginenavigationrequest_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineNavigationRequest* self, int interval ```
int32_t q_webenginenavigationrequest_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineNavigationRequest* self, int id ```
void q_webenginenavigationrequest_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineNavigationRequest* self ```
libqt_list /* of QObject* */ q_webenginenavigationrequest_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineNavigationRequest* self, QObject* parent ```
void q_webenginenavigationrequest_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineNavigationRequest* self, QObject* filterObj ```
void q_webenginenavigationrequest_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineNavigationRequest* self, QObject* obj ```
void q_webenginenavigationrequest_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginenavigationrequest_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineNavigationRequest* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginenavigationrequest_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginenavigationrequest_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginenavigationrequest_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineNavigationRequest* self, const char* name, QVariant* value ```
bool q_webenginenavigationrequest_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineNavigationRequest* self, const char* name ```
QVariant* q_webenginenavigationrequest_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineNavigationRequest* self ```
const char** q_webenginenavigationrequest_dynamic_property_names(void* self) {
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
/// ``` QWebEngineNavigationRequest* self ```
QBindingStorage* q_webenginenavigationrequest_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineNavigationRequest* self ```
QBindingStorage* q_webenginenavigationrequest_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEngineNavigationRequest* self, void (*slot)(QObject*) ```
void q_webenginenavigationrequest_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineNavigationRequest* self ```
QObject* q_webenginenavigationrequest_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineNavigationRequest* self, const char* classname ```
bool q_webenginenavigationrequest_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineNavigationRequest* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginenavigationrequest_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginenavigationrequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineNavigationRequest* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginenavigationrequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNavigationRequest* self, QObject* param1 ```
void q_webenginenavigationrequest_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEngineNavigationRequest* self, void (*slot)(QObject*, QObject*) ```
void q_webenginenavigationrequest_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_delete(void* self) {
    QWebEngineNavigationRequest_Delete((QWebEngineNavigationRequest*)(self));
}