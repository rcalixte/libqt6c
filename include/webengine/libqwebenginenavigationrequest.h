#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINENAVIGATIONREQUEST_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINENAVIGATIONREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineNavigationRequest*
///
const QMetaObject* q_webenginenavigationrequest_meta_object(void* self);

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
/// @param self QWebEngineNavigationRequest*
///
QUrl* q_webenginenavigationrequest_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#isMainFrame)
///
/// @param self QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_is_main_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#hasFormData)
///
/// @param self QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_has_form_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#navigationType)
///
/// @param self QWebEngineNavigationRequest*
///
/// @return enum QWebEngineNavigationRequest__NavigationType
///
int32_t q_webenginenavigationrequest_navigation_type(void* self);

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
/// @param self QWebEngineNavigationRequest*
///
const char* q_webenginenavigationrequest_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineNavigationRequest*
/// @param name char*
///
void q_webenginenavigationrequest_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineNavigationRequest*
///
bool q_webenginenavigationrequest_signals_blocked(void* self);

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
/// @param self QWebEngineNavigationRequest*
///
QThread* q_webenginenavigationrequest_thread(void* self);

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
/// @param self QWebEngineNavigationRequest*
///
/// @return libqt_list of QObject*
///
libqt_list q_webenginenavigationrequest_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webenginenavigationrequest_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineNavigationRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webenginenavigationrequest_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webenginenavigationrequest_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webenginenavigationrequest_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineNavigationRequest*
/// @param name const char*
/// @param value QVariant*
///
bool q_webenginenavigationrequest_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineNavigationRequest*
/// @param name const char*
///
QVariant* q_webenginenavigationrequest_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWebEngineNavigationRequest*
///
const char** q_webenginenavigationrequest_dynamic_property_names(void* self);

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
/// @param self QWebEngineNavigationRequest*
///
const QBindingStorage* q_webenginenavigationrequest_binding_storage2(void* self);

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
/// @param self QWebEngineNavigationRequest*
///
QObject* q_webenginenavigationrequest_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineNavigationRequest*
/// @param classname const char*
///
bool q_webenginenavigationrequest_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineNavigationRequest*
///
void q_webenginenavigationrequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineNavigationRequest*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_webenginenavigationrequest_move_to_thread2(void* self, void* thread, void* param2);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginenavigationrequest_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineNavigationRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginenavigationrequest_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
