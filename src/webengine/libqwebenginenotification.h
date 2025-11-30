#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINENOTIFICATION_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINENOTIFICATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginenotification.html

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineNotification*
const QMetaObject* q_webenginenotification_meta_object(void* self);

/// @param self QWebEngineNotification*
/// @param param1 const char*
void* q_webenginenotification_metacast(void* self, const char* param1);

/// @param self QWebEngineNotification*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_webenginenotification_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_webenginenotification_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#matches)
///
/// @param self QWebEngineNotification*
/// @param other QWebEngineNotification*
bool q_webenginenotification_matches(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#origin)
///
/// @param self QWebEngineNotification*
QUrl* q_webenginenotification_origin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#icon)
///
/// @param self QWebEngineNotification*
QImage* q_webenginenotification_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#title)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineNotification*
const char* q_webenginenotification_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#message)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineNotification*
const char* q_webenginenotification_message(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#tag)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineNotification*
const char* q_webenginenotification_tag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#language)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineNotification*
const char* q_webenginenotification_language(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#direction)
///
/// @param self QWebEngineNotification*
///
/// @return enum Qt__LayoutDirection
int32_t q_webenginenotification_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#show)
///
/// @param self QWebEngineNotification*
void q_webenginenotification_show(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#click)
///
/// @param self QWebEngineNotification*
void q_webenginenotification_click(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#close)
///
/// @param self QWebEngineNotification*
void q_webenginenotification_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#closed)
///
/// @param self QWebEngineNotification*
void q_webenginenotification_closed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#closed)
///
/// @param self QWebEngineNotification*
/// @param callback void func(QWebEngineNotification* self)
void q_webenginenotification_on_closed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_webenginenotification_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_webenginenotification_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineNotification*
/// @param event QEvent*
bool q_webenginenotification_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineNotification*
/// @param watched QObject*
/// @param event QEvent*
bool q_webenginenotification_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineNotification*
const char* q_webenginenotification_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineNotification*
/// @param name char*
void q_webenginenotification_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineNotification*
bool q_webenginenotification_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineNotification*
bool q_webenginenotification_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineNotification*
bool q_webenginenotification_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineNotification*
bool q_webenginenotification_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineNotification*
/// @param b bool
bool q_webenginenotification_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineNotification*
QThread* q_webenginenotification_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineNotification*
/// @param thread QThread*
bool q_webenginenotification_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineNotification*
/// @param interval int
int32_t q_webenginenotification_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineNotification*
/// @param id int
void q_webenginenotification_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineNotification*
/// @param id enum Qt__TimerId
void q_webenginenotification_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineNotification*
libqt_list /* of QObject* */ q_webenginenotification_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineNotification*
/// @param parent QObject*
void q_webenginenotification_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineNotification*
/// @param filterObj QObject*
void q_webenginenotification_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineNotification*
/// @param obj QObject*
void q_webenginenotification_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_webenginenotification_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineNotification*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_webenginenotification_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_webenginenotification_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_webenginenotification_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineNotification*
void q_webenginenotification_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineNotification*
void q_webenginenotification_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineNotification*
/// @param name const char*
/// @param value QVariant*
bool q_webenginenotification_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineNotification*
/// @param name const char*
QVariant* q_webenginenotification_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineNotification*
const char** q_webenginenotification_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineNotification*
QBindingStorage* q_webenginenotification_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineNotification*
const QBindingStorage* q_webenginenotification_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNotification*
void q_webenginenotification_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNotification*
/// @param callback void func(QWebEngineNotification* self)
void q_webenginenotification_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineNotification*
QObject* q_webenginenotification_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineNotification*
/// @param classname const char*
bool q_webenginenotification_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineNotification*
void q_webenginenotification_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineNotification*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_webenginenotification_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineNotification*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_webenginenotification_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_webenginenotification_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineNotification*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_webenginenotification_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNotification*
/// @param param1 QObject*
void q_webenginenotification_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNotification*
/// @param callback void func(QWebEngineNotification* self, QObject* param1)
void q_webenginenotification_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineNotification*
/// @param callback void func(QWebEngineNotification* self, const char* objectName)
void q_webenginenotification_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenotification.html#dtor.QWebEngineNotification)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineNotification*
void q_webenginenotification_delete(void* self);

#endif
