#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGETQT6C_LIBQTERMWIDGET_INTERFACE_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGETQT6C_LIBQTERMWIDGET_INTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param enabled bool
void q_termwidgetinterface_set_terminal_size_hint(void* self, bool enabled);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
bool q_termwidgetinterface_terminal_size_hint(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
void q_termwidgetinterface_start_shell_program(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
void q_termwidgetinterface_start_terminal_teletype(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
int32_t q_termwidgetinterface_get_shell_p_i_d(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
int32_t q_termwidgetinterface_get_foreground_process_id(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param dir const char*
void q_termwidgetinterface_change_dir(void* self, const char* dir);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param font QFont*
void q_termwidgetinterface_set_terminal_font(void* self, void* font);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
QFont* q_termwidgetinterface_get_terminal_font(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param level double
void q_termwidgetinterface_set_terminal_opacity(void* self, double level);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param backgroundImage const char*
void q_termwidgetinterface_set_terminal_background_image(void* self, const char* backgroundImage);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param mode int
void q_termwidgetinterface_set_terminal_background_mode(void* self, int mode);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param environment const char**
void q_termwidgetinterface_set_environment(void* self, const char* environment[]);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param program const char*
void q_termwidgetinterface_set_shell_program(void* self, const char* program);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param dir const char*
void q_termwidgetinterface_set_working_directory(void* self, const char* dir);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTermWidgetInterface*
const char* q_termwidgetinterface_working_directory(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param args const char**
void q_termwidgetinterface_set_args(void* self, const char* args[]);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param name const char*
void q_termwidgetinterface_set_color_scheme(void* self, const char* name);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTermWidgetInterface*
const char** q_termwidgetinterface_get_available_color_schemes(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param lines int
void q_termwidgetinterface_set_history_size(void* self, int lines);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
int32_t q_termwidgetinterface_history_size(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param scrollBarPosition enum QTermWidgetInterface__ScrollBarPosition
void q_termwidgetinterface_set_scroll_bar_position(void* self, int32_t scrollBarPosition);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
void q_termwidgetinterface_scroll_to_end(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param text const char*
void q_termwidgetinterface_send_text(void* self, const char* text);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param e QKeyEvent*
void q_termwidgetinterface_send_key_event(void* self, void* e);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param enabled bool
void q_termwidgetinterface_set_flow_control_enabled(void* self, bool enabled);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
bool q_termwidgetinterface_flow_control_enabled(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param enabled bool
void q_termwidgetinterface_set_flow_control_warning_enabled(void* self, bool enabled);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTermWidgetInterface*
const char* q_termwidgetinterface_key_bindings(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param motionAfterPasting int
void q_termwidgetinterface_set_motion_after_pasting(void* self, int motionAfterPasting);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
int32_t q_termwidgetinterface_history_lines_count(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
int32_t q_termwidgetinterface_screen_columns_count(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
int32_t q_termwidgetinterface_screen_lines_count(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param row int
/// @param column int
void q_termwidgetinterface_set_selection_start(void* self, int row, int column);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param row int
/// @param column int
void q_termwidgetinterface_set_selection_end(void* self, int row, int column);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param row int*
/// @param column int*
void q_termwidgetinterface_get_selection_start(void* self, int* row, int* column);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param row int*
/// @param column int*
void q_termwidgetinterface_get_selection_end(void* self, int* row, int* column);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTermWidgetInterface*
/// @param preserveLineBreaks bool
const char* q_termwidgetinterface_selected_text(void* self, bool preserveLineBreaks);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param monitorActivity bool
void q_termwidgetinterface_set_monitor_activity(void* self, bool monitorActivity);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param monitorSilence bool
void q_termwidgetinterface_set_monitor_silence(void* self, bool monitorSilence);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param seconds int
void q_termwidgetinterface_set_silence_timeout(void* self, int seconds);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param position QPoint*
libqt_list /* of QAction* */ q_termwidgetinterface_filter_actions(void* self, void* position);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
int32_t q_termwidgetinterface_get_pty_slave_fd(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param blink bool
void q_termwidgetinterface_set_blinking_cursor(void* self, bool blink);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param enabled bool
void q_termwidgetinterface_set_bidi_enabled(void* self, bool enabled);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
bool q_termwidgetinterface_is_bidi_enabled(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param autoClose bool
void q_termwidgetinterface_set_auto_close(void* self, bool autoClose);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTermWidgetInterface*
const char* q_termwidgetinterface_title(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTermWidgetInterface*
const char* q_termwidgetinterface_icon(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
bool q_termwidgetinterface_is_title_changed(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param text const char*
void q_termwidgetinterface_bracket_text(void* self, const char* text);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param disable bool
void q_termwidgetinterface_disable_bracketed_paste_mode(void* self, bool disable);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
bool q_termwidgetinterface_bracketed_paste_mode_is_disabled(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param margin int
void q_termwidgetinterface_set_margin(void* self, int margin);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
int32_t q_termwidgetinterface_get_margin(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param drawLineChars bool
void q_termwidgetinterface_set_draw_line_chars(void* self, bool drawLineChars);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param boldIntense bool
void q_termwidgetinterface_set_bold_intense(void* self, bool boldIntense);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param confirmMultilinePaste bool
void q_termwidgetinterface_set_confirm_multiline_paste(void* self, bool confirmMultilinePaste);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param trimPastedTrailingNewlines bool
void q_termwidgetinterface_set_trim_pasted_trailing_newlines(void* self, bool trimPastedTrailingNewlines);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTermWidgetInterface*
const char* q_termwidgetinterface_word_characters(void* self);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param chars const char*
void q_termwidgetinterface_set_word_characters(void* self, const char* chars);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param startnow int
QTermWidgetInterface* q_termwidgetinterface_create_widget(void* self, int startnow);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// @param self QTermWidgetInterface*
/// @param param1 QTermWidgetInterface*
void q_termwidgetinterface_operator_assign(void* self, void* param1);

/// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
///
/// Delete this object from C++ memory.
///
/// @param self QTermWidgetInterface*
void q_termwidgetinterface_delete(void* self);

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api

typedef enum {
    QTERMWIDGETINTERFACE_SCROLLBARPOSITION_NOSCROLLBAR = 0,
    QTERMWIDGETINTERFACE_SCROLLBARPOSITION_SCROLLBARLEFT = 1,
    QTERMWIDGETINTERFACE_SCROLLBARPOSITION_SCROLLBARRIGHT = 2
} QTermWidgetInterface__ScrollBarPosition;

#endif
