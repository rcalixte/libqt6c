#pragma once
#ifndef SRCQT6C_LIBQMOVIE_H
#define SRCQT6C_LIBQMOVIE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qmovie.html

/// q_movie_new constructs a new QMovie object.
///
QMovie* q_movie_new();

/// q_movie_new2 constructs a new QMovie object.
///
/// @param device QIODevice*
QMovie* q_movie_new2(void* device);

/// q_movie_new3 constructs a new QMovie object.
///
/// @param fileName const char*
QMovie* q_movie_new3(const char* fileName);

/// q_movie_new4 constructs a new QMovie object.
///
/// @param parent QObject*
QMovie* q_movie_new4(void* parent);

/// q_movie_new5 constructs a new QMovie object.
///
/// @param device QIODevice*
/// @param format const char*
QMovie* q_movie_new5(void* device, const char* format);

/// q_movie_new6 constructs a new QMovie object.
///
/// @param device QIODevice*
/// @param format const char*
/// @param parent QObject*
QMovie* q_movie_new6(void* device, const char* format, void* parent);

/// q_movie_new7 constructs a new QMovie object.
///
/// @param fileName const char*
/// @param format const char*
QMovie* q_movie_new7(const char* fileName, const char* format);

/// q_movie_new8 constructs a new QMovie object.
///
/// @param fileName const char*
/// @param format const char*
/// @param parent QObject*
QMovie* q_movie_new8(const char* fileName, const char* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMovie*
const QMetaObject* q_movie_meta_object(void* self);

/// @param self QMovie*
/// @param param1 const char*
void* q_movie_metacast(void* self, const char* param1);

/// @param self QMovie*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_movie_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMovie*
/// @param callback int32_t fn(QMovie*, enum QMetaObject__Call, int, void*)
void q_movie_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QMovie*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_movie_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_movie_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#supportedFormats)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_movie_supported_formats();

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setDevice)
///
/// @param self QMovie*
/// @param device QIODevice*
void q_movie_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#device)
///
/// @param self QMovie*
QIODevice* q_movie_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setFileName)
///
/// @param self QMovie*
/// @param fileName const char*
void q_movie_set_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMovie*
const char* q_movie_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setFormat)
///
/// @param self QMovie*
/// @param format const char*
void q_movie_set_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#format)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMovie*
char* q_movie_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setBackgroundColor)
///
/// @param self QMovie*
/// @param color QColor*
void q_movie_set_background_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#backgroundColor)
///
/// @param self QMovie*
QColor* q_movie_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#state)
///
/// @param self QMovie*
///
/// @return enum QMovie__MovieState
int32_t q_movie_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#frameRect)
///
/// @param self QMovie*
QRect* q_movie_frame_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#currentImage)
///
/// @param self QMovie*
QImage* q_movie_current_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#currentPixmap)
///
/// @param self QMovie*
QPixmap* q_movie_current_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#isValid)
///
/// @param self QMovie*
bool q_movie_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#lastError)
///
/// @param self QMovie*
///
/// @return enum QImageReader__ImageReaderError
int32_t q_movie_last_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#lastErrorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMovie*
const char* q_movie_last_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#jumpToFrame)
///
/// @param self QMovie*
/// @param frameNumber int
bool q_movie_jump_to_frame(void* self, int frameNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#loopCount)
///
/// @param self QMovie*
int32_t q_movie_loop_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#frameCount)
///
/// @param self QMovie*
int32_t q_movie_frame_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#nextFrameDelay)
///
/// @param self QMovie*
int32_t q_movie_next_frame_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#currentFrameNumber)
///
/// @param self QMovie*
int32_t q_movie_current_frame_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#speed)
///
/// @param self QMovie*
int32_t q_movie_speed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#scaledSize)
///
/// @param self QMovie*
QSize* q_movie_scaled_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setScaledSize)
///
/// @param self QMovie*
/// @param size QSize*
void q_movie_set_scaled_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#cacheMode)
///
/// @param self QMovie*
///
/// @return enum QMovie__CacheMode
int32_t q_movie_cache_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setCacheMode)
///
/// @param self QMovie*
/// @param mode enum QMovie__CacheMode
void q_movie_set_cache_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#started)
///
/// @param self QMovie*
void q_movie_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#started)
///
/// @param self QMovie*
/// @param callback void fn(QMovie*)
void q_movie_on_started(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#resized)
///
/// @param self QMovie*
/// @param size QSize*
void q_movie_resized(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#resized)
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, QSize*)
void q_movie_on_resized(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#updated)
///
/// @param self QMovie*
/// @param rect QRect*
void q_movie_updated(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#updated)
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, QRect*)
void q_movie_on_updated(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#stateChanged)
///
/// @param self QMovie*
/// @param state enum QMovie__MovieState
void q_movie_state_changed(void* self, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#stateChanged)
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, enum QMovie__MovieState)
void q_movie_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#error)
///
/// @param self QMovie*
/// @param errorVal enum QImageReader__ImageReaderError
void q_movie_error(void* self, int32_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#error)
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, enum QImageReader__ImageReaderError)
void q_movie_on_error(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#finished)
///
/// @param self QMovie*
void q_movie_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#finished)
///
/// @param self QMovie*
/// @param callback void fn(QMovie*)
void q_movie_on_finished(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#frameChanged)
///
/// @param self QMovie*
/// @param frameNumber int
void q_movie_frame_changed(void* self, int frameNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#frameChanged)
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, int)
void q_movie_on_frame_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#start)
///
/// @param self QMovie*
void q_movie_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#jumpToNextFrame)
///
/// @param self QMovie*
bool q_movie_jump_to_next_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setPaused)
///
/// @param self QMovie*
/// @param paused bool
void q_movie_set_paused(void* self, bool paused);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#stop)
///
/// @param self QMovie*
void q_movie_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#setSpeed)
///
/// @param self QMovie*
/// @param percentSpeed int
void q_movie_set_speed(void* self, int percentSpeed);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_movie_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_movie_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMovie*
const char* q_movie_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMovie*
/// @param name char*
void q_movie_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMovie*
bool q_movie_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMovie*
bool q_movie_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMovie*
bool q_movie_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMovie*
bool q_movie_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMovie*
/// @param b bool
bool q_movie_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMovie*
QThread* q_movie_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMovie*
/// @param thread QThread*
bool q_movie_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMovie*
/// @param interval int
int32_t q_movie_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMovie*
/// @param id int
void q_movie_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMovie*
/// @param id enum Qt__TimerId
void q_movie_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMovie*
libqt_list /* of QObject* */ q_movie_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QMovie*
/// @param parent QObject*
void q_movie_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMovie*
/// @param filterObj QObject*
void q_movie_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMovie*
/// @param obj QObject*
void q_movie_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_movie_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMovie*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_movie_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_movie_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_movie_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMovie*
void q_movie_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMovie*
void q_movie_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMovie*
/// @param name const char*
/// @param value QVariant*
bool q_movie_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMovie*
/// @param name const char*
QVariant* q_movie_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMovie*
const char** q_movie_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMovie*
QBindingStorage* q_movie_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMovie*
const QBindingStorage* q_movie_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMovie*
void q_movie_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMovie*
/// @param callback void fn(QMovie*)
void q_movie_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMovie*
QObject* q_movie_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMovie*
/// @param classname const char*
bool q_movie_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMovie*
void q_movie_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMovie*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_movie_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMovie*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_movie_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_movie_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMovie*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_movie_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMovie*
/// @param param1 QObject*
void q_movie_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, QObject*)
void q_movie_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param event QEvent*
bool q_movie_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param event QEvent*
bool q_movie_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback bool fn(QMovie*, QEvent*)
void q_movie_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param watched QObject*
/// @param event QEvent*
bool q_movie_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param watched QObject*
/// @param event QEvent*
bool q_movie_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback bool fn(QMovie*, QObject*, QEvent*)
void q_movie_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param event QTimerEvent*
void q_movie_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param event QTimerEvent*
void q_movie_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, QTimerEvent*)
void q_movie_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param event QChildEvent*
void q_movie_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param event QChildEvent*
void q_movie_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, QChildEvent*)
void q_movie_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param event QEvent*
void q_movie_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param event QEvent*
void q_movie_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, QEvent*)
void q_movie_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
void q_movie_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
void q_movie_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, QMetaMethod*)
void q_movie_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
void q_movie_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
void q_movie_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, QMetaMethod*)
void q_movie_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
QObject* q_movie_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
QObject* q_movie_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback QObject* fn()
void q_movie_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
int32_t q_movie_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
int32_t q_movie_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback int32_t fn()
void q_movie_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param signal const char*
int32_t q_movie_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param signal const char*
int32_t q_movie_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback int32_t fn(QMovie*, const char*)
void q_movie_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
bool q_movie_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
bool q_movie_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback bool fn(QMovie*, QMetaMethod*)
void q_movie_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMovie*
/// @param callback void fn(QMovie*, const char*)
void q_movie_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmovie.html#dtor.QMovie)
///
/// Delete this object from C++ memory.
///
/// @param self QMovie*
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
