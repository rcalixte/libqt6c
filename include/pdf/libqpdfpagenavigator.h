#pragma once
#ifndef SRC_PDF_QT6C_LIBQPDFPAGENAVIGATOR_H
#define SRC_PDF_QT6C_LIBQPDFPAGENAVIGATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html)

/// q_pdfpagenavigator_new constructs a new QPdfPageNavigator object.
///
QPdfPageNavigator* q_pdfpagenavigator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html)

/// q_pdfpagenavigator_new2 constructs a new QPdfPageNavigator object.
///
/// @param parent QObject*
///
QPdfPageNavigator* q_pdfpagenavigator_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPdfPageNavigator*
///
const QMetaObject* q_pdfpagenavigator_meta_object(void* self);

/// @param self QPdfPageNavigator*
/// @param param1 const char*
///
void* q_pdfpagenavigator_metacast(void* self, const char* param1);

/// @param self QPdfPageNavigator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pdfpagenavigator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPdfPageNavigator*
/// @param callback int32_t func(QPdfPageNavigator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_pdfpagenavigator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPdfPageNavigator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pdfpagenavigator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_pdfpagenavigator_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPage)
///
/// @param self QPdfPageNavigator*
///
int32_t q_pdfpagenavigator_current_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocation)
///
/// @param self QPdfPageNavigator*
///
QPointF* q_pdfpagenavigator_current_location(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoom)
///
/// @param self QPdfPageNavigator*
///
double q_pdfpagenavigator_current_zoom(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailable)
///
/// @param self QPdfPageNavigator*
///
bool q_pdfpagenavigator_back_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailable)
///
/// @param self QPdfPageNavigator*
///
bool q_pdfpagenavigator_forward_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#clear)
///
/// @param self QPdfPageNavigator*
///
void q_pdfpagenavigator_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jump)
///
/// @param self QPdfPageNavigator*
/// @param destination QPdfLink*
///
void q_pdfpagenavigator_jump(void* self, void* destination);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jump)
///
/// @param self QPdfPageNavigator*
/// @param page int
/// @param location QPointF*
///
void q_pdfpagenavigator_jump2(void* self, int page, void* location);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#update)
///
/// @param self QPdfPageNavigator*
/// @param page int
/// @param location QPointF*
/// @param zoom double
///
void q_pdfpagenavigator_update(void* self, int page, void* location, double zoom);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forward)
///
/// @param self QPdfPageNavigator*
///
void q_pdfpagenavigator_forward(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#back)
///
/// @param self QPdfPageNavigator*
///
void q_pdfpagenavigator_back(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPageChanged)
///
/// @param self QPdfPageNavigator*
/// @param page int
///
void q_pdfpagenavigator_current_page_changed(void* self, int page);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPageChanged)
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, int page)
///
void q_pdfpagenavigator_on_current_page_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocationChanged)
///
/// @param self QPdfPageNavigator*
/// @param location QPointF*
///
void q_pdfpagenavigator_current_location_changed(void* self, void* location);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocationChanged)
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, QPointF* location)
///
void q_pdfpagenavigator_on_current_location_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoomChanged)
///
/// @param self QPdfPageNavigator*
/// @param zoom double
///
void q_pdfpagenavigator_current_zoom_changed(void* self, double zoom);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoomChanged)
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, double zoom)
///
void q_pdfpagenavigator_on_current_zoom_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailableChanged)
///
/// @param self QPdfPageNavigator*
/// @param available bool
///
void q_pdfpagenavigator_back_available_changed(void* self, bool available);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailableChanged)
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, bool available)
///
void q_pdfpagenavigator_on_back_available_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailableChanged)
///
/// @param self QPdfPageNavigator*
/// @param available bool
///
void q_pdfpagenavigator_forward_available_changed(void* self, bool available);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailableChanged)
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, bool available)
///
void q_pdfpagenavigator_on_forward_available_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jumped)
///
/// @param self QPdfPageNavigator*
/// @param current QPdfLink*
///
void q_pdfpagenavigator_jumped(void* self, void* current);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jumped)
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, QPdfLink* current)
///
void q_pdfpagenavigator_on_jumped(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
///
/// @param self QPdfPageNavigator*
///
QPdfLink* q_pdfpagenavigator_current_link(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
///
/// Allows for overriding the related default method
///
/// @param self QPdfPageNavigator*
/// @param callback QPdfLink* func()
///
void q_pdfpagenavigator_on_current_link(void* self, QPdfLink* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
///
/// Base class method implementation
///
/// @param self QPdfPageNavigator*
///
QPdfLink* q_pdfpagenavigator_qbase_current_link(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_pdfpagenavigator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_pdfpagenavigator_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jump)
///
/// @param self QPdfPageNavigator*
/// @param page int
/// @param location QPointF*
/// @param zoom double
///
void q_pdfpagenavigator_jump3(void* self, int page, void* location, double zoom);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPdfPageNavigator*
///
const char* q_pdfpagenavigator_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPdfPageNavigator*
/// @param name char*
///
void q_pdfpagenavigator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPdfPageNavigator*
///
bool q_pdfpagenavigator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPdfPageNavigator*
///
bool q_pdfpagenavigator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPdfPageNavigator*
///
bool q_pdfpagenavigator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPdfPageNavigator*
///
bool q_pdfpagenavigator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPdfPageNavigator*
/// @param b bool
///
bool q_pdfpagenavigator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPdfPageNavigator*
///
QThread* q_pdfpagenavigator_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfPageNavigator*
/// @param thread QThread*
///
bool q_pdfpagenavigator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfPageNavigator*
/// @param interval int
///
int32_t q_pdfpagenavigator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfPageNavigator*
/// @param id int
///
void q_pdfpagenavigator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfPageNavigator*
/// @param id enum Qt__TimerId
///
void q_pdfpagenavigator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPdfPageNavigator*
///
/// @return libqt_list of QObject*
///
libqt_list q_pdfpagenavigator_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPdfPageNavigator*
/// @param parent QObject*
///
void q_pdfpagenavigator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPdfPageNavigator*
/// @param filterObj QObject*
///
void q_pdfpagenavigator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPdfPageNavigator*
/// @param obj QObject*
///
void q_pdfpagenavigator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_pdfpagenavigator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfPageNavigator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_pdfpagenavigator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_pdfpagenavigator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_pdfpagenavigator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPdfPageNavigator*
///
void q_pdfpagenavigator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPdfPageNavigator*
///
void q_pdfpagenavigator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPdfPageNavigator*
/// @param name const char*
/// @param value QVariant*
///
bool q_pdfpagenavigator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPdfPageNavigator*
/// @param name const char*
///
QVariant* q_pdfpagenavigator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPdfPageNavigator*
///
const char** q_pdfpagenavigator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfPageNavigator*
///
QBindingStorage* q_pdfpagenavigator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfPageNavigator*
///
const QBindingStorage* q_pdfpagenavigator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfPageNavigator*
///
void q_pdfpagenavigator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self)
///
void q_pdfpagenavigator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPdfPageNavigator*
///
QObject* q_pdfpagenavigator_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPdfPageNavigator*
/// @param classname const char*
///
bool q_pdfpagenavigator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPdfPageNavigator*
///
void q_pdfpagenavigator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfPageNavigator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_pdfpagenavigator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfPageNavigator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_pdfpagenavigator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pdfpagenavigator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfPageNavigator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pdfpagenavigator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfPageNavigator*
/// @param param1 QObject*
///
void q_pdfpagenavigator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, QObject* param1)
///
void q_pdfpagenavigator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param event QEvent*
///
bool q_pdfpagenavigator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param event QEvent*
///
bool q_pdfpagenavigator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback bool func(QPdfPageNavigator* self, QEvent* event)
///
void q_pdfpagenavigator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pdfpagenavigator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pdfpagenavigator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback bool func(QPdfPageNavigator* self, QObject* watched, QEvent* event)
///
void q_pdfpagenavigator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param event QTimerEvent*
///
void q_pdfpagenavigator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param event QTimerEvent*
///
void q_pdfpagenavigator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, QTimerEvent* event)
///
void q_pdfpagenavigator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param event QChildEvent*
///
void q_pdfpagenavigator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param event QChildEvent*
///
void q_pdfpagenavigator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, QChildEvent* event)
///
void q_pdfpagenavigator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param event QEvent*
///
void q_pdfpagenavigator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param event QEvent*
///
void q_pdfpagenavigator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, QEvent* event)
///
void q_pdfpagenavigator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param signal QMetaMethod*
///
void q_pdfpagenavigator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param signal QMetaMethod*
///
void q_pdfpagenavigator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, QMetaMethod* signal)
///
void q_pdfpagenavigator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param signal QMetaMethod*
///
void q_pdfpagenavigator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param signal QMetaMethod*
///
void q_pdfpagenavigator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, QMetaMethod* signal)
///
void q_pdfpagenavigator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
///
QObject* q_pdfpagenavigator_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
///
QObject* q_pdfpagenavigator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback QObject* func()
///
void q_pdfpagenavigator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
///
int32_t q_pdfpagenavigator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
///
int32_t q_pdfpagenavigator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback int32_t func()
///
void q_pdfpagenavigator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param signal const char*
///
int32_t q_pdfpagenavigator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param signal const char*
///
int32_t q_pdfpagenavigator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback int32_t func(QPdfPageNavigator* self, const char* signal)
///
void q_pdfpagenavigator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param signal QMetaMethod*
///
bool q_pdfpagenavigator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param signal QMetaMethod*
///
bool q_pdfpagenavigator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfPageNavigator*
/// @param callback bool func(QPdfPageNavigator* self, QMetaMethod* signal)
///
void q_pdfpagenavigator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfPageNavigator*
/// @param callback void func(QPdfPageNavigator* self, const char* objectName)
///
void q_pdfpagenavigator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfpagenavigator.html#dtor.QPdfPageNavigator)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfPageNavigator*
///
void q_pdfpagenavigator_delete(void* self);

#endif
