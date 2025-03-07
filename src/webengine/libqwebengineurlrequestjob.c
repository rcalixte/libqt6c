#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebengineurlrequestjob.hpp"
#include "libqwebengineurlrequestjob.h"

/// https://doc.qt.io/qt-6/qwebengineurlrequestjob.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineUrlRequestJob* self ```
QMetaObject* q_webengineurlrequestjob_meta_object(void* self) {
    return QWebEngineUrlRequestJob_MetaObject((QWebEngineUrlRequestJob*)self);
}

/// ``` QWebEngineUrlRequestJob* self, const char* param1 ```
void* q_webengineurlrequestjob_metacast(void* self, const char* param1) {
    return QWebEngineUrlRequestJob_Metacast((QWebEngineUrlRequestJob*)self, param1);
}

/// ``` QWebEngineUrlRequestJob* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineurlrequestjob_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineUrlRequestJob_Metacall((QWebEngineUrlRequestJob*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webengineurlrequestjob_tr(const char* s) {
    libqt_string _str = QWebEngineUrlRequestJob_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestUrl)
///
/// ``` QWebEngineUrlRequestJob* self ```
QUrl* q_webengineurlrequestjob_request_url(void* self) {
    return QWebEngineUrlRequestJob_RequestUrl((QWebEngineUrlRequestJob*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#requestMethod)
///
/// ``` QWebEngineUrlRequestJob* self ```
char* q_webengineurlrequestjob_request_method(void* self) {
    libqt_string _str = QWebEngineUrlRequestJob_RequestMethod((QWebEngineUrlRequestJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#initiator)
///
/// ``` QWebEngineUrlRequestJob* self ```
QUrl* q_webengineurlrequestjob_initiator(void* self) {
    return QWebEngineUrlRequestJob_Initiator((QWebEngineUrlRequestJob*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#reply)
///
/// ``` QWebEngineUrlRequestJob* self, const char* contentType, QIODevice* device ```
void q_webengineurlrequestjob_reply(void* self, const char* contentType, void* device) {
    QWebEngineUrlRequestJob_Reply((QWebEngineUrlRequestJob*)self, qstring(contentType), (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#fail)
///
/// ``` QWebEngineUrlRequestJob* self, enum QWebEngineUrlRequestJob__Error errorVal ```
void q_webengineurlrequestjob_fail(void* self, int64_t errorVal) {
    QWebEngineUrlRequestJob_Fail((QWebEngineUrlRequestJob*)self, errorVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestjob.html#redirect)
///
/// ``` QWebEngineUrlRequestJob* self, QUrl* url ```
void q_webengineurlrequestjob_redirect(void* self, void* url) {
    QWebEngineUrlRequestJob_Redirect((QWebEngineUrlRequestJob*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webengineurlrequestjob_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineUrlRequestJob_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webengineurlrequestjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineUrlRequestJob_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineUrlRequestJob* self, QEvent* event ```
bool q_webengineurlrequestjob_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* watched, QEvent* event ```
bool q_webengineurlrequestjob_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineUrlRequestJob* self ```
const char* q_webengineurlrequestjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineUrlRequestJob* self, const char* name ```
void q_webengineurlrequestjob_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineUrlRequestJob* self ```
bool q_webengineurlrequestjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineUrlRequestJob* self ```
bool q_webengineurlrequestjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineUrlRequestJob* self ```
bool q_webengineurlrequestjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineUrlRequestJob* self ```
bool q_webengineurlrequestjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineUrlRequestJob* self, bool b ```
bool q_webengineurlrequestjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineUrlRequestJob* self ```
QThread* q_webengineurlrequestjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineUrlRequestJob* self, QThread* thread ```
void q_webengineurlrequestjob_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineUrlRequestJob* self, int interval ```
int32_t q_webengineurlrequestjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineUrlRequestJob* self, int id ```
void q_webengineurlrequestjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineUrlRequestJob* self ```
libqt_list /* of QObject* */ q_webengineurlrequestjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* parent ```
void q_webengineurlrequestjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* filterObj ```
void q_webengineurlrequestjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* obj ```
void q_webengineurlrequestjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webengineurlrequestjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webengineurlrequestjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webengineurlrequestjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webengineurlrequestjob_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineUrlRequestJob* self ```
void q_webengineurlrequestjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineUrlRequestJob* self ```
void q_webengineurlrequestjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineUrlRequestJob* self, const char* name, QVariant* value ```
bool q_webengineurlrequestjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineUrlRequestJob* self, const char* name ```
QVariant* q_webengineurlrequestjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineUrlRequestJob* self ```
const char** q_webengineurlrequestjob_dynamic_property_names(void* self) {
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
/// ``` QWebEngineUrlRequestJob* self ```
QBindingStorage* q_webengineurlrequestjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineUrlRequestJob* self ```
QBindingStorage* q_webengineurlrequestjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlRequestJob* self ```
void q_webengineurlrequestjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEngineUrlRequestJob* self, void (*slot)(QObject*) ```
void q_webengineurlrequestjob_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineUrlRequestJob* self ```
QObject* q_webengineurlrequestjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineUrlRequestJob* self, const char* classname ```
bool q_webengineurlrequestjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineUrlRequestJob* self ```
void q_webengineurlrequestjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineUrlRequestJob* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webengineurlrequestjob_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineurlrequestjob_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineurlrequestjob_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlRequestJob* self, QObject* param1 ```
void q_webengineurlrequestjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEngineUrlRequestJob* self, void (*slot)(QObject*, QObject*) ```
void q_webengineurlrequestjob_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineUrlRequestJob* self ```
void q_webengineurlrequestjob_delete(void* self) {
    QWebEngineUrlRequestJob_Delete((QWebEngineUrlRequestJob*)(self));
}