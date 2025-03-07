#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebenginenotification.hpp"
#include "libqwebenginenotification.h"

/// https://doc.qt.io/qt-6/qwebenginenotification.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineNotification* self ```
QMetaObject* q_webenginenotification_meta_object(void* self) {
    return QWebEngineNotification_MetaObject((QWebEngineNotification*)self);
}

/// ``` QWebEngineNotification* self, const char* param1 ```
void* q_webenginenotification_metacast(void* self, const char* param1) {
    return QWebEngineNotification_Metacast((QWebEngineNotification*)self, param1);
}

/// ``` QWebEngineNotification* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginenotification_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineNotification_Metacall((QWebEngineNotification*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginenotification_tr(const char* s) {
    libqt_string _str = QWebEngineNotification_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#matches)
///
/// ``` QWebEngineNotification* self, QWebEngineNotification* other ```
bool q_webenginenotification_matches(void* self, void* other) {
    return QWebEngineNotification_Matches((QWebEngineNotification*)self, (QWebEngineNotification*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#origin)
///
/// ``` QWebEngineNotification* self ```
QUrl* q_webenginenotification_origin(void* self) {
    return QWebEngineNotification_Origin((QWebEngineNotification*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#icon)
///
/// ``` QWebEngineNotification* self ```
QImage* q_webenginenotification_icon(void* self) {
    return QWebEngineNotification_Icon((QWebEngineNotification*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#title)
///
/// ``` QWebEngineNotification* self ```
const char* q_webenginenotification_title(void* self) {
    libqt_string _str = QWebEngineNotification_Title((QWebEngineNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#message)
///
/// ``` QWebEngineNotification* self ```
const char* q_webenginenotification_message(void* self) {
    libqt_string _str = QWebEngineNotification_Message((QWebEngineNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#tag)
///
/// ``` QWebEngineNotification* self ```
const char* q_webenginenotification_tag(void* self) {
    libqt_string _str = QWebEngineNotification_Tag((QWebEngineNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#language)
///
/// ``` QWebEngineNotification* self ```
const char* q_webenginenotification_language(void* self) {
    libqt_string _str = QWebEngineNotification_Language((QWebEngineNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#direction)
///
/// ``` QWebEngineNotification* self ```
int64_t q_webenginenotification_direction(void* self) {
    return QWebEngineNotification_Direction((QWebEngineNotification*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#show)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_show(void* self) {
    QWebEngineNotification_Show((QWebEngineNotification*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#click)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_click(void* self) {
    QWebEngineNotification_Click((QWebEngineNotification*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#close)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_close(void* self) {
    QWebEngineNotification_Close((QWebEngineNotification*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#closed)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_closed(void* self) {
    QWebEngineNotification_Closed((QWebEngineNotification*)self);
}

/// ``` QWebEngineNotification* self, void (*slot)(QWebEngineNotification*) ```
void q_webenginenotification_on_closed(void* self, void (*slot)(void*)) {
    QWebEngineNotification_Connect_Closed((QWebEngineNotification*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginenotification_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineNotification_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginenotification_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineNotification_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineNotification* self, QEvent* event ```
bool q_webenginenotification_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineNotification* self, QObject* watched, QEvent* event ```
bool q_webenginenotification_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineNotification* self ```
const char* q_webenginenotification_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineNotification* self, const char* name ```
void q_webenginenotification_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineNotification* self ```
bool q_webenginenotification_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineNotification* self ```
bool q_webenginenotification_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineNotification* self ```
bool q_webenginenotification_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineNotification* self ```
bool q_webenginenotification_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineNotification* self, bool b ```
bool q_webenginenotification_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineNotification* self ```
QThread* q_webenginenotification_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineNotification* self, QThread* thread ```
void q_webenginenotification_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineNotification* self, int interval ```
int32_t q_webenginenotification_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineNotification* self, int id ```
void q_webenginenotification_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineNotification* self ```
libqt_list /* of QObject* */ q_webenginenotification_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineNotification* self, QObject* parent ```
void q_webenginenotification_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineNotification* self, QObject* filterObj ```
void q_webenginenotification_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineNotification* self, QObject* obj ```
void q_webenginenotification_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginenotification_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineNotification* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginenotification_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginenotification_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginenotification_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineNotification* self, const char* name, QVariant* value ```
bool q_webenginenotification_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineNotification* self, const char* name ```
QVariant* q_webenginenotification_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineNotification* self ```
const char** q_webenginenotification_dynamic_property_names(void* self) {
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
/// ``` QWebEngineNotification* self ```
QBindingStorage* q_webenginenotification_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineNotification* self ```
QBindingStorage* q_webenginenotification_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEngineNotification* self, void (*slot)(QObject*) ```
void q_webenginenotification_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineNotification* self ```
QObject* q_webenginenotification_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineNotification* self, const char* classname ```
bool q_webenginenotification_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineNotification* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginenotification_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginenotification_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineNotification* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginenotification_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNotification* self, QObject* param1 ```
void q_webenginenotification_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEngineNotification* self, void (*slot)(QObject*, QObject*) ```
void q_webenginenotification_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_delete(void* self) {
    QWebEngineNotification_Delete((QWebEngineNotification*)(self));
}