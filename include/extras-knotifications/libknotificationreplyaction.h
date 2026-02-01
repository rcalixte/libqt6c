#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONS_QT6C_LIBKNOTIFICATIONREPLYACTION_H
#define SRC_EXTRAS_KNOTIFICATIONS_QT6C_LIBKNOTIFICATIONREPLYACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html)

/// k_notificationreplyaction_new constructs a new KNotificationReplyAction object.
///
/// @param label const char*
///
KNotificationReplyAction* k_notificationreplyaction_new(const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNotificationReplyAction*
///
const QMetaObject* k_notificationreplyaction_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KNotificationReplyAction*
/// @param callback const QMetaObject* func()
///
void k_notificationreplyaction_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KNotificationReplyAction*
///
const QMetaObject* k_notificationreplyaction_qbase_meta_object(void* self);

/// @param self KNotificationReplyAction*
/// @param param1 const char*
///
void* k_notificationreplyaction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KNotificationReplyAction*
/// @param callback void* func(KNotificationReplyAction* self, const char* param1)
///
void k_notificationreplyaction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KNotificationReplyAction*
/// @param param1 const char*
///
void* k_notificationreplyaction_qbase_metacast(void* self, const char* param1);

/// @param self KNotificationReplyAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_notificationreplyaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNotificationReplyAction*
/// @param callback int32_t func(KNotificationReplyAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_notificationreplyaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNotificationReplyAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_notificationreplyaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_notificationreplyaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotificationReplyAction*
///
const char* k_notificationreplyaction_label(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#setLabel)
///
/// @param self KNotificationReplyAction*
/// @param label const char*
///
void k_notificationreplyaction_set_label(void* self, const char* label);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotificationReplyAction*
///
const char* k_notificationreplyaction_placeholder_text(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#setPlaceholderText)
///
/// @param self KNotificationReplyAction*
/// @param placeholderText const char*
///
void k_notificationreplyaction_set_placeholder_text(void* self, const char* placeholderText);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#submitButtonText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotificationReplyAction*
///
const char* k_notificationreplyaction_submit_button_text(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#setSubmitButtonText)
///
/// @param self KNotificationReplyAction*
/// @param submitButtonText const char*
///
void k_notificationreplyaction_set_submit_button_text(void* self, const char* submitButtonText);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#submitButtonIconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotificationReplyAction*
///
const char* k_notificationreplyaction_submit_button_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#setSubmitButtonIconName)
///
/// @param self KNotificationReplyAction*
/// @param submitButtonIconName const char*
///
void k_notificationreplyaction_set_submit_button_icon_name(void* self, const char* submitButtonIconName);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#fallbackBehavior)
///
/// @param self KNotificationReplyAction*
///
/// @return enum KNotificationReplyAction__FallbackBehavior
///
int32_t k_notificationreplyaction_fallback_behavior(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#setFallbackBehavior)
///
/// @param self KNotificationReplyAction*
/// @param fallbackBehavior enum KNotificationReplyAction__FallbackBehavior
///
void k_notificationreplyaction_set_fallback_behavior(void* self, int32_t fallbackBehavior);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#replied)
///
/// @param self KNotificationReplyAction*
/// @param text const char*
///
void k_notificationreplyaction_replied(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#replied)
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self, const char* text)
///
void k_notificationreplyaction_on_replied(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#activated)
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_activated(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#activated)
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self)
///
void k_notificationreplyaction_on_activated(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#labelChanged)
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_label_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#labelChanged)
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self)
///
void k_notificationreplyaction_on_label_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#placeholderTextChanged)
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_placeholder_text_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#placeholderTextChanged)
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self)
///
void k_notificationreplyaction_on_placeholder_text_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#submitButtonTextChanged)
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_submit_button_text_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#submitButtonTextChanged)
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self)
///
void k_notificationreplyaction_on_submit_button_text_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#submitButtonIconNameChanged)
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_submit_button_icon_name_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#submitButtonIconNameChanged)
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self)
///
void k_notificationreplyaction_on_submit_button_icon_name_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#fallbackBehaviorChanged)
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_fallback_behavior_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#fallbackBehaviorChanged)
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self)
///
void k_notificationreplyaction_on_fallback_behavior_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_notificationreplyaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_notificationreplyaction_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotificationReplyAction*
///
const char* k_notificationreplyaction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNotificationReplyAction*
/// @param name char*
///
void k_notificationreplyaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNotificationReplyAction*
///
bool k_notificationreplyaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNotificationReplyAction*
///
bool k_notificationreplyaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNotificationReplyAction*
///
bool k_notificationreplyaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNotificationReplyAction*
///
bool k_notificationreplyaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNotificationReplyAction*
/// @param b bool
///
bool k_notificationreplyaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNotificationReplyAction*
///
QThread* k_notificationreplyaction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNotificationReplyAction*
/// @param thread QThread*
///
bool k_notificationreplyaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationReplyAction*
/// @param interval int
///
int32_t k_notificationreplyaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationReplyAction*
/// @param time int64_t of nanoseconds
///
int32_t k_notificationreplyaction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNotificationReplyAction*
/// @param id int
///
void k_notificationreplyaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNotificationReplyAction*
/// @param id enum Qt__TimerId
///
void k_notificationreplyaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNotificationReplyAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_notificationreplyaction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNotificationReplyAction*
/// @param parent QObject*
///
void k_notificationreplyaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNotificationReplyAction*
/// @param filterObj QObject*
///
void k_notificationreplyaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNotificationReplyAction*
/// @param obj QObject*
///
void k_notificationreplyaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_notificationreplyaction_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_notificationreplyaction_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNotificationReplyAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_notificationreplyaction_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_notificationreplyaction_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_notificationreplyaction_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationReplyAction*
///
bool k_notificationreplyaction_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationReplyAction*
/// @param receiver QObject*
///
bool k_notificationreplyaction_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_notificationreplyaction_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNotificationReplyAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_notificationreplyaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNotificationReplyAction*
/// @param name const char*
///
QVariant* k_notificationreplyaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KNotificationReplyAction*
///
const char** k_notificationreplyaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNotificationReplyAction*
///
QBindingStorage* k_notificationreplyaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNotificationReplyAction*
///
const QBindingStorage* k_notificationreplyaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self)
///
void k_notificationreplyaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNotificationReplyAction*
///
QObject* k_notificationreplyaction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNotificationReplyAction*
/// @param classname const char*
///
bool k_notificationreplyaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationReplyAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_notificationreplyaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationReplyAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_notificationreplyaction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_notificationreplyaction_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_notificationreplyaction_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNotificationReplyAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_notificationreplyaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationReplyAction*
/// @param signal const char*
///
bool k_notificationreplyaction_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationReplyAction*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_notificationreplyaction_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationReplyAction*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_notificationreplyaction_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationReplyAction*
/// @param receiver QObject*
/// @param member const char*
///
bool k_notificationreplyaction_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationReplyAction*
/// @param param1 QObject*
///
void k_notificationreplyaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self, QObject* param1)
///
void k_notificationreplyaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param event QEvent*
///
bool k_notificationreplyaction_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param event QEvent*
///
bool k_notificationreplyaction_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback bool func(KNotificationReplyAction* self, QEvent* event)
///
void k_notificationreplyaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_notificationreplyaction_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_notificationreplyaction_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback bool func(KNotificationReplyAction* self, QObject* watched, QEvent* event)
///
void k_notificationreplyaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param event QTimerEvent*
///
void k_notificationreplyaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param event QTimerEvent*
///
void k_notificationreplyaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self, QTimerEvent* event)
///
void k_notificationreplyaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param event QChildEvent*
///
void k_notificationreplyaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param event QChildEvent*
///
void k_notificationreplyaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self, QChildEvent* event)
///
void k_notificationreplyaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param event QEvent*
///
void k_notificationreplyaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param event QEvent*
///
void k_notificationreplyaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self, QEvent* event)
///
void k_notificationreplyaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param signal QMetaMethod*
///
void k_notificationreplyaction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param signal QMetaMethod*
///
void k_notificationreplyaction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self, QMetaMethod* signal)
///
void k_notificationreplyaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param signal QMetaMethod*
///
void k_notificationreplyaction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param signal QMetaMethod*
///
void k_notificationreplyaction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self, QMetaMethod* signal)
///
void k_notificationreplyaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
///
QObject* k_notificationreplyaction_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
///
QObject* k_notificationreplyaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback QObject* func()
///
void k_notificationreplyaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
///
int32_t k_notificationreplyaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
///
int32_t k_notificationreplyaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback int32_t func()
///
void k_notificationreplyaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param signal const char*
///
int32_t k_notificationreplyaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param signal const char*
///
int32_t k_notificationreplyaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback int32_t func(KNotificationReplyAction* self, const char* signal)
///
void k_notificationreplyaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param signal QMetaMethod*
///
bool k_notificationreplyaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param signal QMetaMethod*
///
bool k_notificationreplyaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationReplyAction*
/// @param callback bool func(KNotificationReplyAction* self, QMetaMethod* signal)
///
void k_notificationreplyaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNotificationReplyAction*
/// @param callback void func(KNotificationReplyAction* self, const char* objectName)
///
void k_notificationreplyaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#dtor.KNotificationReplyAction)
///
/// Delete this object from C++ memory.
///
/// @param self KNotificationReplyAction*
///
void k_notificationreplyaction_delete(void* self);

/// [Upstream resources](https://api.kde.org/knotificationreplyaction.html#public-types)

typedef enum {
    KNOTIFICATIONREPLYACTION_FALLBACKBEHAVIOR_HIDEACTION = 0,
    KNOTIFICATIONREPLYACTION_FALLBACKBEHAVIOR_USEREGULARACTION = 1
} KNotificationReplyAction__FallbackBehavior;

#endif
