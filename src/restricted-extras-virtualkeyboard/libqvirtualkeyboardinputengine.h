#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTENGINE_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QVirtualKeyboardInputEngine*
///
const QMetaObject* q_virtualkeyboardinputengine_meta_object(const void* self);

/// @param self QVirtualKeyboardInputEngine*
/// @param param1 const char*
///
void* q_virtualkeyboardinputengine_metacast(void* self, const char* param1);

/// @param self QVirtualKeyboardInputEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboardinputengine_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_virtualkeyboardinputengine_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyPress)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param key enum Qt__Key
/// @param text const char*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param repeat bool
///
bool q_virtualkeyboardinputengine_virtual_key_press(void* self, int32_t key, const char* text, int32_t modifiers, bool repeat);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyCancel)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_virtual_key_cancel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyRelease)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param key enum Qt__Key
/// @param text const char*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
bool q_virtualkeyboardinputengine_virtual_key_release(void* self, int32_t key, const char* text, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyClick)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param key enum Qt__Key
/// @param text const char*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
bool q_virtualkeyboardinputengine_virtual_key_click(void* self, int32_t key, const char* text, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputContext)
///
/// @param self const QVirtualKeyboardInputEngine*
///
QVirtualKeyboardInputContext* q_virtualkeyboardinputengine_input_context(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#activeKey)
///
/// @param self const QVirtualKeyboardInputEngine*
///
/// @return enum Qt__Key
///
int32_t q_virtualkeyboardinputengine_active_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#previousKey)
///
/// @param self const QVirtualKeyboardInputEngine*
///
/// @return enum Qt__Key
///
int32_t q_virtualkeyboardinputengine_previous_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethod)
///
/// @param self const QVirtualKeyboardInputEngine*
///
QVirtualKeyboardAbstractInputMethod* q_virtualkeyboardinputengine_input_method(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#setInputMethod)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param inputMethod QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardinputengine_set_input_method(void* self, void* inputMethod);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputModes)
///
/// @param self const QVirtualKeyboardInputEngine*
///
/// @return libqt_list of int
///
libqt_list q_virtualkeyboardinputengine_input_modes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMode)
///
/// @param self const QVirtualKeyboardInputEngine*
///
/// @return enum QVirtualKeyboardInputEngine__InputMode
///
int32_t q_virtualkeyboardinputengine_input_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#setInputMode)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param inputMode enum QVirtualKeyboardInputEngine__InputMode
///
void q_virtualkeyboardinputengine_set_input_mode(void* self, int32_t inputMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListModel)
///
/// @param self const QVirtualKeyboardInputEngine*
///
QVirtualKeyboardSelectionListModel* q_virtualkeyboardinputengine_word_candidate_list_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListVisibleHint)
///
/// @param self const QVirtualKeyboardInputEngine*
///
bool q_virtualkeyboardinputengine_word_candidate_list_visible_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#patternRecognitionModes)
///
/// @param self const QVirtualKeyboardInputEngine*
///
/// @return libqt_list of int
///
libqt_list q_virtualkeyboardinputengine_pattern_recognition_modes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#traceBegin)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param traceId int
/// @param patternRecognitionMode enum QVirtualKeyboardInputEngine__PatternRecognitionMode
/// @param traceCaptureDeviceInfo libqt_map of const char* to QVariant*
/// @param traceScreenInfo libqt_map of const char* to QVariant*
///
QVirtualKeyboardTrace* q_virtualkeyboardinputengine_trace_begin(void* self, int traceId, int32_t patternRecognitionMode, libqt_map traceCaptureDeviceInfo, libqt_map traceScreenInfo);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#traceEnd)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param trace QVirtualKeyboardTrace*
///
bool q_virtualkeyboardinputengine_trace_end(void* self, void* trace);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#reselect)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param cursorPosition int
/// @param reselectFlags flag of enum QVirtualKeyboardInputEngine__ReselectFlag*
///
bool q_virtualkeyboardinputengine_reselect(void* self, int cursorPosition, const int32_t* reselectFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#clickPreeditText)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param cursorPosition int
///
bool q_virtualkeyboardinputengine_click_preedit_text(void* self, int cursorPosition);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyClicked)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param key enum Qt__Key
/// @param text const char*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param isAutoRepeat bool
///
void q_virtualkeyboardinputengine_virtual_key_clicked(void* self, int32_t key, const char* text, int32_t modifiers, bool isAutoRepeat);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#virtualKeyClicked)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self, enum Qt__Key key, const char* text, flag of enum Qt__KeyboardModifier modifiers, bool isAutoRepeat)
///
void q_virtualkeyboardinputengine_on_virtual_key_clicked(void* self, void (*callback)(void*, int32_t, const char*, int32_t, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#activeKeyChanged)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param key enum Qt__Key
///
void q_virtualkeyboardinputengine_active_key_changed(void* self, int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#activeKeyChanged)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self, enum Qt__Key key)
///
void q_virtualkeyboardinputengine_on_active_key_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#previousKeyChanged)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param key enum Qt__Key
///
void q_virtualkeyboardinputengine_previous_key_changed(void* self, int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#previousKeyChanged)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self, enum Qt__Key key)
///
void q_virtualkeyboardinputengine_on_previous_key_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodChanged)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_input_method_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodChanged)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self)
///
void q_virtualkeyboardinputengine_on_input_method_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodReset)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_input_method_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodReset)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self)
///
void q_virtualkeyboardinputengine_on_input_method_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodUpdate)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_input_method_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputMethodUpdate)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self)
///
void q_virtualkeyboardinputengine_on_input_method_update(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputModesChanged)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_input_modes_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputModesChanged)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self)
///
void q_virtualkeyboardinputengine_on_input_modes_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputModeChanged)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_input_mode_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#inputModeChanged)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self)
///
void q_virtualkeyboardinputengine_on_input_mode_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#patternRecognitionModesChanged)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_pattern_recognition_modes_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#patternRecognitionModesChanged)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self)
///
void q_virtualkeyboardinputengine_on_pattern_recognition_modes_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListModelChanged)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_word_candidate_list_model_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListModelChanged)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self)
///
void q_virtualkeyboardinputengine_on_word_candidate_list_model_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListVisibleHintChanged)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_word_candidate_list_visible_hint_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#wordCandidateListVisibleHintChanged)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self)
///
void q_virtualkeyboardinputengine_on_word_candidate_list_visible_hint_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_virtualkeyboardinputengine_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_virtualkeyboardinputengine_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param event QEvent*
///
bool q_virtualkeyboardinputengine_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboardinputengine_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QVirtualKeyboardInputEngine*
///
const char* q_virtualkeyboardinputengine_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param name const char*
///
void q_virtualkeyboardinputengine_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QVirtualKeyboardInputEngine*
///
bool q_virtualkeyboardinputengine_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QVirtualKeyboardInputEngine*
///
bool q_virtualkeyboardinputengine_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QVirtualKeyboardInputEngine*
///
bool q_virtualkeyboardinputengine_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QVirtualKeyboardInputEngine*
///
bool q_virtualkeyboardinputengine_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param b bool
///
bool q_virtualkeyboardinputengine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QVirtualKeyboardInputEngine*
///
QThread* q_virtualkeyboardinputengine_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param thread QThread*
///
bool q_virtualkeyboardinputengine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param interval int
///
int32_t q_virtualkeyboardinputengine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param time int64_t of nanoseconds
///
int32_t q_virtualkeyboardinputengine_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param id int
///
void q_virtualkeyboardinputengine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param id enum Qt__TimerId
///
void q_virtualkeyboardinputengine_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QVirtualKeyboardInputEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_virtualkeyboardinputengine_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param parent QObject*
///
void q_virtualkeyboardinputengine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param filterObj QObject*
///
void q_virtualkeyboardinputengine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param obj QObject*
///
void q_virtualkeyboardinputengine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardinputengine_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_virtualkeyboardinputengine_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVirtualKeyboardInputEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardinputengine_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardinputengine_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_virtualkeyboardinputengine_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardInputEngine*
///
bool q_virtualkeyboardinputengine_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardInputEngine*
/// @param receiver QObject*
///
bool q_virtualkeyboardinputengine_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_virtualkeyboardinputengine_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_virtualkeyboardinputengine_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QVirtualKeyboardInputEngine*
/// @param name const char*
///
QVariant* q_virtualkeyboardinputengine_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVirtualKeyboardInputEngine*
///
const char** q_virtualkeyboardinputengine_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardInputEngine*
///
QBindingStorage* q_virtualkeyboardinputengine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QVirtualKeyboardInputEngine*
///
const QBindingStorage* q_virtualkeyboardinputengine_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self)
///
void q_virtualkeyboardinputengine_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QVirtualKeyboardInputEngine*
///
QObject* q_virtualkeyboardinputengine_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QVirtualKeyboardInputEngine*
/// @param classname const char*
///
bool q_virtualkeyboardinputengine_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardinputengine_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardinputengine_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_virtualkeyboardinputengine_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_virtualkeyboardinputengine_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVirtualKeyboardInputEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_virtualkeyboardinputengine_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardInputEngine*
/// @param signal const char*
///
bool q_virtualkeyboardinputengine_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardInputEngine*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_virtualkeyboardinputengine_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardInputEngine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardinputengine_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardInputEngine*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardinputengine_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param param1 QObject*
///
void q_virtualkeyboardinputengine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self, QObject* param1)
///
void q_virtualkeyboardinputengine_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardInputEngine*
/// @param callback void func(QVirtualKeyboardInputEngine* self, const char* objectName)
///
void q_virtualkeyboardinputengine_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#dtor.QVirtualKeyboardInputEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QVirtualKeyboardInputEngine*
///
void q_virtualkeyboardinputengine_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine-h.html#qHash)
///
/// @param key enum QVirtualKeyboardInputEngine__InputMode
/// @param seed uint32_t
///
uint32_t q_qvirtualkeyboardinputengine_h_q_hash(int32_t key, uint32_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#public-types)

typedef enum {
    QVIRTUALKEYBOARDINPUTENGINE_TEXTCASE_LOWER = 0,
    QVIRTUALKEYBOARDINPUTENGINE_TEXTCASE_UPPER = 1
} QVirtualKeyboardInputEngine__TextCase;

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#public-types)

typedef enum {
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_LATIN = 0,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_NUMERIC = 1,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_DIALABLE = 2,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_PINYIN = 3,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_CANGJIE = 4,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_ZHUYIN = 5,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_HANGUL = 6,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_HIRAGANA = 7,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_KATAKANA = 8,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_FULLWIDTHLATIN = 9,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_GREEK = 10,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_CYRILLIC = 11,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_ARABIC = 12,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_HEBREW = 13,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_CHINESEHANDWRITING = 14,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_JAPANESEHANDWRITING = 15,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_KOREANHANDWRITING = 16,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_THAI = 17,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_STROKE = 18,
    QVIRTUALKEYBOARDINPUTENGINE_INPUTMODE_ROMAJI = 19
} QVirtualKeyboardInputEngine__InputMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#public-types)

typedef enum {
    QVIRTUALKEYBOARDINPUTENGINE_PATTERNRECOGNITIONMODE_NONE = 0,
    QVIRTUALKEYBOARDINPUTENGINE_PATTERNRECOGNITIONMODE_PATTERNRECOGNITIONDISABLED = 0,
    QVIRTUALKEYBOARDINPUTENGINE_PATTERNRECOGNITIONMODE_HANDWRITING = 1,
    QVIRTUALKEYBOARDINPUTENGINE_PATTERNRECOGNITIONMODE_HANDWRITINGRECOGINITION = 1
} QVirtualKeyboardInputEngine__PatternRecognitionMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputengine.html#public-types)

typedef enum {
    QVIRTUALKEYBOARDINPUTENGINE_RESELECTFLAG_WORDBEFORECURSOR = 1,
    QVIRTUALKEYBOARDINPUTENGINE_RESELECTFLAG_WORDAFTERCURSOR = 2,
    QVIRTUALKEYBOARDINPUTENGINE_RESELECTFLAG_WORDATCURSOR = 3
} QVirtualKeyboardInputEngine__ReselectFlag;

#endif
