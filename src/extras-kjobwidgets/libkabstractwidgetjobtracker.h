#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKABSTRACTWIDGETJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKABSTRACTWIDGETJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kabstractwidgetjobtracker.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KAbstractWidgetJobTracker*
const QMetaObject* k_abstractwidgetjobtracker_meta_object(void* self);

/// @param self KAbstractWidgetJobTracker*
/// @param param1 const char*
void* k_abstractwidgetjobtracker_metacast(void* self, const char* param1);

/// @param self KAbstractWidgetJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_abstractwidgetjobtracker_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_abstractwidgetjobtracker_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#registerJob)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#unregisterJob)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#widget)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
QWidget* k_abstractwidgetjobtracker_widget(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#setStopOnClose)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param stopOnClose bool
void k_abstractwidgetjobtracker_set_stop_on_close(void* self, void* job, bool stopOnClose);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopOnClose)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
bool k_abstractwidgetjobtracker_stop_on_close(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#setAutoDelete)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param autoDelete bool
void k_abstractwidgetjobtracker_set_auto_delete(void* self, void* job, bool autoDelete);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#autoDelete)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
bool k_abstractwidgetjobtracker_auto_delete(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_stopped(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_stopped(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_suspend(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_suspend(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_resume(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_resume(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_abstractwidgetjobtracker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_abstractwidgetjobtracker_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KAbstractWidgetJobTracker*
/// @param event QEvent*
bool k_abstractwidgetjobtracker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KAbstractWidgetJobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_abstractwidgetjobtracker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAbstractWidgetJobTracker*
const char* k_abstractwidgetjobtracker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KAbstractWidgetJobTracker*
/// @param name char*
void k_abstractwidgetjobtracker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KAbstractWidgetJobTracker*
bool k_abstractwidgetjobtracker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KAbstractWidgetJobTracker*
bool k_abstractwidgetjobtracker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KAbstractWidgetJobTracker*
bool k_abstractwidgetjobtracker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KAbstractWidgetJobTracker*
bool k_abstractwidgetjobtracker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KAbstractWidgetJobTracker*
/// @param b bool
bool k_abstractwidgetjobtracker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KAbstractWidgetJobTracker*
QThread* k_abstractwidgetjobtracker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAbstractWidgetJobTracker*
/// @param thread QThread*
bool k_abstractwidgetjobtracker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAbstractWidgetJobTracker*
/// @param interval int
int32_t k_abstractwidgetjobtracker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAbstractWidgetJobTracker*
/// @param id int
void k_abstractwidgetjobtracker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAbstractWidgetJobTracker*
/// @param id enum Qt__TimerId
void k_abstractwidgetjobtracker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KAbstractWidgetJobTracker*
libqt_list /* of QObject* */ k_abstractwidgetjobtracker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KAbstractWidgetJobTracker*
/// @param parent QObject*
void k_abstractwidgetjobtracker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KAbstractWidgetJobTracker*
/// @param filterObj QObject*
void k_abstractwidgetjobtracker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KAbstractWidgetJobTracker*
/// @param obj QObject*
void k_abstractwidgetjobtracker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_abstractwidgetjobtracker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAbstractWidgetJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_abstractwidgetjobtracker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_abstractwidgetjobtracker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_abstractwidgetjobtracker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KAbstractWidgetJobTracker*
void k_abstractwidgetjobtracker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KAbstractWidgetJobTracker*
void k_abstractwidgetjobtracker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KAbstractWidgetJobTracker*
/// @param name const char*
/// @param value QVariant*
bool k_abstractwidgetjobtracker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KAbstractWidgetJobTracker*
/// @param name const char*
QVariant* k_abstractwidgetjobtracker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAbstractWidgetJobTracker*
const char** k_abstractwidgetjobtracker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAbstractWidgetJobTracker*
QBindingStorage* k_abstractwidgetjobtracker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAbstractWidgetJobTracker*
const QBindingStorage* k_abstractwidgetjobtracker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractWidgetJobTracker*
void k_abstractwidgetjobtracker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self)
void k_abstractwidgetjobtracker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KAbstractWidgetJobTracker*
QObject* k_abstractwidgetjobtracker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KAbstractWidgetJobTracker*
/// @param classname const char*
bool k_abstractwidgetjobtracker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KAbstractWidgetJobTracker*
void k_abstractwidgetjobtracker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAbstractWidgetJobTracker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_abstractwidgetjobtracker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAbstractWidgetJobTracker*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_abstractwidgetjobtracker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_abstractwidgetjobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAbstractWidgetJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_abstractwidgetjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractWidgetJobTracker*
/// @param param1 QObject*
void k_abstractwidgetjobtracker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, QObject* param1)
void k_abstractwidgetjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, const char* objectName)
void k_abstractwidgetjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#dtor.KAbstractWidgetJobTracker)
///
/// Delete this object from C++ memory.
///
/// @param self KAbstractWidgetJobTracker*
void k_abstractwidgetjobtracker_delete(void* self);

#endif
