#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqfilesystemwatcher.hpp"
#include "libqfilesystemwatcher.h"

/// https://doc.qt.io/qt-6/qfilesystemwatcher.html

/// q_filesystemwatcher_new constructs a new QFileSystemWatcher object.
///
///
QFileSystemWatcher* q_filesystemwatcher_new() {
    return QFileSystemWatcher_new();
}

/// q_filesystemwatcher_new2 constructs a new QFileSystemWatcher object.
///
/// ``` const char* paths[] ```
QFileSystemWatcher* q_filesystemwatcher_new2(const char* paths[]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = malloc(paths_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < paths_len; ++_i) {
        paths_qstr[_i] = qstring(paths[_i]);
    }
    libqt_list paths_list = qstrlist(paths_qstr, paths_len);

    return QFileSystemWatcher_new2(paths_list);
}

/// q_filesystemwatcher_new3 constructs a new QFileSystemWatcher object.
///
/// ``` QObject* parent ```
QFileSystemWatcher* q_filesystemwatcher_new3(void* parent) {
    return QFileSystemWatcher_new3((QObject*)parent);
}

/// q_filesystemwatcher_new4 constructs a new QFileSystemWatcher object.
///
/// ``` const char* paths[], QObject* parent ```
QFileSystemWatcher* q_filesystemwatcher_new4(const char* paths[], void* parent) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = malloc(paths_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < paths_len; ++_i) {
        paths_qstr[_i] = qstring(paths[_i]);
    }
    libqt_list paths_list = qstrlist(paths_qstr, paths_len);

    return QFileSystemWatcher_new4(paths_list, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFileSystemWatcher* self ```
QMetaObject* q_filesystemwatcher_meta_object(void* self) {
    return QFileSystemWatcher_MetaObject((QFileSystemWatcher*)self);
}

/// ``` QFileSystemWatcher* self, const char* param1 ```
void* q_filesystemwatcher_metacast(void* self, const char* param1) {
    return QFileSystemWatcher_Metacast((QFileSystemWatcher*)self, param1);
}

/// ``` QFileSystemWatcher* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filesystemwatcher_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFileSystemWatcher_Metacall((QFileSystemWatcher*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemWatcher* self, int32_t (*slot)(QFileSystemWatcher*, enum QMetaObject__Call, int, void*) ```
void q_filesystemwatcher_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QFileSystemWatcher_OnMetacall((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemWatcher* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filesystemwatcher_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFileSystemWatcher_QBaseMetacall((QFileSystemWatcher*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_filesystemwatcher_tr(const char* s) {
    libqt_string _str = QFileSystemWatcher_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#addPath)
///
/// ``` QFileSystemWatcher* self, const char* file ```
bool q_filesystemwatcher_add_path(void* self, const char* file) {
    return QFileSystemWatcher_AddPath((QFileSystemWatcher*)self, qstring(file));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#addPaths)
///
/// ``` QFileSystemWatcher* self, const char* files[] ```
const char** q_filesystemwatcher_add_paths(void* self, const char* files[]) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = malloc(files_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < files_len; ++_i) {
        files_qstr[_i] = qstring(files[_i]);
    }
    libqt_list files_list = qstrlist(files_qstr, files_len);
    libqt_list _arr = QFileSystemWatcher_AddPaths((QFileSystemWatcher*)self, files_list);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#removePath)
///
/// ``` QFileSystemWatcher* self, const char* file ```
bool q_filesystemwatcher_remove_path(void* self, const char* file) {
    return QFileSystemWatcher_RemovePath((QFileSystemWatcher*)self, qstring(file));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#removePaths)
///
/// ``` QFileSystemWatcher* self, const char* files[] ```
const char** q_filesystemwatcher_remove_paths(void* self, const char* files[]) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = malloc(files_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < files_len; ++_i) {
        files_qstr[_i] = qstring(files[_i]);
    }
    libqt_list files_list = qstrlist(files_qstr, files_len);
    libqt_list _arr = QFileSystemWatcher_RemovePaths((QFileSystemWatcher*)self, files_list);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#files)
///
/// ``` QFileSystemWatcher* self ```
const char** q_filesystemwatcher_files(void* self) {
    libqt_list _arr = QFileSystemWatcher_Files((QFileSystemWatcher*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemwatcher.html#directories)
///
/// ``` QFileSystemWatcher* self ```
const char** q_filesystemwatcher_directories(void* self) {
    libqt_list _arr = QFileSystemWatcher_Directories((QFileSystemWatcher*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_filesystemwatcher_tr2(const char* s, const char* c) {
    libqt_string _str = QFileSystemWatcher_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_filesystemwatcher_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFileSystemWatcher_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFileSystemWatcher* self ```
const char* q_filesystemwatcher_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFileSystemWatcher* self, const char* name ```
void q_filesystemwatcher_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFileSystemWatcher* self ```
bool q_filesystemwatcher_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFileSystemWatcher* self ```
bool q_filesystemwatcher_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFileSystemWatcher* self ```
bool q_filesystemwatcher_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFileSystemWatcher* self ```
bool q_filesystemwatcher_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFileSystemWatcher* self, bool b ```
bool q_filesystemwatcher_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFileSystemWatcher* self ```
QThread* q_filesystemwatcher_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileSystemWatcher* self, QThread* thread ```
void q_filesystemwatcher_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileSystemWatcher* self, int interval ```
int32_t q_filesystemwatcher_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileSystemWatcher* self, int id ```
void q_filesystemwatcher_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFileSystemWatcher* self ```
libqt_list /* of QObject* */ q_filesystemwatcher_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFileSystemWatcher* self, QObject* parent ```
void q_filesystemwatcher_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFileSystemWatcher* self, QObject* filterObj ```
void q_filesystemwatcher_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFileSystemWatcher* self, QObject* obj ```
void q_filesystemwatcher_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_filesystemwatcher_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileSystemWatcher* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_filesystemwatcher_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_filesystemwatcher_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_filesystemwatcher_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFileSystemWatcher* self ```
void q_filesystemwatcher_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFileSystemWatcher* self ```
void q_filesystemwatcher_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFileSystemWatcher* self, const char* name, QVariant* value ```
bool q_filesystemwatcher_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFileSystemWatcher* self, const char* name ```
QVariant* q_filesystemwatcher_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFileSystemWatcher* self ```
const char** q_filesystemwatcher_dynamic_property_names(void* self) {
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
/// ``` QFileSystemWatcher* self ```
QBindingStorage* q_filesystemwatcher_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileSystemWatcher* self ```
QBindingStorage* q_filesystemwatcher_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSystemWatcher* self ```
void q_filesystemwatcher_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QFileSystemWatcher* self, void (*slot)(QObject*) ```
void q_filesystemwatcher_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFileSystemWatcher* self ```
QObject* q_filesystemwatcher_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFileSystemWatcher* self, const char* classname ```
bool q_filesystemwatcher_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFileSystemWatcher* self ```
void q_filesystemwatcher_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileSystemWatcher* self, int interval, enum Qt__TimerType timerType ```
int32_t q_filesystemwatcher_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filesystemwatcher_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileSystemWatcher* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filesystemwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSystemWatcher* self, QObject* param1 ```
void q_filesystemwatcher_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QFileSystemWatcher* self, void (*slot)(QObject*, QObject*) ```
void q_filesystemwatcher_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QEvent* event ```
bool q_filesystemwatcher_event(void* self, void* event) {
    return QFileSystemWatcher_Event((QFileSystemWatcher*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QEvent* event ```
bool q_filesystemwatcher_qbase_event(void* self, void* event) {
    return QFileSystemWatcher_QBaseEvent((QFileSystemWatcher*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, bool (*slot)(QFileSystemWatcher*, QEvent*) ```
void q_filesystemwatcher_on_event(void* self, bool (*slot)(void*, void*)) {
    QFileSystemWatcher_OnEvent((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QObject* watched, QEvent* event ```
bool q_filesystemwatcher_event_filter(void* self, void* watched, void* event) {
    return QFileSystemWatcher_EventFilter((QFileSystemWatcher*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QObject* watched, QEvent* event ```
bool q_filesystemwatcher_qbase_event_filter(void* self, void* watched, void* event) {
    return QFileSystemWatcher_QBaseEventFilter((QFileSystemWatcher*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, bool (*slot)(QFileSystemWatcher*, QObject*, QEvent*) ```
void q_filesystemwatcher_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QFileSystemWatcher_OnEventFilter((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QTimerEvent* event ```
void q_filesystemwatcher_timer_event(void* self, void* event) {
    QFileSystemWatcher_TimerEvent((QFileSystemWatcher*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QTimerEvent* event ```
void q_filesystemwatcher_qbase_timer_event(void* self, void* event) {
    QFileSystemWatcher_QBaseTimerEvent((QFileSystemWatcher*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, void (*slot)(QFileSystemWatcher*, QTimerEvent*) ```
void q_filesystemwatcher_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QFileSystemWatcher_OnTimerEvent((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QChildEvent* event ```
void q_filesystemwatcher_child_event(void* self, void* event) {
    QFileSystemWatcher_ChildEvent((QFileSystemWatcher*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QChildEvent* event ```
void q_filesystemwatcher_qbase_child_event(void* self, void* event) {
    QFileSystemWatcher_QBaseChildEvent((QFileSystemWatcher*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, void (*slot)(QFileSystemWatcher*, QChildEvent*) ```
void q_filesystemwatcher_on_child_event(void* self, void (*slot)(void*, void*)) {
    QFileSystemWatcher_OnChildEvent((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QEvent* event ```
void q_filesystemwatcher_custom_event(void* self, void* event) {
    QFileSystemWatcher_CustomEvent((QFileSystemWatcher*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QEvent* event ```
void q_filesystemwatcher_qbase_custom_event(void* self, void* event) {
    QFileSystemWatcher_QBaseCustomEvent((QFileSystemWatcher*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, void (*slot)(QFileSystemWatcher*, QEvent*) ```
void q_filesystemwatcher_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QFileSystemWatcher_OnCustomEvent((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
void q_filesystemwatcher_connect_notify(void* self, void* signal) {
    QFileSystemWatcher_ConnectNotify((QFileSystemWatcher*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
void q_filesystemwatcher_qbase_connect_notify(void* self, void* signal) {
    QFileSystemWatcher_QBaseConnectNotify((QFileSystemWatcher*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, void (*slot)(QFileSystemWatcher*, QMetaMethod*) ```
void q_filesystemwatcher_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QFileSystemWatcher_OnConnectNotify((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
void q_filesystemwatcher_disconnect_notify(void* self, void* signal) {
    QFileSystemWatcher_DisconnectNotify((QFileSystemWatcher*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
void q_filesystemwatcher_qbase_disconnect_notify(void* self, void* signal) {
    QFileSystemWatcher_QBaseDisconnectNotify((QFileSystemWatcher*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, void (*slot)(QFileSystemWatcher*, QMetaMethod*) ```
void q_filesystemwatcher_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QFileSystemWatcher_OnDisconnectNotify((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self ```
QObject* q_filesystemwatcher_sender(void* self) {
    return QFileSystemWatcher_Sender((QFileSystemWatcher*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self ```
QObject* q_filesystemwatcher_qbase_sender(void* self) {
    return QFileSystemWatcher_QBaseSender((QFileSystemWatcher*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QObject* (*slot)() ```
void q_filesystemwatcher_on_sender(void* self, QObject* (*slot)()) {
    QFileSystemWatcher_OnSender((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self ```
int32_t q_filesystemwatcher_sender_signal_index(void* self) {
    return QFileSystemWatcher_SenderSignalIndex((QFileSystemWatcher*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self ```
int32_t q_filesystemwatcher_qbase_sender_signal_index(void* self) {
    return QFileSystemWatcher_QBaseSenderSignalIndex((QFileSystemWatcher*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, int32_t (*slot)() ```
void q_filesystemwatcher_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QFileSystemWatcher_OnSenderSignalIndex((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, const char* signal ```
int32_t q_filesystemwatcher_receivers(void* self, const char* signal) {
    return QFileSystemWatcher_Receivers((QFileSystemWatcher*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, const char* signal ```
int32_t q_filesystemwatcher_qbase_receivers(void* self, const char* signal) {
    return QFileSystemWatcher_QBaseReceivers((QFileSystemWatcher*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, int32_t (*slot)(QFileSystemWatcher*, const char*) ```
void q_filesystemwatcher_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QFileSystemWatcher_OnReceivers((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
bool q_filesystemwatcher_is_signal_connected(void* self, void* signal) {
    return QFileSystemWatcher_IsSignalConnected((QFileSystemWatcher*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, QMetaMethod* signal ```
bool q_filesystemwatcher_qbase_is_signal_connected(void* self, void* signal) {
    return QFileSystemWatcher_QBaseIsSignalConnected((QFileSystemWatcher*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemWatcher* self, bool (*slot)(QFileSystemWatcher*, QMetaMethod*) ```
void q_filesystemwatcher_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QFileSystemWatcher_OnIsSignalConnected((QFileSystemWatcher*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFileSystemWatcher* self ```
void q_filesystemwatcher_delete(void* self) {
    QFileSystemWatcher_Delete((QFileSystemWatcher*)(self));
}