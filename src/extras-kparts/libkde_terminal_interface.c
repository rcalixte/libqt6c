#include "../libqvariant.hpp"
#include "libkde_terminal_interface.hpp"
#include "libkde_terminal_interface.h"

void k_terminalinterface_start_program(void* self, const char* program, const char* args[static 1]) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_terminalinterface_start_program\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);
    TerminalInterface_StartProgram((TerminalInterface*)self, qstring(program), args_list);
    free(args_qstr);
}

void k_terminalinterface_show_shell_in_dir(void* self, const char* dir) {
    TerminalInterface_ShowShellInDir((TerminalInterface*)self, qstring(dir));
}

void k_terminalinterface_send_input(void* self, const char* text) {
    TerminalInterface_SendInput((TerminalInterface*)self, qstring(text));
}

int32_t k_terminalinterface_terminal_process_id(void* self) {
    return TerminalInterface_TerminalProcessId((TerminalInterface*)self);
}

int32_t k_terminalinterface_foreground_process_id(void* self) {
    return TerminalInterface_ForegroundProcessId((TerminalInterface*)self);
}

const char* k_terminalinterface_foreground_process_name(void* self) {
    libqt_string _str = TerminalInterface_ForegroundProcessName((TerminalInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_terminalinterface_current_working_directory(void* self) {
    libqt_string _str = TerminalInterface_CurrentWorkingDirectory((TerminalInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_terminalinterface_available_profiles(void* self) {
    libqt_list _arr = TerminalInterface_AvailableProfiles((TerminalInterface*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_terminalinterface_available_profiles\n");
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

const char* k_terminalinterface_current_profile_name(void* self) {
    libqt_string _str = TerminalInterface_CurrentProfileName((TerminalInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_terminalinterface_set_current_profile(void* self, const char* profileName) {
    return TerminalInterface_SetCurrentProfile((TerminalInterface*)self, qstring(profileName));
}

QVariant* k_terminalinterface_profile_property(void* self, const char* profileProperty) {
    return TerminalInterface_ProfileProperty((TerminalInterface*)self, qstring(profileProperty));
}

void k_terminalinterface_operator_assign(void* self, void* param1) {
    TerminalInterface_OperatorAssign((TerminalInterface*)self, (TerminalInterface*)param1);
}

void k_terminalinterface_delete(void* self) {
    TerminalInterface_Delete((TerminalInterface*)(self));
}
