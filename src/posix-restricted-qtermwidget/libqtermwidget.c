#include "libFilter.hpp"
#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqfont.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqtermwidget_interface.hpp"
#include "libqtermwidget.hpp"
#include "libqtermwidget.h"

QTermWidget* q_termwidget_new(void* parent) {
    return QTermWidget_new((QWidget*)parent);
}

QTermWidget* q_termwidget_new2(int startnow) {
    return QTermWidget_new2(startnow);
}

QTermWidget* q_termwidget_new3() {
    return QTermWidget_new3();
}

QTermWidget* q_termwidget_new4(int startnow, void* parent) {
    return QTermWidget_new4(startnow, (QWidget*)parent);
}

const QMetaObject* q_termwidget_meta_object(void* self) {
    return QTermWidget_MetaObject((QTermWidget*)self);
}

void q_termwidget_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QTermWidget_OnMetaObject((QTermWidget*)self, (intptr_t)callback);
}

const QMetaObject* q_termwidget_qbase_meta_object(void* self) {
    return QTermWidget_QBaseMetaObject((QTermWidget*)self);
}

void* q_termwidget_metacast(void* self, const char* param1) {
    return QTermWidget_Metacast((QTermWidget*)self, param1);
}

void q_termwidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QTermWidget_OnMetacast((QTermWidget*)self, (intptr_t)callback);
}

void* q_termwidget_qbase_metacast(void* self, const char* param1) {
    return QTermWidget_QBaseMetacast((QTermWidget*)self, param1);
}

int32_t q_termwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTermWidget_Metacall((QTermWidget*)self, param1, param2, param3);
}

void q_termwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTermWidget_OnMetacall((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTermWidget_QBaseMetacall((QTermWidget*)self, param1, param2, param3);
}

const char* q_termwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_termwidget_size_hint(void* self) {
    return QTermWidget_SizeHint((QTermWidget*)self);
}

void q_termwidget_on_size_hint(void* self, QSize* (*callback)()) {
    QTermWidget_OnSizeHint((QTermWidget*)self, (intptr_t)callback);
}

QSize* q_termwidget_qbase_size_hint(void* self) {
    return QTermWidget_QBaseSizeHint((QTermWidget*)self);
}

void q_termwidget_set_terminal_size_hint(void* self, bool enabled) {
    QTermWidget_SetTerminalSizeHint((QTermWidget*)self, enabled);
}

void q_termwidget_on_set_terminal_size_hint(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetTerminalSizeHint((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_terminal_size_hint(void* self, bool enabled) {
    QTermWidget_QBaseSetTerminalSizeHint((QTermWidget*)self, enabled);
}

bool q_termwidget_terminal_size_hint(void* self) {
    return QTermWidget_TerminalSizeHint((QTermWidget*)self);
}

void q_termwidget_on_terminal_size_hint(void* self, bool (*callback)()) {
    QTermWidget_OnTerminalSizeHint((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_qbase_terminal_size_hint(void* self) {
    return QTermWidget_QBaseTerminalSizeHint((QTermWidget*)self);
}

void q_termwidget_start_shell_program(void* self) {
    QTermWidget_StartShellProgram((QTermWidget*)self);
}

void q_termwidget_on_start_shell_program(void* self, void (*callback)()) {
    QTermWidget_OnStartShellProgram((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_start_shell_program(void* self) {
    QTermWidget_QBaseStartShellProgram((QTermWidget*)self);
}

void q_termwidget_start_terminal_teletype(void* self) {
    QTermWidget_StartTerminalTeletype((QTermWidget*)self);
}

void q_termwidget_on_start_terminal_teletype(void* self, void (*callback)()) {
    QTermWidget_OnStartTerminalTeletype((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_start_terminal_teletype(void* self) {
    QTermWidget_QBaseStartTerminalTeletype((QTermWidget*)self);
}

int32_t q_termwidget_get_shell_p_i_d(void* self) {
    return QTermWidget_GetShellPID((QTermWidget*)self);
}

void q_termwidget_on_get_shell_p_i_d(void* self, int32_t (*callback)()) {
    QTermWidget_OnGetShellPID((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_qbase_get_shell_p_i_d(void* self) {
    return QTermWidget_QBaseGetShellPID((QTermWidget*)self);
}

int32_t q_termwidget_get_foreground_process_id(void* self) {
    return QTermWidget_GetForegroundProcessId((QTermWidget*)self);
}

void q_termwidget_on_get_foreground_process_id(void* self, int32_t (*callback)()) {
    QTermWidget_OnGetForegroundProcessId((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_qbase_get_foreground_process_id(void* self) {
    return QTermWidget_QBaseGetForegroundProcessId((QTermWidget*)self);
}

void q_termwidget_change_dir(void* self, const char* dir) {
    QTermWidget_ChangeDir((QTermWidget*)self, qstring(dir));
}

void q_termwidget_on_change_dir(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_OnChangeDir((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_change_dir(void* self, const char* dir) {
    QTermWidget_QBaseChangeDir((QTermWidget*)self, qstring(dir));
}

void q_termwidget_set_terminal_font(void* self, void* font) {
    QTermWidget_SetTerminalFont((QTermWidget*)self, (QFont*)font);
}

void q_termwidget_on_set_terminal_font(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnSetTerminalFont((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_terminal_font(void* self, void* font) {
    QTermWidget_QBaseSetTerminalFont((QTermWidget*)self, (QFont*)font);
}

QFont* q_termwidget_get_terminal_font(void* self) {
    return QTermWidget_GetTerminalFont((QTermWidget*)self);
}

void q_termwidget_on_get_terminal_font(void* self, QFont* (*callback)()) {
    QTermWidget_OnGetTerminalFont((QTermWidget*)self, (intptr_t)callback);
}

QFont* q_termwidget_qbase_get_terminal_font(void* self) {
    return QTermWidget_QBaseGetTerminalFont((QTermWidget*)self);
}

void q_termwidget_set_terminal_opacity(void* self, double level) {
    QTermWidget_SetTerminalOpacity((QTermWidget*)self, level);
}

void q_termwidget_on_set_terminal_opacity(void* self, void (*callback)(void*, double)) {
    QTermWidget_OnSetTerminalOpacity((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_terminal_opacity(void* self, double level) {
    QTermWidget_QBaseSetTerminalOpacity((QTermWidget*)self, level);
}

void q_termwidget_set_terminal_background_image(void* self, const char* backgroundImage) {
    QTermWidget_SetTerminalBackgroundImage((QTermWidget*)self, qstring(backgroundImage));
}

void q_termwidget_on_set_terminal_background_image(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_OnSetTerminalBackgroundImage((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_terminal_background_image(void* self, const char* backgroundImage) {
    QTermWidget_QBaseSetTerminalBackgroundImage((QTermWidget*)self, qstring(backgroundImage));
}

void q_termwidget_set_terminal_background_mode(void* self, int mode) {
    QTermWidget_SetTerminalBackgroundMode((QTermWidget*)self, mode);
}

void q_termwidget_on_set_terminal_background_mode(void* self, void (*callback)(void*, int)) {
    QTermWidget_OnSetTerminalBackgroundMode((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_terminal_background_mode(void* self, int mode) {
    QTermWidget_QBaseSetTerminalBackgroundMode((QTermWidget*)self, mode);
}

void q_termwidget_set_environment(void* self, const char* environment[static 1]) {
    size_t environment_len = libqt_strv_length(environment);
    libqt_string* environment_qstr = (libqt_string*)malloc(environment_len * sizeof(libqt_string));
    if (environment_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_termwidget_set_environment\n");
        abort();
    }
    for (size_t i = 0; i < environment_len; ++i) {
        environment_qstr[i] = qstring(environment[i]);
    }
    libqt_list environment_list = qlist(environment_qstr, environment_len);
    QTermWidget_SetEnvironment((QTermWidget*)self, environment_list);
    free(environment_qstr);
}

void q_termwidget_on_set_environment(void* self, void (*callback)(void*, const char**)) {
    QTermWidget_OnSetEnvironment((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_environment(void* self, const char* environment[static 1]) {
    size_t environment_len = libqt_strv_length(environment);
    libqt_string* environment_qstr = (libqt_string*)malloc(environment_len * sizeof(libqt_string));
    if (environment_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_termwidget_set_environment\n");
        abort();
    }
    for (size_t i = 0; i < environment_len; ++i) {
        environment_qstr[i] = qstring(environment[i]);
    }
    libqt_list environment_list = qlist(environment_qstr, environment_len);
    QTermWidget_QBaseSetEnvironment((QTermWidget*)self, environment_list);
}

void q_termwidget_set_shell_program(void* self, const char* program) {
    QTermWidget_SetShellProgram((QTermWidget*)self, qstring(program));
}

void q_termwidget_on_set_shell_program(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_OnSetShellProgram((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_shell_program(void* self, const char* program) {
    QTermWidget_QBaseSetShellProgram((QTermWidget*)self, qstring(program));
}

void q_termwidget_set_working_directory(void* self, const char* dir) {
    QTermWidget_SetWorkingDirectory((QTermWidget*)self, qstring(dir));
}

void q_termwidget_on_set_working_directory(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_OnSetWorkingDirectory((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_working_directory(void* self, const char* dir) {
    QTermWidget_QBaseSetWorkingDirectory((QTermWidget*)self, qstring(dir));
}

const char* q_termwidget_working_directory(void* self) {
    libqt_string _str = QTermWidget_WorkingDirectory((QTermWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_on_working_directory(void* self, const char* (*callback)()) {
    QTermWidget_OnWorkingDirectory((QTermWidget*)self, (intptr_t)callback);
}

const char* q_termwidget_qbase_working_directory(void* self) {
    libqt_string _str = QTermWidget_QBaseWorkingDirectory((QTermWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_args(void* self, const char* args[static 1]) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_termwidget_set_args\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);
    QTermWidget_SetArgs((QTermWidget*)self, args_list);
    free(args_qstr);
}

void q_termwidget_on_set_args(void* self, void (*callback)(void*, const char**)) {
    QTermWidget_OnSetArgs((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_args(void* self, const char* args[static 1]) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_termwidget_set_args\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);
    QTermWidget_QBaseSetArgs((QTermWidget*)self, args_list);
}

void q_termwidget_set_color_scheme(void* self, const char* name) {
    QTermWidget_SetColorScheme((QTermWidget*)self, qstring(name));
}

void q_termwidget_on_set_color_scheme(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_OnSetColorScheme((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_color_scheme(void* self, const char* name) {
    QTermWidget_QBaseSetColorScheme((QTermWidget*)self, qstring(name));
}

const char** q_termwidget_get_available_color_schemes(void* self) {
    libqt_list _arr = QTermWidget_GetAvailableColorSchemes((QTermWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_termwidget_get_available_color_schemes\n");
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

void q_termwidget_on_get_available_color_schemes(void* self, const char** (*callback)()) {
    QTermWidget_OnGetAvailableColorSchemes((QTermWidget*)self, (intptr_t)callback);
}

const char** q_termwidget_qbase_get_available_color_schemes(void* self) {
    libqt_list _arr = QTermWidget_QBaseGetAvailableColorSchemes((QTermWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_termwidget_get_available_color_schemes\n");
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

const char** q_termwidget_available_color_schemes() {
    libqt_list _arr = QTermWidget_AvailableColorSchemes();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_termwidget_available_color_schemes\n");
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

void q_termwidget_add_custom_color_scheme_dir(const char* custom_dir) {
    QTermWidget_AddCustomColorSchemeDir(qstring(custom_dir));
}

void q_termwidget_set_history_size(void* self, int lines) {
    QTermWidget_SetHistorySize((QTermWidget*)self, lines);
}

void q_termwidget_on_set_history_size(void* self, void (*callback)(void*, int)) {
    QTermWidget_OnSetHistorySize((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_history_size(void* self, int lines) {
    QTermWidget_QBaseSetHistorySize((QTermWidget*)self, lines);
}

int32_t q_termwidget_history_size(void* self) {
    return QTermWidget_HistorySize((QTermWidget*)self);
}

void q_termwidget_on_history_size(void* self, int32_t (*callback)()) {
    QTermWidget_OnHistorySize((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_qbase_history_size(void* self) {
    return QTermWidget_QBaseHistorySize((QTermWidget*)self);
}

void q_termwidget_set_scroll_bar_position(void* self, int32_t scrollBarPosition) {
    QTermWidget_SetScrollBarPosition((QTermWidget*)self, scrollBarPosition);
}

void q_termwidget_on_set_scroll_bar_position(void* self, void (*callback)(void*, int32_t)) {
    QTermWidget_OnSetScrollBarPosition((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_scroll_bar_position(void* self, int32_t scrollBarPosition) {
    QTermWidget_QBaseSetScrollBarPosition((QTermWidget*)self, scrollBarPosition);
}

void q_termwidget_scroll_to_end(void* self) {
    QTermWidget_ScrollToEnd((QTermWidget*)self);
}

void q_termwidget_on_scroll_to_end(void* self, void (*callback)()) {
    QTermWidget_OnScrollToEnd((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_scroll_to_end(void* self) {
    QTermWidget_QBaseScrollToEnd((QTermWidget*)self);
}

void q_termwidget_send_text(void* self, const char* text) {
    QTermWidget_SendText((QTermWidget*)self, qstring(text));
}

void q_termwidget_on_send_text(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_OnSendText((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_send_text(void* self, const char* text) {
    QTermWidget_QBaseSendText((QTermWidget*)self, qstring(text));
}

void q_termwidget_send_key_event(void* self, void* e) {
    QTermWidget_SendKeyEvent((QTermWidget*)self, (QKeyEvent*)e);
}

void q_termwidget_on_send_key_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnSendKeyEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_send_key_event(void* self, void* e) {
    QTermWidget_QBaseSendKeyEvent((QTermWidget*)self, (QKeyEvent*)e);
}

void q_termwidget_set_flow_control_enabled(void* self, bool enabled) {
    QTermWidget_SetFlowControlEnabled((QTermWidget*)self, enabled);
}

void q_termwidget_on_set_flow_control_enabled(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetFlowControlEnabled((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_flow_control_enabled(void* self, bool enabled) {
    QTermWidget_QBaseSetFlowControlEnabled((QTermWidget*)self, enabled);
}

bool q_termwidget_flow_control_enabled(void* self) {
    return QTermWidget_FlowControlEnabled((QTermWidget*)self);
}

void q_termwidget_on_flow_control_enabled(void* self, bool (*callback)()) {
    QTermWidget_OnFlowControlEnabled((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_qbase_flow_control_enabled(void* self) {
    return QTermWidget_QBaseFlowControlEnabled((QTermWidget*)self);
}

void q_termwidget_set_flow_control_warning_enabled(void* self, bool enabled) {
    QTermWidget_SetFlowControlWarningEnabled((QTermWidget*)self, enabled);
}

void q_termwidget_on_set_flow_control_warning_enabled(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetFlowControlWarningEnabled((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_flow_control_warning_enabled(void* self, bool enabled) {
    QTermWidget_QBaseSetFlowControlWarningEnabled((QTermWidget*)self, enabled);
}

const char** q_termwidget_available_key_bindings() {
    libqt_list _arr = QTermWidget_AvailableKeyBindings();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_termwidget_available_key_bindings\n");
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

const char* q_termwidget_key_bindings(void* self) {
    libqt_string _str = QTermWidget_KeyBindings((QTermWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_on_key_bindings(void* self, const char* (*callback)()) {
    QTermWidget_OnKeyBindings((QTermWidget*)self, (intptr_t)callback);
}

const char* q_termwidget_qbase_key_bindings(void* self) {
    libqt_string _str = QTermWidget_QBaseKeyBindings((QTermWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_motion_after_pasting(void* self, int motionAfterPasting) {
    QTermWidget_SetMotionAfterPasting((QTermWidget*)self, motionAfterPasting);
}

void q_termwidget_on_set_motion_after_pasting(void* self, void (*callback)(void*, int)) {
    QTermWidget_OnSetMotionAfterPasting((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_motion_after_pasting(void* self, int motionAfterPasting) {
    QTermWidget_QBaseSetMotionAfterPasting((QTermWidget*)self, motionAfterPasting);
}

int32_t q_termwidget_history_lines_count(void* self) {
    return QTermWidget_HistoryLinesCount((QTermWidget*)self);
}

void q_termwidget_on_history_lines_count(void* self, int32_t (*callback)()) {
    QTermWidget_OnHistoryLinesCount((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_qbase_history_lines_count(void* self) {
    return QTermWidget_QBaseHistoryLinesCount((QTermWidget*)self);
}

int32_t q_termwidget_screen_columns_count(void* self) {
    return QTermWidget_ScreenColumnsCount((QTermWidget*)self);
}

void q_termwidget_on_screen_columns_count(void* self, int32_t (*callback)()) {
    QTermWidget_OnScreenColumnsCount((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_qbase_screen_columns_count(void* self) {
    return QTermWidget_QBaseScreenColumnsCount((QTermWidget*)self);
}

int32_t q_termwidget_screen_lines_count(void* self) {
    return QTermWidget_ScreenLinesCount((QTermWidget*)self);
}

void q_termwidget_on_screen_lines_count(void* self, int32_t (*callback)()) {
    QTermWidget_OnScreenLinesCount((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_qbase_screen_lines_count(void* self) {
    return QTermWidget_QBaseScreenLinesCount((QTermWidget*)self);
}

void q_termwidget_set_selection_start(void* self, int row, int column) {
    QTermWidget_SetSelectionStart((QTermWidget*)self, row, column);
}

void q_termwidget_on_set_selection_start(void* self, void (*callback)(void*, int, int)) {
    QTermWidget_OnSetSelectionStart((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_selection_start(void* self, int row, int column) {
    QTermWidget_QBaseSetSelectionStart((QTermWidget*)self, row, column);
}

void q_termwidget_set_selection_end(void* self, int row, int column) {
    QTermWidget_SetSelectionEnd((QTermWidget*)self, row, column);
}

void q_termwidget_on_set_selection_end(void* self, void (*callback)(void*, int, int)) {
    QTermWidget_OnSetSelectionEnd((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_selection_end(void* self, int row, int column) {
    QTermWidget_QBaseSetSelectionEnd((QTermWidget*)self, row, column);
}

void q_termwidget_get_selection_start(void* self, int* row, int* column) {
    QTermWidget_GetSelectionStart((QTermWidget*)self, row, column);
}

void q_termwidget_on_get_selection_start(void* self, void (*callback)(void*, int*, int*)) {
    QTermWidget_OnGetSelectionStart((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_get_selection_start(void* self, int* row, int* column) {
    QTermWidget_QBaseGetSelectionStart((QTermWidget*)self, row, column);
}

void q_termwidget_get_selection_end(void* self, int* row, int* column) {
    QTermWidget_GetSelectionEnd((QTermWidget*)self, row, column);
}

void q_termwidget_on_get_selection_end(void* self, void (*callback)(void*, int*, int*)) {
    QTermWidget_OnGetSelectionEnd((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_get_selection_end(void* self, int* row, int* column) {
    QTermWidget_QBaseGetSelectionEnd((QTermWidget*)self, row, column);
}

const char* q_termwidget_selected_text(void* self, bool preserveLineBreaks) {
    libqt_string _str = QTermWidget_SelectedText((QTermWidget*)self, preserveLineBreaks);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_on_selected_text(void* self, const char* (*callback)(void*, bool)) {
    QTermWidget_OnSelectedText((QTermWidget*)self, (intptr_t)callback);
}

const char* q_termwidget_qbase_selected_text(void* self, bool preserveLineBreaks) {
    libqt_string _str = QTermWidget_QBaseSelectedText((QTermWidget*)self, preserveLineBreaks);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_monitor_activity(void* self, bool monitorActivity) {
    QTermWidget_SetMonitorActivity((QTermWidget*)self, monitorActivity);
}

void q_termwidget_on_set_monitor_activity(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetMonitorActivity((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_monitor_activity(void* self, bool monitorActivity) {
    QTermWidget_QBaseSetMonitorActivity((QTermWidget*)self, monitorActivity);
}

void q_termwidget_set_monitor_silence(void* self, bool monitorSilence) {
    QTermWidget_SetMonitorSilence((QTermWidget*)self, monitorSilence);
}

void q_termwidget_on_set_monitor_silence(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetMonitorSilence((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_monitor_silence(void* self, bool monitorSilence) {
    QTermWidget_QBaseSetMonitorSilence((QTermWidget*)self, monitorSilence);
}

void q_termwidget_set_silence_timeout(void* self, int seconds) {
    QTermWidget_SetSilenceTimeout((QTermWidget*)self, seconds);
}

void q_termwidget_on_set_silence_timeout(void* self, void (*callback)(void*, int)) {
    QTermWidget_OnSetSilenceTimeout((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_silence_timeout(void* self, int seconds) {
    QTermWidget_QBaseSetSilenceTimeout((QTermWidget*)self, seconds);
}

Konsole__Filter__HotSpot* q_termwidget_get_hot_spot_at(void* self, void* pos) {
    return QTermWidget_GetHotSpotAt((QTermWidget*)self, (QPoint*)pos);
}

Konsole__Filter__HotSpot* q_termwidget_get_hot_spot_at2(void* self, int row, int column) {
    return QTermWidget_GetHotSpotAt2((QTermWidget*)self, row, column);
}

libqt_list /* of QAction* */ q_termwidget_filter_actions(void* self, void* position) {
    libqt_list _arr = QTermWidget_FilterActions((QTermWidget*)self, (QPoint*)position);
    return _arr;
}

void q_termwidget_on_filter_actions(void* self, QAction** (*callback)(void*, void*)) {
    QTermWidget_OnFilterActions((QTermWidget*)self, (intptr_t)callback);
}

libqt_list /* of QAction* */ q_termwidget_qbase_filter_actions(void* self, void* position) {
    libqt_list _arr = QTermWidget_QBaseFilterActions((QTermWidget*)self, (QPoint*)position);
    return _arr;
}

int32_t q_termwidget_get_pty_slave_fd(void* self) {
    return QTermWidget_GetPtySlaveFd((QTermWidget*)self);
}

void q_termwidget_on_get_pty_slave_fd(void* self, int32_t (*callback)()) {
    QTermWidget_OnGetPtySlaveFd((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_qbase_get_pty_slave_fd(void* self) {
    return QTermWidget_QBaseGetPtySlaveFd((QTermWidget*)self);
}

void q_termwidget_set_keyboard_cursor_shape(void* self, int32_t shape) {
    QTermWidget_SetKeyboardCursorShape((QTermWidget*)self, shape);
}

void q_termwidget_set_blinking_cursor(void* self, bool blink) {
    QTermWidget_SetBlinkingCursor((QTermWidget*)self, blink);
}

void q_termwidget_on_set_blinking_cursor(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetBlinkingCursor((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_blinking_cursor(void* self, bool blink) {
    QTermWidget_QBaseSetBlinkingCursor((QTermWidget*)self, blink);
}

void q_termwidget_set_bidi_enabled(void* self, bool enabled) {
    QTermWidget_SetBidiEnabled((QTermWidget*)self, enabled);
}

void q_termwidget_on_set_bidi_enabled(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetBidiEnabled((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_bidi_enabled(void* self, bool enabled) {
    QTermWidget_QBaseSetBidiEnabled((QTermWidget*)self, enabled);
}

bool q_termwidget_is_bidi_enabled(void* self) {
    return QTermWidget_IsBidiEnabled((QTermWidget*)self);
}

void q_termwidget_on_is_bidi_enabled(void* self, bool (*callback)()) {
    QTermWidget_OnIsBidiEnabled((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_qbase_is_bidi_enabled(void* self) {
    return QTermWidget_QBaseIsBidiEnabled((QTermWidget*)self);
}

void q_termwidget_set_auto_close(void* self, bool autoClose) {
    QTermWidget_SetAutoClose((QTermWidget*)self, autoClose);
}

void q_termwidget_on_set_auto_close(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetAutoClose((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_auto_close(void* self, bool autoClose) {
    QTermWidget_QBaseSetAutoClose((QTermWidget*)self, autoClose);
}

const char* q_termwidget_title(void* self) {
    libqt_string _str = QTermWidget_Title((QTermWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_on_title(void* self, const char* (*callback)()) {
    QTermWidget_OnTitle((QTermWidget*)self, (intptr_t)callback);
}

const char* q_termwidget_qbase_title(void* self) {
    libqt_string _str = QTermWidget_QBaseTitle((QTermWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_termwidget_icon(void* self) {
    libqt_string _str = QTermWidget_Icon((QTermWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_on_icon(void* self, const char* (*callback)()) {
    QTermWidget_OnIcon((QTermWidget*)self, (intptr_t)callback);
}

const char* q_termwidget_qbase_icon(void* self) {
    libqt_string _str = QTermWidget_QBaseIcon((QTermWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_termwidget_is_title_changed(void* self) {
    return QTermWidget_IsTitleChanged((QTermWidget*)self);
}

void q_termwidget_on_is_title_changed(void* self, bool (*callback)()) {
    QTermWidget_OnIsTitleChanged((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_qbase_is_title_changed(void* self) {
    return QTermWidget_QBaseIsTitleChanged((QTermWidget*)self);
}

void q_termwidget_bracket_text(void* self, const char* text) {
    QTermWidget_BracketText((QTermWidget*)self, qstring(text));
}

void q_termwidget_on_bracket_text(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_OnBracketText((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_bracket_text(void* self, const char* text) {
    QTermWidget_QBaseBracketText((QTermWidget*)self, qstring(text));
}

void q_termwidget_disable_bracketed_paste_mode(void* self, bool disable) {
    QTermWidget_DisableBracketedPasteMode((QTermWidget*)self, disable);
}

void q_termwidget_on_disable_bracketed_paste_mode(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnDisableBracketedPasteMode((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_disable_bracketed_paste_mode(void* self, bool disable) {
    QTermWidget_QBaseDisableBracketedPasteMode((QTermWidget*)self, disable);
}

bool q_termwidget_bracketed_paste_mode_is_disabled(void* self) {
    return QTermWidget_BracketedPasteModeIsDisabled((QTermWidget*)self);
}

void q_termwidget_on_bracketed_paste_mode_is_disabled(void* self, bool (*callback)()) {
    QTermWidget_OnBracketedPasteModeIsDisabled((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_qbase_bracketed_paste_mode_is_disabled(void* self) {
    return QTermWidget_QBaseBracketedPasteModeIsDisabled((QTermWidget*)self);
}

void q_termwidget_set_margin(void* self, int margin) {
    QTermWidget_SetMargin((QTermWidget*)self, margin);
}

void q_termwidget_on_set_margin(void* self, void (*callback)(void*, int)) {
    QTermWidget_OnSetMargin((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_margin(void* self, int margin) {
    QTermWidget_QBaseSetMargin((QTermWidget*)self, margin);
}

int32_t q_termwidget_get_margin(void* self) {
    return QTermWidget_GetMargin((QTermWidget*)self);
}

void q_termwidget_on_get_margin(void* self, int32_t (*callback)()) {
    QTermWidget_OnGetMargin((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_qbase_get_margin(void* self) {
    return QTermWidget_QBaseGetMargin((QTermWidget*)self);
}

void q_termwidget_set_draw_line_chars(void* self, bool drawLineChars) {
    QTermWidget_SetDrawLineChars((QTermWidget*)self, drawLineChars);
}

void q_termwidget_on_set_draw_line_chars(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetDrawLineChars((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_draw_line_chars(void* self, bool drawLineChars) {
    QTermWidget_QBaseSetDrawLineChars((QTermWidget*)self, drawLineChars);
}

void q_termwidget_set_bold_intense(void* self, bool boldIntense) {
    QTermWidget_SetBoldIntense((QTermWidget*)self, boldIntense);
}

void q_termwidget_on_set_bold_intense(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetBoldIntense((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_bold_intense(void* self, bool boldIntense) {
    QTermWidget_QBaseSetBoldIntense((QTermWidget*)self, boldIntense);
}

void q_termwidget_set_confirm_multiline_paste(void* self, bool confirmMultilinePaste) {
    QTermWidget_SetConfirmMultilinePaste((QTermWidget*)self, confirmMultilinePaste);
}

void q_termwidget_on_set_confirm_multiline_paste(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetConfirmMultilinePaste((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_confirm_multiline_paste(void* self, bool confirmMultilinePaste) {
    QTermWidget_QBaseSetConfirmMultilinePaste((QTermWidget*)self, confirmMultilinePaste);
}

void q_termwidget_set_trim_pasted_trailing_newlines(void* self, bool trimPastedTrailingNewlines) {
    QTermWidget_SetTrimPastedTrailingNewlines((QTermWidget*)self, trimPastedTrailingNewlines);
}

void q_termwidget_on_set_trim_pasted_trailing_newlines(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetTrimPastedTrailingNewlines((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_trim_pasted_trailing_newlines(void* self, bool trimPastedTrailingNewlines) {
    QTermWidget_QBaseSetTrimPastedTrailingNewlines((QTermWidget*)self, trimPastedTrailingNewlines);
}

const char* q_termwidget_word_characters(void* self) {
    libqt_string _str = QTermWidget_WordCharacters((QTermWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_on_word_characters(void* self, const char* (*callback)()) {
    QTermWidget_OnWordCharacters((QTermWidget*)self, (intptr_t)callback);
}

const char* q_termwidget_qbase_word_characters(void* self) {
    libqt_string _str = QTermWidget_QBaseWordCharacters((QTermWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_word_characters(void* self, const char* chars) {
    QTermWidget_SetWordCharacters((QTermWidget*)self, qstring(chars));
}

void q_termwidget_on_set_word_characters(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_OnSetWordCharacters((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_set_word_characters(void* self, const char* chars) {
    QTermWidget_QBaseSetWordCharacters((QTermWidget*)self, qstring(chars));
}

QTermWidgetInterface* q_termwidget_create_widget(void* self, int startnow) {
    return QTermWidget_CreateWidget((QTermWidget*)self, startnow);
}

void q_termwidget_on_create_widget(void* self, QTermWidgetInterface* (*callback)(void*, int)) {
    QTermWidget_OnCreateWidget((QTermWidget*)self, (intptr_t)callback);
}

QTermWidgetInterface* q_termwidget_qbase_create_widget(void* self, int startnow) {
    return QTermWidget_QBaseCreateWidget((QTermWidget*)self, startnow);
}

void q_termwidget_finished(void* self) {
    QTermWidget_Finished((QTermWidget*)self);
}

void q_termwidget_on_finished(void* self, void (*callback)(void*)) {
    QTermWidget_Connect_Finished((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_copy_available(void* self, bool param1) {
    QTermWidget_CopyAvailable((QTermWidget*)self, param1);
}

void q_termwidget_on_copy_available(void* self, void (*callback)(void*, bool)) {
    QTermWidget_Connect_CopyAvailable((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_term_get_focus(void* self) {
    QTermWidget_TermGetFocus((QTermWidget*)self);
}

void q_termwidget_on_term_get_focus(void* self, void (*callback)(void*)) {
    QTermWidget_Connect_TermGetFocus((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_term_lost_focus(void* self) {
    QTermWidget_TermLostFocus((QTermWidget*)self);
}

void q_termwidget_on_term_lost_focus(void* self, void (*callback)(void*)) {
    QTermWidget_Connect_TermLostFocus((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_term_key_pressed(void* self, void* param1) {
    QTermWidget_TermKeyPressed((QTermWidget*)self, (QKeyEvent*)param1);
}

void q_termwidget_on_term_key_pressed(void* self, void (*callback)(void*, void*)) {
    QTermWidget_Connect_TermKeyPressed((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_url_activated(void* self, void* param1, bool fromContextMenu) {
    QTermWidget_UrlActivated((QTermWidget*)self, (QUrl*)param1, fromContextMenu);
}

void q_termwidget_on_url_activated(void* self, void (*callback)(void*, void*, bool)) {
    QTermWidget_Connect_UrlActivated((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_bell(void* self, const char* message) {
    QTermWidget_Bell((QTermWidget*)self, qstring(message));
}

void q_termwidget_on_bell(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_Connect_Bell((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_activity(void* self) {
    QTermWidget_Activity((QTermWidget*)self);
}

void q_termwidget_on_activity(void* self, void (*callback)(void*)) {
    QTermWidget_Connect_Activity((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_silence(void* self) {
    QTermWidget_Silence((QTermWidget*)self);
}

void q_termwidget_on_silence(void* self, void (*callback)(void*)) {
    QTermWidget_Connect_Silence((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_send_data(void* self, const char* param1, int param2) {
    QTermWidget_SendData((QTermWidget*)self, param1, param2);
}

void q_termwidget_on_send_data(void* self, void (*callback)(void*, const char*, int)) {
    QTermWidget_Connect_SendData((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_profile_changed(void* self, const char* profile) {
    QTermWidget_ProfileChanged((QTermWidget*)self, qstring(profile));
}

void q_termwidget_on_profile_changed(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_Connect_ProfileChanged((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_title_changed(void* self) {
    QTermWidget_TitleChanged((QTermWidget*)self);
}

void q_termwidget_on_title_changed(void* self, void (*callback)(void*)) {
    QTermWidget_Connect_TitleChanged((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_received_data(void* self, const char* text) {
    QTermWidget_ReceivedData((QTermWidget*)self, qstring(text));
}

void q_termwidget_on_received_data(void* self, void (*callback)(void*, const char*)) {
    QTermWidget_Connect_ReceivedData((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_copy_clipboard(void* self) {
    QTermWidget_CopyClipboard((QTermWidget*)self);
}

void q_termwidget_paste_clipboard(void* self) {
    QTermWidget_PasteClipboard((QTermWidget*)self);
}

void q_termwidget_paste_selection(void* self) {
    QTermWidget_PasteSelection((QTermWidget*)self);
}

void q_termwidget_zoom_in(void* self) {
    QTermWidget_ZoomIn((QTermWidget*)self);
}

void q_termwidget_zoom_out(void* self) {
    QTermWidget_ZoomOut((QTermWidget*)self);
}

void q_termwidget_set_size(void* self, void* size) {
    QTermWidget_SetSize((QTermWidget*)self, (QSize*)size);
}

void q_termwidget_set_key_bindings(void* self, const char* kb) {
    QTermWidget_SetKeyBindings((QTermWidget*)self, qstring(kb));
}

void q_termwidget_clear(void* self) {
    QTermWidget_Clear((QTermWidget*)self);
}

void q_termwidget_toggle_show_search_bar(void* self) {
    QTermWidget_ToggleShowSearchBar((QTermWidget*)self);
}

void q_termwidget_save_history(void* self, void* device) {
    QTermWidget_SaveHistory((QTermWidget*)self, (QIODevice*)device);
}

void q_termwidget_resize_event(void* self, void* param1) {
    QTermWidget_ResizeEvent((QTermWidget*)self, (QResizeEvent*)param1);
}

void q_termwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnResizeEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_resize_event(void* self, void* param1) {
    QTermWidget_QBaseResizeEvent((QTermWidget*)self, (QResizeEvent*)param1);
}

void q_termwidget_session_finished(void* self) {
    QTermWidget_SessionFinished((QTermWidget*)self);
}

void q_termwidget_on_session_finished(void* self, void (*callback)()) {
    QTermWidget_OnSessionFinished((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_session_finished(void* self) {
    QTermWidget_QBaseSessionFinished((QTermWidget*)self);
}

void q_termwidget_selection_changed(void* self, bool textSelected) {
    QTermWidget_SelectionChanged((QTermWidget*)self, textSelected);
}

void q_termwidget_on_selection_changed(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSelectionChanged((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_qbase_selection_changed(void* self, bool textSelected) {
    QTermWidget_QBaseSelectionChanged((QTermWidget*)self, textSelected);
}

const char* q_termwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_termwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_termwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_termwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_termwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_termwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_termwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_termwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_termwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_termwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_termwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_termwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_termwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_termwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_termwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_termwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_termwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_termwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_termwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_termwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_termwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_termwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_termwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_termwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_termwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_termwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_termwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_termwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_termwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_termwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_termwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_termwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_termwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_termwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_termwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_termwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_termwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_termwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_termwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_termwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_termwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_termwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_termwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_termwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_termwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_termwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_termwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_termwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_termwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_termwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_termwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_termwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_termwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_termwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_termwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_termwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_termwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_termwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_termwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_termwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_termwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_termwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_termwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_termwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_termwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_termwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_termwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_termwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_termwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_termwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_termwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_termwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_termwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_termwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_termwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_termwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_termwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_termwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_termwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_termwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_termwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_termwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_termwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_termwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_termwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_termwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_termwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_termwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_termwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_termwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_termwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_termwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_termwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_termwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_termwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_termwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_termwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_termwidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_termwidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_termwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_termwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_termwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_termwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_termwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_termwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_termwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_termwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_termwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_termwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_termwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_termwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_termwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_termwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_termwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_termwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_termwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_termwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_termwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_termwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_termwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_termwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_termwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_termwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_termwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_termwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_termwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_termwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_termwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_termwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_termwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_termwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_termwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_termwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_termwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_termwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_termwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_termwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_termwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_termwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_termwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_termwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_termwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_termwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_termwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_termwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_termwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_termwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_termwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_termwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_termwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_termwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_termwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_termwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_termwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_termwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_termwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_termwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_termwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_termwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_termwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_termwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_termwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_termwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_termwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_termwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_termwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_termwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_termwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_termwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_termwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_termwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_termwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_termwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_termwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_termwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_termwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_termwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_termwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_termwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_termwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_termwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_termwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_termwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_termwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_termwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_termwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_termwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_termwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_termwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_termwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_termwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_termwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_termwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_termwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_termwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_termwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_termwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_termwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_termwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_termwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_termwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_termwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_termwidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_termwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_termwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_termwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_termwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_termwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_termwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_termwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_termwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_termwidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_termwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_termwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_termwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_termwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_termwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_termwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_termwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_termwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_termwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_termwidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_termwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_termwidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_termwidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_termwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_termwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_termwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_termwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_termwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_termwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_termwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_termwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_termwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_termwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_termwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_termwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_termwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_termwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_termwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_termwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_termwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_termwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_termwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_termwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_termwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_termwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_termwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_termwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_termwidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_termwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_termwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_termwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_termwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_termwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_termwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_termwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_termwidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_termwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_termwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_termwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_termwidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_termwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_termwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_termwidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_termwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_termwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_termwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_termwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_termwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_termwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_termwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_termwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_termwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_termwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_termwidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_termwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_termwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_termwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_termwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_termwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_termwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_termwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_termwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_termwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_termwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_termwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_termwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_termwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_termwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_termwidget_dynamic_property_names\n");
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

QBindingStorage* q_termwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_termwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_termwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_termwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_termwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_termwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_termwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_termwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_termwidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_termwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_termwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_termwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_termwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_termwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_termwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_termwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_termwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_termwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_termwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_termwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_termwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_termwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_termwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_termwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_termwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_termwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_termwidget_operator_assign(void* self, void* param1) {
    QTermWidgetInterface_OperatorAssign((QTermWidgetInterface*)self, (QTermWidgetInterface*)param1);
}

int32_t q_termwidget_dev_type(void* self) {
    return QTermWidget_DevType((QTermWidget*)self);
}

int32_t q_termwidget_qbase_dev_type(void* self) {
    return QTermWidget_QBaseDevType((QTermWidget*)self);
}

void q_termwidget_on_dev_type(void* self, int32_t (*callback)()) {
    QTermWidget_OnDevType((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_set_visible(void* self, bool visible) {
    QTermWidget_SetVisible((QTermWidget*)self, visible);
}

void q_termwidget_qbase_set_visible(void* self, bool visible) {
    QTermWidget_QBaseSetVisible((QTermWidget*)self, visible);
}

void q_termwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QTermWidget_OnSetVisible((QTermWidget*)self, (intptr_t)callback);
}

QSize* q_termwidget_minimum_size_hint(void* self) {
    return QTermWidget_MinimumSizeHint((QTermWidget*)self);
}

QSize* q_termwidget_qbase_minimum_size_hint(void* self) {
    return QTermWidget_QBaseMinimumSizeHint((QTermWidget*)self);
}

void q_termwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QTermWidget_OnMinimumSizeHint((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_height_for_width(void* self, int param1) {
    return QTermWidget_HeightForWidth((QTermWidget*)self, param1);
}

int32_t q_termwidget_qbase_height_for_width(void* self, int param1) {
    return QTermWidget_QBaseHeightForWidth((QTermWidget*)self, param1);
}

void q_termwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QTermWidget_OnHeightForWidth((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_has_height_for_width(void* self) {
    return QTermWidget_HasHeightForWidth((QTermWidget*)self);
}

bool q_termwidget_qbase_has_height_for_width(void* self) {
    return QTermWidget_QBaseHasHeightForWidth((QTermWidget*)self);
}

void q_termwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QTermWidget_OnHasHeightForWidth((QTermWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_termwidget_paint_engine(void* self) {
    return QTermWidget_PaintEngine((QTermWidget*)self);
}

QPaintEngine* q_termwidget_qbase_paint_engine(void* self) {
    return QTermWidget_QBasePaintEngine((QTermWidget*)self);
}

void q_termwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QTermWidget_OnPaintEngine((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_event(void* self, void* event) {
    return QTermWidget_Event((QTermWidget*)self, (QEvent*)event);
}

bool q_termwidget_qbase_event(void* self, void* event) {
    return QTermWidget_QBaseEvent((QTermWidget*)self, (QEvent*)event);
}

void q_termwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QTermWidget_OnEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_mouse_press_event(void* self, void* event) {
    QTermWidget_MousePressEvent((QTermWidget*)self, (QMouseEvent*)event);
}

void q_termwidget_qbase_mouse_press_event(void* self, void* event) {
    QTermWidget_QBaseMousePressEvent((QTermWidget*)self, (QMouseEvent*)event);
}

void q_termwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnMousePressEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_mouse_release_event(void* self, void* event) {
    QTermWidget_MouseReleaseEvent((QTermWidget*)self, (QMouseEvent*)event);
}

void q_termwidget_qbase_mouse_release_event(void* self, void* event) {
    QTermWidget_QBaseMouseReleaseEvent((QTermWidget*)self, (QMouseEvent*)event);
}

void q_termwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnMouseReleaseEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_mouse_double_click_event(void* self, void* event) {
    QTermWidget_MouseDoubleClickEvent((QTermWidget*)self, (QMouseEvent*)event);
}

void q_termwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QTermWidget_QBaseMouseDoubleClickEvent((QTermWidget*)self, (QMouseEvent*)event);
}

void q_termwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnMouseDoubleClickEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_mouse_move_event(void* self, void* event) {
    QTermWidget_MouseMoveEvent((QTermWidget*)self, (QMouseEvent*)event);
}

void q_termwidget_qbase_mouse_move_event(void* self, void* event) {
    QTermWidget_QBaseMouseMoveEvent((QTermWidget*)self, (QMouseEvent*)event);
}

void q_termwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnMouseMoveEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_wheel_event(void* self, void* event) {
    QTermWidget_WheelEvent((QTermWidget*)self, (QWheelEvent*)event);
}

void q_termwidget_qbase_wheel_event(void* self, void* event) {
    QTermWidget_QBaseWheelEvent((QTermWidget*)self, (QWheelEvent*)event);
}

void q_termwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnWheelEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_key_press_event(void* self, void* event) {
    QTermWidget_KeyPressEvent((QTermWidget*)self, (QKeyEvent*)event);
}

void q_termwidget_qbase_key_press_event(void* self, void* event) {
    QTermWidget_QBaseKeyPressEvent((QTermWidget*)self, (QKeyEvent*)event);
}

void q_termwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnKeyPressEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_key_release_event(void* self, void* event) {
    QTermWidget_KeyReleaseEvent((QTermWidget*)self, (QKeyEvent*)event);
}

void q_termwidget_qbase_key_release_event(void* self, void* event) {
    QTermWidget_QBaseKeyReleaseEvent((QTermWidget*)self, (QKeyEvent*)event);
}

void q_termwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnKeyReleaseEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_focus_in_event(void* self, void* event) {
    QTermWidget_FocusInEvent((QTermWidget*)self, (QFocusEvent*)event);
}

void q_termwidget_qbase_focus_in_event(void* self, void* event) {
    QTermWidget_QBaseFocusInEvent((QTermWidget*)self, (QFocusEvent*)event);
}

void q_termwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnFocusInEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_focus_out_event(void* self, void* event) {
    QTermWidget_FocusOutEvent((QTermWidget*)self, (QFocusEvent*)event);
}

void q_termwidget_qbase_focus_out_event(void* self, void* event) {
    QTermWidget_QBaseFocusOutEvent((QTermWidget*)self, (QFocusEvent*)event);
}

void q_termwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnFocusOutEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_enter_event(void* self, void* event) {
    QTermWidget_EnterEvent((QTermWidget*)self, (QEnterEvent*)event);
}

void q_termwidget_qbase_enter_event(void* self, void* event) {
    QTermWidget_QBaseEnterEvent((QTermWidget*)self, (QEnterEvent*)event);
}

void q_termwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnEnterEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_leave_event(void* self, void* event) {
    QTermWidget_LeaveEvent((QTermWidget*)self, (QEvent*)event);
}

void q_termwidget_qbase_leave_event(void* self, void* event) {
    QTermWidget_QBaseLeaveEvent((QTermWidget*)self, (QEvent*)event);
}

void q_termwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnLeaveEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_paint_event(void* self, void* event) {
    QTermWidget_PaintEvent((QTermWidget*)self, (QPaintEvent*)event);
}

void q_termwidget_qbase_paint_event(void* self, void* event) {
    QTermWidget_QBasePaintEvent((QTermWidget*)self, (QPaintEvent*)event);
}

void q_termwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnPaintEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_move_event(void* self, void* event) {
    QTermWidget_MoveEvent((QTermWidget*)self, (QMoveEvent*)event);
}

void q_termwidget_qbase_move_event(void* self, void* event) {
    QTermWidget_QBaseMoveEvent((QTermWidget*)self, (QMoveEvent*)event);
}

void q_termwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnMoveEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_close_event(void* self, void* event) {
    QTermWidget_CloseEvent((QTermWidget*)self, (QCloseEvent*)event);
}

void q_termwidget_qbase_close_event(void* self, void* event) {
    QTermWidget_QBaseCloseEvent((QTermWidget*)self, (QCloseEvent*)event);
}

void q_termwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnCloseEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_context_menu_event(void* self, void* event) {
    QTermWidget_ContextMenuEvent((QTermWidget*)self, (QContextMenuEvent*)event);
}

void q_termwidget_qbase_context_menu_event(void* self, void* event) {
    QTermWidget_QBaseContextMenuEvent((QTermWidget*)self, (QContextMenuEvent*)event);
}

void q_termwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnContextMenuEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_tablet_event(void* self, void* event) {
    QTermWidget_TabletEvent((QTermWidget*)self, (QTabletEvent*)event);
}

void q_termwidget_qbase_tablet_event(void* self, void* event) {
    QTermWidget_QBaseTabletEvent((QTermWidget*)self, (QTabletEvent*)event);
}

void q_termwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnTabletEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_action_event(void* self, void* event) {
    QTermWidget_ActionEvent((QTermWidget*)self, (QActionEvent*)event);
}

void q_termwidget_qbase_action_event(void* self, void* event) {
    QTermWidget_QBaseActionEvent((QTermWidget*)self, (QActionEvent*)event);
}

void q_termwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnActionEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_drag_enter_event(void* self, void* event) {
    QTermWidget_DragEnterEvent((QTermWidget*)self, (QDragEnterEvent*)event);
}

void q_termwidget_qbase_drag_enter_event(void* self, void* event) {
    QTermWidget_QBaseDragEnterEvent((QTermWidget*)self, (QDragEnterEvent*)event);
}

void q_termwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnDragEnterEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_drag_move_event(void* self, void* event) {
    QTermWidget_DragMoveEvent((QTermWidget*)self, (QDragMoveEvent*)event);
}

void q_termwidget_qbase_drag_move_event(void* self, void* event) {
    QTermWidget_QBaseDragMoveEvent((QTermWidget*)self, (QDragMoveEvent*)event);
}

void q_termwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnDragMoveEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_drag_leave_event(void* self, void* event) {
    QTermWidget_DragLeaveEvent((QTermWidget*)self, (QDragLeaveEvent*)event);
}

void q_termwidget_qbase_drag_leave_event(void* self, void* event) {
    QTermWidget_QBaseDragLeaveEvent((QTermWidget*)self, (QDragLeaveEvent*)event);
}

void q_termwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnDragLeaveEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_drop_event(void* self, void* event) {
    QTermWidget_DropEvent((QTermWidget*)self, (QDropEvent*)event);
}

void q_termwidget_qbase_drop_event(void* self, void* event) {
    QTermWidget_QBaseDropEvent((QTermWidget*)self, (QDropEvent*)event);
}

void q_termwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnDropEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_show_event(void* self, void* event) {
    QTermWidget_ShowEvent((QTermWidget*)self, (QShowEvent*)event);
}

void q_termwidget_qbase_show_event(void* self, void* event) {
    QTermWidget_QBaseShowEvent((QTermWidget*)self, (QShowEvent*)event);
}

void q_termwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnShowEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_hide_event(void* self, void* event) {
    QTermWidget_HideEvent((QTermWidget*)self, (QHideEvent*)event);
}

void q_termwidget_qbase_hide_event(void* self, void* event) {
    QTermWidget_QBaseHideEvent((QTermWidget*)self, (QHideEvent*)event);
}

void q_termwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnHideEvent((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTermWidget_NativeEvent((QTermWidget*)self, qstring(eventType), message, result);
}

bool q_termwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTermWidget_QBaseNativeEvent((QTermWidget*)self, qstring(eventType), message, result);
}

void q_termwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QTermWidget_OnNativeEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_change_event(void* self, void* param1) {
    QTermWidget_ChangeEvent((QTermWidget*)self, (QEvent*)param1);
}

void q_termwidget_qbase_change_event(void* self, void* param1) {
    QTermWidget_QBaseChangeEvent((QTermWidget*)self, (QEvent*)param1);
}

void q_termwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnChangeEvent((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_metric(void* self, int32_t param1) {
    return QTermWidget_Metric((QTermWidget*)self, param1);
}

int32_t q_termwidget_qbase_metric(void* self, int32_t param1) {
    return QTermWidget_QBaseMetric((QTermWidget*)self, param1);
}

void q_termwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QTermWidget_OnMetric((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_init_painter(void* self, void* painter) {
    QTermWidget_InitPainter((QTermWidget*)self, (QPainter*)painter);
}

void q_termwidget_qbase_init_painter(void* self, void* painter) {
    QTermWidget_QBaseInitPainter((QTermWidget*)self, (QPainter*)painter);
}

void q_termwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnInitPainter((QTermWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_termwidget_redirected(void* self, void* offset) {
    return QTermWidget_Redirected((QTermWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_termwidget_qbase_redirected(void* self, void* offset) {
    return QTermWidget_QBaseRedirected((QTermWidget*)self, (QPoint*)offset);
}

void q_termwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QTermWidget_OnRedirected((QTermWidget*)self, (intptr_t)callback);
}

QPainter* q_termwidget_shared_painter(void* self) {
    return QTermWidget_SharedPainter((QTermWidget*)self);
}

QPainter* q_termwidget_qbase_shared_painter(void* self) {
    return QTermWidget_QBaseSharedPainter((QTermWidget*)self);
}

void q_termwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QTermWidget_OnSharedPainter((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_input_method_event(void* self, void* param1) {
    QTermWidget_InputMethodEvent((QTermWidget*)self, (QInputMethodEvent*)param1);
}

void q_termwidget_qbase_input_method_event(void* self, void* param1) {
    QTermWidget_QBaseInputMethodEvent((QTermWidget*)self, (QInputMethodEvent*)param1);
}

void q_termwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnInputMethodEvent((QTermWidget*)self, (intptr_t)callback);
}

QVariant* q_termwidget_input_method_query(void* self, int32_t param1) {
    return QTermWidget_InputMethodQuery((QTermWidget*)self, param1);
}

QVariant* q_termwidget_qbase_input_method_query(void* self, int32_t param1) {
    return QTermWidget_QBaseInputMethodQuery((QTermWidget*)self, param1);
}

void q_termwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QTermWidget_OnInputMethodQuery((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_focus_next_prev_child(void* self, bool next) {
    return QTermWidget_FocusNextPrevChild((QTermWidget*)self, next);
}

bool q_termwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QTermWidget_QBaseFocusNextPrevChild((QTermWidget*)self, next);
}

void q_termwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QTermWidget_OnFocusNextPrevChild((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_event_filter(void* self, void* watched, void* event) {
    return QTermWidget_EventFilter((QTermWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_termwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QTermWidget_QBaseEventFilter((QTermWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_termwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTermWidget_OnEventFilter((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_timer_event(void* self, void* event) {
    QTermWidget_TimerEvent((QTermWidget*)self, (QTimerEvent*)event);
}

void q_termwidget_qbase_timer_event(void* self, void* event) {
    QTermWidget_QBaseTimerEvent((QTermWidget*)self, (QTimerEvent*)event);
}

void q_termwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnTimerEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_child_event(void* self, void* event) {
    QTermWidget_ChildEvent((QTermWidget*)self, (QChildEvent*)event);
}

void q_termwidget_qbase_child_event(void* self, void* event) {
    QTermWidget_QBaseChildEvent((QTermWidget*)self, (QChildEvent*)event);
}

void q_termwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnChildEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_custom_event(void* self, void* event) {
    QTermWidget_CustomEvent((QTermWidget*)self, (QEvent*)event);
}

void q_termwidget_qbase_custom_event(void* self, void* event) {
    QTermWidget_QBaseCustomEvent((QTermWidget*)self, (QEvent*)event);
}

void q_termwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnCustomEvent((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_connect_notify(void* self, void* signal) {
    QTermWidget_ConnectNotify((QTermWidget*)self, (QMetaMethod*)signal);
}

void q_termwidget_qbase_connect_notify(void* self, void* signal) {
    QTermWidget_QBaseConnectNotify((QTermWidget*)self, (QMetaMethod*)signal);
}

void q_termwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnConnectNotify((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_disconnect_notify(void* self, void* signal) {
    QTermWidget_DisconnectNotify((QTermWidget*)self, (QMetaMethod*)signal);
}

void q_termwidget_qbase_disconnect_notify(void* self, void* signal) {
    QTermWidget_QBaseDisconnectNotify((QTermWidget*)self, (QMetaMethod*)signal);
}

void q_termwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTermWidget_OnDisconnectNotify((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_update_micro_focus(void* self) {
    QTermWidget_UpdateMicroFocus((QTermWidget*)self);
}

void q_termwidget_qbase_update_micro_focus(void* self) {
    QTermWidget_QBaseUpdateMicroFocus((QTermWidget*)self);
}

void q_termwidget_on_update_micro_focus(void* self, void (*callback)()) {
    QTermWidget_OnUpdateMicroFocus((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_create(void* self) {
    QTermWidget_Create((QTermWidget*)self);
}

void q_termwidget_qbase_create(void* self) {
    QTermWidget_QBaseCreate((QTermWidget*)self);
}

void q_termwidget_on_create(void* self, void (*callback)()) {
    QTermWidget_OnCreate((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_destroy(void* self) {
    QTermWidget_Destroy((QTermWidget*)self);
}

void q_termwidget_qbase_destroy(void* self) {
    QTermWidget_QBaseDestroy((QTermWidget*)self);
}

void q_termwidget_on_destroy(void* self, void (*callback)()) {
    QTermWidget_OnDestroy((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_focus_next_child(void* self) {
    return QTermWidget_FocusNextChild((QTermWidget*)self);
}

bool q_termwidget_qbase_focus_next_child(void* self) {
    return QTermWidget_QBaseFocusNextChild((QTermWidget*)self);
}

void q_termwidget_on_focus_next_child(void* self, bool (*callback)()) {
    QTermWidget_OnFocusNextChild((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_focus_previous_child(void* self) {
    return QTermWidget_FocusPreviousChild((QTermWidget*)self);
}

bool q_termwidget_qbase_focus_previous_child(void* self) {
    return QTermWidget_QBaseFocusPreviousChild((QTermWidget*)self);
}

void q_termwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QTermWidget_OnFocusPreviousChild((QTermWidget*)self, (intptr_t)callback);
}

QObject* q_termwidget_sender(void* self) {
    return QTermWidget_Sender((QTermWidget*)self);
}

QObject* q_termwidget_qbase_sender(void* self) {
    return QTermWidget_QBaseSender((QTermWidget*)self);
}

void q_termwidget_on_sender(void* self, QObject* (*callback)()) {
    QTermWidget_OnSender((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_sender_signal_index(void* self) {
    return QTermWidget_SenderSignalIndex((QTermWidget*)self);
}

int32_t q_termwidget_qbase_sender_signal_index(void* self) {
    return QTermWidget_QBaseSenderSignalIndex((QTermWidget*)self);
}

void q_termwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTermWidget_OnSenderSignalIndex((QTermWidget*)self, (intptr_t)callback);
}

int32_t q_termwidget_receivers(void* self, const char* signal) {
    return QTermWidget_Receivers((QTermWidget*)self, signal);
}

int32_t q_termwidget_qbase_receivers(void* self, const char* signal) {
    return QTermWidget_QBaseReceivers((QTermWidget*)self, signal);
}

void q_termwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTermWidget_OnReceivers((QTermWidget*)self, (intptr_t)callback);
}

bool q_termwidget_is_signal_connected(void* self, void* signal) {
    return QTermWidget_IsSignalConnected((QTermWidget*)self, (QMetaMethod*)signal);
}

bool q_termwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QTermWidget_QBaseIsSignalConnected((QTermWidget*)self, (QMetaMethod*)signal);
}

void q_termwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTermWidget_OnIsSignalConnected((QTermWidget*)self, (intptr_t)callback);
}

double q_termwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QTermWidget_GetDecodedMetricF((QTermWidget*)self, metricA, metricB);
}

double q_termwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QTermWidget_QBaseGetDecodedMetricF((QTermWidget*)self, metricA, metricB);
}

void q_termwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QTermWidget_OnGetDecodedMetricF((QTermWidget*)self, (intptr_t)callback);
}

void q_termwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_termwidget_delete(void* self) {
    QTermWidget_Delete((QTermWidget*)(self));
}
