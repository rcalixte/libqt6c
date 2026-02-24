#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqprocess.hpp"
#include "libkprocess.hpp"
#include "libkprocess.h"

KProcess* k_process_new() {
    return KProcess_new();
}

KProcess* k_process_new2(void* parent) {
    return KProcess_new2((QObject*)parent);
}

const QMetaObject* k_process_meta_object(void* self) {
    return KProcess_MetaObject((KProcess*)self);
}

void k_process_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KProcess_OnMetaObject((KProcess*)self, (intptr_t)callback);
}

const QMetaObject* k_process_super_meta_object(void* self) {
    return KProcess_SuperMetaObject((KProcess*)self);
}

void* k_process_metacast(void* self, const char* param1) {
    return KProcess_Metacast((KProcess*)self, param1);
}

void k_process_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KProcess_OnMetacast((KProcess*)self, (intptr_t)callback);
}

void* k_process_super_metacast(void* self, const char* param1) {
    return KProcess_SuperMetacast((KProcess*)self, param1);
}

int32_t k_process_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KProcess_Metacall((KProcess*)self, param1, param2, param3);
}

void k_process_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KProcess_OnMetacall((KProcess*)self, (intptr_t)callback);
}

int32_t k_process_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KProcess_SuperMetacall((KProcess*)self, param1, param2, param3);
}

const char* k_process_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_process_set_output_channel_mode(void* self, int32_t mode) {
    KProcess_SetOutputChannelMode((KProcess*)self, mode);
}

int32_t k_process_output_channel_mode(void* self) {
    return KProcess_OutputChannelMode((KProcess*)self);
}

void k_process_set_next_open_mode(void* self, int32_t mode) {
    KProcess_SetNextOpenMode((KProcess*)self, mode);
}

void k_process_set_env(void* self, const char* name, const char* value) {
    KProcess_SetEnv((KProcess*)self, qstring(name), qstring(value));
}

void k_process_unset_env(void* self, const char* name) {
    KProcess_UnsetEnv((KProcess*)self, qstring(name));
}

void k_process_clear_environment(void* self) {
    KProcess_ClearEnvironment((KProcess*)self);
}

void k_process_set_program(void* self, const char* exe) {
    KProcess_SetProgram((KProcess*)self, qstring(exe));
}

void k_process_set_program2(void* self, const char* argv[static 1]) {
    size_t argv_len = libqt_strv_length(argv);
    libqt_string* argv_qstr = (libqt_string*)malloc(argv_len * sizeof(libqt_string));
    if (argv_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_set_program2\n");
        abort();
    }
    for (size_t i = 0; i < argv_len; ++i) {
        argv_qstr[i] = qstring(argv[i]);
    }
    libqt_list argv_list = qlist(argv_qstr, argv_len);
    KProcess_SetProgram2((KProcess*)self, argv_list);
    free(argv_qstr);
}

KProcess* k_process_operator_shift_left(void* self, const char* arg) {
    return KProcess_OperatorShiftLeft((KProcess*)self, qstring(arg));
}

KProcess* k_process_operator_shift_left2(void* self, const char* args[static 1]) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_operator_shift_left2\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);
    KProcess* _out = KProcess_OperatorShiftLeft2((KProcess*)self, args_list);
    free(args_qstr);
    return _out;
}

void k_process_clear_program(void* self) {
    KProcess_ClearProgram((KProcess*)self);
}

void k_process_set_shell_command(void* self, const char* cmd) {
    KProcess_SetShellCommand((KProcess*)self, qstring(cmd));
}

const char** k_process_program(void* self) {
    libqt_list _arr = KProcess_Program((KProcess*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_program\n");
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

void k_process_start(void* self) {
    KProcess_Start((KProcess*)self);
}

int32_t k_process_execute(void* self) {
    return KProcess_Execute((KProcess*)self);
}

int32_t k_process_execute2(const char* exe) {
    return KProcess_Execute2(qstring(exe));
}

int32_t k_process_execute3(const char* argv[static 1]) {
    size_t argv_len = libqt_strv_length(argv);
    libqt_string* argv_qstr = (libqt_string*)malloc(argv_len * sizeof(libqt_string));
    if (argv_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_execute3\n");
        abort();
    }
    for (size_t i = 0; i < argv_len; ++i) {
        argv_qstr[i] = qstring(argv[i]);
    }
    libqt_list argv_list = qlist(argv_qstr, argv_len);
    int32_t _out = KProcess_Execute3(argv_list);
    free(argv_qstr);
    return _out;
}

int32_t k_process_start_detached(void* self) {
    return KProcess_StartDetached((KProcess*)self);
}

int32_t k_process_start_detached2(const char* exe) {
    return KProcess_StartDetached2(qstring(exe));
}

int32_t k_process_start_detached3(const char* argv[static 1]) {
    size_t argv_len = libqt_strv_length(argv);
    libqt_string* argv_qstr = (libqt_string*)malloc(argv_len * sizeof(libqt_string));
    if (argv_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_start_detached3\n");
        abort();
    }
    for (size_t i = 0; i < argv_len; ++i) {
        argv_qstr[i] = qstring(argv[i]);
    }
    libqt_list argv_list = qlist(argv_qstr, argv_len);
    int32_t _out = KProcess_StartDetached3(argv_list);
    free(argv_qstr);
    return _out;
}

const char* k_process_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_process_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_process_set_env3(void* self, const char* name, const char* value, bool overwrite) {
    KProcess_SetEnv3((KProcess*)self, qstring(name), qstring(value), overwrite);
}

void k_process_set_program22(void* self, const char* exe, const char* args[static 1]) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_set_program22\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);
    KProcess_SetProgram22((KProcess*)self, qstring(exe), args_list);
    free(args_qstr);
}

int32_t k_process_execute1(void* self, int msecs) {
    return KProcess_Execute1((KProcess*)self, msecs);
}

int32_t k_process_execute22(const char* exe, const char* args[static 1]) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_execute22\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);
    int32_t _out = KProcess_Execute22(qstring(exe), args_list);
    free(args_qstr);
    return _out;
}

int32_t k_process_execute32(const char* exe, const char* args[static 1], int msecs) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_execute32\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);
    int32_t _out = KProcess_Execute32(qstring(exe), args_list, msecs);
    free(args_qstr);
    return _out;
}

int32_t k_process_execute23(const char* argv[static 1], int msecs) {
    size_t argv_len = libqt_strv_length(argv);
    libqt_string* argv_qstr = (libqt_string*)malloc(argv_len * sizeof(libqt_string));
    if (argv_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_execute23\n");
        abort();
    }
    for (size_t i = 0; i < argv_len; ++i) {
        argv_qstr[i] = qstring(argv[i]);
    }
    libqt_list argv_list = qlist(argv_qstr, argv_len);
    int32_t _out = KProcess_Execute23(argv_list, msecs);
    free(argv_qstr);
    return _out;
}

int32_t k_process_start_detached22(const char* exe, const char* args[static 1]) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_start_detached22\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);
    int32_t _out = KProcess_StartDetached22(qstring(exe), args_list);
    free(args_qstr);
    return _out;
}

void k_process_start2(void* self) {
    QProcess_Start2((QProcess*)self);
}

void k_process_start_command(void* self, const char* command) {
    QProcess_StartCommand((QProcess*)self, qstring(command));
}

const char** k_process_arguments(void* self) {
    libqt_list _arr = QProcess_Arguments((QProcess*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_arguments\n");
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

void k_process_set_arguments(void* self, const char* arguments[static 1]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = (libqt_string*)malloc(arguments_len * sizeof(libqt_string));
    if (arguments_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_set_arguments\n");
        abort();
    }
    for (size_t i = 0; i < arguments_len; ++i) {
        arguments_qstr[i] = qstring(arguments[i]);
    }
    libqt_list arguments_list = qlist(arguments_qstr, arguments_len);
    QProcess_SetArguments((QProcess*)self, arguments_list);
    free(arguments_qstr);
}

int32_t k_process_process_channel_mode(void* self) {
    return QProcess_ProcessChannelMode((QProcess*)self);
}

void k_process_set_process_channel_mode(void* self, int32_t mode) {
    QProcess_SetProcessChannelMode((QProcess*)self, mode);
}

int32_t k_process_input_channel_mode(void* self) {
    return QProcess_InputChannelMode((QProcess*)self);
}

void k_process_set_input_channel_mode(void* self, int32_t mode) {
    QProcess_SetInputChannelMode((QProcess*)self, mode);
}

int32_t k_process_read_channel(void* self) {
    return QProcess_ReadChannel((QProcess*)self);
}

void k_process_set_read_channel(void* self, int32_t channel) {
    QProcess_SetReadChannel((QProcess*)self, channel);
}

void k_process_close_read_channel(void* self, int32_t channel) {
    QProcess_CloseReadChannel((QProcess*)self, channel);
}

void k_process_close_write_channel(void* self) {
    QProcess_CloseWriteChannel((QProcess*)self);
}

void k_process_set_standard_input_file(void* self, const char* fileName) {
    QProcess_SetStandardInputFile((QProcess*)self, qstring(fileName));
}

void k_process_set_standard_output_file(void* self, const char* fileName) {
    QProcess_SetStandardOutputFile((QProcess*)self, qstring(fileName));
}

void k_process_set_standard_error_file(void* self, const char* fileName) {
    QProcess_SetStandardErrorFile((QProcess*)self, qstring(fileName));
}

void k_process_set_standard_output_process(void* self, void* destination) {
    QProcess_SetStandardOutputProcess((QProcess*)self, (QProcess*)destination);
}

void k_process_fail_child_process_modifier(void* self, const char* description) {
    QProcess_FailChildProcessModifier((QProcess*)self, description);
}

QProcess__UnixProcessParameters* k_process_unix_process_parameters(void* self) {
    return QProcess_UnixProcessParameters((QProcess*)self);
}

void k_process_set_unix_process_parameters(void* self, void* params) {
    QProcess_SetUnixProcessParameters((QProcess*)self, (QProcess__UnixProcessParameters*)params);
}

void k_process_set_unix_process_parameters2(void* self, uint32_t flagsOnly) {
    QProcess_SetUnixProcessParameters2((QProcess*)self, flagsOnly);
}

const char* k_process_working_directory(void* self) {
    libqt_string _str = QProcess_WorkingDirectory((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_process_set_working_directory(void* self, const char* dir) {
    QProcess_SetWorkingDirectory((QProcess*)self, qstring(dir));
}

void k_process_set_environment(void* self, const char* environment[static 1]) {
    size_t environment_len = libqt_strv_length(environment);
    libqt_string* environment_qstr = (libqt_string*)malloc(environment_len * sizeof(libqt_string));
    if (environment_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_set_environment\n");
        abort();
    }
    for (size_t i = 0; i < environment_len; ++i) {
        environment_qstr[i] = qstring(environment[i]);
    }
    libqt_list environment_list = qlist(environment_qstr, environment_len);
    QProcess_SetEnvironment((QProcess*)self, environment_list);
    free(environment_qstr);
}

const char** k_process_environment(void* self) {
    libqt_list _arr = QProcess_Environment((QProcess*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_environment\n");
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

void k_process_set_process_environment(void* self, void* environment) {
    QProcess_SetProcessEnvironment((QProcess*)self, (QProcessEnvironment*)environment);
}

QProcessEnvironment* k_process_process_environment(void* self) {
    return QProcess_ProcessEnvironment((QProcess*)self);
}

int32_t k_process_error(void* self) {
    return QProcess_Error((QProcess*)self);
}

int32_t k_process_state(void* self) {
    return QProcess_State((QProcess*)self);
}

long long k_process_process_id(void* self) {
    return QProcess_ProcessId((QProcess*)self);
}

bool k_process_wait_for_started(void* self) {
    return QProcess_WaitForStarted((QProcess*)self);
}

bool k_process_wait_for_finished(void* self) {
    return QProcess_WaitForFinished((QProcess*)self);
}

char* k_process_read_all_standard_output(void* self) {
    libqt_string _str = QProcess_ReadAllStandardOutput((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_process_read_all_standard_error(void* self) {
    libqt_string _str = QProcess_ReadAllStandardError((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_process_exit_code(void* self) {
    return QProcess_ExitCode((QProcess*)self);
}

int32_t k_process_exit_status(void* self) {
    return QProcess_ExitStatus((QProcess*)self);
}

const char** k_process_system_environment() {
    libqt_list _arr = QProcess_SystemEnvironment();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_system_environment\n");
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

const char* k_process_null_device() {
    libqt_string _str = QProcess_NullDevice();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_process_terminate(void* self) {
    QProcess_Terminate((QProcess*)self);
}

void k_process_kill(void* self) {
    QProcess_Kill((QProcess*)self);
}

void k_process_finished(void* self, int exitCode) {
    QProcess_Finished((QProcess*)self, exitCode);
}

void k_process_on_finished(void* self, void (*callback)(void*, int)) {
    QProcess_Connect_Finished((QProcess*)self, (intptr_t)callback);
}

void k_process_error_occurred(void* self, int32_t error) {
    QProcess_ErrorOccurred((QProcess*)self, error);
}

void k_process_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QProcess_Connect_ErrorOccurred((QProcess*)self, (intptr_t)callback);
}

void k_process_start22(void* self, const char* program, const char* arguments[static 1]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = (libqt_string*)malloc(arguments_len * sizeof(libqt_string));
    if (arguments_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_start22\n");
        abort();
    }
    for (size_t i = 0; i < arguments_len; ++i) {
        arguments_qstr[i] = qstring(arguments[i]);
    }
    libqt_list arguments_list = qlist(arguments_qstr, arguments_len);
    QProcess_Start22((QProcess*)self, qstring(program), arguments_list);
    free(arguments_qstr);
}

void k_process_start3(void* self, const char* program, const char* arguments[static 1], int32_t mode) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = (libqt_string*)malloc(arguments_len * sizeof(libqt_string));
    if (arguments_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_start3\n");
        abort();
    }
    for (size_t i = 0; i < arguments_len; ++i) {
        arguments_qstr[i] = qstring(arguments[i]);
    }
    libqt_list arguments_list = qlist(arguments_qstr, arguments_len);
    QProcess_Start3((QProcess*)self, qstring(program), arguments_list, mode);
    free(arguments_qstr);
}

void k_process_start1(void* self, int32_t mode) {
    QProcess_Start1((QProcess*)self, mode);
}

void k_process_start_command2(void* self, const char* command, int32_t mode) {
    QProcess_StartCommand2((QProcess*)self, qstring(command), mode);
}

bool k_process_start_detached1(void* self, long long* pid) {
    return QProcess_StartDetached1((QProcess*)self, pid);
}

void k_process_set_standard_output_file2(void* self, const char* fileName, int32_t mode) {
    QProcess_SetStandardOutputFile2((QProcess*)self, qstring(fileName), mode);
}

void k_process_set_standard_error_file2(void* self, const char* fileName, int32_t mode) {
    QProcess_SetStandardErrorFile2((QProcess*)self, qstring(fileName), mode);
}

void k_process_fail_child_process_modifier2(void* self, const char* description, int error) {
    QProcess_FailChildProcessModifier2((QProcess*)self, description, error);
}

bool k_process_wait_for_started1(void* self, int msecs) {
    return QProcess_WaitForStarted1((QProcess*)self, msecs);
}

bool k_process_wait_for_finished1(void* self, int msecs) {
    return QProcess_WaitForFinished1((QProcess*)self, msecs);
}

bool k_process_start_detached4(const char* program, const char* arguments[static 1], const char* workingDirectory, long long* pid) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = (libqt_string*)malloc(arguments_len * sizeof(libqt_string));
    if (arguments_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_start_detached4\n");
        abort();
    }
    for (size_t i = 0; i < arguments_len; ++i) {
        arguments_qstr[i] = qstring(arguments[i]);
    }
    libqt_list arguments_list = qlist(arguments_qstr, arguments_len);
    bool _out = QProcess_StartDetached4(qstring(program), arguments_list, qstring(workingDirectory), pid);
    free(arguments_qstr);
    return _out;
}

void k_process_finished2(void* self, int exitCode, int32_t exitStatus) {
    QProcess_Finished2((QProcess*)self, exitCode, exitStatus);
}

void k_process_on_finished2(void* self, void (*callback)(void*, int, int32_t)) {
    QProcess_Connect_Finished2((QProcess*)self, (intptr_t)callback);
}

int32_t k_process_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void k_process_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool k_process_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool k_process_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool k_process_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool k_process_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t k_process_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t k_process_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t k_process_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void k_process_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t k_process_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void k_process_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long k_process_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* k_process_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_process_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long k_process_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* k_process_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_process_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void k_process_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void k_process_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool k_process_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long k_process_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long k_process_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long k_process_write3(void* self, char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long k_process_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* k_process_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long k_process_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void k_process_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool k_process_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool k_process_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* k_process_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_process_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void k_process_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void k_process_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void k_process_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void k_process_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void k_process_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void k_process_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void k_process_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void k_process_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void k_process_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void k_process_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void k_process_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* k_process_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_process_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_process_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_process_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_process_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_process_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_process_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_process_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_process_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_process_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_process_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_process_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_process_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_process_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_process_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_process_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_process_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_process_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_process_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_process_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_process_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_process_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_process_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_process_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_process_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_process_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_process_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_process_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_process_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_process_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_process_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_process_dynamic_property_names\n");
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

QBindingStorage* k_process_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_process_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_process_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_process_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_process_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_process_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_process_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_process_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_process_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_process_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_process_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_process_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_process_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_process_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_process_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_process_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_process_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_process_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_process_open(void* self, int32_t mode) {
    return KProcess_Open((KProcess*)self, mode);
}

bool k_process_super_open(void* self, int32_t mode) {
    return KProcess_SuperOpen((KProcess*)self, mode);
}

void k_process_on_open(void* self, bool (*callback)(void*, int32_t)) {
    KProcess_OnOpen((KProcess*)self, (intptr_t)callback);
}

bool k_process_wait_for_ready_read(void* self, int msecs) {
    return KProcess_WaitForReadyRead((KProcess*)self, msecs);
}

bool k_process_super_wait_for_ready_read(void* self, int msecs) {
    return KProcess_SuperWaitForReadyRead((KProcess*)self, msecs);
}

void k_process_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    KProcess_OnWaitForReadyRead((KProcess*)self, (intptr_t)callback);
}

bool k_process_wait_for_bytes_written(void* self, int msecs) {
    return KProcess_WaitForBytesWritten((KProcess*)self, msecs);
}

bool k_process_super_wait_for_bytes_written(void* self, int msecs) {
    return KProcess_SuperWaitForBytesWritten((KProcess*)self, msecs);
}

void k_process_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    KProcess_OnWaitForBytesWritten((KProcess*)self, (intptr_t)callback);
}

long long k_process_bytes_to_write(void* self) {
    return KProcess_BytesToWrite((KProcess*)self);
}

long long k_process_super_bytes_to_write(void* self) {
    return KProcess_SuperBytesToWrite((KProcess*)self);
}

void k_process_on_bytes_to_write(void* self, long long (*callback)()) {
    KProcess_OnBytesToWrite((KProcess*)self, (intptr_t)callback);
}

bool k_process_is_sequential(void* self) {
    return KProcess_IsSequential((KProcess*)self);
}

bool k_process_super_is_sequential(void* self) {
    return KProcess_SuperIsSequential((KProcess*)self);
}

void k_process_on_is_sequential(void* self, bool (*callback)()) {
    KProcess_OnIsSequential((KProcess*)self, (intptr_t)callback);
}

void k_process_close(void* self) {
    KProcess_Close((KProcess*)self);
}

void k_process_super_close(void* self) {
    KProcess_SuperClose((KProcess*)self);
}

void k_process_on_close(void* self, void (*callback)()) {
    KProcess_OnClose((KProcess*)self, (intptr_t)callback);
}

long long k_process_read_data(void* self, char* data, long long maxlen) {
    return KProcess_ReadData((KProcess*)self, data, maxlen);
}

long long k_process_super_read_data(void* self, char* data, long long maxlen) {
    return KProcess_SuperReadData((KProcess*)self, data, maxlen);
}

void k_process_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    KProcess_OnReadData((KProcess*)self, (intptr_t)callback);
}

long long k_process_write_data(void* self, const char* data, long long lenVal) {
    return KProcess_WriteData((KProcess*)self, data, lenVal);
}

long long k_process_super_write_data(void* self, const char* data, long long lenVal) {
    return KProcess_SuperWriteData((KProcess*)self, data, lenVal);
}

void k_process_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    KProcess_OnWriteData((KProcess*)self, (intptr_t)callback);
}

long long k_process_pos(void* self) {
    return KProcess_Pos((KProcess*)self);
}

long long k_process_super_pos(void* self) {
    return KProcess_SuperPos((KProcess*)self);
}

void k_process_on_pos(void* self, long long (*callback)()) {
    KProcess_OnPos((KProcess*)self, (intptr_t)callback);
}

long long k_process_size(void* self) {
    return KProcess_Size((KProcess*)self);
}

long long k_process_super_size(void* self) {
    return KProcess_SuperSize((KProcess*)self);
}

void k_process_on_size(void* self, long long (*callback)()) {
    KProcess_OnSize((KProcess*)self, (intptr_t)callback);
}

bool k_process_seek(void* self, long long pos) {
    return KProcess_Seek((KProcess*)self, pos);
}

bool k_process_super_seek(void* self, long long pos) {
    return KProcess_SuperSeek((KProcess*)self, pos);
}

void k_process_on_seek(void* self, bool (*callback)(void*, long long)) {
    KProcess_OnSeek((KProcess*)self, (intptr_t)callback);
}

bool k_process_at_end(void* self) {
    return KProcess_AtEnd((KProcess*)self);
}

bool k_process_super_at_end(void* self) {
    return KProcess_SuperAtEnd((KProcess*)self);
}

void k_process_on_at_end(void* self, bool (*callback)()) {
    KProcess_OnAtEnd((KProcess*)self, (intptr_t)callback);
}

bool k_process_reset(void* self) {
    return KProcess_Reset((KProcess*)self);
}

bool k_process_super_reset(void* self) {
    return KProcess_SuperReset((KProcess*)self);
}

void k_process_on_reset(void* self, bool (*callback)()) {
    KProcess_OnReset((KProcess*)self, (intptr_t)callback);
}

long long k_process_bytes_available(void* self) {
    return KProcess_BytesAvailable((KProcess*)self);
}

long long k_process_super_bytes_available(void* self) {
    return KProcess_SuperBytesAvailable((KProcess*)self);
}

void k_process_on_bytes_available(void* self, long long (*callback)()) {
    KProcess_OnBytesAvailable((KProcess*)self, (intptr_t)callback);
}

bool k_process_can_read_line(void* self) {
    return KProcess_CanReadLine((KProcess*)self);
}

bool k_process_super_can_read_line(void* self) {
    return KProcess_SuperCanReadLine((KProcess*)self);
}

void k_process_on_can_read_line(void* self, bool (*callback)()) {
    KProcess_OnCanReadLine((KProcess*)self, (intptr_t)callback);
}

long long k_process_read_line_data(void* self, char* data, long long maxlen) {
    return KProcess_ReadLineData((KProcess*)self, data, maxlen);
}

long long k_process_super_read_line_data(void* self, char* data, long long maxlen) {
    return KProcess_SuperReadLineData((KProcess*)self, data, maxlen);
}

void k_process_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    KProcess_OnReadLineData((KProcess*)self, (intptr_t)callback);
}

long long k_process_skip_data(void* self, long long maxSize) {
    return KProcess_SkipData((KProcess*)self, maxSize);
}

long long k_process_super_skip_data(void* self, long long maxSize) {
    return KProcess_SuperSkipData((KProcess*)self, maxSize);
}

void k_process_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    KProcess_OnSkipData((KProcess*)self, (intptr_t)callback);
}

bool k_process_event(void* self, void* event) {
    return KProcess_Event((KProcess*)self, (QEvent*)event);
}

bool k_process_super_event(void* self, void* event) {
    return KProcess_SuperEvent((KProcess*)self, (QEvent*)event);
}

void k_process_on_event(void* self, bool (*callback)(void*, void*)) {
    KProcess_OnEvent((KProcess*)self, (intptr_t)callback);
}

bool k_process_event_filter(void* self, void* watched, void* event) {
    return KProcess_EventFilter((KProcess*)self, (QObject*)watched, (QEvent*)event);
}

bool k_process_super_event_filter(void* self, void* watched, void* event) {
    return KProcess_SuperEventFilter((KProcess*)self, (QObject*)watched, (QEvent*)event);
}

void k_process_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KProcess_OnEventFilter((KProcess*)self, (intptr_t)callback);
}

void k_process_timer_event(void* self, void* event) {
    KProcess_TimerEvent((KProcess*)self, (QTimerEvent*)event);
}

void k_process_super_timer_event(void* self, void* event) {
    KProcess_SuperTimerEvent((KProcess*)self, (QTimerEvent*)event);
}

void k_process_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KProcess_OnTimerEvent((KProcess*)self, (intptr_t)callback);
}

void k_process_child_event(void* self, void* event) {
    KProcess_ChildEvent((KProcess*)self, (QChildEvent*)event);
}

void k_process_super_child_event(void* self, void* event) {
    KProcess_SuperChildEvent((KProcess*)self, (QChildEvent*)event);
}

void k_process_on_child_event(void* self, void (*callback)(void*, void*)) {
    KProcess_OnChildEvent((KProcess*)self, (intptr_t)callback);
}

void k_process_custom_event(void* self, void* event) {
    KProcess_CustomEvent((KProcess*)self, (QEvent*)event);
}

void k_process_super_custom_event(void* self, void* event) {
    KProcess_SuperCustomEvent((KProcess*)self, (QEvent*)event);
}

void k_process_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KProcess_OnCustomEvent((KProcess*)self, (intptr_t)callback);
}

void k_process_connect_notify(void* self, void* signal) {
    KProcess_ConnectNotify((KProcess*)self, (QMetaMethod*)signal);
}

void k_process_super_connect_notify(void* self, void* signal) {
    KProcess_SuperConnectNotify((KProcess*)self, (QMetaMethod*)signal);
}

void k_process_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KProcess_OnConnectNotify((KProcess*)self, (intptr_t)callback);
}

void k_process_disconnect_notify(void* self, void* signal) {
    KProcess_DisconnectNotify((KProcess*)self, (QMetaMethod*)signal);
}

void k_process_super_disconnect_notify(void* self, void* signal) {
    KProcess_SuperDisconnectNotify((KProcess*)self, (QMetaMethod*)signal);
}

void k_process_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KProcess_OnDisconnectNotify((KProcess*)self, (intptr_t)callback);
}

void k_process_set_process_state(void* self, int32_t state) {
    KProcess_SetProcessState((KProcess*)self, state);
}

void k_process_super_set_process_state(void* self, int32_t state) {
    KProcess_SuperSetProcessState((KProcess*)self, state);
}

void k_process_on_set_process_state(void* self, void (*callback)(void*, int32_t)) {
    KProcess_OnSetProcessState((KProcess*)self, (intptr_t)callback);
}

void k_process_set_open_mode(void* self, int32_t openMode) {
    KProcess_SetOpenMode((KProcess*)self, openMode);
}

void k_process_super_set_open_mode(void* self, int32_t openMode) {
    KProcess_SuperSetOpenMode((KProcess*)self, openMode);
}

void k_process_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    KProcess_OnSetOpenMode((KProcess*)self, (intptr_t)callback);
}

void k_process_set_error_string(void* self, const char* errorString) {
    KProcess_SetErrorString((KProcess*)self, qstring(errorString));
}

void k_process_super_set_error_string(void* self, const char* errorString) {
    KProcess_SuperSetErrorString((KProcess*)self, qstring(errorString));
}

void k_process_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    KProcess_OnSetErrorString((KProcess*)self, (intptr_t)callback);
}

QObject* k_process_sender(void* self) {
    return KProcess_Sender((KProcess*)self);
}

QObject* k_process_super_sender(void* self) {
    return KProcess_SuperSender((KProcess*)self);
}

void k_process_on_sender(void* self, QObject* (*callback)()) {
    KProcess_OnSender((KProcess*)self, (intptr_t)callback);
}

int32_t k_process_sender_signal_index(void* self) {
    return KProcess_SenderSignalIndex((KProcess*)self);
}

int32_t k_process_super_sender_signal_index(void* self) {
    return KProcess_SuperSenderSignalIndex((KProcess*)self);
}

void k_process_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KProcess_OnSenderSignalIndex((KProcess*)self, (intptr_t)callback);
}

int32_t k_process_receivers(void* self, const char* signal) {
    return KProcess_Receivers((KProcess*)self, signal);
}

int32_t k_process_super_receivers(void* self, const char* signal) {
    return KProcess_SuperReceivers((KProcess*)self, signal);
}

void k_process_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KProcess_OnReceivers((KProcess*)self, (intptr_t)callback);
}

bool k_process_is_signal_connected(void* self, void* signal) {
    return KProcess_IsSignalConnected((KProcess*)self, (QMetaMethod*)signal);
}

bool k_process_super_is_signal_connected(void* self, void* signal) {
    return KProcess_SuperIsSignalConnected((KProcess*)self, (QMetaMethod*)signal);
}

void k_process_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KProcess_OnIsSignalConnected((KProcess*)self, (intptr_t)callback);
}

void k_process_on_started(void* self, void (*callback)(void*)) {
    QProcess_Connect_Started((QProcess*)self, (intptr_t)callback);
}

void k_process_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QProcess_Connect_StateChanged((QProcess*)self, (intptr_t)callback);
}

void k_process_on_ready_read_standard_output(void* self, void (*callback)(void*)) {
    QProcess_Connect_ReadyReadStandardOutput((QProcess*)self, (intptr_t)callback);
}

void k_process_on_ready_read_standard_error(void* self, void (*callback)(void*)) {
    QProcess_Connect_ReadyReadStandardError((QProcess*)self, (intptr_t)callback);
}

void k_process_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_process_delete(void* self) {
    KProcess_Delete((KProcess*)(self));
}
