#pragma once
#ifndef SRCQT6C_LIBQPROCESS_H
#define SRCQT6C_LIBQPROCESS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qprocessenvironment.html

/// q_processenvironment_new constructs a new QProcessEnvironment object.
///
QProcessEnvironment* q_processenvironment_new();

/// q_processenvironment_new2 constructs a new QProcessEnvironment object.
///
/// @param param1 enum QProcessEnvironment__Initialization
QProcessEnvironment* q_processenvironment_new2(int32_t param1);

/// q_processenvironment_new3 constructs a new QProcessEnvironment object.
///
/// @param other QProcessEnvironment*
QProcessEnvironment* q_processenvironment_new3(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#operator-eq)
///
/// @param self QProcessEnvironment*
/// @param other QProcessEnvironment*
void q_processenvironment_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#swap)
///
/// @param self QProcessEnvironment*
/// @param other QProcessEnvironment*
void q_processenvironment_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#isEmpty)
///
/// @param self QProcessEnvironment*
bool q_processenvironment_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#inheritsFromParent)
///
/// @param self QProcessEnvironment*
bool q_processenvironment_inherits_from_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#clear)
///
/// @param self QProcessEnvironment*
void q_processenvironment_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#contains)
///
/// @param self QProcessEnvironment*
/// @param name const char*
bool q_processenvironment_contains(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
///
/// @param self QProcessEnvironment*
/// @param name const char*
/// @param value const char*
void q_processenvironment_insert(void* self, const char* name, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#remove)
///
/// @param self QProcessEnvironment*
/// @param name const char*
void q_processenvironment_remove(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcessEnvironment*
/// @param name const char*
const char* q_processenvironment_value(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#toStringList)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcessEnvironment*
const char** q_processenvironment_to_string_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#keys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcessEnvironment*
const char** q_processenvironment_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
///
/// @param self QProcessEnvironment*
/// @param e QProcessEnvironment*
void q_processenvironment_insert2(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#systemEnvironment)
///
QProcessEnvironment* q_processenvironment_system_environment();

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcessEnvironment*
/// @param name const char*
/// @param defaultValue const char*
const char* q_processenvironment_value2(void* self, const char* name, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#dtor.QProcessEnvironment)
///
/// Delete this object from C++ memory.
///
/// @param self QProcessEnvironment*
void q_processenvironment_delete(void* self);

/// https://doc.qt.io/qt-6/qprocess.html

/// q_process_new constructs a new QProcess object.
///
QProcess* q_process_new();

/// q_process_new2 constructs a new QProcess object.
///
/// @param parent QObject*
QProcess* q_process_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QProcess*
const QMetaObject* q_process_meta_object(void* self);

/// @param self QProcess*
/// @param param1 const char*
void* q_process_metacast(void* self, const char* param1);

/// @param self QProcess*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_process_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QProcess*
/// @param callback int32_t fn(QProcess*, enum QMetaObject__Call, int, void*)
void q_process_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QProcess*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_process_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_process_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// @param self QProcess*
/// @param program const char*
void q_process_start(void* self, const char* program);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// @param self QProcess*
void q_process_start2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startCommand)
///
/// @param self QProcess*
/// @param command const char*
void q_process_start_command(void* self, const char* command);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// @param self QProcess*
bool q_process_start_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
///
/// @param self QProcess*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
bool q_process_open(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QProcess*
/// @param callback bool fn(QProcess*, flag of enum QIODeviceBase__OpenModeFlag)
void q_process_on_open(void* self, bool (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
///
/// Base class method implementation
///
/// @param self QProcess*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
bool q_process_qbase_open(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#program)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
const char* q_process_program(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProgram)
///
/// @param self QProcess*
/// @param program const char*
void q_process_set_program(void* self, const char* program);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#arguments)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
const char** q_process_arguments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setArguments)
///
/// @param self QProcess*
/// @param arguments const char**
void q_process_set_arguments(void* self, const char* arguments[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processChannelMode)
///
/// @param self QProcess*
///
/// @return enum QProcess__ProcessChannelMode
int32_t q_process_process_channel_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessChannelMode)
///
/// @param self QProcess*
/// @param mode enum QProcess__ProcessChannelMode
void q_process_set_process_channel_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#inputChannelMode)
///
/// @param self QProcess*
///
/// @return enum QProcess__InputChannelMode
int32_t q_process_input_channel_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setInputChannelMode)
///
/// @param self QProcess*
/// @param mode enum QProcess__InputChannelMode
void q_process_set_input_channel_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readChannel)
///
/// @param self QProcess*
///
/// @return enum QProcess__ProcessChannel
int32_t q_process_read_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setReadChannel)
///
/// @param self QProcess*
/// @param channel enum QProcess__ProcessChannel
void q_process_set_read_channel(void* self, int32_t channel);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#closeReadChannel)
///
/// @param self QProcess*
/// @param channel enum QProcess__ProcessChannel
void q_process_close_read_channel(void* self, int32_t channel);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
///
/// @param self QProcess*
void q_process_close_write_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardInputFile)
///
/// @param self QProcess*
/// @param fileName const char*
void q_process_set_standard_input_file(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
///
/// @param self QProcess*
/// @param fileName const char*
void q_process_set_standard_output_file(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
///
/// @param self QProcess*
/// @param fileName const char*
void q_process_set_standard_error_file(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputProcess)
///
/// @param self QProcess*
/// @param destination QProcess*
void q_process_set_standard_output_process(void* self, void* destination);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
///
/// @param self QProcess*
/// @param description const char*
void q_process_fail_child_process_modifier(void* self, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#unixProcessParameters)
///
/// @param self QProcess*
QProcess__UnixProcessParameters* q_process_unix_process_parameters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
///
/// @param self QProcess*
/// @param params QProcess__UnixProcessParameters*
void q_process_set_unix_process_parameters(void* self, void* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
///
/// @param self QProcess*
/// @param flagsOnly flag of enum QProcess__UnixProcessFlag
void q_process_set_unix_process_parameters2(void* self, int64_t flagsOnly);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#workingDirectory)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
const char* q_process_working_directory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setWorkingDirectory)
///
/// @param self QProcess*
/// @param dir const char*
void q_process_set_working_directory(void* self, const char* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setEnvironment)
///
/// @param self QProcess*
/// @param environment const char**
void q_process_set_environment(void* self, const char* environment[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#environment)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
const char** q_process_environment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessEnvironment)
///
/// @param self QProcess*
/// @param environment QProcessEnvironment*
void q_process_set_process_environment(void* self, void* environment);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
///
/// @param self QProcess*
QProcessEnvironment* q_process_process_environment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#error)
///
/// @param self QProcess*
///
/// @return enum QProcess__ProcessError
int32_t q_process_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#state)
///
/// @param self QProcess*
///
/// @return enum QProcess__ProcessState
int32_t q_process_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processId)
///
/// @param self QProcess*
long long q_process_process_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
///
/// @param self QProcess*
bool q_process_wait_for_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
///
/// @param self QProcess*
/// @param msecs int
bool q_process_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// @param self QProcess*
/// @param callback bool fn(QProcess*, int)
void q_process_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
///
/// Base class method implementation
///
/// @param self QProcess*
/// @param msecs int
bool q_process_qbase_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
///
/// @param self QProcess*
/// @param msecs int
bool q_process_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// @param self QProcess*
/// @param callback bool fn(QProcess*, int)
void q_process_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// @param self QProcess*
/// @param msecs int
bool q_process_qbase_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
///
/// @param self QProcess*
bool q_process_wait_for_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readAllStandardOutput)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
char* q_process_read_all_standard_output(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readAllStandardError)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
char* q_process_read_all_standard_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#exitCode)
///
/// @param self QProcess*
int32_t q_process_exit_code(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#exitStatus)
///
/// @param self QProcess*
///
/// @return enum QProcess__ExitStatus
int32_t q_process_exit_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
///
/// @param self QProcess*
long long q_process_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// @param self QProcess*
/// @param callback long long fn()
void q_process_on_bytes_to_write(void* self, long long (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
///
/// Base class method implementation
///
/// @param self QProcess*
long long q_process_qbase_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
///
/// @param self QProcess*
bool q_process_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
///
/// Allows for overriding the related default method
///
/// @param self QProcess*
/// @param callback bool fn()
void q_process_on_is_sequential(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
///
/// Base class method implementation
///
/// @param self QProcess*
bool q_process_qbase_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
///
/// @param self QProcess*
void q_process_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QProcess*
/// @param callback void fn()
void q_process_on_close(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
///
/// Base class method implementation
///
/// @param self QProcess*
void q_process_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#execute)
///
/// @param program const char*
int32_t q_process_execute(const char* program);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// @param program const char*
bool q_process_start_detached2(const char* program);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#systemEnvironment)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_process_system_environment();

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#nullDevice)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_process_null_device();

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#terminate)
///
/// @param self QProcess*
void q_process_terminate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#kill)
///
/// @param self QProcess*
void q_process_kill(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// @param self QProcess*
/// @param exitCode int
void q_process_finished(void* self, int exitCode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, int)
void q_process_on_finished(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
///
/// @param self QProcess*
/// @param errorVal enum QProcess__ProcessError
void q_process_error_occurred(void* self, int32_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, enum QProcess__ProcessError)
void q_process_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
///
/// @param self QProcess*
/// @param state enum QProcess__ProcessState
void q_process_set_process_state(void* self, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
///
/// Allows for overriding the related default method
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, enum QProcess__ProcessState)
void q_process_on_set_process_state(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
///
/// Base class method implementation
///
/// @param self QProcess*
/// @param state enum QProcess__ProcessState
void q_process_qbase_set_process_state(void* self, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
///
/// @param self QProcess*
/// @param data char*
/// @param maxlen long long
long long q_process_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QProcess*
/// @param callback long long fn(QProcess*, char*, long long)
void q_process_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
///
/// Base class method implementation
///
/// @param self QProcess*
/// @param data char*
/// @param maxlen long long
long long q_process_qbase_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
///
/// @param self QProcess*
/// @param data const char*
/// @param lenVal long long
long long q_process_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QProcess*
/// @param callback long long fn(QProcess*, const char*, long long)
void q_process_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
///
/// Base class method implementation
///
/// @param self QProcess*
/// @param data const char*
/// @param lenVal long long
long long q_process_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_process_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_process_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// @param self QProcess*
/// @param program const char*
/// @param arguments const char**
void q_process_start22(void* self, const char* program, const char* arguments[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// @param self QProcess*
/// @param program const char*
/// @param arguments const char**
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
void q_process_start3(void* self, const char* program, const char* arguments[], int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// @param self QProcess*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
void q_process_start1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startCommand)
///
/// @param self QProcess*
/// @param command const char*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
void q_process_start_command2(void* self, const char* command, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// @param self QProcess*
/// @param pid long long*
bool q_process_start_detached1(void* self, long long* pid);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
///
/// @param self QProcess*
/// @param fileName const char*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
void q_process_set_standard_output_file2(void* self, const char* fileName, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
///
/// @param self QProcess*
/// @param fileName const char*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
void q_process_set_standard_error_file2(void* self, const char* fileName, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
///
/// @param self QProcess*
/// @param description const char*
/// @param errorVal int
void q_process_fail_child_process_modifier2(void* self, const char* description, int errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
///
/// @param self QProcess*
/// @param msecs int
bool q_process_wait_for_started1(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
///
/// @param self QProcess*
/// @param msecs int
bool q_process_wait_for_finished1(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#execute)
///
/// @param program const char*
/// @param arguments const char**
int32_t q_process_execute2(const char* program, const char* arguments[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// @param program const char*
/// @param arguments const char**
bool q_process_start_detached22(const char* program, const char* arguments[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// @param program const char*
/// @param arguments const char**
/// @param workingDirectory const char*
bool q_process_start_detached3(const char* program, const char* arguments[], const char* workingDirectory);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// @param program const char*
/// @param arguments const char**
/// @param workingDirectory const char*
/// @param pid long long*
bool q_process_start_detached4(const char* program, const char* arguments[], const char* workingDirectory, long long* pid);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// @param self QProcess*
/// @param exitCode int
/// @param exitStatus enum QProcess__ExitStatus
void q_process_finished2(void* self, int exitCode, int32_t exitStatus);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, int, enum QProcess__ExitStatus)
void q_process_on_finished2(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QProcess*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
int64_t q_process_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QProcess*
/// @param enabled bool
void q_process_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QProcess*
bool q_process_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QProcess*
bool q_process_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QProcess*
bool q_process_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QProcess*
bool q_process_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QProcess*
int32_t q_process_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QProcess*
int32_t q_process_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QProcess*
int32_t q_process_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QProcess*
/// @param channel int
void q_process_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QProcess*
int32_t q_process_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QProcess*
/// @param channel int
void q_process_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QProcess*
/// @param data char*
/// @param maxlen long long
long long q_process_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
/// @param maxlen long long
char* q_process_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
char* q_process_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QProcess*
/// @param data char*
/// @param maxlen long long
long long q_process_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
char* q_process_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QProcess*
void q_process_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QProcess*
void q_process_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QProcess*
void q_process_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QProcess*
bool q_process_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QProcess*
/// @param data const char*
/// @param lenVal long long
long long q_process_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QProcess*
/// @param data const char*
long long q_process_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QProcess*
/// @param data const char*
long long q_process_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QProcess*
/// @param data char*
/// @param maxlen long long
long long q_process_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
/// @param maxlen long long
char* q_process_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QProcess*
/// @param maxSize long long
long long q_process_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QProcess*
/// @param c char
void q_process_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QProcess*
/// @param c char
bool q_process_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QProcess*
/// @param c char*
bool q_process_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
const char* q_process_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QProcess*
void q_process_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*)
void q_process_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QProcess*
/// @param channel int
void q_process_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, int)
void q_process_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QProcess*
/// @param bytes long long
void q_process_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, long long)
void q_process_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QProcess*
/// @param channel int
/// @param bytes long long
void q_process_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, int, long long)
void q_process_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QProcess*
void q_process_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*)
void q_process_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QProcess*
void q_process_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*)
void q_process_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
/// @param maxlen long long
char* q_process_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
const char* q_process_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QProcess*
/// @param name char*
void q_process_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QProcess*
bool q_process_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QProcess*
bool q_process_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QProcess*
bool q_process_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QProcess*
bool q_process_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QProcess*
/// @param b bool
bool q_process_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QProcess*
QThread* q_process_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QProcess*
/// @param thread QThread*
bool q_process_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QProcess*
/// @param interval int
int32_t q_process_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QProcess*
/// @param id int
void q_process_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QProcess*
/// @param id enum Qt__TimerId
void q_process_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QProcess*
libqt_list /* of QObject* */ q_process_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QProcess*
/// @param parent QObject*
void q_process_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QProcess*
/// @param filterObj QObject*
void q_process_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QProcess*
/// @param obj QObject*
void q_process_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_process_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QProcess*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_process_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_process_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_process_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QProcess*
void q_process_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QProcess*
void q_process_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QProcess*
/// @param name const char*
/// @param value QVariant*
bool q_process_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QProcess*
/// @param name const char*
QVariant* q_process_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QProcess*
const char** q_process_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QProcess*
QBindingStorage* q_process_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QProcess*
const QBindingStorage* q_process_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QProcess*
void q_process_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*)
void q_process_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QProcess*
QObject* q_process_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QProcess*
/// @param classname const char*
bool q_process_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QProcess*
void q_process_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QProcess*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_process_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QProcess*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_process_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_process_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QProcess*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_process_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QProcess*
/// @param param1 QObject*
void q_process_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, QObject*)
void q_process_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
long long q_process_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
long long q_process_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback long long fn()
void q_process_on_pos(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
long long q_process_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
long long q_process_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback long long fn()
void q_process_on_size(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param pos long long
bool q_process_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param pos long long
bool q_process_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback bool fn(QProcess*, long long)
void q_process_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
bool q_process_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
bool q_process_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback bool fn()
void q_process_on_at_end(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
bool q_process_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
bool q_process_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback bool fn()
void q_process_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
long long q_process_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
long long q_process_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback long long fn()
void q_process_on_bytes_available(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
bool q_process_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
bool q_process_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback bool fn()
void q_process_on_can_read_line(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param data char*
/// @param maxlen long long
long long q_process_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param data char*
/// @param maxlen long long
long long q_process_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback long long fn(QProcess*, char*, long long)
void q_process_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param maxSize long long
long long q_process_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param maxSize long long
long long q_process_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback long long fn(QProcess*, long long)
void q_process_on_skip_data(void* self, long long (*callback)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param event QEvent*
bool q_process_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param event QEvent*
bool q_process_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback bool fn(QProcess*, QEvent*)
void q_process_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param watched QObject*
/// @param event QEvent*
bool q_process_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param watched QObject*
/// @param event QEvent*
bool q_process_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback bool fn(QProcess*, QObject*, QEvent*)
void q_process_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param event QTimerEvent*
void q_process_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param event QTimerEvent*
void q_process_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, QTimerEvent*)
void q_process_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param event QChildEvent*
void q_process_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param event QChildEvent*
void q_process_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, QChildEvent*)
void q_process_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param event QEvent*
void q_process_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param event QEvent*
void q_process_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, QEvent*)
void q_process_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param signal QMetaMethod*
void q_process_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param signal QMetaMethod*
void q_process_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, QMetaMethod*)
void q_process_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param signal QMetaMethod*
void q_process_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param signal QMetaMethod*
void q_process_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, QMetaMethod*)
void q_process_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_process_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_process_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, flag of enum QIODeviceBase__OpenModeFlag)
void q_process_on_set_open_mode(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param errorString const char*
void q_process_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param errorString const char*
void q_process_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, const char*)
void q_process_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
QObject* q_process_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
QObject* q_process_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback QObject* fn()
void q_process_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
int32_t q_process_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
int32_t q_process_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback int32_t fn()
void q_process_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param signal const char*
int32_t q_process_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param signal const char*
int32_t q_process_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback int32_t fn(QProcess*, const char*)
void q_process_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProcess*
/// @param signal QMetaMethod*
bool q_process_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProcess*
/// @param signal QMetaMethod*
bool q_process_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProcess*
/// @param callback bool fn(QProcess*, QMetaMethod*)
void q_process_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#started)
///
/// Wrapper to allow calling private signal
///
/// @param self QProcess*
/// @param callback void fn(QProcess*)
void q_process_on_started(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#stateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, enum QProcess__ProcessState)
void q_process_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardOutput)
///
/// Wrapper to allow calling private signal
///
/// @param self QProcess*
/// @param callback void fn(QProcess*)
void q_process_on_ready_read_standard_output(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardError)
///
/// Wrapper to allow calling private signal
///
/// @param self QProcess*
/// @param callback void fn(QProcess*)
void q_process_on_ready_read_standard_error(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QProcess*
/// @param callback void fn(QProcess*, const char*)
void q_process_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#dtor.QProcess)
///
/// Delete this object from C++ memory.
///
/// @param self QProcess*
void q_process_delete(void* self);

/// https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html

/// q_process__unixprocessparameters_new constructs a new QProcess::UnixProcessParameters object.
///
/// @param other QProcess__UnixProcessParameters*
QProcess__UnixProcessParameters* q_process__unixprocessparameters_new(void* other);

/// q_process__unixprocessparameters_new2 constructs a new QProcess::UnixProcessParameters object and invalidates the source QProcess::UnixProcessParameters object.
///
/// @param other QProcess__UnixProcessParameters*
QProcess__UnixProcessParameters* q_process__unixprocessparameters_new2(void* other);

/// q_process__unixprocessparameters_copy_assign shallow copies `other` into `self`.
///
/// @param self QProcess__UnixProcessParameters*
/// @param other QProcess__UnixProcessParameters*
void q_process__unixprocessparameters_copy_assign(void* self, void* other);

/// q_process__unixprocessparameters_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QProcess__UnixProcessParameters*
/// @param other QProcess__UnixProcessParameters*
void q_process__unixprocessparameters_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#flags-var)
///
/// @param self QProcess__UnixProcessParameters*
///
/// @return flag of enum QProcess__UnixProcessFlag
int64_t q_process__unixprocessparameters_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#flags-var)
///
/// @param self QProcess__UnixProcessParameters*
/// @param flags flag of enum QProcess__UnixProcessFlag
void q_process__unixprocessparameters_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#lowestFileDescriptorToClose-var)
///
/// @param self QProcess__UnixProcessParameters*
int32_t q_process__unixprocessparameters_lowest_file_descriptor_to_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#lowestFileDescriptorToClose-var)
///
/// @param self QProcess__UnixProcessParameters*
/// @param lowestFileDescriptorToClose int
void q_process__unixprocessparameters_set_lowest_file_descriptor_to_close(void* self, int lowestFileDescriptorToClose);

/// Delete this object from C++ memory.
///
/// @param self QProcess__UnixProcessParameters*
void q_process__unixprocessparameters_delete(void* self);

/// https://doc.qt.io/qt-6/qprocess.html#types

typedef enum {
    QPROCESSENVIRONMENT_INITIALIZATION_INHERITFROMPARENT = 0
} QProcessEnvironment__Initialization;

typedef enum {
    QPROCESS_PROCESSERROR_FAILEDTOSTART = 0,
    QPROCESS_PROCESSERROR_CRASHED = 1,
    QPROCESS_PROCESSERROR_TIMEDOUT = 2,
    QPROCESS_PROCESSERROR_READERROR = 3,
    QPROCESS_PROCESSERROR_WRITEERROR = 4,
    QPROCESS_PROCESSERROR_UNKNOWNERROR = 5
} QProcess__ProcessError;

typedef enum {
    QPROCESS_PROCESSSTATE_NOTRUNNING = 0,
    QPROCESS_PROCESSSTATE_STARTING = 1,
    QPROCESS_PROCESSSTATE_RUNNING = 2
} QProcess__ProcessState;

typedef enum {
    QPROCESS_PROCESSCHANNEL_STANDARDOUTPUT = 0,
    QPROCESS_PROCESSCHANNEL_STANDARDERROR = 1
} QProcess__ProcessChannel;

typedef enum {
    QPROCESS_PROCESSCHANNELMODE_SEPARATECHANNELS = 0,
    QPROCESS_PROCESSCHANNELMODE_MERGEDCHANNELS = 1,
    QPROCESS_PROCESSCHANNELMODE_FORWARDEDCHANNELS = 2,
    QPROCESS_PROCESSCHANNELMODE_FORWARDEDOUTPUTCHANNEL = 3,
    QPROCESS_PROCESSCHANNELMODE_FORWARDEDERRORCHANNEL = 4
} QProcess__ProcessChannelMode;

typedef enum {
    QPROCESS_INPUTCHANNELMODE_MANAGEDINPUTCHANNEL = 0,
    QPROCESS_INPUTCHANNELMODE_FORWARDEDINPUTCHANNEL = 1
} QProcess__InputChannelMode;

typedef enum {
    QPROCESS_EXITSTATUS_NORMALEXIT = 0,
    QPROCESS_EXITSTATUS_CRASHEXIT = 1
} QProcess__ExitStatus;

typedef enum {
    QPROCESS_UNIXPROCESSFLAG_RESETSIGNALHANDLERS = 1,
    QPROCESS_UNIXPROCESSFLAG_IGNORESIGPIPE = 2,
    QPROCESS_UNIXPROCESSFLAG_CLOSEFILEDESCRIPTORS = 16,
    QPROCESS_UNIXPROCESSFLAG_USEVFORK = 32,
    QPROCESS_UNIXPROCESSFLAG_CREATENEWSESSION = 64,
    QPROCESS_UNIXPROCESSFLAG_DISCONNECTCONTROLLINGTERMINAL = 128,
    QPROCESS_UNIXPROCESSFLAG_RESETIDS = 256
} QProcess__UnixProcessFlag;

#endif
