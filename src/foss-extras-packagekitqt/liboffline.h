#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQT_QT6C_LIBOFFLINE_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQT_QT6C_LIBOFFLINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self PackageKit__Offline*
///
const QMetaObject* q_packagekit__offline_meta_object(void* self);

/// @param self PackageKit__Offline*
/// @param param1 const char*
///
void* q_packagekit__offline_metacast(void* self, const char* param1);

/// @param self PackageKit__Offline*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_packagekit__offline_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_packagekit__offline_tr(const char* s);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
///
libqt_map /* of const char* to QVariant* */ q_packagekit__offline_prepared_upgrade(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
///
/// @return enum PackageKit__Offline__Action
///
int32_t q_packagekit__offline_trigger_action(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
///
bool q_packagekit__offline_update_prepared(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
///
bool q_packagekit__offline_update_triggered(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
///
bool q_packagekit__offline_upgrade_prepared(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
///
bool q_packagekit__offline_upgrade_triggered(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
///
void q_packagekit__offline_get_prepared(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
/// @param updates const char**
///
void q_packagekit__offline_prepared_updates(void* self, const char* updates[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
/// @param callback void func(PackageKit__Offline* self, const char** updates)
///
void q_packagekit__offline_on_prepared_updates(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
///
void q_packagekit__offline_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Offline*
/// @param callback void func(PackageKit__Offline* self)
///
void q_packagekit__offline_on_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_packagekit__offline_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_packagekit__offline_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self PackageKit__Offline*
/// @param event QEvent*
///
bool q_packagekit__offline_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self PackageKit__Offline*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_packagekit__offline_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self PackageKit__Offline*
///
const char* q_packagekit__offline_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self PackageKit__Offline*
/// @param name char*
///
void q_packagekit__offline_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self PackageKit__Offline*
///
bool q_packagekit__offline_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self PackageKit__Offline*
///
bool q_packagekit__offline_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self PackageKit__Offline*
///
bool q_packagekit__offline_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self PackageKit__Offline*
///
bool q_packagekit__offline_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self PackageKit__Offline*
/// @param b bool
///
bool q_packagekit__offline_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self PackageKit__Offline*
///
QThread* q_packagekit__offline_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self PackageKit__Offline*
/// @param thread QThread*
///
bool q_packagekit__offline_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self PackageKit__Offline*
/// @param interval int
///
int32_t q_packagekit__offline_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self PackageKit__Offline*
/// @param id int
///
void q_packagekit__offline_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self PackageKit__Offline*
/// @param id enum Qt__TimerId
///
void q_packagekit__offline_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self PackageKit__Offline*
///
libqt_list /* of QObject* */ q_packagekit__offline_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self PackageKit__Offline*
/// @param parent QObject*
///
void q_packagekit__offline_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self PackageKit__Offline*
/// @param filterObj QObject*
///
void q_packagekit__offline_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self PackageKit__Offline*
/// @param obj QObject*
///
void q_packagekit__offline_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_packagekit__offline_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self PackageKit__Offline*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_packagekit__offline_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_packagekit__offline_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_packagekit__offline_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self PackageKit__Offline*
///
void q_packagekit__offline_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self PackageKit__Offline*
///
void q_packagekit__offline_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self PackageKit__Offline*
/// @param name const char*
/// @param value QVariant*
///
bool q_packagekit__offline_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self PackageKit__Offline*
/// @param name const char*
///
QVariant* q_packagekit__offline_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self PackageKit__Offline*
///
const char** q_packagekit__offline_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self PackageKit__Offline*
///
QBindingStorage* q_packagekit__offline_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self PackageKit__Offline*
///
const QBindingStorage* q_packagekit__offline_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Offline*
///
void q_packagekit__offline_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Offline*
/// @param callback void func(PackageKit__Offline* self)
///
void q_packagekit__offline_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self PackageKit__Offline*
///
QObject* q_packagekit__offline_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self PackageKit__Offline*
/// @param classname const char*
///
bool q_packagekit__offline_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self PackageKit__Offline*
///
void q_packagekit__offline_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self PackageKit__Offline*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_packagekit__offline_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self PackageKit__Offline*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_packagekit__offline_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_packagekit__offline_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self PackageKit__Offline*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_packagekit__offline_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Offline*
/// @param param1 QObject*
///
void q_packagekit__offline_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Offline*
/// @param callback void func(PackageKit__Offline* self, QObject* param1)
///
void q_packagekit__offline_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self PackageKit__Offline*
/// @param callback void func(PackageKit__Offline* self, const char* objectName)
///
void q_packagekit__offline_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Delete this object from C++ memory.
///
/// @param self PackageKit__Offline*
///
void q_packagekit__offline_delete(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_OFFLINE_ACTION_ACTIONUNSET = 0,
    PACKAGEKIT_OFFLINE_ACTION_ACTIONPOWEROFF = 1,
    PACKAGEKIT_OFFLINE_ACTION_ACTIONREBOOT = 2
} PackageKit__Offline__Action;

#endif
