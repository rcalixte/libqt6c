#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIAPIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html

/// q_sciapis_new constructs a new QsciAPIs object.
///
/// ``` QsciLexer* lexer ```
QsciAPIs* q_sciapis_new(void* lexer);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciAPIs* self ```
const QMetaObject* q_sciapis_meta_object(void* self);

/// ``` QsciAPIs* self, const char* param1 ```
void* q_sciapis_metacast(void* self, const char* param1);

/// ``` QsciAPIs* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciapis_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciAPIs* self, int32_t (*slot)(QsciAPIs*, enum QMetaObject__Call, int, void*) ```
void q_sciapis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciAPIs* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciapis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sciapis_tr(const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, const char* entry ```
void q_sciapis_add(void* self, const char* entry);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
void q_sciapis_clear(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, const char* filename ```
bool q_sciapis_load(void* self, const char* filename);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, const char* entry ```
void q_sciapis_remove(void* self, const char* entry);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
void q_sciapis_prepare(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
void q_sciapis_cancel_preparation(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
const char* q_sciapis_default_prepared_name(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_is_prepared(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_load_prepared(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_save_prepared(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, const char* context[], const char* list[] ```
void q_sciapis_update_auto_completion_list(void* self, const char* context[], const char* list[]);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, const char*[], const char*[]) ```
void q_sciapis_on_update_auto_completion_list(void* self, void (*slot)(void*, const char*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// Base class method implementation
///
/// ``` QsciAPIs* self, const char* context[], const char* list[] ```
void q_sciapis_qbase_update_auto_completion_list(void* self, const char* context[], const char* list[]);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, const char* sel ```
void q_sciapis_auto_completion_selected(void* self, const char* sel);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, const char*) ```
void q_sciapis_on_auto_completion_selected(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// Base class method implementation
///
/// ``` QsciAPIs* self, const char* sel ```
void q_sciapis_qbase_auto_completion_selected(void* self, const char* sel);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, const char* context[], int commas, enum QsciScintilla__CallTipsStyle style, libqt_list /* of int */ shifts ```
const char** q_sciapis_call_tips(void* self, const char* context[], int commas, int64_t style, libqt_list shifts);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciAPIs* self, const char** (*slot)(QsciAPIs*, const char*[], int, enum QsciScintilla__CallTipsStyle, libqt_list /* of int */ shifts ) ```
void q_sciapis_on_call_tips(void* self, const char** (*slot)(void*, const char*, int, int64_t, libqt_list));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// Base class method implementation
///
/// ``` QsciAPIs* self, const char* context[], int commas, enum QsciScintilla__CallTipsStyle style, libqt_list /* of int */ shifts ```
const char** q_sciapis_qbase_call_tips(void* self, const char* context[], int commas, int64_t style, libqt_list shifts);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, QEvent* e ```
bool q_sciapis_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciAPIs* self, bool (*slot)(QsciAPIs*, QEvent*) ```
void q_sciapis_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// Base class method implementation
///
/// ``` QsciAPIs* self, QEvent* e ```
bool q_sciapis_qbase_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
const char** q_sciapis_installed_a_p_i_files(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
void q_sciapis_api_preparation_cancelled(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*) ```
void q_sciapis_on_api_preparation_cancelled(void* self, void (*slot)(void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
void q_sciapis_api_preparation_started(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*) ```
void q_sciapis_on_api_preparation_started(void* self, void (*slot)(void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self ```
void q_sciapis_api_preparation_finished(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*) ```
void q_sciapis_on_api_preparation_finished(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sciapis_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sciapis_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, const char* filename ```
bool q_sciapis_is_prepared1(void* self, const char* filename);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, const char* filename ```
bool q_sciapis_load_prepared1(void* self, const char* filename);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// ``` QsciAPIs* self, const char* filename ```
bool q_sciapis_save_prepared1(void* self, const char* filename);

/// Inherited from QsciAbstractAPIs
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAbstractAPIs.html)
///
/// ``` QsciAPIs* self ```
QsciLexer* q_sciapis_lexer(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciAPIs* self ```
const char* q_sciapis_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciAPIs* self, char* name ```
void q_sciapis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciAPIs* self ```
bool q_sciapis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciAPIs* self, bool b ```
bool q_sciapis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciAPIs* self ```
QThread* q_sciapis_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciAPIs* self, QThread* thread ```
bool q_sciapis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciAPIs* self, int interval ```
int32_t q_sciapis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciAPIs* self, int id ```
void q_sciapis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciAPIs* self, enum Qt__TimerId id ```
void q_sciapis_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciAPIs* self ```
libqt_list /* of QObject* */ q_sciapis_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciAPIs* self, QObject* parent ```
void q_sciapis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciAPIs* self, QObject* filterObj ```
void q_sciapis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciAPIs* self, QObject* obj ```
void q_sciapis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sciapis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciAPIs* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sciapis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sciapis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sciapis_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciAPIs* self ```
void q_sciapis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciAPIs* self ```
void q_sciapis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciAPIs* self, const char* name, QVariant* value ```
bool q_sciapis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciAPIs* self, const char* name ```
QVariant* q_sciapis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciAPIs* self ```
const char** q_sciapis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciAPIs* self ```
QBindingStorage* q_sciapis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciAPIs* self ```
const QBindingStorage* q_sciapis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciAPIs* self ```
void q_sciapis_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciAPIs* self, void (*slot)(QObject*) ```
void q_sciapis_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciAPIs* self ```
QObject* q_sciapis_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciAPIs* self, const char* classname ```
bool q_sciapis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciAPIs* self ```
void q_sciapis_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciAPIs* self, QThread* thread, Disambiguated_t* param2 ```
bool q_sciapis_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciAPIs* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sciapis_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciapis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciAPIs* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciapis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciAPIs* self, QObject* param1 ```
void q_sciapis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciAPIs* self, void (*slot)(QObject*, QObject*) ```
void q_sciapis_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QObject* watched, QEvent* event ```
bool q_sciapis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QObject* watched, QEvent* event ```
bool q_sciapis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, bool (*slot)(QsciAPIs*, QObject*, QEvent*) ```
void q_sciapis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QTimerEvent* event ```
void q_sciapis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QTimerEvent* event ```
void q_sciapis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, QTimerEvent*) ```
void q_sciapis_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QChildEvent* event ```
void q_sciapis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QChildEvent* event ```
void q_sciapis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, QChildEvent*) ```
void q_sciapis_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QEvent* event ```
void q_sciapis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QEvent* event ```
void q_sciapis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, QEvent*) ```
void q_sciapis_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
void q_sciapis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
void q_sciapis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, QMetaMethod*) ```
void q_sciapis_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
void q_sciapis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
void q_sciapis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, void (*slot)(QsciAPIs*, QMetaMethod*) ```
void q_sciapis_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self ```
QObject* q_sciapis_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self ```
QObject* q_sciapis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, QObject* (*slot)() ```
void q_sciapis_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self ```
int32_t q_sciapis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self ```
int32_t q_sciapis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, int32_t (*slot)() ```
void q_sciapis_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, const char* signal ```
int32_t q_sciapis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, const char* signal ```
int32_t q_sciapis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, int32_t (*slot)(QsciAPIs*, const char*) ```
void q_sciapis_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
bool q_sciapis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciAPIs* self, QMetaMethod* signal ```
bool q_sciapis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciAPIs* self, bool (*slot)(QsciAPIs*, QMetaMethod*) ```
void q_sciapis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QsciAPIs* self, void (*slot)(QObject*, const char*) ```
void q_sciapis_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciAPIs.html)
///
/// Delete this object from C++ memory.
///
/// ``` QsciAPIs* self ```
void q_sciapis_delete(void* self);

#endif
