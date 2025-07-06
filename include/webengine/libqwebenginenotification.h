#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINENOTIFICATION_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINENOTIFICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginenotification.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineNotification* self ```
const QMetaObject* q_webenginenotification_meta_object(void* self);

/// ``` QWebEngineNotification* self, const char* param1 ```
void* q_webenginenotification_metacast(void* self, const char* param1);

/// ``` QWebEngineNotification* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginenotification_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginenotification_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#matches)
///
/// ``` QWebEngineNotification* self, QWebEngineNotification* other ```
bool q_webenginenotification_matches(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#origin)
///
/// ``` QWebEngineNotification* self ```
QUrl* q_webenginenotification_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#icon)
///
/// ``` QWebEngineNotification* self ```
QImage* q_webenginenotification_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#title)
///
/// ``` QWebEngineNotification* self ```
const char* q_webenginenotification_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#message)
///
/// ``` QWebEngineNotification* self ```
const char* q_webenginenotification_message(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#tag)
///
/// ``` QWebEngineNotification* self ```
const char* q_webenginenotification_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#language)
///
/// ``` QWebEngineNotification* self ```
const char* q_webenginenotification_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#direction)
///
/// ``` QWebEngineNotification* self ```
int64_t q_webenginenotification_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#show)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#click)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_click(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#close)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#closed)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_closed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#closed)
///
/// ``` QWebEngineNotification* self, void (*slot)(QWebEngineNotification*) ```
void q_webenginenotification_on_closed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginenotification_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginenotification_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineNotification* self, QEvent* event ```
bool q_webenginenotification_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineNotification* self, QObject* watched, QEvent* event ```
bool q_webenginenotification_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineNotification* self ```
const char* q_webenginenotification_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineNotification* self, char* name ```
void q_webenginenotification_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineNotification* self ```
bool q_webenginenotification_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineNotification* self ```
bool q_webenginenotification_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineNotification* self ```
bool q_webenginenotification_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineNotification* self ```
bool q_webenginenotification_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineNotification* self, bool b ```
bool q_webenginenotification_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineNotification* self ```
QThread* q_webenginenotification_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineNotification* self, QThread* thread ```
bool q_webenginenotification_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineNotification* self, int interval ```
int32_t q_webenginenotification_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineNotification* self, int id ```
void q_webenginenotification_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineNotification* self, enum Qt__TimerId id ```
void q_webenginenotification_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineNotification* self ```
libqt_list /* of QObject* */ q_webenginenotification_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineNotification* self, QObject* parent ```
void q_webenginenotification_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineNotification* self, QObject* filterObj ```
void q_webenginenotification_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineNotification* self, QObject* obj ```
void q_webenginenotification_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginenotification_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineNotification* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginenotification_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginenotification_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginenotification_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineNotification* self, const char* name, QVariant* value ```
bool q_webenginenotification_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineNotification* self, const char* name ```
QVariant* q_webenginenotification_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineNotification* self ```
const char** q_webenginenotification_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineNotification* self ```
QBindingStorage* q_webenginenotification_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineNotification* self ```
const QBindingStorage* q_webenginenotification_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNotification* self, void (*slot)(QObject*) ```
void q_webenginenotification_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineNotification* self ```
QObject* q_webenginenotification_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineNotification* self, const char* classname ```
bool q_webenginenotification_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineNotification* self, QThread* thread, Disambiguated_t* param2 ```
bool q_webenginenotification_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineNotification* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginenotification_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginenotification_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineNotification* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginenotification_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNotification* self, QObject* param1 ```
void q_webenginenotification_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNotification* self, void (*slot)(QObject*, QObject*) ```
void q_webenginenotification_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineNotification* self, void (*slot)(QObject*, const char*) ```
void q_webenginenotification_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenotification.html#dtor.QWebEngineNotification)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineNotification* self ```
void q_webenginenotification_delete(void* self);

#endif
