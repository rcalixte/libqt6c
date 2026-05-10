#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBPLAINTEXTEDITOR_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBPLAINTEXTEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)

/// k_textcustomeditor__plaintexteditor_new constructs a new TextCustomEditor::PlainTextEditor object.
///
/// @param parent QWidget*
///
TextCustomEditor__PlainTextEditor* k_textcustomeditor__plaintexteditor_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)

/// k_textcustomeditor__plaintexteditor_new2 constructs a new TextCustomEditor::PlainTextEditor object.
///
TextCustomEditor__PlainTextEditor* k_textcustomeditor__plaintexteditor_new2();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const QMetaObject* k_textcustomeditor__plaintexteditor_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback const QMetaObject* func()
///
void k_textcustomeditor__plaintexteditor_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_meta_object` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_meta_object k_textcustomeditor__plaintexteditor_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const QMetaObject* k_textcustomeditor__plaintexteditor_super_meta_object(void* self);

/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 const char*
///
void* k_textcustomeditor__plaintexteditor_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void* func(TextCustomEditor__PlainTextEditor* self, const char* param1)
///
void k_textcustomeditor__plaintexteditor_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_metacast` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_metacast k_textcustomeditor__plaintexteditor_super_metacast

/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 const char*
///
void* k_textcustomeditor__plaintexteditor_super_metacast(void* self, const char* param1);

/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textcustomeditor__plaintexteditor_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback int32_t func(TextCustomEditor__PlainTextEditor* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textcustomeditor__plaintexteditor_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_metacall` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_metacall k_textcustomeditor__plaintexteditor_super_metacall

/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textcustomeditor__plaintexteditor_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textcustomeditor__plaintexteditor_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param b bool
///
void k_textcustomeditor__plaintexteditor_set_search_support(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_search_support(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_spell_checking_support(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param check bool
///
void k_textcustomeditor__plaintexteditor_set_spell_checking_support(void* self, bool check);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param readOnly bool
///
void k_textcustomeditor__plaintexteditor_set_read_only(void* self, bool readOnly);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, bool readOnly)
///
void k_textcustomeditor__plaintexteditor_on_set_read_only(void* self, void (*callback)(void*, bool));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_set_read_only` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_set_read_only k_textcustomeditor__plaintexteditor_super_set_read_only

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param readOnly bool
///
void k_textcustomeditor__plaintexteditor_super_set_read_only(void* self, bool readOnly);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param b bool
///
void k_textcustomeditor__plaintexteditor_set_text_to_speech_support(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_text_to_speech_support(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param b bool
///
void k_textcustomeditor__plaintexteditor_set_web_shortcut_support(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_web_shortcut_support(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_create_highlighter(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func()
///
void k_textcustomeditor__plaintexteditor_on_create_highlighter(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_create_highlighter` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_create_highlighter k_textcustomeditor__plaintexteditor_super_create_highlighter

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_super_create_highlighter(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param lst const char**
///
void k_textcustomeditor__plaintexteditor_add_ignore_words(void* self, const char* lst[static 1]);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_activate_language_menu(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param activate bool
///
void k_textcustomeditor__plaintexteditor_set_activate_language_menu(void* self, bool activate);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
Sonnet__Highlighter* k_textcustomeditor__plaintexteditor_highlighter(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_check_spelling_enabled(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param check bool
///
void k_textcustomeditor__plaintexteditor_set_check_spelling_enabled(void* self, bool check);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param _fileName const char*
///
void k_textcustomeditor__plaintexteditor_set_spell_checking_config_file_name(void* self, const char* _fileName);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_spell_checking_config_file_name(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_spell_checking_language(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param _language const char*
///
void k_textcustomeditor__plaintexteditor_set_spell_checking_language(void* self, const char* _language);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param b bool
///
void k_textcustomeditor__plaintexteditor_set_emoji_support(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_emoji_support(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param message const char*
///
void k_textcustomeditor__plaintexteditor_slot_display_message_indicator(void* self, const char* message);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_slot_check_spelling(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_slot_speak_text(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_slot_zoom_reset(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param menu QMenu*
/// @param pos QPoint*
///
void k_textcustomeditor__plaintexteditor_add_extra_menu_entry(void* self, void* menu, void* pos);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QMenu* menu, QPoint* pos)
///
void k_textcustomeditor__plaintexteditor_on_add_extra_menu_entry(void* self, void (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_add_extra_menu_entry` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_add_extra_menu_entry k_textcustomeditor__plaintexteditor_super_add_extra_menu_entry

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param menu QMenu*
/// @param pos QPoint*
///
void k_textcustomeditor__plaintexteditor_super_add_extra_menu_entry(void* self, void* menu, void* pos);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QContextMenuEvent*
///
void k_textcustomeditor__plaintexteditor_context_menu_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QContextMenuEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_context_menu_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_context_menu_event k_textcustomeditor__plaintexteditor_super_context_menu_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QContextMenuEvent*
///
void k_textcustomeditor__plaintexteditor_super_context_menu_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param ev QEvent*
///
bool k_textcustomeditor__plaintexteditor_event(void* self, void* ev);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func(TextCustomEditor__PlainTextEditor* self, QEvent* ev)
///
void k_textcustomeditor__plaintexteditor_on_event(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_event k_textcustomeditor__plaintexteditor_super_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param ev QEvent*
///
bool k_textcustomeditor__plaintexteditor_super_event(void* self, void* ev);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QKeyEvent*
///
void k_textcustomeditor__plaintexteditor_key_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_key_press_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_key_press_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_key_press_event k_textcustomeditor__plaintexteditor_super_key_press_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QKeyEvent*
///
void k_textcustomeditor__plaintexteditor_super_key_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QKeyEvent*
///
bool k_textcustomeditor__plaintexteditor_override_shortcut(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_override_shortcut(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_override_shortcut` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_override_shortcut k_textcustomeditor__plaintexteditor_super_override_shortcut

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QKeyEvent*
///
bool k_textcustomeditor__plaintexteditor_super_override_shortcut(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QKeyEvent*
///
bool k_textcustomeditor__plaintexteditor_handle_shortcut(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_handle_shortcut(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_handle_shortcut` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_handle_shortcut k_textcustomeditor__plaintexteditor_super_handle_shortcut

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QKeyEvent*
///
bool k_textcustomeditor__plaintexteditor_super_handle_shortcut(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QWheelEvent*
///
void k_textcustomeditor__plaintexteditor_wheel_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QWheelEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_wheel_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_wheel_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_wheel_event k_textcustomeditor__plaintexteditor_super_wheel_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QWheelEvent*
///
void k_textcustomeditor__plaintexteditor_super_wheel_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
Sonnet__SpellCheckDecorator* k_textcustomeditor__plaintexteditor_create_spell_check_decorator(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback Sonnet__SpellCheckDecorator* func()
///
void k_textcustomeditor__plaintexteditor_on_create_spell_check_decorator(void* self, Sonnet__SpellCheckDecorator* (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_create_spell_check_decorator` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_create_spell_check_decorator k_textcustomeditor__plaintexteditor_super_create_spell_check_decorator

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
///
Sonnet__SpellCheckDecorator* k_textcustomeditor__plaintexteditor_super_create_spell_check_decorator(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param _highLighter Sonnet__Highlighter*
///
void k_textcustomeditor__plaintexteditor_set_highlighter(void* self, void* _highLighter);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, Sonnet__Highlighter* _highLighter)
///
void k_textcustomeditor__plaintexteditor_on_set_highlighter(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_set_highlighter` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_set_highlighter k_textcustomeditor__plaintexteditor_super_set_highlighter

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param _highLighter Sonnet__Highlighter*
///
void k_textcustomeditor__plaintexteditor_super_set_highlighter(void* self, void* _highLighter);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QFocusEvent*
///
void k_textcustomeditor__plaintexteditor_focus_in_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QFocusEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_focus_in_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_focus_in_event k_textcustomeditor__plaintexteditor_super_focus_in_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QFocusEvent*
///
void k_textcustomeditor__plaintexteditor_super_focus_in_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_update_high_lighter(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func()
///
void k_textcustomeditor__plaintexteditor_on_update_high_lighter(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_update_high_lighter` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_update_high_lighter k_textcustomeditor__plaintexteditor_super_update_high_lighter

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_super_update_high_lighter(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_clear_decorator(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func()
///
void k_textcustomeditor__plaintexteditor_on_clear_decorator(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_clear_decorator` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_clear_decorator k_textcustomeditor__plaintexteditor_super_clear_decorator

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_super_clear_decorator(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_find_text(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self)
///
void k_textcustomeditor__plaintexteditor_on_find_text(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_replace_text(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self)
///
void k_textcustomeditor__plaintexteditor_on_replace_text(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param currentWord const char*
/// @param autoCorrectWord const char*
///
void k_textcustomeditor__plaintexteditor_spell_checker_auto_correct(void* self, const char* currentWord, const char* autoCorrectWord);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, const char* currentWord, const char* autoCorrectWord)
///
void k_textcustomeditor__plaintexteditor_on_spell_checker_auto_correct(void* self, void (*callback)(void*, const char*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 bool
///
void k_textcustomeditor__plaintexteditor_check_spelling_changed(void* self, bool param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, bool param1)
///
void k_textcustomeditor__plaintexteditor_on_check_spelling_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 const char*
///
void k_textcustomeditor__plaintexteditor_language_changed(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, const char* param1)
///
void k_textcustomeditor__plaintexteditor_on_language_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 const char*
///
void k_textcustomeditor__plaintexteditor_spell_check_status(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, const char* param1)
///
void k_textcustomeditor__plaintexteditor_on_spell_check_status(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param text const char*
///
void k_textcustomeditor__plaintexteditor_say(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, const char* text)
///
void k_textcustomeditor__plaintexteditor_on_say(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textcustomeditor__plaintexteditor_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textcustomeditor__plaintexteditor_tr3(const char* s, const char* c, int n);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocument)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param document QTextDocument*
///
void k_textcustomeditor__plaintexteditor_set_document(void* self, void* document);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#document)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QTextDocument* k_textcustomeditor__plaintexteditor_document(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlaceholderText)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param placeholderText const char*
///
void k_textcustomeditor__plaintexteditor_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_placeholder_text(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextCursor)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param cursor QTextCursor*
///
void k_textcustomeditor__plaintexteditor_set_text_cursor(void* self, void* cursor);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textCursor)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QTextCursor* k_textcustomeditor__plaintexteditor_text_cursor(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isReadOnly)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_read_only(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextInteractionFlags)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param flags flag of enum Qt__TextInteractionFlag
///
void k_textcustomeditor__plaintexteditor_set_text_interaction_flags(void* self, int32_t flags);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textInteractionFlags)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return flag of enum Qt__TextInteractionFlag
///
int32_t k_textcustomeditor__plaintexteditor_text_interaction_flags(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mergeCurrentCharFormat)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param modifier QTextCharFormat*
///
void k_textcustomeditor__plaintexteditor_merge_current_char_format(void* self, void* modifier);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCurrentCharFormat)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param format QTextCharFormat*
///
void k_textcustomeditor__plaintexteditor_set_current_char_format(void* self, void* format);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#currentCharFormat)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QTextCharFormat* k_textcustomeditor__plaintexteditor_current_char_format(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabChangesFocus)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_tab_changes_focus(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabChangesFocus)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param b bool
///
void k_textcustomeditor__plaintexteditor_set_tab_changes_focus(void* self, bool b);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocumentTitle)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param title const char*
///
void k_textcustomeditor__plaintexteditor_set_document_title(void* self, const char* title);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#documentTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_document_title(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isUndoRedoEnabled)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_undo_redo_enabled(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setUndoRedoEnabled)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param enable bool
///
void k_textcustomeditor__plaintexteditor_set_undo_redo_enabled(void* self, bool enable);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setMaximumBlockCount)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param maximum int
///
void k_textcustomeditor__plaintexteditor_set_maximum_block_count(void* self, int maximum);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#maximumBlockCount)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_maximum_block_count(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#lineWrapMode)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum QPlainTextEdit__LineWrapMode
///
int32_t k_textcustomeditor__plaintexteditor_line_wrap_mode(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setLineWrapMode)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param mode enum QPlainTextEdit__LineWrapMode
///
void k_textcustomeditor__plaintexteditor_set_line_wrap_mode(void* self, int32_t mode);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wordWrapMode)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum QTextOption__WrapMode
///
int32_t k_textcustomeditor__plaintexteditor_word_wrap_mode(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setWordWrapMode)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param policy enum QTextOption__WrapMode
///
void k_textcustomeditor__plaintexteditor_set_word_wrap_mode(void* self, int32_t policy);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setBackgroundVisible)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param visible bool
///
void k_textcustomeditor__plaintexteditor_set_background_visible(void* self, bool visible);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#backgroundVisible)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_background_visible(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCenterOnScroll)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param enabled bool
///
void k_textcustomeditor__plaintexteditor_set_center_on_scroll(void* self, bool enabled);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerOnScroll)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_center_on_scroll(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param exp const char*
///
bool k_textcustomeditor__plaintexteditor_find(void* self, const char* exp);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param exp QRegularExpression*
///
bool k_textcustomeditor__plaintexteditor_find2(void* self, void* exp);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#toPlainText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_to_plain_text(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#ensureCursorVisible)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_ensure_cursor_visible(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QMenu* k_textcustomeditor__plaintexteditor_create_standard_context_menu(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param position QPoint*
///
QMenu* k_textcustomeditor__plaintexteditor_create_standard_context_menu2(void* self, void* position);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorForPosition)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param pos QPoint*
///
QTextCursor* k_textcustomeditor__plaintexteditor_cursor_for_position(void* self, void* pos);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param cursor QTextCursor*
///
QRect* k_textcustomeditor__plaintexteditor_cursor_rect(void* self, void* cursor);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QRect* k_textcustomeditor__plaintexteditor_cursor_rect2(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param pos QPoint*
///
const char* k_textcustomeditor__plaintexteditor_anchor_at(void* self, void* pos);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#overwriteMode)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_overwrite_mode(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setOverwriteMode)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param overwrite bool
///
void k_textcustomeditor__plaintexteditor_set_overwrite_mode(void* self, bool overwrite);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabStopDistance)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
double k_textcustomeditor__plaintexteditor_tab_stop_distance(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabStopDistance)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param distance double
///
void k_textcustomeditor__plaintexteditor_set_tab_stop_distance(void* self, double distance);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_cursor_width(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCursorWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param width int
///
void k_textcustomeditor__plaintexteditor_set_cursor_width(void* self, int width);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setExtraSelections)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param selections libqt_list of QTextEdit__ExtraSelection*
///
void k_textcustomeditor__plaintexteditor_set_extra_selections(void* self, libqt_list selections);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#extraSelections)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return libqt_list of QTextEdit__ExtraSelection*
///
libqt_list k_textcustomeditor__plaintexteditor_extra_selections(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param operation enum QTextCursor__MoveOperation
///
void k_textcustomeditor__plaintexteditor_move_cursor(void* self, int32_t operation);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canPaste)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_can_paste(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#print)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param printer QPagedPaintDevice*
///
void k_textcustomeditor__plaintexteditor_print(void* self, void* printer);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCount)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_block_count(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_textcustomeditor__plaintexteditor_input_method_query2(void* self, int32_t query, void* argument);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlainText)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param text const char*
///
void k_textcustomeditor__plaintexteditor_set_plain_text(void* self, const char* text);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cut)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_cut(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copy)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_copy(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paste)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_paste(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undo)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_undo(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redo)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_redo(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#clear)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_clear(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectAll)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_select_all(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertPlainText)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param text const char*
///
void k_textcustomeditor__plaintexteditor_insert_plain_text(void* self, const char* text);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendPlainText)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param text const char*
///
void k_textcustomeditor__plaintexteditor_append_plain_text(void* self, const char* text);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendHtml)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param html const char*
///
void k_textcustomeditor__plaintexteditor_append_html(void* self, const char* html);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerCursor)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_center_cursor(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_zoom_in(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_zoom_out(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_text_changed(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self)
///
void k_textcustomeditor__plaintexteditor_on_text_changed(void* self, void (*callback)(void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param b bool
///
void k_textcustomeditor__plaintexteditor_undo_available(void* self, bool b);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, bool b)
///
void k_textcustomeditor__plaintexteditor_on_undo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param b bool
///
void k_textcustomeditor__plaintexteditor_redo_available(void* self, bool b);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, bool b)
///
void k_textcustomeditor__plaintexteditor_on_redo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param b bool
///
void k_textcustomeditor__plaintexteditor_copy_available(void* self, bool b);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, bool b)
///
void k_textcustomeditor__plaintexteditor_on_copy_available(void* self, void (*callback)(void*, bool));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_selection_changed(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self)
///
void k_textcustomeditor__plaintexteditor_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_cursor_position_changed(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self)
///
void k_textcustomeditor__plaintexteditor_on_cursor_position_changed(void* self, void (*callback)(void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param rect QRect*
/// @param dy int
///
void k_textcustomeditor__plaintexteditor_update_request(void* self, void* rect, int dy);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QRect* rect, int dy)
///
void k_textcustomeditor__plaintexteditor_on_update_request(void* self, void (*callback)(void*, void*, int));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param newBlockCount int
///
void k_textcustomeditor__plaintexteditor_block_count_changed(void* self, int newBlockCount);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, int newBlockCount)
///
void k_textcustomeditor__plaintexteditor_on_block_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 bool
///
void k_textcustomeditor__plaintexteditor_modification_changed(void* self, bool param1);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, bool param1)
///
void k_textcustomeditor__plaintexteditor_on_modification_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param exp const char*
/// @param options flag of enum QTextDocument__FindFlag
///
bool k_textcustomeditor__plaintexteditor_find22(void* self, const char* exp, int32_t options);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param exp QRegularExpression*
/// @param options flag of enum QTextDocument__FindFlag
///
bool k_textcustomeditor__plaintexteditor_find23(void* self, void* exp, int32_t options);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param operation enum QTextCursor__MoveOperation
/// @param mode enum QTextCursor__MoveMode
///
void k_textcustomeditor__plaintexteditor_move_cursor2(void* self, int32_t operation, int32_t mode);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param range int
///
void k_textcustomeditor__plaintexteditor_zoom_in1(void* self, int range);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param range int
///
void k_textcustomeditor__plaintexteditor_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_textcustomeditor__plaintexteditor_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_textcustomeditor__plaintexteditor_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QScrollBar* k_textcustomeditor__plaintexteditor_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param scrollbar QScrollBar*
///
void k_textcustomeditor__plaintexteditor_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_textcustomeditor__plaintexteditor_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_textcustomeditor__plaintexteditor_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QScrollBar* k_textcustomeditor__plaintexteditor_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param scrollbar QScrollBar*
///
void k_textcustomeditor__plaintexteditor_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWidget* k_textcustomeditor__plaintexteditor_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param widget QWidget*
///
void k_textcustomeditor__plaintexteditor_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_textcustomeditor__plaintexteditor_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list k_textcustomeditor__plaintexteditor_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWidget* k_textcustomeditor__plaintexteditor_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param widget QWidget*
///
void k_textcustomeditor__plaintexteditor_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t k_textcustomeditor__plaintexteditor_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void k_textcustomeditor__plaintexteditor_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param frameStyle int
///
void k_textcustomeditor__plaintexteditor_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum QFrame__Shape
///
int32_t k_textcustomeditor__plaintexteditor_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param frameShape enum QFrame__Shape
///
void k_textcustomeditor__plaintexteditor_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum QFrame__Shadow
///
int32_t k_textcustomeditor__plaintexteditor_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param frameShadow enum QFrame__Shadow
///
void k_textcustomeditor__plaintexteditor_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param lineWidth int
///
void k_textcustomeditor__plaintexteditor_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param midLineWidth int
///
void k_textcustomeditor__plaintexteditor_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QRect* k_textcustomeditor__plaintexteditor_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param frameRect QRect*
///
void k_textcustomeditor__plaintexteditor_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
uintptr_t k_textcustomeditor__plaintexteditor_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
uintptr_t k_textcustomeditor__plaintexteditor_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
uintptr_t k_textcustomeditor__plaintexteditor_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QStyle* k_textcustomeditor__plaintexteditor_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param style QStyle*
///
void k_textcustomeditor__plaintexteditor_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum Qt__WindowModality
///
int32_t k_textcustomeditor__plaintexteditor_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param windowModality enum Qt__WindowModality
///
void k_textcustomeditor__plaintexteditor_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QWidget*
///
bool k_textcustomeditor__plaintexteditor_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param enabled bool
///
void k_textcustomeditor__plaintexteditor_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param disabled bool
///
void k_textcustomeditor__plaintexteditor_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param windowModified bool
///
void k_textcustomeditor__plaintexteditor_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QRect* k_textcustomeditor__plaintexteditor_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const QRect* k_textcustomeditor__plaintexteditor_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QRect* k_textcustomeditor__plaintexteditor_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QPoint* k_textcustomeditor__plaintexteditor_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QRect* k_textcustomeditor__plaintexteditor_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QRect* k_textcustomeditor__plaintexteditor_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QRegion* k_textcustomeditor__plaintexteditor_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param minimumSize QSize*
///
void k_textcustomeditor__plaintexteditor_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param minw int
/// @param minh int
///
void k_textcustomeditor__plaintexteditor_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param maximumSize QSize*
///
void k_textcustomeditor__plaintexteditor_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param maxw int
/// @param maxh int
///
void k_textcustomeditor__plaintexteditor_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param minw int
///
void k_textcustomeditor__plaintexteditor_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param minh int
///
void k_textcustomeditor__plaintexteditor_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param maxw int
///
void k_textcustomeditor__plaintexteditor_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param maxh int
///
void k_textcustomeditor__plaintexteditor_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param sizeIncrement QSize*
///
void k_textcustomeditor__plaintexteditor_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param w int
/// @param h int
///
void k_textcustomeditor__plaintexteditor_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param baseSize QSize*
///
void k_textcustomeditor__plaintexteditor_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param basew int
/// @param baseh int
///
void k_textcustomeditor__plaintexteditor_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param fixedSize QSize*
///
void k_textcustomeditor__plaintexteditor_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param w int
/// @param h int
///
void k_textcustomeditor__plaintexteditor_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param w int
///
void k_textcustomeditor__plaintexteditor_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param h int
///
void k_textcustomeditor__plaintexteditor_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__plaintexteditor_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__plaintexteditor_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__plaintexteditor_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__plaintexteditor_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__plaintexteditor_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__plaintexteditor_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__plaintexteditor_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__plaintexteditor_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textcustomeditor__plaintexteditor_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textcustomeditor__plaintexteditor_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textcustomeditor__plaintexteditor_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textcustomeditor__plaintexteditor_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWidget* k_textcustomeditor__plaintexteditor_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWidget* k_textcustomeditor__plaintexteditor_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWidget* k_textcustomeditor__plaintexteditor_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const QPalette* k_textcustomeditor__plaintexteditor_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param palette QPalette*
///
void k_textcustomeditor__plaintexteditor_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_textcustomeditor__plaintexteditor_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textcustomeditor__plaintexteditor_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_textcustomeditor__plaintexteditor_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textcustomeditor__plaintexteditor_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const QFont* k_textcustomeditor__plaintexteditor_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param font QFont*
///
void k_textcustomeditor__plaintexteditor_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QFontMetrics* k_textcustomeditor__plaintexteditor_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QFontInfo* k_textcustomeditor__plaintexteditor_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QCursor* k_textcustomeditor__plaintexteditor_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param cursor QCursor*
///
void k_textcustomeditor__plaintexteditor_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param enable bool
///
void k_textcustomeditor__plaintexteditor_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param enable bool
///
void k_textcustomeditor__plaintexteditor_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param mask QBitmap*
///
void k_textcustomeditor__plaintexteditor_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param mask QRegion*
///
void k_textcustomeditor__plaintexteditor_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QRegion* k_textcustomeditor__plaintexteditor_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param target QPaintDevice*
///
void k_textcustomeditor__plaintexteditor_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param painter QPainter*
///
void k_textcustomeditor__plaintexteditor_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QPixmap* k_textcustomeditor__plaintexteditor_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QGraphicsEffect* k_textcustomeditor__plaintexteditor_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param effect QGraphicsEffect*
///
void k_textcustomeditor__plaintexteditor_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param type enum Qt__GestureType
///
void k_textcustomeditor__plaintexteditor_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param type enum Qt__GestureType
///
void k_textcustomeditor__plaintexteditor_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param windowTitle const char*
///
void k_textcustomeditor__plaintexteditor_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param styleSheet const char*
///
void k_textcustomeditor__plaintexteditor_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param icon QIcon*
///
void k_textcustomeditor__plaintexteditor_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QIcon* k_textcustomeditor__plaintexteditor_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param windowIconText const char*
///
void k_textcustomeditor__plaintexteditor_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param windowRole const char*
///
void k_textcustomeditor__plaintexteditor_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param filePath const char*
///
void k_textcustomeditor__plaintexteditor_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param level double
///
void k_textcustomeditor__plaintexteditor_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
double k_textcustomeditor__plaintexteditor_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param toolTip const char*
///
void k_textcustomeditor__plaintexteditor_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param msec int
///
void k_textcustomeditor__plaintexteditor_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param statusTip const char*
///
void k_textcustomeditor__plaintexteditor_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param whatsThis const char*
///
void k_textcustomeditor__plaintexteditor_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param name const char*
///
void k_textcustomeditor__plaintexteditor_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param description const char*
///
void k_textcustomeditor__plaintexteditor_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param direction enum Qt__LayoutDirection
///
void k_textcustomeditor__plaintexteditor_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_textcustomeditor__plaintexteditor_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param locale QLocale*
///
void k_textcustomeditor__plaintexteditor_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QLocale* k_textcustomeditor__plaintexteditor_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param reason enum Qt__FocusReason
///
void k_textcustomeditor__plaintexteditor_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_textcustomeditor__plaintexteditor_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param policy enum Qt__FocusPolicy
///
void k_textcustomeditor__plaintexteditor_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_textcustomeditor__plaintexteditor_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param focusProxy QWidget*
///
void k_textcustomeditor__plaintexteditor_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWidget* k_textcustomeditor__plaintexteditor_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_textcustomeditor__plaintexteditor_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_textcustomeditor__plaintexteditor_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QCursor*
///
void k_textcustomeditor__plaintexteditor_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param key QKeySequence*
///
int32_t k_textcustomeditor__plaintexteditor_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param id int
///
void k_textcustomeditor__plaintexteditor_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param id int
///
void k_textcustomeditor__plaintexteditor_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param id int
///
void k_textcustomeditor__plaintexteditor_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_textcustomeditor__plaintexteditor_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_textcustomeditor__plaintexteditor_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param enable bool
///
void k_textcustomeditor__plaintexteditor_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QGraphicsProxyWidget* k_textcustomeditor__plaintexteditor_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textcustomeditor__plaintexteditor_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QRect*
///
void k_textcustomeditor__plaintexteditor_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QRegion*
///
void k_textcustomeditor__plaintexteditor_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textcustomeditor__plaintexteditor_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QRect*
///
void k_textcustomeditor__plaintexteditor_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QRegion*
///
void k_textcustomeditor__plaintexteditor_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param hidden bool
///
void k_textcustomeditor__plaintexteditor_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QWidget*
///
void k_textcustomeditor__plaintexteditor_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param x int
/// @param y int
///
void k_textcustomeditor__plaintexteditor_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPoint*
///
void k_textcustomeditor__plaintexteditor_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param w int
/// @param h int
///
void k_textcustomeditor__plaintexteditor_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QSize*
///
void k_textcustomeditor__plaintexteditor_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textcustomeditor__plaintexteditor_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param geometry QRect*
///
void k_textcustomeditor__plaintexteditor_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
char* k_textcustomeditor__plaintexteditor_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param geometry char*
///
bool k_textcustomeditor__plaintexteditor_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QWidget*
///
bool k_textcustomeditor__plaintexteditor_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_textcustomeditor__plaintexteditor_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param state flag of enum Qt__WindowState
///
void k_textcustomeditor__plaintexteditor_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param state flag of enum Qt__WindowState
///
void k_textcustomeditor__plaintexteditor_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSizePolicy* k_textcustomeditor__plaintexteditor_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param sizePolicy QSizePolicy*
///
void k_textcustomeditor__plaintexteditor_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_textcustomeditor__plaintexteditor_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QRegion* k_textcustomeditor__plaintexteditor_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textcustomeditor__plaintexteditor_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param margins QMargins*
///
void k_textcustomeditor__plaintexteditor_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QMargins* k_textcustomeditor__plaintexteditor_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QRect* k_textcustomeditor__plaintexteditor_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QLayout* k_textcustomeditor__plaintexteditor_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param layout QLayout*
///
void k_textcustomeditor__plaintexteditor_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param parent QWidget*
///
void k_textcustomeditor__plaintexteditor_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_textcustomeditor__plaintexteditor_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param dx int
/// @param dy int
///
void k_textcustomeditor__plaintexteditor_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_textcustomeditor__plaintexteditor_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWidget* k_textcustomeditor__plaintexteditor_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWidget* k_textcustomeditor__plaintexteditor_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWidget* k_textcustomeditor__plaintexteditor_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param on bool
///
void k_textcustomeditor__plaintexteditor_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param action QAction*
///
void k_textcustomeditor__plaintexteditor_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param actions libqt_list of QAction*
///
void k_textcustomeditor__plaintexteditor_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_textcustomeditor__plaintexteditor_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param before QAction*
/// @param action QAction*
///
void k_textcustomeditor__plaintexteditor_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param action QAction*
///
void k_textcustomeditor__plaintexteditor_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return libqt_list of QAction*
///
libqt_list k_textcustomeditor__plaintexteditor_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param text const char*
///
QAction* k_textcustomeditor__plaintexteditor_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_textcustomeditor__plaintexteditor_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textcustomeditor__plaintexteditor_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textcustomeditor__plaintexteditor_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWidget* k_textcustomeditor__plaintexteditor_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param type flag of enum Qt__WindowType
///
void k_textcustomeditor__plaintexteditor_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_textcustomeditor__plaintexteditor_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 enum Qt__WindowType
///
void k_textcustomeditor__plaintexteditor_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param type flag of enum Qt__WindowType
///
void k_textcustomeditor__plaintexteditor_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return enum Qt__WindowType
///
int32_t k_textcustomeditor__plaintexteditor_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param x int
/// @param y int
///
QWidget* k_textcustomeditor__plaintexteditor_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param p QPoint*
///
QWidget* k_textcustomeditor__plaintexteditor_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param p QPointF*
///
QWidget* k_textcustomeditor__plaintexteditor_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 enum Qt__WidgetAttribute
///
void k_textcustomeditor__plaintexteditor_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_textcustomeditor__plaintexteditor_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param child QWidget*
///
bool k_textcustomeditor__plaintexteditor_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param enabled bool
///
void k_textcustomeditor__plaintexteditor_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QBackingStore* k_textcustomeditor__plaintexteditor_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QWindow* k_textcustomeditor__plaintexteditor_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QScreen* k_textcustomeditor__plaintexteditor_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param screen QScreen*
///
void k_textcustomeditor__plaintexteditor_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_textcustomeditor__plaintexteditor_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param title const char*
///
void k_textcustomeditor__plaintexteditor_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, const char* title)
///
void k_textcustomeditor__plaintexteditor_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param icon QIcon*
///
void k_textcustomeditor__plaintexteditor_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QIcon* icon)
///
void k_textcustomeditor__plaintexteditor_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param iconText const char*
///
void k_textcustomeditor__plaintexteditor_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, const char* iconText)
///
void k_textcustomeditor__plaintexteditor_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param pos QPoint*
///
void k_textcustomeditor__plaintexteditor_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QPoint* pos)
///
void k_textcustomeditor__plaintexteditor_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_textcustomeditor__plaintexteditor_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_textcustomeditor__plaintexteditor_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_textcustomeditor__plaintexteditor_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textcustomeditor__plaintexteditor_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textcustomeditor__plaintexteditor_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_textcustomeditor__plaintexteditor_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textcustomeditor__plaintexteditor_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textcustomeditor__plaintexteditor_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param rectangle QRect*
///
QPixmap* k_textcustomeditor__plaintexteditor_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_textcustomeditor__plaintexteditor_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_textcustomeditor__plaintexteditor_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param id int
/// @param enable bool
///
void k_textcustomeditor__plaintexteditor_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param id int
/// @param enable bool
///
void k_textcustomeditor__plaintexteditor_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_textcustomeditor__plaintexteditor_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_textcustomeditor__plaintexteditor_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_textcustomeditor__plaintexteditor_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_textcustomeditor__plaintexteditor_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char* k_textcustomeditor__plaintexteditor_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param name const char*
///
void k_textcustomeditor__plaintexteditor_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param b bool
///
bool k_textcustomeditor__plaintexteditor_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QThread* k_textcustomeditor__plaintexteditor_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param thread QThread*
///
bool k_textcustomeditor__plaintexteditor_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param interval int
///
int32_t k_textcustomeditor__plaintexteditor_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param time int64_t of nanoseconds
///
int32_t k_textcustomeditor__plaintexteditor_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param id int
///
void k_textcustomeditor__plaintexteditor_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param id enum Qt__TimerId
///
void k_textcustomeditor__plaintexteditor_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
/// @return libqt_list of QObject*
///
libqt_list k_textcustomeditor__plaintexteditor_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param filterObj QObject*
///
void k_textcustomeditor__plaintexteditor_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param obj QObject*
///
void k_textcustomeditor__plaintexteditor_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__plaintexteditor_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textcustomeditor__plaintexteditor_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param receiver QObject*
///
bool k_textcustomeditor__plaintexteditor_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textcustomeditor__plaintexteditor_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param name const char*
/// @param value QVariant*
///
bool k_textcustomeditor__plaintexteditor_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param name const char*
///
QVariant* k_textcustomeditor__plaintexteditor_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const char** k_textcustomeditor__plaintexteditor_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QBindingStorage* k_textcustomeditor__plaintexteditor_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
const QBindingStorage* k_textcustomeditor__plaintexteditor_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self)
///
void k_textcustomeditor__plaintexteditor_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QObject* k_textcustomeditor__plaintexteditor_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param classname const char*
///
bool k_textcustomeditor__plaintexteditor_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textcustomeditor__plaintexteditor_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textcustomeditor__plaintexteditor_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textcustomeditor__plaintexteditor_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal const char*
///
bool k_textcustomeditor__plaintexteditor_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textcustomeditor__plaintexteditor_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__plaintexteditor_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__plaintexteditor_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QObject*
///
void k_textcustomeditor__plaintexteditor_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QObject* param1)
///
void k_textcustomeditor__plaintexteditor_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
double k_textcustomeditor__plaintexteditor_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
double k_textcustomeditor__plaintexteditor_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_textcustomeditor__plaintexteditor_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_textcustomeditor__plaintexteditor_encode_metric_f(int32_t metric, double value);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param type int
/// @param name QUrl*
///
QVariant* k_textcustomeditor__plaintexteditor_load_resource(void* self, int type, void* name);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_load_resource` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_load_resource k_textcustomeditor__plaintexteditor_super_load_resource

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param type int
/// @param name QUrl*
///
QVariant* k_textcustomeditor__plaintexteditor_super_load_resource(void* self, int type, void* name);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QVariant* func(TextCustomEditor__PlainTextEditor* self, int type, QUrl* name)
///
void k_textcustomeditor__plaintexteditor_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param property enum Qt__InputMethodQuery
///
QVariant* k_textcustomeditor__plaintexteditor_input_method_query(void* self, int32_t property);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_input_method_query` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_input_method_query k_textcustomeditor__plaintexteditor_super_input_method_query

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param property enum Qt__InputMethodQuery
///
QVariant* k_textcustomeditor__plaintexteditor_super_input_method_query(void* self, int32_t property);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QVariant* func(TextCustomEditor__PlainTextEditor* self, enum Qt__InputMethodQuery property)
///
void k_textcustomeditor__plaintexteditor_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QTimerEvent*
///
void k_textcustomeditor__plaintexteditor_timer_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_timer_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_timer_event k_textcustomeditor__plaintexteditor_super_timer_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QTimerEvent*
///
void k_textcustomeditor__plaintexteditor_super_timer_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QTimerEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QKeyEvent*
///
void k_textcustomeditor__plaintexteditor_key_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_key_release_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_key_release_event k_textcustomeditor__plaintexteditor_super_key_release_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QKeyEvent*
///
void k_textcustomeditor__plaintexteditor_super_key_release_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QKeyEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QResizeEvent*
///
void k_textcustomeditor__plaintexteditor_resize_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_resize_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_resize_event k_textcustomeditor__plaintexteditor_super_resize_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QResizeEvent*
///
void k_textcustomeditor__plaintexteditor_super_resize_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QResizeEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QPaintEvent*
///
void k_textcustomeditor__plaintexteditor_paint_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_paint_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_paint_event k_textcustomeditor__plaintexteditor_super_paint_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QPaintEvent*
///
void k_textcustomeditor__plaintexteditor_super_paint_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QPaintEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QMouseEvent*
///
void k_textcustomeditor__plaintexteditor_mouse_press_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_mouse_press_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_mouse_press_event k_textcustomeditor__plaintexteditor_super_mouse_press_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QMouseEvent*
///
void k_textcustomeditor__plaintexteditor_super_mouse_press_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QMouseEvent*
///
void k_textcustomeditor__plaintexteditor_mouse_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_mouse_move_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_mouse_move_event k_textcustomeditor__plaintexteditor_super_mouse_move_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QMouseEvent*
///
void k_textcustomeditor__plaintexteditor_super_mouse_move_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QMouseEvent*
///
void k_textcustomeditor__plaintexteditor_mouse_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_mouse_release_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_mouse_release_event k_textcustomeditor__plaintexteditor_super_mouse_release_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QMouseEvent*
///
void k_textcustomeditor__plaintexteditor_super_mouse_release_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QMouseEvent*
///
void k_textcustomeditor__plaintexteditor_mouse_double_click_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_mouse_double_click_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_mouse_double_click_event k_textcustomeditor__plaintexteditor_super_mouse_double_click_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QMouseEvent*
///
void k_textcustomeditor__plaintexteditor_super_mouse_double_click_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param next bool
///
bool k_textcustomeditor__plaintexteditor_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_focus_next_prev_child` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_focus_next_prev_child k_textcustomeditor__plaintexteditor_super_focus_next_prev_child

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param next bool
///
bool k_textcustomeditor__plaintexteditor_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func(TextCustomEditor__PlainTextEditor* self, bool next)
///
void k_textcustomeditor__plaintexteditor_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QDragEnterEvent*
///
void k_textcustomeditor__plaintexteditor_drag_enter_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_drag_enter_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_drag_enter_event k_textcustomeditor__plaintexteditor_super_drag_enter_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QDragEnterEvent*
///
void k_textcustomeditor__plaintexteditor_super_drag_enter_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QDragEnterEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QDragLeaveEvent*
///
void k_textcustomeditor__plaintexteditor_drag_leave_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_drag_leave_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_drag_leave_event k_textcustomeditor__plaintexteditor_super_drag_leave_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QDragLeaveEvent*
///
void k_textcustomeditor__plaintexteditor_super_drag_leave_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QDragLeaveEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QDragMoveEvent*
///
void k_textcustomeditor__plaintexteditor_drag_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_drag_move_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_drag_move_event k_textcustomeditor__plaintexteditor_super_drag_move_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QDragMoveEvent*
///
void k_textcustomeditor__plaintexteditor_super_drag_move_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QDragMoveEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QDropEvent*
///
void k_textcustomeditor__plaintexteditor_drop_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_drop_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_drop_event k_textcustomeditor__plaintexteditor_super_drop_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QDropEvent*
///
void k_textcustomeditor__plaintexteditor_super_drop_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QDropEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QFocusEvent*
///
void k_textcustomeditor__plaintexteditor_focus_out_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_focus_out_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_focus_out_event k_textcustomeditor__plaintexteditor_super_focus_out_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QFocusEvent*
///
void k_textcustomeditor__plaintexteditor_super_focus_out_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QFocusEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QShowEvent*
///
void k_textcustomeditor__plaintexteditor_show_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_show_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_show_event k_textcustomeditor__plaintexteditor_super_show_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QShowEvent*
///
void k_textcustomeditor__plaintexteditor_super_show_event(void* self, void* param1);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QShowEvent* param1)
///
void k_textcustomeditor__plaintexteditor_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QEvent*
///
void k_textcustomeditor__plaintexteditor_change_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_change_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_change_event k_textcustomeditor__plaintexteditor_super_change_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param e QEvent*
///
void k_textcustomeditor__plaintexteditor_super_change_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QEvent* e)
///
void k_textcustomeditor__plaintexteditor_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QMimeData* k_textcustomeditor__plaintexteditor_create_mime_data_from_selection(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_create_mime_data_from_selection` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_create_mime_data_from_selection k_textcustomeditor__plaintexteditor_super_create_mime_data_from_selection

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QMimeData* k_textcustomeditor__plaintexteditor_super_create_mime_data_from_selection(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QMimeData* func()
///
void k_textcustomeditor__plaintexteditor_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)());

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param source QMimeData*
///
bool k_textcustomeditor__plaintexteditor_can_insert_from_mime_data(void* self, void* source);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_can_insert_from_mime_data` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_can_insert_from_mime_data k_textcustomeditor__plaintexteditor_super_can_insert_from_mime_data

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param source QMimeData*
///
bool k_textcustomeditor__plaintexteditor_super_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func(TextCustomEditor__PlainTextEditor* self, QMimeData* source)
///
void k_textcustomeditor__plaintexteditor_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param source QMimeData*
///
void k_textcustomeditor__plaintexteditor_insert_from_mime_data(void* self, void* source);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_insert_from_mime_data` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_insert_from_mime_data k_textcustomeditor__plaintexteditor_super_insert_from_mime_data

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param source QMimeData*
///
void k_textcustomeditor__plaintexteditor_super_insert_from_mime_data(void* self, void* source);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QMimeData* source)
///
void k_textcustomeditor__plaintexteditor_on_insert_from_mime_data(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QInputMethodEvent*
///
void k_textcustomeditor__plaintexteditor_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_input_method_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_input_method_event k_textcustomeditor__plaintexteditor_super_input_method_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QInputMethodEvent*
///
void k_textcustomeditor__plaintexteditor_super_input_method_event(void* self, void* param1);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QInputMethodEvent* param1)
///
void k_textcustomeditor__plaintexteditor_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param dx int
/// @param dy int
///
void k_textcustomeditor__plaintexteditor_scroll_contents_by(void* self, int dx, int dy);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_scroll_contents_by` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_scroll_contents_by k_textcustomeditor__plaintexteditor_super_scroll_contents_by

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param dx int
/// @param dy int
///
void k_textcustomeditor__plaintexteditor_super_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, int dx, int dy)
///
void k_textcustomeditor__plaintexteditor_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param cursor QTextCursor*
///
void k_textcustomeditor__plaintexteditor_do_set_text_cursor(void* self, void* cursor);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_do_set_text_cursor` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_do_set_text_cursor k_textcustomeditor__plaintexteditor_super_do_set_text_cursor

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param cursor QTextCursor*
///
void k_textcustomeditor__plaintexteditor_super_do_set_text_cursor(void* self, void* cursor);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QTextCursor* cursor)
///
void k_textcustomeditor__plaintexteditor_on_do_set_text_cursor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_minimum_size_hint` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_minimum_size_hint k_textcustomeditor__plaintexteditor_super_minimum_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_super_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QSize* func()
///
void k_textcustomeditor__plaintexteditor_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_size_hint` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_size_hint k_textcustomeditor__plaintexteditor_super_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_super_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QSize* func()
///
void k_textcustomeditor__plaintexteditor_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param viewport QWidget*
///
void k_textcustomeditor__plaintexteditor_setup_viewport(void* self, void* viewport);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_setup_viewport` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_setup_viewport k_textcustomeditor__plaintexteditor_super_setup_viewport

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param viewport QWidget*
///
void k_textcustomeditor__plaintexteditor_super_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QWidget* viewport)
///
void k_textcustomeditor__plaintexteditor_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textcustomeditor__plaintexteditor_event_filter(void* self, void* param1, void* param2);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_event_filter` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_event_filter k_textcustomeditor__plaintexteditor_super_event_filter

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textcustomeditor__plaintexteditor_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func(TextCustomEditor__PlainTextEditor* self, QObject* param1, QEvent* param2)
///
void k_textcustomeditor__plaintexteditor_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QEvent*
///
bool k_textcustomeditor__plaintexteditor_viewport_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_viewport_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_viewport_event k_textcustomeditor__plaintexteditor_super_viewport_event

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QEvent*
///
bool k_textcustomeditor__plaintexteditor_super_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func(TextCustomEditor__PlainTextEditor* self, QEvent* param1)
///
void k_textcustomeditor__plaintexteditor_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_viewport_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_viewport_size_hint` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_viewport_size_hint k_textcustomeditor__plaintexteditor_super_viewport_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QSize* k_textcustomeditor__plaintexteditor_super_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QSize* func()
///
void k_textcustomeditor__plaintexteditor_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param option QStyleOptionFrame*
///
void k_textcustomeditor__plaintexteditor_init_style_option(void* self, void* option);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_init_style_option` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_init_style_option k_textcustomeditor__plaintexteditor_super_init_style_option

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param option QStyleOptionFrame*
///
void k_textcustomeditor__plaintexteditor_super_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QStyleOptionFrame* option)
///
void k_textcustomeditor__plaintexteditor_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_dev_type(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_dev_type` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_dev_type k_textcustomeditor__plaintexteditor_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback int32_t func()
///
void k_textcustomeditor__plaintexteditor_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param visible bool
///
void k_textcustomeditor__plaintexteditor_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_set_visible` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_set_visible k_textcustomeditor__plaintexteditor_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param visible bool
///
void k_textcustomeditor__plaintexteditor_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, bool visible)
///
void k_textcustomeditor__plaintexteditor_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 int
///
int32_t k_textcustomeditor__plaintexteditor_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_height_for_width` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_height_for_width k_textcustomeditor__plaintexteditor_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 int
///
int32_t k_textcustomeditor__plaintexteditor_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback int32_t func(TextCustomEditor__PlainTextEditor* self, int param1)
///
void k_textcustomeditor__plaintexteditor_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_has_height_for_width` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_has_height_for_width k_textcustomeditor__plaintexteditor_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func()
///
void k_textcustomeditor__plaintexteditor_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QPaintEngine* k_textcustomeditor__plaintexteditor_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_paint_engine` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_paint_engine k_textcustomeditor__plaintexteditor_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QPaintEngine* k_textcustomeditor__plaintexteditor_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QPaintEngine* func()
///
void k_textcustomeditor__plaintexteditor_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QEnterEvent*
///
void k_textcustomeditor__plaintexteditor_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_enter_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_enter_event k_textcustomeditor__plaintexteditor_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QEnterEvent*
///
void k_textcustomeditor__plaintexteditor_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QEnterEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QEvent*
///
void k_textcustomeditor__plaintexteditor_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_leave_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_leave_event k_textcustomeditor__plaintexteditor_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QEvent*
///
void k_textcustomeditor__plaintexteditor_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QMoveEvent*
///
void k_textcustomeditor__plaintexteditor_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_move_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_move_event k_textcustomeditor__plaintexteditor_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QMoveEvent*
///
void k_textcustomeditor__plaintexteditor_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QMoveEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QCloseEvent*
///
void k_textcustomeditor__plaintexteditor_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_close_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_close_event k_textcustomeditor__plaintexteditor_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QCloseEvent*
///
void k_textcustomeditor__plaintexteditor_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QCloseEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QTabletEvent*
///
void k_textcustomeditor__plaintexteditor_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_tablet_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_tablet_event k_textcustomeditor__plaintexteditor_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QTabletEvent*
///
void k_textcustomeditor__plaintexteditor_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QTabletEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QActionEvent*
///
void k_textcustomeditor__plaintexteditor_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_action_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_action_event k_textcustomeditor__plaintexteditor_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QActionEvent*
///
void k_textcustomeditor__plaintexteditor_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QActionEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QHideEvent*
///
void k_textcustomeditor__plaintexteditor_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_hide_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_hide_event k_textcustomeditor__plaintexteditor_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QHideEvent*
///
void k_textcustomeditor__plaintexteditor_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QHideEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textcustomeditor__plaintexteditor_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_native_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_native_event k_textcustomeditor__plaintexteditor_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textcustomeditor__plaintexteditor_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func(TextCustomEditor__PlainTextEditor* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_textcustomeditor__plaintexteditor_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textcustomeditor__plaintexteditor_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_metric` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_metric k_textcustomeditor__plaintexteditor_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textcustomeditor__plaintexteditor_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback int32_t func(TextCustomEditor__PlainTextEditor* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_textcustomeditor__plaintexteditor_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param painter QPainter*
///
void k_textcustomeditor__plaintexteditor_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_init_painter` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_init_painter k_textcustomeditor__plaintexteditor_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param painter QPainter*
///
void k_textcustomeditor__plaintexteditor_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QPainter* painter)
///
void k_textcustomeditor__plaintexteditor_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param offset QPoint*
///
QPaintDevice* k_textcustomeditor__plaintexteditor_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_redirected` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_redirected k_textcustomeditor__plaintexteditor_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param offset QPoint*
///
QPaintDevice* k_textcustomeditor__plaintexteditor_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QPaintDevice* func(TextCustomEditor__PlainTextEditor* self, QPoint* offset)
///
void k_textcustomeditor__plaintexteditor_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QPainter* k_textcustomeditor__plaintexteditor_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_shared_painter` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_shared_painter k_textcustomeditor__plaintexteditor_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QPainter* k_textcustomeditor__plaintexteditor_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QPainter* func()
///
void k_textcustomeditor__plaintexteditor_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QChildEvent*
///
void k_textcustomeditor__plaintexteditor_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_child_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_child_event k_textcustomeditor__plaintexteditor_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QChildEvent*
///
void k_textcustomeditor__plaintexteditor_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QChildEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QEvent*
///
void k_textcustomeditor__plaintexteditor_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_custom_event` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_custom_event k_textcustomeditor__plaintexteditor_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param event QEvent*
///
void k_textcustomeditor__plaintexteditor_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QEvent* event)
///
void k_textcustomeditor__plaintexteditor_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__plaintexteditor_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_connect_notify` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_connect_notify k_textcustomeditor__plaintexteditor_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__plaintexteditor_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QMetaMethod* signal)
///
void k_textcustomeditor__plaintexteditor_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__plaintexteditor_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_disconnect_notify` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_disconnect_notify k_textcustomeditor__plaintexteditor_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__plaintexteditor_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QMetaMethod* signal)
///
void k_textcustomeditor__plaintexteditor_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QTextBlock* k_textcustomeditor__plaintexteditor_first_visible_block(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_first_visible_block` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_first_visible_block k_textcustomeditor__plaintexteditor_super_first_visible_block

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QTextBlock* k_textcustomeditor__plaintexteditor_super_first_visible_block(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QTextBlock* func()
///
void k_textcustomeditor__plaintexteditor_on_first_visible_block(void* self, QTextBlock* (*callback)());

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QPointF* k_textcustomeditor__plaintexteditor_content_offset(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_content_offset` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_content_offset k_textcustomeditor__plaintexteditor_super_content_offset

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QPointF* k_textcustomeditor__plaintexteditor_super_content_offset(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QPointF* func()
///
void k_textcustomeditor__plaintexteditor_on_content_offset(void* self, QPointF* (*callback)());

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param block QTextBlock*
///
QRectF* k_textcustomeditor__plaintexteditor_block_bounding_rect(void* self, void* block);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_block_bounding_rect` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_block_bounding_rect k_textcustomeditor__plaintexteditor_super_block_bounding_rect

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param block QTextBlock*
///
QRectF* k_textcustomeditor__plaintexteditor_super_block_bounding_rect(void* self, void* block);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QRectF* func(TextCustomEditor__PlainTextEditor* self, QTextBlock* block)
///
void k_textcustomeditor__plaintexteditor_on_block_bounding_rect(void* self, QRectF* (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param block QTextBlock*
///
QRectF* k_textcustomeditor__plaintexteditor_block_bounding_geometry(void* self, void* block);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_block_bounding_geometry` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_block_bounding_geometry k_textcustomeditor__plaintexteditor_super_block_bounding_geometry

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param block QTextBlock*
///
QRectF* k_textcustomeditor__plaintexteditor_super_block_bounding_geometry(void* self, void* block);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QRectF* func(TextCustomEditor__PlainTextEditor* self, QTextBlock* block)
///
void k_textcustomeditor__plaintexteditor_on_block_bounding_geometry(void* self, QRectF* (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QAbstractTextDocumentLayout__PaintContext* k_textcustomeditor__plaintexteditor_get_paint_context(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_get_paint_context` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_get_paint_context k_textcustomeditor__plaintexteditor_super_get_paint_context

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QAbstractTextDocumentLayout__PaintContext* k_textcustomeditor__plaintexteditor_super_get_paint_context(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QAbstractTextDocumentLayout__PaintContext* func()
///
void k_textcustomeditor__plaintexteditor_on_get_paint_context(void* self, QAbstractTextDocumentLayout__PaintContext* (*callback)());

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param range float
///
void k_textcustomeditor__plaintexteditor_zoom_in_f(void* self, float range);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_zoom_in_f` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_zoom_in_f k_textcustomeditor__plaintexteditor_super_zoom_in_f

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param range float
///
void k_textcustomeditor__plaintexteditor_super_zoom_in_f(void* self, float range);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, float range)
///
void k_textcustomeditor__plaintexteditor_on_zoom_in_f(void* self, void (*callback)(void*, float));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textcustomeditor__plaintexteditor_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_set_viewport_margins` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_set_viewport_margins k_textcustomeditor__plaintexteditor_super_set_viewport_margins

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textcustomeditor__plaintexteditor_super_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, int left, int top, int right, int bottom)
///
void k_textcustomeditor__plaintexteditor_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QMargins* k_textcustomeditor__plaintexteditor_viewport_margins(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_viewport_margins` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_viewport_margins k_textcustomeditor__plaintexteditor_super_viewport_margins

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QMargins* k_textcustomeditor__plaintexteditor_super_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QMargins* func()
///
void k_textcustomeditor__plaintexteditor_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPainter*
///
void k_textcustomeditor__plaintexteditor_draw_frame(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_draw_frame` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_draw_frame k_textcustomeditor__plaintexteditor_super_draw_frame

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param param1 QPainter*
///
void k_textcustomeditor__plaintexteditor_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, QPainter* param1)
///
void k_textcustomeditor__plaintexteditor_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_update_micro_focus` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_update_micro_focus k_textcustomeditor__plaintexteditor_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func()
///
void k_textcustomeditor__plaintexteditor_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_create(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_create` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_create k_textcustomeditor__plaintexteditor_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func()
///
void k_textcustomeditor__plaintexteditor_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_destroy(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_destroy` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_destroy k_textcustomeditor__plaintexteditor_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func()
///
void k_textcustomeditor__plaintexteditor_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_focus_next_child` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_focus_next_child k_textcustomeditor__plaintexteditor_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func()
///
void k_textcustomeditor__plaintexteditor_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_focus_previous_child` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_focus_previous_child k_textcustomeditor__plaintexteditor_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
bool k_textcustomeditor__plaintexteditor_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func()
///
void k_textcustomeditor__plaintexteditor_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QObject* k_textcustomeditor__plaintexteditor_sender(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_sender` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_sender k_textcustomeditor__plaintexteditor_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
QObject* k_textcustomeditor__plaintexteditor_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback QObject* func()
///
void k_textcustomeditor__plaintexteditor_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_sender_signal_index` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_sender_signal_index k_textcustomeditor__plaintexteditor_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
///
int32_t k_textcustomeditor__plaintexteditor_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback int32_t func()
///
void k_textcustomeditor__plaintexteditor_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal const char*
///
int32_t k_textcustomeditor__plaintexteditor_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_receivers` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_receivers k_textcustomeditor__plaintexteditor_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal const char*
///
int32_t k_textcustomeditor__plaintexteditor_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback int32_t func(TextCustomEditor__PlainTextEditor* self, const char* signal)
///
void k_textcustomeditor__plaintexteditor_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__plaintexteditor_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_is_signal_connected` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_is_signal_connected k_textcustomeditor__plaintexteditor_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__plaintexteditor_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback bool func(TextCustomEditor__PlainTextEditor* self, QMetaMethod* signal)
///
void k_textcustomeditor__plaintexteditor_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textcustomeditor__plaintexteditor_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_textcustomeditor__plaintexteditor_super_get_decoded_metric_f` instead
///
#define k_textcustomeditor__plaintexteditor_qbase_get_decoded_metric_f k_textcustomeditor__plaintexteditor_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textcustomeditor__plaintexteditor_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback double func(TextCustomEditor__PlainTextEditor* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_textcustomeditor__plaintexteditor_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextCustomEditor__PlainTextEditor*
/// @param callback void func(TextCustomEditor__PlainTextEditor* self, const char* objectName)
///
void k_textcustomeditor__plaintexteditor_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextCustomEditor__PlainTextEditor*
///
void k_textcustomeditor__plaintexteditor_delete(void* self);

typedef enum {
    TEXTCUSTOMEDITOR_PLAINTEXTEDITOR_SUPPORTFEATURE_NONE = 0,
    TEXTCUSTOMEDITOR_PLAINTEXTEDITOR_SUPPORTFEATURE_SEARCH = 1,
    TEXTCUSTOMEDITOR_PLAINTEXTEDITOR_SUPPORTFEATURE_SPELLCHECKING = 2,
    TEXTCUSTOMEDITOR_PLAINTEXTEDITOR_SUPPORTFEATURE_TEXTTOSPEECH = 4,
    TEXTCUSTOMEDITOR_PLAINTEXTEDITOR_SUPPORTFEATURE_ALLOWWEBSHORTCUT = 8,
    TEXTCUSTOMEDITOR_PLAINTEXTEDITOR_SUPPORTFEATURE_EMOJI = 16
} TextCustomEditor__PlainTextEditor__SupportFeature;

#endif
