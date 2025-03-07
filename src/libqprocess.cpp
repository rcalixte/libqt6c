#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QProcess>
#include <QProcessEnvironment>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qprocess.h>
#include "libqprocess.hpp"
#include "libqprocess.hxx"

QProcessEnvironment* QProcessEnvironment_new() {
    return new QProcessEnvironment();
}

QProcessEnvironment* QProcessEnvironment_new2(int param1) {
    return new QProcessEnvironment(static_cast<QProcessEnvironment::Initialization>(param1));
}

QProcessEnvironment* QProcessEnvironment_new3(QProcessEnvironment* other) {
    return new QProcessEnvironment(*other);
}

void QProcessEnvironment_OperatorAssign(QProcessEnvironment* self, QProcessEnvironment* other) {
    self->operator=(*other);
}

void QProcessEnvironment_Swap(QProcessEnvironment* self, QProcessEnvironment* other) {
    self->swap(*other);
}

bool QProcessEnvironment_OperatorEqual(const QProcessEnvironment* self, QProcessEnvironment* other) {
    return (*self == *other);
}

bool QProcessEnvironment_OperatorNotEqual(const QProcessEnvironment* self, QProcessEnvironment* other) {
    return (*self != *other);
}

bool QProcessEnvironment_IsEmpty(const QProcessEnvironment* self) {
    return self->isEmpty();
}

bool QProcessEnvironment_InheritsFromParent(const QProcessEnvironment* self) {
    return self->inheritsFromParent();
}

void QProcessEnvironment_Clear(QProcessEnvironment* self) {
    self->clear();
}

bool QProcessEnvironment_Contains(const QProcessEnvironment* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->contains(name_QString);
}

void QProcessEnvironment_Insert(QProcessEnvironment* self, libqt_string name, libqt_string value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->insert(name_QString, value_QString);
}

void QProcessEnvironment_Remove(QProcessEnvironment* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->remove(name_QString);
}

libqt_string QProcessEnvironment_Value(const QProcessEnvironment* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->value(name_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QProcessEnvironment_ToStringList(const QProcessEnvironment* self) {
    QStringList _ret = self->toStringList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QProcessEnvironment_Keys(const QProcessEnvironment* self) {
    QStringList _ret = self->keys();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QProcessEnvironment_InsertWithQProcessEnvironment(QProcessEnvironment* self, QProcessEnvironment* e) {
    self->insert(*e);
}

QProcessEnvironment* QProcessEnvironment_SystemEnvironment() {
    return new QProcessEnvironment(QProcessEnvironment::systemEnvironment());
}

libqt_string QProcessEnvironment_Value2(const QProcessEnvironment* self, libqt_string name, libqt_string defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    QString _ret = self->value(name_QString, defaultValue_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QProcessEnvironment_Delete(QProcessEnvironment* self) {
    delete self;
}

QProcess* QProcess_new() {
    return new VirtualQProcess();
}

QProcess* QProcess_new2(QObject* parent) {
    return new VirtualQProcess(parent);
}

QMetaObject* QProcess_MetaObject(const QProcess* self) {
    return (QMetaObject*)self->metaObject();
}

void* QProcess_Metacast(QProcess* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QProcess_Metacall(QProcess* self, int param1, int param2, void** param3) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QProcess_OnMetacall(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Metacall_Callback(reinterpret_cast<VirtualQProcess::QProcess_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QProcess_QBaseMetacall(QProcess* self, int param1, int param2, void** param3) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Metacall_IsBase(true);
        return vqprocess->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QProcess_Tr(const char* s) {
    QString _ret = QProcess::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QProcess_Start(QProcess* self, libqt_string program) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    self->start(program_QString);
}

void QProcess_Start2(QProcess* self) {
    self->start();
}

void QProcess_StartCommand(QProcess* self, libqt_string command) {
    QString command_QString = QString::fromUtf8(command.data, command.len);
    self->startCommand(command_QString);
}

bool QProcess_StartDetached(QProcess* self) {
    return self->startDetached();
}

libqt_string QProcess_Program(const QProcess* self) {
    QString _ret = self->program();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QProcess_SetProgram(QProcess* self, libqt_string program) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    self->setProgram(program_QString);
}

libqt_list /* of libqt_string */ QProcess_Arguments(const QProcess* self) {
    QStringList _ret = self->arguments();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QProcess_SetArguments(QProcess* self, libqt_list /* of libqt_string */ arguments) {
    QStringList arguments_QList;
    arguments_QList.reserve(arguments.len);
    libqt_string* arguments_arr = static_cast<libqt_string*>(arguments.data.ptr);
    for (size_t i = 0; i < arguments.len; ++i) {
        QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
        arguments_QList.push_back(arguments_arr_i_QString);
    }
    self->setArguments(arguments_QList);
}

int QProcess_ProcessChannelMode(const QProcess* self) {
    return static_cast<int>(self->processChannelMode());
}

void QProcess_SetProcessChannelMode(QProcess* self, int mode) {
    self->setProcessChannelMode(static_cast<QProcess::ProcessChannelMode>(mode));
}

int QProcess_InputChannelMode(const QProcess* self) {
    return static_cast<int>(self->inputChannelMode());
}

void QProcess_SetInputChannelMode(QProcess* self, int mode) {
    self->setInputChannelMode(static_cast<QProcess::InputChannelMode>(mode));
}

int QProcess_ReadChannel(const QProcess* self) {
    return static_cast<int>(self->readChannel());
}

void QProcess_SetReadChannel(QProcess* self, int channel) {
    self->setReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_CloseReadChannel(QProcess* self, int channel) {
    self->closeReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_CloseWriteChannel(QProcess* self) {
    self->closeWriteChannel();
}

void QProcess_SetStandardInputFile(QProcess* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setStandardInputFile(fileName_QString);
}

void QProcess_SetStandardOutputFile(QProcess* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setStandardOutputFile(fileName_QString);
}

void QProcess_SetStandardErrorFile(QProcess* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setStandardErrorFile(fileName_QString);
}

void QProcess_SetStandardOutputProcess(QProcess* self, QProcess* destination) {
    self->setStandardOutputProcess(destination);
}

libqt_string QProcess_WorkingDirectory(const QProcess* self) {
    QString _ret = self->workingDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QProcess_SetWorkingDirectory(QProcess* self, libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->setWorkingDirectory(dir_QString);
}

void QProcess_SetEnvironment(QProcess* self, libqt_list /* of libqt_string */ environment) {
    QStringList environment_QList;
    environment_QList.reserve(environment.len);
    libqt_string* environment_arr = static_cast<libqt_string*>(environment.data.ptr);
    for (size_t i = 0; i < environment.len; ++i) {
        QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
        environment_QList.push_back(environment_arr_i_QString);
    }
    self->setEnvironment(environment_QList);
}

libqt_list /* of libqt_string */ QProcess_Environment(const QProcess* self) {
    QStringList _ret = self->environment();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QProcess_SetProcessEnvironment(QProcess* self, QProcessEnvironment* environment) {
    self->setProcessEnvironment(*environment);
}

QProcessEnvironment* QProcess_ProcessEnvironment(const QProcess* self) {
    return new QProcessEnvironment(self->processEnvironment());
}

int QProcess_Error(const QProcess* self) {
    return static_cast<int>(self->error());
}

int QProcess_State(const QProcess* self) {
    return static_cast<int>(self->state());
}

long long QProcess_ProcessId(const QProcess* self) {
    return static_cast<long long>(self->processId());
}

bool QProcess_WaitForStarted(QProcess* self) {
    return self->waitForStarted();
}

bool QProcess_WaitForFinished(QProcess* self) {
    return self->waitForFinished();
}

libqt_string QProcess_ReadAllStandardOutput(QProcess* self) {
    QByteArray _qb = self->readAllStandardOutput();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QProcess_ReadAllStandardError(QProcess* self) {
    QByteArray _qb = self->readAllStandardError();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QProcess_ExitCode(const QProcess* self) {
    return self->exitCode();
}

int QProcess_ExitStatus(const QProcess* self) {
    return static_cast<int>(self->exitStatus());
}

int QProcess_Execute(libqt_string program) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    return QProcess::execute(program_QString);
}

bool QProcess_StartDetachedWithProgram(libqt_string program) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    return QProcess::startDetached(program_QString);
}

libqt_list /* of libqt_string */ QProcess_SystemEnvironment() {
    QStringList _ret = QProcess::systemEnvironment();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_string QProcess_NullDevice() {
    QString _ret = QProcess::nullDevice();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QProcess_Terminate(QProcess* self) {
    self->terminate();
}

void QProcess_Kill(QProcess* self) {
    self->kill();
}

void QProcess_Finished(QProcess* self, int exitCode) {
    self->finished(static_cast<int>(exitCode));
}

void QProcess_Connect_Finished(QProcess* self, intptr_t slot) {
    void (*slotFunc)(QProcess*, int) = reinterpret_cast<void (*)(QProcess*, int)>(slot);
    QProcess::connect(self, &QProcess::finished, [self, slotFunc](int exitCode) {
        int sigval1 = exitCode;
        slotFunc(self, sigval1);
    });
}

void QProcess_ErrorOccurred(QProcess* self, int errorVal) {
    self->errorOccurred(static_cast<QProcess::ProcessError>(errorVal));
}

void QProcess_Connect_ErrorOccurred(QProcess* self, intptr_t slot) {
    void (*slotFunc)(QProcess*, int) = reinterpret_cast<void (*)(QProcess*, int)>(slot);
    QProcess::connect(self, &QProcess::errorOccurred, [self, slotFunc](QProcess::ProcessError errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

libqt_string QProcess_Tr2(const char* s, const char* c) {
    QString _ret = QProcess::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QProcess_Tr3(const char* s, const char* c, int n) {
    QString _ret = QProcess::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QProcess_Start22(QProcess* self, libqt_string program, libqt_list /* of libqt_string */ arguments) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    QStringList arguments_QList;
    arguments_QList.reserve(arguments.len);
    libqt_string* arguments_arr = static_cast<libqt_string*>(arguments.data.ptr);
    for (size_t i = 0; i < arguments.len; ++i) {
        QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
        arguments_QList.push_back(arguments_arr_i_QString);
    }
    self->start(program_QString, arguments_QList);
}

void QProcess_Start3(QProcess* self, libqt_string program, libqt_list /* of libqt_string */ arguments, int mode) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    QStringList arguments_QList;
    arguments_QList.reserve(arguments.len);
    libqt_string* arguments_arr = static_cast<libqt_string*>(arguments.data.ptr);
    for (size_t i = 0; i < arguments.len; ++i) {
        QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
        arguments_QList.push_back(arguments_arr_i_QString);
    }
    self->start(program_QString, arguments_QList, static_cast<QIODeviceBase::OpenMode>(mode));
}

void QProcess_Start1(QProcess* self, int mode) {
    self->start(static_cast<QIODeviceBase::OpenMode>(mode));
}

void QProcess_StartCommand2(QProcess* self, libqt_string command, int mode) {
    QString command_QString = QString::fromUtf8(command.data, command.len);
    self->startCommand(command_QString, static_cast<QIODeviceBase::OpenMode>(mode));
}

bool QProcess_StartDetached1(QProcess* self, long long* pid) {
    return self->startDetached(static_cast<qint64*>(pid));
}

void QProcess_SetStandardOutputFile2(QProcess* self, libqt_string fileName, int mode) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setStandardOutputFile(fileName_QString, static_cast<QIODeviceBase::OpenMode>(mode));
}

void QProcess_SetStandardErrorFile2(QProcess* self, libqt_string fileName, int mode) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setStandardErrorFile(fileName_QString, static_cast<QIODeviceBase::OpenMode>(mode));
}

bool QProcess_WaitForStarted1(QProcess* self, int msecs) {
    return self->waitForStarted(static_cast<int>(msecs));
}

bool QProcess_WaitForFinished1(QProcess* self, int msecs) {
    return self->waitForFinished(static_cast<int>(msecs));
}

int QProcess_Execute2(libqt_string program, libqt_list /* of libqt_string */ arguments) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    QStringList arguments_QList;
    arguments_QList.reserve(arguments.len);
    libqt_string* arguments_arr = static_cast<libqt_string*>(arguments.data.ptr);
    for (size_t i = 0; i < arguments.len; ++i) {
        QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
        arguments_QList.push_back(arguments_arr_i_QString);
    }
    return QProcess::execute(program_QString, arguments_QList);
}

bool QProcess_StartDetached2(libqt_string program, libqt_list /* of libqt_string */ arguments) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    QStringList arguments_QList;
    arguments_QList.reserve(arguments.len);
    libqt_string* arguments_arr = static_cast<libqt_string*>(arguments.data.ptr);
    for (size_t i = 0; i < arguments.len; ++i) {
        QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
        arguments_QList.push_back(arguments_arr_i_QString);
    }
    return QProcess::startDetached(program_QString, arguments_QList);
}

bool QProcess_StartDetached3(libqt_string program, libqt_list /* of libqt_string */ arguments, libqt_string workingDirectory) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    QStringList arguments_QList;
    arguments_QList.reserve(arguments.len);
    libqt_string* arguments_arr = static_cast<libqt_string*>(arguments.data.ptr);
    for (size_t i = 0; i < arguments.len; ++i) {
        QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
        arguments_QList.push_back(arguments_arr_i_QString);
    }
    QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
    return QProcess::startDetached(program_QString, arguments_QList, workingDirectory_QString);
}

bool QProcess_StartDetached4(libqt_string program, libqt_list /* of libqt_string */ arguments, libqt_string workingDirectory, long long* pid) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    QStringList arguments_QList;
    arguments_QList.reserve(arguments.len);
    libqt_string* arguments_arr = static_cast<libqt_string*>(arguments.data.ptr);
    for (size_t i = 0; i < arguments.len; ++i) {
        QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
        arguments_QList.push_back(arguments_arr_i_QString);
    }
    QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
    return QProcess::startDetached(program_QString, arguments_QList, workingDirectory_QString, static_cast<qint64*>(pid));
}

void QProcess_Finished2(QProcess* self, int exitCode, int exitStatus) {
    self->finished(static_cast<int>(exitCode), static_cast<QProcess::ExitStatus>(exitStatus));
}

void QProcess_Connect_Finished2(QProcess* self, intptr_t slot) {
    void (*slotFunc)(QProcess*, int, int) = reinterpret_cast<void (*)(QProcess*, int, int)>(slot);
    QProcess::connect(self, &QProcess::finished, [self, slotFunc](int exitCode, QProcess::ExitStatus exitStatus) {
        int sigval1 = exitCode;
        int sigval2 = static_cast<int>(exitStatus);
        slotFunc(self, sigval1, sigval2);
    });
}

// Derived class handler implementation
bool QProcess_Open(QProcess* self, int mode) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return vqprocess->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return vqprocess->open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Base class handler implementation
bool QProcess_QBaseOpen(QProcess* self, int mode) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Open_IsBase(true);
        return vqprocess->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return vqprocess->open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnOpen(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Open_Callback(reinterpret_cast<VirtualQProcess::QProcess_Open_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProcess_WaitForReadyRead(QProcess* self, int msecs) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return vqprocess->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqprocess->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QProcess_QBaseWaitForReadyRead(QProcess* self, int msecs) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_WaitForReadyRead_IsBase(true);
        return vqprocess->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqprocess->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnWaitForReadyRead(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_WaitForReadyRead_Callback(reinterpret_cast<VirtualQProcess::QProcess_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProcess_WaitForBytesWritten(QProcess* self, int msecs) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return vqprocess->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqprocess->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QProcess_QBaseWaitForBytesWritten(QProcess* self, int msecs) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_WaitForBytesWritten_IsBase(true);
        return vqprocess->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqprocess->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnWaitForBytesWritten(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQProcess::QProcess_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long QProcess_BytesToWrite(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return static_cast<long long>(vqprocess->bytesToWrite());
    } else {
        return static_cast<long long>(vqprocess->bytesToWrite());
    }
}

// Base class handler implementation
long long QProcess_QBaseBytesToWrite(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqprocess->bytesToWrite());
    } else {
        return static_cast<long long>(vqprocess->bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnBytesToWrite(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_BytesToWrite_Callback(reinterpret_cast<VirtualQProcess::QProcess_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProcess_IsSequential(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return vqprocess->isSequential();
    } else {
        return vqprocess->isSequential();
    }
}

// Base class handler implementation
bool QProcess_QBaseIsSequential(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_IsSequential_IsBase(true);
        return vqprocess->isSequential();
    } else {
        return vqprocess->isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnIsSequential(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_IsSequential_Callback(reinterpret_cast<VirtualQProcess::QProcess_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
void QProcess_Close(QProcess* self) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->close();
    } else {
        vqprocess->close();
    }
}

// Base class handler implementation
void QProcess_QBaseClose(QProcess* self) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Close_IsBase(true);
        vqprocess->close();
    } else {
        vqprocess->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnClose(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Close_Callback(reinterpret_cast<VirtualQProcess::QProcess_Close_Callback>(slot));
    }
}

// Derived class handler implementation
long long QProcess_ReadData(QProcess* self, char* data, long long maxlen) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return static_cast<long long>(vqprocess->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqprocess->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QProcess_QBaseReadData(QProcess* self, char* data, long long maxlen) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_ReadData_IsBase(true);
        return static_cast<long long>(vqprocess->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqprocess->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnReadData(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_ReadData_Callback(reinterpret_cast<VirtualQProcess::QProcess_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QProcess_WriteData(QProcess* self, const char* data, long long lenVal) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return static_cast<long long>(vqprocess->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqprocess->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QProcess_QBaseWriteData(QProcess* self, const char* data, long long lenVal) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_WriteData_IsBase(true);
        return static_cast<long long>(vqprocess->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqprocess->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnWriteData(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_WriteData_Callback(reinterpret_cast<VirtualQProcess::QProcess_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QProcess_Pos(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return static_cast<long long>(vqprocess->pos());
    } else {
        return static_cast<long long>(vqprocess->pos());
    }
}

// Base class handler implementation
long long QProcess_QBasePos(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_Pos_IsBase(true);
        return static_cast<long long>(vqprocess->pos());
    } else {
        return static_cast<long long>(vqprocess->pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnPos(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_Pos_Callback(reinterpret_cast<VirtualQProcess::QProcess_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QProcess_Size(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return static_cast<long long>(vqprocess->size());
    } else {
        return static_cast<long long>(vqprocess->size());
    }
}

// Base class handler implementation
long long QProcess_QBaseSize(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_Size_IsBase(true);
        return static_cast<long long>(vqprocess->size());
    } else {
        return static_cast<long long>(vqprocess->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnSize(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_Size_Callback(reinterpret_cast<VirtualQProcess::QProcess_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProcess_Seek(QProcess* self, long long pos) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return vqprocess->seek(static_cast<qint64>(pos));
    } else {
        return vqprocess->seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QProcess_QBaseSeek(QProcess* self, long long pos) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Seek_IsBase(true);
        return vqprocess->seek(static_cast<qint64>(pos));
    } else {
        return vqprocess->seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnSeek(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Seek_Callback(reinterpret_cast<VirtualQProcess::QProcess_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProcess_AtEnd(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return vqprocess->atEnd();
    } else {
        return vqprocess->atEnd();
    }
}

// Base class handler implementation
bool QProcess_QBaseAtEnd(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_AtEnd_IsBase(true);
        return vqprocess->atEnd();
    } else {
        return vqprocess->atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnAtEnd(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_AtEnd_Callback(reinterpret_cast<VirtualQProcess::QProcess_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProcess_Reset(QProcess* self) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return vqprocess->reset();
    } else {
        return vqprocess->reset();
    }
}

// Base class handler implementation
bool QProcess_QBaseReset(QProcess* self) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Reset_IsBase(true);
        return vqprocess->reset();
    } else {
        return vqprocess->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnReset(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Reset_Callback(reinterpret_cast<VirtualQProcess::QProcess_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long QProcess_BytesAvailable(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return static_cast<long long>(vqprocess->bytesAvailable());
    } else {
        return static_cast<long long>(vqprocess->bytesAvailable());
    }
}

// Base class handler implementation
long long QProcess_QBaseBytesAvailable(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqprocess->bytesAvailable());
    } else {
        return static_cast<long long>(vqprocess->bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnBytesAvailable(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_BytesAvailable_Callback(reinterpret_cast<VirtualQProcess::QProcess_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProcess_CanReadLine(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return vqprocess->canReadLine();
    } else {
        return vqprocess->canReadLine();
    }
}

// Base class handler implementation
bool QProcess_QBaseCanReadLine(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_CanReadLine_IsBase(true);
        return vqprocess->canReadLine();
    } else {
        return vqprocess->canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnCanReadLine(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_CanReadLine_Callback(reinterpret_cast<VirtualQProcess::QProcess_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
long long QProcess_ReadLineData(QProcess* self, char* data, long long maxlen) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return static_cast<long long>(vqprocess->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqprocess->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QProcess_QBaseReadLineData(QProcess* self, char* data, long long maxlen) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_ReadLineData_IsBase(true);
        return static_cast<long long>(vqprocess->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqprocess->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnReadLineData(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_ReadLineData_Callback(reinterpret_cast<VirtualQProcess::QProcess_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QProcess_SkipData(QProcess* self, long long maxSize) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return static_cast<long long>(vqprocess->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqprocess->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QProcess_QBaseSkipData(QProcess* self, long long maxSize) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_SkipData_IsBase(true);
        return static_cast<long long>(vqprocess->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqprocess->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnSkipData(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_SkipData_Callback(reinterpret_cast<VirtualQProcess::QProcess_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProcess_Event(QProcess* self, QEvent* event) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return vqprocess->event(event);
    } else {
        return vqprocess->event(event);
    }
}

// Base class handler implementation
bool QProcess_QBaseEvent(QProcess* self, QEvent* event) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Event_IsBase(true);
        return vqprocess->event(event);
    } else {
        return vqprocess->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnEvent(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_Event_Callback(reinterpret_cast<VirtualQProcess::QProcess_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProcess_EventFilter(QProcess* self, QObject* watched, QEvent* event) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        return vqprocess->eventFilter(watched, event);
    } else {
        return vqprocess->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QProcess_QBaseEventFilter(QProcess* self, QObject* watched, QEvent* event) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_EventFilter_IsBase(true);
        return vqprocess->eventFilter(watched, event);
    } else {
        return vqprocess->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnEventFilter(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_EventFilter_Callback(reinterpret_cast<VirtualQProcess::QProcess_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QProcess_TimerEvent(QProcess* self, QTimerEvent* event) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->timerEvent(event);
    } else {
        vqprocess->timerEvent(event);
    }
}

// Base class handler implementation
void QProcess_QBaseTimerEvent(QProcess* self, QTimerEvent* event) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_TimerEvent_IsBase(true);
        vqprocess->timerEvent(event);
    } else {
        vqprocess->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnTimerEvent(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_TimerEvent_Callback(reinterpret_cast<VirtualQProcess::QProcess_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProcess_ChildEvent(QProcess* self, QChildEvent* event) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->childEvent(event);
    } else {
        vqprocess->childEvent(event);
    }
}

// Base class handler implementation
void QProcess_QBaseChildEvent(QProcess* self, QChildEvent* event) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_ChildEvent_IsBase(true);
        vqprocess->childEvent(event);
    } else {
        vqprocess->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnChildEvent(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_ChildEvent_Callback(reinterpret_cast<VirtualQProcess::QProcess_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProcess_CustomEvent(QProcess* self, QEvent* event) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->customEvent(event);
    } else {
        vqprocess->customEvent(event);
    }
}

// Base class handler implementation
void QProcess_QBaseCustomEvent(QProcess* self, QEvent* event) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_CustomEvent_IsBase(true);
        vqprocess->customEvent(event);
    } else {
        vqprocess->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnCustomEvent(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_CustomEvent_Callback(reinterpret_cast<VirtualQProcess::QProcess_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProcess_ConnectNotify(QProcess* self, QMetaMethod* signal) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->connectNotify(*signal);
    } else {
        vqprocess->connectNotify(*signal);
    }
}

// Base class handler implementation
void QProcess_QBaseConnectNotify(QProcess* self, QMetaMethod* signal) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_ConnectNotify_IsBase(true);
        vqprocess->connectNotify(*signal);
    } else {
        vqprocess->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnConnectNotify(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_ConnectNotify_Callback(reinterpret_cast<VirtualQProcess::QProcess_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QProcess_DisconnectNotify(QProcess* self, QMetaMethod* signal) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->disconnectNotify(*signal);
    } else {
        vqprocess->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QProcess_QBaseDisconnectNotify(QProcess* self, QMetaMethod* signal) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_DisconnectNotify_IsBase(true);
        vqprocess->disconnectNotify(*signal);
    } else {
        vqprocess->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnDisconnectNotify(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_DisconnectNotify_Callback(reinterpret_cast<VirtualQProcess::QProcess_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QProcess_SetProcessState(QProcess* self, int state) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setProcessState(static_cast<QProcess::ProcessState>(state));
    } else {
        vqprocess->setProcessState(static_cast<QProcess::ProcessState>(state));
    }
}

// Base class handler implementation
void QProcess_QBaseSetProcessState(QProcess* self, int state) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_SetProcessState_IsBase(true);
        vqprocess->setProcessState(static_cast<QProcess::ProcessState>(state));
    } else {
        vqprocess->setProcessState(static_cast<QProcess::ProcessState>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnSetProcessState(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_SetProcessState_Callback(reinterpret_cast<VirtualQProcess::QProcess_SetProcessState_Callback>(slot));
    }
}

// Derived class handler implementation
void QProcess_SetOpenMode(QProcess* self, int openMode) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqprocess->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QProcess_QBaseSetOpenMode(QProcess* self, int openMode) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_SetOpenMode_IsBase(true);
        vqprocess->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqprocess->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnSetOpenMode(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_SetOpenMode_Callback(reinterpret_cast<VirtualQProcess::QProcess_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QProcess_SetErrorString(QProcess* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setErrorString(errorString_QString);
    } else {
        vqprocess->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QProcess_QBaseSetErrorString(QProcess* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_SetErrorString_IsBase(true);
        vqprocess->setErrorString(errorString_QString);
    } else {
        vqprocess->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnSetErrorString(QProcess* self, intptr_t slot) {
    if (auto* vqprocess = dynamic_cast<VirtualQProcess*>(self)) {
        vqprocess->setQProcess_SetErrorString_Callback(reinterpret_cast<VirtualQProcess::QProcess_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QProcess_Sender(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return vqprocess->sender();
    } else {
        return vqprocess->sender();
    }
}

// Base class handler implementation
QObject* QProcess_QBaseSender(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_Sender_IsBase(true);
        return vqprocess->sender();
    } else {
        return vqprocess->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnSender(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_Sender_Callback(reinterpret_cast<VirtualQProcess::QProcess_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QProcess_SenderSignalIndex(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return vqprocess->senderSignalIndex();
    } else {
        return vqprocess->senderSignalIndex();
    }
}

// Base class handler implementation
int QProcess_QBaseSenderSignalIndex(const QProcess* self) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_SenderSignalIndex_IsBase(true);
        return vqprocess->senderSignalIndex();
    } else {
        return vqprocess->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnSenderSignalIndex(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_SenderSignalIndex_Callback(reinterpret_cast<VirtualQProcess::QProcess_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QProcess_Receivers(const QProcess* self, const char* signal) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return vqprocess->receivers(signal);
    } else {
        return vqprocess->receivers(signal);
    }
}

// Base class handler implementation
int QProcess_QBaseReceivers(const QProcess* self, const char* signal) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_Receivers_IsBase(true);
        return vqprocess->receivers(signal);
    } else {
        return vqprocess->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnReceivers(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_Receivers_Callback(reinterpret_cast<VirtualQProcess::QProcess_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProcess_IsSignalConnected(const QProcess* self, QMetaMethod* signal) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        return vqprocess->isSignalConnected(*signal);
    } else {
        return vqprocess->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QProcess_QBaseIsSignalConnected(const QProcess* self, QMetaMethod* signal) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_IsSignalConnected_IsBase(true);
        return vqprocess->isSignalConnected(*signal);
    } else {
        return vqprocess->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProcess_OnIsSignalConnected(const QProcess* self, intptr_t slot) {
    if (auto* vqprocess = const_cast<VirtualQProcess*>(dynamic_cast<const VirtualQProcess*>(self))) {
        vqprocess->setQProcess_IsSignalConnected_Callback(reinterpret_cast<VirtualQProcess::QProcess_IsSignalConnected_Callback>(slot));
    }
}

void QProcess_Delete(QProcess* self) {
    delete self;
}
