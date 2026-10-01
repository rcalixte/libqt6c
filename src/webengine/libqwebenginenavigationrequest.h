#pragma once
#ifndef WEBENGINE_LIBQWEBENGINENAVIGATIONREQUEST_H
#define WEBENGINE_LIBQWEBENGINENAVIGATIONREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QWebEngineNavigationRequest*
///
const QMetaObject* q_webenginenavigationrequest_meta_object(const void* self);

/// @param self QWebEngineNavigationRequest*
/// @param param1 const char*
///
void* q_webenginenavigationrequest_metacast(void* self, const char* param1);

/// @param self QWebEngineNavigationRequest*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webenginenavigationrequest_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_webenginenavigationrequest_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#url)
///
/// @param self const QWebEngineNavigationRequest*
///
QUrl* q_webenginenavigationrequest_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#isMainFrame)
///
/// @param self const QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_is_main_frame(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#hasFormData)
///
/// @param self const QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_has_form_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#navigationType)
///
/// @param self const QWebEngineNavigationRequest*
///
/// @return enum QWebEngineNavigationRequest__NavigationType
///
int32_t q_webenginenavigationrequest_navigation_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#accept)
///
/// @param self QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_accept(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#reject)
///
/// @param self QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_reject(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#actionChanged)
///
/// @param self QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_action_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#actionChanged)
///
/// @param self QWebEngineNavigationRequest*
/// @param callback void func(QWebEngineNavigationRequest* self)
///
void q_webenginenavigationrequest_on_action_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_webenginenavigationrequest_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webenginenavigationrequest_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineNavigationRequest*
/// @param event QEvent*
///
bool q_webenginenavigationrequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineNavigationRequest*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webenginenavigationrequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineNavigationRequest*
///
const char* q_webenginenavigationrequest_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineNavigationRequest*
/// @param name const char*
///
void q_webenginenavigationrequest_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineNavigationRequest*
/// @param b bool
///
bool q_webenginenavigationrequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QWebEngineNavigationRequest*
///
QThread* q_webenginenavigationrequest_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineNavigationRequest*
/// @param thread QThread*
///
bool q_webenginenavigationrequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineNavigationRequest*
/// @param interval int
///
int32_t q_webenginenavigationrequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineNavigationRequest*
/// @param time int64_t of nanoseconds
///
int32_t q_webenginenavigationrequest_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineNavigationRequest*
/// @param id int
///
void q_webenginenavigationrequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineNavigationRequest*
/// @param id enum Qt__TimerId
///
void q_webenginenavigationrequest_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QWebEngineNavigationRequest*
///
/// @return libqt_list of QObject*
///
libqt_list q_webenginenavigationrequest_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineNavigationRequest*
/// @param parent QObject*
///
void q_webenginenavigationrequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineNavigationRequest*
/// @param filterObj QObject*
///
void q_webenginenavigationrequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineNavigationRequest*
/// @param obj QObject*
///
void q_webenginenavigationrequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_webenginenavigationrequest_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webenginenavigationrequest_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineNavigationRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webenginenavigationrequest_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginenavigationrequest_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webenginenavigationrequest_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineNavigationRequest*
/// @param receiver QObject*
///
bool q_webenginenavigationrequest_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webenginenavigationrequest_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineNavigationRequest*
/// @param name const char*
/// @param value QVariant*
///
bool q_webenginenavigationrequest_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QWebEngineNavigationRequest*
/// @param name const char*
///
QVariant* q_webenginenavigationrequest_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineNavigationRequest*
///
const char** q_webenginenavigationrequest_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineNavigationRequest*
///
QBindingStorage* q_webenginenavigationrequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QWebEngineNavigationRequest*
///
const QBindingStorage* q_webenginenavigationrequest_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNavigationRequest*
/// @param callback void func(QWebEngineNavigationRequest* self)
///
void q_webenginenavigationrequest_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QWebEngineNavigationRequest*
///
QObject* q_webenginenavigationrequest_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QWebEngineNavigationRequest*
/// @param classname const char*
///
bool q_webenginenavigationrequest_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineNavigationRequest*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginenavigationrequest_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineNavigationRequest*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginenavigationrequest_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginenavigationrequest_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginenavigationrequest_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineNavigationRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginenavigationrequest_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineNavigationRequest*
/// @param signal const char*
///
bool q_webenginenavigationrequest_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineNavigationRequest*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_webenginenavigationrequest_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineNavigationRequest*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginenavigationrequest_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineNavigationRequest*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginenavigationrequest_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNavigationRequest*
/// @param param1 QObject*
///
void q_webenginenavigationrequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNavigationRequest*
/// @param callback void func(QWebEngineNavigationRequest* self, QObject* param1)
///
void q_webenginenavigationrequest_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineNavigationRequest*
/// @param callback void func(QWebEngineNavigationRequest* self, const char* objectName)
///
void q_webenginenavigationrequest_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#dtor.QWebEngineNavigationRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#public-types)

typedef enum {
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_LINKCLICKEDNAVIGATION = 0,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_TYPEDNAVIGATION = 1,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_FORMSUBMITTEDNAVIGATION = 2,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_BACKFORWARDNAVIGATION = 3,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_RELOADNAVIGATION = 4,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_OTHERNAVIGATION = 5,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_REDIRECTNAVIGATION = 6
} QWebEngineNavigationRequest__NavigationType;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#public-types)

typedef enum {
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONREQUESTACTION_ACCEPTREQUEST = 0,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONREQUESTACTION_IGNOREREQUEST = 255
} QWebEngineNavigationRequest__NavigationRequestAction;

#endif
