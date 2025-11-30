#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETS_QT6C_LIBKNOTIFICATIONJOBUIDELEGATE_H
#define SRC_EXTRAS_KJOBWIDGETS_QT6C_LIBKNOTIFICATIONJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knotificationjobuidelegate.html

/// k_notificationjobuidelegate_new constructs a new KNotificationJobUiDelegate object.
///
KNotificationJobUiDelegate* k_notificationjobuidelegate_new();

/// k_notificationjobuidelegate_new2 constructs a new KNotificationJobUiDelegate object.
///
/// @param flags flag of enum KJobUiDelegate__Flag
KNotificationJobUiDelegate* k_notificationjobuidelegate_new2(int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNotificationJobUiDelegate*
const QMetaObject* k_notificationjobuidelegate_meta_object(void* self);

/// @param self KNotificationJobUiDelegate*
/// @param param1 const char*
void* k_notificationjobuidelegate_metacast(void* self, const char* param1);

/// @param self KNotificationJobUiDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_notificationjobuidelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_notificationjobuidelegate_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knotificationjobuidelegate.html#showErrorMessage)
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_show_error_message(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_notificationjobuidelegate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_notificationjobuidelegate_tr3(const char* s, const char* c, int n);

/// Inherited from KJobUiDelegate
///
/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#setAutoErrorHandlingEnabled)
///
/// @param self KNotificationJobUiDelegate*
/// @param enable bool
void k_notificationjobuidelegate_set_auto_error_handling_enabled(void* self, bool enable);

/// Inherited from KJobUiDelegate
///
/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#isAutoErrorHandlingEnabled)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_is_auto_error_handling_enabled(void* self);

/// Inherited from KJobUiDelegate
///
/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#setAutoWarningHandlingEnabled)
///
/// @param self KNotificationJobUiDelegate*
/// @param enable bool
void k_notificationjobuidelegate_set_auto_warning_handling_enabled(void* self, bool enable);

/// Inherited from KJobUiDelegate
///
/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#isAutoWarningHandlingEnabled)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_is_auto_warning_handling_enabled(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KNotificationJobUiDelegate*
/// @param event QEvent*
bool k_notificationjobuidelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KNotificationJobUiDelegate*
/// @param watched QObject*
/// @param event QEvent*
bool k_notificationjobuidelegate_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNotificationJobUiDelegate*
const char* k_notificationjobuidelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNotificationJobUiDelegate*
/// @param name char*
void k_notificationjobuidelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNotificationJobUiDelegate*
/// @param b bool
bool k_notificationjobuidelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNotificationJobUiDelegate*
QThread* k_notificationjobuidelegate_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNotificationJobUiDelegate*
/// @param thread QThread*
bool k_notificationjobuidelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationJobUiDelegate*
/// @param interval int
int32_t k_notificationjobuidelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNotificationJobUiDelegate*
/// @param id int
void k_notificationjobuidelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNotificationJobUiDelegate*
/// @param id enum Qt__TimerId
void k_notificationjobuidelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNotificationJobUiDelegate*
libqt_list /* of QObject* */ k_notificationjobuidelegate_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNotificationJobUiDelegate*
/// @param parent QObject*
void k_notificationjobuidelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNotificationJobUiDelegate*
/// @param filterObj QObject*
void k_notificationjobuidelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNotificationJobUiDelegate*
/// @param obj QObject*
void k_notificationjobuidelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_notificationjobuidelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNotificationJobUiDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_notificationjobuidelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_notificationjobuidelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_notificationjobuidelegate_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNotificationJobUiDelegate*
/// @param name const char*
/// @param value QVariant*
bool k_notificationjobuidelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNotificationJobUiDelegate*
/// @param name const char*
QVariant* k_notificationjobuidelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNotificationJobUiDelegate*
const char** k_notificationjobuidelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNotificationJobUiDelegate*
QBindingStorage* k_notificationjobuidelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNotificationJobUiDelegate*
const QBindingStorage* k_notificationjobuidelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self)
void k_notificationjobuidelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNotificationJobUiDelegate*
QObject* k_notificationjobuidelegate_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNotificationJobUiDelegate*
/// @param classname const char*
bool k_notificationjobuidelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNotificationJobUiDelegate*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_notificationjobuidelegate_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationJobUiDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_notificationjobuidelegate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_notificationjobuidelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNotificationJobUiDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_notificationjobuidelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationJobUiDelegate*
/// @param param1 QObject*
void k_notificationjobuidelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self, QObject* param1)
void k_notificationjobuidelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self, const char* objectName)
void k_notificationjobuidelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knotificationjobuidelegate.html#dtor.KNotificationJobUiDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_delete(void* self);

#endif
