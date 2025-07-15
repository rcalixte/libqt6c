#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFPAGERENDERER_H
#define SRC_PDFQT6C_LIBQPDFPAGERENDERER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfpagerenderer.html

/// q_pdfpagerenderer_new constructs a new QPdfPageRenderer object.
///
///
QPdfPageRenderer* q_pdfpagerenderer_new();

/// q_pdfpagerenderer_new2 constructs a new QPdfPageRenderer object.
///
/// ``` QObject* parent ```
QPdfPageRenderer* q_pdfpagerenderer_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPdfPageRenderer* self ```
const QMetaObject* q_pdfpagerenderer_meta_object(void* self);

/// ``` QPdfPageRenderer* self, const char* param1 ```
void* q_pdfpagerenderer_metacast(void* self, const char* param1);

/// ``` QPdfPageRenderer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfpagerenderer_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPdfPageRenderer* self, int32_t (*slot)(QPdfPageRenderer*, enum QMetaObject__Call, int, void*) ```
void q_pdfpagerenderer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPdfPageRenderer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfpagerenderer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pdfpagerenderer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#renderMode)
///
/// ``` QPdfPageRenderer* self ```
int64_t q_pdfpagerenderer_render_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#setRenderMode)
///
/// ``` QPdfPageRenderer* self, enum QPdfPageRenderer__RenderMode mode ```
void q_pdfpagerenderer_set_render_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#document)
///
/// ``` QPdfPageRenderer* self ```
QPdfDocument* q_pdfpagerenderer_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#setDocument)
///
/// ``` QPdfPageRenderer* self, QPdfDocument* document ```
void q_pdfpagerenderer_set_document(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#requestPage)
///
/// ``` QPdfPageRenderer* self, int pageNumber, QSize* imageSize ```
uint64_t q_pdfpagerenderer_request_page(void* self, int pageNumber, void* imageSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#documentChanged)
///
/// ``` QPdfPageRenderer* self, QPdfDocument* document ```
void q_pdfpagerenderer_document_changed(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#documentChanged)
///
/// ``` QPdfPageRenderer* self, void (*slot)(QPdfPageRenderer*, QPdfDocument*) ```
void q_pdfpagerenderer_on_document_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#renderModeChanged)
///
/// ``` QPdfPageRenderer* self, enum QPdfPageRenderer__RenderMode renderMode ```
void q_pdfpagerenderer_render_mode_changed(void* self, int64_t renderMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#renderModeChanged)
///
/// ``` QPdfPageRenderer* self, void (*slot)(QPdfPageRenderer*, enum QPdfPageRenderer__RenderMode) ```
void q_pdfpagerenderer_on_render_mode_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#pageRendered)
///
/// ``` QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QImage* image, QPdfDocumentRenderOptions* options, uint64_t requestId ```
void q_pdfpagerenderer_page_rendered(void* self, int pageNumber, void* imageSize, void* image, void* options, uint64_t requestId);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#pageRendered)
///
/// ``` QPdfPageRenderer* self, void (*slot)(QPdfPageRenderer*, int, QSize*, QImage*, QPdfDocumentRenderOptions*, uint64_t) ```
void q_pdfpagerenderer_on_page_rendered(void* self, void (*slot)(void*, int, void*, void*, void*, uint64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pdfpagerenderer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pdfpagerenderer_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#requestPage)
///
/// ``` QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QPdfDocumentRenderOptions* options ```
uint64_t q_pdfpagerenderer_request_page3(void* self, int pageNumber, void* imageSize, void* options);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPdfPageRenderer* self ```
const char* q_pdfpagerenderer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPdfPageRenderer* self, char* name ```
void q_pdfpagerenderer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPdfPageRenderer* self ```
bool q_pdfpagerenderer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPdfPageRenderer* self ```
bool q_pdfpagerenderer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPdfPageRenderer* self ```
bool q_pdfpagerenderer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPdfPageRenderer* self ```
bool q_pdfpagerenderer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPdfPageRenderer* self, bool b ```
bool q_pdfpagerenderer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPdfPageRenderer* self ```
QThread* q_pdfpagerenderer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPdfPageRenderer* self, QThread* thread ```
bool q_pdfpagerenderer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfPageRenderer* self, int interval ```
int32_t q_pdfpagerenderer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPdfPageRenderer* self, int id ```
void q_pdfpagerenderer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPdfPageRenderer* self, enum Qt__TimerId id ```
void q_pdfpagerenderer_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPdfPageRenderer* self ```
libqt_list /* of QObject* */ q_pdfpagerenderer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPdfPageRenderer* self, QObject* parent ```
void q_pdfpagerenderer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPdfPageRenderer* self, QObject* filterObj ```
void q_pdfpagerenderer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPdfPageRenderer* self, QObject* obj ```
void q_pdfpagerenderer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pdfpagerenderer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfPageRenderer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pdfpagerenderer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pdfpagerenderer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pdfpagerenderer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPdfPageRenderer* self ```
void q_pdfpagerenderer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPdfPageRenderer* self ```
void q_pdfpagerenderer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPdfPageRenderer* self, const char* name, QVariant* value ```
bool q_pdfpagerenderer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPdfPageRenderer* self, const char* name ```
QVariant* q_pdfpagerenderer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPdfPageRenderer* self ```
const char** q_pdfpagerenderer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfPageRenderer* self ```
QBindingStorage* q_pdfpagerenderer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfPageRenderer* self ```
const QBindingStorage* q_pdfpagerenderer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfPageRenderer* self ```
void q_pdfpagerenderer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfPageRenderer* self, void (*slot)(QObject*) ```
void q_pdfpagerenderer_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPdfPageRenderer* self ```
QObject* q_pdfpagerenderer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPdfPageRenderer* self, const char* classname ```
bool q_pdfpagerenderer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPdfPageRenderer* self ```
void q_pdfpagerenderer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPdfPageRenderer* self, QThread* thread, Disambiguated_t* param2 ```
bool q_pdfpagerenderer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfPageRenderer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pdfpagerenderer_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfpagerenderer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfPageRenderer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfpagerenderer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfPageRenderer* self, QObject* param1 ```
void q_pdfpagerenderer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfPageRenderer* self, void (*slot)(QObject*, QObject*) ```
void q_pdfpagerenderer_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self, QEvent* event ```
bool q_pdfpagerenderer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, QEvent* event ```
bool q_pdfpagerenderer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, bool (*slot)(QPdfPageRenderer*, QEvent*) ```
void q_pdfpagerenderer_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self, QObject* watched, QEvent* event ```
bool q_pdfpagerenderer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, QObject* watched, QEvent* event ```
bool q_pdfpagerenderer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, bool (*slot)(QPdfPageRenderer*, QObject*, QEvent*) ```
void q_pdfpagerenderer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self, QTimerEvent* event ```
void q_pdfpagerenderer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, QTimerEvent* event ```
void q_pdfpagerenderer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, void (*slot)(QPdfPageRenderer*, QTimerEvent*) ```
void q_pdfpagerenderer_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self, QChildEvent* event ```
void q_pdfpagerenderer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, QChildEvent* event ```
void q_pdfpagerenderer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, void (*slot)(QPdfPageRenderer*, QChildEvent*) ```
void q_pdfpagerenderer_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self, QEvent* event ```
void q_pdfpagerenderer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, QEvent* event ```
void q_pdfpagerenderer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, void (*slot)(QPdfPageRenderer*, QEvent*) ```
void q_pdfpagerenderer_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self, QMetaMethod* signal ```
void q_pdfpagerenderer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, QMetaMethod* signal ```
void q_pdfpagerenderer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, void (*slot)(QPdfPageRenderer*, QMetaMethod*) ```
void q_pdfpagerenderer_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self, QMetaMethod* signal ```
void q_pdfpagerenderer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, QMetaMethod* signal ```
void q_pdfpagerenderer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, void (*slot)(QPdfPageRenderer*, QMetaMethod*) ```
void q_pdfpagerenderer_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self ```
QObject* q_pdfpagerenderer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self ```
QObject* q_pdfpagerenderer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, QObject* (*slot)() ```
void q_pdfpagerenderer_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self ```
int32_t q_pdfpagerenderer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self ```
int32_t q_pdfpagerenderer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, int32_t (*slot)() ```
void q_pdfpagerenderer_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self, const char* signal ```
int32_t q_pdfpagerenderer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, const char* signal ```
int32_t q_pdfpagerenderer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, int32_t (*slot)(QPdfPageRenderer*, const char*) ```
void q_pdfpagerenderer_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageRenderer* self, QMetaMethod* signal ```
bool q_pdfpagerenderer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, QMetaMethod* signal ```
bool q_pdfpagerenderer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageRenderer* self, bool (*slot)(QPdfPageRenderer*, QMetaMethod*) ```
void q_pdfpagerenderer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfPageRenderer* self, void (*slot)(QObject*, const char*) ```
void q_pdfpagerenderer_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#dtor.QPdfPageRenderer)
///
/// Delete this object from C++ memory.
///
/// ``` QPdfPageRenderer* self ```
void q_pdfpagerenderer_delete(void* self);

/// https://doc.qt.io/qt-6/qpdfpagerenderer.html#types

typedef enum {
    QPDFPAGERENDERER_RENDERMODE_MULTITHREADED = 0,
    QPDFPAGERENDERER_RENDERMODE_SINGLETHREADED = 1
} QPdfPageRenderer__RenderMode;

#endif
