#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGET_QT6C_LIBEMULATION_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGET_QT6C_LIBEMULATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// k_onsole__emulation_new constructs a new Konsole::Emulation object.
///
Konsole__Emulation* k_onsole__emulation_new();

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
const QMetaObject* k_onsole__emulation_meta_object(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback const QMetaObject* func()
///
void k_onsole__emulation_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
///
const QMetaObject* k_onsole__emulation_qbase_meta_object(void* self);

/// @param self Konsole__Emulation*
/// @param param1 const char*
///
void* k_onsole__emulation_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void* func(Konsole__Emulation* self, const char* param1)
///
void k_onsole__emulation_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param param1 const char*
///
void* k_onsole__emulation_qbase_metacast(void* self, const char* param1);

/// @param self Konsole__Emulation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_onsole__emulation_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback int32_t func(Konsole__Emulation* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_onsole__emulation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_onsole__emulation_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_onsole__emulation_tr(const char* s);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
QSize* k_onsole__emulation_image_size(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
int32_t k_onsole__emulation_line_count(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_clear_history(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
char k_onsole__emulation_erase_char(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback char func()
///
void k_onsole__emulation_on_erase_char(void* self, char (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
///
char k_onsole__emulation_qbase_erase_char(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param name const char*
///
void k_onsole__emulation_set_key_bindings(void* self, const char* name);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Konsole__Emulation*
///
const char* k_onsole__emulation_key_bindings(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_clear_entire_screen(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func()
///
void k_onsole__emulation_on_clear_entire_screen(void* self, void (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_qbase_clear_entire_screen(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_reset(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func()
///
void k_onsole__emulation_on_reset(void* self, void (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_qbase_reset(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
bool k_onsole__emulation_program_uses_mouse(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
bool k_onsole__emulation_program_bracketed_paste_mode(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param lines int
/// @param columns int
///
void k_onsole__emulation_set_image_size(void* self, int lines, int columns);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, int lines, int columns)
///
void k_onsole__emulation_on_set_image_size(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param lines int
/// @param columns int
///
void k_onsole__emulation_qbase_set_image_size(void* self, int lines, int columns);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param text const char*
///
void k_onsole__emulation_send_text(void* self, const char* text);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, const char* text)
///
void k_onsole__emulation_on_send_text(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param text const char*
///
void k_onsole__emulation_qbase_send_text(void* self, const char* text);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param param1 QKeyEvent*
/// @param fromPaste bool
///
void k_onsole__emulation_send_key_event(void* self, void* param1, bool fromPaste);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, QKeyEvent* param1, bool fromPaste)
///
void k_onsole__emulation_on_send_key_event(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param param1 QKeyEvent*
/// @param fromPaste bool
///
void k_onsole__emulation_qbase_send_key_event(void* self, void* param1, bool fromPaste);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param buttons int
/// @param column int
/// @param line int
/// @param eventType int
///
void k_onsole__emulation_send_mouse_event(void* self, int buttons, int column, int line, int eventType);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, int buttons, int column, int line, int eventType)
///
void k_onsole__emulation_on_send_mouse_event(void* self, void (*callback)(void*, int, int, int, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param buttons int
/// @param column int
/// @param line int
/// @param eventType int
///
void k_onsole__emulation_qbase_send_mouse_event(void* self, int buttons, int column, int line, int eventType);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param stringVal const char*
/// @param length int
///
void k_onsole__emulation_send_string(void* self, const char* stringVal, int length);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, const char* stringVal, int length)
///
void k_onsole__emulation_on_send_string(void* self, void (*callback)(void*, const char*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param stringVal const char*
/// @param length int
///
void k_onsole__emulation_qbase_send_string(void* self, const char* stringVal, int length);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param buffer const char*
/// @param lenVal int
///
void k_onsole__emulation_receive_data(void* self, const char* buffer, int lenVal);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param data const char*
/// @param lenVal int
///
void k_onsole__emulation_send_data(void* self, const char* data, int lenVal);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, const char* data, int lenVal)
///
void k_onsole__emulation_on_send_data(void* self, void (*callback)(void*, const char*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param suspendVal bool
///
void k_onsole__emulation_lock_pty_request(void* self, bool suspendVal);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, bool suspendVal)
///
void k_onsole__emulation_on_lock_pty_request(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param param1 bool
///
void k_onsole__emulation_use_utf8_request(void* self, bool param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, bool param1)
///
void k_onsole__emulation_on_use_utf8_request(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param state int
///
void k_onsole__emulation_state_set(void* self, int state);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, int state)
///
void k_onsole__emulation_on_state_set(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_zmodem_detected(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self)
///
void k_onsole__emulation_on_zmodem_detected(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param color int
///
void k_onsole__emulation_change_tab_text_color_request(void* self, int color);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, int color)
///
void k_onsole__emulation_on_change_tab_text_color_request(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param usesMouse bool
///
void k_onsole__emulation_program_uses_mouse_changed(void* self, bool usesMouse);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, bool usesMouse)
///
void k_onsole__emulation_on_program_uses_mouse_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param bracketedPasteMode bool
///
void k_onsole__emulation_program_bracketed_paste_mode_changed(void* self, bool bracketedPasteMode);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, bool bracketedPasteMode)
///
void k_onsole__emulation_on_program_bracketed_paste_mode_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_output_changed(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self)
///
void k_onsole__emulation_on_output_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param title int
/// @param newTitle const char*
///
void k_onsole__emulation_title_changed(void* self, int title, const char* newTitle);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, int title, const char* newTitle)
///
void k_onsole__emulation_on_title_changed(void* self, void (*callback)(void*, int, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param lineCount int
/// @param columnCount int
///
void k_onsole__emulation_image_size_changed(void* self, int lineCount, int columnCount);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, int lineCount, int columnCount)
///
void k_onsole__emulation_on_image_size_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_image_size_initialized(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self)
///
void k_onsole__emulation_on_image_size_initialized(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param sizz QSize*
///
void k_onsole__emulation_image_resize_request(void* self, void* sizz);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, QSize* sizz)
///
void k_onsole__emulation_on_image_resize_request(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param text const char*
///
void k_onsole__emulation_profile_change_command_received(void* self, const char* text);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, const char* text)
///
void k_onsole__emulation_on_profile_change_command_received(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param suspendKeyPressed bool
///
void k_onsole__emulation_flow_control_key_pressed(void* self, bool suspendKeyPressed);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, bool suspendKeyPressed)
///
void k_onsole__emulation_on_flow_control_key_pressed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param cursorShape enum Konsole__Emulation__KeyboardCursorShape
/// @param blinkingCursorEnabled bool
///
void k_onsole__emulation_cursor_changed(void* self, int32_t cursorShape, bool blinkingCursorEnabled);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, enum Konsole__Emulation__KeyboardCursorShape cursorShape, bool blinkingCursorEnabled)
///
void k_onsole__emulation_on_cursor_changed(void* self, void (*callback)(void*, int32_t, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param command enum Konsole__KeyboardTranslator__Command
///
void k_onsole__emulation_handle_command_from_keyboard(void* self, int32_t command);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, enum Konsole__KeyboardTranslator__Command command)
///
void k_onsole__emulation_on_handle_command_from_keyboard(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_output_from_keypress_event(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self)
///
void k_onsole__emulation_on_output_from_keypress_event(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param mode int
///
void k_onsole__emulation_set_mode(void* self, int mode);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, int mode)
///
void k_onsole__emulation_on_set_mode(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param mode int
///
void k_onsole__emulation_qbase_set_mode(void* self, int mode);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param mode int
///
void k_onsole__emulation_reset_mode(void* self, int mode);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, int mode)
///
void k_onsole__emulation_on_reset_mode(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param mode int
///
void k_onsole__emulation_qbase_reset_mode(void* self, int mode);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param index int
///
void k_onsole__emulation_set_screen(void* self, int index);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, int index)
///
void k_onsole__emulation_on_set_screen(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param index int
///
void k_onsole__emulation_qbase_set_screen(void* self, int index);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
/// @param codec enum Konsole__Emulation__EmulationCodec
///
void k_onsole__emulation_set_codec(void* self, int32_t codec);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, enum Konsole__Emulation__EmulationCodec codec)
///
void k_onsole__emulation_on_set_codec(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
/// @param codec enum Konsole__Emulation__EmulationCodec
///
void k_onsole__emulation_qbase_set_codec(void* self, int32_t codec);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_buffered_update(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self Konsole__Emulation*
/// @param callback void func()
///
void k_onsole__emulation_on_buffered_update(void* self, void (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_qbase_buffered_update(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_onsole__emulation_tr2(const char* s, const char* c);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_onsole__emulation_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Konsole__Emulation*
///
const char* k_onsole__emulation_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Konsole__Emulation*
/// @param name const char*
///
void k_onsole__emulation_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Konsole__Emulation*
///
bool k_onsole__emulation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Konsole__Emulation*
///
bool k_onsole__emulation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Konsole__Emulation*
///
bool k_onsole__emulation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Konsole__Emulation*
///
bool k_onsole__emulation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Konsole__Emulation*
/// @param b bool
///
bool k_onsole__emulation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Konsole__Emulation*
///
QThread* k_onsole__emulation_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Konsole__Emulation*
/// @param thread QThread*
///
bool k_onsole__emulation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__Emulation*
/// @param interval int
///
int32_t k_onsole__emulation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__Emulation*
/// @param time int64_t of nanoseconds
///
int32_t k_onsole__emulation_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Konsole__Emulation*
/// @param id int
///
void k_onsole__emulation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Konsole__Emulation*
/// @param id enum Qt__TimerId
///
void k_onsole__emulation_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Konsole__Emulation*
///
/// @return libqt_list of QObject*
///
libqt_list k_onsole__emulation_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Konsole__Emulation*
/// @param parent QObject*
///
void k_onsole__emulation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Konsole__Emulation*
/// @param filterObj QObject*
///
void k_onsole__emulation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Konsole__Emulation*
/// @param obj QObject*
///
void k_onsole__emulation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_onsole__emulation_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_onsole__emulation_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Konsole__Emulation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_onsole__emulation_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_onsole__emulation_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_onsole__emulation_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Konsole__Emulation*
///
bool k_onsole__emulation_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Konsole__Emulation*
/// @param receiver QObject*
///
bool k_onsole__emulation_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_onsole__emulation_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Konsole__Emulation*
/// @param name const char*
/// @param value QVariant*
///
bool k_onsole__emulation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Konsole__Emulation*
/// @param name const char*
///
QVariant* k_onsole__emulation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Konsole__Emulation*
///
const char** k_onsole__emulation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Konsole__Emulation*
///
QBindingStorage* k_onsole__emulation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Konsole__Emulation*
///
const QBindingStorage* k_onsole__emulation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self)
///
void k_onsole__emulation_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Konsole__Emulation*
///
QObject* k_onsole__emulation_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Konsole__Emulation*
/// @param classname const char*
///
bool k_onsole__emulation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__Emulation*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_onsole__emulation_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Konsole__Emulation*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_onsole__emulation_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_onsole__emulation_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_onsole__emulation_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Konsole__Emulation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_onsole__emulation_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Konsole__Emulation*
/// @param signal const char*
///
bool k_onsole__emulation_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Konsole__Emulation*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_onsole__emulation_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Konsole__Emulation*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_onsole__emulation_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Konsole__Emulation*
/// @param receiver QObject*
/// @param member const char*
///
bool k_onsole__emulation_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__Emulation*
/// @param param1 QObject*
///
void k_onsole__emulation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, QObject* param1)
///
void k_onsole__emulation_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param event QEvent*
///
bool k_onsole__emulation_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param event QEvent*
///
bool k_onsole__emulation_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback bool func(Konsole__Emulation* self, QEvent* event)
///
void k_onsole__emulation_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_onsole__emulation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_onsole__emulation_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback bool func(Konsole__Emulation* self, QObject* watched, QEvent* event)
///
void k_onsole__emulation_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param event QTimerEvent*
///
void k_onsole__emulation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param event QTimerEvent*
///
void k_onsole__emulation_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, QTimerEvent* event)
///
void k_onsole__emulation_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param event QChildEvent*
///
void k_onsole__emulation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param event QChildEvent*
///
void k_onsole__emulation_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, QChildEvent* event)
///
void k_onsole__emulation_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param event QEvent*
///
void k_onsole__emulation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param event QEvent*
///
void k_onsole__emulation_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, QEvent* event)
///
void k_onsole__emulation_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param signal QMetaMethod*
///
void k_onsole__emulation_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param signal QMetaMethod*
///
void k_onsole__emulation_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, QMetaMethod* signal)
///
void k_onsole__emulation_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param signal QMetaMethod*
///
void k_onsole__emulation_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param signal QMetaMethod*
///
void k_onsole__emulation_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, QMetaMethod* signal)
///
void k_onsole__emulation_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
///
QObject* k_onsole__emulation_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
///
QObject* k_onsole__emulation_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback QObject* func()
///
void k_onsole__emulation_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
///
int32_t k_onsole__emulation_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
///
int32_t k_onsole__emulation_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback int32_t func()
///
void k_onsole__emulation_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param signal const char*
///
int32_t k_onsole__emulation_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param signal const char*
///
int32_t k_onsole__emulation_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback int32_t func(Konsole__Emulation* self, const char* signal)
///
void k_onsole__emulation_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param signal QMetaMethod*
///
bool k_onsole__emulation_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param signal QMetaMethod*
///
bool k_onsole__emulation_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Konsole__Emulation*
/// @param callback bool func(Konsole__Emulation* self, QMetaMethod* signal)
///
void k_onsole__emulation_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Konsole__Emulation*
/// @param callback void func(Konsole__Emulation* self, const char* objectName)
///
void k_onsole__emulation_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Konsole__Emulation*
///
void k_onsole__emulation_delete(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

typedef enum {
    KONSOLE__NOTIFYNORMAL = 0,
    KONSOLE__NOTIFYBELL = 1,
    KONSOLE__NOTIFYACTIVITY = 2,
    KONSOLE__NOTIFYSILENCE = 3
} Konsole__;

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

typedef enum {
    KONSOLE_EMULATION_KEYBOARDCURSORSHAPE_BLOCKCURSOR = 0,
    KONSOLE_EMULATION_KEYBOARDCURSORSHAPE_UNDERLINECURSOR = 1,
    KONSOLE_EMULATION_KEYBOARDCURSORSHAPE_IBEAMCURSOR = 2
} Konsole__Emulation__KeyboardCursorShape;

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

typedef enum {
    KONSOLE_EMULATION_EMULATIONCODEC_LOCALECODEC = 0,
    KONSOLE_EMULATION_EMULATIONCODEC_UTF8CODEC = 1
} Konsole__Emulation__EmulationCodec;

#endif
