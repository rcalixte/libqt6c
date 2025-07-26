#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFPAGENAVIGATOR_H
#define SRC_PDFQT6C_LIBQPDFPAGENAVIGATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfpagenavigator.html

/// q_pdfpagenavigator_new constructs a new QPdfPageNavigator object.
///
///
QPdfPageNavigator* q_pdfpagenavigator_new();

/// q_pdfpagenavigator_new2 constructs a new QPdfPageNavigator object.
///
/// ``` QObject* parent ```
QPdfPageNavigator* q_pdfpagenavigator_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPdfPageNavigator* self ```
const QMetaObject* q_pdfpagenavigator_meta_object(void* self);

/// ``` QPdfPageNavigator* self, const char* param1 ```
void* q_pdfpagenavigator_metacast(void* self, const char* param1);

/// ``` QPdfPageNavigator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfpagenavigator_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPdfPageNavigator* self, int32_t (*slot)(QPdfPageNavigator*, enum QMetaObject__Call, int, void*) ```
void q_pdfpagenavigator_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPdfPageNavigator* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfpagenavigator_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pdfpagenavigator_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPage)
///
/// ``` QPdfPageNavigator* self ```
int32_t q_pdfpagenavigator_current_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocation)
///
/// ``` QPdfPageNavigator* self ```
QPointF* q_pdfpagenavigator_current_location(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoom)
///
/// ``` QPdfPageNavigator* self ```
double q_pdfpagenavigator_current_zoom(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailable)
///
/// ``` QPdfPageNavigator* self ```
bool q_pdfpagenavigator_back_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailable)
///
/// ``` QPdfPageNavigator* self ```
bool q_pdfpagenavigator_forward_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#clear)
///
/// ``` QPdfPageNavigator* self ```
void q_pdfpagenavigator_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jump)
///
/// ``` QPdfPageNavigator* self, QPdfLink* destination ```
void q_pdfpagenavigator_jump(void* self, void* destination);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jump)
///
/// ``` QPdfPageNavigator* self, int page, QPointF* location ```
void q_pdfpagenavigator_jump2(void* self, int page, void* location);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#update)
///
/// ``` QPdfPageNavigator* self, int page, QPointF* location, double zoom ```
void q_pdfpagenavigator_update(void* self, int page, void* location, double zoom);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forward)
///
/// ``` QPdfPageNavigator* self ```
void q_pdfpagenavigator_forward(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#back)
///
/// ``` QPdfPageNavigator* self ```
void q_pdfpagenavigator_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPageChanged)
///
/// ``` QPdfPageNavigator* self, int page ```
void q_pdfpagenavigator_current_page_changed(void* self, int page);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentPageChanged)
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, int) ```
void q_pdfpagenavigator_on_current_page_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocationChanged)
///
/// ``` QPdfPageNavigator* self, QPointF* location ```
void q_pdfpagenavigator_current_location_changed(void* self, void* location);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLocationChanged)
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, QPointF*) ```
void q_pdfpagenavigator_on_current_location_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoomChanged)
///
/// ``` QPdfPageNavigator* self, double zoom ```
void q_pdfpagenavigator_current_zoom_changed(void* self, double zoom);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentZoomChanged)
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, double) ```
void q_pdfpagenavigator_on_current_zoom_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailableChanged)
///
/// ``` QPdfPageNavigator* self, bool available ```
void q_pdfpagenavigator_back_available_changed(void* self, bool available);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#backAvailableChanged)
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, bool) ```
void q_pdfpagenavigator_on_back_available_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailableChanged)
///
/// ``` QPdfPageNavigator* self, bool available ```
void q_pdfpagenavigator_forward_available_changed(void* self, bool available);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#forwardAvailableChanged)
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, bool) ```
void q_pdfpagenavigator_on_forward_available_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jumped)
///
/// ``` QPdfPageNavigator* self, QPdfLink* current ```
void q_pdfpagenavigator_jumped(void* self, void* current);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jumped)
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, QPdfLink*) ```
void q_pdfpagenavigator_on_jumped(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
///
/// ``` QPdfPageNavigator* self ```
QPdfLink* q_pdfpagenavigator_current_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
///
/// Allows for overriding the related default method
///
/// ``` QPdfPageNavigator* self, QPdfLink* (*slot)() ```
void q_pdfpagenavigator_on_current_link(void* self, QPdfLink* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#currentLink)
///
/// Base class method implementation
///
/// ``` QPdfPageNavigator* self ```
QPdfLink* q_pdfpagenavigator_qbase_current_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pdfpagenavigator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pdfpagenavigator_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#jump)
///
/// ``` QPdfPageNavigator* self, int page, QPointF* location, double zoom ```
void q_pdfpagenavigator_jump3(void* self, int page, void* location, double zoom);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPdfPageNavigator* self ```
const char* q_pdfpagenavigator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPdfPageNavigator* self, char* name ```
void q_pdfpagenavigator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPdfPageNavigator* self ```
bool q_pdfpagenavigator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPdfPageNavigator* self ```
bool q_pdfpagenavigator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPdfPageNavigator* self ```
bool q_pdfpagenavigator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPdfPageNavigator* self ```
bool q_pdfpagenavigator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPdfPageNavigator* self, bool b ```
bool q_pdfpagenavigator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPdfPageNavigator* self ```
QThread* q_pdfpagenavigator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPdfPageNavigator* self, QThread* thread ```
bool q_pdfpagenavigator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfPageNavigator* self, int interval ```
int32_t q_pdfpagenavigator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPdfPageNavigator* self, int id ```
void q_pdfpagenavigator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPdfPageNavigator* self, enum Qt__TimerId id ```
void q_pdfpagenavigator_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPdfPageNavigator* self ```
libqt_list /* of QObject* */ q_pdfpagenavigator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPdfPageNavigator* self, QObject* parent ```
void q_pdfpagenavigator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPdfPageNavigator* self, QObject* filterObj ```
void q_pdfpagenavigator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPdfPageNavigator* self, QObject* obj ```
void q_pdfpagenavigator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pdfpagenavigator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfPageNavigator* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pdfpagenavigator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pdfpagenavigator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pdfpagenavigator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPdfPageNavigator* self ```
void q_pdfpagenavigator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPdfPageNavigator* self ```
void q_pdfpagenavigator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPdfPageNavigator* self, const char* name, QVariant* value ```
bool q_pdfpagenavigator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPdfPageNavigator* self, const char* name ```
QVariant* q_pdfpagenavigator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPdfPageNavigator* self ```
const char** q_pdfpagenavigator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfPageNavigator* self ```
QBindingStorage* q_pdfpagenavigator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfPageNavigator* self ```
const QBindingStorage* q_pdfpagenavigator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfPageNavigator* self ```
void q_pdfpagenavigator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*) ```
void q_pdfpagenavigator_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPdfPageNavigator* self ```
QObject* q_pdfpagenavigator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPdfPageNavigator* self, const char* classname ```
bool q_pdfpagenavigator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPdfPageNavigator* self ```
void q_pdfpagenavigator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPdfPageNavigator* self, QThread* thread, Disambiguated_t* param2 ```
bool q_pdfpagenavigator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfPageNavigator* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pdfpagenavigator_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfpagenavigator_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfPageNavigator* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfpagenavigator_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfPageNavigator* self, QObject* param1 ```
void q_pdfpagenavigator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, QObject*) ```
void q_pdfpagenavigator_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self, QEvent* event ```
bool q_pdfpagenavigator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, QEvent* event ```
bool q_pdfpagenavigator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, bool (*slot)(QPdfPageNavigator*, QEvent*) ```
void q_pdfpagenavigator_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self, QObject* watched, QEvent* event ```
bool q_pdfpagenavigator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, QObject* watched, QEvent* event ```
bool q_pdfpagenavigator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, bool (*slot)(QPdfPageNavigator*, QObject*, QEvent*) ```
void q_pdfpagenavigator_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self, QTimerEvent* event ```
void q_pdfpagenavigator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, QTimerEvent* event ```
void q_pdfpagenavigator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, QTimerEvent*) ```
void q_pdfpagenavigator_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self, QChildEvent* event ```
void q_pdfpagenavigator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, QChildEvent* event ```
void q_pdfpagenavigator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, QChildEvent*) ```
void q_pdfpagenavigator_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self, QEvent* event ```
void q_pdfpagenavigator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, QEvent* event ```
void q_pdfpagenavigator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, QEvent*) ```
void q_pdfpagenavigator_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self, QMetaMethod* signal ```
void q_pdfpagenavigator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, QMetaMethod* signal ```
void q_pdfpagenavigator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, QMetaMethod*) ```
void q_pdfpagenavigator_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self, QMetaMethod* signal ```
void q_pdfpagenavigator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, QMetaMethod* signal ```
void q_pdfpagenavigator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, QMetaMethod*) ```
void q_pdfpagenavigator_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self ```
QObject* q_pdfpagenavigator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self ```
QObject* q_pdfpagenavigator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, QObject* (*slot)() ```
void q_pdfpagenavigator_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self ```
int32_t q_pdfpagenavigator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self ```
int32_t q_pdfpagenavigator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, int32_t (*slot)() ```
void q_pdfpagenavigator_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self, const char* signal ```
int32_t q_pdfpagenavigator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, const char* signal ```
int32_t q_pdfpagenavigator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, int32_t (*slot)(QPdfPageNavigator*, const char*) ```
void q_pdfpagenavigator_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfPageNavigator* self, QMetaMethod* signal ```
bool q_pdfpagenavigator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, QMetaMethod* signal ```
bool q_pdfpagenavigator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfPageNavigator* self, bool (*slot)(QPdfPageNavigator*, QMetaMethod*) ```
void q_pdfpagenavigator_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPdfPageNavigator* self, void (*slot)(QPdfPageNavigator*, const char*) ```
void q_pdfpagenavigator_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfpagenavigator.html#dtor.QPdfPageNavigator)
///
/// Delete this object from C++ memory.
///
/// ``` QPdfPageNavigator* self ```
void q_pdfpagenavigator_delete(void* self);

#endif
