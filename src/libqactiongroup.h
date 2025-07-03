#pragma once
#ifndef SRCQT6C_LIBQACTIONGROUP_H
#define SRCQT6C_LIBQACTIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqevent.h"
#include "libqicon.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qactiongroup.html

/// q_actiongroup_new constructs a new QActionGroup object.
///
/// ``` QObject* parent ```
QActionGroup* q_actiongroup_new(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QActionGroup* self ```
const QMetaObject* q_actiongroup_meta_object(void* self);

/// ``` QActionGroup* self, const char* param1 ```
void* q_actiongroup_metacast(void* self, const char* param1);

/// ``` QActionGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_actiongroup_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QActionGroup* self, int32_t (*slot)(QActionGroup*, enum QMetaObject__Call, int, void*) ```
void q_actiongroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QActionGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_actiongroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_actiongroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#addAction)
///
/// ``` QActionGroup* self, QAction* a ```
QAction* q_actiongroup_add_action(void* self, void* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#addAction)
///
/// ``` QActionGroup* self, const char* text ```
QAction* q_actiongroup_add_action_with_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#addAction)
///
/// ``` QActionGroup* self, QIcon* icon, const char* text ```
QAction* q_actiongroup_add_action2(void* self, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#removeAction)
///
/// ``` QActionGroup* self, QAction* a ```
void q_actiongroup_remove_action(void* self, void* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#actions)
///
/// ``` QActionGroup* self ```
libqt_list /* of QAction* */ q_actiongroup_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#checkedAction)
///
/// ``` QActionGroup* self ```
QAction* q_actiongroup_checked_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#isExclusive)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_exclusive(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#isEnabled)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#isVisible)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#exclusionPolicy)
///
/// ``` QActionGroup* self ```
int64_t q_actiongroup_exclusion_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setEnabled)
///
/// ``` QActionGroup* self, bool enabled ```
void q_actiongroup_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setDisabled)
///
/// ``` QActionGroup* self, bool b ```
void q_actiongroup_set_disabled(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setVisible)
///
/// ``` QActionGroup* self, bool visible ```
void q_actiongroup_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setExclusive)
///
/// ``` QActionGroup* self, bool exclusive ```
void q_actiongroup_set_exclusive(void* self, bool exclusive);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setExclusionPolicy)
///
/// ``` QActionGroup* self, enum QActionGroup__ExclusionPolicy policy ```
void q_actiongroup_set_exclusion_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#triggered)
///
/// ``` QActionGroup* self, QAction* param1 ```
void q_actiongroup_triggered(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#triggered)
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QAction*) ```
void q_actiongroup_on_triggered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#hovered)
///
/// ``` QActionGroup* self, QAction* param1 ```
void q_actiongroup_hovered(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#hovered)
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QAction*) ```
void q_actiongroup_on_hovered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_actiongroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_actiongroup_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QActionGroup* self ```
const char* q_actiongroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QActionGroup* self, char* name ```
void q_actiongroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QActionGroup* self, bool b ```
bool q_actiongroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QActionGroup* self ```
QThread* q_actiongroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QActionGroup* self, QThread* thread ```
void q_actiongroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QActionGroup* self, int interval ```
int32_t q_actiongroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QActionGroup* self, int id ```
void q_actiongroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QActionGroup* self ```
libqt_list /* of QObject* */ q_actiongroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QActionGroup* self, QObject* parent ```
void q_actiongroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QActionGroup* self, QObject* filterObj ```
void q_actiongroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QActionGroup* self, QObject* obj ```
void q_actiongroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_actiongroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QActionGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_actiongroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_actiongroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_actiongroup_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QActionGroup* self ```
void q_actiongroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QActionGroup* self ```
void q_actiongroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QActionGroup* self, const char* name, QVariant* value ```
bool q_actiongroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QActionGroup* self, const char* name ```
QVariant* q_actiongroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QActionGroup* self ```
const char** q_actiongroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QActionGroup* self ```
QBindingStorage* q_actiongroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QActionGroup* self ```
const QBindingStorage* q_actiongroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QActionGroup* self ```
void q_actiongroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QActionGroup* self, void (*slot)(QObject*) ```
void q_actiongroup_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QActionGroup* self ```
QObject* q_actiongroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QActionGroup* self, const char* classname ```
bool q_actiongroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QActionGroup* self ```
void q_actiongroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QActionGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_actiongroup_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_actiongroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QActionGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_actiongroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QActionGroup* self, QObject* param1 ```
void q_actiongroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QActionGroup* self, void (*slot)(QObject*, QObject*) ```
void q_actiongroup_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QEvent* event ```
bool q_actiongroup_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QEvent* event ```
bool q_actiongroup_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, bool (*slot)(QActionGroup*, QEvent*) ```
void q_actiongroup_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QObject* watched, QEvent* event ```
bool q_actiongroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QObject* watched, QEvent* event ```
bool q_actiongroup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, bool (*slot)(QActionGroup*, QObject*, QEvent*) ```
void q_actiongroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QTimerEvent* event ```
void q_actiongroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QTimerEvent* event ```
void q_actiongroup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QTimerEvent*) ```
void q_actiongroup_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QChildEvent* event ```
void q_actiongroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QChildEvent* event ```
void q_actiongroup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QChildEvent*) ```
void q_actiongroup_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QEvent* event ```
void q_actiongroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QEvent* event ```
void q_actiongroup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QEvent*) ```
void q_actiongroup_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
void q_actiongroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
void q_actiongroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QMetaMethod*) ```
void q_actiongroup_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
void q_actiongroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
void q_actiongroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QMetaMethod*) ```
void q_actiongroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self ```
QObject* q_actiongroup_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self ```
QObject* q_actiongroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, QObject* (*slot)() ```
void q_actiongroup_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self ```
int32_t q_actiongroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self ```
int32_t q_actiongroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, int32_t (*slot)() ```
void q_actiongroup_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, const char* signal ```
int32_t q_actiongroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, const char* signal ```
int32_t q_actiongroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, int32_t (*slot)(QActionGroup*, const char*) ```
void q_actiongroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
bool q_actiongroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
bool q_actiongroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, bool (*slot)(QActionGroup*, QMetaMethod*) ```
void q_actiongroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QActionGroup* self, void (*slot)(QObject*, const char*) ```
void q_actiongroup_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#dtor.QActionGroup)
///
/// Delete this object from C++ memory.
///
/// ``` QActionGroup* self ```
void q_actiongroup_delete(void* self);

/// https://doc.qt.io/qt-6/qactiongroup.html#types

typedef enum {
    QACTIONGROUP_EXCLUSIONPOLICY_NONE = 0,
    QACTIONGROUP_EXCLUSIONPOLICY_EXCLUSIVE = 1,
    QACTIONGROUP_EXCLUSIONPOLICY_EXCLUSIVEOPTIONAL = 2
} QActionGroup__ExclusionPolicy;

#endif
