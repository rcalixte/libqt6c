#pragma once
#ifndef SRC_PDF_QT6C_LIBQPDFPAGERENDERER_H
#define SRC_PDF_QT6C_LIBQPDFPAGERENDERER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfpagerenderer.html

/// q_pdfpagerenderer_new constructs a new QPdfPageRenderer object.
///
QPdfPageRenderer* q_pdfpagerenderer_new();

/// q_pdfpagerenderer_new2 constructs a new QPdfPageRenderer object.
///
/// @param parent QObject*
QPdfPageRenderer* q_pdfpagerenderer_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPdfPageRenderer*
const QMetaObject* q_pdfpagerenderer_meta_object(void* self);

/// @param self QPdfPageRenderer*
/// @param param1 const char*
void* q_pdfpagerenderer_metacast(void* self, const char* param1);

/// @param self QPdfPageRenderer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pdfpagerenderer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPdfPageRenderer*
/// @param callback int32_t func(QPdfPageRenderer* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_pdfpagerenderer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPdfPageRenderer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pdfpagerenderer_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pdfpagerenderer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#renderMode)
///
/// @param self QPdfPageRenderer*
///
/// @return enum QPdfPageRenderer__RenderMode
int32_t q_pdfpagerenderer_render_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#setRenderMode)
///
/// @param self QPdfPageRenderer*
/// @param mode enum QPdfPageRenderer__RenderMode
void q_pdfpagerenderer_set_render_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#document)
///
/// @param self QPdfPageRenderer*
QPdfDocument* q_pdfpagerenderer_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#setDocument)
///
/// @param self QPdfPageRenderer*
/// @param document QPdfDocument*
void q_pdfpagerenderer_set_document(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#requestPage)
///
/// @param self QPdfPageRenderer*
/// @param pageNumber int
/// @param imageSize QSize*
uint64_t q_pdfpagerenderer_request_page(void* self, int pageNumber, void* imageSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#documentChanged)
///
/// @param self QPdfPageRenderer*
/// @param document QPdfDocument*
void q_pdfpagerenderer_document_changed(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#documentChanged)
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self, QPdfDocument* document)
void q_pdfpagerenderer_on_document_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#renderModeChanged)
///
/// @param self QPdfPageRenderer*
/// @param renderMode enum QPdfPageRenderer__RenderMode
void q_pdfpagerenderer_render_mode_changed(void* self, int32_t renderMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#renderModeChanged)
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self, enum QPdfPageRenderer__RenderMode renderMode)
void q_pdfpagerenderer_on_render_mode_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#pageRendered)
///
/// @param self QPdfPageRenderer*
/// @param pageNumber int
/// @param imageSize QSize*
/// @param image QImage*
/// @param options QPdfDocumentRenderOptions*
/// @param requestId uint64_t
void q_pdfpagerenderer_page_rendered(void* self, int pageNumber, void* imageSize, void* image, void* options, uint64_t requestId);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#pageRendered)
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QImage* image, QPdfDocumentRenderOptions* options, uint64_t requestId)
void q_pdfpagerenderer_on_page_rendered(void* self, void (*callback)(void*, int, void*, void*, void*, uint64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pdfpagerenderer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pdfpagerenderer_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#requestPage)
///
/// @param self QPdfPageRenderer*
/// @param pageNumber int
/// @param imageSize QSize*
/// @param options QPdfDocumentRenderOptions*
uint64_t q_pdfpagerenderer_request_page3(void* self, int pageNumber, void* imageSize, void* options);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfPageRenderer*
const char* q_pdfpagerenderer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPdfPageRenderer*
/// @param name char*
void q_pdfpagerenderer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPdfPageRenderer*
bool q_pdfpagerenderer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPdfPageRenderer*
bool q_pdfpagerenderer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPdfPageRenderer*
bool q_pdfpagerenderer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPdfPageRenderer*
bool q_pdfpagerenderer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPdfPageRenderer*
/// @param b bool
bool q_pdfpagerenderer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPdfPageRenderer*
QThread* q_pdfpagerenderer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfPageRenderer*
/// @param thread QThread*
bool q_pdfpagerenderer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfPageRenderer*
/// @param interval int
int32_t q_pdfpagerenderer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfPageRenderer*
/// @param id int
void q_pdfpagerenderer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfPageRenderer*
/// @param id enum Qt__TimerId
void q_pdfpagerenderer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPdfPageRenderer*
libqt_list /* of QObject* */ q_pdfpagerenderer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPdfPageRenderer*
/// @param parent QObject*
void q_pdfpagerenderer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPdfPageRenderer*
/// @param filterObj QObject*
void q_pdfpagerenderer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPdfPageRenderer*
/// @param obj QObject*
void q_pdfpagerenderer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pdfpagerenderer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfPageRenderer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pdfpagerenderer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pdfpagerenderer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pdfpagerenderer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPdfPageRenderer*
void q_pdfpagerenderer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPdfPageRenderer*
void q_pdfpagerenderer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPdfPageRenderer*
/// @param name const char*
/// @param value QVariant*
bool q_pdfpagerenderer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPdfPageRenderer*
/// @param name const char*
QVariant* q_pdfpagerenderer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfPageRenderer*
const char** q_pdfpagerenderer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfPageRenderer*
QBindingStorage* q_pdfpagerenderer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfPageRenderer*
const QBindingStorage* q_pdfpagerenderer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfPageRenderer*
void q_pdfpagerenderer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self)
void q_pdfpagerenderer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPdfPageRenderer*
QObject* q_pdfpagerenderer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPdfPageRenderer*
/// @param classname const char*
bool q_pdfpagerenderer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPdfPageRenderer*
void q_pdfpagerenderer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfPageRenderer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pdfpagerenderer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfPageRenderer*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pdfpagerenderer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_pdfpagerenderer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfPageRenderer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_pdfpagerenderer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfPageRenderer*
/// @param param1 QObject*
void q_pdfpagerenderer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self, QObject* param1)
void q_pdfpagerenderer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param event QEvent*
bool q_pdfpagerenderer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param event QEvent*
bool q_pdfpagerenderer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback bool func(QPdfPageRenderer* self, QEvent* event)
void q_pdfpagerenderer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param watched QObject*
/// @param event QEvent*
bool q_pdfpagerenderer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param watched QObject*
/// @param event QEvent*
bool q_pdfpagerenderer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback bool func(QPdfPageRenderer* self, QObject* watched, QEvent* event)
void q_pdfpagerenderer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param event QTimerEvent*
void q_pdfpagerenderer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param event QTimerEvent*
void q_pdfpagerenderer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self, QTimerEvent* event)
void q_pdfpagerenderer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param event QChildEvent*
void q_pdfpagerenderer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param event QChildEvent*
void q_pdfpagerenderer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self, QChildEvent* event)
void q_pdfpagerenderer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param event QEvent*
void q_pdfpagerenderer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param event QEvent*
void q_pdfpagerenderer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self, QEvent* event)
void q_pdfpagerenderer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param signal QMetaMethod*
void q_pdfpagerenderer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param signal QMetaMethod*
void q_pdfpagerenderer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self, QMetaMethod* signal)
void q_pdfpagerenderer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param signal QMetaMethod*
void q_pdfpagerenderer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param signal QMetaMethod*
void q_pdfpagerenderer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self, QMetaMethod* signal)
void q_pdfpagerenderer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
QObject* q_pdfpagerenderer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
QObject* q_pdfpagerenderer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback QObject* func()
void q_pdfpagerenderer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
int32_t q_pdfpagerenderer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
int32_t q_pdfpagerenderer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback int32_t func()
void q_pdfpagerenderer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param signal const char*
int32_t q_pdfpagerenderer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param signal const char*
int32_t q_pdfpagerenderer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback int32_t func(QPdfPageRenderer* self, const char* signal)
void q_pdfpagerenderer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param signal QMetaMethod*
bool q_pdfpagerenderer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param signal QMetaMethod*
bool q_pdfpagerenderer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageRenderer*
/// @param callback bool func(QPdfPageRenderer* self, QMetaMethod* signal)
void q_pdfpagerenderer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfPageRenderer*
/// @param callback void func(QPdfPageRenderer* self, const char* objectName)
void q_pdfpagerenderer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagerenderer.html#dtor.QPdfPageRenderer)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfPageRenderer*
void q_pdfpagerenderer_delete(void* self);

/// https://doc.qt.io/qt-6/qpdfpagerenderer.html#types

typedef enum {
    QPDFPAGERENDERER_RENDERMODE_MULTITHREADED = 0,
    QPDFPAGERENDERER_RENDERMODE_SINGLETHREADED = 1
} QPdfPageRenderer__RenderMode;

#endif
