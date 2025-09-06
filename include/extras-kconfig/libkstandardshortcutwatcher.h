#pragma once
#ifndef SRC_EXTRAS_KCONFIGQT6C_LIBKSTANDARDSHORTCUTWATCHER_H
#define SRC_EXTRAS_KCONFIGQT6C_LIBKSTANDARDSHORTCUTWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kstandardshortcut-standardshortcutwatcher.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
const QMetaObject* k_standardshortcut__standardshortcutwatcher_meta_object(void* self);

/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param param1 const char*
void* k_standardshortcut__standardshortcutwatcher_metacast(void* self, const char* param1);

/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_standardshortcut__standardshortcutwatcher_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_standardshortcut__standardshortcutwatcher_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kstandardshortcut-standardshortcutwatcher.html#shortcutChanged)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param id enum KStandardShortcut__StandardShortcut
/// @param shortcut libqt_list /* of QKeySequence* */
void k_standardshortcut__standardshortcutwatcher_shortcut_changed(void* self, int32_t id, libqt_list shortcut);

/// [Qt documentation](https://api-staging.kde.org/kstandardshortcut-standardshortcutwatcher.html#shortcutChanged)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param callback void func(KStandardShortcut__StandardShortcutWatcher* self, enum KStandardShortcut__StandardShortcut id, libqt_list /* of QKeySequence* */ /* of QKeySequence* */)
void k_standardshortcut__standardshortcutwatcher_on_shortcut_changed(void* self, void (*callback)(void*, int32_t, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_standardshortcut__standardshortcutwatcher_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_standardshortcut__standardshortcutwatcher_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param event QEvent*
bool k_standardshortcut__standardshortcutwatcher_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param watched QObject*
/// @param event QEvent*
bool k_standardshortcut__standardshortcutwatcher_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
const char* k_standardshortcut__standardshortcutwatcher_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param name char*
void k_standardshortcut__standardshortcutwatcher_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
bool k_standardshortcut__standardshortcutwatcher_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
bool k_standardshortcut__standardshortcutwatcher_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
bool k_standardshortcut__standardshortcutwatcher_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
bool k_standardshortcut__standardshortcutwatcher_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param b bool
bool k_standardshortcut__standardshortcutwatcher_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
QThread* k_standardshortcut__standardshortcutwatcher_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param thread QThread*
bool k_standardshortcut__standardshortcutwatcher_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param interval int
int32_t k_standardshortcut__standardshortcutwatcher_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param id int
void k_standardshortcut__standardshortcutwatcher_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param id enum Qt__TimerId
void k_standardshortcut__standardshortcutwatcher_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
libqt_list /* of QObject* */ k_standardshortcut__standardshortcutwatcher_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param parent QObject*
void k_standardshortcut__standardshortcutwatcher_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param filterObj QObject*
void k_standardshortcut__standardshortcutwatcher_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param obj QObject*
void k_standardshortcut__standardshortcutwatcher_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_standardshortcut__standardshortcutwatcher_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_standardshortcut__standardshortcutwatcher_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_standardshortcut__standardshortcutwatcher_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_standardshortcut__standardshortcutwatcher_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
void k_standardshortcut__standardshortcutwatcher_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
void k_standardshortcut__standardshortcutwatcher_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param name const char*
/// @param value QVariant*
bool k_standardshortcut__standardshortcutwatcher_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param name const char*
QVariant* k_standardshortcut__standardshortcutwatcher_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
const char** k_standardshortcut__standardshortcutwatcher_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
QBindingStorage* k_standardshortcut__standardshortcutwatcher_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
const QBindingStorage* k_standardshortcut__standardshortcutwatcher_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
void k_standardshortcut__standardshortcutwatcher_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param callback void func(KStandardShortcut__StandardShortcutWatcher* self)
void k_standardshortcut__standardshortcutwatcher_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
QObject* k_standardshortcut__standardshortcutwatcher_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param classname const char*
bool k_standardshortcut__standardshortcutwatcher_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
void k_standardshortcut__standardshortcutwatcher_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_standardshortcut__standardshortcutwatcher_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_standardshortcut__standardshortcutwatcher_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_standardshortcut__standardshortcutwatcher_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_standardshortcut__standardshortcutwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param param1 QObject*
void k_standardshortcut__standardshortcutwatcher_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param callback void func(KStandardShortcut__StandardShortcutWatcher* self, QObject* param1)
void k_standardshortcut__standardshortcutwatcher_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
/// @param callback void func(KStandardShortcut__StandardShortcutWatcher* self, const char* objectName)
void k_standardshortcut__standardshortcutwatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KStandardShortcut__StandardShortcutWatcher*
void k_standardshortcut__standardshortcutwatcher_delete(void* self);

/// https://api-staging.kde.org/kstandardshortcut.html

/// [Qt documentation](https://api-staging.kde.org/kstandardshortcut.html#shortcutWatcher)
///
KStandardShortcut__StandardShortcutWatcher* k_standardshortcut_shortcut_watcher();
#endif
