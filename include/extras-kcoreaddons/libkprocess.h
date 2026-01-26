#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKPROCESS_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKPROCESS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kprocess.html)

/// k_process_new constructs a new KProcess object.
///
KProcess* k_process_new();

/// [Upstream resources](https://api.kde.org/kprocess.html)

/// k_process_new2 constructs a new KProcess object.
///
/// @param parent QObject*
///
KProcess* k_process_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KProcess*
///
const QMetaObject* k_process_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KProcess*
/// @param callback const QMetaObject* func()
///
void k_process_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KProcess*
///
const QMetaObject* k_process_qbase_meta_object(void* self);

/// @param self KProcess*
/// @param param1 const char*
///
void* k_process_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KProcess*
/// @param callback void* func(KProcess* self, const char* param1)
///
void k_process_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KProcess*
/// @param param1 const char*
///
void* k_process_qbase_metacast(void* self, const char* param1);

/// @param self KProcess*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_process_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KProcess*
/// @param callback int32_t func(KProcess* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_process_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KProcess*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_process_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_process_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kprocess.html#setOutputChannelMode)
///
/// @param self KProcess*
/// @param mode enum KProcess__OutputChannelMode
///
void k_process_set_output_channel_mode(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kprocess.html#outputChannelMode)
///
/// @param self KProcess*
///
/// @return enum KProcess__OutputChannelMode
///
int32_t k_process_output_channel_mode(void* self);

/// [Upstream resources](https://api.kde.org/kprocess.html#setNextOpenMode)
///
/// @param self KProcess*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void k_process_set_next_open_mode(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kprocess.html#setEnv)
///
/// @param self KProcess*
/// @param name const char*
/// @param value const char*
///
void k_process_set_env(void* self, const char* name, const char* value);

/// [Upstream resources](https://api.kde.org/kprocess.html#unsetEnv)
///
/// @param self KProcess*
/// @param name const char*
///
void k_process_unset_env(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kprocess.html#clearEnvironment)
///
/// @param self KProcess*
///
void k_process_clear_environment(void* self);

/// [Upstream resources](https://api.kde.org/kprocess.html#setProgram)
///
/// @param self KProcess*
/// @param exe const char*
///
void k_process_set_program(void* self, const char* exe);

/// [Upstream resources](https://api.kde.org/kprocess.html#setProgram)
///
/// @param self KProcess*
/// @param argv const char**
///
void k_process_set_program2(void* self, const char* argv[static 1]);

/// [Upstream resources](https://api.kde.org/kprocess.html#operator-lt-lt)
///
/// @param self KProcess*
/// @param arg const char*
///
KProcess* k_process_operator_shift_left(void* self, const char* arg);

/// [Upstream resources](https://api.kde.org/kprocess.html#operator-lt-lt)
///
/// @param self KProcess*
/// @param args const char**
///
KProcess* k_process_operator_shift_left2(void* self, const char* args[static 1]);

/// [Upstream resources](https://api.kde.org/kprocess.html#clearProgram)
///
/// @param self KProcess*
///
void k_process_clear_program(void* self);

/// [Upstream resources](https://api.kde.org/kprocess.html#setShellCommand)
///
/// @param self KProcess*
/// @param cmd const char*
///
void k_process_set_shell_command(void* self, const char* cmd);

/// [Upstream resources](https://api.kde.org/kprocess.html#program)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
///
const char** k_process_program(void* self);

/// [Upstream resources](https://api.kde.org/kprocess.html#start)
///
/// @param self KProcess*
///
void k_process_start(void* self);

/// [Upstream resources](https://api.kde.org/kprocess.html#execute)
///
/// @param self KProcess*
///
int32_t k_process_execute(void* self);

/// [Upstream resources](https://api.kde.org/kprocess.html#execute)
///
/// @param exe const char*
///
int32_t k_process_execute2(const char* exe);

/// [Upstream resources](https://api.kde.org/kprocess.html#execute)
///
/// @param argv const char**
///
int32_t k_process_execute3(const char* argv[static 1]);

/// [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
///
/// @param self KProcess*
///
int32_t k_process_start_detached(void* self);

/// [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
///
/// @param exe const char*
///
int32_t k_process_start_detached2(const char* exe);

/// [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
///
/// @param argv const char**
///
int32_t k_process_start_detached3(const char* argv[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_process_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_process_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kprocess.html#setEnv)
///
/// @param self KProcess*
/// @param name const char*
/// @param value const char*
/// @param overwrite bool
///
void k_process_set_env3(void* self, const char* name, const char* value, bool overwrite);

/// [Upstream resources](https://api.kde.org/kprocess.html#setProgram)
///
/// @param self KProcess*
/// @param exe const char*
/// @param args const char**
///
void k_process_set_program22(void* self, const char* exe, const char* args[static 1]);

/// [Upstream resources](https://api.kde.org/kprocess.html#execute)
///
/// @param self KProcess*
/// @param msecs int
///
int32_t k_process_execute1(void* self, int msecs);

/// [Upstream resources](https://api.kde.org/kprocess.html#execute)
///
/// @param exe const char*
/// @param args const char**
///
int32_t k_process_execute22(const char* exe, const char* args[static 1]);

/// [Upstream resources](https://api.kde.org/kprocess.html#execute)
///
/// @param exe const char*
/// @param args const char**
/// @param msecs int
///
int32_t k_process_execute32(const char* exe, const char* args[static 1], int msecs);

/// [Upstream resources](https://api.kde.org/kprocess.html#execute)
///
/// @param argv const char**
/// @param msecs int
///
int32_t k_process_execute23(const char* argv[static 1], int msecs);

/// [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
///
/// @param exe const char*
/// @param args const char**
///
int32_t k_process_start_detached22(const char* exe, const char* args[static 1]);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// @param self KProcess*
///
void k_process_start2(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startCommand)
///
/// @param self KProcess*
/// @param command const char*
///
void k_process_start_command(void* self, const char* command);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#arguments)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
///
const char** k_process_arguments(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setArguments)
///
/// @param self KProcess*
/// @param arguments const char**
///
void k_process_set_arguments(void* self, const char* arguments[static 1]);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processChannelMode)
///
/// @param self KProcess*
///
/// @return enum QProcess__ProcessChannelMode
///
int32_t k_process_process_channel_mode(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessChannelMode)
///
/// @param self KProcess*
/// @param mode enum QProcess__ProcessChannelMode
///
void k_process_set_process_channel_mode(void* self, int32_t mode);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#inputChannelMode)
///
/// @param self KProcess*
///
/// @return enum QProcess__InputChannelMode
///
int32_t k_process_input_channel_mode(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setInputChannelMode)
///
/// @param self KProcess*
/// @param mode enum QProcess__InputChannelMode
///
void k_process_set_input_channel_mode(void* self, int32_t mode);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readChannel)
///
/// @param self KProcess*
///
/// @return enum QProcess__ProcessChannel
///
int32_t k_process_read_channel(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setReadChannel)
///
/// @param self KProcess*
/// @param channel enum QProcess__ProcessChannel
///
void k_process_set_read_channel(void* self, int32_t channel);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeReadChannel)
///
/// @param self KProcess*
/// @param channel enum QProcess__ProcessChannel
///
void k_process_close_read_channel(void* self, int32_t channel);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
///
/// @param self KProcess*
///
void k_process_close_write_channel(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardInputFile)
///
/// @param self KProcess*
/// @param fileName const char*
///
void k_process_set_standard_input_file(void* self, const char* fileName);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
///
/// @param self KProcess*
/// @param fileName const char*
///
void k_process_set_standard_output_file(void* self, const char* fileName);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
///
/// @param self KProcess*
/// @param fileName const char*
///
void k_process_set_standard_error_file(void* self, const char* fileName);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputProcess)
///
/// @param self KProcess*
/// @param destination QProcess*
///
void k_process_set_standard_output_process(void* self, void* destination);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
///
/// @param self KProcess*
/// @param description const char*
///
void k_process_fail_child_process_modifier(void* self, const char* description);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#unixProcessParameters)
///
/// @param self KProcess*
///
QProcess__UnixProcessParameters* k_process_unix_process_parameters(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
///
/// @param self KProcess*
/// @param params QProcess__UnixProcessParameters*
///
void k_process_set_unix_process_parameters(void* self, void* params);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
///
/// @param self KProcess*
/// @param flagsOnly flag of enum QProcess__UnixProcessFlag
///
void k_process_set_unix_process_parameters2(void* self, uint32_t flagsOnly);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#workingDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KProcess*
///
const char* k_process_working_directory(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setWorkingDirectory)
///
/// @param self KProcess*
/// @param dir const char*
///
void k_process_set_working_directory(void* self, const char* dir);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setEnvironment)
///
/// @param self KProcess*
/// @param environment const char**
///
void k_process_set_environment(void* self, const char* environment[static 1]);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#environment)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
///
const char** k_process_environment(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessEnvironment)
///
/// @param self KProcess*
/// @param environment QProcessEnvironment*
///
void k_process_set_process_environment(void* self, void* environment);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
///
/// @param self KProcess*
///
QProcessEnvironment* k_process_process_environment(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#error)
///
/// @param self KProcess*
///
/// @return enum QProcess__ProcessError
///
int32_t k_process_error(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#state)
///
/// @param self KProcess*
///
/// @return enum QProcess__ProcessState
///
int32_t k_process_state(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processId)
///
/// @param self KProcess*
///
long long k_process_process_id(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
///
/// @param self KProcess*
///
bool k_process_wait_for_started(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
///
/// @param self KProcess*
///
bool k_process_wait_for_finished(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readAllStandardOutput)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
///
char* k_process_read_all_standard_output(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readAllStandardError)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
///
char* k_process_read_all_standard_error(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#exitCode)
///
/// @param self KProcess*
///
int32_t k_process_exit_code(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#exitStatus)
///
/// @param self KProcess*
///
/// @return enum QProcess__ExitStatus
///
int32_t k_process_exit_status(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#systemEnvironment)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_process_system_environment();

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#nullDevice)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_process_null_device();

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#terminate)
///
/// @param self KProcess*
///
void k_process_terminate(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#kill)
///
/// @param self KProcess*
///
void k_process_kill(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// @param self KProcess*
/// @param exitCode int
///
void k_process_finished(void* self, int exitCode);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, int exitCode)
///
void k_process_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
///
/// @param self KProcess*
/// @param error enum QProcess__ProcessError
///
void k_process_error_occurred(void* self, int32_t error);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, enum QProcess__ProcessError error)
///
void k_process_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// @param self KProcess*
/// @param program const char*
/// @param arguments const char**
///
void k_process_start22(void* self, const char* program, const char* arguments[static 1]);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// @param self KProcess*
/// @param program const char*
/// @param arguments const char**
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void k_process_start3(void* self, const char* program, const char* arguments[static 1], int32_t mode);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
///
/// @param self KProcess*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void k_process_start1(void* self, int32_t mode);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startCommand)
///
/// @param self KProcess*
/// @param command const char*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void k_process_start_command2(void* self, const char* command, int32_t mode);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// @param self KProcess*
/// @param pid long long*
///
bool k_process_start_detached1(void* self, long long* pid);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
///
/// @param self KProcess*
/// @param fileName const char*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void k_process_set_standard_output_file2(void* self, const char* fileName, int32_t mode);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
///
/// @param self KProcess*
/// @param fileName const char*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void k_process_set_standard_error_file2(void* self, const char* fileName, int32_t mode);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
///
/// @param self KProcess*
/// @param description const char*
/// @param error int
///
void k_process_fail_child_process_modifier2(void* self, const char* description, int error);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
///
/// @param self KProcess*
/// @param msecs int
///
bool k_process_wait_for_started1(void* self, int msecs);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
///
/// @param self KProcess*
/// @param msecs int
///
bool k_process_wait_for_finished1(void* self, int msecs);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
///
/// @param program const char*
/// @param arguments const char**
/// @param workingDirectory const char*
/// @param pid long long*
///
bool k_process_start_detached4(const char* program, const char* arguments[static 1], const char* workingDirectory, long long* pid);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// @param self KProcess*
/// @param exitCode int
/// @param exitStatus enum QProcess__ExitStatus
///
void k_process_finished2(void* self, int exitCode, int32_t exitStatus);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, int exitCode, enum QProcess__ExitStatus exitStatus)
///
void k_process_on_finished2(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self KProcess*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t k_process_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self KProcess*
/// @param enabled bool
///
void k_process_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self KProcess*
///
bool k_process_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self KProcess*
///
bool k_process_is_open(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self KProcess*
///
bool k_process_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self KProcess*
///
bool k_process_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self KProcess*
///
int32_t k_process_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self KProcess*
///
int32_t k_process_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self KProcess*
///
int32_t k_process_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self KProcess*
/// @param channel int
///
void k_process_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self KProcess*
///
int32_t k_process_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self KProcess*
/// @param channel int
///
void k_process_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self KProcess*
/// @param data char*
/// @param maxlen long long
///
long long k_process_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
/// @param maxlen long long
///
char* k_process_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
///
char* k_process_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self KProcess*
/// @param data char*
/// @param maxlen long long
///
long long k_process_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
///
char* k_process_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self KProcess*
///
void k_process_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self KProcess*
///
void k_process_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self KProcess*
///
void k_process_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self KProcess*
///
bool k_process_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self KProcess*
/// @param data const char*
/// @param lenVal long long
///
long long k_process_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self KProcess*
/// @param data const char*
///
long long k_process_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self KProcess*
/// @param data const char*
///
long long k_process_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self KProcess*
/// @param data char*
/// @param maxlen long long
///
long long k_process_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
/// @param maxlen long long
///
char* k_process_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self KProcess*
/// @param maxSize long long
///
long long k_process_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self KProcess*
/// @param c char
///
void k_process_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self KProcess*
/// @param c char
///
bool k_process_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self KProcess*
/// @param c char*
///
bool k_process_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KProcess*
///
const char* k_process_error_string(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self KProcess*
///
void k_process_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self)
///
void k_process_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self KProcess*
/// @param channel int
///
void k_process_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, int channel)
///
void k_process_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self KProcess*
/// @param bytes long long
///
void k_process_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, long long bytes)
///
void k_process_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self KProcess*
/// @param channel int
/// @param bytes long long
///
void k_process_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, int channel, long long bytes)
///
void k_process_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self KProcess*
///
void k_process_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self)
///
void k_process_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self KProcess*
///
void k_process_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self)
///
void k_process_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
/// @param maxlen long long
///
char* k_process_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KProcess*
///
const char* k_process_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KProcess*
/// @param name char*
///
void k_process_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KProcess*
///
bool k_process_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KProcess*
///
bool k_process_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KProcess*
///
bool k_process_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KProcess*
///
bool k_process_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KProcess*
/// @param b bool
///
bool k_process_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KProcess*
///
QThread* k_process_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KProcess*
/// @param thread QThread*
///
bool k_process_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KProcess*
/// @param interval int
///
int32_t k_process_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KProcess*
/// @param time int64_t of nanoseconds
///
int32_t k_process_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KProcess*
/// @param id int
///
void k_process_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KProcess*
/// @param id enum Qt__TimerId
///
void k_process_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KProcess*
///
/// @return libqt_list of QObject*
///
libqt_list k_process_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KProcess*
/// @param parent QObject*
///
void k_process_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KProcess*
/// @param filterObj QObject*
///
void k_process_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KProcess*
/// @param obj QObject*
///
void k_process_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_process_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KProcess*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_process_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_process_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_process_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KProcess*
///
void k_process_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KProcess*
///
void k_process_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KProcess*
/// @param name const char*
/// @param value QVariant*
///
bool k_process_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KProcess*
/// @param name const char*
///
QVariant* k_process_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KProcess*
///
const char** k_process_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KProcess*
///
QBindingStorage* k_process_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KProcess*
///
const QBindingStorage* k_process_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KProcess*
///
void k_process_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self)
///
void k_process_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KProcess*
///
QObject* k_process_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KProcess*
/// @param classname const char*
///
bool k_process_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KProcess*
///
void k_process_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KProcess*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_process_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KProcess*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_process_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KProcess*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_process_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_process_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KProcess*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_process_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KProcess*
/// @param param1 QObject*
///
void k_process_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, QObject* param1)
///
void k_process_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_process_open(void* self, int32_t mode);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_process_qbase_open(void* self, int32_t mode);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func(KProcess* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void k_process_on_open(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param msecs int
///
bool k_process_wait_for_ready_read(void* self, int msecs);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param msecs int
///
bool k_process_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func(KProcess* self, int msecs)
///
void k_process_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param msecs int
///
bool k_process_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param msecs int
///
bool k_process_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func(KProcess* self, int msecs)
///
void k_process_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
long long k_process_bytes_to_write(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
long long k_process_qbase_bytes_to_write(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback long long func()
///
void k_process_on_bytes_to_write(void* self, long long (*callback)());

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
bool k_process_is_sequential(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
bool k_process_qbase_is_sequential(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func()
///
void k_process_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
void k_process_close(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
void k_process_qbase_close(void* self);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback void func()
///
void k_process_on_close(void* self, void (*callback)());

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param data char*
/// @param maxlen long long
///
long long k_process_read_data(void* self, char* data, long long maxlen);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param data char*
/// @param maxlen long long
///
long long k_process_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback long long func(KProcess* self, char* data, long long maxlen)
///
void k_process_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param data const char*
/// @param lenVal long long
///
long long k_process_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param data const char*
/// @param lenVal long long
///
long long k_process_qbase_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback long long func(KProcess* self, const char* data, long long lenVal)
///
void k_process_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
long long k_process_pos(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
long long k_process_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback long long func()
///
void k_process_on_pos(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
long long k_process_size(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
long long k_process_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback long long func()
///
void k_process_on_size(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param pos long long
///
bool k_process_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param pos long long
///
bool k_process_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func(KProcess* self, long long pos)
///
void k_process_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
bool k_process_at_end(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
bool k_process_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func()
///
void k_process_on_at_end(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
bool k_process_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
bool k_process_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func()
///
void k_process_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
long long k_process_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
long long k_process_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback long long func()
///
void k_process_on_bytes_available(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
bool k_process_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
bool k_process_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func()
///
void k_process_on_can_read_line(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param data char*
/// @param maxlen long long
///
long long k_process_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param data char*
/// @param maxlen long long
///
long long k_process_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback long long func(KProcess* self, char* data, long long maxlen)
///
void k_process_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param maxSize long long
///
long long k_process_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param maxSize long long
///
long long k_process_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback long long func(KProcess* self, long long maxSize)
///
void k_process_on_skip_data(void* self, long long (*callback)(void*, long long));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param event QEvent*
///
bool k_process_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param event QEvent*
///
bool k_process_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func(KProcess* self, QEvent* event)
///
void k_process_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_process_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_process_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func(KProcess* self, QObject* watched, QEvent* event)
///
void k_process_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param event QTimerEvent*
///
void k_process_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param event QTimerEvent*
///
void k_process_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, QTimerEvent* event)
///
void k_process_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param event QChildEvent*
///
void k_process_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param event QChildEvent*
///
void k_process_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, QChildEvent* event)
///
void k_process_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param event QEvent*
///
void k_process_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param event QEvent*
///
void k_process_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, QEvent* event)
///
void k_process_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param signal QMetaMethod*
///
void k_process_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param signal QMetaMethod*
///
void k_process_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, QMetaMethod* signal)
///
void k_process_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param signal QMetaMethod*
///
void k_process_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param signal QMetaMethod*
///
void k_process_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, QMetaMethod* signal)
///
void k_process_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param state enum QProcess__ProcessState
///
void k_process_set_process_state(void* self, int32_t state);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param state enum QProcess__ProcessState
///
void k_process_qbase_set_process_state(void* self, int32_t state);

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, enum QProcess__ProcessState state)
///
void k_process_on_set_process_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void k_process_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void k_process_qbase_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void k_process_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param errorString const char*
///
void k_process_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param errorString const char*
///
void k_process_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, const char* errorString)
///
void k_process_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
QObject* k_process_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
QObject* k_process_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback QObject* func()
///
void k_process_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
///
int32_t k_process_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
///
int32_t k_process_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback int32_t func()
///
void k_process_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param signal const char*
///
int32_t k_process_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param signal const char*
///
int32_t k_process_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback int32_t func(KProcess* self, const char* signal)
///
void k_process_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KProcess*
/// @param signal QMetaMethod*
///
bool k_process_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KProcess*
/// @param signal QMetaMethod*
///
bool k_process_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KProcess*
/// @param callback bool func(KProcess* self, QMetaMethod* signal)
///
void k_process_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#started)
///
/// Wrapper to allow calling private signal
///
/// @param self KProcess*
/// @param callback void func(KProcess* self)
///
void k_process_on_started(void* self, void (*callback)(void*));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#stateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, enum QProcess__ProcessState state)
///
void k_process_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardOutput)
///
/// Wrapper to allow calling private signal
///
/// @param self KProcess*
/// @param callback void func(KProcess* self)
///
void k_process_on_ready_read_standard_output(void* self, void (*callback)(void*));

/// Inherited from QProcess
///
/// [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardError)
///
/// Wrapper to allow calling private signal
///
/// @param self KProcess*
/// @param callback void func(KProcess* self)
///
void k_process_on_ready_read_standard_error(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KProcess*
/// @param callback void func(KProcess* self, const char* objectName)
///
void k_process_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kprocess.html#dtor.KProcess)
///
/// Delete this object from C++ memory.
///
/// @param self KProcess*
///
void k_process_delete(void* self);

/// [Upstream resources](https://api.kde.org/kprocess.html#public-types)

typedef enum {
    KPROCESS_OUTPUTCHANNELMODE_SEPARATECHANNELS = 0,
    KPROCESS_OUTPUTCHANNELMODE_MERGEDCHANNELS = 1,
    KPROCESS_OUTPUTCHANNELMODE_FORWARDEDCHANNELS = 2,
    KPROCESS_OUTPUTCHANNELMODE_ONLYSTDOUTCHANNEL = 4,
    KPROCESS_OUTPUTCHANNELMODE_ONLYSTDERRCHANNEL = 3
} KProcess__OutputChannelMode;

#endif
