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

/// https://doc.qt.io/qt-6/qprocessenvironment.html

/// q_processenvironment_new constructs a new QProcessEnvironment object.
///
///
QProcessEnvironment* q_processenvironment_new() {
    return QProcessEnvironment_new();
}

/// q_processenvironment_new2 constructs a new QProcessEnvironment object.
///
/// ``` enum QProcessEnvironment__Initialization param1 ```
QProcessEnvironment* q_processenvironment_new2(int64_t param1) {
    return QProcessEnvironment_new2(param1);
}

/// q_processenvironment_new3 constructs a new QProcessEnvironment object.
///
/// ``` QProcessEnvironment* other ```
QProcessEnvironment* q_processenvironment_new3(void* other) {
    return QProcessEnvironment_new3((QProcessEnvironment*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#operator=)
///
/// ``` QProcessEnvironment* self, QProcessEnvironment* other ```
void q_processenvironment_operator_assign(void* self, void* other) {
    QProcessEnvironment_OperatorAssign((QProcessEnvironment*)self, (QProcessEnvironment*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#swap)
///
/// ``` QProcessEnvironment* self, QProcessEnvironment* other ```
void q_processenvironment_swap(void* self, void* other) {
    QProcessEnvironment_Swap((QProcessEnvironment*)self, (QProcessEnvironment*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#operator==)
///
/// ``` QProcessEnvironment* self, QProcessEnvironment* other ```
bool q_processenvironment_operator_equal(void* self, void* other) {
    return QProcessEnvironment_OperatorEqual((QProcessEnvironment*)self, (QProcessEnvironment*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#operator!=)
///
/// ``` QProcessEnvironment* self, QProcessEnvironment* other ```
bool q_processenvironment_operator_not_equal(void* self, void* other) {
    return QProcessEnvironment_OperatorNotEqual((QProcessEnvironment*)self, (QProcessEnvironment*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#isEmpty)
///
/// ``` QProcessEnvironment* self ```
bool q_processenvironment_is_empty(void* self) {
    return QProcessEnvironment_IsEmpty((QProcessEnvironment*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#inheritsFromParent)
///
/// ``` QProcessEnvironment* self ```
bool q_processenvironment_inherits_from_parent(void* self) {
    return QProcessEnvironment_InheritsFromParent((QProcessEnvironment*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#clear)
///
/// ``` QProcessEnvironment* self ```
void q_processenvironment_clear(void* self) {
    QProcessEnvironment_Clear((QProcessEnvironment*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#contains)
///
/// ``` QProcessEnvironment* self, const char* name ```
bool q_processenvironment_contains(void* self, const char* name) {
    return QProcessEnvironment_Contains((QProcessEnvironment*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
///
/// ``` QProcessEnvironment* self, const char* name, const char* value ```
void q_processenvironment_insert(void* self, const char* name, const char* value) {
    QProcessEnvironment_Insert((QProcessEnvironment*)self, qstring(name), qstring(value));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#remove)
///
/// ``` QProcessEnvironment* self, const char* name ```
void q_processenvironment_remove(void* self, const char* name) {
    QProcessEnvironment_Remove((QProcessEnvironment*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
///
/// ``` QProcessEnvironment* self, const char* name ```
const char* q_processenvironment_value(void* self, const char* name) {
    libqt_string _str = QProcessEnvironment_Value((QProcessEnvironment*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#toStringList)
///
/// ``` QProcessEnvironment* self ```
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

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#keys)
///
/// ``` QProcessEnvironment* self ```
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

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
///
/// ``` QProcessEnvironment* self, QProcessEnvironment* e ```
void q_processenvironment_insert_with_q_process_environment(void* self, void* e) {
    QProcessEnvironment_InsertWithQProcessEnvironment((QProcessEnvironment*)self, (QProcessEnvironment*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#systemEnvironment)
///
///
QProcessEnvironment* q_processenvironment_system_environment() {
    return QProcessEnvironment_SystemEnvironment();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
///
/// ``` QProcessEnvironment* self, const char* name, const char* defaultValue ```
const char* q_processenvironment_value2(void* self, const char* name, const char* defaultValue) {
    libqt_string _str = QProcessEnvironment_Value2((QProcessEnvironment*)self, qstring(name), qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QProcessEnvironment* self ```
void q_processenvironment_delete(void* self) {
    QProcessEnvironment_Delete((QProcessEnvironment*)(self));
}

/// https://doc.qt.io/qt-6/qprocess.html

/// q_process_new constructs a new QProcess object.
///
///
QProcess* q_process_new() {
    return QProcess_new();
}

/// q_process_new2 constructs a new QProcess object.
///
/// ``` QObject* parent ```
QProcess* q_process_new2(void* parent) {
    return QProcess_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QProcess* self ```
QMetaObject* q_process_meta_object(void* self) {
    return QProcess_MetaObject((QProcess*)self);
}

/// ``` QProcess* self, const char* param1 ```
void* q_process_metacast(void* self, const char* param1) {
    return QProcess_Metacast((QProcess*)self, param1);
}

/// ``` QProcess* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_process_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProcess_Metacall((QProcess*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QProcess* self, int32_t (*slot)(QProcess*, enum QMetaObject__Call, int, void*) ```
void q_process_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QProcess_OnMetacall((QProcess*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProcess* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_process_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProcess_QBaseMetacall((QProcess*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_process_tr(const char* s) {
    libqt_string _str = QProcess_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// ``` QProcess* self, const char* program ```
void q_process_start(void* self, const char* program) {
    QProcess_Start((QProcess*)self, qstring(program));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// ``` QProcess* self ```
void q_process_start2(void* self) {
    QProcess_Start2((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startCommand)
///
/// ``` QProcess* self, const char* command ```
void q_process_start_command(void* self, const char* command) {
    QProcess_StartCommand((QProcess*)self, qstring(command));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` QProcess* self ```
bool q_process_start_detached(void* self) {
    return QProcess_StartDetached((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
///
/// ``` QProcess* self, int mode ```
bool q_process_open(void* self, int64_t mode) {
    return QProcess_Open((QProcess*)self, mode);
}

/// Allows for overriding the related default method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, int) ```
void q_process_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QProcess_OnOpen((QProcess*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProcess* self, int mode ```
bool q_process_qbase_open(void* self, int64_t mode) {
    return QProcess_QBaseOpen((QProcess*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#program)
///
/// ``` QProcess* self ```
const char* q_process_program(void* self) {
    libqt_string _str = QProcess_Program((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProgram)
///
/// ``` QProcess* self, const char* program ```
void q_process_set_program(void* self, const char* program) {
    QProcess_SetProgram((QProcess*)self, qstring(program));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#arguments)
///
/// ``` QProcess* self ```
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

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setArguments)
///
/// ``` QProcess* self, const char* arguments[] ```
void q_process_set_arguments(void* self, const char* arguments[]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    QProcess_SetArguments((QProcess*)self, arguments_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processChannelMode)
///
/// ``` QProcess* self ```
int64_t q_process_process_channel_mode(void* self) {
    return QProcess_ProcessChannelMode((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessChannelMode)
///
/// ``` QProcess* self, enum QProcess__ProcessChannelMode mode ```
void q_process_set_process_channel_mode(void* self, int64_t mode) {
    QProcess_SetProcessChannelMode((QProcess*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#inputChannelMode)
///
/// ``` QProcess* self ```
int64_t q_process_input_channel_mode(void* self) {
    return QProcess_InputChannelMode((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setInputChannelMode)
///
/// ``` QProcess* self, enum QProcess__InputChannelMode mode ```
void q_process_set_input_channel_mode(void* self, int64_t mode) {
    QProcess_SetInputChannelMode((QProcess*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readChannel)
///
/// ``` QProcess* self ```
int64_t q_process_read_channel(void* self) {
    return QProcess_ReadChannel((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setReadChannel)
///
/// ``` QProcess* self, enum QProcess__ProcessChannel channel ```
void q_process_set_read_channel(void* self, int64_t channel) {
    QProcess_SetReadChannel((QProcess*)self, channel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#closeReadChannel)
///
/// ``` QProcess* self, enum QProcess__ProcessChannel channel ```
void q_process_close_read_channel(void* self, int64_t channel) {
    QProcess_CloseReadChannel((QProcess*)self, channel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
///
/// ``` QProcess* self ```
void q_process_close_write_channel(void* self) {
    QProcess_CloseWriteChannel((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardInputFile)
///
/// ``` QProcess* self, const char* fileName ```
void q_process_set_standard_input_file(void* self, const char* fileName) {
    QProcess_SetStandardInputFile((QProcess*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
///
/// ``` QProcess* self, const char* fileName ```
void q_process_set_standard_output_file(void* self, const char* fileName) {
    QProcess_SetStandardOutputFile((QProcess*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
///
/// ``` QProcess* self, const char* fileName ```
void q_process_set_standard_error_file(void* self, const char* fileName) {
    QProcess_SetStandardErrorFile((QProcess*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputProcess)
///
/// ``` QProcess* self, QProcess* destination ```
void q_process_set_standard_output_process(void* self, void* destination) {
    QProcess_SetStandardOutputProcess((QProcess*)self, (QProcess*)destination);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#workingDirectory)
///
/// ``` QProcess* self ```
const char* q_process_working_directory(void* self) {
    libqt_string _str = QProcess_WorkingDirectory((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setWorkingDirectory)
///
/// ``` QProcess* self, const char* dir ```
void q_process_set_working_directory(void* self, const char* dir) {
    QProcess_SetWorkingDirectory((QProcess*)self, qstring(dir));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setEnvironment)
///
/// ``` QProcess* self, const char* environment[] ```
void q_process_set_environment(void* self, const char* environment[]) {
    size_t environment_len = libqt_strv_length(environment);
    libqt_string* environment_qstr = malloc(environment_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < environment_len; ++_i) {
        environment_qstr[_i] = qstring(environment[_i]);
    }
    libqt_list environment_list = qstrlist(environment_qstr, environment_len);
    QProcess_SetEnvironment((QProcess*)self, environment_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#environment)
///
/// ``` QProcess* self ```
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

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessEnvironment)
///
/// ``` QProcess* self, QProcessEnvironment* environment ```
void q_process_set_process_environment(void* self, void* environment) {
    QProcess_SetProcessEnvironment((QProcess*)self, (QProcessEnvironment*)environment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
///
/// ``` QProcess* self ```
QProcessEnvironment* q_process_process_environment(void* self) {
    return QProcess_ProcessEnvironment((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#error)
///
/// ``` QProcess* self ```
int64_t q_process_error(void* self) {
    return QProcess_Error((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#state)
///
/// ``` QProcess* self ```
int64_t q_process_state(void* self) {
    return QProcess_State((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processId)
///
/// ``` QProcess* self ```
long long q_process_process_id(void* self) {
    return QProcess_ProcessId((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
///
/// ``` QProcess* self ```
bool q_process_wait_for_started(void* self) {
    return QProcess_WaitForStarted((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
///
/// ``` QProcess* self, int msecs ```
bool q_process_wait_for_ready_read(void* self, int msecs) {
    return QProcess_WaitForReadyRead((QProcess*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, int) ```
void q_process_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QProcess_OnWaitForReadyRead((QProcess*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProcess* self, int msecs ```
bool q_process_qbase_wait_for_ready_read(void* self, int msecs) {
    return QProcess_QBaseWaitForReadyRead((QProcess*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
///
/// ``` QProcess* self, int msecs ```
bool q_process_wait_for_bytes_written(void* self, int msecs) {
    return QProcess_WaitForBytesWritten((QProcess*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, int) ```
void q_process_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QProcess_OnWaitForBytesWritten((QProcess*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProcess* self, int msecs ```
bool q_process_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QProcess_QBaseWaitForBytesWritten((QProcess*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
///
/// ``` QProcess* self ```
bool q_process_wait_for_finished(void* self) {
    return QProcess_WaitForFinished((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readAllStandardOutput)
///
/// ``` QProcess* self ```
char* q_process_read_all_standard_output(void* self) {
    libqt_string _str = QProcess_ReadAllStandardOutput((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readAllStandardError)
///
/// ``` QProcess* self ```
char* q_process_read_all_standard_error(void* self) {
    libqt_string _str = QProcess_ReadAllStandardError((QProcess*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#exitCode)
///
/// ``` QProcess* self ```
int32_t q_process_exit_code(void* self) {
    return QProcess_ExitCode((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#exitStatus)
///
/// ``` QProcess* self ```
int64_t q_process_exit_status(void* self) {
    return QProcess_ExitStatus((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
///
/// ``` QProcess* self ```
long long q_process_bytes_to_write(void* self) {
    return QProcess_BytesToWrite((QProcess*)self);
}

/// Allows for overriding the related default method
///
/// ``` QProcess* self, long long (*slot)() ```
void q_process_on_bytes_to_write(void* self, long long (*slot)()) {
    QProcess_OnBytesToWrite((QProcess*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProcess* self ```
long long q_process_qbase_bytes_to_write(void* self) {
    return QProcess_QBaseBytesToWrite((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
///
/// ``` QProcess* self ```
bool q_process_is_sequential(void* self) {
    return QProcess_IsSequential((QProcess*)self);
}

/// Allows for overriding the related default method
///
/// ``` QProcess* self, bool (*slot)() ```
void q_process_on_is_sequential(void* self, bool (*slot)()) {
    QProcess_OnIsSequential((QProcess*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProcess* self ```
bool q_process_qbase_is_sequential(void* self) {
    return QProcess_QBaseIsSequential((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
///
/// ``` QProcess* self ```
void q_process_close(void* self) {
    QProcess_Close((QProcess*)self);
}

/// Allows for overriding the related default method
///
/// ``` QProcess* self, void (*slot)() ```
void q_process_on_close(void* self, void (*slot)()) {
    QProcess_OnClose((QProcess*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProcess* self ```
void q_process_qbase_close(void* self) {
    QProcess_QBaseClose((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#execute)
///
/// ``` const char* program ```
int32_t q_process_execute(const char* program) {
    return QProcess_Execute(qstring(program));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` const char* program ```
bool q_process_start_detached_with_program(const char* program) {
    return QProcess_StartDetachedWithProgram(qstring(program));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#systemEnvironment)
///
///
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

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#nullDevice)
///
///
const char* q_process_null_device() {
    libqt_string _str = QProcess_NullDevice();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#terminate)
///
/// ``` QProcess* self ```
void q_process_terminate(void* self) {
    QProcess_Terminate((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#kill)
///
/// ``` QProcess* self ```
void q_process_kill(void* self) {
    QProcess_Kill((QProcess*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// ``` QProcess* self, int exitCode ```
void q_process_finished(void* self, int exitCode) {
    QProcess_Finished((QProcess*)self, exitCode);
}

/// ``` QProcess* self, void (*slot)(QProcess*, int) ```
void q_process_on_finished(void* self, void (*slot)(void*, int)) {
    QProcess_Connect_Finished((QProcess*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
///
/// ``` QProcess* self, enum QProcess__ProcessError errorVal ```
void q_process_error_occurred(void* self, int64_t errorVal) {
    QProcess_ErrorOccurred((QProcess*)self, errorVal);
}

/// ``` QProcess* self, void (*slot)(QProcess*, enum QProcess__ProcessError) ```
void q_process_on_error_occurred(void* self, void (*slot)(void*, int64_t)) {
    QProcess_Connect_ErrorOccurred((QProcess*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
///
/// ``` QProcess* self, enum QProcess__ProcessState state ```
void q_process_set_process_state(void* self, int64_t state) {
    QProcess_SetProcessState((QProcess*)self, state);
}

/// Allows for overriding the related default method
///
/// ``` QProcess* self, void (*slot)(QProcess*, enum QProcess__ProcessState) ```
void q_process_on_set_process_state(void* self, void (*slot)(void*, int64_t)) {
    QProcess_OnSetProcessState((QProcess*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProcess* self, enum QProcess__ProcessState state ```
void q_process_qbase_set_process_state(void* self, int64_t state) {
    QProcess_QBaseSetProcessState((QProcess*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_read_data(void* self, char* data, long long maxlen) {
    return QProcess_ReadData((QProcess*)self, data, maxlen);
}

/// Allows for overriding the related default method
///
/// ``` QProcess* self, long long (*slot)(QProcess*, char*, long long) ```
void q_process_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QProcess_OnReadData((QProcess*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_qbase_read_data(void* self, char* data, long long maxlen) {
    return QProcess_QBaseReadData((QProcess*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
///
/// ``` QProcess* self, const char* data, long long lenVal ```
long long q_process_write_data(void* self, const char* data, long long lenVal) {
    return QProcess_WriteData((QProcess*)self, data, lenVal);
}

/// Allows for overriding the related default method
///
/// ``` QProcess* self, long long (*slot)(QProcess*, const char*, long long) ```
void q_process_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QProcess_OnWriteData((QProcess*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProcess* self, const char* data, long long lenVal ```
long long q_process_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QProcess_QBaseWriteData((QProcess*)self, data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_process_tr2(const char* s, const char* c) {
    libqt_string _str = QProcess_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_process_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QProcess_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// ``` QProcess* self, const char* program, const char* arguments[] ```
void q_process_start22(void* self, const char* program, const char* arguments[]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    QProcess_Start22((QProcess*)self, qstring(program), arguments_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// ``` QProcess* self, const char* program, const char* arguments[], int mode ```
void q_process_start3(void* self, const char* program, const char* arguments[], int64_t mode) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    QProcess_Start3((QProcess*)self, qstring(program), arguments_list, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// ``` QProcess* self, int mode ```
void q_process_start1(void* self, int64_t mode) {
    QProcess_Start1((QProcess*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startCommand)
///
/// ``` QProcess* self, const char* command, int mode ```
void q_process_start_command2(void* self, const char* command, int64_t mode) {
    QProcess_StartCommand2((QProcess*)self, qstring(command), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` QProcess* self, long long* pid ```
bool q_process_start_detached1(void* self, long long* pid) {
    return QProcess_StartDetached1((QProcess*)self, pid);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
///
/// ``` QProcess* self, const char* fileName, int mode ```
void q_process_set_standard_output_file2(void* self, const char* fileName, int64_t mode) {
    QProcess_SetStandardOutputFile2((QProcess*)self, qstring(fileName), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
///
/// ``` QProcess* self, const char* fileName, int mode ```
void q_process_set_standard_error_file2(void* self, const char* fileName, int64_t mode) {
    QProcess_SetStandardErrorFile2((QProcess*)self, qstring(fileName), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
///
/// ``` QProcess* self, int msecs ```
bool q_process_wait_for_started1(void* self, int msecs) {
    return QProcess_WaitForStarted1((QProcess*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
///
/// ``` QProcess* self, int msecs ```
bool q_process_wait_for_finished1(void* self, int msecs) {
    return QProcess_WaitForFinished1((QProcess*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#execute)
///
/// ``` const char* program, const char* arguments[] ```
int32_t q_process_execute2(const char* program, const char* arguments[]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    return QProcess_Execute2(qstring(program), arguments_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` const char* program, const char* arguments[] ```
bool q_process_start_detached2(const char* program, const char* arguments[]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    return QProcess_StartDetached2(qstring(program), arguments_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` const char* program, const char* arguments[], const char* workingDirectory ```
bool q_process_start_detached3(const char* program, const char* arguments[], const char* workingDirectory) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    return QProcess_StartDetached3(qstring(program), arguments_list, qstring(workingDirectory));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` const char* program, const char* arguments[], const char* workingDirectory, long long* pid ```
bool q_process_start_detached4(const char* program, const char* arguments[], const char* workingDirectory, long long* pid) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    return QProcess_StartDetached4(qstring(program), arguments_list, qstring(workingDirectory), pid);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// ``` QProcess* self, int exitCode, enum QProcess__ExitStatus exitStatus ```
void q_process_finished2(void* self, int exitCode, int64_t exitStatus) {
    QProcess_Finished2((QProcess*)self, exitCode, exitStatus);
}

/// ``` QProcess* self, void (*slot)(QProcess*, int, enum QProcess__ExitStatus) ```
void q_process_on_finished2(void* self, void (*slot)(void*, int, int64_t)) {
    QProcess_Connect_Finished2((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QProcess* self ```
int64_t q_process_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QProcess* self, bool enabled ```
void q_process_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QProcess* self ```
bool q_process_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QProcess* self ```
bool q_process_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QProcess* self ```
bool q_process_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QProcess* self ```
bool q_process_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QProcess* self ```
int32_t q_process_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QProcess* self ```
int32_t q_process_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QProcess* self ```
int32_t q_process_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QProcess* self, int channel ```
void q_process_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QProcess* self ```
int32_t q_process_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QProcess* self, int channel ```
void q_process_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QProcess* self, long long maxlen ```
char* q_process_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QProcess* self ```
char* q_process_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QProcess* self ```
char* q_process_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QProcess* self ```
void q_process_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QProcess* self ```
void q_process_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QProcess* self ```
void q_process_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QProcess* self ```
bool q_process_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QProcess* self, const char* data, long long lenVal ```
long long q_process_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QProcess* self, const char* data ```
long long q_process_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QProcess* self, const char* data ```
long long q_process_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QProcess* self, long long maxlen ```
char* q_process_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QProcess* self, long long maxSize ```
long long q_process_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QProcess* self, char c ```
void q_process_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QProcess* self, char c ```
bool q_process_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QProcess* self, char* c ```
bool q_process_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QProcess* self ```
const char* q_process_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QProcess* self ```
void q_process_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QProcess* self, void (*slot)(QIODevice*) ```
void q_process_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QProcess* self, int channel ```
void q_process_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QProcess* self, void (*slot)(QIODevice*, int) ```
void q_process_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QProcess* self, long long bytes ```
void q_process_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QProcess* self, void (*slot)(QIODevice*, long long) ```
void q_process_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QProcess* self, int channel, long long bytes ```
void q_process_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QProcess* self, void (*slot)(QIODevice*, int, long long) ```
void q_process_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QProcess* self ```
void q_process_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QProcess* self, void (*slot)(QIODevice*) ```
void q_process_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QProcess* self ```
void q_process_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QProcess* self, void (*slot)(QIODevice*) ```
void q_process_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QProcess* self, long long maxlen ```
char* q_process_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QProcess* self ```
const char* q_process_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QProcess* self, const char* name ```
void q_process_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QProcess* self ```
bool q_process_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QProcess* self ```
bool q_process_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QProcess* self ```
bool q_process_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QProcess* self ```
bool q_process_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QProcess* self, bool b ```
bool q_process_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QProcess* self ```
QThread* q_process_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QProcess* self, QThread* thread ```
void q_process_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProcess* self, int interval ```
int32_t q_process_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QProcess* self, int id ```
void q_process_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QProcess* self ```
libqt_list /* of QObject* */ q_process_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QProcess* self, QObject* parent ```
void q_process_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QProcess* self, QObject* filterObj ```
void q_process_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QProcess* self, QObject* obj ```
void q_process_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_process_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProcess* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_process_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_process_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_process_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QProcess* self ```
void q_process_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QProcess* self ```
void q_process_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QProcess* self, const char* name, QVariant* value ```
bool q_process_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QProcess* self, const char* name ```
QVariant* q_process_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QProcess* self ```
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

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProcess* self ```
QBindingStorage* q_process_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProcess* self ```
QBindingStorage* q_process_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProcess* self ```
void q_process_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QProcess* self, void (*slot)(QObject*) ```
void q_process_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QProcess* self ```
QObject* q_process_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QProcess* self, const char* classname ```
bool q_process_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QProcess* self ```
void q_process_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProcess* self, int interval, enum Qt__TimerType timerType ```
int32_t q_process_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_process_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProcess* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_process_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProcess* self, QObject* param1 ```
void q_process_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QProcess* self, void (*slot)(QObject*, QObject*) ```
void q_process_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_pos(void* self) {
    return QProcess_Pos((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_qbase_pos(void* self) {
    return QProcess_QBasePos((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, long long (*slot)() ```
void q_process_on_pos(void* self, long long (*slot)()) {
    QProcess_OnPos((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_size(void* self) {
    return QProcess_Size((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_qbase_size(void* self) {
    return QProcess_QBaseSize((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, long long (*slot)() ```
void q_process_on_size(void* self, long long (*slot)()) {
    QProcess_OnSize((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, long long pos ```
bool q_process_seek(void* self, long long pos) {
    return QProcess_Seek((QProcess*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, long long pos ```
bool q_process_qbase_seek(void* self, long long pos) {
    return QProcess_QBaseSeek((QProcess*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, long long) ```
void q_process_on_seek(void* self, bool (*slot)(void*, long long)) {
    QProcess_OnSeek((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_at_end(void* self) {
    return QProcess_AtEnd((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_qbase_at_end(void* self) {
    return QProcess_QBaseAtEnd((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)() ```
void q_process_on_at_end(void* self, bool (*slot)()) {
    QProcess_OnAtEnd((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_reset(void* self) {
    return QProcess_Reset((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_qbase_reset(void* self) {
    return QProcess_QBaseReset((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)() ```
void q_process_on_reset(void* self, bool (*slot)()) {
    QProcess_OnReset((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_bytes_available(void* self) {
    return QProcess_BytesAvailable((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_qbase_bytes_available(void* self) {
    return QProcess_QBaseBytesAvailable((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, long long (*slot)() ```
void q_process_on_bytes_available(void* self, long long (*slot)()) {
    QProcess_OnBytesAvailable((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_can_read_line(void* self) {
    return QProcess_CanReadLine((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_qbase_can_read_line(void* self) {
    return QProcess_QBaseCanReadLine((QProcess*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)() ```
void q_process_on_can_read_line(void* self, bool (*slot)()) {
    QProcess_OnCanReadLine((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_read_line_data(void* self, char* data, long long maxlen) {
    return QProcess_ReadLineData((QProcess*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QProcess_QBaseReadLineData((QProcess*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, long long (*slot)(QProcess*, char*, long long) ```
void q_process_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QProcess_OnReadLineData((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, long long maxSize ```
long long q_process_skip_data(void* self, long long maxSize) {
    return QProcess_SkipData((QProcess*)self, maxSize);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, long long maxSize ```
long long q_process_qbase_skip_data(void* self, long long maxSize) {
    return QProcess_QBaseSkipData((QProcess*)self, maxSize);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, long long (*slot)(QProcess*, long long) ```
void q_process_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QProcess_OnSkipData((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QEvent* event ```
bool q_process_event(void* self, void* event) {
    return QProcess_Event((QProcess*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QEvent* event ```
bool q_process_qbase_event(void* self, void* event) {
    return QProcess_QBaseEvent((QProcess*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, QEvent*) ```
void q_process_on_event(void* self, bool (*slot)(void*, void*)) {
    QProcess_OnEvent((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QObject* watched, QEvent* event ```
bool q_process_event_filter(void* self, void* watched, void* event) {
    return QProcess_EventFilter((QProcess*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QObject* watched, QEvent* event ```
bool q_process_qbase_event_filter(void* self, void* watched, void* event) {
    return QProcess_QBaseEventFilter((QProcess*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, QObject*, QEvent*) ```
void q_process_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QProcess_OnEventFilter((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QTimerEvent* event ```
void q_process_timer_event(void* self, void* event) {
    QProcess_TimerEvent((QProcess*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QTimerEvent* event ```
void q_process_qbase_timer_event(void* self, void* event) {
    QProcess_QBaseTimerEvent((QProcess*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, QTimerEvent*) ```
void q_process_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QProcess_OnTimerEvent((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QChildEvent* event ```
void q_process_child_event(void* self, void* event) {
    QProcess_ChildEvent((QProcess*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QChildEvent* event ```
void q_process_qbase_child_event(void* self, void* event) {
    QProcess_QBaseChildEvent((QProcess*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, QChildEvent*) ```
void q_process_on_child_event(void* self, void (*slot)(void*, void*)) {
    QProcess_OnChildEvent((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QEvent* event ```
void q_process_custom_event(void* self, void* event) {
    QProcess_CustomEvent((QProcess*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QEvent* event ```
void q_process_qbase_custom_event(void* self, void* event) {
    QProcess_QBaseCustomEvent((QProcess*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, QEvent*) ```
void q_process_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QProcess_OnCustomEvent((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
void q_process_connect_notify(void* self, void* signal) {
    QProcess_ConnectNotify((QProcess*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
void q_process_qbase_connect_notify(void* self, void* signal) {
    QProcess_QBaseConnectNotify((QProcess*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, QMetaMethod*) ```
void q_process_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QProcess_OnConnectNotify((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
void q_process_disconnect_notify(void* self, void* signal) {
    QProcess_DisconnectNotify((QProcess*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
void q_process_qbase_disconnect_notify(void* self, void* signal) {
    QProcess_QBaseDisconnectNotify((QProcess*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, QMetaMethod*) ```
void q_process_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QProcess_OnDisconnectNotify((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, int openMode ```
void q_process_set_open_mode(void* self, int64_t openMode) {
    QProcess_SetOpenMode((QProcess*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, int openMode ```
void q_process_qbase_set_open_mode(void* self, int64_t openMode) {
    QProcess_QBaseSetOpenMode((QProcess*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, int) ```
void q_process_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QProcess_OnSetOpenMode((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, const char* errorString ```
void q_process_set_error_string(void* self, const char* errorString) {
    QProcess_SetErrorString((QProcess*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, const char* errorString ```
void q_process_qbase_set_error_string(void* self, const char* errorString) {
    QProcess_QBaseSetErrorString((QProcess*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, const char*) ```
void q_process_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QProcess_OnSetErrorString((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
QObject* q_process_sender(void* self) {
    return QProcess_Sender((QProcess*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
QObject* q_process_qbase_sender(void* self) {
    return QProcess_QBaseSender((QProcess*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, QObject* (*slot)() ```
void q_process_on_sender(void* self, QObject* (*slot)()) {
    QProcess_OnSender((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
int32_t q_process_sender_signal_index(void* self) {
    return QProcess_SenderSignalIndex((QProcess*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
int32_t q_process_qbase_sender_signal_index(void* self) {
    return QProcess_QBaseSenderSignalIndex((QProcess*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, int32_t (*slot)() ```
void q_process_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QProcess_OnSenderSignalIndex((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, const char* signal ```
int32_t q_process_receivers(void* self, const char* signal) {
    return QProcess_Receivers((QProcess*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, const char* signal ```
int32_t q_process_qbase_receivers(void* self, const char* signal) {
    return QProcess_QBaseReceivers((QProcess*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, int32_t (*slot)(QProcess*, const char*) ```
void q_process_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QProcess_OnReceivers((QProcess*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
bool q_process_is_signal_connected(void* self, void* signal) {
    return QProcess_IsSignalConnected((QProcess*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
bool q_process_qbase_is_signal_connected(void* self, void* signal) {
    return QProcess_QBaseIsSignalConnected((QProcess*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, QMetaMethod*) ```
void q_process_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QProcess_OnIsSignalConnected((QProcess*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QProcess* self ```
void q_process_delete(void* self) {
    QProcess_Delete((QProcess*)(self));
}