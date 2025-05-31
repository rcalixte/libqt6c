#pragma once
#ifndef SRCQT6C_LIBQMOVIE_H
#define SRCQT6C_LIBQMOVIE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqcolor.h"
#include "libqiodevice.h"
#include "libqimage.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpixmap.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qmovie.html

/// q_movie_new constructs a new QMovie object.
///
///
QMovie* q_movie_new();

/// q_movie_new2 constructs a new QMovie object.
///
/// ``` QIODevice* device ```
QMovie* q_movie_new2(void* device);

/// q_movie_new3 constructs a new QMovie object.
///
/// ``` const char* fileName ```
QMovie* q_movie_new3(const char* fileName);

/// q_movie_new4 constructs a new QMovie object.
///
/// ``` QObject* parent ```
QMovie* q_movie_new4(void* parent);

/// q_movie_new5 constructs a new QMovie object.
///
/// ``` QIODevice* device, const char* format ```
QMovie* q_movie_new5(void* device, const char* format);

/// q_movie_new6 constructs a new QMovie object.
///
/// ``` QIODevice* device, const char* format, QObject* parent ```
QMovie* q_movie_new6(void* device, const char* format, void* parent);

/// q_movie_new7 constructs a new QMovie object.
///
/// ``` const char* fileName, const char* format ```
QMovie* q_movie_new7(const char* fileName, const char* format);

/// q_movie_new8 constructs a new QMovie object.
///
/// ``` const char* fileName, const char* format, QObject* parent ```
QMovie* q_movie_new8(const char* fileName, const char* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMovie* self ```
const QMetaObject* q_movie_meta_object(void* self);

/// ``` QMovie* self, const char* param1 ```
void* q_movie_metacast(void* self, const char* param1);

/// ``` QMovie* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_movie_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMovie* self, int32_t (*slot)(QMovie*, enum QMetaObject__Call, int, void*) ```
void q_movie_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMovie* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_movie_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_movie_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#supportedFormats)
///
///
const char** q_movie_supported_formats();

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setDevice)
///
/// ``` QMovie* self, QIODevice* device ```
void q_movie_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#device)
///
/// ``` QMovie* self ```
QIODevice* q_movie_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setFileName)
///
/// ``` QMovie* self, const char* fileName ```
void q_movie_set_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#fileName)
///
/// ``` QMovie* self ```
const char* q_movie_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setFormat)
///
/// ``` QMovie* self, const char* format ```
void q_movie_set_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#format)
///
/// ``` QMovie* self ```
char* q_movie_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setBackgroundColor)
///
/// ``` QMovie* self, QColor* color ```
void q_movie_set_background_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#backgroundColor)
///
/// ``` QMovie* self ```
QColor* q_movie_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#state)
///
/// ``` QMovie* self ```
int64_t q_movie_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#frameRect)
///
/// ``` QMovie* self ```
QRect* q_movie_frame_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#currentImage)
///
/// ``` QMovie* self ```
QImage* q_movie_current_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#currentPixmap)
///
/// ``` QMovie* self ```
QPixmap* q_movie_current_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#isValid)
///
/// ``` QMovie* self ```
bool q_movie_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#lastError)
///
/// ``` QMovie* self ```
int64_t q_movie_last_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#lastErrorString)
///
/// ``` QMovie* self ```
const char* q_movie_last_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#jumpToFrame)
///
/// ``` QMovie* self, int frameNumber ```
bool q_movie_jump_to_frame(void* self, int frameNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#loopCount)
///
/// ``` QMovie* self ```
int32_t q_movie_loop_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#frameCount)
///
/// ``` QMovie* self ```
int32_t q_movie_frame_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#nextFrameDelay)
///
/// ``` QMovie* self ```
int32_t q_movie_next_frame_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#currentFrameNumber)
///
/// ``` QMovie* self ```
int32_t q_movie_current_frame_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#speed)
///
/// ``` QMovie* self ```
int32_t q_movie_speed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#scaledSize)
///
/// ``` QMovie* self ```
QSize* q_movie_scaled_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setScaledSize)
///
/// ``` QMovie* self, QSize* size ```
void q_movie_set_scaled_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#cacheMode)
///
/// ``` QMovie* self ```
int64_t q_movie_cache_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setCacheMode)
///
/// ``` QMovie* self, enum QMovie__CacheMode mode ```
void q_movie_set_cache_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#started)
///
/// ``` QMovie* self ```
void q_movie_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#started)
///
/// ``` QMovie* self, void (*slot)(QMovie*) ```
void q_movie_on_started(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#resized)
///
/// ``` QMovie* self, QSize* size ```
void q_movie_resized(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#resized)
///
/// ``` QMovie* self, void (*slot)(QMovie*, QSize*) ```
void q_movie_on_resized(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#updated)
///
/// ``` QMovie* self, QRect* rect ```
void q_movie_updated(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#updated)
///
/// ``` QMovie* self, void (*slot)(QMovie*, QRect*) ```
void q_movie_on_updated(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#stateChanged)
///
/// ``` QMovie* self, enum QMovie__MovieState state ```
void q_movie_state_changed(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#stateChanged)
///
/// ``` QMovie* self, void (*slot)(QMovie*, enum QMovie__MovieState) ```
void q_movie_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#error)
///
/// ``` QMovie* self, enum QImageReader__ImageReaderError errorVal ```
void q_movie_error(void* self, int64_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#error)
///
/// ``` QMovie* self, void (*slot)(QMovie*, enum QImageReader__ImageReaderError) ```
void q_movie_on_error(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#finished)
///
/// ``` QMovie* self ```
void q_movie_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#finished)
///
/// ``` QMovie* self, void (*slot)(QMovie*) ```
void q_movie_on_finished(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#frameChanged)
///
/// ``` QMovie* self, int frameNumber ```
void q_movie_frame_changed(void* self, int frameNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#frameChanged)
///
/// ``` QMovie* self, void (*slot)(QMovie*, int) ```
void q_movie_on_frame_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#start)
///
/// ``` QMovie* self ```
void q_movie_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#jumpToNextFrame)
///
/// ``` QMovie* self ```
bool q_movie_jump_to_next_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setPaused)
///
/// ``` QMovie* self, bool paused ```
void q_movie_set_paused(void* self, bool paused);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#stop)
///
/// ``` QMovie* self ```
void q_movie_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setSpeed)
///
/// ``` QMovie* self, int percentSpeed ```
void q_movie_set_speed(void* self, int percentSpeed);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_movie_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_movie_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMovie* self ```
const char* q_movie_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMovie* self, char* name ```
void q_movie_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMovie* self ```
bool q_movie_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMovie* self ```
bool q_movie_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMovie* self ```
bool q_movie_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMovie* self ```
bool q_movie_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMovie* self, bool b ```
bool q_movie_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMovie* self ```
QThread* q_movie_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMovie* self, QThread* thread ```
void q_movie_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMovie* self, int interval ```
int32_t q_movie_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMovie* self, int id ```
void q_movie_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMovie* self ```
const libqt_list /* of QObject* */ q_movie_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMovie* self, QObject* parent ```
void q_movie_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMovie* self, QObject* filterObj ```
void q_movie_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMovie* self, QObject* obj ```
void q_movie_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_movie_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMovie* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_movie_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_movie_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_movie_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMovie* self ```
void q_movie_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMovie* self ```
void q_movie_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMovie* self, const char* name, QVariant* value ```
bool q_movie_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMovie* self, const char* name ```
QVariant* q_movie_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMovie* self ```
const char** q_movie_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMovie* self ```
QBindingStorage* q_movie_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMovie* self ```
const QBindingStorage* q_movie_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMovie* self ```
void q_movie_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMovie* self, void (*slot)(QObject*) ```
void q_movie_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMovie* self ```
QObject* q_movie_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMovie* self, const char* classname ```
bool q_movie_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMovie* self ```
void q_movie_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMovie* self, int interval, enum Qt__TimerType timerType ```
int32_t q_movie_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_movie_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMovie* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_movie_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMovie* self, QObject* param1 ```
void q_movie_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMovie* self, void (*slot)(QObject*, QObject*) ```
void q_movie_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self, QEvent* event ```
bool q_movie_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self, QEvent* event ```
bool q_movie_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, bool (*slot)(QMovie*, QEvent*) ```
void q_movie_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self, QObject* watched, QEvent* event ```
bool q_movie_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self, QObject* watched, QEvent* event ```
bool q_movie_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, bool (*slot)(QMovie*, QObject*, QEvent*) ```
void q_movie_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self, QTimerEvent* event ```
void q_movie_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self, QTimerEvent* event ```
void q_movie_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, void (*slot)(QMovie*, QTimerEvent*) ```
void q_movie_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self, QChildEvent* event ```
void q_movie_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self, QChildEvent* event ```
void q_movie_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, void (*slot)(QMovie*, QChildEvent*) ```
void q_movie_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self, QEvent* event ```
void q_movie_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self, QEvent* event ```
void q_movie_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, void (*slot)(QMovie*, QEvent*) ```
void q_movie_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self, QMetaMethod* signal ```
void q_movie_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self, QMetaMethod* signal ```
void q_movie_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, void (*slot)(QMovie*, QMetaMethod*) ```
void q_movie_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self, QMetaMethod* signal ```
void q_movie_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self, QMetaMethod* signal ```
void q_movie_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, void (*slot)(QMovie*, QMetaMethod*) ```
void q_movie_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self ```
QObject* q_movie_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self ```
QObject* q_movie_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, QObject* (*slot)() ```
void q_movie_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self ```
int32_t q_movie_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self ```
int32_t q_movie_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, int32_t (*slot)() ```
void q_movie_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self, const char* signal ```
int32_t q_movie_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self, const char* signal ```
int32_t q_movie_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, int32_t (*slot)(QMovie*, const char*) ```
void q_movie_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMovie* self, QMetaMethod* signal ```
bool q_movie_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMovie* self, QMetaMethod* signal ```
bool q_movie_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMovie* self, bool (*slot)(QMovie*, QMetaMethod*) ```
void q_movie_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QMovie* self, void (*slot)(QObject*, const char*) ```
void q_movie_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#dtor.QMovie)
///
/// Delete this object from C++ memory.
///
/// ``` QMovie* self ```
void q_movie_delete(void* self);

/// https://doc.qt.io/qt-6/qmovie.html#types

typedef enum {
    QMOVIE_MOVIESTATE_NOTRUNNING = 0,
    QMOVIE_MOVIESTATE_PAUSED = 1,
    QMOVIE_MOVIESTATE_RUNNING = 2
} QMovie__MovieState;

typedef enum {
    QMOVIE_CACHEMODE_CACHENONE = 0,
    QMOVIE_CACHEMODE_CACHEALL = 1
} QMovie__CacheMode;

#endif
