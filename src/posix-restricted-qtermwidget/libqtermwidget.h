#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGET_QT6C_LIBQTERMWIDGET_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGET_QT6C_LIBQTERMWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// q_termwidget_new constructs a new QTermWidget object.
///
/// @param parent QWidget*
///
QTermWidget* q_termwidget_new(void* parent);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// q_termwidget_new2 constructs a new QTermWidget object.
///
/// @param startnow int
///
QTermWidget* q_termwidget_new2(int startnow);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// q_termwidget_new3 constructs a new QTermWidget object.
///
QTermWidget* q_termwidget_new3();

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)

/// q_termwidget_new4 constructs a new QTermWidget object.
///
/// @param startnow int
/// @param parent QWidget*
///
QTermWidget* q_termwidget_new4(int startnow, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTermWidget*
///
const QMetaObject* q_termwidget_meta_object(void* self);

/// @param self QTermWidget*
/// @param param1 const char*
///
void* q_termwidget_metacast(void* self, const char* param1);

/// @param self QTermWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_termwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback int32_t func(QTermWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_termwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTermWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_termwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_termwidget_tr(const char* s);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
QSize* q_termwidget_size_hint(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback QSize* func()
///
void q_termwidget_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
QSize* q_termwidget_qbase_size_hint(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param enabled bool
///
void q_termwidget_set_terminal_size_hint(void* self, bool enabled);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool enabled)
///
void q_termwidget_on_set_terminal_size_hint(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param enabled bool
///
void q_termwidget_qbase_set_terminal_size_hint(void* self, bool enabled);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
bool q_termwidget_terminal_size_hint(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback bool func()
///
void q_termwidget_on_terminal_size_hint(void* self, bool (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
bool q_termwidget_qbase_terminal_size_hint(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_start_shell_program(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func()
///
void q_termwidget_on_start_shell_program(void* self, void (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
void q_termwidget_qbase_start_shell_program(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_start_terminal_teletype(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func()
///
void q_termwidget_on_start_terminal_teletype(void* self, void (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
void q_termwidget_qbase_start_terminal_teletype(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_get_shell_p_i_d(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback int32_t func()
///
void q_termwidget_on_get_shell_p_i_d(void* self, int32_t (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
int32_t q_termwidget_qbase_get_shell_p_i_d(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_get_foreground_process_id(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback int32_t func()
///
void q_termwidget_on_get_foreground_process_id(void* self, int32_t (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
int32_t q_termwidget_qbase_get_foreground_process_id(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param dir const char*
///
void q_termwidget_change_dir(void* self, const char* dir);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* dir)
///
void q_termwidget_on_change_dir(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param dir const char*
///
void q_termwidget_qbase_change_dir(void* self, const char* dir);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param font QFont*
///
void q_termwidget_set_terminal_font(void* self, void* font);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QFont* font)
///
void q_termwidget_on_set_terminal_font(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param font QFont*
///
void q_termwidget_qbase_set_terminal_font(void* self, void* font);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
QFont* q_termwidget_get_terminal_font(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback QFont* func()
///
void q_termwidget_on_get_terminal_font(void* self, QFont* (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
QFont* q_termwidget_qbase_get_terminal_font(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param level double
///
void q_termwidget_set_terminal_opacity(void* self, double level);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, double level)
///
void q_termwidget_on_set_terminal_opacity(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param level double
///
void q_termwidget_qbase_set_terminal_opacity(void* self, double level);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param backgroundImage const char*
///
void q_termwidget_set_terminal_background_image(void* self, const char* backgroundImage);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* backgroundImage)
///
void q_termwidget_on_set_terminal_background_image(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param backgroundImage const char*
///
void q_termwidget_qbase_set_terminal_background_image(void* self, const char* backgroundImage);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param mode int
///
void q_termwidget_set_terminal_background_mode(void* self, int mode);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, int mode)
///
void q_termwidget_on_set_terminal_background_mode(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param mode int
///
void q_termwidget_qbase_set_terminal_background_mode(void* self, int mode);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param environment const char**
///
void q_termwidget_set_environment(void* self, const char* environment[static 1]);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char** environment)
///
void q_termwidget_on_set_environment(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param environment const char**
///
void q_termwidget_qbase_set_environment(void* self, const char* environment[static 1]);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param program const char*
///
void q_termwidget_set_shell_program(void* self, const char* program);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* program)
///
void q_termwidget_on_set_shell_program(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param program const char*
///
void q_termwidget_qbase_set_shell_program(void* self, const char* program);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param dir const char*
///
void q_termwidget_set_working_directory(void* self, const char* dir);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* dir)
///
void q_termwidget_on_set_working_directory(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param dir const char*
///
void q_termwidget_qbase_set_working_directory(void* self, const char* dir);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_working_directory(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback const char* func()
///
void q_termwidget_on_working_directory(void* self, const char* (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
const char* q_termwidget_qbase_working_directory(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param args const char**
///
void q_termwidget_set_args(void* self, const char* args[static 1]);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char** args)
///
void q_termwidget_on_set_args(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param args const char**
///
void q_termwidget_qbase_set_args(void* self, const char* args[static 1]);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param name const char*
///
void q_termwidget_set_color_scheme(void* self, const char* name);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* name)
///
void q_termwidget_on_set_color_scheme(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param name const char*
///
void q_termwidget_qbase_set_color_scheme(void* self, const char* name);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTermWidget*
///
const char** q_termwidget_get_available_color_schemes(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback const char** func()
///
void q_termwidget_on_get_available_color_schemes(void* self, const char** (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
const char** q_termwidget_qbase_get_available_color_schemes(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_termwidget_available_color_schemes();

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param custom_dir const char*
///
void q_termwidget_add_custom_color_scheme_dir(const char* custom_dir);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param lines int
///
void q_termwidget_set_history_size(void* self, int lines);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, int lines)
///
void q_termwidget_on_set_history_size(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param lines int
///
void q_termwidget_qbase_set_history_size(void* self, int lines);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_history_size(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback int32_t func()
///
void q_termwidget_on_history_size(void* self, int32_t (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
int32_t q_termwidget_qbase_history_size(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param scrollBarPosition enum QTermWidgetInterface__ScrollBarPosition
///
void q_termwidget_set_scroll_bar_position(void* self, int32_t scrollBarPosition);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, enum QTermWidgetInterface__ScrollBarPosition scrollBarPosition)
///
void q_termwidget_on_set_scroll_bar_position(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param scrollBarPosition enum QTermWidgetInterface__ScrollBarPosition
///
void q_termwidget_qbase_set_scroll_bar_position(void* self, int32_t scrollBarPosition);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_scroll_to_end(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func()
///
void q_termwidget_on_scroll_to_end(void* self, void (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
void q_termwidget_qbase_scroll_to_end(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param text const char*
///
void q_termwidget_send_text(void* self, const char* text);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* text)
///
void q_termwidget_on_send_text(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param text const char*
///
void q_termwidget_qbase_send_text(void* self, const char* text);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param e QKeyEvent*
///
void q_termwidget_send_key_event(void* self, void* e);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QKeyEvent* e)
///
void q_termwidget_on_send_key_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param e QKeyEvent*
///
void q_termwidget_qbase_send_key_event(void* self, void* e);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param enabled bool
///
void q_termwidget_set_flow_control_enabled(void* self, bool enabled);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool enabled)
///
void q_termwidget_on_set_flow_control_enabled(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param enabled bool
///
void q_termwidget_qbase_set_flow_control_enabled(void* self, bool enabled);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
bool q_termwidget_flow_control_enabled(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback bool func()
///
void q_termwidget_on_flow_control_enabled(void* self, bool (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
bool q_termwidget_qbase_flow_control_enabled(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param enabled bool
///
void q_termwidget_set_flow_control_warning_enabled(void* self, bool enabled);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool enabled)
///
void q_termwidget_on_set_flow_control_warning_enabled(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param enabled bool
///
void q_termwidget_qbase_set_flow_control_warning_enabled(void* self, bool enabled);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_termwidget_available_key_bindings();

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_key_bindings(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback const char* func()
///
void q_termwidget_on_key_bindings(void* self, const char* (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
const char* q_termwidget_qbase_key_bindings(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param motionAfterPasting int
///
void q_termwidget_set_motion_after_pasting(void* self, int motionAfterPasting);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, int motionAfterPasting)
///
void q_termwidget_on_set_motion_after_pasting(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param motionAfterPasting int
///
void q_termwidget_qbase_set_motion_after_pasting(void* self, int motionAfterPasting);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_history_lines_count(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback int32_t func()
///
void q_termwidget_on_history_lines_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
int32_t q_termwidget_qbase_history_lines_count(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_screen_columns_count(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback int32_t func()
///
void q_termwidget_on_screen_columns_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
int32_t q_termwidget_qbase_screen_columns_count(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_screen_lines_count(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback int32_t func()
///
void q_termwidget_on_screen_lines_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
int32_t q_termwidget_qbase_screen_lines_count(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param row int
/// @param column int
///
void q_termwidget_set_selection_start(void* self, int row, int column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, int row, int column)
///
void q_termwidget_on_set_selection_start(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param row int
/// @param column int
///
void q_termwidget_qbase_set_selection_start(void* self, int row, int column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param row int
/// @param column int
///
void q_termwidget_set_selection_end(void* self, int row, int column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, int row, int column)
///
void q_termwidget_on_set_selection_end(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param row int
/// @param column int
///
void q_termwidget_qbase_set_selection_end(void* self, int row, int column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param row int*
/// @param column int*
///
void q_termwidget_get_selection_start(void* self, int* row, int* column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, int* row, int* column)
///
void q_termwidget_on_get_selection_start(void* self, void (*callback)(void*, int*, int*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param row int*
/// @param column int*
///
void q_termwidget_qbase_get_selection_start(void* self, int* row, int* column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param row int*
/// @param column int*
///
void q_termwidget_get_selection_end(void* self, int* row, int* column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, int* row, int* column)
///
void q_termwidget_on_get_selection_end(void* self, void (*callback)(void*, int*, int*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param row int*
/// @param column int*
///
void q_termwidget_qbase_get_selection_end(void* self, int* row, int* column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
/// @param preserveLineBreaks bool
///
const char* q_termwidget_selected_text(void* self, bool preserveLineBreaks);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback const char* func(QTermWidget* self, bool preserveLineBreaks)
///
void q_termwidget_on_selected_text(void* self, const char* (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param preserveLineBreaks bool
///
const char* q_termwidget_qbase_selected_text(void* self, bool preserveLineBreaks);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param monitorActivity bool
///
void q_termwidget_set_monitor_activity(void* self, bool monitorActivity);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool monitorActivity)
///
void q_termwidget_on_set_monitor_activity(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param monitorActivity bool
///
void q_termwidget_qbase_set_monitor_activity(void* self, bool monitorActivity);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param monitorSilence bool
///
void q_termwidget_set_monitor_silence(void* self, bool monitorSilence);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool monitorSilence)
///
void q_termwidget_on_set_monitor_silence(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param monitorSilence bool
///
void q_termwidget_qbase_set_monitor_silence(void* self, bool monitorSilence);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param seconds int
///
void q_termwidget_set_silence_timeout(void* self, int seconds);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, int seconds)
///
void q_termwidget_on_set_silence_timeout(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param seconds int
///
void q_termwidget_qbase_set_silence_timeout(void* self, int seconds);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param pos QPoint*
///
Konsole__Filter__HotSpot* q_termwidget_get_hot_spot_at(void* self, void* pos);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param row int
/// @param column int
///
Konsole__Filter__HotSpot* q_termwidget_get_hot_spot_at2(void* self, int row, int column);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param position QPoint*
///
/// @return libqt_list of QAction*
///
libqt_list q_termwidget_filter_actions(void* self, void* position);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback QAction** func(QTermWidget* self, QPoint* position)
///
void q_termwidget_on_filter_actions(void* self, QAction** (*callback)(void*, void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param position QPoint*
///
/// @return libqt_list of QAction*
///
libqt_list q_termwidget_qbase_filter_actions(void* self, void* position);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_get_pty_slave_fd(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback int32_t func()
///
void q_termwidget_on_get_pty_slave_fd(void* self, int32_t (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
int32_t q_termwidget_qbase_get_pty_slave_fd(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param shape enum Konsole__Emulation__KeyboardCursorShape
///
void q_termwidget_set_keyboard_cursor_shape(void* self, int32_t shape);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param blink bool
///
void q_termwidget_set_blinking_cursor(void* self, bool blink);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool blink)
///
void q_termwidget_on_set_blinking_cursor(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param blink bool
///
void q_termwidget_qbase_set_blinking_cursor(void* self, bool blink);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param enabled bool
///
void q_termwidget_set_bidi_enabled(void* self, bool enabled);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool enabled)
///
void q_termwidget_on_set_bidi_enabled(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param enabled bool
///
void q_termwidget_qbase_set_bidi_enabled(void* self, bool enabled);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_bidi_enabled(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback bool func()
///
void q_termwidget_on_is_bidi_enabled(void* self, bool (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
bool q_termwidget_qbase_is_bidi_enabled(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param autoClose bool
///
void q_termwidget_set_auto_close(void* self, bool autoClose);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool autoClose)
///
void q_termwidget_on_set_auto_close(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param autoClose bool
///
void q_termwidget_qbase_set_auto_close(void* self, bool autoClose);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_title(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback const char* func()
///
void q_termwidget_on_title(void* self, const char* (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
const char* q_termwidget_qbase_title(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_icon(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback const char* func()
///
void q_termwidget_on_icon(void* self, const char* (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
const char* q_termwidget_qbase_icon(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_title_changed(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback bool func()
///
void q_termwidget_on_is_title_changed(void* self, bool (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
bool q_termwidget_qbase_is_title_changed(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param text const char*
///
void q_termwidget_bracket_text(void* self, const char* text);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* text)
///
void q_termwidget_on_bracket_text(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param text const char*
///
void q_termwidget_qbase_bracket_text(void* self, const char* text);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param disable bool
///
void q_termwidget_disable_bracketed_paste_mode(void* self, bool disable);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool disable)
///
void q_termwidget_on_disable_bracketed_paste_mode(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param disable bool
///
void q_termwidget_qbase_disable_bracketed_paste_mode(void* self, bool disable);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
bool q_termwidget_bracketed_paste_mode_is_disabled(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback bool func()
///
void q_termwidget_on_bracketed_paste_mode_is_disabled(void* self, bool (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
bool q_termwidget_qbase_bracketed_paste_mode_is_disabled(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param margin int
///
void q_termwidget_set_margin(void* self, int margin);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, int margin)
///
void q_termwidget_on_set_margin(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param margin int
///
void q_termwidget_qbase_set_margin(void* self, int margin);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_get_margin(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback int32_t func()
///
void q_termwidget_on_get_margin(void* self, int32_t (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
int32_t q_termwidget_qbase_get_margin(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param drawLineChars bool
///
void q_termwidget_set_draw_line_chars(void* self, bool drawLineChars);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool drawLineChars)
///
void q_termwidget_on_set_draw_line_chars(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param drawLineChars bool
///
void q_termwidget_qbase_set_draw_line_chars(void* self, bool drawLineChars);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param boldIntense bool
///
void q_termwidget_set_bold_intense(void* self, bool boldIntense);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool boldIntense)
///
void q_termwidget_on_set_bold_intense(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param boldIntense bool
///
void q_termwidget_qbase_set_bold_intense(void* self, bool boldIntense);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param confirmMultilinePaste bool
///
void q_termwidget_set_confirm_multiline_paste(void* self, bool confirmMultilinePaste);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool confirmMultilinePaste)
///
void q_termwidget_on_set_confirm_multiline_paste(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param confirmMultilinePaste bool
///
void q_termwidget_qbase_set_confirm_multiline_paste(void* self, bool confirmMultilinePaste);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param trimPastedTrailingNewlines bool
///
void q_termwidget_set_trim_pasted_trailing_newlines(void* self, bool trimPastedTrailingNewlines);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool trimPastedTrailingNewlines)
///
void q_termwidget_on_set_trim_pasted_trailing_newlines(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param trimPastedTrailingNewlines bool
///
void q_termwidget_qbase_set_trim_pasted_trailing_newlines(void* self, bool trimPastedTrailingNewlines);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_word_characters(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback const char* func()
///
void q_termwidget_on_word_characters(void* self, const char* (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
const char* q_termwidget_qbase_word_characters(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param chars const char*
///
void q_termwidget_set_word_characters(void* self, const char* chars);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* chars)
///
void q_termwidget_on_set_word_characters(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param chars const char*
///
void q_termwidget_qbase_set_word_characters(void* self, const char* chars);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param startnow int
///
QTermWidgetInterface* q_termwidget_create_widget(void* self, int startnow);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback QTermWidgetInterface* func(QTermWidget* self, int startnow)
///
void q_termwidget_on_create_widget(void* self, QTermWidgetInterface* (*callback)(void*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param startnow int
///
QTermWidgetInterface* q_termwidget_qbase_create_widget(void* self, int startnow);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_finished(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self)
///
void q_termwidget_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param param1 bool
///
void q_termwidget_copy_available(void* self, bool param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool param1)
///
void q_termwidget_on_copy_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_term_get_focus(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self)
///
void q_termwidget_on_term_get_focus(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_term_lost_focus(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self)
///
void q_termwidget_on_term_lost_focus(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param param1 QKeyEvent*
///
void q_termwidget_term_key_pressed(void* self, void* param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QKeyEvent* param1)
///
void q_termwidget_on_term_key_pressed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param param1 QUrl*
/// @param fromContextMenu bool
///
void q_termwidget_url_activated(void* self, void* param1, bool fromContextMenu);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QUrl* param1, bool fromContextMenu)
///
void q_termwidget_on_url_activated(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param message const char*
///
void q_termwidget_bell(void* self, const char* message);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* message)
///
void q_termwidget_on_bell(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_activity(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self)
///
void q_termwidget_on_activity(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_silence(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self)
///
void q_termwidget_on_silence(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param param1 const char*
/// @param param2 int
///
void q_termwidget_send_data(void* self, const char* param1, int param2);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* param1, int param2)
///
void q_termwidget_on_send_data(void* self, void (*callback)(void*, const char*, int));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param profile const char*
///
void q_termwidget_profile_changed(void* self, const char* profile);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* profile)
///
void q_termwidget_on_profile_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_title_changed(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self)
///
void q_termwidget_on_title_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param text const char*
///
void q_termwidget_received_data(void* self, const char* text);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* text)
///
void q_termwidget_on_received_data(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_copy_clipboard(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_paste_clipboard(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_paste_selection(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_zoom_in(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_zoom_out(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param size QSize*
///
void q_termwidget_set_size(void* self, void* size);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param kb const char*
///
void q_termwidget_set_key_bindings(void* self, const char* kb);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_clear(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_toggle_show_search_bar(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param device QIODevice*
///
void q_termwidget_save_history(void* self, void* device);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param param1 QResizeEvent*
///
void q_termwidget_resize_event(void* self, void* param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QResizeEvent* param1)
///
void q_termwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param param1 QResizeEvent*
///
void q_termwidget_qbase_resize_event(void* self, void* param1);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
///
void q_termwidget_session_finished(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func()
///
void q_termwidget_on_session_finished(void* self, void (*callback)());

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
///
void q_termwidget_qbase_session_finished(void* self);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param textSelected bool
///
void q_termwidget_selection_changed(void* self, bool textSelected);

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Allows for overriding the related default method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool textSelected)
///
void q_termwidget_on_selection_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Base class method implementation
///
/// @param self QTermWidget*
/// @param textSelected bool
///
void q_termwidget_qbase_selection_changed(void* self, bool textSelected);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_termwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_termwidget_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QTermWidget*
///
uintptr_t q_termwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QTermWidget*
///
void q_termwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QTermWidget*
///
uintptr_t q_termwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QTermWidget*
///
uintptr_t q_termwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QTermWidget*
///
QStyle* q_termwidget_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QTermWidget*
/// @param style QStyle*
///
void q_termwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QTermWidget*
///
/// @return enum Qt__WindowModality
///
int32_t q_termwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QTermWidget*
/// @param windowModality enum Qt__WindowModality
///
void q_termwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QTermWidget*
/// @param param1 QWidget*
///
bool q_termwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QTermWidget*
/// @param enabled bool
///
void q_termwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QTermWidget*
/// @param disabled bool
///
void q_termwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QTermWidget*
/// @param windowModified bool
///
void q_termwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QTermWidget*
///
QRect* q_termwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QTermWidget*
///
const QRect* q_termwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QTermWidget*
///
QRect* q_termwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QTermWidget*
///
QPoint* q_termwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QTermWidget*
///
QSize* q_termwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QTermWidget*
///
QSize* q_termwidget_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QTermWidget*
///
QRect* q_termwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QTermWidget*
///
QRect* q_termwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QTermWidget*
///
QRegion* q_termwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QTermWidget*
///
QSize* q_termwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QTermWidget*
///
QSize* q_termwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTermWidget*
/// @param minimumSize QSize*
///
void q_termwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTermWidget*
/// @param minw int
/// @param minh int
///
void q_termwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTermWidget*
/// @param maximumSize QSize*
///
void q_termwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTermWidget*
/// @param maxw int
/// @param maxh int
///
void q_termwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QTermWidget*
/// @param minw int
///
void q_termwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QTermWidget*
/// @param minh int
///
void q_termwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QTermWidget*
/// @param maxw int
///
void q_termwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QTermWidget*
/// @param maxh int
///
void q_termwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QTermWidget*
///
QSize* q_termwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTermWidget*
/// @param sizeIncrement QSize*
///
void q_termwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTermWidget*
/// @param w int
/// @param h int
///
void q_termwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QTermWidget*
///
QSize* q_termwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTermWidget*
/// @param baseSize QSize*
///
void q_termwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTermWidget*
/// @param basew int
/// @param baseh int
///
void q_termwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTermWidget*
/// @param fixedSize QSize*
///
void q_termwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTermWidget*
/// @param w int
/// @param h int
///
void q_termwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QTermWidget*
/// @param w int
///
void q_termwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QTermWidget*
/// @param h int
///
void q_termwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTermWidget*
/// @param param1 QPointF*
///
QPointF* q_termwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTermWidget*
/// @param param1 QPoint*
///
QPoint* q_termwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTermWidget*
/// @param param1 QPointF*
///
QPointF* q_termwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTermWidget*
/// @param param1 QPoint*
///
QPoint* q_termwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTermWidget*
/// @param param1 QPointF*
///
QPointF* q_termwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTermWidget*
/// @param param1 QPoint*
///
QPoint* q_termwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTermWidget*
/// @param param1 QPointF*
///
QPointF* q_termwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTermWidget*
/// @param param1 QPoint*
///
QPoint* q_termwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTermWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_termwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTermWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_termwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTermWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_termwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTermWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_termwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QTermWidget*
///
QWidget* q_termwidget_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QTermWidget*
///
QWidget* q_termwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QTermWidget*
///
QWidget* q_termwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QTermWidget*
///
const QPalette* q_termwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QTermWidget*
/// @param palette QPalette*
///
void q_termwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QTermWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_termwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QTermWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t q_termwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QTermWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_termwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QTermWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t q_termwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QTermWidget*
///
const QFont* q_termwidget_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QTermWidget*
/// @param font QFont*
///
void q_termwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QTermWidget*
///
QFontMetrics* q_termwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QTermWidget*
///
QFontInfo* q_termwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QTermWidget*
///
QCursor* q_termwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QTermWidget*
/// @param cursor QCursor*
///
void q_termwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QTermWidget*
///
void q_termwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QTermWidget*
/// @param enable bool
///
void q_termwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QTermWidget*
///
bool q_termwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QTermWidget*
///
bool q_termwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QTermWidget*
/// @param enable bool
///
void q_termwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QTermWidget*
///
bool q_termwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTermWidget*
/// @param mask QBitmap*
///
void q_termwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTermWidget*
/// @param mask QRegion*
///
void q_termwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QTermWidget*
///
QRegion* q_termwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QTermWidget*
///
void q_termwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTermWidget*
/// @param target QPaintDevice*
///
void q_termwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTermWidget*
/// @param painter QPainter*
///
void q_termwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTermWidget*
///
QPixmap* q_termwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QTermWidget*
///
QGraphicsEffect* q_termwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QTermWidget*
/// @param effect QGraphicsEffect*
///
void q_termwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTermWidget*
/// @param type enum Qt__GestureType
///
void q_termwidget_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QTermWidget*
/// @param type enum Qt__GestureType
///
void q_termwidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QTermWidget*
/// @param windowTitle const char*
///
void q_termwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QTermWidget*
/// @param styleSheet const char*
///
void q_termwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QTermWidget*
/// @param icon QIcon*
///
void q_termwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QTermWidget*
///
QIcon* q_termwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QTermWidget*
/// @param windowIconText const char*
///
void q_termwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QTermWidget*
/// @param windowRole const char*
///
void q_termwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QTermWidget*
/// @param filePath const char*
///
void q_termwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QTermWidget*
/// @param level double
///
void q_termwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QTermWidget*
///
double q_termwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QTermWidget*
/// @param toolTip const char*
///
void q_termwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QTermWidget*
/// @param msec int
///
void q_termwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QTermWidget*
/// @param statusTip const char*
///
void q_termwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QTermWidget*
/// @param whatsThis const char*
///
void q_termwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QTermWidget*
/// @param name const char*
///
void q_termwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QTermWidget*
/// @param description const char*
///
void q_termwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QTermWidget*
/// @param direction enum Qt__LayoutDirection
///
void q_termwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QTermWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_termwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QTermWidget*
///
void q_termwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QTermWidget*
/// @param locale QLocale*
///
void q_termwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QTermWidget*
///
QLocale* q_termwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QTermWidget*
///
void q_termwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTermWidget*
///
void q_termwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QTermWidget*
///
void q_termwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QTermWidget*
///
void q_termwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTermWidget*
/// @param reason enum Qt__FocusReason
///
void q_termwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QTermWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_termwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QTermWidget*
/// @param policy enum Qt__FocusPolicy
///
void q_termwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QTermWidget*
///
bool q_termwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_termwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QTermWidget*
/// @param focusProxy QWidget*
///
void q_termwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QTermWidget*
///
QWidget* q_termwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QTermWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_termwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QTermWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_termwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTermWidget*
///
void q_termwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTermWidget*
/// @param param1 QCursor*
///
void q_termwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QTermWidget*
///
void q_termwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QTermWidget*
///
void q_termwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QTermWidget*
///
void q_termwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTermWidget*
/// @param key QKeySequence*
///
int32_t q_termwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QTermWidget*
/// @param id int
///
void q_termwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTermWidget*
/// @param id int
///
void q_termwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTermWidget*
/// @param id int
///
void q_termwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_termwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_termwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QTermWidget*
///
bool q_termwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QTermWidget*
/// @param enable bool
///
void q_termwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QTermWidget*
///
QGraphicsProxyWidget* q_termwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTermWidget*
///
void q_termwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTermWidget*
///
void q_termwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTermWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_termwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTermWidget*
/// @param param1 QRect*
///
void q_termwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTermWidget*
/// @param param1 QRegion*
///
void q_termwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTermWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_termwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTermWidget*
/// @param param1 QRect*
///
void q_termwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTermWidget*
/// @param param1 QRegion*
///
void q_termwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QTermWidget*
/// @param hidden bool
///
void q_termwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QTermWidget*
///
void q_termwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QTermWidget*
///
void q_termwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QTermWidget*
///
void q_termwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QTermWidget*
///
void q_termwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QTermWidget*
///
void q_termwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QTermWidget*
///
void q_termwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QTermWidget*
///
bool q_termwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QTermWidget*
///
void q_termwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QTermWidget*
///
void q_termwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QTermWidget*
/// @param param1 QWidget*
///
void q_termwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTermWidget*
/// @param x int
/// @param y int
///
void q_termwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTermWidget*
/// @param param1 QPoint*
///
void q_termwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTermWidget*
/// @param w int
/// @param h int
///
void q_termwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTermWidget*
/// @param param1 QSize*
///
void q_termwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTermWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_termwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTermWidget*
/// @param geometry QRect*
///
void q_termwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTermWidget*
///
char* q_termwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QTermWidget*
/// @param geometry const char*
///
bool q_termwidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QTermWidget*
///
void q_termwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QTermWidget*
/// @param param1 QWidget*
///
bool q_termwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QTermWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_termwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QTermWidget*
/// @param state flag of enum Qt__WindowState
///
void q_termwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QTermWidget*
/// @param state flag of enum Qt__WindowState
///
void q_termwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QTermWidget*
///
QSizePolicy* q_termwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTermWidget*
/// @param sizePolicy QSizePolicy*
///
void q_termwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTermWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_termwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QTermWidget*
///
QRegion* q_termwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTermWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_termwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTermWidget*
/// @param margins QMargins*
///
void q_termwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QTermWidget*
///
QMargins* q_termwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QTermWidget*
///
QRect* q_termwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QTermWidget*
///
QLayout* q_termwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QTermWidget*
/// @param layout QLayout*
///
void q_termwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QTermWidget*
///
void q_termwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTermWidget*
/// @param parent QWidget*
///
void q_termwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTermWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_termwidget_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTermWidget*
/// @param dx int
/// @param dy int
///
void q_termwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTermWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_termwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QTermWidget*
///
QWidget* q_termwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QTermWidget*
///
QWidget* q_termwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QTermWidget*
///
QWidget* q_termwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QTermWidget*
///
bool q_termwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QTermWidget*
/// @param on bool
///
void q_termwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTermWidget*
/// @param action QAction*
///
void q_termwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QTermWidget*
/// @param actions libqt_list of QAction*
///
void q_termwidget_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QTermWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_termwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QTermWidget*
/// @param before QAction*
/// @param action QAction*
///
void q_termwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QTermWidget*
/// @param action QAction*
///
void q_termwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QTermWidget*
///
/// @return libqt_list of QAction*
///
libqt_list q_termwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTermWidget*
/// @param text const char*
///
QAction* q_termwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTermWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_termwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTermWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_termwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTermWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_termwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QTermWidget*
///
QWidget* q_termwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QTermWidget*
/// @param type flag of enum Qt__WindowType
///
void q_termwidget_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QTermWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_termwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTermWidget*
/// @param param1 enum Qt__WindowType
///
void q_termwidget_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QTermWidget*
/// @param type flag of enum Qt__WindowType
///
void q_termwidget_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QTermWidget*
///
/// @return enum Qt__WindowType
///
int32_t q_termwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_termwidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTermWidget*
/// @param x int
/// @param y int
///
QWidget* q_termwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTermWidget*
/// @param p QPoint*
///
QWidget* q_termwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTermWidget*
/// @param p QPointF*
///
QWidget* q_termwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTermWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void q_termwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QTermWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_termwidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QTermWidget*
///
void q_termwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QTermWidget*
/// @param child QWidget*
///
bool q_termwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QTermWidget*
///
bool q_termwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QTermWidget*
/// @param enabled bool
///
void q_termwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QTermWidget*
///
QBackingStore* q_termwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QTermWidget*
///
QWindow* q_termwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QTermWidget*
///
QScreen* q_termwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QTermWidget*
/// @param screen QScreen*
///
void q_termwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_termwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTermWidget*
/// @param title const char*
///
void q_termwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* title)
///
void q_termwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTermWidget*
/// @param icon QIcon*
///
void q_termwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QIcon* icon)
///
void q_termwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTermWidget*
/// @param iconText const char*
///
void q_termwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* iconText)
///
void q_termwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTermWidget*
/// @param pos QPoint*
///
void q_termwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QPoint* pos)
///
void q_termwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QTermWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_termwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QTermWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_termwidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTermWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_termwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTermWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_termwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTermWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_termwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTermWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_termwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTermWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_termwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTermWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_termwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTermWidget*
/// @param rectangle QRect*
///
QPixmap* q_termwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTermWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_termwidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTermWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_termwidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTermWidget*
/// @param id int
/// @param enable bool
///
void q_termwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTermWidget*
/// @param id int
/// @param enable bool
///
void q_termwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTermWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_termwidget_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTermWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_termwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_termwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_termwidget_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTermWidget*
///
const char* q_termwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTermWidget*
/// @param name char*
///
void q_termwidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTermWidget*
///
bool q_termwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTermWidget*
///
bool q_termwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTermWidget*
/// @param b bool
///
bool q_termwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTermWidget*
///
QThread* q_termwidget_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTermWidget*
/// @param thread QThread*
///
bool q_termwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTermWidget*
/// @param interval int
///
int32_t q_termwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTermWidget*
/// @param time int64_t of nanoseconds
///
int32_t q_termwidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTermWidget*
/// @param id int
///
void q_termwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTermWidget*
/// @param id enum Qt__TimerId
///
void q_termwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTermWidget*
///
/// @return libqt_list of QObject*
///
libqt_list q_termwidget_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTermWidget*
/// @param filterObj QObject*
///
void q_termwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTermWidget*
/// @param obj QObject*
///
void q_termwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_termwidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTermWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_termwidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_termwidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_termwidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTermWidget*
///
void q_termwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTermWidget*
///
void q_termwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTermWidget*
/// @param name const char*
/// @param value QVariant*
///
bool q_termwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTermWidget*
/// @param name const char*
///
QVariant* q_termwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTermWidget*
///
const char** q_termwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTermWidget*
///
QBindingStorage* q_termwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTermWidget*
///
const QBindingStorage* q_termwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTermWidget*
///
void q_termwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self)
///
void q_termwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTermWidget*
///
QObject* q_termwidget_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTermWidget*
/// @param classname const char*
///
bool q_termwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTermWidget*
///
void q_termwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTermWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_termwidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTermWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_termwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTermWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_termwidget_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_termwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTermWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_termwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTermWidget*
/// @param param1 QObject*
///
void q_termwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QObject* param1)
///
void q_termwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QTermWidget*
///
bool q_termwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QTermWidget*
///
double q_termwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QTermWidget*
///
double q_termwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QTermWidget*
///
int32_t q_termwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_termwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_termwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QTermWidgetInterface
///
/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidget*
/// @param param1 QTermWidgetInterface*
///
void q_termwidget_operator_assign(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
int32_t q_termwidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
int32_t q_termwidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback int32_t func()
///
void q_termwidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param visible bool
///
void q_termwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param visible bool
///
void q_termwidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, bool visible)
///
void q_termwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
QSize* q_termwidget_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
QSize* q_termwidget_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback QSize* func()
///
void q_termwidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param param1 int
///
int32_t q_termwidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param param1 int
///
int32_t q_termwidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback int32_t func(QTermWidget* self, int param1)
///
void q_termwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
bool q_termwidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
bool q_termwidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback bool func()
///
void q_termwidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
QPaintEngine* q_termwidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
QPaintEngine* q_termwidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback QPaintEngine* func()
///
void q_termwidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QEvent*
///
bool q_termwidget_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QEvent*
///
bool q_termwidget_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback bool func(QTermWidget* self, QEvent* event)
///
void q_termwidget_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QMouseEvent*
///
void q_termwidget_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QMouseEvent*
///
void q_termwidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QMouseEvent* event)
///
void q_termwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QMouseEvent*
///
void q_termwidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QMouseEvent*
///
void q_termwidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QMouseEvent* event)
///
void q_termwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QMouseEvent*
///
void q_termwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QMouseEvent*
///
void q_termwidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QMouseEvent* event)
///
void q_termwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QMouseEvent*
///
void q_termwidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QMouseEvent*
///
void q_termwidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QMouseEvent* event)
///
void q_termwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QWheelEvent*
///
void q_termwidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QWheelEvent*
///
void q_termwidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QWheelEvent* event)
///
void q_termwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QKeyEvent*
///
void q_termwidget_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QKeyEvent*
///
void q_termwidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QKeyEvent* event)
///
void q_termwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QKeyEvent*
///
void q_termwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QKeyEvent*
///
void q_termwidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QKeyEvent* event)
///
void q_termwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QFocusEvent*
///
void q_termwidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QFocusEvent*
///
void q_termwidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QFocusEvent* event)
///
void q_termwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QFocusEvent*
///
void q_termwidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QFocusEvent*
///
void q_termwidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QFocusEvent* event)
///
void q_termwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QEnterEvent*
///
void q_termwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QEnterEvent*
///
void q_termwidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QEnterEvent* event)
///
void q_termwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QEvent*
///
void q_termwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QEvent*
///
void q_termwidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QEvent* event)
///
void q_termwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QPaintEvent*
///
void q_termwidget_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QPaintEvent*
///
void q_termwidget_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QPaintEvent* event)
///
void q_termwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QMoveEvent*
///
void q_termwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QMoveEvent*
///
void q_termwidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QMoveEvent* event)
///
void q_termwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QCloseEvent*
///
void q_termwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QCloseEvent*
///
void q_termwidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QCloseEvent* event)
///
void q_termwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QContextMenuEvent*
///
void q_termwidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QContextMenuEvent*
///
void q_termwidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QContextMenuEvent* event)
///
void q_termwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QTabletEvent*
///
void q_termwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QTabletEvent*
///
void q_termwidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QTabletEvent* event)
///
void q_termwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QActionEvent*
///
void q_termwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QActionEvent*
///
void q_termwidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QActionEvent* event)
///
void q_termwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QDragEnterEvent*
///
void q_termwidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QDragEnterEvent*
///
void q_termwidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QDragEnterEvent* event)
///
void q_termwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QDragMoveEvent*
///
void q_termwidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QDragMoveEvent*
///
void q_termwidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QDragMoveEvent* event)
///
void q_termwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QDragLeaveEvent*
///
void q_termwidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QDragLeaveEvent*
///
void q_termwidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QDragLeaveEvent* event)
///
void q_termwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QDropEvent*
///
void q_termwidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QDropEvent*
///
void q_termwidget_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QDropEvent* event)
///
void q_termwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QShowEvent*
///
void q_termwidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QShowEvent*
///
void q_termwidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QShowEvent* event)
///
void q_termwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QHideEvent*
///
void q_termwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QHideEvent*
///
void q_termwidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QHideEvent* event)
///
void q_termwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_termwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_termwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback bool func(QTermWidget* self, const char* eventType, void* message, intptr_t* result)
///
void q_termwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param param1 QEvent*
///
void q_termwidget_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param param1 QEvent*
///
void q_termwidget_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QEvent* param1)
///
void q_termwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_termwidget_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_termwidget_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback int32_t func(QTermWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_termwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param painter QPainter*
///
void q_termwidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param painter QPainter*
///
void q_termwidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QPainter* painter)
///
void q_termwidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param offset QPoint*
///
QPaintDevice* q_termwidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param offset QPoint*
///
QPaintDevice* q_termwidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback QPaintDevice* func(QTermWidget* self, QPoint* offset)
///
void q_termwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
QPainter* q_termwidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
QPainter* q_termwidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback QPainter* func()
///
void q_termwidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param param1 QInputMethodEvent*
///
void q_termwidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param param1 QInputMethodEvent*
///
void q_termwidget_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QInputMethodEvent* param1)
///
void q_termwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_termwidget_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_termwidget_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback QVariant* func(QTermWidget* self, enum Qt__InputMethodQuery param1)
///
void q_termwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param next bool
///
bool q_termwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param next bool
///
bool q_termwidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback bool func(QTermWidget* self, bool next)
///
void q_termwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_termwidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_termwidget_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback bool func(QTermWidget* self, QObject* watched, QEvent* event)
///
void q_termwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QTimerEvent*
///
void q_termwidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QTimerEvent*
///
void q_termwidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QTimerEvent* event)
///
void q_termwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QChildEvent*
///
void q_termwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QChildEvent*
///
void q_termwidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QChildEvent* event)
///
void q_termwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param event QEvent*
///
void q_termwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param event QEvent*
///
void q_termwidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QEvent* event)
///
void q_termwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param signal QMetaMethod*
///
void q_termwidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param signal QMetaMethod*
///
void q_termwidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QMetaMethod* signal)
///
void q_termwidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param signal QMetaMethod*
///
void q_termwidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param signal QMetaMethod*
///
void q_termwidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, QMetaMethod* signal)
///
void q_termwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
void q_termwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
void q_termwidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func()
///
void q_termwidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
void q_termwidget_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
void q_termwidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func()
///
void q_termwidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
void q_termwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
void q_termwidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback void func()
///
void q_termwidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
bool q_termwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
bool q_termwidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback bool func()
///
void q_termwidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
bool q_termwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
bool q_termwidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback bool func()
///
void q_termwidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
QObject* q_termwidget_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
QObject* q_termwidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback QObject* func()
///
void q_termwidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
///
int32_t q_termwidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
///
int32_t q_termwidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback int32_t func()
///
void q_termwidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param signal const char*
///
int32_t q_termwidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param signal const char*
///
int32_t q_termwidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback int32_t func(QTermWidget* self, const char* signal)
///
void q_termwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param signal QMetaMethod*
///
bool q_termwidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param signal QMetaMethod*
///
bool q_termwidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback bool func(QTermWidget* self, QMetaMethod* signal)
///
void q_termwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTermWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_termwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTermWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_termwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTermWidget*
/// @param callback double func(QTermWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_termwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTermWidget*
/// @param callback void func(QTermWidget* self, const char* objectName)
///
void q_termwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Delete this object from C++ memory.
///
/// @param self QTermWidget*
///
void q_termwidget_delete(void* self);

#endif
