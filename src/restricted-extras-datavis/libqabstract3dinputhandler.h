#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DINPUTHANDLER_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DINPUTHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstract3DInputHandler*
///
const QMetaObject* q_abstract3dinputhandler_meta_object(const void* self);

/// @param self QAbstract3DInputHandler*
/// @param param1 const char*
///
void* q_abstract3dinputhandler_metacast(void* self, const char* param1);

/// @param self QAbstract3DInputHandler*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstract3dinputhandler_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstract3dinputhandler_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#mouseDoubleClickEvent)
///
/// @param self QAbstract3DInputHandler*
/// @param event QMouseEvent*
///
void q_abstract3dinputhandler_mouse_double_click_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#touchEvent)
///
/// @param self QAbstract3DInputHandler*
/// @param event QTouchEvent*
///
void q_abstract3dinputhandler_touch_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#mousePressEvent)
///
/// @param self QAbstract3DInputHandler*
/// @param event QMouseEvent*
/// @param mousePos QPoint*
///
void q_abstract3dinputhandler_mouse_press_event(void* self, void* event, const void* mousePos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#mouseReleaseEvent)
///
/// @param self QAbstract3DInputHandler*
/// @param event QMouseEvent*
/// @param mousePos QPoint*
///
void q_abstract3dinputhandler_mouse_release_event(void* self, void* event, const void* mousePos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#mouseMoveEvent)
///
/// @param self QAbstract3DInputHandler*
/// @param event QMouseEvent*
/// @param mousePos QPoint*
///
void q_abstract3dinputhandler_mouse_move_event(void* self, void* event, const void* mousePos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#wheelEvent)
///
/// @param self QAbstract3DInputHandler*
/// @param event QWheelEvent*
///
void q_abstract3dinputhandler_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#inputView)
///
/// @param self const QAbstract3DInputHandler*
///
/// @return enum QAbstract3DInputHandler__InputView
///
int32_t q_abstract3dinputhandler_input_view(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#setInputView)
///
/// @param self QAbstract3DInputHandler*
/// @param inputView enum QAbstract3DInputHandler__InputView
///
void q_abstract3dinputhandler_set_input_view(void* self, int32_t inputView);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#inputPosition)
///
/// @param self const QAbstract3DInputHandler*
///
QPoint* q_abstract3dinputhandler_input_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#setInputPosition)
///
/// @param self QAbstract3DInputHandler*
/// @param position QPoint*
///
void q_abstract3dinputhandler_set_input_position(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#scene)
///
/// @param self const QAbstract3DInputHandler*
///
Q3DScene* q_abstract3dinputhandler_scene(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#setScene)
///
/// @param self QAbstract3DInputHandler*
/// @param scene Q3DScene*
///
void q_abstract3dinputhandler_set_scene(void* self, void* scene);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#positionChanged)
///
/// @param self QAbstract3DInputHandler*
/// @param position QPoint*
///
void q_abstract3dinputhandler_position_changed(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#positionChanged)
///
/// @param self QAbstract3DInputHandler*
/// @param callback void func(QAbstract3DInputHandler* self, QPoint* position)
///
void q_abstract3dinputhandler_on_position_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#inputViewChanged)
///
/// @param self QAbstract3DInputHandler*
/// @param view enum QAbstract3DInputHandler__InputView
///
void q_abstract3dinputhandler_input_view_changed(void* self, int32_t view);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#inputViewChanged)
///
/// @param self QAbstract3DInputHandler*
/// @param callback void func(QAbstract3DInputHandler* self, enum QAbstract3DInputHandler__InputView view)
///
void q_abstract3dinputhandler_on_input_view_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#sceneChanged)
///
/// @param self QAbstract3DInputHandler*
/// @param scene Q3DScene*
///
void q_abstract3dinputhandler_scene_changed(void* self, void* scene);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#sceneChanged)
///
/// @param self QAbstract3DInputHandler*
/// @param callback void func(QAbstract3DInputHandler* self, Q3DScene* scene)
///
void q_abstract3dinputhandler_on_scene_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstract3dinputhandler_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstract3dinputhandler_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QAbstract3DInputHandler*
/// @param event QEvent*
///
bool q_abstract3dinputhandler_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QAbstract3DInputHandler*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstract3dinputhandler_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DInputHandler*
///
const char* q_abstract3dinputhandler_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstract3DInputHandler*
/// @param name const char*
///
void q_abstract3dinputhandler_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstract3DInputHandler*
///
bool q_abstract3dinputhandler_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstract3DInputHandler*
///
bool q_abstract3dinputhandler_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstract3DInputHandler*
///
bool q_abstract3dinputhandler_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstract3DInputHandler*
///
bool q_abstract3dinputhandler_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstract3DInputHandler*
/// @param b bool
///
bool q_abstract3dinputhandler_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstract3DInputHandler*
///
QThread* q_abstract3dinputhandler_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstract3DInputHandler*
/// @param thread QThread*
///
bool q_abstract3dinputhandler_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DInputHandler*
/// @param interval int
///
int32_t q_abstract3dinputhandler_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DInputHandler*
/// @param time int64_t of nanoseconds
///
int32_t q_abstract3dinputhandler_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstract3DInputHandler*
/// @param id int
///
void q_abstract3dinputhandler_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstract3DInputHandler*
/// @param id enum Qt__TimerId
///
void q_abstract3dinputhandler_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstract3DInputHandler*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstract3dinputhandler_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstract3DInputHandler*
/// @param parent QObject*
///
void q_abstract3dinputhandler_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstract3DInputHandler*
/// @param filterObj QObject*
///
void q_abstract3dinputhandler_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstract3DInputHandler*
/// @param obj QObject*
///
void q_abstract3dinputhandler_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstract3dinputhandler_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstract3dinputhandler_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstract3DInputHandler*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstract3dinputhandler_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3dinputhandler_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstract3dinputhandler_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DInputHandler*
///
bool q_abstract3dinputhandler_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DInputHandler*
/// @param receiver QObject*
///
bool q_abstract3dinputhandler_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstract3dinputhandler_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstract3DInputHandler*
///
void q_abstract3dinputhandler_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstract3DInputHandler*
///
void q_abstract3dinputhandler_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstract3DInputHandler*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstract3dinputhandler_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstract3DInputHandler*
/// @param name const char*
///
QVariant* q_abstract3dinputhandler_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstract3DInputHandler*
///
const char** q_abstract3dinputhandler_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstract3DInputHandler*
///
QBindingStorage* q_abstract3dinputhandler_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstract3DInputHandler*
///
const QBindingStorage* q_abstract3dinputhandler_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DInputHandler*
///
void q_abstract3dinputhandler_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DInputHandler*
/// @param callback void func(QAbstract3DInputHandler* self)
///
void q_abstract3dinputhandler_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QAbstract3DInputHandler*
///
QObject* q_abstract3dinputhandler_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstract3DInputHandler*
/// @param classname const char*
///
bool q_abstract3dinputhandler_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstract3DInputHandler*
///
void q_abstract3dinputhandler_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DInputHandler*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstract3dinputhandler_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DInputHandler*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstract3dinputhandler_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstract3dinputhandler_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstract3dinputhandler_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstract3DInputHandler*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstract3dinputhandler_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DInputHandler*
/// @param signal const char*
///
bool q_abstract3dinputhandler_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DInputHandler*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstract3dinputhandler_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DInputHandler*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3dinputhandler_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DInputHandler*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3dinputhandler_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DInputHandler*
/// @param param1 QObject*
///
void q_abstract3dinputhandler_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DInputHandler*
/// @param callback void func(QAbstract3DInputHandler* self, QObject* param1)
///
void q_abstract3dinputhandler_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstract3DInputHandler*
/// @param callback void func(QAbstract3DInputHandler* self, const char* objectName)
///
void q_abstract3dinputhandler_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#dtor.QAbstract3DInputHandler)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstract3DInputHandler*
///
void q_abstract3dinputhandler_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#public-types)

typedef enum {
    QABSTRACT3DINPUTHANDLER_INPUTVIEW_INPUTVIEWNONE = 0,
    QABSTRACT3DINPUTHANDLER_INPUTVIEW_INPUTVIEWONPRIMARY = 1,
    QABSTRACT3DINPUTHANDLER_INPUTVIEW_INPUTVIEWONSECONDARY = 2
} QAbstract3DInputHandler__InputView;

#endif
