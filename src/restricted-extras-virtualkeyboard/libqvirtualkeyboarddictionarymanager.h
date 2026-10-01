#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDDICTIONARYMANAGER_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDDICTIONARYMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
const QMetaObject* q_virtualkeyboarddictionarymanager_meta_object(const void* self);

/// @param self QVirtualKeyboardDictionaryManager*
/// @param param1 const char*
///
void* q_virtualkeyboarddictionarymanager_metacast(void* self, const char* param1);

/// @param self QVirtualKeyboardDictionaryManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboarddictionarymanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_virtualkeyboarddictionarymanager_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#instance)
///
QVirtualKeyboardDictionaryManager* q_virtualkeyboarddictionarymanager_instance();

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#availableDictionaries)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
const char** q_virtualkeyboarddictionarymanager_available_dictionaries(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#baseDictionaries)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
const char** q_virtualkeyboarddictionarymanager_base_dictionaries(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#setBaseDictionaries)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param baseDictionaries const char**
///
void q_virtualkeyboarddictionarymanager_set_base_dictionaries(void* self, const char* baseDictionaries[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#extraDictionaries)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
const char** q_virtualkeyboarddictionarymanager_extra_dictionaries(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#setExtraDictionaries)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param extraDictionaries const char**
///
void q_virtualkeyboarddictionarymanager_set_extra_dictionaries(void* self, const char* extraDictionaries[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#activeDictionaries)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
const char** q_virtualkeyboarddictionarymanager_active_dictionaries(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#createDictionary)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param name const char*
///
QVirtualKeyboardDictionary* q_virtualkeyboarddictionarymanager_create_dictionary(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#dictionary)
///
/// @param self const QVirtualKeyboardDictionaryManager*
/// @param name const char*
///
QVirtualKeyboardDictionary* q_virtualkeyboarddictionarymanager_dictionary(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#availableDictionariesChanged)
///
/// @param self QVirtualKeyboardDictionaryManager*
///
void q_virtualkeyboarddictionarymanager_available_dictionaries_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#availableDictionariesChanged)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param callback void func(QVirtualKeyboardDictionaryManager* self)
///
void q_virtualkeyboarddictionarymanager_on_available_dictionaries_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#baseDictionariesChanged)
///
/// @param self QVirtualKeyboardDictionaryManager*
///
void q_virtualkeyboarddictionarymanager_base_dictionaries_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#baseDictionariesChanged)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param callback void func(QVirtualKeyboardDictionaryManager* self)
///
void q_virtualkeyboarddictionarymanager_on_base_dictionaries_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#extraDictionariesChanged)
///
/// @param self QVirtualKeyboardDictionaryManager*
///
void q_virtualkeyboarddictionarymanager_extra_dictionaries_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#extraDictionariesChanged)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param callback void func(QVirtualKeyboardDictionaryManager* self)
///
void q_virtualkeyboarddictionarymanager_on_extra_dictionaries_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#activeDictionariesChanged)
///
/// @param self QVirtualKeyboardDictionaryManager*
///
void q_virtualkeyboarddictionarymanager_active_dictionaries_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#activeDictionariesChanged)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param callback void func(QVirtualKeyboardDictionaryManager* self)
///
void q_virtualkeyboarddictionarymanager_on_active_dictionaries_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_virtualkeyboarddictionarymanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_virtualkeyboarddictionarymanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param event QEvent*
///
bool q_virtualkeyboarddictionarymanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboarddictionarymanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
const char* q_virtualkeyboarddictionarymanager_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param name const char*
///
void q_virtualkeyboarddictionarymanager_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
bool q_virtualkeyboarddictionarymanager_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
bool q_virtualkeyboarddictionarymanager_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
bool q_virtualkeyboarddictionarymanager_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
bool q_virtualkeyboarddictionarymanager_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param b bool
///
bool q_virtualkeyboarddictionarymanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
QThread* q_virtualkeyboarddictionarymanager_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param thread QThread*
///
bool q_virtualkeyboarddictionarymanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param interval int
///
int32_t q_virtualkeyboarddictionarymanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param time int64_t of nanoseconds
///
int32_t q_virtualkeyboarddictionarymanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param id int
///
void q_virtualkeyboarddictionarymanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param id enum Qt__TimerId
///
void q_virtualkeyboarddictionarymanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
/// @return libqt_list of QObject*
///
libqt_list q_virtualkeyboarddictionarymanager_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param parent QObject*
///
void q_virtualkeyboarddictionarymanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param filterObj QObject*
///
void q_virtualkeyboarddictionarymanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param obj QObject*
///
void q_virtualkeyboarddictionarymanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVirtualKeyboardDictionaryManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboarddictionarymanager_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_virtualkeyboarddictionarymanager_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
bool q_virtualkeyboarddictionarymanager_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardDictionaryManager*
/// @param receiver QObject*
///
bool q_virtualkeyboarddictionarymanager_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_virtualkeyboarddictionarymanager_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
void q_virtualkeyboarddictionarymanager_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
void q_virtualkeyboarddictionarymanager_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param name const char*
/// @param value QVariant*
///
bool q_virtualkeyboarddictionarymanager_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QVirtualKeyboardDictionaryManager*
/// @param name const char*
///
QVariant* q_virtualkeyboarddictionarymanager_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
const char** q_virtualkeyboarddictionarymanager_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardDictionaryManager*
///
QBindingStorage* q_virtualkeyboarddictionarymanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
const QBindingStorage* q_virtualkeyboarddictionarymanager_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardDictionaryManager*
///
void q_virtualkeyboarddictionarymanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param callback void func(QVirtualKeyboardDictionaryManager* self)
///
void q_virtualkeyboarddictionarymanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QVirtualKeyboardDictionaryManager*
///
QObject* q_virtualkeyboarddictionarymanager_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QVirtualKeyboardDictionaryManager*
/// @param classname const char*
///
bool q_virtualkeyboarddictionarymanager_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVirtualKeyboardDictionaryManager*
///
void q_virtualkeyboarddictionarymanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboarddictionarymanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboarddictionarymanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVirtualKeyboardDictionaryManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardDictionaryManager*
/// @param signal const char*
///
bool q_virtualkeyboarddictionarymanager_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardDictionaryManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_virtualkeyboarddictionarymanager_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardDictionaryManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboarddictionarymanager_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardDictionaryManager*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboarddictionarymanager_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param param1 QObject*
///
void q_virtualkeyboarddictionarymanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param callback void func(QVirtualKeyboardDictionaryManager* self, QObject* param1)
///
void q_virtualkeyboarddictionarymanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardDictionaryManager*
/// @param callback void func(QVirtualKeyboardDictionaryManager* self, const char* objectName)
///
void q_virtualkeyboarddictionarymanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#dtor.QVirtualKeyboardDictionaryManager)
///
/// Delete this object from C++ memory.
///
/// @param self QVirtualKeyboardDictionaryManager*
///
void q_virtualkeyboarddictionarymanager_delete(void* self);

#endif
