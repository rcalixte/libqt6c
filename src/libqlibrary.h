#pragma once
#ifndef SRCQT6C_LIBQLIBRARY_H
#define SRCQT6C_LIBQLIBRARY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qlibrary.html

/// q_library_new constructs a new QLibrary object.
///
///
QLibrary* q_library_new();

/// q_library_new2 constructs a new QLibrary object.
///
/// ``` const char* fileName ```
QLibrary* q_library_new2(const char* fileName);

/// q_library_new3 constructs a new QLibrary object.
///
/// ``` const char* fileName, int verNum ```
QLibrary* q_library_new3(const char* fileName, int verNum);

/// q_library_new4 constructs a new QLibrary object.
///
/// ``` const char* fileName, const char* version ```
QLibrary* q_library_new4(const char* fileName, const char* version);

/// q_library_new5 constructs a new QLibrary object.
///
/// ``` QObject* parent ```
QLibrary* q_library_new5(void* parent);

/// q_library_new6 constructs a new QLibrary object.
///
/// ``` const char* fileName, QObject* parent ```
QLibrary* q_library_new6(const char* fileName, void* parent);

/// q_library_new7 constructs a new QLibrary object.
///
/// ``` const char* fileName, int verNum, QObject* parent ```
QLibrary* q_library_new7(const char* fileName, int verNum, void* parent);

/// q_library_new8 constructs a new QLibrary object.
///
/// ``` const char* fileName, const char* version, QObject* parent ```
QLibrary* q_library_new8(const char* fileName, const char* version, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLibrary* self ```
const QMetaObject* q_library_meta_object(void* self);

/// ``` QLibrary* self, const char* param1 ```
void* q_library_metacast(void* self, const char* param1);

/// ``` QLibrary* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_library_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QLibrary* self, int32_t (*slot)(QLibrary*, enum QMetaObject__Call, int, void*) ```
void q_library_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QLibrary* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_library_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_library_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#load)
///
/// ``` QLibrary* self ```
bool q_library_load(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#unload)
///
/// ``` QLibrary* self ```
bool q_library_unload(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#isLoaded)
///
/// ``` QLibrary* self ```
bool q_library_is_loaded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#isLibrary)
///
/// ``` const char* fileName ```
bool q_library_is_library(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#setFileName)
///
/// ``` QLibrary* self, const char* fileName ```
void q_library_set_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#fileName)
///
/// ``` QLibrary* self ```
const char* q_library_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#setFileNameAndVersion)
///
/// ``` QLibrary* self, const char* fileName, int verNum ```
void q_library_set_file_name_and_version(void* self, const char* fileName, int verNum);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#setFileNameAndVersion)
///
/// ``` QLibrary* self, const char* fileName, const char* version ```
void q_library_set_file_name_and_version2(void* self, const char* fileName, const char* version);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#errorString)
///
/// ``` QLibrary* self ```
const char* q_library_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#setLoadHints)
///
/// ``` QLibrary* self, int hints ```
void q_library_set_load_hints(void* self, int64_t hints);

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#loadHints)
///
/// ``` QLibrary* self ```
int64_t q_library_load_hints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_library_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_library_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLibrary* self ```
const char* q_library_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLibrary* self, char* name ```
void q_library_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLibrary* self ```
bool q_library_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLibrary* self ```
bool q_library_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLibrary* self ```
bool q_library_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLibrary* self ```
bool q_library_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLibrary* self, bool b ```
bool q_library_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLibrary* self ```
QThread* q_library_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLibrary* self, QThread* thread ```
void q_library_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLibrary* self, int interval ```
int32_t q_library_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLibrary* self, int id ```
void q_library_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLibrary* self ```
libqt_list /* of QObject* */ q_library_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLibrary* self, QObject* parent ```
void q_library_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLibrary* self, QObject* filterObj ```
void q_library_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLibrary* self, QObject* obj ```
void q_library_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_library_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLibrary* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_library_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_library_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_library_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLibrary* self ```
void q_library_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLibrary* self ```
void q_library_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLibrary* self, const char* name, QVariant* value ```
bool q_library_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLibrary* self, const char* name ```
QVariant* q_library_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLibrary* self ```
const char** q_library_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLibrary* self ```
QBindingStorage* q_library_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLibrary* self ```
const QBindingStorage* q_library_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLibrary* self ```
void q_library_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLibrary* self, void (*slot)(QObject*) ```
void q_library_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLibrary* self ```
QObject* q_library_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLibrary* self, const char* classname ```
bool q_library_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLibrary* self ```
void q_library_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLibrary* self, int interval, enum Qt__TimerType timerType ```
int32_t q_library_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_library_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLibrary* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_library_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLibrary* self, QObject* param1 ```
void q_library_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLibrary* self, void (*slot)(QObject*, QObject*) ```
void q_library_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self, QEvent* event ```
bool q_library_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self, QEvent* event ```
bool q_library_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, bool (*slot)(QLibrary*, QEvent*) ```
void q_library_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self, QObject* watched, QEvent* event ```
bool q_library_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self, QObject* watched, QEvent* event ```
bool q_library_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, bool (*slot)(QLibrary*, QObject*, QEvent*) ```
void q_library_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self, QTimerEvent* event ```
void q_library_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self, QTimerEvent* event ```
void q_library_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, void (*slot)(QLibrary*, QTimerEvent*) ```
void q_library_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self, QChildEvent* event ```
void q_library_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self, QChildEvent* event ```
void q_library_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, void (*slot)(QLibrary*, QChildEvent*) ```
void q_library_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self, QEvent* event ```
void q_library_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self, QEvent* event ```
void q_library_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, void (*slot)(QLibrary*, QEvent*) ```
void q_library_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self, QMetaMethod* signal ```
void q_library_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self, QMetaMethod* signal ```
void q_library_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, void (*slot)(QLibrary*, QMetaMethod*) ```
void q_library_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self, QMetaMethod* signal ```
void q_library_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self, QMetaMethod* signal ```
void q_library_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, void (*slot)(QLibrary*, QMetaMethod*) ```
void q_library_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self ```
QObject* q_library_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self ```
QObject* q_library_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, QObject* (*slot)() ```
void q_library_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self ```
int32_t q_library_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self ```
int32_t q_library_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, int32_t (*slot)() ```
void q_library_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self, const char* signal ```
int32_t q_library_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self, const char* signal ```
int32_t q_library_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, int32_t (*slot)(QLibrary*, const char*) ```
void q_library_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLibrary* self, QMetaMethod* signal ```
bool q_library_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLibrary* self, QMetaMethod* signal ```
bool q_library_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLibrary* self, bool (*slot)(QLibrary*, QMetaMethod*) ```
void q_library_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QLibrary* self, void (*slot)(QObject*, const char*) ```
void q_library_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlibrary.html#dtor.QLibrary)
///
/// Delete this object from C++ memory.
///
/// ``` QLibrary* self ```
void q_library_delete(void* self);

/// https://doc.qt.io/qt-6/qlibrary.html#types

typedef enum {
    QLIBRARY_LOADHINT_RESOLVEALLSYMBOLSHINT = 1,
    QLIBRARY_LOADHINT_EXPORTEXTERNALSYMBOLSHINT = 2,
    QLIBRARY_LOADHINT_LOADARCHIVEMEMBERHINT = 4,
    QLIBRARY_LOADHINT_PREVENTUNLOADHINT = 8,
    QLIBRARY_LOADHINT_DEEPBINDHINT = 16
} QLibrary__LoadHint;

#endif
