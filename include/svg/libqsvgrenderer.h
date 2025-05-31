#pragma once
#ifndef SRC_SVGQT6C_LIBQSVGRENDERER_H
#define SRC_SVGQT6C_LIBQSVGRENDERER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpainter.h"
#include "../libqrect.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqtransform.h"
#include "../libqxmlstream.h"

/// https://doc.qt.io/qt-6/qsvgrenderer.html

/// q_svgrenderer_new constructs a new QSvgRenderer object.
///
///
QSvgRenderer* q_svgrenderer_new();

/// q_svgrenderer_new2 constructs a new QSvgRenderer object.
///
/// ``` const char* filename ```
QSvgRenderer* q_svgrenderer_new2(const char* filename);

/// q_svgrenderer_new3 constructs a new QSvgRenderer object.
///
/// ``` const char* contents ```
QSvgRenderer* q_svgrenderer_new3(const char* contents);

/// q_svgrenderer_new4 constructs a new QSvgRenderer object.
///
/// ``` QXmlStreamReader* contents ```
QSvgRenderer* q_svgrenderer_new4(void* contents);

/// q_svgrenderer_new5 constructs a new QSvgRenderer object.
///
/// ``` QObject* parent ```
QSvgRenderer* q_svgrenderer_new5(void* parent);

/// q_svgrenderer_new6 constructs a new QSvgRenderer object.
///
/// ``` const char* filename, QObject* parent ```
QSvgRenderer* q_svgrenderer_new6(const char* filename, void* parent);

/// q_svgrenderer_new7 constructs a new QSvgRenderer object.
///
/// ``` const char* contents, QObject* parent ```
QSvgRenderer* q_svgrenderer_new7(const char* contents, void* parent);

/// q_svgrenderer_new8 constructs a new QSvgRenderer object.
///
/// ``` QXmlStreamReader* contents, QObject* parent ```
QSvgRenderer* q_svgrenderer_new8(void* contents, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSvgRenderer* self ```
const QMetaObject* q_svgrenderer_meta_object(void* self);

/// ``` QSvgRenderer* self, const char* param1 ```
void* q_svgrenderer_metacast(void* self, const char* param1);

/// ``` QSvgRenderer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_svgrenderer_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSvgRenderer* self, int32_t (*slot)(QSvgRenderer*, enum QMetaObject__Call, int, void*) ```
void q_svgrenderer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSvgRenderer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_svgrenderer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_svgrenderer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#isValid)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#defaultSize)
///
/// ``` QSvgRenderer* self ```
QSize* q_svgrenderer_default_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBox)
///
/// ``` QSvgRenderer* self ```
QRect* q_svgrenderer_view_box(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBoxF)
///
/// ``` QSvgRenderer* self ```
QRectF* q_svgrenderer_view_box_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
///
/// ``` QSvgRenderer* self, QRect* viewbox ```
void q_svgrenderer_set_view_box(void* self, void* viewbox);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
///
/// ``` QSvgRenderer* self, QRectF* viewbox ```
void q_svgrenderer_set_view_box_with_viewbox(void* self, void* viewbox);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#aspectRatioMode)
///
/// ``` QSvgRenderer* self ```
int64_t q_svgrenderer_aspect_ratio_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setAspectRatioMode)
///
/// ``` QSvgRenderer* self, enum Qt__AspectRatioMode mode ```
void q_svgrenderer_set_aspect_ratio_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#animated)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_animated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#framesPerSecond)
///
/// ``` QSvgRenderer* self ```
int32_t q_svgrenderer_frames_per_second(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setFramesPerSecond)
///
/// ``` QSvgRenderer* self, int num ```
void q_svgrenderer_set_frames_per_second(void* self, int num);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#currentFrame)
///
/// ``` QSvgRenderer* self ```
int32_t q_svgrenderer_current_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setCurrentFrame)
///
/// ``` QSvgRenderer* self, int currentFrame ```
void q_svgrenderer_set_current_frame(void* self, int currentFrame);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#animationDuration)
///
/// ``` QSvgRenderer* self ```
int32_t q_svgrenderer_animation_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#boundsOnElement)
///
/// ``` QSvgRenderer* self, const char* id ```
QRectF* q_svgrenderer_bounds_on_element(void* self, const char* id);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#elementExists)
///
/// ``` QSvgRenderer* self, const char* id ```
bool q_svgrenderer_element_exists(void* self, const char* id);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#transformForElement)
///
/// ``` QSvgRenderer* self, const char* id ```
QTransform* q_svgrenderer_transform_for_element(void* self, const char* id);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
///
/// ``` QSvgRenderer* self, const char* filename ```
bool q_svgrenderer_load(void* self, const char* filename);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
///
/// ``` QSvgRenderer* self, const char* contents ```
bool q_svgrenderer_load_with_contents(void* self, const char* contents);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
///
/// ``` QSvgRenderer* self, QXmlStreamReader* contents ```
bool q_svgrenderer_load2(void* self, void* contents);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// ``` QSvgRenderer* self, QPainter* p ```
void q_svgrenderer_render(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// ``` QSvgRenderer* self, QPainter* p, QRectF* bounds ```
void q_svgrenderer_render2(void* self, void* p, void* bounds);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// ``` QSvgRenderer* self, QPainter* p, const char* elementId ```
void q_svgrenderer_render3(void* self, void* p, const char* elementId);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#repaintNeeded)
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_repaint_needed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#repaintNeeded)
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*) ```
void q_svgrenderer_on_repaint_needed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_svgrenderer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_svgrenderer_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// ``` QSvgRenderer* self, QPainter* p, const char* elementId, QRectF* bounds ```
void q_svgrenderer_render32(void* self, void* p, const char* elementId, void* bounds);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSvgRenderer* self ```
const char* q_svgrenderer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSvgRenderer* self, char* name ```
void q_svgrenderer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSvgRenderer* self, bool b ```
bool q_svgrenderer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSvgRenderer* self ```
QThread* q_svgrenderer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSvgRenderer* self, QThread* thread ```
void q_svgrenderer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSvgRenderer* self, int interval ```
int32_t q_svgrenderer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSvgRenderer* self, int id ```
void q_svgrenderer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSvgRenderer* self ```
const libqt_list /* of QObject* */ q_svgrenderer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSvgRenderer* self, QObject* parent ```
void q_svgrenderer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSvgRenderer* self, QObject* filterObj ```
void q_svgrenderer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSvgRenderer* self, QObject* obj ```
void q_svgrenderer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_svgrenderer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSvgRenderer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_svgrenderer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_svgrenderer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_svgrenderer_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSvgRenderer* self, const char* name, QVariant* value ```
bool q_svgrenderer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSvgRenderer* self, const char* name ```
QVariant* q_svgrenderer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSvgRenderer* self ```
const char** q_svgrenderer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSvgRenderer* self ```
QBindingStorage* q_svgrenderer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSvgRenderer* self ```
const QBindingStorage* q_svgrenderer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSvgRenderer* self, void (*slot)(QObject*) ```
void q_svgrenderer_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSvgRenderer* self ```
QObject* q_svgrenderer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSvgRenderer* self, const char* classname ```
bool q_svgrenderer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSvgRenderer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_svgrenderer_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_svgrenderer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSvgRenderer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_svgrenderer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSvgRenderer* self, QObject* param1 ```
void q_svgrenderer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSvgRenderer* self, void (*slot)(QObject*, QObject*) ```
void q_svgrenderer_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QEvent* event ```
bool q_svgrenderer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QEvent* event ```
bool q_svgrenderer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, bool (*slot)(QSvgRenderer*, QEvent*) ```
void q_svgrenderer_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QObject* watched, QEvent* event ```
bool q_svgrenderer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QObject* watched, QEvent* event ```
bool q_svgrenderer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, bool (*slot)(QSvgRenderer*, QObject*, QEvent*) ```
void q_svgrenderer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QTimerEvent* event ```
void q_svgrenderer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QTimerEvent* event ```
void q_svgrenderer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*, QTimerEvent*) ```
void q_svgrenderer_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QChildEvent* event ```
void q_svgrenderer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QChildEvent* event ```
void q_svgrenderer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*, QChildEvent*) ```
void q_svgrenderer_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QEvent* event ```
void q_svgrenderer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QEvent* event ```
void q_svgrenderer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*, QEvent*) ```
void q_svgrenderer_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
void q_svgrenderer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
void q_svgrenderer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*, QMetaMethod*) ```
void q_svgrenderer_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
void q_svgrenderer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
void q_svgrenderer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*, QMetaMethod*) ```
void q_svgrenderer_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self ```
QObject* q_svgrenderer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self ```
QObject* q_svgrenderer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, QObject* (*slot)() ```
void q_svgrenderer_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self ```
int32_t q_svgrenderer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self ```
int32_t q_svgrenderer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, int32_t (*slot)() ```
void q_svgrenderer_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, const char* signal ```
int32_t q_svgrenderer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, const char* signal ```
int32_t q_svgrenderer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, int32_t (*slot)(QSvgRenderer*, const char*) ```
void q_svgrenderer_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
bool q_svgrenderer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
bool q_svgrenderer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, bool (*slot)(QSvgRenderer*, QMetaMethod*) ```
void q_svgrenderer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSvgRenderer* self, void (*slot)(QObject*, const char*) ```
void q_svgrenderer_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#dtor.QSvgRenderer)
///
/// Delete this object from C++ memory.
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_delete(void* self);

#endif
