#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDABSTRACTINPUTMETHOD_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDABSTRACTINPUTMETHOD_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html)

/// q_virtualkeyboardabstractinputmethod_new constructs a new QVirtualKeyboardAbstractInputMethod object.
///
QVirtualKeyboardAbstractInputMethod* q_virtualkeyboardabstractinputmethod_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html)

/// q_virtualkeyboardabstractinputmethod_new2 constructs a new QVirtualKeyboardAbstractInputMethod object.
///
/// @param parent QObject*
///
QVirtualKeyboardAbstractInputMethod* q_virtualkeyboardabstractinputmethod_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
const QMetaObject* q_virtualkeyboardabstractinputmethod_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback const QMetaObject* func(const QVirtualKeyboardAbstractInputMethod* self)
///
void q_virtualkeyboardabstractinputmethod_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
const QMetaObject* q_virtualkeyboardabstractinputmethod_super_meta_object(const void* self);

/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param param1 const char*
///
void* q_virtualkeyboardabstractinputmethod_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void* func(QVirtualKeyboardAbstractInputMethod* self, const char* param1)
///
void q_virtualkeyboardabstractinputmethod_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param param1 const char*
///
void* q_virtualkeyboardabstractinputmethod_super_metacast(void* self, const char* param1);

/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboardabstractinputmethod_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback int32_t func(QVirtualKeyboardAbstractInputMethod* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_virtualkeyboardabstractinputmethod_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboardabstractinputmethod_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_virtualkeyboardabstractinputmethod_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#inputContext)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
QVirtualKeyboardInputContext* q_virtualkeyboardabstractinputmethod_input_context(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#inputEngine)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
QVirtualKeyboardInputEngine* q_virtualkeyboardabstractinputmethod_input_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#inputModes)
///
/// @warning This method must be implemented with `q_virtualkeyboardabstractinputmethod_on_input_modes` before it can be called.
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param locale const char*
///
/// @return libqt_list of enum QVirtualKeyboardInputEngine__InputMode
///
libqt_list q_virtualkeyboardabstractinputmethod_input_modes(void* self, const char* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#inputModes)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback libqt_list of enum QVirtualKeyboardInputEngine__InputMode func(QVirtualKeyboardAbstractInputMethod* self, const char* locale)
///
void q_virtualkeyboardabstractinputmethod_on_input_modes(void* self, libqt_list (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#setInputMode)
///
/// @warning This method must be implemented with `q_virtualkeyboardabstractinputmethod_on_set_input_mode` before it can be called.
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param locale const char*
/// @param inputMode enum QVirtualKeyboardInputEngine__InputMode
///
bool q_virtualkeyboardabstractinputmethod_set_input_mode(void* self, const char* locale, int32_t inputMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#setInputMode)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback bool func(QVirtualKeyboardAbstractInputMethod* self, const char* locale, enum QVirtualKeyboardInputEngine__InputMode inputMode)
///
void q_virtualkeyboardabstractinputmethod_on_set_input_mode(void* self, bool (*callback)(void*, const char*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#setTextCase)
///
/// @warning This method must be implemented with `q_virtualkeyboardabstractinputmethod_on_set_text_case` before it can be called.
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param textCase enum QVirtualKeyboardInputEngine__TextCase
///
bool q_virtualkeyboardabstractinputmethod_set_text_case(void* self, int32_t textCase);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#setTextCase)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback bool func(QVirtualKeyboardAbstractInputMethod* self, enum QVirtualKeyboardInputEngine__TextCase textCase)
///
void q_virtualkeyboardabstractinputmethod_on_set_text_case(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#keyEvent)
///
/// @warning This method must be implemented with `q_virtualkeyboardabstractinputmethod_on_key_event` before it can be called.
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param key enum Qt__Key
/// @param text const char*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
bool q_virtualkeyboardabstractinputmethod_key_event(void* self, int32_t key, const char* text, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#keyEvent)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback bool func(QVirtualKeyboardAbstractInputMethod* self, enum Qt__Key key, const char* text, flag of enum Qt__KeyboardModifier modifiers)
///
void q_virtualkeyboardabstractinputmethod_on_key_event(void* self, bool (*callback)(void*, int32_t, const char*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionLists)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
/// @return libqt_list of enum QVirtualKeyboardSelectionListModel__Type
///
libqt_list q_virtualkeyboardabstractinputmethod_selection_lists(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionLists)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback libqt_list of enum QVirtualKeyboardSelectionListModel__Type func(QVirtualKeyboardAbstractInputMethod* self)
///
void q_virtualkeyboardabstractinputmethod_on_selection_lists(void* self, libqt_list (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionLists)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
/// @return libqt_list of enum QVirtualKeyboardSelectionListModel__Type
///
libqt_list q_virtualkeyboardabstractinputmethod_super_selection_lists(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemCount)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
///
int32_t q_virtualkeyboardabstractinputmethod_selection_list_item_count(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemCount)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback int32_t func(QVirtualKeyboardAbstractInputMethod* self, enum QVirtualKeyboardSelectionListModel__Type type)
///
void q_virtualkeyboardabstractinputmethod_on_selection_list_item_count(void* self, int32_t (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemCount)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
///
int32_t q_virtualkeyboardabstractinputmethod_super_selection_list_item_count(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListData)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
/// @param index int
/// @param role enum QVirtualKeyboardSelectionListModel__Role
///
QVariant* q_virtualkeyboardabstractinputmethod_selection_list_data(void* self, int32_t type, int index, int32_t role);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListData)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback QVariant* func(QVirtualKeyboardAbstractInputMethod* self, enum QVirtualKeyboardSelectionListModel__Type type, int index, enum QVirtualKeyboardSelectionListModel__Role role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_virtualkeyboardabstractinputmethod_on_selection_list_data(void* self, QVariant* (*callback)(void*, int32_t, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListData)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
/// @param index int
/// @param role enum QVirtualKeyboardSelectionListModel__Role
///
QVariant* q_virtualkeyboardabstractinputmethod_super_selection_list_data(void* self, int32_t type, int index, int32_t role);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemSelected)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
/// @param index int
///
void q_virtualkeyboardabstractinputmethod_selection_list_item_selected(void* self, int32_t type, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemSelected)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self, enum QVirtualKeyboardSelectionListModel__Type type, int index)
///
void q_virtualkeyboardabstractinputmethod_on_selection_list_item_selected(void* self, void (*callback)(void*, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListItemSelected)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
/// @param index int
///
void q_virtualkeyboardabstractinputmethod_super_selection_list_item_selected(void* self, int32_t type, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListRemoveItem)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
/// @param index int
///
bool q_virtualkeyboardabstractinputmethod_selection_list_remove_item(void* self, int32_t type, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListRemoveItem)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback bool func(QVirtualKeyboardAbstractInputMethod* self, enum QVirtualKeyboardSelectionListModel__Type type, int index)
///
void q_virtualkeyboardabstractinputmethod_on_selection_list_remove_item(void* self, bool (*callback)(void*, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListRemoveItem)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
/// @param index int
///
bool q_virtualkeyboardabstractinputmethod_super_selection_list_remove_item(void* self, int32_t type, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#patternRecognitionModes)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
/// @return libqt_list of enum QVirtualKeyboardInputEngine__PatternRecognitionMode
///
libqt_list q_virtualkeyboardabstractinputmethod_pattern_recognition_modes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#patternRecognitionModes)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback libqt_list of enum QVirtualKeyboardInputEngine__PatternRecognitionMode func(const QVirtualKeyboardAbstractInputMethod* self)
///
void q_virtualkeyboardabstractinputmethod_on_pattern_recognition_modes(void* self, libqt_list (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#patternRecognitionModes)
///
/// Base class method implementation
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
/// @return libqt_list of enum QVirtualKeyboardInputEngine__PatternRecognitionMode
///
libqt_list q_virtualkeyboardabstractinputmethod_super_pattern_recognition_modes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceBegin)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param traceId int
/// @param patternRecognitionMode enum QVirtualKeyboardInputEngine__PatternRecognitionMode
/// @param traceCaptureDeviceInfo libqt_map of const char* to QVariant*
/// @param traceScreenInfo libqt_map of const char* to QVariant*
///
QVirtualKeyboardTrace* q_virtualkeyboardabstractinputmethod_trace_begin(void* self, int traceId, int32_t patternRecognitionMode, libqt_map traceCaptureDeviceInfo, libqt_map traceScreenInfo);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceBegin)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback QVirtualKeyboardTrace* func(QVirtualKeyboardAbstractInputMethod* self, int traceId, enum QVirtualKeyboardInputEngine__PatternRecognitionMode patternRecognitionMode, libqt_map of const char* to QVariant* traceCaptureDeviceInfo, libqt_map of const char* to QVariant* traceScreenInfo)
///
void q_virtualkeyboardabstractinputmethod_on_trace_begin(void* self, QVirtualKeyboardTrace* (*callback)(void*, int, int32_t, libqt_map, libqt_map));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceBegin)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param traceId int
/// @param patternRecognitionMode enum QVirtualKeyboardInputEngine__PatternRecognitionMode
/// @param traceCaptureDeviceInfo libqt_map of const char* to QVariant*
/// @param traceScreenInfo libqt_map of const char* to QVariant*
///
QVirtualKeyboardTrace* q_virtualkeyboardabstractinputmethod_super_trace_begin(void* self, int traceId, int32_t patternRecognitionMode, libqt_map traceCaptureDeviceInfo, libqt_map traceScreenInfo);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceEnd)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param trace QVirtualKeyboardTrace*
///
bool q_virtualkeyboardabstractinputmethod_trace_end(void* self, void* trace);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceEnd)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback bool func(QVirtualKeyboardAbstractInputMethod* self, QVirtualKeyboardTrace* trace)
///
void q_virtualkeyboardabstractinputmethod_on_trace_end(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#traceEnd)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param trace QVirtualKeyboardTrace*
///
bool q_virtualkeyboardabstractinputmethod_super_trace_end(void* self, void* trace);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reselect)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param cursorPosition int
/// @param reselectFlags flag of enum QVirtualKeyboardInputEngine__ReselectFlag*
///
bool q_virtualkeyboardabstractinputmethod_reselect(void* self, int cursorPosition, const int32_t* reselectFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reselect)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback bool func(QVirtualKeyboardAbstractInputMethod* self, int cursorPosition, flag of enum QVirtualKeyboardInputEngine__ReselectFlag* reselectFlags)
///
void q_virtualkeyboardabstractinputmethod_on_reselect(void* self, bool (*callback)(void*, int, const int32_t*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reselect)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param cursorPosition int
/// @param reselectFlags flag of enum QVirtualKeyboardInputEngine__ReselectFlag*
///
bool q_virtualkeyboardabstractinputmethod_super_reselect(void* self, int cursorPosition, const int32_t* reselectFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clickPreeditText)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param cursorPosition int
///
bool q_virtualkeyboardabstractinputmethod_click_preedit_text(void* self, int cursorPosition);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clickPreeditText)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback bool func(QVirtualKeyboardAbstractInputMethod* self, int cursorPosition)
///
void q_virtualkeyboardabstractinputmethod_on_click_preedit_text(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clickPreeditText)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param cursorPosition int
///
bool q_virtualkeyboardabstractinputmethod_super_click_preedit_text(void* self, int cursorPosition);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListChanged)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
///
void q_virtualkeyboardabstractinputmethod_selection_list_changed(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListChanged)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self, enum QVirtualKeyboardSelectionListModel__Type type)
///
void q_virtualkeyboardabstractinputmethod_on_selection_list_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListActiveItemChanged)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
/// @param index int
///
void q_virtualkeyboardabstractinputmethod_selection_list_active_item_changed(void* self, int32_t type, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListActiveItemChanged)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self, enum QVirtualKeyboardSelectionListModel__Type type, int index)
///
void q_virtualkeyboardabstractinputmethod_on_selection_list_active_item_changed(void* self, void (*callback)(void*, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListsChanged)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_selection_lists_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#selectionListsChanged)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self)
///
void q_virtualkeyboardabstractinputmethod_on_selection_lists_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reset)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self)
///
void q_virtualkeyboardabstractinputmethod_on_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#reset)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_super_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#update)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#update)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self)
///
void q_virtualkeyboardabstractinputmethod_on_update(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#update)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_super_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clearInputMode)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_clear_input_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clearInputMode)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self)
///
void q_virtualkeyboardabstractinputmethod_on_clear_input_mode(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#clearInputMode)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_super_clear_input_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_virtualkeyboardabstractinputmethod_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_virtualkeyboardabstractinputmethod_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
const char* q_virtualkeyboardabstractinputmethod_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param name const char*
///
void q_virtualkeyboardabstractinputmethod_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
bool q_virtualkeyboardabstractinputmethod_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
bool q_virtualkeyboardabstractinputmethod_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
bool q_virtualkeyboardabstractinputmethod_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
bool q_virtualkeyboardabstractinputmethod_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param b bool
///
bool q_virtualkeyboardabstractinputmethod_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
QThread* q_virtualkeyboardabstractinputmethod_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param thread QThread*
///
bool q_virtualkeyboardabstractinputmethod_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param interval int
///
int32_t q_virtualkeyboardabstractinputmethod_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param time int64_t of nanoseconds
///
int32_t q_virtualkeyboardabstractinputmethod_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param id int
///
void q_virtualkeyboardabstractinputmethod_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param id enum Qt__TimerId
///
void q_virtualkeyboardabstractinputmethod_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
/// @return libqt_list of QObject*
///
libqt_list q_virtualkeyboardabstractinputmethod_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param parent QObject*
///
void q_virtualkeyboardabstractinputmethod_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param filterObj QObject*
///
void q_virtualkeyboardabstractinputmethod_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param obj QObject*
///
void q_virtualkeyboardabstractinputmethod_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardabstractinputmethod_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_virtualkeyboardabstractinputmethod_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
bool q_virtualkeyboardabstractinputmethod_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param receiver QObject*
///
bool q_virtualkeyboardabstractinputmethod_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_virtualkeyboardabstractinputmethod_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param name const char*
/// @param value QVariant*
///
bool q_virtualkeyboardabstractinputmethod_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param name const char*
///
QVariant* q_virtualkeyboardabstractinputmethod_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
const char** q_virtualkeyboardabstractinputmethod_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
QBindingStorage* q_virtualkeyboardabstractinputmethod_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
const QBindingStorage* q_virtualkeyboardabstractinputmethod_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self)
///
void q_virtualkeyboardabstractinputmethod_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
QObject* q_virtualkeyboardabstractinputmethod_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param classname const char*
///
bool q_virtualkeyboardabstractinputmethod_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardabstractinputmethod_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardabstractinputmethod_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_virtualkeyboardabstractinputmethod_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param signal const char*
///
bool q_virtualkeyboardabstractinputmethod_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_virtualkeyboardabstractinputmethod_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardabstractinputmethod_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardabstractinputmethod_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param param1 QObject*
///
void q_virtualkeyboardabstractinputmethod_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self, QObject* param1)
///
void q_virtualkeyboardabstractinputmethod_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param event QEvent*
///
bool q_virtualkeyboardabstractinputmethod_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param event QEvent*
///
bool q_virtualkeyboardabstractinputmethod_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback bool func(QVirtualKeyboardAbstractInputMethod* self, QEvent* event)
///
void q_virtualkeyboardabstractinputmethod_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboardabstractinputmethod_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboardabstractinputmethod_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback bool func(QVirtualKeyboardAbstractInputMethod* self, QObject* watched, QEvent* event)
///
void q_virtualkeyboardabstractinputmethod_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param event QTimerEvent*
///
void q_virtualkeyboardabstractinputmethod_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param event QTimerEvent*
///
void q_virtualkeyboardabstractinputmethod_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self, QTimerEvent* event)
///
void q_virtualkeyboardabstractinputmethod_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param event QChildEvent*
///
void q_virtualkeyboardabstractinputmethod_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param event QChildEvent*
///
void q_virtualkeyboardabstractinputmethod_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self, QChildEvent* event)
///
void q_virtualkeyboardabstractinputmethod_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param event QEvent*
///
void q_virtualkeyboardabstractinputmethod_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param event QEvent*
///
void q_virtualkeyboardabstractinputmethod_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self, QEvent* event)
///
void q_virtualkeyboardabstractinputmethod_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardabstractinputmethod_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardabstractinputmethod_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self, QMetaMethod* signal)
///
void q_virtualkeyboardabstractinputmethod_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardabstractinputmethod_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardabstractinputmethod_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self, QMetaMethod* signal)
///
void q_virtualkeyboardabstractinputmethod_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
QObject* q_virtualkeyboardabstractinputmethod_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
QObject* q_virtualkeyboardabstractinputmethod_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback QObject* func(QVirtualKeyboardAbstractInputMethod* self)
///
void q_virtualkeyboardabstractinputmethod_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
int32_t q_virtualkeyboardabstractinputmethod_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
///
int32_t q_virtualkeyboardabstractinputmethod_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback int32_t func(QVirtualKeyboardAbstractInputMethod* self)
///
void q_virtualkeyboardabstractinputmethod_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param signal const char*
///
int32_t q_virtualkeyboardabstractinputmethod_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param signal const char*
///
int32_t q_virtualkeyboardabstractinputmethod_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback int32_t func(QVirtualKeyboardAbstractInputMethod* self, const char* signal)
///
void q_virtualkeyboardabstractinputmethod_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param signal QMetaMethod*
///
bool q_virtualkeyboardabstractinputmethod_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVirtualKeyboardAbstractInputMethod*
/// @param signal QMetaMethod*
///
bool q_virtualkeyboardabstractinputmethod_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback bool func(QVirtualKeyboardAbstractInputMethod* self, QMetaMethod* signal)
///
void q_virtualkeyboardabstractinputmethod_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardAbstractInputMethod*
/// @param callback void func(QVirtualKeyboardAbstractInputMethod* self, const char* objectName)
///
void q_virtualkeyboardabstractinputmethod_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardabstractinputmethod.html#dtor.QVirtualKeyboardAbstractInputMethod)
///
/// Delete this object from C++ memory.
///
/// @param self QVirtualKeyboardAbstractInputMethod*
///
void q_virtualkeyboardabstractinputmethod_delete(void* self);

#endif
