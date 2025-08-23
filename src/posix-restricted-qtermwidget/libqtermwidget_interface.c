#include "../libqaction.hpp"
#include "../libqfont.hpp"
#include "../libqevent.hpp"
#include "../libqpoint.hpp"
#include "libqtermwidget_interface.hpp"
#include "libqtermwidget_interface.h"

void q_termwidgetinterface_set_terminal_size_hint(void* self, bool enabled) {
    QTermWidgetInterface_SetTerminalSizeHint((QTermWidgetInterface*)self, enabled);
}

bool q_termwidgetinterface_terminal_size_hint(void* self) {
    return QTermWidgetInterface_TerminalSizeHint((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_start_shell_program(void* self) {
    QTermWidgetInterface_StartShellProgram((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_start_terminal_teletype(void* self) {
    QTermWidgetInterface_StartTerminalTeletype((QTermWidgetInterface*)self);
}

int32_t q_termwidgetinterface_get_shell_p_i_d(void* self) {
    return QTermWidgetInterface_GetShellPID((QTermWidgetInterface*)self);
}

int32_t q_termwidgetinterface_get_foreground_process_id(void* self) {
    return QTermWidgetInterface_GetForegroundProcessId((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_change_dir(void* self, const char* dir) {
    QTermWidgetInterface_ChangeDir((QTermWidgetInterface*)self, qstring(dir));
}

void q_termwidgetinterface_set_terminal_font(void* self, void* font) {
    QTermWidgetInterface_SetTerminalFont((QTermWidgetInterface*)self, (QFont*)font);
}

QFont* q_termwidgetinterface_get_terminal_font(void* self) {
    return QTermWidgetInterface_GetTerminalFont((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_set_terminal_opacity(void* self, double level) {
    QTermWidgetInterface_SetTerminalOpacity((QTermWidgetInterface*)self, level);
}

void q_termwidgetinterface_set_terminal_background_image(void* self, const char* backgroundImage) {
    QTermWidgetInterface_SetTerminalBackgroundImage((QTermWidgetInterface*)self, qstring(backgroundImage));
}

void q_termwidgetinterface_set_terminal_background_mode(void* self, int mode) {
    QTermWidgetInterface_SetTerminalBackgroundMode((QTermWidgetInterface*)self, mode);
}

void q_termwidgetinterface_set_environment(void* self, const char* environment[]) {
    size_t environment_len = libqt_strv_length(environment);
    libqt_string* environment_qstr = (libqt_string*)malloc(environment_len * sizeof(libqt_string));
    if (environment_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_termwidgetinterface_set_environment");
        abort();
    }
    for (size_t i = 0; i < environment_len; ++i) {
        environment_qstr[i] = qstring(environment[i]);
    }
    libqt_list environment_list = qlist(environment_qstr, environment_len);
    QTermWidgetInterface_SetEnvironment((QTermWidgetInterface*)self, environment_list);
    free(environment_qstr);
}

void q_termwidgetinterface_set_shell_program(void* self, const char* program) {
    QTermWidgetInterface_SetShellProgram((QTermWidgetInterface*)self, qstring(program));
}

void q_termwidgetinterface_set_working_directory(void* self, const char* dir) {
    QTermWidgetInterface_SetWorkingDirectory((QTermWidgetInterface*)self, qstring(dir));
}

const char* q_termwidgetinterface_working_directory(void* self) {
    libqt_string _str = QTermWidgetInterface_WorkingDirectory((QTermWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidgetinterface_set_args(void* self, const char* args[]) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_termwidgetinterface_set_args");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);
    QTermWidgetInterface_SetArgs((QTermWidgetInterface*)self, args_list);
    free(args_qstr);
}

void q_termwidgetinterface_set_color_scheme(void* self, const char* name) {
    QTermWidgetInterface_SetColorScheme((QTermWidgetInterface*)self, qstring(name));
}

const char** q_termwidgetinterface_get_available_color_schemes(void* self) {
    libqt_list _arr = QTermWidgetInterface_GetAvailableColorSchemes((QTermWidgetInterface*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_termwidgetinterface_get_available_color_schemes");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_termwidgetinterface_set_history_size(void* self, int lines) {
    QTermWidgetInterface_SetHistorySize((QTermWidgetInterface*)self, lines);
}

int32_t q_termwidgetinterface_history_size(void* self) {
    return QTermWidgetInterface_HistorySize((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_set_scroll_bar_position(void* self, int32_t scrollBarPosition) {
    QTermWidgetInterface_SetScrollBarPosition((QTermWidgetInterface*)self, scrollBarPosition);
}

void q_termwidgetinterface_scroll_to_end(void* self) {
    QTermWidgetInterface_ScrollToEnd((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_send_text(void* self, const char* text) {
    QTermWidgetInterface_SendText((QTermWidgetInterface*)self, qstring(text));
}

void q_termwidgetinterface_send_key_event(void* self, void* e) {
    QTermWidgetInterface_SendKeyEvent((QTermWidgetInterface*)self, (QKeyEvent*)e);
}

void q_termwidgetinterface_set_flow_control_enabled(void* self, bool enabled) {
    QTermWidgetInterface_SetFlowControlEnabled((QTermWidgetInterface*)self, enabled);
}

bool q_termwidgetinterface_flow_control_enabled(void* self) {
    return QTermWidgetInterface_FlowControlEnabled((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_set_flow_control_warning_enabled(void* self, bool enabled) {
    QTermWidgetInterface_SetFlowControlWarningEnabled((QTermWidgetInterface*)self, enabled);
}

const char* q_termwidgetinterface_key_bindings(void* self) {
    libqt_string _str = QTermWidgetInterface_KeyBindings((QTermWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidgetinterface_set_motion_after_pasting(void* self, int motionAfterPasting) {
    QTermWidgetInterface_SetMotionAfterPasting((QTermWidgetInterface*)self, motionAfterPasting);
}

int32_t q_termwidgetinterface_history_lines_count(void* self) {
    return QTermWidgetInterface_HistoryLinesCount((QTermWidgetInterface*)self);
}

int32_t q_termwidgetinterface_screen_columns_count(void* self) {
    return QTermWidgetInterface_ScreenColumnsCount((QTermWidgetInterface*)self);
}

int32_t q_termwidgetinterface_screen_lines_count(void* self) {
    return QTermWidgetInterface_ScreenLinesCount((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_set_selection_start(void* self, int row, int column) {
    QTermWidgetInterface_SetSelectionStart((QTermWidgetInterface*)self, row, column);
}

void q_termwidgetinterface_set_selection_end(void* self, int row, int column) {
    QTermWidgetInterface_SetSelectionEnd((QTermWidgetInterface*)self, row, column);
}

void q_termwidgetinterface_get_selection_start(void* self, int* row, int* column) {
    QTermWidgetInterface_GetSelectionStart((QTermWidgetInterface*)self, row, column);
}

void q_termwidgetinterface_get_selection_end(void* self, int* row, int* column) {
    QTermWidgetInterface_GetSelectionEnd((QTermWidgetInterface*)self, row, column);
}

const char* q_termwidgetinterface_selected_text(void* self, bool preserveLineBreaks) {
    libqt_string _str = QTermWidgetInterface_SelectedText((QTermWidgetInterface*)self, preserveLineBreaks);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidgetinterface_set_monitor_activity(void* self, bool monitorActivity) {
    QTermWidgetInterface_SetMonitorActivity((QTermWidgetInterface*)self, monitorActivity);
}

void q_termwidgetinterface_set_monitor_silence(void* self, bool monitorSilence) {
    QTermWidgetInterface_SetMonitorSilence((QTermWidgetInterface*)self, monitorSilence);
}

void q_termwidgetinterface_set_silence_timeout(void* self, int seconds) {
    QTermWidgetInterface_SetSilenceTimeout((QTermWidgetInterface*)self, seconds);
}

libqt_list /* of QAction* */ q_termwidgetinterface_filter_actions(void* self, void* position) {
    libqt_list _arr = QTermWidgetInterface_FilterActions((QTermWidgetInterface*)self, (QPoint*)position);
    return _arr;
}

int32_t q_termwidgetinterface_get_pty_slave_fd(void* self) {
    return QTermWidgetInterface_GetPtySlaveFd((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_set_blinking_cursor(void* self, bool blink) {
    QTermWidgetInterface_SetBlinkingCursor((QTermWidgetInterface*)self, blink);
}

void q_termwidgetinterface_set_bidi_enabled(void* self, bool enabled) {
    QTermWidgetInterface_SetBidiEnabled((QTermWidgetInterface*)self, enabled);
}

bool q_termwidgetinterface_is_bidi_enabled(void* self) {
    return QTermWidgetInterface_IsBidiEnabled((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_set_auto_close(void* self, bool autoClose) {
    QTermWidgetInterface_SetAutoClose((QTermWidgetInterface*)self, autoClose);
}

const char* q_termwidgetinterface_title(void* self) {
    libqt_string _str = QTermWidgetInterface_Title((QTermWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_termwidgetinterface_icon(void* self) {
    libqt_string _str = QTermWidgetInterface_Icon((QTermWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_termwidgetinterface_is_title_changed(void* self) {
    return QTermWidgetInterface_IsTitleChanged((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_bracket_text(void* self, const char* text) {
    QTermWidgetInterface_BracketText((QTermWidgetInterface*)self, qstring(text));
}

void q_termwidgetinterface_disable_bracketed_paste_mode(void* self, bool disable) {
    QTermWidgetInterface_DisableBracketedPasteMode((QTermWidgetInterface*)self, disable);
}

bool q_termwidgetinterface_bracketed_paste_mode_is_disabled(void* self) {
    return QTermWidgetInterface_BracketedPasteModeIsDisabled((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_set_margin(void* self, int margin) {
    QTermWidgetInterface_SetMargin((QTermWidgetInterface*)self, margin);
}

int32_t q_termwidgetinterface_get_margin(void* self) {
    return QTermWidgetInterface_GetMargin((QTermWidgetInterface*)self);
}

void q_termwidgetinterface_set_draw_line_chars(void* self, bool drawLineChars) {
    QTermWidgetInterface_SetDrawLineChars((QTermWidgetInterface*)self, drawLineChars);
}

void q_termwidgetinterface_set_bold_intense(void* self, bool boldIntense) {
    QTermWidgetInterface_SetBoldIntense((QTermWidgetInterface*)self, boldIntense);
}

void q_termwidgetinterface_set_confirm_multiline_paste(void* self, bool confirmMultilinePaste) {
    QTermWidgetInterface_SetConfirmMultilinePaste((QTermWidgetInterface*)self, confirmMultilinePaste);
}

void q_termwidgetinterface_set_trim_pasted_trailing_newlines(void* self, bool trimPastedTrailingNewlines) {
    QTermWidgetInterface_SetTrimPastedTrailingNewlines((QTermWidgetInterface*)self, trimPastedTrailingNewlines);
}

const char* q_termwidgetinterface_word_characters(void* self) {
    libqt_string _str = QTermWidgetInterface_WordCharacters((QTermWidgetInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidgetinterface_set_word_characters(void* self, const char* chars) {
    QTermWidgetInterface_SetWordCharacters((QTermWidgetInterface*)self, qstring(chars));
}

QTermWidgetInterface* q_termwidgetinterface_create_widget(void* self, int startnow) {
    return QTermWidgetInterface_CreateWidget((QTermWidgetInterface*)self, startnow);
}

void q_termwidgetinterface_operator_assign(void* self, void* param1) {
    QTermWidgetInterface_OperatorAssign((QTermWidgetInterface*)self, (QTermWidgetInterface*)param1);
}

void q_termwidgetinterface_delete(void* self) {
    QTermWidgetInterface_Delete((QTermWidgetInterface*)(self));
}
