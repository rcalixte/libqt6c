#pragma once
#ifndef EXTRAS_KJOBWIDGETS_LIBKDIALOGJOBUIDELEGATE_H
#define EXTRAS_KJOBWIDGETS_LIBKDIALOGJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdialogjobuidelegate.html)

/// k_dialogjobuidelegate_new constructs a new KDialogJobUiDelegate object.
///
KDialogJobUiDelegate* k_dialogjobuidelegate_new();

/// [Upstream resources](https://api.kde.org/kdialogjobuidelegate.html)

/// k_dialogjobuidelegate_new2 constructs a new KDialogJobUiDelegate object.
///
/// @param flags flag of enum KJobUiDelegate__Flag
/// @param window QWidget*
///
KDialogJobUiDelegate* k_dialogjobuidelegate_new2(int32_t flags, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KDialogJobUiDelegate*
///
const QMetaObject* k_dialogjobuidelegate_meta_object(const void* self);

/// @param self KDialogJobUiDelegate*
/// @param param1 const char*
///
void* k_dialogjobuidelegate_metacast(void* self, const char* param1);

/// @param self KDialogJobUiDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dialogjobuidelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_dialogjobuidelegate_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kdialogjobuidelegate.html#setJob)
///
/// @param self KDialogJobUiDelegate*
/// @param job KJob*
///
bool k_dialogjobuidelegate_set_job(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kdialogjobuidelegate.html#setWindow)
///
/// @param self KDialogJobUiDelegate*
/// @param window QWidget*
///
void k_dialogjobuidelegate_set_window(void* self, void* window);

/// [Upstream resources](https://api.kde.org/kdialogjobuidelegate.html#window)
///
/// @param self const KDialogJobUiDelegate*
///
QWidget* k_dialogjobuidelegate_window(const void* self);

/// [Upstream resources](https://api.kde.org/kdialogjobuidelegate.html#updateUserTimestamp)
///
/// @param self KDialogJobUiDelegate*
/// @param time uintptr_t
///
void k_dialogjobuidelegate_update_user_timestamp(void* self, uintptr_t time);

/// [Upstream resources](https://api.kde.org/kdialogjobuidelegate.html#userTimestamp)
///
/// @param self const KDialogJobUiDelegate*
///
uintptr_t k_dialogjobuidelegate_user_timestamp(const void* self);

/// [Upstream resources](https://api.kde.org/kdialogjobuidelegate.html#showErrorMessage)
///
/// @param self KDialogJobUiDelegate*
///
void k_dialogjobuidelegate_show_error_message(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_dialogjobuidelegate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_dialogjobuidelegate_tr3(const char* s, const char* c, int n);

/// Inherited from KJobUiDelegate
///
/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#setAutoErrorHandlingEnabled)
///
/// @param self KDialogJobUiDelegate*
/// @param enable bool
///
void k_dialogjobuidelegate_set_auto_error_handling_enabled(void* self, bool enable);

/// Inherited from KJobUiDelegate
///
/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#isAutoErrorHandlingEnabled)
///
/// @param self const KDialogJobUiDelegate*
///
bool k_dialogjobuidelegate_is_auto_error_handling_enabled(const void* self);

/// Inherited from KJobUiDelegate
///
/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#setAutoWarningHandlingEnabled)
///
/// @param self KDialogJobUiDelegate*
/// @param enable bool
///
void k_dialogjobuidelegate_set_auto_warning_handling_enabled(void* self, bool enable);

/// Inherited from KJobUiDelegate
///
/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#isAutoWarningHandlingEnabled)
///
/// @param self const KDialogJobUiDelegate*
///
bool k_dialogjobuidelegate_is_auto_warning_handling_enabled(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KDialogJobUiDelegate*
/// @param event QEvent*
///
bool k_dialogjobuidelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KDialogJobUiDelegate*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dialogjobuidelegate_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDialogJobUiDelegate*
///
const char* k_dialogjobuidelegate_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDialogJobUiDelegate*
/// @param name const char*
///
void k_dialogjobuidelegate_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KDialogJobUiDelegate*
///
bool k_dialogjobuidelegate_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KDialogJobUiDelegate*
///
bool k_dialogjobuidelegate_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KDialogJobUiDelegate*
///
bool k_dialogjobuidelegate_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KDialogJobUiDelegate*
///
bool k_dialogjobuidelegate_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDialogJobUiDelegate*
/// @param b bool
///
bool k_dialogjobuidelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KDialogJobUiDelegate*
///
QThread* k_dialogjobuidelegate_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDialogJobUiDelegate*
/// @param thread QThread*
///
bool k_dialogjobuidelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDialogJobUiDelegate*
/// @param interval int
///
int32_t k_dialogjobuidelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDialogJobUiDelegate*
/// @param time int64_t of nanoseconds
///
int32_t k_dialogjobuidelegate_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDialogJobUiDelegate*
/// @param id int
///
void k_dialogjobuidelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDialogJobUiDelegate*
/// @param id enum Qt__TimerId
///
void k_dialogjobuidelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KDialogJobUiDelegate*
///
/// @return libqt_list of QObject*
///
libqt_list k_dialogjobuidelegate_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KDialogJobUiDelegate*
/// @param parent QObject*
///
void k_dialogjobuidelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDialogJobUiDelegate*
/// @param filterObj QObject*
///
void k_dialogjobuidelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDialogJobUiDelegate*
/// @param obj QObject*
///
void k_dialogjobuidelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_dialogjobuidelegate_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_dialogjobuidelegate_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KDialogJobUiDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_dialogjobuidelegate_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_dialogjobuidelegate_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_dialogjobuidelegate_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDialogJobUiDelegate*
///
bool k_dialogjobuidelegate_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDialogJobUiDelegate*
/// @param receiver QObject*
///
bool k_dialogjobuidelegate_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_dialogjobuidelegate_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KDialogJobUiDelegate*
///
void k_dialogjobuidelegate_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KDialogJobUiDelegate*
///
void k_dialogjobuidelegate_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDialogJobUiDelegate*
/// @param name const char*
/// @param value QVariant*
///
bool k_dialogjobuidelegate_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KDialogJobUiDelegate*
/// @param name const char*
///
QVariant* k_dialogjobuidelegate_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KDialogJobUiDelegate*
///
const char** k_dialogjobuidelegate_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDialogJobUiDelegate*
///
QBindingStorage* k_dialogjobuidelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KDialogJobUiDelegate*
///
const QBindingStorage* k_dialogjobuidelegate_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDialogJobUiDelegate*
///
void k_dialogjobuidelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDialogJobUiDelegate*
/// @param callback void func(KDialogJobUiDelegate* self)
///
void k_dialogjobuidelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KDialogJobUiDelegate*
///
QObject* k_dialogjobuidelegate_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KDialogJobUiDelegate*
/// @param classname const char*
///
bool k_dialogjobuidelegate_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDialogJobUiDelegate*
///
void k_dialogjobuidelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDialogJobUiDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_dialogjobuidelegate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDialogJobUiDelegate*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_dialogjobuidelegate_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_dialogjobuidelegate_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_dialogjobuidelegate_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KDialogJobUiDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_dialogjobuidelegate_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDialogJobUiDelegate*
/// @param signal const char*
///
bool k_dialogjobuidelegate_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDialogJobUiDelegate*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_dialogjobuidelegate_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDialogJobUiDelegate*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_dialogjobuidelegate_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDialogJobUiDelegate*
/// @param receiver QObject*
/// @param member const char*
///
bool k_dialogjobuidelegate_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDialogJobUiDelegate*
/// @param param1 QObject*
///
void k_dialogjobuidelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDialogJobUiDelegate*
/// @param callback void func(KDialogJobUiDelegate* self, QObject* param1)
///
void k_dialogjobuidelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDialogJobUiDelegate*
/// @param callback void func(KDialogJobUiDelegate* self, const char* objectName)
///
void k_dialogjobuidelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdialogjobuidelegate.html#dtor.KDialogJobUiDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self KDialogJobUiDelegate*
///
void k_dialogjobuidelegate_delete(void* self);

#endif
