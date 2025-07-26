#pragma once
#ifndef SRCQT6C_LIBQPROCESS_H
#define SRCQT6C_LIBQPROCESS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qprocessenvironment.html

/// q_processenvironment_new constructs a new QProcessEnvironment object.
///
///
QProcessEnvironment* q_processenvironment_new();

/// q_processenvironment_new2 constructs a new QProcessEnvironment object.
///
/// ``` enum QProcessEnvironment__Initialization param1 ```
QProcessEnvironment* q_processenvironment_new2(int64_t param1);

/// q_processenvironment_new3 constructs a new QProcessEnvironment object.
///
/// ``` QProcessEnvironment* other ```
QProcessEnvironment* q_processenvironment_new3(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#operator-eq)
///
/// ``` QProcessEnvironment* self, QProcessEnvironment* other ```
void q_processenvironment_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#swap)
///
/// ``` QProcessEnvironment* self, QProcessEnvironment* other ```
void q_processenvironment_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#isEmpty)
///
/// ``` QProcessEnvironment* self ```
bool q_processenvironment_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#inheritsFromParent)
///
/// ``` QProcessEnvironment* self ```
bool q_processenvironment_inherits_from_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#clear)
///
/// ``` QProcessEnvironment* self ```
void q_processenvironment_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#contains)
///
/// ``` QProcessEnvironment* self, const char* name ```
bool q_processenvironment_contains(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
///
/// ``` QProcessEnvironment* self, const char* name, const char* value ```
void q_processenvironment_insert(void* self, const char* name, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#remove)
///
/// ``` QProcessEnvironment* self, const char* name ```
void q_processenvironment_remove(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
///
/// ``` QProcessEnvironment* self, const char* name ```
const char* q_processenvironment_value(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#toStringList)
///
/// ``` QProcessEnvironment* self ```
const char** q_processenvironment_to_string_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#keys)
///
/// ``` QProcessEnvironment* self ```
const char** q_processenvironment_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
///
/// ``` QProcessEnvironment* self, QProcessEnvironment* e ```
void q_processenvironment_insert2(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#systemEnvironment)
///
///
QProcessEnvironment* q_processenvironment_system_environment();

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
///
/// ``` QProcessEnvironment* self, const char* name, const char* defaultValue ```
const char* q_processenvironment_value2(void* self, const char* name, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#dtor.QProcessEnvironment)
///
/// Delete this object from C++ memory.
///
/// ``` QProcessEnvironment* self ```
void q_processenvironment_delete(void* self);

/// https://doc.qt.io/qt-6/qprocess.html

/// q_process_new constructs a new QProcess object.
///
///
QProcess* q_process_new();

/// q_process_new2 constructs a new QProcess object.
///
/// ``` QObject* parent ```
QProcess* q_process_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QProcess* self ```
const QMetaObject* q_process_meta_object(void* self);

/// ``` QProcess* self, const char* param1 ```
void* q_process_metacast(void* self, const char* param1);

/// ``` QProcess* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_process_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QProcess* self, int32_t (*slot)(QProcess*, enum QMetaObject__Call, int, void*) ```
void q_process_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QProcess* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_process_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_process_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// ``` QProcess* self, const char* program ```
void q_process_start(void* self, const char* program);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// ``` QProcess* self ```
void q_process_start2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startCommand)
///
/// ``` QProcess* self, const char* command ```
void q_process_start_command(void* self, const char* command);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` QProcess* self ```
bool q_process_start_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
///
/// ``` QProcess* self, int mode ```
bool q_process_open(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
///
/// Allows for overriding the related default method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, int) ```
void q_process_on_open(void* self, bool (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
///
/// Base class method implementation
///
/// ``` QProcess* self, int mode ```
bool q_process_qbase_open(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#program)
///
/// ``` QProcess* self ```
const char* q_process_program(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProgram)
///
/// ``` QProcess* self, const char* program ```
void q_process_set_program(void* self, const char* program);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#arguments)
///
/// ``` QProcess* self ```
const char** q_process_arguments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setArguments)
///
/// ``` QProcess* self, const char* arguments[] ```
void q_process_set_arguments(void* self, const char* arguments[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processChannelMode)
///
/// ``` QProcess* self ```
int64_t q_process_process_channel_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessChannelMode)
///
/// ``` QProcess* self, enum QProcess__ProcessChannelMode mode ```
void q_process_set_process_channel_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#inputChannelMode)
///
/// ``` QProcess* self ```
int64_t q_process_input_channel_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setInputChannelMode)
///
/// ``` QProcess* self, enum QProcess__InputChannelMode mode ```
void q_process_set_input_channel_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readChannel)
///
/// ``` QProcess* self ```
int64_t q_process_read_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setReadChannel)
///
/// ``` QProcess* self, enum QProcess__ProcessChannel channel ```
void q_process_set_read_channel(void* self, int64_t channel);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#closeReadChannel)
///
/// ``` QProcess* self, enum QProcess__ProcessChannel channel ```
void q_process_close_read_channel(void* self, int64_t channel);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
///
/// ``` QProcess* self ```
void q_process_close_write_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardInputFile)
///
/// ``` QProcess* self, const char* fileName ```
void q_process_set_standard_input_file(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
///
/// ``` QProcess* self, const char* fileName ```
void q_process_set_standard_output_file(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
///
/// ``` QProcess* self, const char* fileName ```
void q_process_set_standard_error_file(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputProcess)
///
/// ``` QProcess* self, QProcess* destination ```
void q_process_set_standard_output_process(void* self, void* destination);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
///
/// ``` QProcess* self, const char* description ```
void q_process_fail_child_process_modifier(void* self, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#unixProcessParameters)
///
/// ``` QProcess* self ```
QProcess__UnixProcessParameters* q_process_unix_process_parameters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
///
/// ``` QProcess* self, QProcess__UnixProcessParameters* params ```
void q_process_set_unix_process_parameters(void* self, void* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
///
/// ``` QProcess* self, uint32_t flagsOnly ```
void q_process_set_unix_process_parameters2(void* self, int64_t flagsOnly);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#workingDirectory)
///
/// ``` QProcess* self ```
const char* q_process_working_directory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setWorkingDirectory)
///
/// ``` QProcess* self, const char* dir ```
void q_process_set_working_directory(void* self, const char* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setEnvironment)
///
/// ``` QProcess* self, const char* environment[] ```
void q_process_set_environment(void* self, const char* environment[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#environment)
///
/// ``` QProcess* self ```
const char** q_process_environment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessEnvironment)
///
/// ``` QProcess* self, QProcessEnvironment* environment ```
void q_process_set_process_environment(void* self, void* environment);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
///
/// ``` QProcess* self ```
QProcessEnvironment* q_process_process_environment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#error)
///
/// ``` QProcess* self ```
int64_t q_process_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#state)
///
/// ``` QProcess* self ```
int64_t q_process_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processId)
///
/// ``` QProcess* self ```
long long q_process_process_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
///
/// ``` QProcess* self ```
bool q_process_wait_for_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
///
/// ``` QProcess* self, int msecs ```
bool q_process_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, int) ```
void q_process_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
///
/// Base class method implementation
///
/// ``` QProcess* self, int msecs ```
bool q_process_qbase_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
///
/// ``` QProcess* self, int msecs ```
bool q_process_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, int) ```
void q_process_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// ``` QProcess* self, int msecs ```
bool q_process_qbase_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
///
/// ``` QProcess* self ```
bool q_process_wait_for_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readAllStandardOutput)
///
/// ``` QProcess* self ```
char* q_process_read_all_standard_output(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readAllStandardError)
///
/// ``` QProcess* self ```
char* q_process_read_all_standard_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#exitCode)
///
/// ``` QProcess* self ```
int32_t q_process_exit_code(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#exitStatus)
///
/// ``` QProcess* self ```
int64_t q_process_exit_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
///
/// ``` QProcess* self ```
long long q_process_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// ``` QProcess* self, long long (*slot)() ```
void q_process_on_bytes_to_write(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
///
/// Base class method implementation
///
/// ``` QProcess* self ```
long long q_process_qbase_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
///
/// ``` QProcess* self ```
bool q_process_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
///
/// Allows for overriding the related default method
///
/// ``` QProcess* self, bool (*slot)() ```
void q_process_on_is_sequential(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
///
/// Base class method implementation
///
/// ``` QProcess* self ```
bool q_process_qbase_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
///
/// ``` QProcess* self ```
void q_process_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
///
/// Allows for overriding the related default method
///
/// ``` QProcess* self, void (*slot)() ```
void q_process_on_close(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
///
/// Base class method implementation
///
/// ``` QProcess* self ```
void q_process_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#execute)
///
/// ``` const char* program ```
int32_t q_process_execute(const char* program);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` const char* program ```
bool q_process_start_detached2(const char* program);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#systemEnvironment)
///
///
const char** q_process_system_environment();

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#nullDevice)
///
///
const char* q_process_null_device();

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#terminate)
///
/// ``` QProcess* self ```
void q_process_terminate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#kill)
///
/// ``` QProcess* self ```
void q_process_kill(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// ``` QProcess* self, int exitCode ```
void q_process_finished(void* self, int exitCode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// ``` QProcess* self, void (*slot)(QProcess*, int) ```
void q_process_on_finished(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
///
/// ``` QProcess* self, enum QProcess__ProcessError errorVal ```
void q_process_error_occurred(void* self, int64_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
///
/// ``` QProcess* self, void (*slot)(QProcess*, enum QProcess__ProcessError) ```
void q_process_on_error_occurred(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
///
/// ``` QProcess* self, enum QProcess__ProcessState state ```
void q_process_set_process_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
///
/// Allows for overriding the related default method
///
/// ``` QProcess* self, void (*slot)(QProcess*, enum QProcess__ProcessState) ```
void q_process_on_set_process_state(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
///
/// Base class method implementation
///
/// ``` QProcess* self, enum QProcess__ProcessState state ```
void q_process_qbase_set_process_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
///
/// Allows for overriding the related default method
///
/// ``` QProcess* self, long long (*slot)(QProcess*, char*, long long) ```
void q_process_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
///
/// Base class method implementation
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_qbase_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
///
/// ``` QProcess* self, const char* data, long long lenVal ```
long long q_process_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
///
/// Allows for overriding the related default method
///
/// ``` QProcess* self, long long (*slot)(QProcess*, const char*, long long) ```
void q_process_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
///
/// Base class method implementation
///
/// ``` QProcess* self, const char* data, long long lenVal ```
long long q_process_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_process_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_process_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// ``` QProcess* self, const char* program, const char* arguments[] ```
void q_process_start22(void* self, const char* program, const char* arguments[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// ``` QProcess* self, const char* program, const char* arguments[], int mode ```
void q_process_start3(void* self, const char* program, const char* arguments[], int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// ``` QProcess* self, int mode ```
void q_process_start1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startCommand)
///
/// ``` QProcess* self, const char* command, int mode ```
void q_process_start_command2(void* self, const char* command, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` QProcess* self, long long* pid ```
bool q_process_start_detached1(void* self, long long* pid);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
///
/// ``` QProcess* self, const char* fileName, int mode ```
void q_process_set_standard_output_file2(void* self, const char* fileName, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
///
/// ``` QProcess* self, const char* fileName, int mode ```
void q_process_set_standard_error_file2(void* self, const char* fileName, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
///
/// ``` QProcess* self, const char* description, int errorVal ```
void q_process_fail_child_process_modifier2(void* self, const char* description, int errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
///
/// ``` QProcess* self, int msecs ```
bool q_process_wait_for_started1(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
///
/// ``` QProcess* self, int msecs ```
bool q_process_wait_for_finished1(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#execute)
///
/// ``` const char* program, const char* arguments[] ```
int32_t q_process_execute2(const char* program, const char* arguments[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` const char* program, const char* arguments[] ```
bool q_process_start_detached22(const char* program, const char* arguments[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` const char* program, const char* arguments[], const char* workingDirectory ```
bool q_process_start_detached3(const char* program, const char* arguments[], const char* workingDirectory);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// ``` const char* program, const char* arguments[], const char* workingDirectory, long long* pid ```
bool q_process_start_detached4(const char* program, const char* arguments[], const char* workingDirectory, long long* pid);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// ``` QProcess* self, int exitCode, enum QProcess__ExitStatus exitStatus ```
void q_process_finished2(void* self, int exitCode, int64_t exitStatus);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// ``` QProcess* self, void (*slot)(QProcess*, int, enum QProcess__ExitStatus) ```
void q_process_on_finished2(void* self, void (*slot)(void*, int, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QProcess* self ```
int64_t q_process_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QProcess* self, bool enabled ```
void q_process_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QProcess* self ```
bool q_process_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QProcess* self ```
bool q_process_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QProcess* self ```
bool q_process_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QProcess* self ```
bool q_process_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QProcess* self ```
int32_t q_process_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QProcess* self ```
int32_t q_process_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QProcess* self ```
int32_t q_process_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QProcess* self, int channel ```
void q_process_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QProcess* self ```
int32_t q_process_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QProcess* self, int channel ```
void q_process_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QProcess* self, long long maxlen ```
char* q_process_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QProcess* self ```
char* q_process_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QProcess* self ```
char* q_process_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QProcess* self ```
void q_process_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QProcess* self ```
void q_process_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QProcess* self ```
void q_process_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QProcess* self ```
bool q_process_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QProcess* self, const char* data, long long lenVal ```
long long q_process_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QProcess* self, const char* data ```
long long q_process_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QProcess* self, const char* data ```
long long q_process_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QProcess* self, long long maxlen ```
char* q_process_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QProcess* self, long long maxSize ```
long long q_process_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QProcess* self, char c ```
void q_process_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QProcess* self, char c ```
bool q_process_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QProcess* self, char* c ```
bool q_process_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QProcess* self ```
const char* q_process_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QProcess* self ```
void q_process_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QProcess* self, void (*slot)(QProcess*) ```
void q_process_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QProcess* self, int channel ```
void q_process_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QProcess* self, void (*slot)(QProcess*, int) ```
void q_process_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QProcess* self, long long bytes ```
void q_process_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QProcess* self, void (*slot)(QProcess*, long long) ```
void q_process_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QProcess* self, int channel, long long bytes ```
void q_process_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QProcess* self, void (*slot)(QProcess*, int, long long) ```
void q_process_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QProcess* self ```
void q_process_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QProcess* self, void (*slot)(QProcess*) ```
void q_process_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QProcess* self ```
void q_process_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QProcess* self, void (*slot)(QProcess*) ```
void q_process_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QProcess* self, long long maxlen ```
char* q_process_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QProcess* self ```
const char* q_process_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QProcess* self, char* name ```
void q_process_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QProcess* self ```
bool q_process_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QProcess* self ```
bool q_process_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QProcess* self ```
bool q_process_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QProcess* self ```
bool q_process_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QProcess* self, bool b ```
bool q_process_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QProcess* self ```
QThread* q_process_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QProcess* self, QThread* thread ```
bool q_process_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProcess* self, int interval ```
int32_t q_process_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QProcess* self, int id ```
void q_process_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QProcess* self, enum Qt__TimerId id ```
void q_process_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QProcess* self ```
libqt_list /* of QObject* */ q_process_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QProcess* self, QObject* parent ```
void q_process_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QProcess* self, QObject* filterObj ```
void q_process_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QProcess* self, QObject* obj ```
void q_process_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_process_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProcess* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_process_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_process_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_process_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QProcess* self ```
void q_process_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QProcess* self ```
void q_process_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QProcess* self, const char* name, QVariant* value ```
bool q_process_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QProcess* self, const char* name ```
QVariant* q_process_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QProcess* self ```
const char** q_process_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProcess* self ```
QBindingStorage* q_process_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProcess* self ```
const QBindingStorage* q_process_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProcess* self ```
void q_process_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProcess* self, void (*slot)(QProcess*) ```
void q_process_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QProcess* self ```
QObject* q_process_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QProcess* self, const char* classname ```
bool q_process_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QProcess* self ```
void q_process_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QProcess* self, QThread* thread, Disambiguated_t* param2 ```
bool q_process_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProcess* self, int interval, enum Qt__TimerType timerType ```
int32_t q_process_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_process_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProcess* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_process_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProcess* self, QObject* param1 ```
void q_process_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProcess* self, void (*slot)(QProcess*, QObject*) ```
void q_process_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, long long (*slot)() ```
void q_process_on_pos(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, long long (*slot)() ```
void q_process_on_size(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, long long pos ```
bool q_process_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, long long pos ```
bool q_process_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, long long) ```
void q_process_on_seek(void* self, bool (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)() ```
void q_process_on_at_end(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)() ```
void q_process_on_reset(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
long long q_process_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, long long (*slot)() ```
void q_process_on_bytes_available(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
bool q_process_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)() ```
void q_process_on_can_read_line(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, char* data, long long maxlen ```
long long q_process_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, long long (*slot)(QProcess*, char*, long long) ```
void q_process_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, long long maxSize ```
long long q_process_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, long long maxSize ```
long long q_process_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, long long (*slot)(QProcess*, long long) ```
void q_process_on_skip_data(void* self, long long (*slot)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QEvent* event ```
bool q_process_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QEvent* event ```
bool q_process_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, QEvent*) ```
void q_process_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QObject* watched, QEvent* event ```
bool q_process_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QObject* watched, QEvent* event ```
bool q_process_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, QObject*, QEvent*) ```
void q_process_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QTimerEvent* event ```
void q_process_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QTimerEvent* event ```
void q_process_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, QTimerEvent*) ```
void q_process_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QChildEvent* event ```
void q_process_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QChildEvent* event ```
void q_process_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, QChildEvent*) ```
void q_process_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QEvent* event ```
void q_process_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QEvent* event ```
void q_process_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, QEvent*) ```
void q_process_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
void q_process_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
void q_process_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, QMetaMethod*) ```
void q_process_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
void q_process_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
void q_process_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, QMetaMethod*) ```
void q_process_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, int openMode ```
void q_process_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, int openMode ```
void q_process_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, int) ```
void q_process_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, const char* errorString ```
void q_process_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, const char* errorString ```
void q_process_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, void (*slot)(QProcess*, const char*) ```
void q_process_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
QObject* q_process_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
QObject* q_process_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, QObject* (*slot)() ```
void q_process_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self ```
int32_t q_process_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self ```
int32_t q_process_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, int32_t (*slot)() ```
void q_process_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, const char* signal ```
int32_t q_process_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, const char* signal ```
int32_t q_process_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, int32_t (*slot)(QProcess*, const char*) ```
void q_process_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
bool q_process_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProcess* self, QMetaMethod* signal ```
bool q_process_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProcess* self, bool (*slot)(QProcess*, QMetaMethod*) ```
void q_process_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#started)
///
/// Wrapper to allow calling private signal
///
/// ``` QProcess* self, void (*slot)(QProcess*) ```
void q_process_on_started(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#stateChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QProcess* self, void (*slot)(QProcess*, enum QProcess__ProcessState) ```
void q_process_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardOutput)
///
/// Wrapper to allow calling private signal
///
/// ``` QProcess* self, void (*slot)(QProcess*) ```
void q_process_on_ready_read_standard_output(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardError)
///
/// Wrapper to allow calling private signal
///
/// ``` QProcess* self, void (*slot)(QProcess*) ```
void q_process_on_ready_read_standard_error(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QProcess* self, void (*slot)(QProcess*, const char*) ```
void q_process_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#dtor.QProcess)
///
/// Delete this object from C++ memory.
///
/// ``` QProcess* self ```
void q_process_delete(void* self);

/// https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html

/// q_process__unixprocessparameters_new constructs a new QProcess::UnixProcessParameters object.
///
/// ``` QProcess__UnixProcessParameters* other ```
QProcess__UnixProcessParameters* q_process__unixprocessparameters_new(void* other);

/// q_process__unixprocessparameters_new2 constructs a new QProcess::UnixProcessParameters object and invalidates the source QProcess::UnixProcessParameters object.
///
/// ``` QProcess__UnixProcessParameters* other ```
QProcess__UnixProcessParameters* q_process__unixprocessparameters_new2(void* other);

/// q_process__unixprocessparameters_copy_assign shallow copies `other` into `self`.
///
/// ``` QProcess__UnixProcessParameters* self, QProcess__UnixProcessParameters* other ```
void q_process__unixprocessparameters_copy_assign(void* self, void* other);

/// q_process__unixprocessparameters_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QProcess__UnixProcessParameters* self, QProcess__UnixProcessParameters* other ```
void q_process__unixprocessparameters_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qprocess::unixprocessparameters.html#dtor.QProcess::UnixProcessParameters)
///
/// Delete this object from C++ memory.
///
/// ``` QProcess__UnixProcessParameters* self ```
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
