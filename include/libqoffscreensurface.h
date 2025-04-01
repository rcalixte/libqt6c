#pragma once
#ifndef SRCQT6C_LIBQOFFSCREENSURFACE_H
#define SRCQT6C_LIBQOFFSCREENSURFACE_H

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
#include "libqscreen.h"
#include "libqsize.h"
#include <string.h>
#include "libqsurface.h"
#include "libqsurfaceformat.h"
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qoffscreensurface.html

/// q_offscreensurface_new constructs a new QOffscreenSurface object.
///
///
QOffscreenSurface* q_offscreensurface_new();

/// q_offscreensurface_new2 constructs a new QOffscreenSurface object.
///
/// ``` QScreen* screen ```
QOffscreenSurface* q_offscreensurface_new2(void* screen);

/// q_offscreensurface_new3 constructs a new QOffscreenSurface object.
///
/// ``` QScreen* screen, QObject* parent ```
QOffscreenSurface* q_offscreensurface_new3(void* screen, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QOffscreenSurface* self ```
QMetaObject* q_offscreensurface_meta_object(void* self);

/// ``` QOffscreenSurface* self, const char* param1 ```
void* q_offscreensurface_metacast(void* self, const char* param1);

/// ``` QOffscreenSurface* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_offscreensurface_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QOffscreenSurface* self, int32_t (*slot)(QOffscreenSurface*, enum QMetaObject__Call, int, void*) ```
void q_offscreensurface_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QOffscreenSurface* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_offscreensurface_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_offscreensurface_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#surfaceType)
///
/// ``` QOffscreenSurface* self ```
int64_t q_offscreensurface_surface_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QOffscreenSurface* self, int64_t (*slot)() ```
void q_offscreensurface_on_surface_type(void* self, int64_t (*slot)());

/// Base class method implementation
///
/// ``` QOffscreenSurface* self ```
int64_t q_offscreensurface_qbase_surface_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#create)
///
/// ``` QOffscreenSurface* self ```
void q_offscreensurface_create(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#destroy)
///
/// ``` QOffscreenSurface* self ```
void q_offscreensurface_destroy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#isValid)
///
/// ``` QOffscreenSurface* self ```
bool q_offscreensurface_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#setFormat)
///
/// ``` QOffscreenSurface* self, QSurfaceFormat* format ```
void q_offscreensurface_set_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#format)
///
/// ``` QOffscreenSurface* self ```
QSurfaceFormat* q_offscreensurface_format(void* self);

/// Allows for overriding the related default method
///
/// ``` QOffscreenSurface* self, QSurfaceFormat* (*slot)() ```
void q_offscreensurface_on_format(void* self, QSurfaceFormat* (*slot)());

/// Base class method implementation
///
/// ``` QOffscreenSurface* self ```
QSurfaceFormat* q_offscreensurface_qbase_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#requestedFormat)
///
/// ``` QOffscreenSurface* self ```
QSurfaceFormat* q_offscreensurface_requested_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#size)
///
/// ``` QOffscreenSurface* self ```
QSize* q_offscreensurface_size(void* self);

/// Allows for overriding the related default method
///
/// ``` QOffscreenSurface* self, QSize* (*slot)() ```
void q_offscreensurface_on_size(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QOffscreenSurface* self ```
QSize* q_offscreensurface_qbase_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#screen)
///
/// ``` QOffscreenSurface* self ```
QScreen* q_offscreensurface_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#setScreen)
///
/// ``` QOffscreenSurface* self, QScreen* screen ```
void q_offscreensurface_set_screen(void* self, void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#resolveInterface)
///
/// ``` QOffscreenSurface* self, const char* name, int revision ```
void* q_offscreensurface_resolve_interface(void* self, const char* name, int revision);

/// Allows for overriding the related default method
///
/// ``` QOffscreenSurface* self, void* (*slot)(QOffscreenSurface*, const char*, int) ```
void q_offscreensurface_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));

/// Base class method implementation
///
/// ``` QOffscreenSurface* self, const char* name, int revision ```
void* q_offscreensurface_qbase_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qoffscreensurface.html#screenChanged)
///
/// ``` QOffscreenSurface* self, QScreen* screen ```
void q_offscreensurface_screen_changed(void* self, void* screen);

/// ``` QOffscreenSurface* self, void (*slot)(QOffscreenSurface*, QScreen*) ```
void q_offscreensurface_on_screen_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_offscreensurface_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_offscreensurface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QOffscreenSurface* self ```
const char* q_offscreensurface_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QOffscreenSurface* self, const char* name ```
void q_offscreensurface_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QOffscreenSurface* self ```
bool q_offscreensurface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QOffscreenSurface* self ```
bool q_offscreensurface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QOffscreenSurface* self ```
bool q_offscreensurface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QOffscreenSurface* self ```
bool q_offscreensurface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QOffscreenSurface* self, bool b ```
bool q_offscreensurface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QOffscreenSurface* self ```
QThread* q_offscreensurface_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QOffscreenSurface* self, QThread* thread ```
void q_offscreensurface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QOffscreenSurface* self, int interval ```
int32_t q_offscreensurface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QOffscreenSurface* self, int id ```
void q_offscreensurface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QOffscreenSurface* self ```
libqt_list /* of QObject* */ q_offscreensurface_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QOffscreenSurface* self, QObject* parent ```
void q_offscreensurface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QOffscreenSurface* self, QObject* filterObj ```
void q_offscreensurface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QOffscreenSurface* self, QObject* obj ```
void q_offscreensurface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_offscreensurface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QOffscreenSurface* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_offscreensurface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_offscreensurface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_offscreensurface_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QOffscreenSurface* self ```
void q_offscreensurface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QOffscreenSurface* self ```
void q_offscreensurface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QOffscreenSurface* self, const char* name, QVariant* value ```
bool q_offscreensurface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QOffscreenSurface* self, const char* name ```
QVariant* q_offscreensurface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QOffscreenSurface* self ```
const char** q_offscreensurface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QOffscreenSurface* self ```
QBindingStorage* q_offscreensurface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QOffscreenSurface* self ```
QBindingStorage* q_offscreensurface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QOffscreenSurface* self ```
void q_offscreensurface_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QOffscreenSurface* self, void (*slot)(QObject*) ```
void q_offscreensurface_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QOffscreenSurface* self ```
QObject* q_offscreensurface_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QOffscreenSurface* self, const char* classname ```
bool q_offscreensurface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QOffscreenSurface* self ```
void q_offscreensurface_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QOffscreenSurface* self, int interval, enum Qt__TimerType timerType ```
int32_t q_offscreensurface_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_offscreensurface_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QOffscreenSurface* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_offscreensurface_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QOffscreenSurface* self, QObject* param1 ```
void q_offscreensurface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QOffscreenSurface* self, void (*slot)(QObject*, QObject*) ```
void q_offscreensurface_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// ``` QOffscreenSurface* self ```
int64_t q_offscreensurface_surface_class(void* self);

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// ``` QOffscreenSurface* self ```
bool q_offscreensurface_supports_open_g_l(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self, QEvent* event ```
bool q_offscreensurface_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self, QEvent* event ```
bool q_offscreensurface_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, bool (*slot)(QOffscreenSurface*, QEvent*) ```
void q_offscreensurface_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self, QObject* watched, QEvent* event ```
bool q_offscreensurface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self, QObject* watched, QEvent* event ```
bool q_offscreensurface_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, bool (*slot)(QOffscreenSurface*, QObject*, QEvent*) ```
void q_offscreensurface_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self, QTimerEvent* event ```
void q_offscreensurface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self, QTimerEvent* event ```
void q_offscreensurface_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, void (*slot)(QOffscreenSurface*, QTimerEvent*) ```
void q_offscreensurface_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self, QChildEvent* event ```
void q_offscreensurface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self, QChildEvent* event ```
void q_offscreensurface_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, void (*slot)(QOffscreenSurface*, QChildEvent*) ```
void q_offscreensurface_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self, QEvent* event ```
void q_offscreensurface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self, QEvent* event ```
void q_offscreensurface_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, void (*slot)(QOffscreenSurface*, QEvent*) ```
void q_offscreensurface_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self, QMetaMethod* signal ```
void q_offscreensurface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self, QMetaMethod* signal ```
void q_offscreensurface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, void (*slot)(QOffscreenSurface*, QMetaMethod*) ```
void q_offscreensurface_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self, QMetaMethod* signal ```
void q_offscreensurface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self, QMetaMethod* signal ```
void q_offscreensurface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, void (*slot)(QOffscreenSurface*, QMetaMethod*) ```
void q_offscreensurface_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self ```
QObject* q_offscreensurface_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self ```
QObject* q_offscreensurface_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, QObject* (*slot)() ```
void q_offscreensurface_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self ```
int32_t q_offscreensurface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self ```
int32_t q_offscreensurface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, int32_t (*slot)() ```
void q_offscreensurface_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self, const char* signal ```
int32_t q_offscreensurface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self, const char* signal ```
int32_t q_offscreensurface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, int32_t (*slot)(QOffscreenSurface*, const char*) ```
void q_offscreensurface_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QOffscreenSurface* self, QMetaMethod* signal ```
bool q_offscreensurface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QOffscreenSurface* self, QMetaMethod* signal ```
bool q_offscreensurface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QOffscreenSurface* self, bool (*slot)(QOffscreenSurface*, QMetaMethod*) ```
void q_offscreensurface_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QOffscreenSurface* self ```
void q_offscreensurface_delete(void* self);

#endif
