#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqprocess.hpp"
#include "libqprocess.h"

QProcessEnvironment* q_processenvironment_new() {
    return QProcessEnvironment_new();
}

QProcessEnvironment* q_processenvironment_new2(int64_t param1) {
    return QProcessEnvironment_new2(param1);
}

QProcessEnvironment* q_processenvironment_new3(void* other) {
    return QProcessEnvironment_new3((QProcessEnvironment*)other);
}

void q_processenvironment_operator_assign(void* self, void* other) {
    QProcessEnvironment_OperatorAssign((QProcessEnvironment*)self, (QProcessEnvironment*)other);
}

void q_processenvironment_swap(void* self, void* other) {
    QProcessEnvironment_Swap((QProcessEnvironment*)self, (QProcessEnvironment*)other);
}

bool q_processenvironment_operator_equal(void* self, void* other) {
    return QProcessEnvironment_OperatorEqual((QProcessEnvironment*)self, (QProcessEnvironment*)other);
}

bool q_processenvironment_operator_not_equal(void* self, void* other) {
    return QProcessEnvironment_OperatorNotEqual((QProcessEnvironment*)self, (QProcessEnvironment*)other);
}

bool q_processenvironment_is_empty(void* self) {
    return QProcessEnvironment_IsEmpty((QProcessEnvironment*)self);
}

bool q_processenvironment_inherits_from_parent(void* self) {
    return QProcessEnvironment_InheritsFromParent((QProcessEnvironment*)self);
}

void q_processenvironment_clear(void* self) {
    QProcessEnvironment_Clear((QProcessEnvironment*)self);
}

bool q_processenvironment_contains(void* self, const char* name) {
    return QProcessEnvironment_Contains((QProcessEnvironment*)self, qstring(name));
}

void q_processenvironment_insert(void* self, const char* name, const char* value) {
    QProcessEnvironment_Insert((QProcessEnvironment*)self, qstring(name), qstring(value));
}

void q_processenvironment_remove(void* self, const char* name) {
    QProcessEnvironment_Remove((QProcessEnvironment*)self, qstring(name));
}

const char* q_processenvironment_value(void* self, const char* name) {
    libqt_string _str = QProcessEnvironment_Value((QProcessEnvironment*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_processenvironment_to_string_list(void* self) {
    libqt_list _arr = QProcessEnvironment_ToStringList((QProcessEnvironment*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_processenvironment_keys(void* self) {
    libqt_list _arr = QProcessEnvironment_Keys((QProcessEnvironment*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_processenvironment_insert_with_q_process_environment(void* self, void* e) {
    QProcessEnvironment_InsertWithQProcessEnvironment((QProcessEnvironment*)self, (QProcessEnvironment*)e);
}

QProcessEnvironment* q_processenvironment_system_environment() {
    return QProcessEnvironment_SystemEnvironment();
}

const char* q_processenvironment_value2(void* self, const char* name, const char* defaultValue) {
    libqt_string _str = QProcessEnvironment_Value2((QProcessEnvironment*)self, qstring(name), qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_processenvironment_delete(void* self) {
    QProcessEnvironment_Delete((QProcessEnvironment*)(self));
}

QProcess* q_process_new() {
    return QProcess_new();
}

QProcess* q_process_new2(void* parent) {
    return QProcess_new2((QObject*)parent);
}

QMetaObject* q_process_meta_object(void* self) {
    return QProcess_MetaObject((QProcess*)self);
}

void* q_process_metacast(void* self, const char* param1) {
    return QProcess_Metacast((QProcess*)self, param1);
}

int32_t q_process_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProcess_Metacall((QProcess*)self, param1, param2, param3);
}

void q_process_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QProcess_OnMetacall((QProcess*)self, (intptr_t)slot);
}

int32_t q_process_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProcess_QBaseMetacall((QProcess*)self, param1, param2, param3);
}

const char* q_process_tr(const char* s) {
    libqt_string _str = QProcess_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_process_start(void* self, const char* program) {
    QProcess_Start((QProcess*)self, qstring(program));
}

void q_process_start2(void* self) {
    QProcess_Start2((QProcess*)self);
}

void q_process_start_command(void* self, const char* command) {
    QProcess_StartCommand((QProcess*)self, qstring(command));
}

bool q_process_start_detached(void* self) {
    return QProcess_StartDetached((QProcess*)self);
}

bool q_process_open(void* self, int64_t mode) {
    return QProcess_Open((QProcess*)self, mode);
}

void q_process_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QProcess_OnOpen((QProcess*)self, (intptr_t)slot);
}

bool q_process_qbase_open(void* self, int64_t mode) {
    return QProcess_QBaseOpen((QProcess*)self, mode);
}

const char* q_process_program(void* self) {
    libqt_string _str = QProcess_Program((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_process_set_program(void* self, const char* program) {
    QProcess_SetProgram((QProcess*)self, qstring(program));
}

const char** q_process_arguments(void* self) {
    libqt_list _arr = QProcess_Arguments((QProcess*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_process_set_arguments(void* self, const char* arguments[]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    QProcess_SetArguments((QProcess*)self, arguments_list);
}

int64_t q_process_process_channel_mode(void* self) {
    return QProcess_ProcessChannelMode((QProcess*)self);
}

void q_process_set_process_channel_mode(void* self, int64_t mode) {
    QProcess_SetProcessChannelMode((QProcess*)self, mode);
}

int64_t q_process_input_channel_mode(void* self) {
    return QProcess_InputChannelMode((QProcess*)self);
}

void q_process_set_input_channel_mode(void* self, int64_t mode) {
    QProcess_SetInputChannelMode((QProcess*)self, mode);
}

int64_t q_process_read_channel(void* self) {
    return QProcess_ReadChannel((QProcess*)self);
}

void q_process_set_read_channel(void* self, int64_t channel) {
    QProcess_SetReadChannel((QProcess*)self, channel);
}

void q_process_close_read_channel(void* self, int64_t channel) {
    QProcess_CloseReadChannel((QProcess*)self, channel);
}

void q_process_close_write_channel(void* self) {
    QProcess_CloseWriteChannel((QProcess*)self);
}

void q_process_set_standard_input_file(void* self, const char* fileName) {
    QProcess_SetStandardInputFile((QProcess*)self, qstring(fileName));
}

void q_process_set_standard_output_file(void* self, const char* fileName) {
    QProcess_SetStandardOutputFile((QProcess*)self, qstring(fileName));
}

void q_process_set_standard_error_file(void* self, const char* fileName) {
    QProcess_SetStandardErrorFile((QProcess*)self, qstring(fileName));
}

void q_process_set_standard_output_process(void* self, void* destination) {
    QProcess_SetStandardOutputProcess((QProcess*)self, (QProcess*)destination);
}

const char* q_process_working_directory(void* self) {
    libqt_string _str = QProcess_WorkingDirectory((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_process_set_working_directory(void* self, const char* dir) {
    QProcess_SetWorkingDirectory((QProcess*)self, qstring(dir));
}

void q_process_set_environment(void* self, const char* environment[]) {
    size_t environment_len = libqt_strv_length(environment);
    libqt_string* environment_qstr = malloc(environment_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < environment_len; ++_i) {
        environment_qstr[_i] = qstring(environment[_i]);
    }
    libqt_list environment_list = qstrlist(environment_qstr, environment_len);
    QProcess_SetEnvironment((QProcess*)self, environment_list);
}

const char** q_process_environment(void* self) {
    libqt_list _arr = QProcess_Environment((QProcess*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_process_set_process_environment(void* self, void* environment) {
    QProcess_SetProcessEnvironment((QProcess*)self, (QProcessEnvironment*)environment);
}

QProcessEnvironment* q_process_process_environment(void* self) {
    return QProcess_ProcessEnvironment((QProcess*)self);
}

int64_t q_process_error(void* self) {
    return QProcess_Error((QProcess*)self);
}

int64_t q_process_state(void* self) {
    return QProcess_State((QProcess*)self);
}

long long q_process_process_id(void* self) {
    return QProcess_ProcessId((QProcess*)self);
}

bool q_process_wait_for_started(void* self) {
    return QProcess_WaitForStarted((QProcess*)self);
}

bool q_process_wait_for_ready_read(void* self, int msecs) {
    return QProcess_WaitForReadyRead((QProcess*)self, msecs);
}

void q_process_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QProcess_OnWaitForReadyRead((QProcess*)self, (intptr_t)slot);
}

bool q_process_qbase_wait_for_ready_read(void* self, int msecs) {
    return QProcess_QBaseWaitForReadyRead((QProcess*)self, msecs);
}

bool q_process_wait_for_bytes_written(void* self, int msecs) {
    return QProcess_WaitForBytesWritten((QProcess*)self, msecs);
}

void q_process_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QProcess_OnWaitForBytesWritten((QProcess*)self, (intptr_t)slot);
}

bool q_process_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QProcess_QBaseWaitForBytesWritten((QProcess*)self, msecs);
}

bool q_process_wait_for_finished(void* self) {
    return QProcess_WaitForFinished((QProcess*)self);
}

char* q_process_read_all_standard_output(void* self) {
    libqt_string _str = QProcess_ReadAllStandardOutput((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_process_read_all_standard_error(void* self) {
    libqt_string _str = QProcess_ReadAllStandardError((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_process_exit_code(void* self) {
    return QProcess_ExitCode((QProcess*)self);
}

int64_t q_process_exit_status(void* self) {
    return QProcess_ExitStatus((QProcess*)self);
}

long long q_process_bytes_to_write(void* self) {
    return QProcess_BytesToWrite((QProcess*)self);
}

void q_process_on_bytes_to_write(void* self, long long (*slot)()) {
    QProcess_OnBytesToWrite((QProcess*)self, (intptr_t)slot);
}

long long q_process_qbase_bytes_to_write(void* self) {
    return QProcess_QBaseBytesToWrite((QProcess*)self);
}

bool q_process_is_sequential(void* self) {
    return QProcess_IsSequential((QProcess*)self);
}

void q_process_on_is_sequential(void* self, bool (*slot)()) {
    QProcess_OnIsSequential((QProcess*)self, (intptr_t)slot);
}

bool q_process_qbase_is_sequential(void* self) {
    return QProcess_QBaseIsSequential((QProcess*)self);
}

void q_process_close(void* self) {
    QProcess_Close((QProcess*)self);
}

void q_process_on_close(void* self, void (*slot)()) {
    QProcess_OnClose((QProcess*)self, (intptr_t)slot);
}

void q_process_qbase_close(void* self) {
    QProcess_QBaseClose((QProcess*)self);
}

int32_t q_process_execute(const char* program) {
    return QProcess_Execute(qstring(program));
}

bool q_process_start_detached_with_program(const char* program) {
    return QProcess_StartDetachedWithProgram(qstring(program));
}

const char** q_process_system_environment() {
    libqt_list _arr = QProcess_SystemEnvironment();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char* q_process_null_device() {
    libqt_string _str = QProcess_NullDevice();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_process_terminate(void* self) {
    QProcess_Terminate((QProcess*)self);
}

void q_process_kill(void* self) {
    QProcess_Kill((QProcess*)self);
}

void q_process_finished(void* self, int exitCode) {
    QProcess_Finished((QProcess*)self, exitCode);
}

void q_process_on_finished(void* self, void (*slot)(void*, int)) {
    QProcess_Connect_Finished((QProcess*)self, (intptr_t)slot);
}

void q_process_error_occurred(void* self, int64_t errorVal) {
    QProcess_ErrorOccurred((QProcess*)self, errorVal);
}

void q_process_on_error_occurred(void* self, void (*slot)(void*, int64_t)) {
    QProcess_Connect_ErrorOccurred((QProcess*)self, (intptr_t)slot);
}

void q_process_set_process_state(void* self, int64_t state) {
    QProcess_SetProcessState((QProcess*)self, state);
}

void q_process_on_set_process_state(void* self, void (*slot)(void*, int64_t)) {
    QProcess_OnSetProcessState((QProcess*)self, (intptr_t)slot);
}

void q_process_qbase_set_process_state(void* self, int64_t state) {
    QProcess_QBaseSetProcessState((QProcess*)self, state);
}

long long q_process_read_data(void* self, char* data, long long maxlen) {
    return QProcess_ReadData((QProcess*)self, data, maxlen);
}

void q_process_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QProcess_OnReadData((QProcess*)self, (intptr_t)slot);
}

long long q_process_qbase_read_data(void* self, char* data, long long maxlen) {
    return QProcess_QBaseReadData((QProcess*)self, data, maxlen);
}

long long q_process_write_data(void* self, const char* data, long long lenVal) {
    return QProcess_WriteData((QProcess*)self, data, lenVal);
}

void q_process_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QProcess_OnWriteData((QProcess*)self, (intptr_t)slot);
}

long long q_process_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QProcess_QBaseWriteData((QProcess*)self, data, lenVal);
}

const char* q_process_tr2(const char* s, const char* c) {
    libqt_string _str = QProcess_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_process_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QProcess_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_process_start22(void* self, const char* program, const char* arguments[]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    QProcess_Start22((QProcess*)self, qstring(program), arguments_list);
}

void q_process_start3(void* self, const char* program, const char* arguments[], int64_t mode) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    QProcess_Start3((QProcess*)self, qstring(program), arguments_list, mode);
}

void q_process_start1(void* self, int64_t mode) {
    QProcess_Start1((QProcess*)self, mode);
}

void q_process_start_command2(void* self, const char* command, int64_t mode) {
    QProcess_StartCommand2((QProcess*)self, qstring(command), mode);
}

bool q_process_start_detached1(void* self, long long* pid) {
    return QProcess_StartDetached1((QProcess*)self, pid);
}

void q_process_set_standard_output_file2(void* self, const char* fileName, int64_t mode) {
    QProcess_SetStandardOutputFile2((QProcess*)self, qstring(fileName), mode);
}

void q_process_set_standard_error_file2(void* self, const char* fileName, int64_t mode) {
    QProcess_SetStandardErrorFile2((QProcess*)self, qstring(fileName), mode);
}

bool q_process_wait_for_started1(void* self, int msecs) {
    return QProcess_WaitForStarted1((QProcess*)self, msecs);
}

bool q_process_wait_for_finished1(void* self, int msecs) {
    return QProcess_WaitForFinished1((QProcess*)self, msecs);
}

int32_t q_process_execute2(const char* program, const char* arguments[]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    return QProcess_Execute2(qstring(program), arguments_list);
}

bool q_process_start_detached2(const char* program, const char* arguments[]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    return QProcess_StartDetached2(qstring(program), arguments_list);
}

bool q_process_start_detached3(const char* program, const char* arguments[], const char* workingDirectory) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    return QProcess_StartDetached3(qstring(program), arguments_list, qstring(workingDirectory));
}

bool q_process_start_detached4(const char* program, const char* arguments[], const char* workingDirectory, long long* pid) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    return QProcess_StartDetached4(qstring(program), arguments_list, qstring(workingDirectory), pid);
}

void q_process_finished2(void* self, int exitCode, int64_t exitStatus) {
    QProcess_Finished2((QProcess*)self, exitCode, exitStatus);
}

void q_process_on_finished2(void* self, void (*slot)(void*, int, int64_t)) {
    QProcess_Connect_Finished2((QProcess*)self, (intptr_t)slot);
}

int64_t q_process_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_process_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_process_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_process_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_process_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_process_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_process_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_process_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_process_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_process_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_process_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_process_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_process_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_process_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_process_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_process_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_process_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_process_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_process_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_process_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_process_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_process_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_process_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

long long q_process_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

long long q_process_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_process_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_process_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_process_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_process_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_process_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_process_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_process_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_process_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

void q_process_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_process_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

void q_process_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_process_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

void q_process_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_process_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

void q_process_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_process_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

void q_process_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_process_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

char* q_process_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_process_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_process_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_process_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_process_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_process_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_process_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_process_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_process_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_process_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_process_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_process_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_process_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_process_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_process_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_process_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_process_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_process_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_process_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_process_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_process_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_process_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_process_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_process_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_process_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_process_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_process_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_process_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_process_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_process_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_process_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_process_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_process_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_process_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_process_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_process_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_process_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

long long q_process_pos(void* self) {
    return QProcess_Pos((QProcess*)self);
}

long long q_process_qbase_pos(void* self) {
    return QProcess_QBasePos((QProcess*)self);
}

void q_process_on_pos(void* self, long long (*slot)()) {
    QProcess_OnPos((QProcess*)self, (intptr_t)slot);
}

long long q_process_size(void* self) {
    return QProcess_Size((QProcess*)self);
}

long long q_process_qbase_size(void* self) {
    return QProcess_QBaseSize((QProcess*)self);
}

void q_process_on_size(void* self, long long (*slot)()) {
    QProcess_OnSize((QProcess*)self, (intptr_t)slot);
}

bool q_process_seek(void* self, long long pos) {
    return QProcess_Seek((QProcess*)self, pos);
}

bool q_process_qbase_seek(void* self, long long pos) {
    return QProcess_QBaseSeek((QProcess*)self, pos);
}

void q_process_on_seek(void* self, bool (*slot)(void*, long long)) {
    QProcess_OnSeek((QProcess*)self, (intptr_t)slot);
}

bool q_process_at_end(void* self) {
    return QProcess_AtEnd((QProcess*)self);
}

bool q_process_qbase_at_end(void* self) {
    return QProcess_QBaseAtEnd((QProcess*)self);
}

void q_process_on_at_end(void* self, bool (*slot)()) {
    QProcess_OnAtEnd((QProcess*)self, (intptr_t)slot);
}

bool q_process_reset(void* self) {
    return QProcess_Reset((QProcess*)self);
}

bool q_process_qbase_reset(void* self) {
    return QProcess_QBaseReset((QProcess*)self);
}

void q_process_on_reset(void* self, bool (*slot)()) {
    QProcess_OnReset((QProcess*)self, (intptr_t)slot);
}

long long q_process_bytes_available(void* self) {
    return QProcess_BytesAvailable((QProcess*)self);
}

long long q_process_qbase_bytes_available(void* self) {
    return QProcess_QBaseBytesAvailable((QProcess*)self);
}

void q_process_on_bytes_available(void* self, long long (*slot)()) {
    QProcess_OnBytesAvailable((QProcess*)self, (intptr_t)slot);
}

bool q_process_can_read_line(void* self) {
    return QProcess_CanReadLine((QProcess*)self);
}

bool q_process_qbase_can_read_line(void* self) {
    return QProcess_QBaseCanReadLine((QProcess*)self);
}

void q_process_on_can_read_line(void* self, bool (*slot)()) {
    QProcess_OnCanReadLine((QProcess*)self, (intptr_t)slot);
}

long long q_process_read_line_data(void* self, char* data, long long maxlen) {
    return QProcess_ReadLineData((QProcess*)self, data, maxlen);
}

long long q_process_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QProcess_QBaseReadLineData((QProcess*)self, data, maxlen);
}

void q_process_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QProcess_OnReadLineData((QProcess*)self, (intptr_t)slot);
}

long long q_process_skip_data(void* self, long long maxSize) {
    return QProcess_SkipData((QProcess*)self, maxSize);
}

long long q_process_qbase_skip_data(void* self, long long maxSize) {
    return QProcess_QBaseSkipData((QProcess*)self, maxSize);
}

void q_process_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QProcess_OnSkipData((QProcess*)self, (intptr_t)slot);
}

bool q_process_event(void* self, void* event) {
    return QProcess_Event((QProcess*)self, (QEvent*)event);
}

bool q_process_qbase_event(void* self, void* event) {
    return QProcess_QBaseEvent((QProcess*)self, (QEvent*)event);
}

void q_process_on_event(void* self, bool (*slot)(void*, void*)) {
    QProcess_OnEvent((QProcess*)self, (intptr_t)slot);
}

bool q_process_event_filter(void* self, void* watched, void* event) {
    return QProcess_EventFilter((QProcess*)self, (QObject*)watched, (QEvent*)event);
}

bool q_process_qbase_event_filter(void* self, void* watched, void* event) {
    return QProcess_QBaseEventFilter((QProcess*)self, (QObject*)watched, (QEvent*)event);
}

void q_process_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QProcess_OnEventFilter((QProcess*)self, (intptr_t)slot);
}

void q_process_timer_event(void* self, void* event) {
    QProcess_TimerEvent((QProcess*)self, (QTimerEvent*)event);
}

void q_process_qbase_timer_event(void* self, void* event) {
    QProcess_QBaseTimerEvent((QProcess*)self, (QTimerEvent*)event);
}

void q_process_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QProcess_OnTimerEvent((QProcess*)self, (intptr_t)slot);
}

void q_process_child_event(void* self, void* event) {
    QProcess_ChildEvent((QProcess*)self, (QChildEvent*)event);
}

void q_process_qbase_child_event(void* self, void* event) {
    QProcess_QBaseChildEvent((QProcess*)self, (QChildEvent*)event);
}

void q_process_on_child_event(void* self, void (*slot)(void*, void*)) {
    QProcess_OnChildEvent((QProcess*)self, (intptr_t)slot);
}

void q_process_custom_event(void* self, void* event) {
    QProcess_CustomEvent((QProcess*)self, (QEvent*)event);
}

void q_process_qbase_custom_event(void* self, void* event) {
    QProcess_QBaseCustomEvent((QProcess*)self, (QEvent*)event);
}

void q_process_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QProcess_OnCustomEvent((QProcess*)self, (intptr_t)slot);
}

void q_process_connect_notify(void* self, void* signal) {
    QProcess_ConnectNotify((QProcess*)self, (QMetaMethod*)signal);
}

void q_process_qbase_connect_notify(void* self, void* signal) {
    QProcess_QBaseConnectNotify((QProcess*)self, (QMetaMethod*)signal);
}

void q_process_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QProcess_OnConnectNotify((QProcess*)self, (intptr_t)slot);
}

void q_process_disconnect_notify(void* self, void* signal) {
    QProcess_DisconnectNotify((QProcess*)self, (QMetaMethod*)signal);
}

void q_process_qbase_disconnect_notify(void* self, void* signal) {
    QProcess_QBaseDisconnectNotify((QProcess*)self, (QMetaMethod*)signal);
}

void q_process_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QProcess_OnDisconnectNotify((QProcess*)self, (intptr_t)slot);
}

void q_process_set_open_mode(void* self, int64_t openMode) {
    QProcess_SetOpenMode((QProcess*)self, openMode);
}

void q_process_qbase_set_open_mode(void* self, int64_t openMode) {
    QProcess_QBaseSetOpenMode((QProcess*)self, openMode);
}

void q_process_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QProcess_OnSetOpenMode((QProcess*)self, (intptr_t)slot);
}

void q_process_set_error_string(void* self, const char* errorString) {
    QProcess_SetErrorString((QProcess*)self, qstring(errorString));
}

void q_process_qbase_set_error_string(void* self, const char* errorString) {
    QProcess_QBaseSetErrorString((QProcess*)self, qstring(errorString));
}

void q_process_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QProcess_OnSetErrorString((QProcess*)self, (intptr_t)slot);
}

QObject* q_process_sender(void* self) {
    return QProcess_Sender((QProcess*)self);
}

QObject* q_process_qbase_sender(void* self) {
    return QProcess_QBaseSender((QProcess*)self);
}

void q_process_on_sender(void* self, QObject* (*slot)()) {
    QProcess_OnSender((QProcess*)self, (intptr_t)slot);
}

int32_t q_process_sender_signal_index(void* self) {
    return QProcess_SenderSignalIndex((QProcess*)self);
}

int32_t q_process_qbase_sender_signal_index(void* self) {
    return QProcess_QBaseSenderSignalIndex((QProcess*)self);
}

void q_process_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QProcess_OnSenderSignalIndex((QProcess*)self, (intptr_t)slot);
}

int32_t q_process_receivers(void* self, const char* signal) {
    return QProcess_Receivers((QProcess*)self, signal);
}

int32_t q_process_qbase_receivers(void* self, const char* signal) {
    return QProcess_QBaseReceivers((QProcess*)self, signal);
}

void q_process_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QProcess_OnReceivers((QProcess*)self, (intptr_t)slot);
}

bool q_process_is_signal_connected(void* self, void* signal) {
    return QProcess_IsSignalConnected((QProcess*)self, (QMetaMethod*)signal);
}

bool q_process_qbase_is_signal_connected(void* self, void* signal) {
    return QProcess_QBaseIsSignalConnected((QProcess*)self, (QMetaMethod*)signal);
}

void q_process_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QProcess_OnIsSignalConnected((QProcess*)self, (intptr_t)slot);
}

void q_process_delete(void* self) {
    QProcess_Delete((QProcess*)(self));
}
