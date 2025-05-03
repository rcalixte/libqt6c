#pragma once
#ifndef SRCQT6C_LIBQSESSIONMANAGER_H
#define SRCQT6C_LIBQSESSIONMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qsessionmanager.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSessionManager* self ```
QMetaObject* q_sessionmanager_meta_object(void* self);

/// ``` QSessionManager* self, const char* param1 ```
void* q_sessionmanager_metacast(void* self, const char* param1);

/// ``` QSessionManager* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sessionmanager_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sessionmanager_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#sessionId)
///
/// ``` QSessionManager* self ```
const char* q_sessionmanager_session_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#sessionKey)
///
/// ``` QSessionManager* self ```
const char* q_sessionmanager_session_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#allowsInteraction)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_allows_interaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#allowsErrorInteraction)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_allows_error_interaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#release)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_release(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#cancel)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_cancel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#setRestartHint)
///
/// ``` QSessionManager* self, enum QSessionManager__RestartHint restartHint ```
void q_sessionmanager_set_restart_hint(void* self, int64_t restartHint);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#restartHint)
///
/// ``` QSessionManager* self ```
int64_t q_sessionmanager_restart_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#setRestartCommand)
///
/// ``` QSessionManager* self, const char* restartCommand[] ```
void q_sessionmanager_set_restart_command(void* self, const char* restartCommand[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#restartCommand)
///
/// ``` QSessionManager* self ```
const char** q_sessionmanager_restart_command(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#setDiscardCommand)
///
/// ``` QSessionManager* self, const char* discardCommand[] ```
void q_sessionmanager_set_discard_command(void* self, const char* discardCommand[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#discardCommand)
///
/// ``` QSessionManager* self ```
const char** q_sessionmanager_discard_command(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#setManagerProperty)
///
/// ``` QSessionManager* self, const char* name, const char* value ```
void q_sessionmanager_set_manager_property(void* self, const char* name, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#setManagerProperty)
///
/// ``` QSessionManager* self, const char* name, const char* value[] ```
void q_sessionmanager_set_manager_property2(void* self, const char* name, const char* value[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#isPhase2)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_is_phase2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsessionmanager.html#requestPhase2)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_request_phase2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sessionmanager_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sessionmanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QSessionManager* self, QEvent* event ```
bool q_sessionmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QSessionManager* self, QObject* watched, QEvent* event ```
bool q_sessionmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSessionManager* self ```
const char* q_sessionmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSessionManager* self, char* name ```
void q_sessionmanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSessionManager* self ```
bool q_sessionmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSessionManager* self, bool b ```
bool q_sessionmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSessionManager* self ```
QThread* q_sessionmanager_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSessionManager* self, QThread* thread ```
void q_sessionmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSessionManager* self, int interval ```
int32_t q_sessionmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSessionManager* self, int id ```
void q_sessionmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSessionManager* self ```
libqt_list /* of QObject* */ q_sessionmanager_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSessionManager* self, QObject* parent ```
void q_sessionmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSessionManager* self, QObject* filterObj ```
void q_sessionmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSessionManager* self, QObject* obj ```
void q_sessionmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sessionmanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSessionManager* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sessionmanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sessionmanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sessionmanager_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSessionManager* self, const char* name, QVariant* value ```
bool q_sessionmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSessionManager* self, const char* name ```
QVariant* q_sessionmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSessionManager* self ```
const char** q_sessionmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSessionManager* self ```
QBindingStorage* q_sessionmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSessionManager* self ```
QBindingStorage* q_sessionmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QSessionManager* self, void (*slot)(QObject*) ```
void q_sessionmanager_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSessionManager* self ```
QObject* q_sessionmanager_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSessionManager* self, const char* classname ```
bool q_sessionmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSessionManager* self ```
void q_sessionmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSessionManager* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sessionmanager_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sessionmanager_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSessionManager* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sessionmanager_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSessionManager* self, QObject* param1 ```
void q_sessionmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QSessionManager* self, void (*slot)(QObject*, QObject*) ```
void q_sessionmanager_on_destroyed1(void* self, void (*slot)(void*, void*));

/// https://doc.qt.io/qt-6/qsessionmanager.html#types

typedef enum {
    QSESSIONMANAGER_RESTARTHINT_RESTARTIFRUNNING = 0,
    QSESSIONMANAGER_RESTARTHINT_RESTARTANYWAY = 1,
    QSESSIONMANAGER_RESTARTHINT_RESTARTIMMEDIATELY = 2,
    QSESSIONMANAGER_RESTARTHINT_RESTARTNEVER = 3
} QSessionManager__RestartHint;

#endif
