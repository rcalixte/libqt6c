#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECH_H
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECH_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
const QMetaObject* k_textedittexttospeech__texttospeech_meta_object(const void* self);

/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param param1 const char*
///
void* k_textedittexttospeech__texttospeech_metacast(void* self, const char* param1);

/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textedittexttospeech__texttospeech_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textedittexttospeech__texttospeech_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
TextEditTextToSpeech__TextToSpeech* k_textedittexttospeech__texttospeech_self();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
bool k_textedittexttospeech__texttospeech_is_ready(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
double k_textedittexttospeech__texttospeech_volume(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
/// @return libqt_list of QLocale*
///
libqt_list k_textedittexttospeech__texttospeech_available_locales(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
const char** k_textedittexttospeech__texttospeech_available_engines(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
const char** k_textedittexttospeech__texttospeech_available_voices(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
QLocale* k_textedittexttospeech__texttospeech_locale(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
///
void k_textedittexttospeech__texttospeech_reload_settings(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param text const char*
///
void k_textedittexttospeech__texttospeech_say(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
///
void k_textedittexttospeech__texttospeech_stop(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
///
void k_textedittexttospeech__texttospeech_pause(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
///
void k_textedittexttospeech__texttospeech_resume(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param rate double
///
void k_textedittexttospeech__texttospeech_set_rate(void* self, double rate);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param pitch double
///
void k_textedittexttospeech__texttospeech_set_pitch(void* self, double pitch);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param volume double
///
void k_textedittexttospeech__texttospeech_set_volume(void* self, double volume);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
/// @param locale QLocale*
///
void k_textedittexttospeech__texttospeech_set_locale(const void* self, const void* locale);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param param1 enum TextEditTextToSpeech__TextToSpeech__State
///
void k_textedittexttospeech__texttospeech_state_changed(void* self, int32_t param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param callback void func(TextEditTextToSpeech__TextToSpeech* self, enum TextEditTextToSpeech__TextToSpeech__State param1)
///
void k_textedittexttospeech__texttospeech_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textedittexttospeech__texttospeech_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textedittexttospeech__texttospeech_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param event QEvent*
///
bool k_textedittexttospeech__texttospeech_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textedittexttospeech__texttospeech_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
const char* k_textedittexttospeech__texttospeech_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param name const char*
///
void k_textedittexttospeech__texttospeech_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
bool k_textedittexttospeech__texttospeech_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
bool k_textedittexttospeech__texttospeech_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
bool k_textedittexttospeech__texttospeech_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
bool k_textedittexttospeech__texttospeech_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param b bool
///
bool k_textedittexttospeech__texttospeech_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
QThread* k_textedittexttospeech__texttospeech_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param thread QThread*
///
bool k_textedittexttospeech__texttospeech_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param interval int
///
int32_t k_textedittexttospeech__texttospeech_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param time int64_t of nanoseconds
///
int32_t k_textedittexttospeech__texttospeech_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param id int
///
void k_textedittexttospeech__texttospeech_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param id enum Qt__TimerId
///
void k_textedittexttospeech__texttospeech_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
/// @return libqt_list of QObject*
///
libqt_list k_textedittexttospeech__texttospeech_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param parent QObject*
///
void k_textedittexttospeech__texttospeech_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param filterObj QObject*
///
void k_textedittexttospeech__texttospeech_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param obj QObject*
///
void k_textedittexttospeech__texttospeech_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textedittexttospeech__texttospeech_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textedittexttospeech__texttospeech_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textedittexttospeech__texttospeech_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textedittexttospeech__texttospeech_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textedittexttospeech__texttospeech_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
bool k_textedittexttospeech__texttospeech_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
/// @param receiver QObject*
///
bool k_textedittexttospeech__texttospeech_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textedittexttospeech__texttospeech_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
void k_textedittexttospeech__texttospeech_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
void k_textedittexttospeech__texttospeech_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param name const char*
/// @param value QVariant*
///
bool k_textedittexttospeech__texttospeech_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
/// @param name const char*
///
QVariant* k_textedittexttospeech__texttospeech_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
const char** k_textedittexttospeech__texttospeech_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
///
QBindingStorage* k_textedittexttospeech__texttospeech_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
const QBindingStorage* k_textedittexttospeech__texttospeech_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
///
void k_textedittexttospeech__texttospeech_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param callback void func(TextEditTextToSpeech__TextToSpeech* self)
///
void k_textedittexttospeech__texttospeech_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
///
QObject* k_textedittexttospeech__texttospeech_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
/// @param classname const char*
///
bool k_textedittexttospeech__texttospeech_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
///
void k_textedittexttospeech__texttospeech_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textedittexttospeech__texttospeech_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textedittexttospeech__texttospeech_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textedittexttospeech__texttospeech_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textedittexttospeech__texttospeech_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textedittexttospeech__texttospeech_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
/// @param signal const char*
///
bool k_textedittexttospeech__texttospeech_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textedittexttospeech__texttospeech_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textedittexttospeech__texttospeech_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextEditTextToSpeech__TextToSpeech*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textedittexttospeech__texttospeech_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param param1 QObject*
///
void k_textedittexttospeech__texttospeech_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param callback void func(TextEditTextToSpeech__TextToSpeech* self, QObject* param1)
///
void k_textedittexttospeech__texttospeech_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextEditTextToSpeech__TextToSpeech*
/// @param callback void func(TextEditTextToSpeech__TextToSpeech* self, const char* objectName)
///
void k_textedittexttospeech__texttospeech_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEditTextToSpeech_1_1TextToSpeech.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextEditTextToSpeech__TextToSpeech*
///
void k_textedittexttospeech__texttospeech_delete(void* self);

typedef enum {
    TEXTEDITTEXTTOSPEECH_TEXTTOSPEECH_STATE_READY = 0,
    TEXTEDITTEXTTOSPEECH_TEXTTOSPEECH_STATE_SPEAKING = 1,
    TEXTEDITTEXTTOSPEECH_TEXTTOSPEECH_STATE_PAUSED = 2,
    TEXTEDITTEXTTOSPEECH_TEXTTOSPEECH_STATE_BACKENDERROR = 3
} TextEditTextToSpeech__TextToSpeech__State;

#endif
