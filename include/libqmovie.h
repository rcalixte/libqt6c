#pragma once
#ifndef SRC_QT6C_LIBQMOVIE_H
#define SRC_QT6C_LIBQMOVIE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html)

/// q_movie_new constructs a new QMovie object.
///
QMovie* q_movie_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html)

/// q_movie_new2 constructs a new QMovie object.
///
/// @param device QIODevice*
///
QMovie* q_movie_new2(void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html)

/// q_movie_new3 constructs a new QMovie object.
///
/// @param fileName const char*
///
QMovie* q_movie_new3(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html)

/// q_movie_new4 constructs a new QMovie object.
///
/// @param parent QObject*
///
QMovie* q_movie_new4(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html)

/// q_movie_new5 constructs a new QMovie object.
///
/// @param device QIODevice*
/// @param format char*
///
QMovie* q_movie_new5(void* device, char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html)

/// q_movie_new6 constructs a new QMovie object.
///
/// @param device QIODevice*
/// @param format char*
/// @param parent QObject*
///
QMovie* q_movie_new6(void* device, char* format, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html)

/// q_movie_new7 constructs a new QMovie object.
///
/// @param fileName const char*
/// @param format char*
///
QMovie* q_movie_new7(const char* fileName, char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html)

/// q_movie_new8 constructs a new QMovie object.
///
/// @param fileName const char*
/// @param format char*
/// @param parent QObject*
///
QMovie* q_movie_new8(const char* fileName, char* format, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMovie*
///
const QMetaObject* q_movie_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QMovie*
/// @param callback const QMetaObject* func()
///
void q_movie_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_movie_super_meta_object` instead
///
#define q_movie_qbase_meta_object q_movie_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QMovie*
///
const QMetaObject* q_movie_super_meta_object(void* self);

/// @param self QMovie*
/// @param param1 const char*
///
void* q_movie_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QMovie*
/// @param callback void* func(QMovie* self, const char* param1)
///
void q_movie_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_movie_super_metacast` instead
///
#define q_movie_qbase_metacast q_movie_super_metacast

/// Base class method implementation
///
/// @param self QMovie*
/// @param param1 const char*
///
void* q_movie_super_metacast(void* self, const char* param1);

/// @param self QMovie*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_movie_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMovie*
/// @param callback int32_t func(QMovie* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_movie_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_movie_super_metacall` instead
///
#define q_movie_qbase_metacall q_movie_super_metacall

/// Base class method implementation
///
/// @param self QMovie*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_movie_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_movie_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#supportedFormats)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_movie_supported_formats();

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setDevice)
///
/// @param self QMovie*
/// @param device QIODevice*
///
void q_movie_set_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#device)
///
/// @param self QMovie*
///
QIODevice* q_movie_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setFileName)
///
/// @param self QMovie*
/// @param fileName const char*
///
void q_movie_set_file_name(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMovie*
///
const char* q_movie_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setFormat)
///
/// @param self QMovie*
/// @param format char*
///
void q_movie_set_format(void* self, char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#format)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMovie*
///
char* q_movie_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setBackgroundColor)
///
/// @param self QMovie*
/// @param color QColor*
///
void q_movie_set_background_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#backgroundColor)
///
/// @param self QMovie*
///
QColor* q_movie_background_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#state)
///
/// @param self QMovie*
///
/// @return enum QMovie__MovieState
///
int32_t q_movie_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#frameRect)
///
/// @param self QMovie*
///
QRect* q_movie_frame_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#currentImage)
///
/// @param self QMovie*
///
QImage* q_movie_current_image(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#currentPixmap)
///
/// @param self QMovie*
///
QPixmap* q_movie_current_pixmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#isValid)
///
/// @param self QMovie*
///
bool q_movie_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#lastError)
///
/// @param self QMovie*
///
/// @return enum QImageReader__ImageReaderError
///
int32_t q_movie_last_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#lastErrorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMovie*
///
const char* q_movie_last_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#jumpToFrame)
///
/// @param self QMovie*
/// @param frameNumber int
///
bool q_movie_jump_to_frame(void* self, int frameNumber);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#loopCount)
///
/// @param self QMovie*
///
int32_t q_movie_loop_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#frameCount)
///
/// @param self QMovie*
///
int32_t q_movie_frame_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#nextFrameDelay)
///
/// @param self QMovie*
///
int32_t q_movie_next_frame_delay(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#currentFrameNumber)
///
/// @param self QMovie*
///
int32_t q_movie_current_frame_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#speed)
///
/// @param self QMovie*
///
int32_t q_movie_speed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#scaledSize)
///
/// @param self QMovie*
///
QSize* q_movie_scaled_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setScaledSize)
///
/// @param self QMovie*
/// @param size QSize*
///
void q_movie_set_scaled_size(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#cacheMode)
///
/// @param self QMovie*
///
/// @return enum QMovie__CacheMode
///
int32_t q_movie_cache_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setCacheMode)
///
/// @param self QMovie*
/// @param mode enum QMovie__CacheMode
///
void q_movie_set_cache_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#started)
///
/// @param self QMovie*
///
void q_movie_started(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#started)
///
/// @param self QMovie*
/// @param callback void func(QMovie* self)
///
void q_movie_on_started(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#resized)
///
/// @param self QMovie*
/// @param size QSize*
///
void q_movie_resized(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#resized)
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, QSize* size)
///
void q_movie_on_resized(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#updated)
///
/// @param self QMovie*
/// @param rect QRect*
///
void q_movie_updated(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#updated)
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, QRect* rect)
///
void q_movie_on_updated(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#stateChanged)
///
/// @param self QMovie*
/// @param state enum QMovie__MovieState
///
void q_movie_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#stateChanged)
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, enum QMovie__MovieState state)
///
void q_movie_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#error)
///
/// @param self QMovie*
/// @param error enum QImageReader__ImageReaderError
///
void q_movie_error(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#error)
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, enum QImageReader__ImageReaderError error)
///
void q_movie_on_error(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#finished)
///
/// @param self QMovie*
///
void q_movie_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#finished)
///
/// @param self QMovie*
/// @param callback void func(QMovie* self)
///
void q_movie_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#frameChanged)
///
/// @param self QMovie*
/// @param frameNumber int
///
void q_movie_frame_changed(void* self, int frameNumber);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#frameChanged)
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, int frameNumber)
///
void q_movie_on_frame_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#start)
///
/// @param self QMovie*
///
void q_movie_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#jumpToNextFrame)
///
/// @param self QMovie*
///
bool q_movie_jump_to_next_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setPaused)
///
/// @param self QMovie*
/// @param paused bool
///
void q_movie_set_paused(void* self, bool paused);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#stop)
///
/// @param self QMovie*
///
void q_movie_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#setSpeed)
///
/// @param self QMovie*
/// @param percentSpeed int
///
void q_movie_set_speed(void* self, int percentSpeed);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_movie_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_movie_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMovie*
///
const char* q_movie_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMovie*
/// @param name const char*
///
void q_movie_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMovie*
///
bool q_movie_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMovie*
///
bool q_movie_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMovie*
///
bool q_movie_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMovie*
///
bool q_movie_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMovie*
/// @param b bool
///
bool q_movie_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMovie*
///
QThread* q_movie_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMovie*
/// @param thread QThread*
///
bool q_movie_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMovie*
/// @param interval int
///
int32_t q_movie_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMovie*
/// @param time int64_t of nanoseconds
///
int32_t q_movie_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMovie*
/// @param id int
///
void q_movie_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMovie*
/// @param id enum Qt__TimerId
///
void q_movie_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMovie*
///
/// @return libqt_list of QObject*
///
libqt_list q_movie_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QMovie*
/// @param parent QObject*
///
void q_movie_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMovie*
/// @param filterObj QObject*
///
void q_movie_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMovie*
/// @param obj QObject*
///
void q_movie_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_movie_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_movie_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMovie*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_movie_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_movie_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_movie_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMovie*
///
bool q_movie_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMovie*
/// @param receiver QObject*
///
bool q_movie_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_movie_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMovie*
///
void q_movie_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMovie*
///
void q_movie_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMovie*
/// @param name const char*
/// @param value QVariant*
///
bool q_movie_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMovie*
/// @param name const char*
///
QVariant* q_movie_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMovie*
///
const char** q_movie_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMovie*
///
QBindingStorage* q_movie_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMovie*
///
const QBindingStorage* q_movie_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMovie*
///
void q_movie_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMovie*
/// @param callback void func(QMovie* self)
///
void q_movie_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMovie*
///
QObject* q_movie_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMovie*
/// @param classname const char*
///
bool q_movie_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMovie*
///
void q_movie_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMovie*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_movie_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMovie*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_movie_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_movie_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_movie_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMovie*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_movie_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMovie*
/// @param signal const char*
///
bool q_movie_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMovie*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_movie_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMovie*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_movie_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMovie*
/// @param receiver QObject*
/// @param member const char*
///
bool q_movie_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMovie*
/// @param param1 QObject*
///
void q_movie_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, QObject* param1)
///
void q_movie_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param event QEvent*
///
bool q_movie_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_movie_super_event` instead
///
#define q_movie_qbase_event q_movie_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param event QEvent*
///
bool q_movie_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback bool func(QMovie* self, QEvent* event)
///
void q_movie_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_movie_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_movie_super_event_filter` instead
///
#define q_movie_qbase_event_filter q_movie_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_movie_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback bool func(QMovie* self, QObject* watched, QEvent* event)
///
void q_movie_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param event QTimerEvent*
///
void q_movie_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_movie_super_timer_event` instead
///
#define q_movie_qbase_timer_event q_movie_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param event QTimerEvent*
///
void q_movie_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, QTimerEvent* event)
///
void q_movie_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param event QChildEvent*
///
void q_movie_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_movie_super_child_event` instead
///
#define q_movie_qbase_child_event q_movie_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param event QChildEvent*
///
void q_movie_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, QChildEvent* event)
///
void q_movie_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param event QEvent*
///
void q_movie_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_movie_super_custom_event` instead
///
#define q_movie_qbase_custom_event q_movie_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param event QEvent*
///
void q_movie_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, QEvent* event)
///
void q_movie_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
///
void q_movie_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_movie_super_connect_notify` instead
///
#define q_movie_qbase_connect_notify q_movie_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
///
void q_movie_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, QMetaMethod* signal)
///
void q_movie_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
///
void q_movie_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_movie_super_disconnect_notify` instead
///
#define q_movie_qbase_disconnect_notify q_movie_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
///
void q_movie_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, QMetaMethod* signal)
///
void q_movie_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
///
QObject* q_movie_sender(void* self);

/// @warning DEPRECATED: Use `q_movie_super_sender` instead
///
#define q_movie_qbase_sender q_movie_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
///
QObject* q_movie_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback QObject* func()
///
void q_movie_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
///
int32_t q_movie_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_movie_super_sender_signal_index` instead
///
#define q_movie_qbase_sender_signal_index q_movie_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
///
int32_t q_movie_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback int32_t func()
///
void q_movie_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param signal const char*
///
int32_t q_movie_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_movie_super_receivers` instead
///
#define q_movie_qbase_receivers q_movie_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param signal const char*
///
int32_t q_movie_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback int32_t func(QMovie* self, const char* signal)
///
void q_movie_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
///
bool q_movie_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_movie_super_is_signal_connected` instead
///
#define q_movie_qbase_is_signal_connected q_movie_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMovie*
/// @param signal QMetaMethod*
///
bool q_movie_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMovie*
/// @param callback bool func(QMovie* self, QMetaMethod* signal)
///
void q_movie_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMovie*
/// @param callback void func(QMovie* self, const char* objectName)
///
void q_movie_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#dtor.QMovie)
///
/// Delete this object from C++ memory.
///
/// @param self QMovie*
///
void q_movie_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#public-types)

typedef enum {
    QMOVIE_MOVIESTATE_NOTRUNNING = 0,
    QMOVIE_MOVIESTATE_PAUSED = 1,
    QMOVIE_MOVIESTATE_RUNNING = 2
} QMovie__MovieState;

/// [Upstream resources](https://doc.qt.io/qt-6/qmovie.html#public-types)

typedef enum {
    QMOVIE_CACHEMODE_CACHENONE = 0,
    QMOVIE_CACHEMODE_CACHEALL = 1
} QMovie__CacheMode;

#endif
