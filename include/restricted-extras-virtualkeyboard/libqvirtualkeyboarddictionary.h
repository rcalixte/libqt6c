#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDDICTIONARY_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDDICTIONARY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionary.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QVirtualKeyboardDictionary*
///
const QMetaObject* q_virtualkeyboarddictionary_meta_object(void* self);

/// @param self QVirtualKeyboardDictionary*
/// @param param1 const char*
///
void* q_virtualkeyboarddictionary_metacast(void* self, const char* param1);

/// @param self QVirtualKeyboardDictionary*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboarddictionary_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_virtualkeyboarddictionary_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionary.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVirtualKeyboardDictionary*
///
const char* q_virtualkeyboarddictionary_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionary.html#contents)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QVirtualKeyboardDictionary*
///
const char** q_virtualkeyboarddictionary_contents(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionary.html#setContents)
///
/// @param self QVirtualKeyboardDictionary*
/// @param contents const char**
///
void q_virtualkeyboarddictionary_set_contents(void* self, const char* contents[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionary.html#resetContents)
///
/// @param self QVirtualKeyboardDictionary*
///
void q_virtualkeyboarddictionary_reset_contents(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionary.html#contentsChanged)
///
/// @param self QVirtualKeyboardDictionary*
///
void q_virtualkeyboarddictionary_contents_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionary.html#contentsChanged)
///
/// @param self QVirtualKeyboardDictionary*
/// @param callback void func(QVirtualKeyboardDictionary* self)
///
void q_virtualkeyboarddictionary_on_contents_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_virtualkeyboarddictionary_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_virtualkeyboarddictionary_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QVirtualKeyboardDictionary*
/// @param event QEvent*
///
bool q_virtualkeyboarddictionary_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QVirtualKeyboardDictionary*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboarddictionary_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVirtualKeyboardDictionary*
///
const char* q_virtualkeyboarddictionary_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVirtualKeyboardDictionary*
/// @param name const char*
///
void q_virtualkeyboarddictionary_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QVirtualKeyboardDictionary*
///
bool q_virtualkeyboarddictionary_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QVirtualKeyboardDictionary*
///
bool q_virtualkeyboarddictionary_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QVirtualKeyboardDictionary*
///
bool q_virtualkeyboarddictionary_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QVirtualKeyboardDictionary*
///
bool q_virtualkeyboarddictionary_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVirtualKeyboardDictionary*
/// @param b bool
///
bool q_virtualkeyboarddictionary_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QVirtualKeyboardDictionary*
///
QThread* q_virtualkeyboarddictionary_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVirtualKeyboardDictionary*
/// @param thread QThread*
///
bool q_virtualkeyboarddictionary_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardDictionary*
/// @param interval int
///
int32_t q_virtualkeyboarddictionary_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardDictionary*
/// @param time int64_t of nanoseconds
///
int32_t q_virtualkeyboarddictionary_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardDictionary*
/// @param id int
///
void q_virtualkeyboarddictionary_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardDictionary*
/// @param id enum Qt__TimerId
///
void q_virtualkeyboarddictionary_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QVirtualKeyboardDictionary*
///
/// @return libqt_list of QObject*
///
libqt_list q_virtualkeyboarddictionary_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVirtualKeyboardDictionary*
/// @param parent QObject*
///
void q_virtualkeyboarddictionary_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVirtualKeyboardDictionary*
/// @param filterObj QObject*
///
void q_virtualkeyboarddictionary_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVirtualKeyboardDictionary*
/// @param obj QObject*
///
void q_virtualkeyboarddictionary_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboarddictionary_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_virtualkeyboarddictionary_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVirtualKeyboardDictionary*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboarddictionary_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboarddictionary_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_virtualkeyboarddictionary_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardDictionary*
///
bool q_virtualkeyboarddictionary_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardDictionary*
/// @param receiver QObject*
///
bool q_virtualkeyboarddictionary_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_virtualkeyboarddictionary_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QVirtualKeyboardDictionary*
///
void q_virtualkeyboarddictionary_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QVirtualKeyboardDictionary*
///
void q_virtualkeyboarddictionary_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVirtualKeyboardDictionary*
/// @param name const char*
/// @param value QVariant*
///
bool q_virtualkeyboarddictionary_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QVirtualKeyboardDictionary*
/// @param name const char*
///
QVariant* q_virtualkeyboarddictionary_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QVirtualKeyboardDictionary*
///
const char** q_virtualkeyboarddictionary_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardDictionary*
///
QBindingStorage* q_virtualkeyboarddictionary_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardDictionary*
///
const QBindingStorage* q_virtualkeyboarddictionary_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardDictionary*
///
void q_virtualkeyboarddictionary_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardDictionary*
/// @param callback void func(QVirtualKeyboardDictionary* self)
///
void q_virtualkeyboarddictionary_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QVirtualKeyboardDictionary*
///
QObject* q_virtualkeyboarddictionary_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QVirtualKeyboardDictionary*
/// @param classname const char*
///
bool q_virtualkeyboarddictionary_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVirtualKeyboardDictionary*
///
void q_virtualkeyboarddictionary_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardDictionary*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboarddictionary_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardDictionary*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboarddictionary_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_virtualkeyboarddictionary_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_virtualkeyboarddictionary_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVirtualKeyboardDictionary*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_virtualkeyboarddictionary_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardDictionary*
/// @param signal const char*
///
bool q_virtualkeyboarddictionary_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardDictionary*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_virtualkeyboarddictionary_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardDictionary*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboarddictionary_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardDictionary*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboarddictionary_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardDictionary*
/// @param param1 QObject*
///
void q_virtualkeyboarddictionary_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardDictionary*
/// @param callback void func(QVirtualKeyboardDictionary* self, QObject* param1)
///
void q_virtualkeyboarddictionary_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardDictionary*
/// @param callback void func(QVirtualKeyboardDictionary* self, const char* objectName)
///
void q_virtualkeyboarddictionary_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionary.html#dtor.QVirtualKeyboardDictionary)
///
/// Delete this object from C++ memory.
///
/// @param self QVirtualKeyboardDictionary*
///
void q_virtualkeyboarddictionary_delete(void* self);

#endif
