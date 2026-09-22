#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTCONTEXT_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html)

/// q_virtualkeyboardinputcontext_new constructs a new QVirtualKeyboardInputContext object.
///
QVirtualKeyboardInputContext* q_virtualkeyboardinputcontext_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html)

/// q_virtualkeyboardinputcontext_new2 constructs a new QVirtualKeyboardInputContext object.
///
/// @param parent QObject*
///
QVirtualKeyboardInputContext* q_virtualkeyboardinputcontext_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QVirtualKeyboardInputContext*
///
const QMetaObject* q_virtualkeyboardinputcontext_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback const QMetaObject* func()
///
void q_virtualkeyboardinputcontext_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardInputContext*
///
const QMetaObject* q_virtualkeyboardinputcontext_super_meta_object(void* self);

/// @param self QVirtualKeyboardInputContext*
/// @param param1 const char*
///
void* q_virtualkeyboardinputcontext_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void* func(QVirtualKeyboardInputContext* self, const char* param1)
///
void q_virtualkeyboardinputcontext_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QVirtualKeyboardInputContext*
/// @param param1 const char*
///
void* q_virtualkeyboardinputcontext_super_metacast(void* self, const char* param1);

/// @param self QVirtualKeyboardInputContext*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboardinputcontext_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback int32_t func(QVirtualKeyboardInputContext* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_virtualkeyboardinputcontext_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QVirtualKeyboardInputContext*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboardinputcontext_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_virtualkeyboardinputcontext_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#isShiftActive)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_is_shift_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#isCapsLockActive)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_is_caps_lock_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#isUppercase)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_is_uppercase(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorPosition)
///
/// @param self QVirtualKeyboardInputContext*
///
int32_t q_virtualkeyboardinputcontext_anchor_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorPosition)
///
/// @param self QVirtualKeyboardInputContext*
///
int32_t q_virtualkeyboardinputcontext_cursor_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputMethodHints)
///
/// @param self QVirtualKeyboardInputContext*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_virtualkeyboardinputcontext_input_method_hints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#preeditText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVirtualKeyboardInputContext*
///
const char* q_virtualkeyboardinputcontext_preedit_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setPreeditText)
///
/// @param self QVirtualKeyboardInputContext*
/// @param text const char*
///
void q_virtualkeyboardinputcontext_set_preedit_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#preeditTextAttributes)
///
/// @param self QVirtualKeyboardInputContext*
///
/// @return libqt_list of QInputMethodEvent__Attribute*
///
libqt_list q_virtualkeyboardinputcontext_preedit_text_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#surroundingText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVirtualKeyboardInputContext*
///
const char* q_virtualkeyboardinputcontext_surrounding_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#selectedText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVirtualKeyboardInputContext*
///
const char* q_virtualkeyboardinputcontext_selected_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectangle)
///
/// @param self QVirtualKeyboardInputContext*
///
QRectF* q_virtualkeyboardinputcontext_anchor_rectangle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectangle)
///
/// @param self QVirtualKeyboardInputContext*
///
QRectF* q_virtualkeyboardinputcontext_cursor_rectangle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#isAnimating)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_is_animating(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setAnimating)
///
/// @param self QVirtualKeyboardInputContext*
/// @param isAnimating bool
///
void q_virtualkeyboardinputcontext_set_animating(void* self, bool isAnimating);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#locale)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVirtualKeyboardInputContext*
///
const char* q_virtualkeyboardinputcontext_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputItem)
///
/// @param self QVirtualKeyboardInputContext*
///
QObject* q_virtualkeyboardinputcontext_input_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputEngine)
///
/// @param self QVirtualKeyboardInputContext*
///
QVirtualKeyboardInputEngine* q_virtualkeyboardinputcontext_input_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#isSelectionControlVisible)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_is_selection_control_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectIntersectsClipRect)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_anchor_rect_intersects_clip_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectIntersectsClipRect)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_cursor_rect_intersects_clip_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#keyboardObserver)
///
/// @param self QVirtualKeyboardInputContext*
///
QVirtualKeyboardObserver* q_virtualkeyboardinputcontext_keyboard_observer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#sendKeyClick)
///
/// @param self QVirtualKeyboardInputContext*
/// @param key int
/// @param text const char*
///
void q_virtualkeyboardinputcontext_send_key_click(void* self, int key, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#commit)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_commit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#commit)
///
/// @param self QVirtualKeyboardInputContext*
/// @param text const char*
///
void q_virtualkeyboardinputcontext_commit2(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#clear)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setSelectionOnFocusObject)
///
/// @param self QVirtualKeyboardInputContext*
/// @param anchorPos QPointF*
/// @param cursorPos QPointF*
///
void q_virtualkeyboardinputcontext_set_selection_on_focus_object(void* self, void* anchorPos, void* cursorPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#preeditTextChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_preedit_text_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#preeditTextChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_preedit_text_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputMethodHintsChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_input_method_hints_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputMethodHintsChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_input_method_hints_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#surroundingTextChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_surrounding_text_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#surroundingTextChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_surrounding_text_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#selectedTextChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_selected_text_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#selectedTextChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_selected_text_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorPositionChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_anchor_position_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorPositionChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_anchor_position_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorPositionChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_cursor_position_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorPositionChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_cursor_position_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectangleChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_anchor_rectangle_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectangleChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_anchor_rectangle_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectangleChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_cursor_rectangle_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectangleChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_cursor_rectangle_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#shiftActiveChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_shift_active_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#shiftActiveChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_shift_active_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#capsLockActiveChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_caps_lock_active_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#capsLockActiveChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_caps_lock_active_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#uppercaseChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_uppercase_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#uppercaseChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_uppercase_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#animatingChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_animating_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#animatingChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_animating_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#localeChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_locale_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#localeChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_locale_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputItemChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_input_item_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#inputItemChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_input_item_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#selectionControlVisibleChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_selection_control_visible_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#selectionControlVisibleChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_selection_control_visible_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectIntersectsClipRectChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_anchor_rect_intersects_clip_rect_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#anchorRectIntersectsClipRectChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_anchor_rect_intersects_clip_rect_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectIntersectsClipRectChanged)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_cursor_rect_intersects_clip_rect_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#cursorRectIntersectsClipRectChanged)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_cursor_rect_intersects_clip_rect_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_virtualkeyboardinputcontext_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_virtualkeyboardinputcontext_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setPreeditText)
///
/// @param self QVirtualKeyboardInputContext*
/// @param text const char*
/// @param attributes libqt_list of QInputMethodEvent__Attribute*
///
void q_virtualkeyboardinputcontext_set_preedit_text2(void* self, const char* text, libqt_list attributes);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setPreeditText)
///
/// @param self QVirtualKeyboardInputContext*
/// @param text const char*
/// @param attributes libqt_list of QInputMethodEvent__Attribute*
/// @param replaceFrom int
///
void q_virtualkeyboardinputcontext_set_preedit_text3(void* self, const char* text, libqt_list attributes, int replaceFrom);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#setPreeditText)
///
/// @param self QVirtualKeyboardInputContext*
/// @param text const char*
/// @param attributes libqt_list of QInputMethodEvent__Attribute*
/// @param replaceFrom int
/// @param replaceLength int
///
void q_virtualkeyboardinputcontext_set_preedit_text4(void* self, const char* text, libqt_list attributes, int replaceFrom, int replaceLength);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#sendKeyClick)
///
/// @param self QVirtualKeyboardInputContext*
/// @param key int
/// @param text const char*
/// @param modifiers int
///
void q_virtualkeyboardinputcontext_send_key_click3(void* self, int key, const char* text, int modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#commit)
///
/// @param self QVirtualKeyboardInputContext*
/// @param text const char*
/// @param replaceFrom int
///
void q_virtualkeyboardinputcontext_commit22(void* self, const char* text, int replaceFrom);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#commit)
///
/// @param self QVirtualKeyboardInputContext*
/// @param text const char*
/// @param replaceFrom int
/// @param replaceLength int
///
void q_virtualkeyboardinputcontext_commit3(void* self, const char* text, int replaceFrom, int replaceLength);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVirtualKeyboardInputContext*
///
const char* q_virtualkeyboardinputcontext_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVirtualKeyboardInputContext*
/// @param name const char*
///
void q_virtualkeyboardinputcontext_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVirtualKeyboardInputContext*
/// @param b bool
///
bool q_virtualkeyboardinputcontext_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QVirtualKeyboardInputContext*
///
QThread* q_virtualkeyboardinputcontext_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVirtualKeyboardInputContext*
/// @param thread QThread*
///
bool q_virtualkeyboardinputcontext_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardInputContext*
/// @param interval int
///
int32_t q_virtualkeyboardinputcontext_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardInputContext*
/// @param time int64_t of nanoseconds
///
int32_t q_virtualkeyboardinputcontext_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardInputContext*
/// @param id int
///
void q_virtualkeyboardinputcontext_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardInputContext*
/// @param id enum Qt__TimerId
///
void q_virtualkeyboardinputcontext_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QVirtualKeyboardInputContext*
///
/// @return libqt_list of QObject*
///
libqt_list q_virtualkeyboardinputcontext_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVirtualKeyboardInputContext*
/// @param parent QObject*
///
void q_virtualkeyboardinputcontext_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVirtualKeyboardInputContext*
/// @param filterObj QObject*
///
void q_virtualkeyboardinputcontext_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVirtualKeyboardInputContext*
/// @param obj QObject*
///
void q_virtualkeyboardinputcontext_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardinputcontext_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_virtualkeyboardinputcontext_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVirtualKeyboardInputContext*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardinputcontext_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardinputcontext_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_virtualkeyboardinputcontext_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardInputContext*
///
bool q_virtualkeyboardinputcontext_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardInputContext*
/// @param receiver QObject*
///
bool q_virtualkeyboardinputcontext_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_virtualkeyboardinputcontext_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVirtualKeyboardInputContext*
/// @param name const char*
/// @param value QVariant*
///
bool q_virtualkeyboardinputcontext_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QVirtualKeyboardInputContext*
/// @param name const char*
///
QVariant* q_virtualkeyboardinputcontext_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QVirtualKeyboardInputContext*
///
const char** q_virtualkeyboardinputcontext_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardInputContext*
///
QBindingStorage* q_virtualkeyboardinputcontext_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardInputContext*
///
const QBindingStorage* q_virtualkeyboardinputcontext_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self)
///
void q_virtualkeyboardinputcontext_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QVirtualKeyboardInputContext*
///
QObject* q_virtualkeyboardinputcontext_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QVirtualKeyboardInputContext*
/// @param classname const char*
///
bool q_virtualkeyboardinputcontext_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardInputContext*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardinputcontext_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardInputContext*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardinputcontext_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_virtualkeyboardinputcontext_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_virtualkeyboardinputcontext_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVirtualKeyboardInputContext*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_virtualkeyboardinputcontext_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal const char*
///
bool q_virtualkeyboardinputcontext_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_virtualkeyboardinputcontext_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardinputcontext_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardInputContext*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardinputcontext_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardInputContext*
/// @param param1 QObject*
///
void q_virtualkeyboardinputcontext_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self, QObject* param1)
///
void q_virtualkeyboardinputcontext_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param event QEvent*
///
bool q_virtualkeyboardinputcontext_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param event QEvent*
///
bool q_virtualkeyboardinputcontext_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback bool func(QVirtualKeyboardInputContext* self, QEvent* event)
///
void q_virtualkeyboardinputcontext_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboardinputcontext_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboardinputcontext_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback bool func(QVirtualKeyboardInputContext* self, QObject* watched, QEvent* event)
///
void q_virtualkeyboardinputcontext_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param event QTimerEvent*
///
void q_virtualkeyboardinputcontext_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param event QTimerEvent*
///
void q_virtualkeyboardinputcontext_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self, QTimerEvent* event)
///
void q_virtualkeyboardinputcontext_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param event QChildEvent*
///
void q_virtualkeyboardinputcontext_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param event QChildEvent*
///
void q_virtualkeyboardinputcontext_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self, QChildEvent* event)
///
void q_virtualkeyboardinputcontext_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param event QEvent*
///
void q_virtualkeyboardinputcontext_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param event QEvent*
///
void q_virtualkeyboardinputcontext_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self, QEvent* event)
///
void q_virtualkeyboardinputcontext_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardinputcontext_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardinputcontext_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self, QMetaMethod* signal)
///
void q_virtualkeyboardinputcontext_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardinputcontext_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardinputcontext_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self, QMetaMethod* signal)
///
void q_virtualkeyboardinputcontext_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
///
QObject* q_virtualkeyboardinputcontext_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
///
QObject* q_virtualkeyboardinputcontext_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback QObject* func()
///
void q_virtualkeyboardinputcontext_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
///
int32_t q_virtualkeyboardinputcontext_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
///
int32_t q_virtualkeyboardinputcontext_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback int32_t func()
///
void q_virtualkeyboardinputcontext_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal const char*
///
int32_t q_virtualkeyboardinputcontext_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal const char*
///
int32_t q_virtualkeyboardinputcontext_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback int32_t func(QVirtualKeyboardInputContext* self, const char* signal)
///
void q_virtualkeyboardinputcontext_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal QMetaMethod*
///
bool q_virtualkeyboardinputcontext_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param signal QMetaMethod*
///
bool q_virtualkeyboardinputcontext_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback bool func(QVirtualKeyboardInputContext* self, QMetaMethod* signal)
///
void q_virtualkeyboardinputcontext_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardInputContext*
/// @param callback void func(QVirtualKeyboardInputContext* self, const char* objectName)
///
void q_virtualkeyboardinputcontext_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardinputcontext.html#dtor.QVirtualKeyboardInputContext)
///
/// Delete this object from C++ memory.
///
/// @param self QVirtualKeyboardInputContext*
///
void q_virtualkeyboardinputcontext_delete(void* self);

#endif
