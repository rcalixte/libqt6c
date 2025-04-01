#pragma once
#ifndef SRCQT6C_LIBQSYSTEMTRAYICON_H
#define SRCQT6C_LIBQSYSTEMTRAYICON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqicon.h"
#include "libqmenu.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qsystemtrayicon.html

/// q_systemtrayicon_new constructs a new QSystemTrayIcon object.
///
///
QSystemTrayIcon* q_systemtrayicon_new();

/// q_systemtrayicon_new2 constructs a new QSystemTrayIcon object.
///
/// ``` QIcon* icon ```
QSystemTrayIcon* q_systemtrayicon_new2(void* icon);

/// q_systemtrayicon_new3 constructs a new QSystemTrayIcon object.
///
/// ``` QObject* parent ```
QSystemTrayIcon* q_systemtrayicon_new3(void* parent);

/// q_systemtrayicon_new4 constructs a new QSystemTrayIcon object.
///
/// ``` QIcon* icon, QObject* parent ```
QSystemTrayIcon* q_systemtrayicon_new4(void* icon, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSystemTrayIcon* self ```
QMetaObject* q_systemtrayicon_meta_object(void* self);

/// ``` QSystemTrayIcon* self, const char* param1 ```
void* q_systemtrayicon_metacast(void* self, const char* param1);

/// ``` QSystemTrayIcon* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_systemtrayicon_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSystemTrayIcon* self, int32_t (*slot)(QSystemTrayIcon*, enum QMetaObject__Call, int, void*) ```
void q_systemtrayicon_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSystemTrayIcon* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_systemtrayicon_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_systemtrayicon_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setContextMenu)
///
/// ``` QSystemTrayIcon* self, QMenu* menu ```
void q_systemtrayicon_set_context_menu(void* self, void* menu);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#contextMenu)
///
/// ``` QSystemTrayIcon* self ```
QMenu* q_systemtrayicon_context_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#icon)
///
/// ``` QSystemTrayIcon* self ```
QIcon* q_systemtrayicon_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setIcon)
///
/// ``` QSystemTrayIcon* self, QIcon* icon ```
void q_systemtrayicon_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#toolTip)
///
/// ``` QSystemTrayIcon* self ```
const char* q_systemtrayicon_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setToolTip)
///
/// ``` QSystemTrayIcon* self, const char* tip ```
void q_systemtrayicon_set_tool_tip(void* self, const char* tip);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#isSystemTrayAvailable)
///
///
bool q_systemtrayicon_is_system_tray_available();

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#supportsMessages)
///
///
bool q_systemtrayicon_supports_messages();

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#geometry)
///
/// ``` QSystemTrayIcon* self ```
QRect* q_systemtrayicon_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#isVisible)
///
/// ``` QSystemTrayIcon* self ```
bool q_systemtrayicon_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setVisible)
///
/// ``` QSystemTrayIcon* self, bool visible ```
void q_systemtrayicon_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#show)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#hide)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// ``` QSystemTrayIcon* self, const char* title, const char* msg, QIcon* icon ```
void q_systemtrayicon_show_message(void* self, const char* title, const char* msg, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// ``` QSystemTrayIcon* self, const char* title, const char* msg ```
void q_systemtrayicon_show_message2(void* self, const char* title, const char* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#activated)
///
/// ``` QSystemTrayIcon* self, enum QSystemTrayIcon__ActivationReason reason ```
void q_systemtrayicon_activated(void* self, int64_t reason);

/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, enum QSystemTrayIcon__ActivationReason) ```
void q_systemtrayicon_on_activated(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#messageClicked)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_message_clicked(void* self);

/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*) ```
void q_systemtrayicon_on_message_clicked(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
///
/// ``` QSystemTrayIcon* self, QEvent* event ```
bool q_systemtrayicon_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QSystemTrayIcon* self, bool (*slot)(QSystemTrayIcon*, QEvent*) ```
void q_systemtrayicon_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSystemTrayIcon* self, QEvent* event ```
bool q_systemtrayicon_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_systemtrayicon_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_systemtrayicon_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// ``` QSystemTrayIcon* self, const char* title, const char* msg, QIcon* icon, int msecs ```
void q_systemtrayicon_show_message4(void* self, const char* title, const char* msg, void* icon, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// ``` QSystemTrayIcon* self, const char* title, const char* msg, enum QSystemTrayIcon__MessageIcon icon ```
void q_systemtrayicon_show_message3(void* self, const char* title, const char* msg, int64_t icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// ``` QSystemTrayIcon* self, const char* title, const char* msg, enum QSystemTrayIcon__MessageIcon icon, int msecs ```
void q_systemtrayicon_show_message42(void* self, const char* title, const char* msg, int64_t icon, int msecs);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSystemTrayIcon* self ```
const char* q_systemtrayicon_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSystemTrayIcon* self, const char* name ```
void q_systemtrayicon_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSystemTrayIcon* self ```
bool q_systemtrayicon_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSystemTrayIcon* self ```
bool q_systemtrayicon_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSystemTrayIcon* self ```
bool q_systemtrayicon_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSystemTrayIcon* self ```
bool q_systemtrayicon_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSystemTrayIcon* self, bool b ```
bool q_systemtrayicon_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSystemTrayIcon* self ```
QThread* q_systemtrayicon_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSystemTrayIcon* self, QThread* thread ```
void q_systemtrayicon_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSystemTrayIcon* self, int interval ```
int32_t q_systemtrayicon_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSystemTrayIcon* self, int id ```
void q_systemtrayicon_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSystemTrayIcon* self ```
libqt_list /* of QObject* */ q_systemtrayicon_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSystemTrayIcon* self, QObject* parent ```
void q_systemtrayicon_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSystemTrayIcon* self, QObject* filterObj ```
void q_systemtrayicon_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSystemTrayIcon* self, QObject* obj ```
void q_systemtrayicon_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_systemtrayicon_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSystemTrayIcon* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_systemtrayicon_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_systemtrayicon_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_systemtrayicon_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSystemTrayIcon* self, const char* name, QVariant* value ```
bool q_systemtrayicon_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSystemTrayIcon* self, const char* name ```
QVariant* q_systemtrayicon_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSystemTrayIcon* self ```
const char** q_systemtrayicon_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSystemTrayIcon* self ```
QBindingStorage* q_systemtrayicon_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSystemTrayIcon* self ```
QBindingStorage* q_systemtrayicon_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QSystemTrayIcon* self, void (*slot)(QObject*) ```
void q_systemtrayicon_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSystemTrayIcon* self ```
QObject* q_systemtrayicon_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSystemTrayIcon* self, const char* classname ```
bool q_systemtrayicon_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSystemTrayIcon* self, int interval, enum Qt__TimerType timerType ```
int32_t q_systemtrayicon_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_systemtrayicon_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSystemTrayIcon* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_systemtrayicon_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSystemTrayIcon* self, QObject* param1 ```
void q_systemtrayicon_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QSystemTrayIcon* self, void (*slot)(QObject*, QObject*) ```
void q_systemtrayicon_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QObject* watched, QEvent* event ```
bool q_systemtrayicon_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QObject* watched, QEvent* event ```
bool q_systemtrayicon_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, bool (*slot)(QSystemTrayIcon*, QObject*, QEvent*) ```
void q_systemtrayicon_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QTimerEvent* event ```
void q_systemtrayicon_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QTimerEvent* event ```
void q_systemtrayicon_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, QTimerEvent*) ```
void q_systemtrayicon_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QChildEvent* event ```
void q_systemtrayicon_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QChildEvent* event ```
void q_systemtrayicon_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, QChildEvent*) ```
void q_systemtrayicon_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QEvent* event ```
void q_systemtrayicon_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QEvent* event ```
void q_systemtrayicon_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, QEvent*) ```
void q_systemtrayicon_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
void q_systemtrayicon_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
void q_systemtrayicon_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, QMetaMethod*) ```
void q_systemtrayicon_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
void q_systemtrayicon_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
void q_systemtrayicon_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, QMetaMethod*) ```
void q_systemtrayicon_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self ```
QObject* q_systemtrayicon_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self ```
QObject* q_systemtrayicon_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QObject* (*slot)() ```
void q_systemtrayicon_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self ```
int32_t q_systemtrayicon_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self ```
int32_t q_systemtrayicon_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, int32_t (*slot)() ```
void q_systemtrayicon_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, const char* signal ```
int32_t q_systemtrayicon_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, const char* signal ```
int32_t q_systemtrayicon_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, int32_t (*slot)(QSystemTrayIcon*, const char*) ```
void q_systemtrayicon_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
bool q_systemtrayicon_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
bool q_systemtrayicon_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, bool (*slot)(QSystemTrayIcon*, QMetaMethod*) ```
void q_systemtrayicon_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_delete(void* self);

/// https://doc.qt.io/qt-6/qsystemtrayicon.html#types

typedef enum {
    QSYSTEMTRAYICON_ACTIVATIONREASON_UNKNOWN = 0,
    QSYSTEMTRAYICON_ACTIVATIONREASON_CONTEXT = 1,
    QSYSTEMTRAYICON_ACTIVATIONREASON_DOUBLECLICK = 2,
    QSYSTEMTRAYICON_ACTIVATIONREASON_TRIGGER = 3,
    QSYSTEMTRAYICON_ACTIVATIONREASON_MIDDLECLICK = 4
} QSystemTrayIcon__ActivationReason;

typedef enum {
    QSYSTEMTRAYICON_MESSAGEICON_NOICON = 0,
    QSYSTEMTRAYICON_MESSAGEICON_INFORMATION = 1,
    QSYSTEMTRAYICON_MESSAGEICON_WARNING = 2,
    QSYSTEMTRAYICON_MESSAGEICON_CRITICAL = 3
} QSystemTrayIcon__MessageIcon;

#endif
