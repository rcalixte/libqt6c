#pragma once
#ifndef SRC_SVG_QT6C_LIBQSVGRENDERER_H
#define SRC_SVG_QT6C_LIBQSVGRENDERER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html)

/// q_svgrenderer_new constructs a new QSvgRenderer object.
///
QSvgRenderer* q_svgrenderer_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html)

/// q_svgrenderer_new2 constructs a new QSvgRenderer object.
///
/// @param filename const char*
///
QSvgRenderer* q_svgrenderer_new2(const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html)

/// q_svgrenderer_new3 constructs a new QSvgRenderer object.
///
/// @param contents char*
///
QSvgRenderer* q_svgrenderer_new3(char* contents);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html)

/// q_svgrenderer_new4 constructs a new QSvgRenderer object.
///
/// @param contents QXmlStreamReader*
///
QSvgRenderer* q_svgrenderer_new4(void* contents);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html)

/// q_svgrenderer_new5 constructs a new QSvgRenderer object.
///
/// @param parent QObject*
///
QSvgRenderer* q_svgrenderer_new5(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html)

/// q_svgrenderer_new6 constructs a new QSvgRenderer object.
///
/// @param filename const char*
/// @param parent QObject*
///
QSvgRenderer* q_svgrenderer_new6(const char* filename, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html)

/// q_svgrenderer_new7 constructs a new QSvgRenderer object.
///
/// @param contents char*
/// @param parent QObject*
///
QSvgRenderer* q_svgrenderer_new7(char* contents, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html)

/// q_svgrenderer_new8 constructs a new QSvgRenderer object.
///
/// @param contents QXmlStreamReader*
/// @param parent QObject*
///
QSvgRenderer* q_svgrenderer_new8(void* contents, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSvgRenderer*
///
const QMetaObject* q_svgrenderer_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSvgRenderer*
/// @param callback const QMetaObject* func()
///
void q_svgrenderer_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_svgrenderer_super_meta_object` instead
///
#define q_svgrenderer_qbase_meta_object q_svgrenderer_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QSvgRenderer*
///
const QMetaObject* q_svgrenderer_super_meta_object(void* self);

/// @param self QSvgRenderer*
/// @param param1 const char*
///
void* q_svgrenderer_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSvgRenderer*
/// @param callback void* func(QSvgRenderer* self, const char* param1)
///
void q_svgrenderer_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_svgrenderer_super_metacast` instead
///
#define q_svgrenderer_qbase_metacast q_svgrenderer_super_metacast

/// Base class method implementation
///
/// @param self QSvgRenderer*
/// @param param1 const char*
///
void* q_svgrenderer_super_metacast(void* self, const char* param1);

/// @param self QSvgRenderer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_svgrenderer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSvgRenderer*
/// @param callback int32_t func(QSvgRenderer* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_svgrenderer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_svgrenderer_super_metacall` instead
///
#define q_svgrenderer_qbase_metacall q_svgrenderer_super_metacall

/// Base class method implementation
///
/// @param self QSvgRenderer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_svgrenderer_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_svgrenderer_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#isValid)
///
/// @param self QSvgRenderer*
///
bool q_svgrenderer_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#defaultSize)
///
/// @param self QSvgRenderer*
///
QSize* q_svgrenderer_default_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBox)
///
/// @param self QSvgRenderer*
///
QRect* q_svgrenderer_view_box(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBoxF)
///
/// @param self QSvgRenderer*
///
QRectF* q_svgrenderer_view_box_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
///
/// @param self QSvgRenderer*
/// @param viewbox QRect*
///
void q_svgrenderer_set_view_box(void* self, void* viewbox);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
///
/// @param self QSvgRenderer*
/// @param viewbox QRectF*
///
void q_svgrenderer_set_view_box2(void* self, void* viewbox);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#aspectRatioMode)
///
/// @param self QSvgRenderer*
///
/// @return enum Qt__AspectRatioMode
///
int32_t q_svgrenderer_aspect_ratio_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setAspectRatioMode)
///
/// @param self QSvgRenderer*
/// @param mode enum Qt__AspectRatioMode
///
void q_svgrenderer_set_aspect_ratio_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#options)
///
/// @param self QSvgRenderer*
///
/// @return flag of enum QtSvg__Option
///
uint32_t q_svgrenderer_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setOptions)
///
/// @param self QSvgRenderer*
/// @param flags flag of enum QtSvg__Option
///
void q_svgrenderer_set_options(void* self, uint32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#animated)
///
/// @param self QSvgRenderer*
///
bool q_svgrenderer_animated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#framesPerSecond)
///
/// @param self QSvgRenderer*
///
int32_t q_svgrenderer_frames_per_second(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setFramesPerSecond)
///
/// @param self QSvgRenderer*
/// @param num int
///
void q_svgrenderer_set_frames_per_second(void* self, int num);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#currentFrame)
///
/// @param self QSvgRenderer*
///
int32_t q_svgrenderer_current_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setCurrentFrame)
///
/// @param self QSvgRenderer*
/// @param currentFrame int
///
void q_svgrenderer_set_current_frame(void* self, int currentFrame);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#animationDuration)
///
/// @param self QSvgRenderer*
///
int32_t q_svgrenderer_animation_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#isAnimationEnabled)
///
/// @param self QSvgRenderer*
///
bool q_svgrenderer_is_animation_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setAnimationEnabled)
///
/// @param self QSvgRenderer*
/// @param enable bool
///
void q_svgrenderer_set_animation_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#boundsOnElement)
///
/// @param self QSvgRenderer*
/// @param id const char*
///
QRectF* q_svgrenderer_bounds_on_element(void* self, const char* id);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#elementExists)
///
/// @param self QSvgRenderer*
/// @param id const char*
///
bool q_svgrenderer_element_exists(void* self, const char* id);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#transformForElement)
///
/// @param self QSvgRenderer*
/// @param id const char*
///
QTransform* q_svgrenderer_transform_for_element(void* self, const char* id);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setDefaultOptions)
///
/// @param flags flag of enum QtSvg__Option
///
void q_svgrenderer_set_default_options(uint32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
///
/// @param self QSvgRenderer*
/// @param filename const char*
///
bool q_svgrenderer_load(void* self, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
///
/// @param self QSvgRenderer*
/// @param contents char*
///
bool q_svgrenderer_load2(void* self, char* contents);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
///
/// @param self QSvgRenderer*
/// @param contents QXmlStreamReader*
///
bool q_svgrenderer_load3(void* self, void* contents);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// @param self QSvgRenderer*
/// @param p QPainter*
///
void q_svgrenderer_render(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// @param self QSvgRenderer*
/// @param p QPainter*
/// @param bounds QRectF*
///
void q_svgrenderer_render2(void* self, void* p, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// @param self QSvgRenderer*
/// @param p QPainter*
/// @param elementId const char*
///
void q_svgrenderer_render3(void* self, void* p, const char* elementId);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#repaintNeeded)
///
/// @param self QSvgRenderer*
///
void q_svgrenderer_repaint_needed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#repaintNeeded)
///
/// @param self QSvgRenderer*
/// @param callback void func(QSvgRenderer* self)
///
void q_svgrenderer_on_repaint_needed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_svgrenderer_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_svgrenderer_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// @param self QSvgRenderer*
/// @param p QPainter*
/// @param elementId const char*
/// @param bounds QRectF*
///
void q_svgrenderer_render32(void* self, void* p, const char* elementId, void* bounds);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSvgRenderer*
///
const char* q_svgrenderer_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSvgRenderer*
/// @param name const char*
///
void q_svgrenderer_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSvgRenderer*
///
bool q_svgrenderer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSvgRenderer*
///
bool q_svgrenderer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSvgRenderer*
///
bool q_svgrenderer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSvgRenderer*
///
bool q_svgrenderer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSvgRenderer*
/// @param b bool
///
bool q_svgrenderer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSvgRenderer*
///
QThread* q_svgrenderer_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSvgRenderer*
/// @param thread QThread*
///
bool q_svgrenderer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSvgRenderer*
/// @param interval int
///
int32_t q_svgrenderer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSvgRenderer*
/// @param time int64_t of nanoseconds
///
int32_t q_svgrenderer_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSvgRenderer*
/// @param id int
///
void q_svgrenderer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSvgRenderer*
/// @param id enum Qt__TimerId
///
void q_svgrenderer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSvgRenderer*
///
/// @return libqt_list of QObject*
///
libqt_list q_svgrenderer_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSvgRenderer*
/// @param parent QObject*
///
void q_svgrenderer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSvgRenderer*
/// @param filterObj QObject*
///
void q_svgrenderer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSvgRenderer*
/// @param obj QObject*
///
void q_svgrenderer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_svgrenderer_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_svgrenderer_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSvgRenderer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_svgrenderer_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_svgrenderer_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_svgrenderer_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSvgRenderer*
///
bool q_svgrenderer_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSvgRenderer*
/// @param receiver QObject*
///
bool q_svgrenderer_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_svgrenderer_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSvgRenderer*
///
void q_svgrenderer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSvgRenderer*
///
void q_svgrenderer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSvgRenderer*
/// @param name const char*
/// @param value QVariant*
///
bool q_svgrenderer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSvgRenderer*
/// @param name const char*
///
QVariant* q_svgrenderer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSvgRenderer*
///
const char** q_svgrenderer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSvgRenderer*
///
QBindingStorage* q_svgrenderer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSvgRenderer*
///
const QBindingStorage* q_svgrenderer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSvgRenderer*
///
void q_svgrenderer_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSvgRenderer*
/// @param callback void func(QSvgRenderer* self)
///
void q_svgrenderer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSvgRenderer*
///
QObject* q_svgrenderer_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSvgRenderer*
/// @param classname const char*
///
bool q_svgrenderer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSvgRenderer*
///
void q_svgrenderer_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSvgRenderer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_svgrenderer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSvgRenderer*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_svgrenderer_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_svgrenderer_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_svgrenderer_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSvgRenderer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_svgrenderer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSvgRenderer*
/// @param signal const char*
///
bool q_svgrenderer_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSvgRenderer*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_svgrenderer_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSvgRenderer*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_svgrenderer_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSvgRenderer*
/// @param receiver QObject*
/// @param member const char*
///
bool q_svgrenderer_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSvgRenderer*
/// @param param1 QObject*
///
void q_svgrenderer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSvgRenderer*
/// @param callback void func(QSvgRenderer* self, QObject* param1)
///
void q_svgrenderer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
/// @param event QEvent*
///
bool q_svgrenderer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_svgrenderer_super_event` instead
///
#define q_svgrenderer_qbase_event q_svgrenderer_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param event QEvent*
///
bool q_svgrenderer_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback bool func(QSvgRenderer* self, QEvent* event)
///
void q_svgrenderer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_svgrenderer_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_svgrenderer_super_event_filter` instead
///
#define q_svgrenderer_qbase_event_filter q_svgrenderer_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_svgrenderer_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback bool func(QSvgRenderer* self, QObject* watched, QEvent* event)
///
void q_svgrenderer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
/// @param event QTimerEvent*
///
void q_svgrenderer_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_svgrenderer_super_timer_event` instead
///
#define q_svgrenderer_qbase_timer_event q_svgrenderer_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param event QTimerEvent*
///
void q_svgrenderer_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback void func(QSvgRenderer* self, QTimerEvent* event)
///
void q_svgrenderer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
/// @param event QChildEvent*
///
void q_svgrenderer_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_svgrenderer_super_child_event` instead
///
#define q_svgrenderer_qbase_child_event q_svgrenderer_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param event QChildEvent*
///
void q_svgrenderer_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback void func(QSvgRenderer* self, QChildEvent* event)
///
void q_svgrenderer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
/// @param event QEvent*
///
void q_svgrenderer_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_svgrenderer_super_custom_event` instead
///
#define q_svgrenderer_qbase_custom_event q_svgrenderer_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param event QEvent*
///
void q_svgrenderer_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback void func(QSvgRenderer* self, QEvent* event)
///
void q_svgrenderer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
/// @param signal QMetaMethod*
///
void q_svgrenderer_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_svgrenderer_super_connect_notify` instead
///
#define q_svgrenderer_qbase_connect_notify q_svgrenderer_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param signal QMetaMethod*
///
void q_svgrenderer_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback void func(QSvgRenderer* self, QMetaMethod* signal)
///
void q_svgrenderer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
/// @param signal QMetaMethod*
///
void q_svgrenderer_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_svgrenderer_super_disconnect_notify` instead
///
#define q_svgrenderer_qbase_disconnect_notify q_svgrenderer_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param signal QMetaMethod*
///
void q_svgrenderer_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback void func(QSvgRenderer* self, QMetaMethod* signal)
///
void q_svgrenderer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
///
QObject* q_svgrenderer_sender(void* self);

/// @warning DEPRECATED: Use `q_svgrenderer_super_sender` instead
///
#define q_svgrenderer_qbase_sender q_svgrenderer_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
///
QObject* q_svgrenderer_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback QObject* func()
///
void q_svgrenderer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
///
int32_t q_svgrenderer_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_svgrenderer_super_sender_signal_index` instead
///
#define q_svgrenderer_qbase_sender_signal_index q_svgrenderer_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
///
int32_t q_svgrenderer_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback int32_t func()
///
void q_svgrenderer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
/// @param signal const char*
///
int32_t q_svgrenderer_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_svgrenderer_super_receivers` instead
///
#define q_svgrenderer_qbase_receivers q_svgrenderer_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param signal const char*
///
int32_t q_svgrenderer_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback int32_t func(QSvgRenderer* self, const char* signal)
///
void q_svgrenderer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSvgRenderer*
/// @param signal QMetaMethod*
///
bool q_svgrenderer_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_svgrenderer_super_is_signal_connected` instead
///
#define q_svgrenderer_qbase_is_signal_connected q_svgrenderer_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param signal QMetaMethod*
///
bool q_svgrenderer_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgRenderer*
/// @param callback bool func(QSvgRenderer* self, QMetaMethod* signal)
///
void q_svgrenderer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSvgRenderer*
/// @param callback void func(QSvgRenderer* self, const char* objectName)
///
void q_svgrenderer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#dtor.QSvgRenderer)
///
/// Delete this object from C++ memory.
///
/// @param self QSvgRenderer*
///
void q_svgrenderer_delete(void* self);

#endif
