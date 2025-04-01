#pragma once
#ifndef SRCQT6C_LIBQTRANSLATOR_H
#define SRCQT6C_LIBQTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqlocale.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qtranslator.html

/// q_translator_new constructs a new QTranslator object.
///
///
QTranslator* q_translator_new();

/// q_translator_new2 constructs a new QTranslator object.
///
/// ``` QObject* parent ```
QTranslator* q_translator_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTranslator* self ```
QMetaObject* q_translator_meta_object(void* self);

/// ``` QTranslator* self, const char* param1 ```
void* q_translator_metacast(void* self, const char* param1);

/// ``` QTranslator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_translator_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTranslator* self, int32_t (*slot)(QTranslator*, enum QMetaObject__Call, int, void*) ```
void q_translator_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTranslator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_translator_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_translator_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#translate)
///
/// ``` QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n ```
const char* q_translator_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n);

/// Allows for overriding the related default method
///
/// ``` QTranslator* self, const char* (*slot)(QTranslator*, const char*, const char*, const char*, int) ```
void q_translator_on_translate(void* self, const char* (*slot)(void*, const char*, const char*, const char*, int));

/// Base class method implementation
///
/// ``` QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n ```
const char* q_translator_qbase_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
///
/// ``` QTranslator* self ```
bool q_translator_is_empty(void* self);

/// Allows for overriding the related default method
///
/// ``` QTranslator* self, bool (*slot)() ```
void q_translator_on_is_empty(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QTranslator* self ```
bool q_translator_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#language)
///
/// ``` QTranslator* self ```
const char* q_translator_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#filePath)
///
/// ``` QTranslator* self ```
const char* q_translator_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// ``` QTranslator* self, const char* filename ```
bool q_translator_load(void* self, const char* filename);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// ``` QTranslator* self, QLocale* locale, const char* filename ```
bool q_translator_load2(void* self, void* locale, const char* filename);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// ``` QTranslator* self, unsigned char* data, int lenVal ```
bool q_translator_load3(void* self, unsigned char* data, int lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_translator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_translator_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// ``` QTranslator* self, const char* filename, const char* directory ```
bool q_translator_load22(void* self, const char* filename, const char* directory);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// ``` QTranslator* self, const char* filename, const char* directory, const char* search_delimiters ```
bool q_translator_load32(void* self, const char* filename, const char* directory, const char* search_delimiters);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// ``` QTranslator* self, const char* filename, const char* directory, const char* search_delimiters, const char* suffix ```
bool q_translator_load4(void* self, const char* filename, const char* directory, const char* search_delimiters, const char* suffix);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// ``` QTranslator* self, QLocale* locale, const char* filename, const char* prefix ```
bool q_translator_load33(void* self, void* locale, const char* filename, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// ``` QTranslator* self, QLocale* locale, const char* filename, const char* prefix, const char* directory ```
bool q_translator_load42(void* self, void* locale, const char* filename, const char* prefix, const char* directory);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// ``` QTranslator* self, QLocale* locale, const char* filename, const char* prefix, const char* directory, const char* suffix ```
bool q_translator_load5(void* self, void* locale, const char* filename, const char* prefix, const char* directory, const char* suffix);

/// [Qt documentation](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// ``` QTranslator* self, unsigned char* data, int lenVal, const char* directory ```
bool q_translator_load34(void* self, unsigned char* data, int lenVal, const char* directory);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTranslator* self ```
const char* q_translator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTranslator* self, const char* name ```
void q_translator_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTranslator* self ```
bool q_translator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTranslator* self ```
bool q_translator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTranslator* self ```
bool q_translator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTranslator* self ```
bool q_translator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTranslator* self, bool b ```
bool q_translator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTranslator* self ```
QThread* q_translator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTranslator* self, QThread* thread ```
void q_translator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTranslator* self, int interval ```
int32_t q_translator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTranslator* self, int id ```
void q_translator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTranslator* self ```
libqt_list /* of QObject* */ q_translator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTranslator* self, QObject* parent ```
void q_translator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTranslator* self, QObject* filterObj ```
void q_translator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTranslator* self, QObject* obj ```
void q_translator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_translator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTranslator* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_translator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_translator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_translator_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTranslator* self ```
void q_translator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTranslator* self ```
void q_translator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTranslator* self, const char* name, QVariant* value ```
bool q_translator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTranslator* self, const char* name ```
QVariant* q_translator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTranslator* self ```
const char** q_translator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTranslator* self ```
QBindingStorage* q_translator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTranslator* self ```
QBindingStorage* q_translator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTranslator* self ```
void q_translator_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QTranslator* self, void (*slot)(QObject*) ```
void q_translator_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTranslator* self ```
QObject* q_translator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTranslator* self, const char* classname ```
bool q_translator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTranslator* self ```
void q_translator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTranslator* self, int interval, enum Qt__TimerType timerType ```
int32_t q_translator_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_translator_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTranslator* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_translator_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTranslator* self, QObject* param1 ```
void q_translator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QTranslator* self, void (*slot)(QObject*, QObject*) ```
void q_translator_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self, QEvent* event ```
bool q_translator_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self, QEvent* event ```
bool q_translator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, bool (*slot)(QTranslator*, QEvent*) ```
void q_translator_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self, QObject* watched, QEvent* event ```
bool q_translator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self, QObject* watched, QEvent* event ```
bool q_translator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, bool (*slot)(QTranslator*, QObject*, QEvent*) ```
void q_translator_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self, QTimerEvent* event ```
void q_translator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self, QTimerEvent* event ```
void q_translator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, void (*slot)(QTranslator*, QTimerEvent*) ```
void q_translator_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self, QChildEvent* event ```
void q_translator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self, QChildEvent* event ```
void q_translator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, void (*slot)(QTranslator*, QChildEvent*) ```
void q_translator_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self, QEvent* event ```
void q_translator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self, QEvent* event ```
void q_translator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, void (*slot)(QTranslator*, QEvent*) ```
void q_translator_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self, QMetaMethod* signal ```
void q_translator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self, QMetaMethod* signal ```
void q_translator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, void (*slot)(QTranslator*, QMetaMethod*) ```
void q_translator_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self, QMetaMethod* signal ```
void q_translator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self, QMetaMethod* signal ```
void q_translator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, void (*slot)(QTranslator*, QMetaMethod*) ```
void q_translator_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self ```
QObject* q_translator_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self ```
QObject* q_translator_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, QObject* (*slot)() ```
void q_translator_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self ```
int32_t q_translator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self ```
int32_t q_translator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, int32_t (*slot)() ```
void q_translator_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self, const char* signal ```
int32_t q_translator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self, const char* signal ```
int32_t q_translator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, int32_t (*slot)(QTranslator*, const char*) ```
void q_translator_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTranslator* self, QMetaMethod* signal ```
bool q_translator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTranslator* self, QMetaMethod* signal ```
bool q_translator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTranslator* self, bool (*slot)(QTranslator*, QMetaMethod*) ```
void q_translator_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QTranslator* self ```
void q_translator_delete(void* self);

#endif
