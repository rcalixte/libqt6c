#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSQT6C_LIBKKEYSEQUENCERECORDER_H
#define SRC_EXTRAS_KGUIADDONSQT6C_LIBKKEYSEQUENCERECORDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kkeysequencerecorder.html

/// k_keysequencerecorder_new constructs a new KKeySequenceRecorder object.
///
/// @param window QWindow*
KKeySequenceRecorder* k_keysequencerecorder_new(void* window);

/// k_keysequencerecorder_new2 constructs a new KKeySequenceRecorder object.
///
/// @param window QWindow*
/// @param parent QObject*
KKeySequenceRecorder* k_keysequencerecorder_new2(void* window, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KKeySequenceRecorder*
const QMetaObject* k_keysequencerecorder_meta_object(void* self);

/// @param self KKeySequenceRecorder*
/// @param param1 const char*
void* k_keysequencerecorder_metacast(void* self, const char* param1);

/// @param self KKeySequenceRecorder*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_keysequencerecorder_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KKeySequenceRecorder*
/// @param callback int32_t func(KKeySequenceRecorder* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_keysequencerecorder_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KKeySequenceRecorder*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_keysequencerecorder_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_keysequencerecorder_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#startRecording)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_start_recording(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#isRecording)
///
/// @param self KKeySequenceRecorder*
bool k_keysequencerecorder_is_recording(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#currentKeySequence)
///
/// @param self KKeySequenceRecorder*
QKeySequence* k_keysequencerecorder_current_key_sequence(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#setCurrentKeySequence)
///
/// @param self KKeySequenceRecorder*
/// @param sequence QKeySequence*
void k_keysequencerecorder_set_current_key_sequence(void* self, void* sequence);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#window)
///
/// @param self KKeySequenceRecorder*
QWindow* k_keysequencerecorder_window(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#setWindow)
///
/// @param self KKeySequenceRecorder*
/// @param window QWindow*
void k_keysequencerecorder_set_window(void* self, void* window);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#multiKeyShortcutsAllowed)
///
/// @param self KKeySequenceRecorder*
bool k_keysequencerecorder_multi_key_shortcuts_allowed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#setMultiKeyShortcutsAllowed)
///
/// @param self KKeySequenceRecorder*
/// @param allowed bool
void k_keysequencerecorder_set_multi_key_shortcuts_allowed(void* self, bool allowed);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#setModifierlessAllowed)
///
/// @param self KKeySequenceRecorder*
/// @param allowed bool
void k_keysequencerecorder_set_modifierless_allowed(void* self, bool allowed);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#modifierlessAllowed)
///
/// @param self KKeySequenceRecorder*
bool k_keysequencerecorder_modifierless_allowed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#setModifierOnlyAllowed)
///
/// @param self KKeySequenceRecorder*
/// @param allowed bool
void k_keysequencerecorder_set_modifier_only_allowed(void* self, bool allowed);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#modifierOnlyAllowed)
///
/// @param self KKeySequenceRecorder*
bool k_keysequencerecorder_modifier_only_allowed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#setPatterns)
///
/// @param self KKeySequenceRecorder*
/// @param patterns flag of enum KKeySequenceRecorder__Pattern
void k_keysequencerecorder_set_patterns(void* self, int32_t patterns);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#patterns)
///
/// @param self KKeySequenceRecorder*
///
/// @return flag of enum KKeySequenceRecorder__Pattern
int32_t k_keysequencerecorder_patterns(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#cancelRecording)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_cancel_recording(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#gotKeySequence)
///
/// @param self KKeySequenceRecorder*
/// @param keySequence QKeySequence*
void k_keysequencerecorder_got_key_sequence(void* self, void* keySequence);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#gotKeySequence)
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self, QKeySequence* keySequence)
void k_keysequencerecorder_on_got_key_sequence(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#recordingChanged)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_recording_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#recordingChanged)
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self)
void k_keysequencerecorder_on_recording_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#windowChanged)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_window_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#windowChanged)
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self)
void k_keysequencerecorder_on_window_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#currentKeySequenceChanged)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_current_key_sequence_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#currentKeySequenceChanged)
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self)
void k_keysequencerecorder_on_current_key_sequence_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#multiKeyShortcutsAllowedChanged)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_multi_key_shortcuts_allowed_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#multiKeyShortcutsAllowedChanged)
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self)
void k_keysequencerecorder_on_multi_key_shortcuts_allowed_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#modifierlessAllowedChanged)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_modifierless_allowed_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#modifierlessAllowedChanged)
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self)
void k_keysequencerecorder_on_modifierless_allowed_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#modifierOnlyAllowedChanged)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_modifier_only_allowed_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#modifierOnlyAllowedChanged)
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self)
void k_keysequencerecorder_on_modifier_only_allowed_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#patternsChanged)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_patterns_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#patternsChanged)
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self)
void k_keysequencerecorder_on_patterns_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_keysequencerecorder_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_keysequencerecorder_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceRecorder*
const char* k_keysequencerecorder_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KKeySequenceRecorder*
/// @param name char*
void k_keysequencerecorder_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KKeySequenceRecorder*
bool k_keysequencerecorder_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KKeySequenceRecorder*
bool k_keysequencerecorder_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KKeySequenceRecorder*
bool k_keysequencerecorder_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KKeySequenceRecorder*
bool k_keysequencerecorder_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KKeySequenceRecorder*
/// @param b bool
bool k_keysequencerecorder_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KKeySequenceRecorder*
QThread* k_keysequencerecorder_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KKeySequenceRecorder*
/// @param thread QThread*
bool k_keysequencerecorder_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KKeySequenceRecorder*
/// @param interval int
int32_t k_keysequencerecorder_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KKeySequenceRecorder*
/// @param id int
void k_keysequencerecorder_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KKeySequenceRecorder*
/// @param id enum Qt__TimerId
void k_keysequencerecorder_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KKeySequenceRecorder*
libqt_list /* of QObject* */ k_keysequencerecorder_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KKeySequenceRecorder*
/// @param parent QObject*
void k_keysequencerecorder_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KKeySequenceRecorder*
/// @param filterObj QObject*
void k_keysequencerecorder_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KKeySequenceRecorder*
/// @param obj QObject*
void k_keysequencerecorder_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_keysequencerecorder_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KKeySequenceRecorder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_keysequencerecorder_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_keysequencerecorder_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_keysequencerecorder_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KKeySequenceRecorder*
/// @param name const char*
/// @param value QVariant*
bool k_keysequencerecorder_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KKeySequenceRecorder*
/// @param name const char*
QVariant* k_keysequencerecorder_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceRecorder*
const char** k_keysequencerecorder_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KKeySequenceRecorder*
QBindingStorage* k_keysequencerecorder_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KKeySequenceRecorder*
const QBindingStorage* k_keysequencerecorder_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self)
void k_keysequencerecorder_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KKeySequenceRecorder*
QObject* k_keysequencerecorder_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KKeySequenceRecorder*
/// @param classname const char*
bool k_keysequencerecorder_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KKeySequenceRecorder*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_keysequencerecorder_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KKeySequenceRecorder*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_keysequencerecorder_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_keysequencerecorder_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KKeySequenceRecorder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_keysequencerecorder_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KKeySequenceRecorder*
/// @param param1 QObject*
void k_keysequencerecorder_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self, QObject* param1)
void k_keysequencerecorder_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param event QEvent*
bool k_keysequencerecorder_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param event QEvent*
bool k_keysequencerecorder_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback bool func(KKeySequenceRecorder* self, QEvent* event)
void k_keysequencerecorder_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param watched QObject*
/// @param event QEvent*
bool k_keysequencerecorder_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param watched QObject*
/// @param event QEvent*
bool k_keysequencerecorder_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback bool func(KKeySequenceRecorder* self, QObject* watched, QEvent* event)
void k_keysequencerecorder_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param event QTimerEvent*
void k_keysequencerecorder_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param event QTimerEvent*
void k_keysequencerecorder_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self, QTimerEvent* event)
void k_keysequencerecorder_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param event QChildEvent*
void k_keysequencerecorder_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param event QChildEvent*
void k_keysequencerecorder_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self, QChildEvent* event)
void k_keysequencerecorder_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param event QEvent*
void k_keysequencerecorder_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param event QEvent*
void k_keysequencerecorder_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self, QEvent* event)
void k_keysequencerecorder_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param signal QMetaMethod*
void k_keysequencerecorder_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param signal QMetaMethod*
void k_keysequencerecorder_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self, QMetaMethod* signal)
void k_keysequencerecorder_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param signal QMetaMethod*
void k_keysequencerecorder_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param signal QMetaMethod*
void k_keysequencerecorder_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self, QMetaMethod* signal)
void k_keysequencerecorder_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
QObject* k_keysequencerecorder_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
QObject* k_keysequencerecorder_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback QObject* func()
void k_keysequencerecorder_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
int32_t k_keysequencerecorder_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
int32_t k_keysequencerecorder_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback int32_t func()
void k_keysequencerecorder_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param signal const char*
int32_t k_keysequencerecorder_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param signal const char*
int32_t k_keysequencerecorder_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback int32_t func(KKeySequenceRecorder* self, const char* signal)
void k_keysequencerecorder_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param signal QMetaMethod*
bool k_keysequencerecorder_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param signal QMetaMethod*
bool k_keysequencerecorder_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceRecorder*
/// @param callback bool func(KKeySequenceRecorder* self, QMetaMethod* signal)
void k_keysequencerecorder_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KKeySequenceRecorder*
/// @param callback void func(KKeySequenceRecorder* self, const char* objectName)
void k_keysequencerecorder_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kkeysequencerecorder.html#dtor.KKeySequenceRecorder)
///
/// Delete this object from C++ memory.
///
/// @param self KKeySequenceRecorder*
void k_keysequencerecorder_delete(void* self);

/// https://api-staging.kde.org/kkeysequencerecorder.html#types

typedef enum {
    KKEYSEQUENCERECORDER_PATTERN_MODIFIER = 1,
    KKEYSEQUENCERECORDER_PATTERN_KEY = 2,
    KKEYSEQUENCERECORDER_PATTERN_MODIFIERANDKEY = 4
} KKeySequenceRecorder__Pattern;

#endif
