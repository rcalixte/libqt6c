#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFDOCUMENT_H
#define SRC_PDFQT6C_LIBQPDFDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqimage.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "libqpdfdocumentrenderoptions.h"
#include "libqpdfselection.h"
#include "../libqpoint.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qpdfdocument.html

/// q_pdfdocument_new constructs a new QPdfDocument object.
///
///
QPdfDocument* q_pdfdocument_new();

/// q_pdfdocument_new2 constructs a new QPdfDocument object.
///
/// ``` QObject* parent ```
QPdfDocument* q_pdfdocument_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPdfDocument* self ```
QMetaObject* q_pdfdocument_meta_object(void* self);

/// ``` QPdfDocument* self, const char* param1 ```
void* q_pdfdocument_metacast(void* self, const char* param1);

/// ``` QPdfDocument* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfdocument_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPdfDocument* self, int32_t (*slot)(QPdfDocument*, enum QMetaObject__Call, int, void*) ```
void q_pdfdocument_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPdfDocument* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfdocument_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pdfdocument_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#load)
///
/// ``` QPdfDocument* self, const char* fileName ```
int64_t q_pdfdocument_load(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#status)
///
/// ``` QPdfDocument* self ```
int64_t q_pdfdocument_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#load)
///
/// ``` QPdfDocument* self, QIODevice* device ```
void q_pdfdocument_load_with_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#setPassword)
///
/// ``` QPdfDocument* self, const char* password ```
void q_pdfdocument_set_password(void* self, const char* password);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#password)
///
/// ``` QPdfDocument* self ```
const char* q_pdfdocument_password(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#metaData)
///
/// ``` QPdfDocument* self, enum QPdfDocument__MetaDataField field ```
QVariant* q_pdfdocument_meta_data(void* self, int64_t field);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#error)
///
/// ``` QPdfDocument* self ```
int64_t q_pdfdocument_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#close)
///
/// ``` QPdfDocument* self ```
void q_pdfdocument_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageCount)
///
/// ``` QPdfDocument* self ```
int32_t q_pdfdocument_page_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pagePointSize)
///
/// ``` QPdfDocument* self, int page ```
QSizeF* q_pdfdocument_page_point_size(void* self, int page);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageLabel)
///
/// ``` QPdfDocument* self, int page ```
const char* q_pdfdocument_page_label(void* self, int page);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageModel)
///
/// ``` QPdfDocument* self ```
QAbstractListModel* q_pdfdocument_page_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#render)
///
/// ``` QPdfDocument* self, int page, QSize* imageSize ```
QImage* q_pdfdocument_render(void* self, int page, void* imageSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#getSelection)
///
/// ``` QPdfDocument* self, int page, QPointF* start, QPointF* end ```
QPdfSelection* q_pdfdocument_get_selection(void* self, int page, void* start, void* end);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#getSelectionAtIndex)
///
/// ``` QPdfDocument* self, int page, int startIndex, int maxLength ```
QPdfSelection* q_pdfdocument_get_selection_at_index(void* self, int page, int startIndex, int maxLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#getAllText)
///
/// ``` QPdfDocument* self, int page ```
QPdfSelection* q_pdfdocument_get_all_text(void* self, int page);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#passwordChanged)
///
/// ``` QPdfDocument* self ```
void q_pdfdocument_password_changed(void* self);

/// ``` QPdfDocument* self, void (*slot)(QPdfDocument*) ```
void q_pdfdocument_on_password_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#passwordRequired)
///
/// ``` QPdfDocument* self ```
void q_pdfdocument_password_required(void* self);

/// ``` QPdfDocument* self, void (*slot)(QPdfDocument*) ```
void q_pdfdocument_on_password_required(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#statusChanged)
///
/// ``` QPdfDocument* self, enum QPdfDocument__Status status ```
void q_pdfdocument_status_changed(void* self, int64_t status);

/// ``` QPdfDocument* self, void (*slot)(QPdfDocument*, enum QPdfDocument__Status) ```
void q_pdfdocument_on_status_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageCountChanged)
///
/// ``` QPdfDocument* self, int pageCount ```
void q_pdfdocument_page_count_changed(void* self, int pageCount);

/// ``` QPdfDocument* self, void (*slot)(QPdfDocument*, int) ```
void q_pdfdocument_on_page_count_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#pageModelChanged)
///
/// ``` QPdfDocument* self ```
void q_pdfdocument_page_model_changed(void* self);

/// ``` QPdfDocument* self, void (*slot)(QPdfDocument*) ```
void q_pdfdocument_on_page_model_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pdfdocument_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pdfdocument_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocument.html#render)
///
/// ``` QPdfDocument* self, int page, QSize* imageSize, QPdfDocumentRenderOptions* options ```
QImage* q_pdfdocument_render3(void* self, int page, void* imageSize, void* options);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPdfDocument* self ```
const char* q_pdfdocument_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPdfDocument* self, char* name ```
void q_pdfdocument_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPdfDocument* self ```
bool q_pdfdocument_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPdfDocument* self ```
bool q_pdfdocument_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPdfDocument* self ```
bool q_pdfdocument_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPdfDocument* self ```
bool q_pdfdocument_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPdfDocument* self, bool b ```
bool q_pdfdocument_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPdfDocument* self ```
QThread* q_pdfdocument_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPdfDocument* self, QThread* thread ```
void q_pdfdocument_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfDocument* self, int interval ```
int32_t q_pdfdocument_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPdfDocument* self, int id ```
void q_pdfdocument_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPdfDocument* self ```
libqt_list /* of QObject* */ q_pdfdocument_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPdfDocument* self, QObject* parent ```
void q_pdfdocument_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPdfDocument* self, QObject* filterObj ```
void q_pdfdocument_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPdfDocument* self, QObject* obj ```
void q_pdfdocument_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pdfdocument_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfDocument* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pdfdocument_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pdfdocument_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pdfdocument_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPdfDocument* self ```
void q_pdfdocument_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPdfDocument* self ```
void q_pdfdocument_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPdfDocument* self, const char* name, QVariant* value ```
bool q_pdfdocument_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPdfDocument* self, const char* name ```
QVariant* q_pdfdocument_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPdfDocument* self ```
const char** q_pdfdocument_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfDocument* self ```
QBindingStorage* q_pdfdocument_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfDocument* self ```
QBindingStorage* q_pdfdocument_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfDocument* self ```
void q_pdfdocument_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QPdfDocument* self, void (*slot)(QObject*) ```
void q_pdfdocument_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPdfDocument* self ```
QObject* q_pdfdocument_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPdfDocument* self, const char* classname ```
bool q_pdfdocument_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPdfDocument* self ```
void q_pdfdocument_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfDocument* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pdfdocument_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfdocument_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfDocument* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfdocument_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfDocument* self, QObject* param1 ```
void q_pdfdocument_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QPdfDocument* self, void (*slot)(QObject*, QObject*) ```
void q_pdfdocument_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self, QEvent* event ```
bool q_pdfdocument_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self, QEvent* event ```
bool q_pdfdocument_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, bool (*slot)(QPdfDocument*, QEvent*) ```
void q_pdfdocument_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self, QObject* watched, QEvent* event ```
bool q_pdfdocument_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self, QObject* watched, QEvent* event ```
bool q_pdfdocument_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, bool (*slot)(QPdfDocument*, QObject*, QEvent*) ```
void q_pdfdocument_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self, QTimerEvent* event ```
void q_pdfdocument_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self, QTimerEvent* event ```
void q_pdfdocument_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, void (*slot)(QPdfDocument*, QTimerEvent*) ```
void q_pdfdocument_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self, QChildEvent* event ```
void q_pdfdocument_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self, QChildEvent* event ```
void q_pdfdocument_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, void (*slot)(QPdfDocument*, QChildEvent*) ```
void q_pdfdocument_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self, QEvent* event ```
void q_pdfdocument_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self, QEvent* event ```
void q_pdfdocument_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, void (*slot)(QPdfDocument*, QEvent*) ```
void q_pdfdocument_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self, QMetaMethod* signal ```
void q_pdfdocument_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self, QMetaMethod* signal ```
void q_pdfdocument_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, void (*slot)(QPdfDocument*, QMetaMethod*) ```
void q_pdfdocument_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self, QMetaMethod* signal ```
void q_pdfdocument_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self, QMetaMethod* signal ```
void q_pdfdocument_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, void (*slot)(QPdfDocument*, QMetaMethod*) ```
void q_pdfdocument_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self ```
QObject* q_pdfdocument_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self ```
QObject* q_pdfdocument_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, QObject* (*slot)() ```
void q_pdfdocument_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self ```
int32_t q_pdfdocument_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self ```
int32_t q_pdfdocument_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, int32_t (*slot)() ```
void q_pdfdocument_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self, const char* signal ```
int32_t q_pdfdocument_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self, const char* signal ```
int32_t q_pdfdocument_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, int32_t (*slot)(QPdfDocument*, const char*) ```
void q_pdfdocument_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfDocument* self, QMetaMethod* signal ```
bool q_pdfdocument_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfDocument* self, QMetaMethod* signal ```
bool q_pdfdocument_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfDocument* self, bool (*slot)(QPdfDocument*, QMetaMethod*) ```
void q_pdfdocument_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QPdfDocument* self ```
void q_pdfdocument_delete(void* self);

/// https://doc.qt.io/qt-6/qpdfdocument.html#types

typedef enum {
    QPDFDOCUMENT_STATUS_NULL = 0,
    QPDFDOCUMENT_STATUS_LOADING = 1,
    QPDFDOCUMENT_STATUS_READY = 2,
    QPDFDOCUMENT_STATUS_UNLOADING = 3,
    QPDFDOCUMENT_STATUS_ERROR = 4
} QPdfDocument__Status;

typedef enum {
    QPDFDOCUMENT_ERROR_NONE = 0,
    QPDFDOCUMENT_ERROR_UNKNOWN = 1,
    QPDFDOCUMENT_ERROR_DATANOTYETAVAILABLE = 2,
    QPDFDOCUMENT_ERROR_FILENOTFOUND = 3,
    QPDFDOCUMENT_ERROR_INVALIDFILEFORMAT = 4,
    QPDFDOCUMENT_ERROR_INCORRECTPASSWORD = 5,
    QPDFDOCUMENT_ERROR_UNSUPPORTEDSECURITYSCHEME = 6
} QPdfDocument__Error;

typedef enum {
    QPDFDOCUMENT_METADATAFIELD_TITLE = 0,
    QPDFDOCUMENT_METADATAFIELD_SUBJECT = 1,
    QPDFDOCUMENT_METADATAFIELD_AUTHOR = 2,
    QPDFDOCUMENT_METADATAFIELD_KEYWORDS = 3,
    QPDFDOCUMENT_METADATAFIELD_PRODUCER = 4,
    QPDFDOCUMENT_METADATAFIELD_CREATOR = 5,
    QPDFDOCUMENT_METADATAFIELD_CREATIONDATE = 6,
    QPDFDOCUMENT_METADATAFIELD_MODIFICATIONDATE = 7
} QPdfDocument__MetaDataField;

typedef enum {
    QPDFDOCUMENT_PAGEMODELROLE_LABEL = 256,
    QPDFDOCUMENT_PAGEMODELROLE_POINTSIZE = 257,
    QPDFDOCUMENT_PAGEMODELROLE_NROLES = 258
} QPdfDocument__PageModelRole;

#endif
