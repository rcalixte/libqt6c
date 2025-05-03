#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIABSTRACTAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIABSTRACTAPIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qsciabstractapis.html

/// q_sciabstractapis_new constructs a new QsciAbstractAPIs object.
///
/// ``` QsciLexer* lexer ```
QsciAbstractAPIs* q_sciabstractapis_new(void* lexer);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciAbstractAPIs* self ```
QMetaObject* q_sciabstractapis_meta_object(void* self);

/// ``` QsciAbstractAPIs* self, const char* param1 ```
void* q_sciabstractapis_metacast(void* self, const char* param1);

/// ``` QsciAbstractAPIs* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciabstractapis_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciAbstractAPIs* self, int32_t (*slot)(QsciAbstractAPIs*, enum QMetaObject__Call, int, void*) ```
void q_sciabstractapis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciAbstractAPIs* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciabstractapis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sciabstractapis_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsciabstractapis.html#lexer)
///
/// ``` QsciAbstractAPIs* self ```
QsciLexer* q_sciabstractapis_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsciabstractapis.html#updateAutoCompletionList)
///
/// ``` QsciAbstractAPIs* self, const char* context[], const char* list[] ```
void q_sciabstractapis_update_auto_completion_list(void* self, const char* context[], const char* list[]);

/// Allows for overriding the related default method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, const char*[], const char*[]) ```
void q_sciabstractapis_on_update_auto_completion_list(void* self, void (*slot)(void*, const char*, const char*));

/// Base class method implementation
///
/// ``` QsciAbstractAPIs* self, const char* context[], const char* list[] ```
void q_sciabstractapis_qbase_update_auto_completion_list(void* self, const char* context[], const char* list[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qsciabstractapis.html#autoCompletionSelected)
///
/// ``` QsciAbstractAPIs* self, const char* selection ```
void q_sciabstractapis_auto_completion_selected(void* self, const char* selection);

/// Allows for overriding the related default method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, const char*) ```
void q_sciabstractapis_on_auto_completion_selected(void* self, void (*slot)(void*, const char*));

/// Base class method implementation
///
/// ``` QsciAbstractAPIs* self, const char* selection ```
void q_sciabstractapis_qbase_auto_completion_selected(void* self, const char* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qsciabstractapis.html#callTips)
///
/// ``` QsciAbstractAPIs* self, const char* context[], int commas, enum QsciScintilla__CallTipsStyle style, int* shifts[] ```
const char** q_sciabstractapis_call_tips(void* self, const char* context[], int commas, int64_t style, int* shifts[]);

/// Allows for overriding the related default method
///
/// ``` QsciAbstractAPIs* self, const char** (*slot)(QsciAbstractAPIs*, const char*[], int, enum QsciScintilla__CallTipsStyle, int*[]) ```
void q_sciabstractapis_on_call_tips(void* self, const char** (*slot)(void*, const char*, int, int64_t, int*));

/// Base class method implementation
///
/// ``` QsciAbstractAPIs* self, const char* context[], int commas, enum QsciScintilla__CallTipsStyle style, int* shifts[] ```
const char** q_sciabstractapis_qbase_call_tips(void* self, const char* context[], int commas, int64_t style, int* shifts[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sciabstractapis_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sciabstractapis_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciAbstractAPIs* self ```
const char* q_sciabstractapis_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciAbstractAPIs* self, char* name ```
void q_sciabstractapis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciAbstractAPIs* self ```
bool q_sciabstractapis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciAbstractAPIs* self ```
bool q_sciabstractapis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciAbstractAPIs* self ```
bool q_sciabstractapis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciAbstractAPIs* self ```
bool q_sciabstractapis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciAbstractAPIs* self, bool b ```
bool q_sciabstractapis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciAbstractAPIs* self ```
QThread* q_sciabstractapis_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciAbstractAPIs* self, QThread* thread ```
void q_sciabstractapis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciAbstractAPIs* self, int interval ```
int32_t q_sciabstractapis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciAbstractAPIs* self, int id ```
void q_sciabstractapis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciAbstractAPIs* self ```
libqt_list /* of QObject* */ q_sciabstractapis_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciAbstractAPIs* self, QObject* parent ```
void q_sciabstractapis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciAbstractAPIs* self, QObject* filterObj ```
void q_sciabstractapis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciAbstractAPIs* self, QObject* obj ```
void q_sciabstractapis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sciabstractapis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciAbstractAPIs* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sciabstractapis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sciabstractapis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sciabstractapis_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciAbstractAPIs* self ```
void q_sciabstractapis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciAbstractAPIs* self ```
void q_sciabstractapis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciAbstractAPIs* self, const char* name, QVariant* value ```
bool q_sciabstractapis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciAbstractAPIs* self, const char* name ```
QVariant* q_sciabstractapis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciAbstractAPIs* self ```
const char** q_sciabstractapis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciAbstractAPIs* self ```
QBindingStorage* q_sciabstractapis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciAbstractAPIs* self ```
QBindingStorage* q_sciabstractapis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciAbstractAPIs* self ```
void q_sciabstractapis_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QObject*) ```
void q_sciabstractapis_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciAbstractAPIs* self ```
QObject* q_sciabstractapis_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciAbstractAPIs* self, const char* classname ```
bool q_sciabstractapis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciAbstractAPIs* self ```
void q_sciabstractapis_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciAbstractAPIs* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sciabstractapis_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciabstractapis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciAbstractAPIs* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciabstractapis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciAbstractAPIs* self, QObject* param1 ```
void q_sciabstractapis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QObject*, QObject*) ```
void q_sciabstractapis_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QEvent* event ```
bool q_sciabstractapis_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QEvent* event ```
bool q_sciabstractapis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, bool (*slot)(QsciAbstractAPIs*, QEvent*) ```
void q_sciabstractapis_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QObject* watched, QEvent* event ```
bool q_sciabstractapis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QObject* watched, QEvent* event ```
bool q_sciabstractapis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, bool (*slot)(QsciAbstractAPIs*, QObject*, QEvent*) ```
void q_sciabstractapis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QTimerEvent* event ```
void q_sciabstractapis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QTimerEvent* event ```
void q_sciabstractapis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, QTimerEvent*) ```
void q_sciabstractapis_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QChildEvent* event ```
void q_sciabstractapis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QChildEvent* event ```
void q_sciabstractapis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, QChildEvent*) ```
void q_sciabstractapis_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QEvent* event ```
void q_sciabstractapis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QEvent* event ```
void q_sciabstractapis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, QEvent*) ```
void q_sciabstractapis_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
void q_sciabstractapis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
void q_sciabstractapis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, QMetaMethod*) ```
void q_sciabstractapis_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
void q_sciabstractapis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
void q_sciabstractapis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, void (*slot)(QsciAbstractAPIs*, QMetaMethod*) ```
void q_sciabstractapis_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self ```
QObject* q_sciabstractapis_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self ```
QObject* q_sciabstractapis_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QObject* (*slot)() ```
void q_sciabstractapis_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self ```
int32_t q_sciabstractapis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self ```
int32_t q_sciabstractapis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, int32_t (*slot)() ```
void q_sciabstractapis_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, const char* signal ```
int32_t q_sciabstractapis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, const char* signal ```
int32_t q_sciabstractapis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, int32_t (*slot)(QsciAbstractAPIs*, const char*) ```
void q_sciabstractapis_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
bool q_sciabstractapis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, QMetaMethod* signal ```
bool q_sciabstractapis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAbstractAPIs* self, bool (*slot)(QsciAbstractAPIs*, QMetaMethod*) ```
void q_sciabstractapis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciAbstractAPIs* self ```
void q_sciabstractapis_delete(void* self);

#endif
