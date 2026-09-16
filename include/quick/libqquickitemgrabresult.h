#pragma once
#ifndef QUICK_LIBQQUICKITEMGRABRESULT_H
#define QUICK_LIBQQUICKITEMGRABRESULT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitemgrabresult.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickItemGrabResult*
///
const QMetaObject* q_quickitemgrabresult_meta_object(void* self);

/// @param self QQuickItemGrabResult*
/// @param param1 const char*
///
void* q_quickitemgrabresult_metacast(void* self, const char* param1);

/// @param self QQuickItemGrabResult*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickitemgrabresult_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickitemgrabresult_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitemgrabresult.html#image)
///
/// @param self QQuickItemGrabResult*
///
QImage* q_quickitemgrabresult_image(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitemgrabresult.html#url)
///
/// @param self QQuickItemGrabResult*
///
QUrl* q_quickitemgrabresult_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitemgrabresult.html#saveToFile)
///
/// @param self QQuickItemGrabResult*
/// @param fileName const char*
///
bool q_quickitemgrabresult_save_to_file(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitemgrabresult.html#saveToFile)
///
/// @param self QQuickItemGrabResult*
/// @param fileName QUrl*
///
bool q_quickitemgrabresult_save_to_file2(void* self, void* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitemgrabresult.html#ready)
///
/// @param self QQuickItemGrabResult*
///
void q_quickitemgrabresult_ready(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitemgrabresult.html#ready)
///
/// @param self QQuickItemGrabResult*
/// @param callback void func(QQuickItemGrabResult* self)
///
void q_quickitemgrabresult_on_ready(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickitemgrabresult_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickitemgrabresult_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QQuickItemGrabResult*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickitemgrabresult_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickItemGrabResult*
///
const char* q_quickitemgrabresult_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickItemGrabResult*
/// @param name const char*
///
void q_quickitemgrabresult_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickItemGrabResult*
///
bool q_quickitemgrabresult_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickItemGrabResult*
///
bool q_quickitemgrabresult_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickItemGrabResult*
///
bool q_quickitemgrabresult_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickItemGrabResult*
///
bool q_quickitemgrabresult_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickItemGrabResult*
/// @param b bool
///
bool q_quickitemgrabresult_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickItemGrabResult*
///
QThread* q_quickitemgrabresult_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickItemGrabResult*
/// @param thread QThread*
///
bool q_quickitemgrabresult_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickItemGrabResult*
/// @param interval int
///
int32_t q_quickitemgrabresult_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickItemGrabResult*
/// @param time int64_t of nanoseconds
///
int32_t q_quickitemgrabresult_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickItemGrabResult*
/// @param id int
///
void q_quickitemgrabresult_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickItemGrabResult*
/// @param id enum Qt__TimerId
///
void q_quickitemgrabresult_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickItemGrabResult*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickitemgrabresult_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickItemGrabResult*
/// @param parent QObject*
///
void q_quickitemgrabresult_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickItemGrabResult*
/// @param filterObj QObject*
///
void q_quickitemgrabresult_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickItemGrabResult*
/// @param obj QObject*
///
void q_quickitemgrabresult_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickitemgrabresult_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickitemgrabresult_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickItemGrabResult*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickitemgrabresult_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickitemgrabresult_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickitemgrabresult_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItemGrabResult*
///
bool q_quickitemgrabresult_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItemGrabResult*
/// @param receiver QObject*
///
bool q_quickitemgrabresult_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickitemgrabresult_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickItemGrabResult*
///
void q_quickitemgrabresult_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickItemGrabResult*
///
void q_quickitemgrabresult_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickItemGrabResult*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickitemgrabresult_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickItemGrabResult*
/// @param name const char*
///
QVariant* q_quickitemgrabresult_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickItemGrabResult*
///
const char** q_quickitemgrabresult_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickItemGrabResult*
///
QBindingStorage* q_quickitemgrabresult_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickItemGrabResult*
///
const QBindingStorage* q_quickitemgrabresult_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickItemGrabResult*
///
void q_quickitemgrabresult_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickItemGrabResult*
/// @param callback void func(QQuickItemGrabResult* self)
///
void q_quickitemgrabresult_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickItemGrabResult*
///
QObject* q_quickitemgrabresult_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickItemGrabResult*
/// @param classname const char*
///
bool q_quickitemgrabresult_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickItemGrabResult*
///
void q_quickitemgrabresult_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickItemGrabResult*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickitemgrabresult_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickItemGrabResult*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickitemgrabresult_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quickitemgrabresult_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickitemgrabresult_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickItemGrabResult*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickitemgrabresult_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItemGrabResult*
/// @param signal const char*
///
bool q_quickitemgrabresult_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItemGrabResult*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickitemgrabresult_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItemGrabResult*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickitemgrabresult_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItemGrabResult*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickitemgrabresult_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickItemGrabResult*
/// @param param1 QObject*
///
void q_quickitemgrabresult_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickItemGrabResult*
/// @param callback void func(QQuickItemGrabResult* self, QObject* param1)
///
void q_quickitemgrabresult_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickItemGrabResult*
/// @param callback void func(QQuickItemGrabResult* self, const char* objectName)
///
void q_quickitemgrabresult_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitemgrabresult.html#dtor.QQuickItemGrabResult)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickItemGrabResult*
///
void q_quickitemgrabresult_delete(void* self);

#endif
