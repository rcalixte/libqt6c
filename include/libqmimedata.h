#pragma once
#ifndef SRCQT6C_LIBQMIMEDATA_H
#define SRCQT6C_LIBQMIMEDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqmetatype.h"
#include "libqobject.h"
#include <string.h>
#include "libqurl.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qmimedata.html

/// q_mimedata_new constructs a new QMimeData object.
///
///
QMimeData* q_mimedata_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMimeData* self ```
const QMetaObject* q_mimedata_meta_object(void* self);

/// ``` QMimeData* self, const char* param1 ```
void* q_mimedata_metacast(void* self, const char* param1);

/// ``` QMimeData* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mimedata_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMimeData* self, int32_t (*slot)(QMimeData*, enum QMetaObject__Call, int, void*) ```
void q_mimedata_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMimeData* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mimedata_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mimedata_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#urls)
///
/// ``` QMimeData* self ```
libqt_list /* of QUrl* */ q_mimedata_urls(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setUrls)
///
/// ``` QMimeData* self, libqt_list /* of QUrl* */ urls ```
void q_mimedata_set_urls(void* self, libqt_list urls);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasUrls)
///
/// ``` QMimeData* self ```
bool q_mimedata_has_urls(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#text)
///
/// ``` QMimeData* self ```
const char* q_mimedata_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setText)
///
/// ``` QMimeData* self, const char* text ```
void q_mimedata_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasText)
///
/// ``` QMimeData* self ```
bool q_mimedata_has_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#html)
///
/// ``` QMimeData* self ```
const char* q_mimedata_html(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setHtml)
///
/// ``` QMimeData* self, const char* html ```
void q_mimedata_set_html(void* self, const char* html);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasHtml)
///
/// ``` QMimeData* self ```
bool q_mimedata_has_html(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#imageData)
///
/// ``` QMimeData* self ```
QVariant* q_mimedata_image_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setImageData)
///
/// ``` QMimeData* self, QVariant* image ```
void q_mimedata_set_image_data(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasImage)
///
/// ``` QMimeData* self ```
bool q_mimedata_has_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#colorData)
///
/// ``` QMimeData* self ```
QVariant* q_mimedata_color_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setColorData)
///
/// ``` QMimeData* self, QVariant* color ```
void q_mimedata_set_color_data(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasColor)
///
/// ``` QMimeData* self ```
bool q_mimedata_has_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#data)
///
/// ``` QMimeData* self, const char* mimetype ```
char* q_mimedata_data(void* self, const char* mimetype);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#setData)
///
/// ``` QMimeData* self, const char* mimetype, const char* data ```
void q_mimedata_set_data(void* self, const char* mimetype, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#removeFormat)
///
/// ``` QMimeData* self, const char* mimetype ```
void q_mimedata_remove_format(void* self, const char* mimetype);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasFormat)
///
/// ``` QMimeData* self, const char* mimetype ```
bool q_mimedata_has_format(void* self, const char* mimetype);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasFormat)
///
/// Allows for overriding the related default method
///
/// ``` QMimeData* self, bool (*slot)(QMimeData*, const char*) ```
void q_mimedata_on_has_format(void* self, bool (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#hasFormat)
///
/// Base class method implementation
///
/// ``` QMimeData* self, const char* mimetype ```
bool q_mimedata_qbase_has_format(void* self, const char* mimetype);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#formats)
///
/// ``` QMimeData* self ```
const char** q_mimedata_formats(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#formats)
///
/// Allows for overriding the related default method
///
/// ``` QMimeData* self, const char** (*slot)() ```
void q_mimedata_on_formats(void* self, const char** (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#formats)
///
/// Base class method implementation
///
/// ``` QMimeData* self ```
const char** q_mimedata_qbase_formats(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#clear)
///
/// ``` QMimeData* self ```
void q_mimedata_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#retrieveData)
///
/// ``` QMimeData* self, const char* mimetype, QMetaType* preferredType ```
QVariant* q_mimedata_retrieve_data(void* self, const char* mimetype, void* preferredType);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#retrieveData)
///
/// Allows for overriding the related default method
///
/// ``` QMimeData* self, QVariant* (*slot)(QMimeData*, const char*, QMetaType*) ```
void q_mimedata_on_retrieve_data(void* self, QVariant* (*slot)(void*, const char*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#retrieveData)
///
/// Base class method implementation
///
/// ``` QMimeData* self, const char* mimetype, QMetaType* preferredType ```
QVariant* q_mimedata_qbase_retrieve_data(void* self, const char* mimetype, void* preferredType);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mimedata_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mimedata_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMimeData* self ```
const char* q_mimedata_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMimeData* self, char* name ```
void q_mimedata_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMimeData* self ```
bool q_mimedata_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMimeData* self ```
bool q_mimedata_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMimeData* self ```
bool q_mimedata_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMimeData* self ```
bool q_mimedata_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMimeData* self, bool b ```
bool q_mimedata_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMimeData* self ```
QThread* q_mimedata_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMimeData* self, QThread* thread ```
void q_mimedata_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMimeData* self, int interval ```
int32_t q_mimedata_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMimeData* self, int id ```
void q_mimedata_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMimeData* self ```
const libqt_list /* of QObject* */ q_mimedata_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMimeData* self, QObject* parent ```
void q_mimedata_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMimeData* self, QObject* filterObj ```
void q_mimedata_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMimeData* self, QObject* obj ```
void q_mimedata_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mimedata_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMimeData* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mimedata_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mimedata_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mimedata_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMimeData* self ```
void q_mimedata_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMimeData* self ```
void q_mimedata_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMimeData* self, const char* name, QVariant* value ```
bool q_mimedata_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMimeData* self, const char* name ```
QVariant* q_mimedata_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMimeData* self ```
const char** q_mimedata_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMimeData* self ```
QBindingStorage* q_mimedata_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMimeData* self ```
const QBindingStorage* q_mimedata_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMimeData* self ```
void q_mimedata_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMimeData* self, void (*slot)(QObject*) ```
void q_mimedata_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMimeData* self ```
QObject* q_mimedata_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMimeData* self, const char* classname ```
bool q_mimedata_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMimeData* self ```
void q_mimedata_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMimeData* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mimedata_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mimedata_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMimeData* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mimedata_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMimeData* self, QObject* param1 ```
void q_mimedata_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMimeData* self, void (*slot)(QObject*, QObject*) ```
void q_mimedata_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QEvent* event ```
bool q_mimedata_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QEvent* event ```
bool q_mimedata_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, bool (*slot)(QMimeData*, QEvent*) ```
void q_mimedata_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QObject* watched, QEvent* event ```
bool q_mimedata_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QObject* watched, QEvent* event ```
bool q_mimedata_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, bool (*slot)(QMimeData*, QObject*, QEvent*) ```
void q_mimedata_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QTimerEvent* event ```
void q_mimedata_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QTimerEvent* event ```
void q_mimedata_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, void (*slot)(QMimeData*, QTimerEvent*) ```
void q_mimedata_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QChildEvent* event ```
void q_mimedata_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QChildEvent* event ```
void q_mimedata_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, void (*slot)(QMimeData*, QChildEvent*) ```
void q_mimedata_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QEvent* event ```
void q_mimedata_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QEvent* event ```
void q_mimedata_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, void (*slot)(QMimeData*, QEvent*) ```
void q_mimedata_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
void q_mimedata_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
void q_mimedata_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, void (*slot)(QMimeData*, QMetaMethod*) ```
void q_mimedata_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
void q_mimedata_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
void q_mimedata_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, void (*slot)(QMimeData*, QMetaMethod*) ```
void q_mimedata_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self ```
QObject* q_mimedata_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self ```
QObject* q_mimedata_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, QObject* (*slot)() ```
void q_mimedata_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self ```
int32_t q_mimedata_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self ```
int32_t q_mimedata_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, int32_t (*slot)() ```
void q_mimedata_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, const char* signal ```
int32_t q_mimedata_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, const char* signal ```
int32_t q_mimedata_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, int32_t (*slot)(QMimeData*, const char*) ```
void q_mimedata_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
bool q_mimedata_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMimeData* self, QMetaMethod* signal ```
bool q_mimedata_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMimeData* self, bool (*slot)(QMimeData*, QMetaMethod*) ```
void q_mimedata_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QMimeData* self, void (*slot)(QObject*, const char*) ```
void q_mimedata_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedata.html#dtor.QMimeData)
///
/// Delete this object from C++ memory.
///
/// ``` QMimeData* self ```
void q_mimedata_delete(void* self);

#endif
